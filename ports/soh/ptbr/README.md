# PT-BR message integration

These source files are bundled from [Geraldo Cruzeiro's Shipwright-PTBR project](https://github.com/GeraldoCruzeiro/Shipwright-PTBR), snapshot `0b19102424b33469a9ccc1ee2b07f28ffbd60ecf`.

The bundle contains the four sorted message-ID chunks (2,163 entries total), the message lookup, custom-message hook, and glyph patches for Portuguese accents. The original voice module is intentionally not included in this web integration: the browser port currently has no bundled PT-BR WAV voice pack.

`ports/soh/port_patches.py` copies these files to `soh/soh/Enhancements/PTBR` before the SoH build. The Emscripten fork's recursive CMake source glob picks up the added `.cpp` files.

This is source integration only. A successful Emscripten compile and in-browser dialogue/font verification are still required before calling the translation playable.
