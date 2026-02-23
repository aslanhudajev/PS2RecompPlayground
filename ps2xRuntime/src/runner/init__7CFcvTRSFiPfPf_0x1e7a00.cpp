#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__7CFcvTRSFiPfPf
// Address: 0x1e7a00 - 0x1e7a68
void init__7CFcvTRSFiPfPf_0x1e7a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__7CFcvTRSFiPfPf");


    ctx->pc = 0x1e7a00u;

    // 0x1e7a00: 0x27bdffc0
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e7a04: 0x7fbf0030
    ctx->pc = 0x1e7a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e7a08: 0x7fb20020
    ctx->pc = 0x1e7a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e7a0c: 0x7fb10010
    ctx->pc = 0x1e7a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e7a10: 0x7fb00000
    ctx->pc = 0x1e7a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7a14: 0x70a08e28
    ctx->pc = 0x1e7a14u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7a18: 0x70e08628
    ctx->pc = 0x1e7a18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1e7a1c: 0x70809628
    ctx->pc = 0x1e7a1cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e7a20: 0xc079dc0
    ctx->pc = 0x1E7A20u;
    SET_GPR_U32(ctx, 31, 0x1E7A28u);
    ctx->pc = 0x1E7A24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E7700u;
    {
        const uint32_t __entryPc = ctx->pc;
        initTrsRotScl__11CFcvTRSBaseFPf_0x1e7700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A28u; }
        else if (ctx->pc != 0x1E7A28u) { ctx->pc = 0x1E7A28u; }
    }
    if (ctx->pc != 0x1E7A28u) { return; }
    ctx->pc = 0x1E7A28u;
    // 0x1e7a28: 0xae5100ac
    ctx->pc = 0x1e7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 17));
    // 0x1e7a2c: 0xae4000b0
    ctx->pc = 0x1e7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 0));
    // 0x1e7a30: 0x12000007
    ctx->pc = 0x1E7A30u;
    {
        const bool branch_taken_0x1e7a30 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7A34u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
        if (branch_taken_0x1e7a30) {
            ctx->pc = 0x1E7A50u;
            goto label_1e7a50;
        }
    }
    ctx->pc = 0x1E7A38u;
    // 0x1e7a38: 0x72002e28
    ctx->pc = 0x1e7a38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e7a3c: 0xc079dfc
    ctx->pc = 0x1E7A3Cu;
    SET_GPR_U32(ctx, 31, 0x1E7A44u);
    ctx->pc = 0x1E7A40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E77F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initMate__11CFcvTRSBaseFPf_0x1e77f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A44u; }
        else if (ctx->pc != 0x1E7A44u) { ctx->pc = 0x1E7A44u; }
    }
    if (ctx->pc != 0x1E7A44u) { return; }
    ctx->pc = 0x1E7A44u;
    // 0x1e7a44: 0x8e4300ec
    ctx->pc = 0x1e7a44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 236)));
    // 0x1e7a48: 0x34630020
    ctx->pc = 0x1e7a48u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32));
    // 0x1e7a4c: 0xae4300ec
    ctx->pc = 0x1e7a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 3));
label_1e7a50:
    // 0x1e7a50: 0x7bbf0030
    ctx->pc = 0x1e7a50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7a54: 0x7bb20020
    ctx->pc = 0x1e7a54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7a58: 0x7bb10010
    ctx->pc = 0x1e7a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7a5c: 0x7bb00000
    ctx->pc = 0x1e7a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7a60: 0x3e00008
    ctx->pc = 0x1E7A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7A50u: goto label_1e7a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7A68u;
}
