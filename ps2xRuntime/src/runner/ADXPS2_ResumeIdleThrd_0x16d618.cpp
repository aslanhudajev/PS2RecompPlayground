#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXPS2_ResumeIdleThrd
// Address: 0x16d618 - 0x16d688
void ADXPS2_ResumeIdleThrd_0x16d618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXPS2_ResumeIdleThrd");


    ctx->pc = 0x16d618u;

    // 0x16d618: 0x27bdfff0
    ctx->pc = 0x16d618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d61c: 0x8f848180
    ctx->pc = 0x16d61cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d620: 0xffbf0000
    ctx->pc = 0x16d620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d624: 0xc05b340
    ctx->pc = 0x16D624u;
    SET_GPR_U32(ctx, 31, 0x16D62Cu);
    ctx->pc = 0x16CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ResumeThread_0x16cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D62Cu; }
        else if (ctx->pc != 0x16D62Cu) { ctx->pc = 0x16D62Cu; }
    }
    if (ctx->pc != 0x16D62Cu) { return; }
    ctx->pc = 0x16D62Cu;
    // 0x16d62c: 0x8f838180
    ctx->pc = 0x16d62cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d630: 0x14430004
    ctx->pc = 0x16D630u;
    {
        const bool branch_taken_0x16d630 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x16d630) {
            ctx->pc = 0x16D644u;
            goto label_16d644;
        }
    }
    ctx->pc = 0x16D638u;
    // 0x16d638: 0x8f848180
    ctx->pc = 0x16d638u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934912)));
    // 0x16d63c: 0xc05b32a
    ctx->pc = 0x16D63Cu;
    SET_GPR_U32(ctx, 31, 0x16D644u);
    ctx->pc = 0x16CCA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_WakeupThread_0x16cca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D644u; }
        else if (ctx->pc != 0x16D644u) { ctx->pc = 0x16D644u; }
    }
    if (ctx->pc != 0x16D644u) { return; }
    ctx->pc = 0x16D644u;
label_16d644:
    // 0x16d644: 0xc05b416
    ctx->pc = 0x16D644u;
    SET_GPR_U32(ctx, 31, 0x16D64Cu);
    ctx->pc = 0x16D058u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_IsSetupThrdEx_0x16d058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D64Cu; }
        else if (ctx->pc != 0x16D64Cu) { ctx->pc = 0x16D64Cu; }
    }
    if (ctx->pc != 0x16D64Cu) { return; }
    ctx->pc = 0x16D64Cu;
    // 0x16d64c: 0x24030001
    ctx->pc = 0x16d64cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d650: 0x1443000b
    ctx->pc = 0x16D650u;
    {
        const bool branch_taken_0x16d650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16D654u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d650) {
            ctx->pc = 0x16D680u;
            goto label_16d680;
        }
    }
    ctx->pc = 0x16D658u;
    // 0x16d658: 0x8f848184
    ctx->pc = 0x16d658u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d65c: 0xc05b340
    ctx->pc = 0x16D65Cu;
    SET_GPR_U32(ctx, 31, 0x16D664u);
    ctx->pc = 0x16CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ResumeThread_0x16cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D664u; }
        else if (ctx->pc != 0x16D664u) { ctx->pc = 0x16D664u; }
    }
    if (ctx->pc != 0x16D664u) { return; }
    ctx->pc = 0x16D664u;
    // 0x16d664: 0x8f838184
    ctx->pc = 0x16d664u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d668: 0x14430005
    ctx->pc = 0x16D668u;
    {
        const bool branch_taken_0x16d668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x16D66Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x16d668) {
            ctx->pc = 0x16D680u;
            goto label_16d680;
        }
    }
    ctx->pc = 0x16D670u;
    // 0x16d670: 0x8f848184
    ctx->pc = 0x16d670u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16d674: 0xdfbf0000
    ctx->pc = 0x16d674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d678: 0x805b32a
    ctx->pc = 0x16D678u;
    ctx->pc = 0x16D67Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x16CCA8u;
    adxm_WakeupThread_0x16cca8(rdram, ctx, runtime); return;
    ctx->pc = 0x16D680u;
label_16d680:
    // 0x16d680: 0x3e00008
    ctx->pc = 0x16D680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D684u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D644u: goto label_16d644;
            case 0x16D680u: goto label_16d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D688u;
}
