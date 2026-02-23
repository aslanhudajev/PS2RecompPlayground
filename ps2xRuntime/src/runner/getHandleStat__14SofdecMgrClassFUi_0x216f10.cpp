#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getHandleStat__14SofdecMgrClassFUi
// Address: 0x216f10 - 0x216f60
void getHandleStat__14SofdecMgrClassFUi_0x216f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getHandleStat__14SofdecMgrClassFUi");


    ctx->pc = 0x216f10u;

label_216f10:
    // 0x216f10: 0x27bdfff0
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_216f14:
    // 0x216f14: 0x2ca20004
    ctx->pc = 0x216f14u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 4));
label_216f18:
    // 0x216f18: 0x14400003
label_216f1c:
    if (ctx->pc == 0x216F1Cu) {
        ctx->pc = 0x216F1Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        ctx->pc = 0x216F20u;
        goto label_216f20;
    }
    ctx->pc = 0x216F18u;
    {
        const bool branch_taken_0x216f18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x216F1Cu;
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
        if (branch_taken_0x216f18) {
            ctx->pc = 0x216F28u;
            goto label_216f28;
        }
    }
    ctx->pc = 0x216F20u;
label_216f20:
    // 0x216f20: 0x1000000c
label_216f24:
    if (ctx->pc == 0x216F24u) {
        ctx->pc = 0x216F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x216F28u;
        goto label_216f28;
    }
    ctx->pc = 0x216F20u;
    {
        const bool branch_taken_0x216f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x216F24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x216f20) {
            ctx->pc = 0x216F54u;
            goto label_216f54;
        }
    }
    ctx->pc = 0x216F28u;
label_216f28:
    // 0x216f28: 0x51080
    ctx->pc = 0x216f28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
label_216f2c:
    // 0x216f2c: 0x821021
    ctx->pc = 0x216f2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_216f30:
    // 0x216f30: 0x8c440000
    ctx->pc = 0x216f30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216f34:
    // 0x216f34: 0x10800007
label_216f38:
    if (ctx->pc == 0x216F38u) {
        ctx->pc = 0x216F38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x216F3Cu;
        goto label_216f3c;
    }
    ctx->pc = 0x216F34u;
    {
        const bool branch_taken_0x216f34 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x216F38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x216f34) {
            ctx->pc = 0x216F54u;
            goto label_216f54;
        }
    }
    ctx->pc = 0x216F3Cu;
label_216f3c:
    // 0x216f3c: 0x8c820000
    ctx->pc = 0x216f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216f40:
    // 0x216f40: 0x8c420020
    ctx->pc = 0x216f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_216f44:
    // 0x216f44: 0x40f809
label_216f48:
    if (ctx->pc == 0x216F48u) {
        ctx->pc = 0x216F4Cu;
        goto label_216f4c;
    }
    ctx->pc = 0x216F44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216F4Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216F10u: goto label_216f10;
            case 0x216F14u: goto label_216f14;
            case 0x216F18u: goto label_216f18;
            case 0x216F1Cu: goto label_216f1c;
            case 0x216F20u: goto label_216f20;
            case 0x216F24u: goto label_216f24;
            case 0x216F28u: goto label_216f28;
            case 0x216F2Cu: goto label_216f2c;
            case 0x216F30u: goto label_216f30;
            case 0x216F34u: goto label_216f34;
            case 0x216F38u: goto label_216f38;
            case 0x216F3Cu: goto label_216f3c;
            case 0x216F40u: goto label_216f40;
            case 0x216F44u: goto label_216f44;
            case 0x216F48u: goto label_216f48;
            case 0x216F4Cu: goto label_216f4c;
            case 0x216F50u: goto label_216f50;
            case 0x216F54u: goto label_216f54;
            case 0x216F58u: goto label_216f58;
            case 0x216F5Cu: goto label_216f5c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x216F4Cu; }
            if (ctx->pc != 0x216F4Cu) { return; }
        }
    }
    ctx->pc = 0x216F4Cu;
label_216f4c:
    // 0x216f4c: 0x10000001
label_216f50:
    if (ctx->pc == 0x216F50u) {
        ctx->pc = 0x216F54u;
        goto label_216f54;
    }
    ctx->pc = 0x216F4Cu;
    {
        const bool branch_taken_0x216f4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x216f4c) {
            ctx->pc = 0x216F54u;
            goto label_216f54;
        }
    }
    ctx->pc = 0x216F54u;
label_216f54:
    // 0x216f54: 0x7bbf0000
    ctx->pc = 0x216f54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_216f58:
    // 0x216f58: 0x3e00008
label_216f5c:
    if (ctx->pc == 0x216F5Cu) {
        ctx->pc = 0x216F5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x216F60u;
        goto label_fallthrough_0x216f58;
    }
    ctx->pc = 0x216F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216F5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216F10u: goto label_216f10;
            case 0x216F14u: goto label_216f14;
            case 0x216F18u: goto label_216f18;
            case 0x216F1Cu: goto label_216f1c;
            case 0x216F20u: goto label_216f20;
            case 0x216F24u: goto label_216f24;
            case 0x216F28u: goto label_216f28;
            case 0x216F2Cu: goto label_216f2c;
            case 0x216F30u: goto label_216f30;
            case 0x216F34u: goto label_216f34;
            case 0x216F38u: goto label_216f38;
            case 0x216F3Cu: goto label_216f3c;
            case 0x216F40u: goto label_216f40;
            case 0x216F44u: goto label_216f44;
            case 0x216F48u: goto label_216f48;
            case 0x216F4Cu: goto label_216f4c;
            case 0x216F50u: goto label_216f50;
            case 0x216F54u: goto label_216f54;
            case 0x216F58u: goto label_216f58;
            case 0x216F5Cu: goto label_216f5c;
            default: break;
        }
        return;
    }
label_fallthrough_0x216f58:
    ctx->pc = 0x216F60u;
}
