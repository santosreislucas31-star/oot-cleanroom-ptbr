#pragma once

#include <cstddef>
#include <cstdint>
#include <string_view>

struct PTBRMessageData {
    uint16_t textId;
    std::string_view tokens;
    uint8_t typePos;
};

const PTBRMessageData* PTBR_FindMessage(uint16_t textId);
size_t PTBR_GetMessageCount();
