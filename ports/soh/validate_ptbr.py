"""Static validation for the bundled Geraldo Cruzeiro PT-BR message table.

Run from the repository root:
    python -m ports.soh.validate_ptbr
"""
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[2]
BUNDLE = ROOT / "ports" / "soh" / "ptbr"
CHUNKS = (
    "PTBRData_0000_0FFF.cpp",
    "PTBRData_1000_1FFF.cpp",
    "PTBRData_2000_3FFF.cpp",
    "PTBRData_4000_FFFF.cpp",
)
SUPPORTED_TAGS = {
    "NEWLINE", "END", "BOX_BREAK", "QUICKTEXT_ENABLE", "QUICKTEXT_DISABLE",
    "PERSISTENT", "EVENT", "AWAIT_BUTTON_PRESS", "NAME", "OCARINA",
    "MARATHON_TIME", "RACE_TIME", "POINTS", "TOKENS", "UNSKIPPABLE",
    "TWO_CHOICE", "THREE_CHOICE", "FISH_INFO", "TIME",
}
PREFIX_TAGS = {
    "COLOR:", "SHIFT:", "TEXTID:", "BOX_BREAK_DELAYED:", "FADE:",
    "FADE2:", "SFX:", "ITEM_ICON:", "TEXT_SPEED:", "BACKGROUND:",
    "HIGHSCORE:", "BYTE:",
}


def main():
    all_ids = []
    unknown = set()
    for filename in CHUNKS:
        source = (BUNDLE / filename).read_text(encoding="utf-8")
        ids = [int(value, 16) for value in re.findall(r"^\s*(0x[0-9A-Fa-f]{4}),$", source, re.M)]
        if not ids:
            raise SystemExit(f"FAIL: no message IDs found in {filename}")
        if ids != sorted(ids) or len(ids) != len(set(ids)):
            raise SystemExit(f"FAIL: IDs are unsorted or duplicated in {filename}")
        all_ids.extend(ids)
        for tag in re.findall(r"<([^<>]+)>", source):
            if tag in SUPPORTED_TAGS:
                continue
            if any(tag.startswith(prefix) for prefix in PREFIX_TAGS):
                continue
            unknown.add(tag)
    if len(all_ids) != len(set(all_ids)):
        raise SystemExit("FAIL: duplicate message IDs across chunks")
    if unknown:
        raise SystemExit("FAIL: unsupported message tags: " + ", ".join(sorted(unknown)))
    expected = 2163
    if len(all_ids) != expected:
        raise SystemExit(f"FAIL: expected {expected} messages, found {len(all_ids)}")
    print(f"OK: {len(all_ids)} unique, ordered messages; all message tags are supported.")


if __name__ == "__main__":
    main()
