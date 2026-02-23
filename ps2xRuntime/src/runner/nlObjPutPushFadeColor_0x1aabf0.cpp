#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutPushFadeColor
// Address: 0x1aabf0 - 0x1aac60
void nlObjPutPushFadeColor_0x1aabf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutPushFadeColor");


    ctx->pc = 0x1aabf0u;

    // 0x1aabf0: 0x8f848a4c
    ctx->pc = 0x1aabf0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x1aabf4: 0x3c030030
    ctx->pc = 0x1aabf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1aabf8: 0x24653940
    ctx->pc = 0x1aabf8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 14656));
    // 0x1aabfc: 0x3c030030
    ctx->pc = 0x1aabfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1aac00: 0x24635090
    ctx->pc = 0x1aac00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20624));
    // 0x1aac04: 0x2484ffff
    ctx->pc = 0x1aac04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aac08: 0x3084000f
    ctx->pc = 0x1aac08u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 15));
    // 0x1aac0c: 0xaf848a4c
    ctx->pc = 0x1aac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937164), GPR_U32(ctx, 4));
    // 0x1aac10: 0x8f848a4c
    ctx->pc = 0x1aac10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937164)));
    // 0x1aac14: 0xc4a00030
    ctx->pc = 0x1aac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac18: 0x42140
    ctx->pc = 0x1aac18u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1aac1c: 0x641821
    ctx->pc = 0x1aac1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1aac20: 0xe4600000
    ctx->pc = 0x1aac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1aac24: 0xc4a00040
    ctx->pc = 0x1aac24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac28: 0xe4600010
    ctx->pc = 0x1aac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1aac2c: 0xc4a00034
    ctx->pc = 0x1aac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac30: 0xe4600004
    ctx->pc = 0x1aac30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1aac34: 0xc4a00044
    ctx->pc = 0x1aac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac38: 0xe4600014
    ctx->pc = 0x1aac38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1aac3c: 0xc4a00038
    ctx->pc = 0x1aac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac40: 0xe4600008
    ctx->pc = 0x1aac40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1aac44: 0xc4a00048
    ctx->pc = 0x1aac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac48: 0xe4600018
    ctx->pc = 0x1aac48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1aac4c: 0xc4a0003c
    ctx->pc = 0x1aac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac50: 0xe460000c
    ctx->pc = 0x1aac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1aac54: 0xc4a0004c
    ctx->pc = 0x1aac54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac58: 0x3e00008
    ctx->pc = 0x1AAC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAC5Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AAC60u;
}
