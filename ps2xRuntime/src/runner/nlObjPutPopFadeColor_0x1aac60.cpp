#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutPopFadeColor
// Address: 0x1aac60 - 0x1aacdc
void nlObjPutPopFadeColor_0x1aac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutPopFadeColor");


    ctx->pc = 0x1aac60u;

    // 0x1aac60: 0x8f848a4c
    ctx->pc = 0x1aac60u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x1aac64: 0x3c030030
    ctx->pc = 0x1aac64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1aac68: 0x24653940
    ctx->pc = 0x1aac68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1aac6c: 0x3c030030
    ctx->pc = 0x1aac6cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1aac70: 0x24635090
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20624));
    // 0x1aac74: 0x3084000f
    ctx->pc = 0x1aac74u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1aac78: 0xaf848a4c
    ctx->pc = 0x1aac78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 4));
    // 0x1aac7c: 0x8f848a4c
    ctx->pc = 0x1aac7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x1aac80: 0x42140
    ctx->pc = 0x1aac80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1aac84: 0x641821
    ctx->pc = 0x1aac84u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aac88: 0xc4600000
    ctx->pc = 0x1aac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac8c: 0xe4a00030
    ctx->pc = 0x1aac8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x1aac90: 0xc4600010
    ctx->pc = 0x1aac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac94: 0xe4a00040
    ctx->pc = 0x1aac94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x1aac98: 0xc4600004
    ctx->pc = 0x1aac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac9c: 0xe4a00034
    ctx->pc = 0x1aac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1aaca0: 0xc4600014
    ctx->pc = 0x1aaca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaca4: 0xe4a00044
    ctx->pc = 0x1aaca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x1aaca8: 0xc4600008
    ctx->pc = 0x1aaca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aacac: 0xe4a00038
    ctx->pc = 0x1aacacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x1aacb0: 0xc4600018
    ctx->pc = 0x1aacb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aacb4: 0xe4a00048
    ctx->pc = 0x1aacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x1aacb8: 0xc460000c
    ctx->pc = 0x1aacb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aacbc: 0xe4a0003c
    ctx->pc = 0x1aacbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1aacc0: 0xc460001c
    ctx->pc = 0x1aacc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aacc4: 0xe4a0004c
    ctx->pc = 0x1aacc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x1aacc8: 0x8f838a4c
    ctx->pc = 0x1aacc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x1aaccc: 0x24630001
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1aacd0: 0x3063000f
    ctx->pc = 0x1aacd0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 15));
    // 0x1aacd4: 0x3e00008
    ctx->pc = 0x1AACD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AACD8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AACDCu;
}
