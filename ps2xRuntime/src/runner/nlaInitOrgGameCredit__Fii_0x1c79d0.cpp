#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlaInitOrgGameCredit__Fii
// Address: 0x1c79d0 - 0x1c7a38
void nlaInitOrgGameCredit__Fii_0x1c79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlaInitOrgGameCredit__Fii");


    ctx->pc = 0x1c79d0u;

    // 0x1c79d0: 0x27bdfff0
    ctx->pc = 0x1c79d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c79d4: 0x7fbf0000
    ctx->pc = 0x1c79d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1c79d8: 0x3c010050
    ctx->pc = 0x1c79d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c79dc: 0x8422e3e8
    ctx->pc = 0x1c79dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960104)));
    // 0x1c79e0: 0x24030005
    ctx->pc = 0x1c79e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c79e4: 0x621823
    ctx->pc = 0x1c79e4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c79e8: 0x651821
    ctx->pc = 0x1c79e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1c79ec: 0x4610002
    ctx->pc = 0x1C79ECu;
    {
        const bool branch_taken_0x1c79ec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C79F0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1c79ec) {
            ctx->pc = 0x1C79F8u;
            goto label_1c79f8;
        }
    }
    ctx->pc = 0x1C79F4u;
    // 0x1c79f4: 0x70001e28
    ctx->pc = 0x1c79f4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1c79f8:
    // 0x1c79f8: 0xac235bc8
    ctx->pc = 0x1c79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23496), GPR_U32(ctx, 3));
    // 0x1c79fc: 0x3c010030
    ctx->pc = 0x1c79fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7a00: 0xac235bcc
    ctx->pc = 0x1c7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23500), GPR_U32(ctx, 3));
    // 0x1c7a04: 0x24020001
    ctx->pc = 0x1c7a04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7a08: 0x4100a
    ctx->pc = 0x1c7a08u;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
    // 0x1c7a0c: 0x3c010050
    ctx->pc = 0x1c7a0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1c7a10: 0xa022dacb
    ctx->pc = 0x1c7a10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294957771), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7a14: 0x3c020030
    ctx->pc = 0x1c7a14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a18: 0x24455bc0
    ctx->pc = 0x1c7a18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c7a1c: 0x3c020030
    ctx->pc = 0x1c7a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a20: 0x70002628
    ctx->pc = 0x1c7a20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7a24: 0xc071ec4
    ctx->pc = 0x1C7A24u;
    SET_GPR_U32(ctx, 31, 0x1C7A2Cu);
    ctx->pc = 0x1C7A28u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23576));
    ctx->pc = 0x1C7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7A2Cu; }
        else if (ctx->pc != 0x1C7A2Cu) { ctx->pc = 0x1C7A2Cu; }
    }
    if (ctx->pc != 0x1C7A2Cu) { return; }
    ctx->pc = 0x1C7A2Cu;
    // 0x1c7a2c: 0x7bbf0000
    ctx->pc = 0x1c7a2cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7a30: 0x3e00008
    ctx->pc = 0x1C7A30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C79F8u: goto label_1c79f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7A38u;
}
