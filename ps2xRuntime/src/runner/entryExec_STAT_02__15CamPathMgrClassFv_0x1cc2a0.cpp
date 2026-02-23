#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_02__15CamPathMgrClassFv
// Address: 0x1cc2a0 - 0x1cc338
void entryExec_STAT_02__15CamPathMgrClassFv_0x1cc2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_02__15CamPathMgrClassFv");


    ctx->pc = 0x1cc2a0u;

    // 0x1cc2a0: 0x8c830000
    ctx->pc = 0x1cc2a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc2a4: 0x3c010030
    ctx->pc = 0x1cc2a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc2a8: 0x3c020030
    ctx->pc = 0x1cc2a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc2ac: 0x8c2a7c64
    ctx->pc = 0x1cc2acu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 1), 31844)));
    // 0x1cc2b0: 0x70003e28
    ctx->pc = 0x1cc2b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc2b4: 0x8c660008
    ctx->pc = 0x1cc2b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1cc2b8: 0x24446580
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 25984));
    // 0x1cc2bc: 0x3c020030
    ctx->pc = 0x1cc2bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1cc2c0: 0x244566b0
    ctx->pc = 0x1cc2c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 26288));
    // 0x1cc2c4: 0x3c0101fc
    ctx->pc = 0x1cc2c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1cc2c8: 0x61100
    ctx->pc = 0x1cc2c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 4));
    // 0x1cc2cc: 0x824021
    ctx->pc = 0x1cc2ccu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cc2d0: 0x61080
    ctx->pc = 0x1cc2d0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1cc2d4: 0x410821
    ctx->pc = 0x1cc2d4u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1cc2d8: 0x8c290590
    ctx->pc = 0x1cc2d8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 1), 1424)));
    // 0x1cc2dc: 0x1000000e
    ctx->pc = 0x1CC2DCu;
    {
        const bool branch_taken_0x1cc2dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC2E0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49152 << 16));
        if (branch_taken_0x1cc2dc) {
            ctx->pc = 0x1CC318u;
            goto label_1cc318;
        }
    }
    ctx->pc = 0x1CC2E4u;
label_1cc2e4:
    // 0x1cc2e4: 0x85260000
    ctx->pc = 0x1cc2e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1cc2e8: 0x3c010030
    ctx->pc = 0x1cc2e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc2ec: 0x8d420000
    ctx->pc = 0x1cc2ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1cc2f0: 0x8c247c64
    ctx->pc = 0x1cc2f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 31844)));
    // 0x1cc2f4: 0x24e70001
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cc2f8: 0x630c0
    ctx->pc = 0x1cc2f8u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cc2fc: 0xa63021
    ctx->pc = 0x1cc2fcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cc300: 0x25290002
    ctx->pc = 0x1cc300u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 2));
    // 0x1cc304: 0x821021
    ctx->pc = 0x1cc304u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cc308: 0xacc20004
    ctx->pc = 0x1cc308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1cc30c: 0xacc30000
    ctx->pc = 0x1cc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1cc310: 0x254a0004
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4));
    // 0x1cc314: 0x0
    ctx->pc = 0x1cc314u;
    // NOP
label_1cc318:
    // 0x1cc318: 0x3c010030
    ctx->pc = 0x1cc318u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1cc31c: 0x8c227c68
    ctx->pc = 0x1cc31cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31848)));
    // 0x1cc320: 0xe2102a
    ctx->pc = 0x1cc320u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x1cc324: 0x1440ffef
    ctx->pc = 0x1CC324u;
    {
        const bool branch_taken_0x1cc324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC328u;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x1cc324) {
            ctx->pc = 0x1CC2E4u;
            goto label_1cc2e4;
        }
    }
    ctx->pc = 0x1CC32Cu;
    // 0x1cc32c: 0xad020000
    ctx->pc = 0x1cc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1cc330: 0x3e00008
    ctx->pc = 0x1CC330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC334u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC2E4u: goto label_1cc2e4;
            case 0x1CC318u: goto label_1cc318;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC338u;
}
