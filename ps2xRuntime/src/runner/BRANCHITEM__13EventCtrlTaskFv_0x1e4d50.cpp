#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCHITEM__13EventCtrlTaskFv
// Address: 0x1e4d50 - 0x1e4dd4
void BRANCHITEM__13EventCtrlTaskFv_0x1e4d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCHITEM__13EventCtrlTaskFv");


    ctx->pc = 0x1e4d50u;

    // 0x1e4d50: 0x8c85000c
    ctx->pc = 0x1e4d50u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4d54: 0x3c030050
    ctx->pc = 0x1e4d54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1e4d58: 0x2463e400
    ctx->pc = 0x1e4d58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960128));
    // 0x1e4d5c: 0x70003e28
    ctx->pc = 0x1e4d5cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e4d60: 0x2408ffff
    ctx->pc = 0x1e4d60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4d64: 0x24a50004
    ctx->pc = 0x1e4d64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4d68: 0xac85000c
    ctx->pc = 0x1e4d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4d6c: 0x8c85000c
    ctx->pc = 0x1e4d6cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4d70: 0x8ca60000
    ctx->pc = 0x1e4d70u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4d74: 0x24a50004
    ctx->pc = 0x1e4d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4d78: 0x664821
    ctx->pc = 0x1e4d78u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e4d7c: 0xac85000c
    ctx->pc = 0x1e4d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4d80: 0x71001e28
    ctx->pc = 0x1e4d80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1e4d84: 0x71003628
    ctx->pc = 0x1e4d84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
label_1e4d88:
    // 0x1e4d88: 0x8c85000c
    ctx->pc = 0x1e4d88u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4d8c: 0x8caa0000
    ctx->pc = 0x1e4d8cu;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4d90: 0x11460006
    ctx->pc = 0x1E4D90u;
    {
        const bool branch_taken_0x1e4d90 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 6));
        ctx->pc = 0x1E4D94u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
        if (branch_taken_0x1e4d90) {
            ctx->pc = 0x1E4DACu;
            goto label_1e4dac;
        }
    }
    ctx->pc = 0x1E4D98u;
    // 0x1e4d98: 0x81250000
    ctx->pc = 0x1e4d98u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e4d9c: 0x14a80003
    ctx->pc = 0x1E4D9Cu;
    {
        const bool branch_taken_0x1e4d9c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 8));
        if (branch_taken_0x1e4d9c) {
            ctx->pc = 0x1E4DACu;
            goto label_1e4dac;
        }
    }
    ctx->pc = 0x1E4DA4u;
    // 0x1e4da4: 0x10000008
    ctx->pc = 0x1E4DA4u;
    {
        const bool branch_taken_0x1e4da4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E4DA8u;
        SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e4da4) {
            ctx->pc = 0x1E4DC8u;
            goto label_1e4dc8;
        }
    }
    ctx->pc = 0x1E4DACu;
label_1e4dac:
    // 0x1e4dac: 0x8c85000c
    ctx->pc = 0x1e4dacu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4db0: 0x24a50004
    ctx->pc = 0x1e4db0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4db4: 0xac85000c
    ctx->pc = 0x1e4db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1e4db8: 0x8c85000c
    ctx->pc = 0x1e4db8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4dbc: 0x8ca50000
    ctx->pc = 0x1e4dbcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e4dc0: 0x14a3fff1
    ctx->pc = 0x1E4DC0u;
    {
        const bool branch_taken_0x1e4dc0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e4dc0) {
            ctx->pc = 0x1E4D88u;
            goto label_1e4d88;
        }
    }
    ctx->pc = 0x1E4DC8u;
label_1e4dc8:
    // 0x1e4dc8: 0xac87000c
    ctx->pc = 0x1e4dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1e4dcc: 0x3e00008
    ctx->pc = 0x1E4DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4DD0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4D88u: goto label_1e4d88;
            case 0x1E4DACu: goto label_1e4dac;
            case 0x1E4DC8u: goto label_1e4dc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4DD4u;
}
