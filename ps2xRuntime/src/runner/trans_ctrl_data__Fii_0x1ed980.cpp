#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: trans_ctrl_data__Fii
// Address: 0x1ed980 - 0x1eda0c
void trans_ctrl_data__Fii_0x1ed980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("trans_ctrl_data__Fii");


    ctx->pc = 0x1ed980u;

    // 0x1ed980: 0x27bdffe0
    ctx->pc = 0x1ed980u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ed984: 0x3c020050
    ctx->pc = 0x1ed984u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ed988: 0x7fbf0010
    ctx->pc = 0x1ed988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ed98c: 0x51940
    ctx->pc = 0x1ed98cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 5));
    // 0x1ed990: 0x24420db0
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3504));
    // 0x1ed994: 0x7fb00000
    ctx->pc = 0x1ed994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed998: 0x431021
    ctx->pc = 0x1ed998u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed99c: 0x8f838d24
    ctx->pc = 0x1ed99cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1ed9a0: 0x10600002
    ctx->pc = 0x1ED9A0u;
    {
        const bool branch_taken_0x1ed9a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ED9A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x1ed9a0) {
            ctx->pc = 0x1ED9ACu;
            goto label_1ed9ac;
        }
    }
    ctx->pc = 0x1ED9A8u;
    // 0x1ed9a8: 0x21040
    ctx->pc = 0x1ed9a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_1ed9ac:
    // 0x1ed9ac: 0x3c010051
    ctx->pc = 0x1ed9acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9b0: 0xa02249c0
    ctx->pc = 0x1ed9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18880), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed9b4: 0x21203
    ctx->pc = 0x1ed9b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1ed9b8: 0x3c010051
    ctx->pc = 0x1ed9b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9bc: 0xa02249c1
    ctx->pc = 0x1ed9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18881), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ed9c0: 0x3c010051
    ctx->pc = 0x1ed9c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9c4: 0xa02049c2
    ctx->pc = 0x1ed9c4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18882), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed9c8: 0x3c010051
    ctx->pc = 0x1ed9c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9cc: 0xa02049c3
    ctx->pc = 0x1ed9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18883), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed9d0: 0x3c010051
    ctx->pc = 0x1ed9d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9d4: 0xa02049c4
    ctx->pc = 0x1ed9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18884), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed9d8: 0x3c010051
    ctx->pc = 0x1ed9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x1ed9dc: 0x3c020051
    ctx->pc = 0x1ed9dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ed9e0: 0xa02349c5
    ctx->pc = 0x1ed9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18885), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ed9e4: 0xc07f2d8
    ctx->pc = 0x1ED9E4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ECu);
    ctx->pc = 0x1ED9E8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 18880));
    ctx->pc = 0x1FCB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbTransCtrl__FiPUc_0x1fcb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9ECu; }
        else if (ctx->pc != 0x1ED9ECu) { ctx->pc = 0x1ED9ECu; }
    }
    if (ctx->pc != 0x1ED9ECu) { return; }
    ctx->pc = 0x1ED9ECu;
    // 0x1ed9ec: 0x70408628
    ctx->pc = 0x1ed9ecu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ed9f0: 0xc07f2f4
    ctx->pc = 0x1ED9F0u;
    SET_GPR_U32(ctx, 31, 0x1ED9F8u);
    ctx->pc = 0x1ED9F4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1FCBD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nmUsbGunSync__Fi_0x1fcbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED9F8u; }
        else if (ctx->pc != 0x1ED9F8u) { ctx->pc = 0x1ED9F8u; }
    }
    if (ctx->pc != 0x1ED9F8u) { return; }
    ctx->pc = 0x1ED9F8u;
    // 0x1ed9f8: 0x72001628
    ctx->pc = 0x1ed9f8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1ed9fc: 0x7bbf0010
    ctx->pc = 0x1ed9fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eda00: 0x7bb00000
    ctx->pc = 0x1eda00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda04: 0x3e00008
    ctx->pc = 0x1EDA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ED9ACu: goto label_1ed9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDA0Cu;
}
