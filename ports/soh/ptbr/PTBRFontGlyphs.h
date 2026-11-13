#pragma once

#include <algorithm>
#include <array>
#include <cstdint>

namespace PTBRFont {
using Glyph = std::array<uint8_t, 128>;

struct Patch {
    uint8_t target;
    uint8_t source;
    uint8_t accentX;
    uint8_t accentY;
    bool tilde;
};

// Only unused European accented slots are reassigned. Buttons start at 0x9F.
inline constexpr std::array<Patch, 11> patches = {{
    {0x81, 0x82, 5, 0, false}, {0x83, 0x82, 3, 0, true},
    {0x89, 0x89, 1, 0, false}, {0x8B, 0x8B, 5, 0, false},
    {0x8C, 0x8B, 3, 0, true}, {0x8D, 0x8D, 3, 0, false},
    {0x93, 0x93, 1, 2, true},  {0x99, 0x99, 1, 2, false},
    {0x9B, 0x9B, 3, 2, false}, {0x9C, 0x9B, 1, 2, true},
    {0x9D, 0x9D, 3, 2, false},
}};

inline Glyph Compose(const Glyph& source, const Patch& patch) {
    Glyph result = source;
    // Keep the original letter body; replace only the two accent rows above it.
    std::fill(result.begin(), result.begin() + (patch.accentY + 2) * 8, uint8_t{0});
    const auto pixel = [&](int x, int y) {
        const int index = y * 8 + x / 2;
        result[index] |= (x % 2 == 0) ? 0xF0 : 0x0F;
    };
    if (patch.tilde) {
        for (int x : {1, 2, 5}) pixel(patch.accentX + x, patch.accentY);
        for (int x : {0, 3, 4}) pixel(patch.accentX + x, patch.accentY + 1);
    } else {
        for (int x : {1, 2}) pixel(patch.accentX + x, patch.accentY);
        for (int x : {0, 1}) pixel(patch.accentX + x, patch.accentY + 1);
    }
    return result;
}
} // namespace PTBRFont
