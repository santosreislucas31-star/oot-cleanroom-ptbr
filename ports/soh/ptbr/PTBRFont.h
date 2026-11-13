#pragma once

#include "PTBRFontGlyphs.h"
#include "soh/ResourceManagerHelpers.h"
#include "functions.h"
#include <fast/resource/type/Texture.h>
#include <cstring>
#include <iostream>
#include <memory>

extern "C" {
extern const char* fontTbl[140];
extern float sFontWidths[144];
extern PlayState* gPlayState;
}

inline void PTBR_EnsureFont() {
    static bool warned = false;
    for (const auto& patch : PTBRFont::patches) {
        auto source = std::dynamic_pointer_cast<Fast::Texture>(
            ResourceMgr_GetResourceByNameHandlingMQ(fontTbl[patch.source - 0x20]));
        auto target = std::dynamic_pointer_cast<Fast::Texture>(
            ResourceMgr_GetResourceByNameHandlingMQ(fontTbl[patch.target - 0x20]));
        const auto compatible = [](const std::shared_ptr<Fast::Texture>& texture) {
            return texture && texture->Type == Fast::TextureType::Grayscale4bpp &&
                   texture->Width == 16 && texture->Height == 16 &&
                   texture->ImageData && texture->ImageDataSize == 128 && texture->Flags == 0;
        };
        if (!compatible(source) || !compatible(target)) {
            if (!warned) {
                std::cerr << "[PTBR] Font replacement requires the original 16x16 I4 font."
                          << std::endl;
                warned = true;
            }
            continue;
        }
        PTBRFont::Glyph original;
        std::memcpy(original.data(), source->ImageData, original.size());
        const auto revised = PTBRFont::Compose(original, patch);
        if (std::memcmp(target->ImageData, revised.data(), revised.size()) != 0) {
            std::memcpy(target->ImageData, revised.data(), revised.size());
            gSPInvalidateTexCache(gPlayState->state.gfxCtx->polyOpa.p++,
                                 reinterpret_cast<uintptr_t>(target->ImageData));
        }
        sFontWidths[patch.target - 0x20] = sFontWidths[patch.source - 0x20];
    }
}
