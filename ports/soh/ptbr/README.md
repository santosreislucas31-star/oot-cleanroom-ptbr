# PT-BR message integration

These source files are bundled from [Geraldo Cruzeiro's Shipwright-PTBR project](https://github.com/GeraldoCruzeiro/Shipwright-PTBR), snapshot `0b19102424b33469a9ccc1ee2b07f28ffbd60ecf`.

The bundle contains four sorted message-ID chunks (2,163 entries total), the message lookup and the custom-message hook. The web integration currently converts Portuguese accented letters to plain ASCII at runtime (for example, `você` becomes `voce`) because the extended glyph slots in the browser build were not rendering reliably. The original voice module is intentionally not included: the browser port has no bundled PT-BR WAV voice pack.

`ports/soh/port_patches.py` copies the message sources to `soh/soh/Enhancements/PTBR` before the SoH build. The Emscripten fork's recursive CMake source glob picks up the added `.cpp` files.

The static validator checks message IDs and cross-message links, complete entry structure, textbox metadata, token parameters, the raw font-byte allowlist, supported Unicode characters, and the runtime font/decoded-message buffer limits. This is source validation only; a successful Emscripten compile and in-browser dialogue/gameplay verification are still required before calling the translation playable.
