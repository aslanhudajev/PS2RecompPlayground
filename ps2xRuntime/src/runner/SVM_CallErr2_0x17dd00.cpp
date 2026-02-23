#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_CallErr2
// Address: 0x17dd00 - 0x17dd68
void SVM_CallErr2_0x17dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_CallErr2");


    ctx->pc = 0x17dd00u;

label_17dd00:
    // 0x17dd00: 0x27bdffd0
    ctx->pc = 0x17dd00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_17dd04:
    // 0x17dd04: 0x3c020024
    ctx->pc = 0x17dd04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17dd08:
    // 0x17dd08: 0xffb00000
    ctx->pc = 0x17dd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17dd0c:
    // 0x17dd0c: 0x240600ff
    ctx->pc = 0x17dd0cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
label_17dd10:
    // 0x17dd10: 0xffb10010
    ctx->pc = 0x17dd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17dd14:
    // 0x17dd14: 0xa0802d
    ctx->pc = 0x17dd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17dd18:
    // 0x17dd18: 0x245113b8
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 5048));
label_17dd1c:
    // 0x17dd1c: 0x80282d
    ctx->pc = 0x17dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17dd20:
    // 0x17dd20: 0xffbf0020
    ctx->pc = 0x17dd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17dd24:
    // 0x17dd24: 0xc05167c
label_17dd28:
    if (ctx->pc == 0x17DD28u) {
        ctx->pc = 0x17DD28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17DD2Cu;
        goto label_17dd2c;
    }
    ctx->pc = 0x17DD24u;
    SET_GPR_U32(ctx, 31, 0x17DD2Cu);
    ctx->pc = 0x17DD28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD2Cu; }
        else if (ctx->pc != 0x17DD2Cu) { ctx->pc = 0x17DD2Cu; }
    }
    if (ctx->pc != 0x17DD2Cu) { return; }
    ctx->pc = 0x17DD2Cu;
label_17dd2c:
    // 0x17dd2c: 0x200282d
    ctx->pc = 0x17dd2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17dd30:
    // 0x17dd30: 0x220202d
    ctx->pc = 0x17dd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17dd34:
    // 0x17dd34: 0xc0515a2
label_17dd38:
    if (ctx->pc == 0x17DD38u) {
        ctx->pc = 0x17DD38u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x17DD3Cu;
        goto label_17dd3c;
    }
    ctx->pc = 0x17DD34u;
    SET_GPR_U32(ctx, 31, 0x17DD3Cu);
    ctx->pc = 0x17DD38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x145688u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x145688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DD3Cu; }
        else if (ctx->pc != 0x17DD3Cu) { ctx->pc = 0x17DD3Cu; }
    }
    if (ctx->pc != 0x17DD3Cu) { return; }
    ctx->pc = 0x17DD3Cu;
label_17dd3c:
    // 0x17dd3c: 0x8f828920
    ctx->pc = 0x17dd3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
label_17dd40:
    // 0x17dd40: 0x10400005
label_17dd44:
    if (ctx->pc == 0x17DD44u) {
        ctx->pc = 0x17DD44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17DD48u;
        goto label_17dd48;
    }
    ctx->pc = 0x17DD40u;
    {
        const bool branch_taken_0x17dd40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17DD44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17dd40) {
            ctx->pc = 0x17DD58u;
            goto label_17dd58;
        }
    }
    ctx->pc = 0x17DD48u;
label_17dd48:
    // 0x17dd48: 0x8f848924
    ctx->pc = 0x17dd48u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936868)));
label_17dd4c:
    // 0x17dd4c: 0x40f809
label_17dd50:
    if (ctx->pc == 0x17DD50u) {
        ctx->pc = 0x17DD50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17DD54u;
        goto label_17dd54;
    }
    ctx->pc = 0x17DD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17DD54u);
        ctx->pc = 0x17DD50u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DD00u: goto label_17dd00;
            case 0x17DD04u: goto label_17dd04;
            case 0x17DD08u: goto label_17dd08;
            case 0x17DD0Cu: goto label_17dd0c;
            case 0x17DD10u: goto label_17dd10;
            case 0x17DD14u: goto label_17dd14;
            case 0x17DD18u: goto label_17dd18;
            case 0x17DD1Cu: goto label_17dd1c;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD24u: goto label_17dd24;
            case 0x17DD28u: goto label_17dd28;
            case 0x17DD2Cu: goto label_17dd2c;
            case 0x17DD30u: goto label_17dd30;
            case 0x17DD34u: goto label_17dd34;
            case 0x17DD38u: goto label_17dd38;
            case 0x17DD3Cu: goto label_17dd3c;
            case 0x17DD40u: goto label_17dd40;
            case 0x17DD44u: goto label_17dd44;
            case 0x17DD48u: goto label_17dd48;
            case 0x17DD4Cu: goto label_17dd4c;
            case 0x17DD50u: goto label_17dd50;
            case 0x17DD54u: goto label_17dd54;
            case 0x17DD58u: goto label_17dd58;
            case 0x17DD5Cu: goto label_17dd5c;
            case 0x17DD60u: goto label_17dd60;
            case 0x17DD64u: goto label_17dd64;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17DD54u; }
            if (ctx->pc != 0x17DD54u) { return; }
        }
    }
    ctx->pc = 0x17DD54u;
label_17dd54:
    // 0x17dd54: 0xdfbf0020
    ctx->pc = 0x17dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17dd58:
    // 0x17dd58: 0xdfb10010
    ctx->pc = 0x17dd58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17dd5c:
    // 0x17dd5c: 0xdfb00000
    ctx->pc = 0x17dd5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17dd60:
    // 0x17dd60: 0x3e00008
label_17dd64:
    if (ctx->pc == 0x17DD64u) {
        ctx->pc = 0x17DD64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x17DD68u;
        goto label_fallthrough_0x17dd60;
    }
    ctx->pc = 0x17DD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DD64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17DD00u: goto label_17dd00;
            case 0x17DD04u: goto label_17dd04;
            case 0x17DD08u: goto label_17dd08;
            case 0x17DD0Cu: goto label_17dd0c;
            case 0x17DD10u: goto label_17dd10;
            case 0x17DD14u: goto label_17dd14;
            case 0x17DD18u: goto label_17dd18;
            case 0x17DD1Cu: goto label_17dd1c;
            case 0x17DD20u: goto label_17dd20;
            case 0x17DD24u: goto label_17dd24;
            case 0x17DD28u: goto label_17dd28;
            case 0x17DD2Cu: goto label_17dd2c;
            case 0x17DD30u: goto label_17dd30;
            case 0x17DD34u: goto label_17dd34;
            case 0x17DD38u: goto label_17dd38;
            case 0x17DD3Cu: goto label_17dd3c;
            case 0x17DD40u: goto label_17dd40;
            case 0x17DD44u: goto label_17dd44;
            case 0x17DD48u: goto label_17dd48;
            case 0x17DD4Cu: goto label_17dd4c;
            case 0x17DD50u: goto label_17dd50;
            case 0x17DD54u: goto label_17dd54;
            case 0x17DD58u: goto label_17dd58;
            case 0x17DD5Cu: goto label_17dd5c;
            case 0x17DD60u: goto label_17dd60;
            case 0x17DD64u: goto label_17dd64;
            default: break;
        }
        return;
    }
label_fallthrough_0x17dd60:
    ctx->pc = 0x17DD68u;
}
