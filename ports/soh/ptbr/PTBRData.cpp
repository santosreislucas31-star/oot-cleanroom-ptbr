#include "PTBRData.h"

#include "PTBRDataChunks.h"

namespace {

const PTBRMessageData* FindInChunk(
    const PTBRMessageData* messages,
    size_t count,
    uint16_t textId
) {
    size_t left = 0;
    size_t right = count;

    while (left < right) {
        const size_t middle = left + ((right - left) / 2);

        if (messages[middle].textId == textId) {
            return &messages[middle];
        }

        if (messages[middle].textId < textId) {
            left = middle + 1;
        } else {
            right = middle;
        }
    }

    return nullptr;
}

} // namespace

const PTBRMessageData* PTBR_FindMessage(uint16_t textId) {
    if (const PTBRMessageData* message =
            FindInChunk(kPTBRMessages_0000_0FFF, kPTBRMessages_0000_0FFFCount, textId)) {
        return message;
    }
    if (const PTBRMessageData* message =
            FindInChunk(kPTBRMessages_1000_1FFF, kPTBRMessages_1000_1FFFCount, textId)) {
        return message;
    }
    if (const PTBRMessageData* message =
            FindInChunk(kPTBRMessages_2000_3FFF, kPTBRMessages_2000_3FFFCount, textId)) {
        return message;
    }
    if (const PTBRMessageData* message =
            FindInChunk(kPTBRMessages_4000_FFFF, kPTBRMessages_4000_FFFFCount, textId)) {
        return message;
    }

    return nullptr;
}

size_t PTBR_GetMessageCount() {
    return kPTBRMessages_0000_0FFFCount + kPTBRMessages_1000_1FFFCount + kPTBRMessages_2000_3FFFCount + kPTBRMessages_4000_FFFFCount;
}
