#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_GetOutBps
// Address: 0x168008 - 0x168068
void ADXB_GetOutBps_0x168008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_GetOutBps");


    ctx->pc = 0x168008u;

    // 0x168008: 0x848300a8
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x16800c: 0x14600003
    ctx->pc = 0x16800Cu;
    {
        const bool branch_taken_0x16800c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x168010u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x16800c) {
            ctx->pc = 0x16801Cu;
            goto label_16801c;
        }
    }
    ctx->pc = 0x168014u;
    // 0x168014: 0x3e00008
    ctx->pc = 0x168014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168018u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16801Cu: goto label_16801c;
            case 0x168044u: goto label_168044;
            case 0x168060u: goto label_168060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16801Cu;
label_16801c:
    // 0x16801c: 0x54620009
    ctx->pc = 0x16801Cu;
    {
        const bool branch_taken_0x16801c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x16801c) {
            ctx->pc = 0x168020u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x168044u;
            goto label_168044;
        }
    }
    ctx->pc = 0x168024u;
    // 0x168024: 0x848400aa
    ctx->pc = 0x168024u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x168028: 0x1083000d
    ctx->pc = 0x168028u;
    {
        const bool branch_taken_0x168028 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x16802Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x168028) {
            ctx->pc = 0x168060u;
            goto label_168060;
        }
    }
    ctx->pc = 0x168030u;
    // 0x168030: 0x38840001
    ctx->pc = 0x168030u;
    SET_GPR_U32(ctx, 4, XOR32(GPR_U32(ctx, 4), 1));
    // 0x168034: 0x24030008
    ctx->pc = 0x168034u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x168038: 0x24020010
    ctx->pc = 0x168038u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x16803c: 0x3e00008
    ctx->pc = 0x16803Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168040u;
        if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16801Cu: goto label_16801c;
            case 0x168044u: goto label_168044;
            case 0x168060u: goto label_168060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168044u;
label_168044:
    // 0x168044: 0x14620006
    ctx->pc = 0x168044u;
    {
        const bool branch_taken_0x168044 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x168048u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x168044) {
            ctx->pc = 0x168060u;
            goto label_168060;
        }
    }
    ctx->pc = 0x16804Cu;
    // 0x16804c: 0x848300aa
    ctx->pc = 0x16804cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 170)));
    // 0x168050: 0x24040004
    ctx->pc = 0x168050u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    // 0x168054: 0x38630002
    ctx->pc = 0x168054u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 2));
    // 0x168058: 0x3e00008
    ctx->pc = 0x168058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16805Cu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16801Cu: goto label_16801c;
            case 0x168044u: goto label_168044;
            case 0x168060u: goto label_168060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168060u;
label_168060:
    // 0x168060: 0x3e00008
    ctx->pc = 0x168060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16801Cu: goto label_16801c;
            case 0x168044u: goto label_168044;
            case 0x168060u: goto label_168060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x168068u;
}
