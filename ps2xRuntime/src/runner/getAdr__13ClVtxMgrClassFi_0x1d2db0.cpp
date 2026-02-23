#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getAdr__13ClVtxMgrClassFi
// Address: 0x1d2db0 - 0x1d2df4
void getAdr__13ClVtxMgrClassFi_0x1d2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getAdr__13ClVtxMgrClassFi");


    ctx->pc = 0x1d2db0u;

    // 0x1d2db0: 0x51040
    ctx->pc = 0x1d2db0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1d2db4: 0x451021
    ctx->pc = 0x1d2db4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d2db8: 0x22080
    ctx->pc = 0x1d2db8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d2dbc: 0x3c020050
    ctx->pc = 0x1d2dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d2dc0: 0x2442fb10
    ctx->pc = 0x1d2dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966032));
    // 0x1d2dc4: 0x441021
    ctx->pc = 0x1d2dc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2dc8: 0x8c430000
    ctx->pc = 0x1d2dc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2dcc: 0x24020003
    ctx->pc = 0x1d2dccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d2dd0: 0x14620006
    ctx->pc = 0x1D2DD0u;
    {
        const bool branch_taken_0x1d2dd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D2DD4u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d2dd0) {
            ctx->pc = 0x1D2DECu;
            goto label_1d2dec;
        }
    }
    ctx->pc = 0x1D2DD8u;
    // 0x1d2dd8: 0x3c020050
    ctx->pc = 0x1d2dd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d2ddc: 0x2442fb18
    ctx->pc = 0x1d2ddcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966040));
    // 0x1d2de0: 0x441021
    ctx->pc = 0x1d2de0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d2de4: 0x8c420000
    ctx->pc = 0x1d2de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2de8: 0x0
    ctx->pc = 0x1d2de8u;
    // NOP
label_1d2dec:
    // 0x1d2dec: 0x3e00008
    ctx->pc = 0x1D2DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2DECu: goto label_1d2dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D2DF4u;
}
