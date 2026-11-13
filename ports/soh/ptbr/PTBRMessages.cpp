#include "PTBRMessages.h"

#include "PTBRData.h"

#include "soh/Enhancements/custom-message/CustomMessageManager.h"
#include "soh/Enhancements/game-interactor/GameInteractor.h"
#include "soh/Enhancements/game-interactor/GameInteractor_Hooks.h"
#include "soh/ShipInit.hpp"
#include "PTBRFont.h"

#include <cstdint>
#include <iostream>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

namespace {

bool StartsWith(std::string_view value, std::string_view prefix) {
    return value.size() >= prefix.size() &&
           value.substr(0, prefix.size()) == prefix;
}

int HexDigit(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    if (c >= 'a' && c <= 'f') {
        return 10 + (c - 'a');
    }

    if (c >= 'A' && c <= 'F') {
        return 10 + (c - 'A');
    }

    return -1;
}

bool ParseHexByte(std::string_view text, uint8_t& value) {
    if (StartsWith(text, "0x") || StartsWith(text, "0X")) {
        text.remove_prefix(2);
    }

    if (text.empty() || text.size() > 2) {
        return false;
    }

    int result = 0;

    for (char c : text) {
        const int digit = HexDigit(c);

        if (digit < 0) {
            return false;
        }

        result = (result << 4) | digit;
    }

    if (result < 0 || result > 0xFF) {
        return false;
    }

    value = static_cast<uint8_t>(result);
    return true;
}

bool ParseByteList(std::string_view text, std::vector<uint8_t>& output) {
    output.clear();

    size_t start = 0;

    while (start <= text.size()) {
        const size_t comma = text.find(',', start);
        const size_t end =
            (comma == std::string_view::npos) ? text.size() : comma;

        std::string_view part = text.substr(start, end - start);
        uint8_t value = 0;

        if (!ParseHexByte(part, value)) {
            return false;
        }

        output.push_back(value);

        if (comma == std::string_view::npos) {
            break;
        }

        start = comma + 1;
    }

    return true;
}

bool AppendColor(std::string& raw, std::string_view name) {
    uint8_t color = 0;

    if (name == "DEFAULT") {
        color = 0x40;
    } else if (name == "RED") {
        color = 0x41;
    } else if (name == "ADJUSTABLE") {
        color = 0x42;
    } else if (name == "BLUE") {
        color = 0x43;
    } else if (name == "LIGHTBLUE") {
        color = 0x44;
    } else if (name == "PURPLE") {
        color = 0x45;
    } else if (name == "YELLOW") {
        color = 0x46;
    } else if (name == "BLACK") {
        color = 0x47;
    } else {
        return false;
    }

    raw.push_back(static_cast<char>(0x05));
    raw.push_back(static_cast<char>(color));
    return true;
}

bool AppendOneByteToken(
    std::string& raw,
    uint8_t controlCode,
    std::string_view argument
) {
    uint8_t value = 0;

    if (!ParseHexByte(argument, value)) {
        return false;
    }

    raw.push_back(static_cast<char>(controlCode));
    raw.push_back(static_cast<char>(value));
    return true;
}

bool AppendMultiByteToken(
    std::string& raw,
    uint8_t controlCode,
    std::string_view arguments,
    size_t expectedCount
) {
    std::vector<uint8_t> bytes;

    if (!ParseByteList(arguments, bytes) ||
        bytes.size() != expectedCount) {
        return false;
    }

    raw.push_back(static_cast<char>(controlCode));

    for (uint8_t value : bytes) {
        raw.push_back(static_cast<char>(value));
    }

    return true;
}

bool AppendTag(std::string& raw, std::string_view tag) {
    if (tag == "NEWLINE") {
        raw.push_back(static_cast<char>(0x01));
        return true;
    }

    if (tag == "END") {
        raw.push_back(static_cast<char>(0x02));
        return true;
    }

    if (tag == "BOX_BREAK") {
        raw.push_back(static_cast<char>(0x04));
        return true;
    }

    if (StartsWith(tag, "COLOR:")) {
        return AppendColor(raw, tag.substr(6));
    }

    if (StartsWith(tag, "SHIFT:")) {
        return AppendOneByteToken(raw, 0x06, tag.substr(6));
    }

    if (StartsWith(tag, "TEXTID:")) {
        return AppendMultiByteToken(raw, 0x07, tag.substr(7), 2);
    }

    if (tag == "QUICKTEXT_ENABLE") {
        raw.push_back(static_cast<char>(0x08));
        return true;
    }

    if (tag == "QUICKTEXT_DISABLE") {
        raw.push_back(static_cast<char>(0x09));
        return true;
    }

    if (tag == "PERSISTENT") {
        raw.push_back(static_cast<char>(0x0A));
        return true;
    }

    if (tag == "EVENT") {
        raw.push_back(static_cast<char>(0x0B));
        return true;
    }

    if (StartsWith(tag, "BOX_BREAK_DELAYED:")) {
        return AppendOneByteToken(raw, 0x0C, tag.substr(18));
    }

    if (tag == "AWAIT_BUTTON_PRESS") {
        raw.push_back(static_cast<char>(0x0D));
        return true;
    }

    if (StartsWith(tag, "FADE:")) {
        return AppendOneByteToken(raw, 0x0E, tag.substr(5));
    }

    if (tag == "NAME") {
        raw.push_back(static_cast<char>(0x0F));
        return true;
    }

    if (tag == "OCARINA") {
        raw.push_back(static_cast<char>(0x10));
        return true;
    }

    if (StartsWith(tag, "FADE2:")) {
        return AppendMultiByteToken(raw, 0x11, tag.substr(6), 2);
    }

    if (StartsWith(tag, "SFX:")) {
        return AppendMultiByteToken(raw, 0x12, tag.substr(4), 2);
    }

    if (StartsWith(tag, "ITEM_ICON:")) {
        return AppendOneByteToken(raw, 0x13, tag.substr(10));
    }

    if (StartsWith(tag, "TEXT_SPEED:")) {
        return AppendOneByteToken(raw, 0x14, tag.substr(11));
    }

    if (StartsWith(tag, "BACKGROUND:")) {
        return AppendMultiByteToken(raw, 0x15, tag.substr(11), 3);
    }

    if (tag == "MARATHON_TIME") {
        raw.push_back(static_cast<char>(0x16));
        return true;
    }

    if (tag == "RACE_TIME") {
        raw.push_back(static_cast<char>(0x17));
        return true;
    }

    if (tag == "POINTS") {
        raw.push_back(static_cast<char>(0x18));
        return true;
    }

    if (tag == "TOKENS") {
        raw.push_back(static_cast<char>(0x19));
        return true;
    }

    if (tag == "UNSKIPPABLE") {
        raw.push_back(static_cast<char>(0x1A));
        return true;
    }

    if (tag == "TWO_CHOICE") {
        raw.push_back(static_cast<char>(0x1B));
        return true;
    }

    if (tag == "THREE_CHOICE") {
        raw.push_back(static_cast<char>(0x1C));
        return true;
    }

    if (tag == "FISH_INFO") {
        raw.push_back(static_cast<char>(0x1D));
        return true;
    }

    if (StartsWith(tag, "HIGHSCORE:")) {
        return AppendOneByteToken(raw, 0x1E, tag.substr(10));
    }

    if (tag == "TIME") {
        raw.push_back(static_cast<char>(0x1F));
        return true;
    }

    if (StartsWith(tag, "BYTE:")) {
        uint8_t value = 0;

        if (!ParseHexByte(tag.substr(5), value)) {
            return false;
        }

        raw.push_back(static_cast<char>(value));
        return true;
    }

    return false;
}

bool DecodeUtf8(std::string_view input, size_t& position, uint32_t& codePoint) {
    const auto byteAt = [&](size_t offset) -> uint8_t {
        return static_cast<uint8_t>(input[position + offset]);
    };

    const uint8_t first = byteAt(0);

    if (first < 0x80) {
        codePoint = first;
        position++;
        return true;
    }

    if ((first & 0xE0) == 0xC0 && position + 1 < input.size()) {
        codePoint = ((first & 0x1F) << 6) | (byteAt(1) & 0x3F);
        position += 2;
        return true;
    }

    if ((first & 0xF0) == 0xE0 && position + 2 < input.size()) {
        codePoint = ((first & 0x0F) << 12) |
                    ((byteAt(1) & 0x3F) << 6) |
                    (byteAt(2) & 0x3F);
        position += 3;
        return true;
    }

    return false;
}

bool AppendTextCodePoint(std::string& raw, uint32_t codePoint) {
    if (codePoint < 0x80) {
        raw.push_back(static_cast<char>(codePoint));
        return true;
    }

    switch (codePoint) {
        case U'À':
            raw.push_back(static_cast<char>(0x80));
            return true;
        case U'Á':
            raw.push_back(static_cast<char>(0x81));
            return true;
        case U'Â':
            raw.push_back(static_cast<char>(0x82));
            return true;
        case U'Ã':
            raw.push_back(static_cast<char>(0x83));
            return true;
        case U'Ç':
            raw.push_back(static_cast<char>(0x84));
            return true;
        case U'È':
            raw.push_back(static_cast<char>(0x85));
            return true;
        case U'É':
            raw.push_back(static_cast<char>(0x86));
            return true;
        case U'Ê':
            raw.push_back(static_cast<char>(0x87));
            return true;
        case U'Ë':
            raw.push_back(static_cast<char>(0x88));
            return true;
        case U'Í':
            raw.push_back(static_cast<char>(0x89));
            return true;
        case U'Ó':
            raw.push_back(static_cast<char>(0x8B));
            return true;
        case U'Ô':
            raw.push_back(static_cast<char>(0x8A));
            return true;
        case U'Õ':
            raw.push_back(static_cast<char>(0x8C));
            return true;
        case U'Ú':
            raw.push_back(static_cast<char>(0x8D));
            return true;
        case U'Ü':
            raw.push_back(static_cast<char>(0x8E));
            return true;
        case U'à':
            raw.push_back(static_cast<char>(0x90));
            return true;
        case U'á':
            raw.push_back(static_cast<char>(0x91));
            return true;
        case U'â':
            raw.push_back(static_cast<char>(0x92));
            return true;
        case U'ã':
            raw.push_back(static_cast<char>(0x93));
            return true;
        case U'ç':
            raw.push_back(static_cast<char>(0x94));
            return true;
        case U'è':
            raw.push_back(static_cast<char>(0x95));
            return true;
        case U'é':
            raw.push_back(static_cast<char>(0x96));
            return true;
        case U'ê':
            raw.push_back(static_cast<char>(0x97));
            return true;
        case U'ë':
            raw.push_back(static_cast<char>(0x98));
            return true;
        case U'í':
            raw.push_back(static_cast<char>(0x99));
            return true;
        case U'ó':
            raw.push_back(static_cast<char>(0x9B));
            return true;
        case U'ô':
            raw.push_back(static_cast<char>(0x9A));
            return true;
        case U'õ':
            raw.push_back(static_cast<char>(0x9C));
            return true;
        case U'ú':
            raw.push_back(static_cast<char>(0x9D));
            return true;
        case U'ü':
            raw.push_back(static_cast<char>(0x9E));
            return true;
        default:
            return false;
    }
}

std::optional<std::string> CompileTokens(std::string_view input) {
    std::string raw;
    raw.reserve(input.size());

    size_t position = 0;

    while (position < input.size()) {
        if (input[position] != '<') {
            uint32_t codePoint = 0;

            if (!DecodeUtf8(input, position, codePoint) ||
                !AppendTextCodePoint(raw, codePoint)) {
                std::cerr
                    << "[PTBR] Caractere sem mapeamento na fonte PT-BR."
                    << std::endl;
                return std::nullopt;
            }

            continue;
        }

        const size_t close = input.find('>', position + 1);

        if (close == std::string_view::npos) {
            std::cerr
                << "[PTBR] Token sem fechamento em uma mensagem."
                << std::endl;
            return std::nullopt;
        }

        const std::string_view tag =
            input.substr(position + 1, close - position - 1);

        if (!AppendTag(raw, tag)) {
            std::cerr
                << "[PTBR] Token desconhecido ou invalido: <"
                << tag
                << ">"
                << std::endl;
            return std::nullopt;
        }

        position = close + 1;
    }

    return raw;
}

void PTBR_OnOpenText(
    uint16_t* textId,
    bool* loadFromMessageTable
) {
    if (textId == nullptr || loadFromMessageTable == nullptr) {
        return;
    }

    const PTBRMessageData* data = PTBR_FindMessage(*textId);

    if (data == nullptr) {
        return;
    }

    const std::optional<std::string> compiled =
        CompileTokens(data->tokens);

    if (!compiled.has_value()) {
        return;
    }

    const std::string& raw = compiled.value();

    CustomMessage translated(
        raw,
        raw,
        raw,
        static_cast<TextBoxType>(data->typePos >> 4),
        static_cast<TextBoxPosition>(data->typePos & 0x0F)
    );

    PTBR_EnsureFont();
    translated.LoadIntoFont();

    *loadFromMessageTable = false;
}

} // namespace

void RegisterPTBRMessages() {
    COND_HOOK(
        OnOpenText,
        true,
        PTBR_OnOpenText
    );
}

static RegisterShipInitFunc
    ptbrMessagesInit(RegisterPTBRMessages);
