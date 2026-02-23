#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_GotoSvrBorder
// Address: 0x17e140 - 0x17e178
void SVM_GotoSvrBorder_0x17e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_GotoSvrBorder");


    ctx->pc = 0x17e140u;

label_17e140:
    // 0x17e140: 0x27bdfff0
    ctx->pc = 0x17e140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17e144:
    // 0x17e144: 0x3c03002e
    ctx->pc = 0x17e144u;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
label_17e148:
    // 0x17e148: 0xffbf0000
    ctx->pc = 0x17e148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17e14c:
    // 0x17e14c: 0x420c0
    ctx->pc = 0x17e14cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
label_17e150:
    // 0x17e150: 0x24631bc0
    ctx->pc = 0x17e150u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
label_17e154:
    // 0x17e154: 0x831021
    ctx->pc = 0x17e154u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_17e158:
    // 0x17e158: 0x8c450000
    ctx->pc = 0x17e158u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e15c:
    // 0x17e15c: 0x10a00003
label_17e160:
    if (ctx->pc == 0x17E160u) {
        ctx->pc = 0x17E160u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x17E164u;
        goto label_17e164;
    }
    ctx->pc = 0x17E15Cu;
    {
        const bool branch_taken_0x17e15c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x17E160u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        if (branch_taken_0x17e15c) {
            ctx->pc = 0x17E16Cu;
            goto label_17e16c;
        }
    }
    ctx->pc = 0x17E164u;
label_17e164:
    // 0x17e164: 0xa0f809
label_17e168:
    if (ctx->pc == 0x17E168u) {
        ctx->pc = 0x17E168u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x17E16Cu;
        goto label_17e16c;
    }
    ctx->pc = 0x17E164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x17E16Cu);
        ctx->pc = 0x17E168u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E140u: goto label_17e140;
            case 0x17E144u: goto label_17e144;
            case 0x17E148u: goto label_17e148;
            case 0x17E14Cu: goto label_17e14c;
            case 0x17E150u: goto label_17e150;
            case 0x17E154u: goto label_17e154;
            case 0x17E158u: goto label_17e158;
            case 0x17E15Cu: goto label_17e15c;
            case 0x17E160u: goto label_17e160;
            case 0x17E164u: goto label_17e164;
            case 0x17E168u: goto label_17e168;
            case 0x17E16Cu: goto label_17e16c;
            case 0x17E170u: goto label_17e170;
            case 0x17E174u: goto label_17e174;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E16Cu; }
            if (ctx->pc != 0x17E16Cu) { return; }
        }
    }
    ctx->pc = 0x17E16Cu;
label_17e16c:
    // 0x17e16c: 0xdfbf0000
    ctx->pc = 0x17e16cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e170:
    // 0x17e170: 0x3e00008
label_17e174:
    if (ctx->pc == 0x17E174u) {
        ctx->pc = 0x17E174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17E178u;
        goto label_fallthrough_0x17e170;
    }
    ctx->pc = 0x17E170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E174u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17E140u: goto label_17e140;
            case 0x17E144u: goto label_17e144;
            case 0x17E148u: goto label_17e148;
            case 0x17E14Cu: goto label_17e14c;
            case 0x17E150u: goto label_17e150;
            case 0x17E154u: goto label_17e154;
            case 0x17E158u: goto label_17e158;
            case 0x17E15Cu: goto label_17e15c;
            case 0x17E160u: goto label_17e160;
            case 0x17E164u: goto label_17e164;
            case 0x17E168u: goto label_17e168;
            case 0x17E16Cu: goto label_17e16c;
            case 0x17E170u: goto label_17e170;
            case 0x17E174u: goto label_17e174;
            default: break;
        }
        return;
    }
label_fallthrough_0x17e170:
    ctx->pc = 0x17E178u;
}
