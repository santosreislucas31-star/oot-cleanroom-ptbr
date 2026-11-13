"""Static validation for the bundled PT-BR message table and runtime text compiler.

Run from the repository root:
    python -m ports.soh.validate_ptbr
"""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[2]
BUNDLE = ROOT / "ports" / "soh" / "ptbr"
CHUNKS = (
    ("PTBRData_0000_0FFF.cpp", 0x0000, 0x0FFF),
    ("PTBRData_1000_1FFF.cpp", 0x1000, 0x1FFF),
    ("PTBRData_2000_3FFF.cpp", 0x2000, 0x3FFF),
    ("PTBRData_4000_FFFF.cpp", 0x4000, 0xFFFF),
)
EXPECTED_MESSAGES = 2163
FONT_MESSAGE_BUFFER_SIZE = 1280
DECODED_MESSAGE_BUFFER_SIZE = 200

SUPPORTED_TAGS = {
    "NEWLINE", "END", "BOX_BREAK", "QUICKTEXT_ENABLE", "QUICKTEXT_DISABLE",
    "PERSISTENT", "EVENT", "AWAIT_BUTTON_PRESS", "NAME", "OCARINA",
    "MARATHON_TIME", "RACE_TIME", "POINTS", "TOKENS", "UNSKIPPABLE",
    "TWO_CHOICE", "THREE_CHOICE", "FISH_INFO", "TIME",
}
COLORS = {
    "DEFAULT", "RED", "ADJUSTABLE", "BLUE", "LIGHTBLUE",
    "PURPLE", "YELLOW", "BLACK",
}
ONE_BYTE_TAGS = {
    "SHIFT:", "BOX_BREAK_DELAYED:", "FADE:", "ITEM_ICON:",
    "TEXT_SPEED:", "HIGHSCORE:", "BYTE:",
}
TWO_BYTE_TAGS = {"TEXTID:", "FADE2:", "SFX:"}
THREE_BYTE_TAGS = {"BACKGROUND:"}

# Explicit raw bytes used by the source bundle: the vanilla é glyph and
# the controller/button glyphs in the OoT message font.
SAFE_RAW_BYTES = {
    0x96, 0x9F, 0xA0, 0xA1, 0xA2, 0xA3, 0xA4,
    0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA,
}

# Must stay in sync with AppendTextCodePoint() in PTBRMessages.cpp.
SUPPORTED_ACCENTS = set(
    "ÀÁÂÃàáâãÇçÈÉÊËèéêëÍíÓÔÕóôõÚÜúü"
)
ENTRY_RE = re.compile(
    r'\{\s*(0x[0-9A-Fa-f]{4})\s*,\s*R"PTBR\((.*?)\)PTBR"\s*,\s*(0x[0-9A-Fa-f]{2})\s*\}',
    re.S,
)
TAG_RE = re.compile(r"<([^<>]+)>")
MESSAGE_TERMINATORS = {"END", "BOX_BREAK", "EVENT"}


def fail(message):
    raise SystemExit("FAIL: " + message)


def parse_hex_byte(value):
    value = value.removeprefix("0x").removeprefix("0X")
    if not re.fullmatch(r"[0-9A-Fa-f]{1,2}", value):
        return None
    return int(value, 16)


def tag_bytes(tag, filename, text_id):
    """Return the number of bytes emitted by the C++ CompileTokens()."""
    if tag in SUPPORTED_TAGS:
        return 1
    if tag.startswith("COLOR:"):
        if tag[6:] not in COLORS:
            fail(f"{filename} {text_id}: unsupported color tag <{tag}>")
        return 2

    for prefix in ONE_BYTE_TAGS:
        if tag.startswith(prefix):
            value = parse_hex_byte(tag[len(prefix):])
            if value is None:
                fail(f"{filename} {text_id}: malformed byte token <{tag}>")
            if prefix == "BYTE:" and value not in SAFE_RAW_BYTES:
                fail(f"{filename} {text_id}: unsafe or unknown raw font byte <{tag}>")
            if prefix == "ITEM_ICON:" and value > 0x77:
                fail(f"{filename} {text_id}: item icon outside known font range <{tag}>")
            if prefix == "HIGHSCORE:" and value > 0x06:
                fail(f"{filename} {text_id}: unknown high-score slot <{tag}>")
            return 2

    for prefix in TWO_BYTE_TAGS | THREE_BYTE_TAGS:
        if tag.startswith(prefix):
            values = tag[len(prefix):].split(",")
            expected = 3 if prefix in THREE_BYTE_TAGS else 2
            parsed = [parse_hex_byte(value) for value in values]
            if len(values) != expected or any(value is None for value in parsed):
                fail(f"{filename} {text_id}: malformed {expected}-byte token <{tag}>")
            return expected + 1

    fail(f"{filename} {text_id}: unsupported message tag <{tag}>")


def decoded_expansion(tag, emitted_bytes):
    """Conservative decoded-buffer cost after dynamic message substitutions."""
    if tag == "NAME":
        return 8  # player-name field has eight slots
    if tag in {"TIME", "MARATHON_TIME", "RACE_TIME"}:
        return 5  # digits plus separator
    if tag == "POINTS":
        return 4
    if tag == "TOKENS":
        return 3
    if tag == "FISH_INFO":
        return 2
    if tag.startswith("HIGHSCORE:"):
        return 8  # reserve for the longest formatted record
    return emitted_bytes


