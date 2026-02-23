#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: WAIT_ENNUM__13EventCtrlTaskFv
// Address: 0x1e3830 - 0x1e38b8
void WAIT_ENNUM__13EventCtrlTaskFv_0x1e3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("WAIT_ENNUM__13EventCtrlTaskFv");


    ctx->pc = 0x1e3830u;

    // 0x1e3830: 0x8c83000c
    ctx->pc = 0x1e3830u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3834: 0x84630004
    ctx->pc = 0x1e3834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3838: 0xa7838c14
    ctx->pc = 0x1e3838u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937620), (uint16_t)GPR_U32(ctx, 3));
    // 0x1e383c: 0x80830004
    ctx->pc = 0x1e383cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1e3840: 0x10600003
    ctx->pc = 0x1E3840u;
    {
        const bool branch_taken_0x1e3840 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3844u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e3840) {
            ctx->pc = 0x1E3850u;
            goto label_1e3850;
        }
    }
    ctx->pc = 0x1E3848u;
    // 0x1e3848: 0x10000003
    ctx->pc = 0x1E3848u;
    {
        const bool branch_taken_0x1e3848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E384Cu;
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937612)));
        if (branch_taken_0x1e3848) {
            ctx->pc = 0x1E3858u;
            goto label_1e3858;
        }
    }
    ctx->pc = 0x1E3850u;
label_1e3850:
    // 0x1e3850: 0x10000017
    ctx->pc = 0x1E3850u;
    {
        const bool branch_taken_0x1e3850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3854u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1e3850) {
            ctx->pc = 0x1E38B0u;
            goto label_1e38b0;
        }
    }
    ctx->pc = 0x1E3858u;
label_1e3858:
    // 0x1e3858: 0x87838c14
    ctx->pc = 0x1e3858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937620)));
    // 0x1e385c: 0x65082a
    ctx->pc = 0x1e385cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x1e3860: 0x14200013
    ctx->pc = 0x1E3860u;
    {
        const bool branch_taken_0x1e3860 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3860) {
            ctx->pc = 0x1E38B0u;
            goto label_1e38b0;
        }
    }
    ctx->pc = 0x1E3868u;
    // 0x1e3868: 0x83838b2c
    ctx->pc = 0x1e3868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937388)));
    // 0x1e386c: 0x10600010
    ctx->pc = 0x1E386Cu;
    {
        const bool branch_taken_0x1e386c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e386c) {
            ctx->pc = 0x1E38B0u;
            goto label_1e38b0;
        }
    }
    ctx->pc = 0x1E3874u;
    // 0x1e3874: 0x8f838c48
    ctx->pc = 0x1e3874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3878: 0x24050001
    ctx->pc = 0x1e3878u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e387c: 0xa06500d6
    ctx->pc = 0x1e387cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 214), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3880: 0x8f838c48
    ctx->pc = 0x1e3880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1e3884: 0x806300d5
    ctx->pc = 0x1e3884u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 213)));
    // 0x1e3888: 0x14600004
    ctx->pc = 0x1E3888u;
    {
        const bool branch_taken_0x1e3888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3888) {
            ctx->pc = 0x1E389Cu;
            goto label_1e389c;
        }
    }
    ctx->pc = 0x1E3890u;
    // 0x1e3890: 0x80830005
    ctx->pc = 0x1e3890u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1e3894: 0x10600006
    ctx->pc = 0x1E3894u;
    {
        const bool branch_taken_0x1e3894 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3894) {
            ctx->pc = 0x1E38B0u;
            goto label_1e38b0;
        }
    }
    ctx->pc = 0x1E389Cu;
label_1e389c:
    // 0x1e389c: 0xa0800004
    ctx->pc = 0x1e389cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e38a0: 0xa7808c14
    ctx->pc = 0x1e38a0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937620), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e38a4: 0x8c83000c
    ctx->pc = 0x1e38a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e38a8: 0x24630008
    ctx->pc = 0x1e38a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e38ac: 0xac83000c
    ctx->pc = 0x1e38acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1e38b0:
    // 0x1e38b0: 0x3e00008
    ctx->pc = 0x1E38B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3850u: goto label_1e3850;
            case 0x1E3858u: goto label_1e3858;
            case 0x1E389Cu: goto label_1e389c;
            case 0x1E38B0u: goto label_1e38b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E38B8u;
}
