#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_memory.h"
#include <cstring>

void sceeFontPrintfAt2_0x109b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    const uint32_t oldSp = getRegU32(ctx, 29);
    const uint32_t frame = oldSp - 0x900u;

    const uint32_t bufAddr   = getRegU32(ctx, 4);  // param_1 (a0)
    const uint32_t paramX    = getRegU32(ctx, 5);   // param_2 (a1)
    const uint32_t paramY    = getRegU32(ctx, 6);   // param_3 (a2)
    const uint32_t paramW    = getRegU32(ctx, 7);   // param_4 (a3)
    const uint32_t paramH    = getRegU32(ctx, 8);   // param_5 (t0)
    const uint32_t alignRaw  = getRegU32(ctx, 9);   // param_6 (t1) - char, needs sign extend
    const uint32_t fmtAddr   = getRegU32(ctx, 10);  // param_7 (t2) - format string
    const uint64_t param8    = GPR_U64(ctx, 11);    // param_8 (t3) - first vararg

    int8_t alignChar = (int8_t)(alignRaw & 0xffu);

    // sd t3, 0x8f8(sp)  -- store first vararg for va_list
    FAST_WRITE64(frame + 0x8f8u, param8);

    // vsprintf(sp+0x20, param_7, sp+0x8f8)
    SET_GPR_U32(ctx, 4, frame + 0x20u);
    SET_GPR_U32(ctx, 5, fmtAddr);
    SET_GPR_U32(ctx, 6, frame + 0x8f8u);
    vsprintf_0x12daf0(rdram, ctx, runtime);

    // Read font defaults from gp-relative globals
    const uint32_t gp = getRegU32(ctx, 28);
    uint32_t defaultSclxBits = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b54));
    uint32_t defaultSclyBits = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b50));
    uint32_t defaultColour   = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b4c));
    uint32_t defaultFontId   = FAST_READ32(gp + (uint32_t)(int32_t)(-0x7b58));

    std::memcpy(&ctx->f[12], &defaultSclxBits, sizeof(float));
    std::memcpy(&ctx->f[13], &defaultSclyBits, sizeof(float));

    // Set up stack args for sceeFontGenerateString
    // Stack[0x0] = sp+0x20 (formatted string)
    FAST_WRITE32(frame + 0x00u, frame + 0x20u);
    // Stack[0x8] = sp+0x820 (param_12, scratch area)
    FAST_WRITE32(frame + 0x08u, frame + 0x820u);
    // Stack[0x10] = sp+0x824 (param_13, scratch area)
    FAST_WRITE32(frame + 0x10u, frame + 0x824u);
    // Stack[0x18] = 1 (param_14, "generate GIF packets" flag)
    FAST_WRITE32(frame + 0x18u, 1u);

    // Set register args for sceeFontGenerateString
    SET_GPR_U32(ctx, 29, frame);        // sp = frame
    SET_GPR_U32(ctx, 4, bufAddr);       // a0 = buffer
    SET_GPR_U32(ctx, 5, paramX);        // a1 = x
    SET_GPR_U32(ctx, 6, paramY);        // a2 = y
    SET_GPR_U32(ctx, 7, paramW);        // a3 = width
    SET_GPR_U32(ctx, 8, paramH);        // t0 = height
    SET_GPR_U32(ctx, 9, defaultColour); // t1 = colour
    SET_GPR_U32(ctx, 10, (uint32_t)(uint8_t)alignChar); // t2 = align char
    SET_GPR_U32(ctx, 11, defaultFontId); // t3 = fontid

    sceeFontGenerateString_0x109bd8(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 29, oldSp);
    ctx->pc = getRegU32(ctx, 31);
}
