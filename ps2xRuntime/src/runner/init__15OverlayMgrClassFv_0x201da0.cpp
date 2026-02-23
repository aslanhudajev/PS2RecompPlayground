#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__15OverlayMgrClassFv
// Address: 0x201da0 - 0x201e08
void init__15OverlayMgrClassFv_0x201da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__15OverlayMgrClassFv");


    ctx->pc = 0x201da0u;

    // 0x201da0: 0x70002e28
    ctx->pc = 0x201da0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x201da4: 0x851821
    ctx->pc = 0x201da4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_201da8:
    // 0x201da8: 0xa0600000
    ctx->pc = 0x201da8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dac: 0xa0600001
    ctx->pc = 0x201dacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x201db0: 0xa0600002
    ctx->pc = 0x201db0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x201db4: 0xa0600003
    ctx->pc = 0x201db4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x201db8: 0xa0600004
    ctx->pc = 0x201db8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dbc: 0xa0600005
    ctx->pc = 0x201dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dc0: 0xa0600006
    ctx->pc = 0x201dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dc4: 0xa0600007
    ctx->pc = 0x201dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dc8: 0x24a50008
    ctx->pc = 0x201dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x201dcc: 0x28a30007
    ctx->pc = 0x201dccu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 7));
    // 0x201dd0: 0x1460fff5
    ctx->pc = 0x201DD0u;
    {
        const bool branch_taken_0x201dd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x201DD4u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        if (branch_taken_0x201dd0) {
            ctx->pc = 0x201DA8u;
            goto label_201da8;
        }
    }
    ctx->pc = 0x201DD8u;
    // 0x201dd8: 0x28a1000f
    ctx->pc = 0x201dd8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 15));
    // 0x201ddc: 0x10200008
    ctx->pc = 0x201DDCu;
    {
        const bool branch_taken_0x201ddc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x201ddc) {
            ctx->pc = 0x201E00u;
            goto label_201e00;
        }
    }
    ctx->pc = 0x201DE4u;
label_201de4:
    // 0x201de4: 0x851821
    ctx->pc = 0x201de4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x201de8: 0xa0600000
    ctx->pc = 0x201de8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x201dec: 0x24a50001
    ctx->pc = 0x201decu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x201df0: 0x28a3000f
    ctx->pc = 0x201df0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 15));
    // 0x201df4: 0x0
    ctx->pc = 0x201df4u;
    // NOP
    // 0x201df8: 0x1460fffa
    ctx->pc = 0x201DF8u;
    {
        const bool branch_taken_0x201df8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x201df8) {
            ctx->pc = 0x201DE4u;
            goto label_201de4;
        }
    }
    ctx->pc = 0x201E00u;
label_201e00:
    // 0x201e00: 0x3e00008
    ctx->pc = 0x201E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201DA8u: goto label_201da8;
            case 0x201DE4u: goto label_201de4;
            case 0x201E00u: goto label_201e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201E08u;
}
