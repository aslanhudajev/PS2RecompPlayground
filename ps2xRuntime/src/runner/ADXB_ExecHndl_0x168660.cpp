#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecHndl
// Address: 0x168660 - 0x1686cc
void ADXB_ExecHndl_0x168660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecHndl");


    ctx->pc = 0x168660u;

    // 0x168660: 0x848300a8
    ctx->pc = 0x168660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x168664: 0x14600003
    ctx->pc = 0x168664u;
    {
        const bool branch_taken_0x168664 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x168668u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x168664) {
            ctx->pc = 0x168674u;
            goto label_168674;
        }
    }
    ctx->pc = 0x16866Cu;
    // 0x16866c: 0x805a164
    ctx->pc = 0x16866Cu;
    ctx->pc = 0x168590u;
    ADXB_ExecOneAdx_0x168590(rdram, ctx, runtime); return;
    ctx->pc = 0x168674u;
label_168674:
    // 0x168674: 0x14620003
    ctx->pc = 0x168674u;
    {
        const bool branch_taken_0x168674 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168678u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x168674) {
            ctx->pc = 0x168684u;
            goto label_168684;
        }
    }
    ctx->pc = 0x16867Cu;
    // 0x16867c: 0x80599f0
    ctx->pc = 0x16867Cu;
    ctx->pc = 0x1667C0u;
    ADXB_ExecOneAhx_0x1667c0(rdram, ctx, runtime); return;
    ctx->pc = 0x168684u;
label_168684:
    // 0x168684: 0x14620003
    ctx->pc = 0x168684u;
    {
        const bool branch_taken_0x168684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168688u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x168684) {
            ctx->pc = 0x168694u;
            goto label_168694;
        }
    }
    ctx->pc = 0x16868Cu;
    // 0x16868c: 0x805a250
    ctx->pc = 0x16868Cu;
    ctx->pc = 0x168940u;
    ADXB_ExecOneSpsd_0x168940(rdram, ctx, runtime); return;
    ctx->pc = 0x168694u;
label_168694:
    // 0x168694: 0x14620003
    ctx->pc = 0x168694u;
    {
        const bool branch_taken_0x168694 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168698u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x168694) {
            ctx->pc = 0x1686A4u;
            goto label_1686a4;
        }
    }
    ctx->pc = 0x16869Cu;
    // 0x16869c: 0x8059c3a
    ctx->pc = 0x16869Cu;
    ctx->pc = 0x1670E8u;
    ADXB_ExecOneAiff_0x1670e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1686A4u;
label_1686a4:
    // 0x1686a4: 0x14620003
    ctx->pc = 0x1686A4u;
    {
        const bool branch_taken_0x1686a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1686A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1686a4) {
            ctx->pc = 0x1686B4u;
            goto label_1686b4;
        }
    }
    ctx->pc = 0x1686ACu;
    // 0x1686ac: 0x8059ece
    ctx->pc = 0x1686ACu;
    ctx->pc = 0x167B38u;
    ADXB_ExecOneAu_0x167b38(rdram, ctx, runtime); return;
    ctx->pc = 0x1686B4u;
label_1686b4:
    // 0x1686b4: 0x14620003
    ctx->pc = 0x1686B4u;
    {
        const bool branch_taken_0x1686b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1686b4) {
            ctx->pc = 0x1686C4u;
            goto label_1686c4;
        }
    }
    ctx->pc = 0x1686BCu;
    // 0x1686bc: 0x805a4d2
    ctx->pc = 0x1686BCu;
    ctx->pc = 0x169348u;
    ADXB_ExecOneWav_0x169348(rdram, ctx, runtime); return;
    ctx->pc = 0x1686C4u;
label_1686c4:
    // 0x1686c4: 0x3e00008
    ctx->pc = 0x1686C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x168674u: goto label_168674;
            case 0x168684u: goto label_168684;
            case 0x168694u: goto label_168694;
            case 0x1686A4u: goto label_1686a4;
            case 0x1686B4u: goto label_1686b4;
            case 0x1686C4u: goto label_1686c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1686CCu;
}
