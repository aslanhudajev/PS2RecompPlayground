#include "ps2_runtime.h"
#include "ps2_init_log.h"

// Ghidra decomp: returns language from OSD/config or DAT_0025df84. Stub returns English (1).
void sceScfGetLanguage_0x1a1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("sceScfGetLanguage");

    setReturnS32(ctx, 1);  // SCE_CTRL_LANG_ENGLISH
    ctx->pc = getRegU32(ctx, 31);
}