def validate_message_body(body, filename, text_id):
    if body.count("<") != body.count(">"):
        fail(f"{filename} {text_id}: unbalanced message tag delimiters")

    compiled_bytes = 0
    decoded_page_bytes = 0
    text_id_targets = []
    last_tag = None
    position = 0

    for match in TAG_RE.finditer(body):
        plain = body[position:match.start()]
        # Accepted accented codepoints are transliterated to one ASCII byte.
        compiled_bytes += len(plain)
        decoded_page_bytes += len(plain)

        tag = match.group(1)
        emitted = tag_bytes(tag, filename, text_id)
        compiled_bytes += emitted
        decoded_page_bytes += decoded_expansion(tag, emitted)
        last_tag = tag

        if tag.startswith("TEXTID:"):
            values = [parse_hex_byte(value) for value in tag[7:].split(",")]
            text_id_targets.append((values[0] << 8) | values[1])

        is_terminator = (
            tag in MESSAGE_TERMINATORS
            or tag.startswith("BOX_BREAK_DELAYED:")
            or tag.startswith("TEXTID:")
        )
        if is_terminator:
            if decoded_page_bytes > DECODED_MESSAGE_BUFFER_SIZE:
                fail(
                    f"{filename} {text_id}: decoded text page needs "
                    f"{decoded_page_bytes} bytes (buffer is {DECODED_MESSAGE_BUFFER_SIZE})"
                )
            decoded_page_bytes = 0

        position = match.end()

    tail = body[position:]
    compiled_bytes += len(tail)
    decoded_page_bytes += len(tail)

    if last_tag not in {"END"} and not (last_tag and last_tag.startswith("TEXTID:")):
        fail(f"{filename} {text_id}: message does not end with END or TEXTID")

    if decoded_page_bytes:
        fail(f"{filename} {text_id}: final message page has no recognized terminator")

    if compiled_bytes >= FONT_MESSAGE_BUFFER_SIZE:
        fail(
            f"{filename} {text_id}: compiled message needs {compiled_bytes} bytes "
            f"(font buffer is {FONT_MESSAGE_BUFFER_SIZE})"
        )

    return text_id_targets, compiled_bytes


def main():
    all_ids = []
    all_references = []
    total_entries = 0
    largest_message = (0, None)

    for filename, min_id, max_id in CHUNKS:
        source = (BUNDLE / filename).read_text(encoding="utf-8")
        entries = list(ENTRY_RE.finditer(source))
        ids = [int(match.group(1), 16) for match in entries]

        if not entries:
            fail(f"no complete message entries found in {filename}")
        if len(ids) != len(re.findall(r"^\s*0x[0-9A-Fa-f]{4},$", source, re.M)):
            fail(f"could not parse every message entry in {filename}")
        if ids != sorted(ids) or len(ids) != len(set(ids)):
            fail(f"message IDs are unsorted or duplicated in {filename}")
        if any(not min_id <= value <= max_id for value in ids):
            fail(f"message ID outside the declared range in {filename}")

        for match in entries:
            text_id = match.group(1)
            body = match.group(2)
            type_pos = int(match.group(3), 16)
            box_type, position = type_pos >> 4, type_pos & 0x0F

            if box_type not in {0, 1, 2, 3, 4, 5, 11}:
                fail(f"{filename} {text_id}: unsupported textbox type 0x{box_type:X}")
            if position not in {0, 1, 2, 3}:
                fail(f"{filename} {text_id}: unsupported textbox position {position}")

            unsupported_chars = sorted({
                char for char in body
                if ord(char) > 0x7F and char not in SUPPORTED_ACCENTS
            })
            if unsupported_chars:
                rendered = ", ".join(f"U+{ord(char):04X} {char!r}" for char in unsupported_chars)
                fail(f"{filename} {text_id}: characters not handled by runtime converter: {rendered}")

            references, compiled_bytes = validate_message_body(body, filename, text_id)
            all_references.extend((text_id, target) for target in references)
            if compiled_bytes > largest_message[0]:
                largest_message = (compiled_bytes, text_id)

        all_ids.extend(ids)
        total_entries += len(entries)

    if len(all_ids) != len(set(all_ids)):
        fail("duplicate message IDs across chunks")
    if total_entries != EXPECTED_MESSAGES:
        fail(f"expected {EXPECTED_MESSAGES} messages, found {total_entries}")

    id_set = set(all_ids)
    missing_targets = [
        (source, target) for source, target in all_references
        if target not in id_set
    ]
    if missing_targets:
        source, target = missing_targets[0]
        fail(f"message {source} references missing PT-BR message 0x{target:04X}")

    print(
        f"OK: {total_entries} messages; IDs and TEXTID links valid; "
        f"tokens and raw glyph bytes safe; decoded pages fit {DECODED_MESSAGE_BUFFER_SIZE} bytes; "
        f"largest compiled message is {largest_message[0]} bytes ({largest_message[1]}), "
        f"font buffer is {FONT_MESSAGE_BUFFER_SIZE} bytes."
    )


if __name__ == "__main__":
    main()
