#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: createHandle__14SofdecMgrClassFP16MWS_PLY_CPRM_SFD
// Address: 0x216dd0 - 0x216e38
void createHandle__14SofdecMgrClassFP16MWS_PLY_CPRM_SFD_0x216dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("createHandle__14SofdecMgrClassFP16MWS_PLY_CPRM_SFD");


    ctx->pc = 0x216dd0u;

    // 0x216dd0: 0x27bdffd0
    ctx->pc = 0x216dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216dd4: 0x7fbf0020
    ctx->pc = 0x216dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x216dd8: 0x7fb10010
    ctx->pc = 0x216dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x216ddc: 0x7fb00000
    ctx->pc = 0x216ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216de0: 0x70808e28
    ctx->pc = 0x216de0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x216de4: 0x70008628
    ctx->pc = 0x216de4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x216de8: 0x72201e28
    ctx->pc = 0x216de8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_216dec:
    // 0x216dec: 0x8c620000
    ctx->pc = 0x216decu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216df0: 0x54400008
    ctx->pc = 0x216DF0u;
    {
        const bool branch_taken_0x216df0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x216df0) {
            ctx->pc = 0x216DF4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x216E14u;
            goto label_216e14;
        }
    }
    ctx->pc = 0x216DF8u;
    // 0x216df8: 0xc0631aa
    ctx->pc = 0x216DF8u;
    SET_GPR_U32(ctx, 31, 0x216E00u);
    ctx->pc = 0x216DFCu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x18C6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCreateSofdec_0x18c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E00u; }
        else if (ctx->pc != 0x216E00u) { ctx->pc = 0x216E00u; }
    }
    if (ctx->pc != 0x216E00u) { return; }
    ctx->pc = 0x216E00u;
    // 0x216e00: 0x101880
    ctx->pc = 0x216e00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x216e04: 0x2231821
    ctx->pc = 0x216e04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x216e08: 0xac620000
    ctx->pc = 0x216e08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x216e0c: 0x10000005
    ctx->pc = 0x216E0Cu;
    {
        const bool branch_taken_0x216e0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216E10u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x216e0c) {
            ctx->pc = 0x216E24u;
            goto label_216e24;
        }
    }
    ctx->pc = 0x216E14u;
label_216e14:
    // 0x216e14: 0x2a020004
    ctx->pc = 0x216e14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x216e18: 0x1440fff4
    ctx->pc = 0x216E18u;
    {
        const bool branch_taken_0x216e18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216E1Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x216e18) {
            ctx->pc = 0x216DECu;
            goto label_216dec;
        }
    }
    ctx->pc = 0x216E20u;
    // 0x216e20: 0x70001628
    ctx->pc = 0x216e20u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_216e24:
    // 0x216e24: 0x7bbf0020
    ctx->pc = 0x216e24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216e28: 0x7bb10010
    ctx->pc = 0x216e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216e2c: 0x7bb00000
    ctx->pc = 0x216e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216e30: 0x3e00008
    ctx->pc = 0x216E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216E34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216DECu: goto label_216dec;
            case 0x216E14u: goto label_216e14;
            case 0x216E24u: goto label_216e24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216E38u;
}
