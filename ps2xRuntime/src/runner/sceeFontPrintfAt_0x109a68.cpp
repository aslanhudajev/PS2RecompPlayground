#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

void sceeFontPrintfAt_0x109a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t oldSp = getRegU32(ctx, 29);
    const uint32_t frame = oldSp - 0x900u;

    const uint32_t bufAddr = getRegU32(ctx, 4);
    const uint32_t paramX = getRegU32(ctx, 5);
    const uint32_t paramY = getRegU32(ctx, 6);
    const uint32_t fmtAddr = getRegU32(ctx, 7);

    // Copy varargs from caller stack (sp+16) to frame for va_list
    const uint8_t* callerVa = getConstMemPtr(rdram, oldSp + 16u);
    uint8_t* frameVa = getMemPtr(rdram, frame + 0x8f8u);
    if (callerVa && frameVa)
        std::memcpy(frameVa, callerVa, 64u);

    // vsprintf(frame+0x20, format, va_list)
    SET_GPR_U32(ctx, 4, frame + 0x20u);
    SET_GPR_U32(ctx, 5, fmtAddr);
    SET_GPR_U32(ctx, 6, frame + 0x8f8u);
    vsprintf_0x12daf0(rdram, ctx, runtime);

    const uint32_t gp = getRegU32(ctx, 28);
    uint32_t defaultSclxBits = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b54));
    uint32_t defaultSclyBits = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b50));
    uint32_t defaultColour = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b4c));
    uint32_t defaultFontId = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b58));
    uint32_t scrWidth = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b60));
    uint32_t scrHeight = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b5c));

    std::memcpy(&ctx->f[12], &defaultSclxBits, sizeof(float));
    std::memcpy(&ctx->f[13], &defaultSclyBits, sizeof(float));

    FAST_WRITE32(frame + 0x00u, frame + 0x20u);
    FAST_WRITE32(frame + 0x08u, frame + 0x820u);
    FAST_WRITE32(frame + 0x10u, frame + 0x824u);
    FAST_WRITE32(frame + 0x18u, 1u);

    SET_GPR_U32(ctx, 29, frame);
    SET_GPR_U32(ctx, 4, bufAddr);
    SET_GPR_U32(ctx, 5, paramX);
    SET_GPR_U32(ctx, 6, paramY);
    SET_GPR_U32(ctx, 7, scrWidth);
    SET_GPR_U32(ctx, 8, scrHeight);
    SET_GPR_U32(ctx, 9, defaultColour);
    SET_GPR_U32(ctx, 10, 0x4cu);
    SET_GPR_U32(ctx, 11, defaultFontId);

    sceeFontGenerateString_0x109bd8(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 29, oldSp);
    ctx->pc = getRegU32(ctx, 31);
}
