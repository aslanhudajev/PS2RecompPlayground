#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAnimInfo
// Address: 0x210788 - 0x2107f8
void InitAnimInfo_0x210788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210788u;

    // 0x210788: 0x80182d
    ctx->pc = 0x210788u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21078c: 0xa460000e
    ctx->pc = 0x21078cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x210790: 0xa4600010
    ctx->pc = 0x210790u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x210794: 0x24020001
    ctx->pc = 0x210794u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x210798: 0xa0620012
    ctx->pc = 0x210798u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x21079c: 0xa0650013
    ctx->pc = 0x21079cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 5));
    // 0x2107a0: 0xac600014
    ctx->pc = 0x2107a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2107a4: 0xac600018
    ctx->pc = 0x2107a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2107a8: 0xa460001c
    ctx->pc = 0x2107a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 0));
    // 0x2107ac: 0xa460001e
    ctx->pc = 0x2107acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x2107b0: 0xac600020
    ctx->pc = 0x2107b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2107b4: 0xac600024
    ctx->pc = 0x2107b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x2107b8: 0x3c013f80
    ctx->pc = 0x2107b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2107bc: 0x44810000
    ctx->pc = 0x2107bcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2107c0: 0xe4600028
    ctx->pc = 0x2107c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2107c4: 0xe460002c
    ctx->pc = 0x2107c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x2107c8: 0xac600030
    ctx->pc = 0x2107c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2107cc: 0xa4600034
    ctx->pc = 0x2107ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x2107d0: 0xa4600036
    ctx->pc = 0x2107d0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x2107d4: 0x8c620004
    ctx->pc = 0x2107d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2107d8: 0x10400005
    ctx->pc = 0x2107D8u;
    {
        const bool branch_taken_0x2107d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2107DCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2107d8) {
            ctx->pc = 0x2107F0u;
            goto label_2107f0;
        }
    }
    ctx->pc = 0x2107E0u;
    // 0x2107e0: 0x302d
    ctx->pc = 0x2107e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107e4: 0xc46c0014
    ctx->pc = 0x2107e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2107e8: 0x80840d0
    ctx->pc = 0x2107E8u;
    ctx->pc = 0x2107ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x210340u;
    InitAnim_0x210340(rdram, ctx, runtime); return;
    ctx->pc = 0x2107F0u;
label_2107f0:
    // 0x2107f0: 0x3e00008
    ctx->pc = 0x2107F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2107F0u: goto label_2107f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2107F8u;
}
