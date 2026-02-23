#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EndOverLap__Fv
// Address: 0x201c10 - 0x201c5c
void EndOverLap__Fv_0x201c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EndOverLap__Fv");


    ctx->pc = 0x201c10u;

label_201c10:
    // 0x201c10: 0x27bdfff0
    ctx->pc = 0x201c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_201c14:
    // 0x201c14: 0x7fbf0000
    ctx->pc = 0x201c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_201c18:
    // 0x201c18: 0xc080614
label_201c1c:
    if (ctx->pc == 0x201C1Cu) {
        ctx->pc = 0x201C1Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
        ctx->pc = 0x201C20u;
        goto label_201c20;
    }
    ctx->pc = 0x201C18u;
    SET_GPR_U32(ctx, 31, 0x201C20u);
    ctx->pc = 0x201C1Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937944)));
    ctx->pc = 0x201850u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndOverLap__15OverLapCtrlTaskFv_0x201850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201C20u; }
        else if (ctx->pc != 0x201C20u) { ctx->pc = 0x201C20u; }
    }
    if (ctx->pc != 0x201C20u) { return; }
    ctx->pc = 0x201C20u;
label_201c20:
    // 0x201c20: 0x8f828e54
    ctx->pc = 0x201c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938196)));
label_201c24:
    // 0x201c24: 0x8c440000
    ctx->pc = 0x201c24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201c28:
    // 0x201c28: 0x8c990030
    ctx->pc = 0x201c28u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_201c2c:
    // 0x201c2c: 0x8f390010
    ctx->pc = 0x201c2cu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_201c30:
    // 0x201c30: 0x320f809
label_201c34:
    if (ctx->pc == 0x201C34u) {
        ctx->pc = 0x201C38u;
        goto label_201c38;
    }
    ctx->pc = 0x201C30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201C38u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201C10u: goto label_201c10;
            case 0x201C14u: goto label_201c14;
            case 0x201C18u: goto label_201c18;
            case 0x201C1Cu: goto label_201c1c;
            case 0x201C20u: goto label_201c20;
            case 0x201C24u: goto label_201c24;
            case 0x201C28u: goto label_201c28;
            case 0x201C2Cu: goto label_201c2c;
            case 0x201C30u: goto label_201c30;
            case 0x201C34u: goto label_201c34;
            case 0x201C38u: goto label_201c38;
            case 0x201C3Cu: goto label_201c3c;
            case 0x201C40u: goto label_201c40;
            case 0x201C44u: goto label_201c44;
            case 0x201C48u: goto label_201c48;
            case 0x201C4Cu: goto label_201c4c;
            case 0x201C50u: goto label_201c50;
            case 0x201C54u: goto label_201c54;
            case 0x201C58u: goto label_201c58;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201C38u; }
            if (ctx->pc != 0x201C38u) { return; }
        }
    }
    ctx->pc = 0x201C38u;
label_201c38:
    // 0x201c38: 0x8f828b44
    ctx->pc = 0x201c38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937412)));
label_201c3c:
    // 0x201c3c: 0x8c44004c
    ctx->pc = 0x201c3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_201c40:
    // 0x201c40: 0x8c990030
    ctx->pc = 0x201c40u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_201c44:
    // 0x201c44: 0x8f390010
    ctx->pc = 0x201c44u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_201c48:
    // 0x201c48: 0x320f809
label_201c4c:
    if (ctx->pc == 0x201C4Cu) {
        ctx->pc = 0x201C50u;
        goto label_201c50;
    }
    ctx->pc = 0x201C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x201C50u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201C10u: goto label_201c10;
            case 0x201C14u: goto label_201c14;
            case 0x201C18u: goto label_201c18;
            case 0x201C1Cu: goto label_201c1c;
            case 0x201C20u: goto label_201c20;
            case 0x201C24u: goto label_201c24;
            case 0x201C28u: goto label_201c28;
            case 0x201C2Cu: goto label_201c2c;
            case 0x201C30u: goto label_201c30;
            case 0x201C34u: goto label_201c34;
            case 0x201C38u: goto label_201c38;
            case 0x201C3Cu: goto label_201c3c;
            case 0x201C40u: goto label_201c40;
            case 0x201C44u: goto label_201c44;
            case 0x201C48u: goto label_201c48;
            case 0x201C4Cu: goto label_201c4c;
            case 0x201C50u: goto label_201c50;
            case 0x201C54u: goto label_201c54;
            case 0x201C58u: goto label_201c58;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201C50u; }
            if (ctx->pc != 0x201C50u) { return; }
        }
    }
    ctx->pc = 0x201C50u;
label_201c50:
    // 0x201c50: 0x7bbf0000
    ctx->pc = 0x201c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_201c54:
    // 0x201c54: 0x3e00008
label_201c58:
    if (ctx->pc == 0x201C58u) {
        ctx->pc = 0x201C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x201C5Cu;
        goto label_fallthrough_0x201c54;
    }
    ctx->pc = 0x201C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201C58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201C10u: goto label_201c10;
            case 0x201C14u: goto label_201c14;
            case 0x201C18u: goto label_201c18;
            case 0x201C1Cu: goto label_201c1c;
            case 0x201C20u: goto label_201c20;
            case 0x201C24u: goto label_201c24;
            case 0x201C28u: goto label_201c28;
            case 0x201C2Cu: goto label_201c2c;
            case 0x201C30u: goto label_201c30;
            case 0x201C34u: goto label_201c34;
            case 0x201C38u: goto label_201c38;
            case 0x201C3Cu: goto label_201c3c;
            case 0x201C40u: goto label_201c40;
            case 0x201C44u: goto label_201c44;
            case 0x201C48u: goto label_201c48;
            case 0x201C4Cu: goto label_201c4c;
            case 0x201C50u: goto label_201c50;
            case 0x201C54u: goto label_201c54;
            case 0x201C58u: goto label_201c58;
            default: break;
        }
        return;
    }
label_fallthrough_0x201c54:
    ctx->pc = 0x201C5Cu;
}
