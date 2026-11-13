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

# Must stay in sync with AppendTextCodePoint() in PTBRMessages.cpp.
SUPPORTED_ACCENTS = set(
    "ÀÁÂÃàáâãÇçÈÉÊËèéêëÍíÓÔÕóôõÚÜúü"
)
ENTRY_RE = re.compile(
    r'\{\s*(0x[0-9A-Fa-f]{4})\s*,\s*R"PTBR\((.*?)\)PTBR"\s*,\s*(0x[0-9A-Fa-f]{2})\s*\}',
    re.S,
)
TAG_RE = re.compile(r"<([^<>]+)>")


def fail(message):
    raise SystemExit("FAIL: " + message)


def is_hex_byte(value):
    value = value.removeprefix("0x").removeprefix("0X")
    return bool(re.fullmatch(r"[0-9A-Fa-f]{1,2}", value))


def validate_tag(tag, filename):
    if tag in SUPPORTED_TAGS:
        return
    if tag.startswith("COLOR:"):
        if tag[6:] not in COLORS:
            fail(f"{filename}: unsupported color tag <{tag}>")
        return
    for prefix in ONE_BYTE_TAGS:
        if tag.startswith(prefix):
            if not is_hex_byte(tag[len(prefix):]):
                fail(f"{filename}: malformed byte token <{tag}>")
            return
    for prefix in TWO_BYTE_TAGS | THREE_BYTE_TAGS:
        if tag.startswith(prefix):
            values = tag[len(prefix):].split(",")
            expected = 3 if prefix in THREE_BYTE_TAGS else 2
            if len(values) != expected or any(not is_hex_byte(v) for v in values):
                fail(f"{filename}: malformed {expected}-byte token <{tag}>")
            return
    fail(f"{filename}: unsupported message tag <{tag}>")


def main():
    all_ids = []
    total_entries = 0

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

            if body.count("<") != body.count(">"):
                fail(f"{filename} {text_id}: unbalanced message tag delimiters")
            for tag in TAG_RE.findall(body):
                validate_tag(tag, filename)

        all_ids.extend(ids)
        total_entries += len(entries)

    if len(all_ids) != len(set(all_ids)):
        fail("duplicate message IDs across chunks")
    if total_entries != EXPECTED_MESSAGES:
        fail(f"expected {EXPECTED_MESSAGES} messages, found {total_entries}")

    print(
        f"OK: {total_entries} complete messages; IDs unique, ordered and in range; "
        "textbox metadata, runtime-supported accents and token parameters are valid."
    )


if __name__ == "__main__":
    main()
