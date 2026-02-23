#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsClose
// Address: 0x174c18 - 0x174c84
void cvFsClose_0x174c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsClose");


    ctx->pc = 0x174c18u;

label_174c18:
    // 0x174c18: 0x27bdffe0
    ctx->pc = 0x174c18u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174c1c:
    // 0x174c1c: 0xffb00000
    ctx->pc = 0x174c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_174c20:
    // 0x174c20: 0x80802d
    ctx->pc = 0x174c20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174c24:
    // 0x174c24: 0x16000007
label_174c28:
    if (ctx->pc == 0x174C28u) {
        ctx->pc = 0x174C28u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x174C2Cu;
        goto label_174c2c;
    }
    ctx->pc = 0x174C24u;
    {
        const bool branch_taken_0x174c24 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x174C28u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x174c24) {
            ctx->pc = 0x174C44u;
            goto label_174c44;
        }
    }
    ctx->pc = 0x174C2Cu;
label_174c2c:
    // 0x174c2c: 0x3c04002c
    ctx->pc = 0x174c2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174c30:
    // 0x174c30: 0xdfbf0010
    ctx->pc = 0x174c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174c34:
    // 0x174c34: 0xdfb00000
    ctx->pc = 0x174c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174c38:
    // 0x174c38: 0x2484a5b8
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944184));
label_174c3c:
    // 0x174c3c: 0x805d076
label_174c40:
    if (ctx->pc == 0x174C40u) {
        ctx->pc = 0x174C40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174C44u;
        goto label_174c44;
    }
    ctx->pc = 0x174C3Cu;
    ctx->pc = 0x174C40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x8e020000
    ctx->pc = 0x174c44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174c48:
    // 0x174c48: 0x8c420014
    ctx->pc = 0x174c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_174c4c:
    // 0x174c4c: 0x10400008
label_174c50:
    if (ctx->pc == 0x174C50u) {
        ctx->pc = 0x174C50u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174C54u;
        goto label_174c54;
    }
    ctx->pc = 0x174C4Cu;
    {
        const bool branch_taken_0x174c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x174C50u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x174c4c) {
            ctx->pc = 0x174C70u;
            goto label_174c70;
        }
    }
    ctx->pc = 0x174C54u;
label_174c54:
    // 0x174c54: 0x40f809
label_174c58:
    if (ctx->pc == 0x174C58u) {
        ctx->pc = 0x174C58u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x174C5Cu;
        goto label_174c5c;
    }
    ctx->pc = 0x174C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174C5Cu);
        ctx->pc = 0x174C58u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174C18u: goto label_174c18;
            case 0x174C1Cu: goto label_174c1c;
            case 0x174C20u: goto label_174c20;
            case 0x174C24u: goto label_174c24;
            case 0x174C28u: goto label_174c28;
            case 0x174C2Cu: goto label_174c2c;
            case 0x174C30u: goto label_174c30;
            case 0x174C34u: goto label_174c34;
            case 0x174C38u: goto label_174c38;
            case 0x174C3Cu: goto label_174c3c;
            case 0x174C40u: goto label_174c40;
            case 0x174C44u: goto label_174c44;
            case 0x174C48u: goto label_174c48;
            case 0x174C4Cu: goto label_174c4c;
            case 0x174C50u: goto label_174c50;
            case 0x174C54u: goto label_174c54;
            case 0x174C58u: goto label_174c58;
            case 0x174C5Cu: goto label_174c5c;
            case 0x174C60u: goto label_174c60;
            case 0x174C64u: goto label_174c64;
            case 0x174C68u: goto label_174c68;
            case 0x174C6Cu: goto label_174c6c;
            case 0x174C70u: goto label_174c70;
            case 0x174C74u: goto label_174c74;
            case 0x174C78u: goto label_174c78;
            case 0x174C7Cu: goto label_174c7c;
            case 0x174C80u: goto label_174c80;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174C5Cu; }
            if (ctx->pc != 0x174C5Cu) { return; }
        }
    }
    ctx->pc = 0x174C5Cu;
label_174c5c:
    // 0x174c5c: 0x200202d
    ctx->pc = 0x174c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174c60:
    // 0x174c60: 0xdfbf0010
    ctx->pc = 0x174c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174c64:
    // 0x174c64: 0xdfb00000
    ctx->pc = 0x174c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174c68:
    // 0x174c68: 0x805d292
label_174c6c:
    if (ctx->pc == 0x174C6Cu) {
        ctx->pc = 0x174C6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174C70u;
        goto label_174c70;
    }
    ctx->pc = 0x174C68u;
    ctx->pc = 0x174C6Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x174A48u;
    releaseCvFsHn_0x174a48(rdram, ctx, runtime); return;
    ctx->pc = 0x174C70u;
label_174c70:
    // 0x174c70: 0xdfbf0010
    ctx->pc = 0x174c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174c74:
    // 0x174c74: 0xdfb00000
    ctx->pc = 0x174c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174c78:
    // 0x174c78: 0x2484a5d8
    ctx->pc = 0x174c78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944216));
label_174c7c:
    // 0x174c7c: 0x805d076
label_174c80:
    if (ctx->pc == 0x174C80u) {
        ctx->pc = 0x174C80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174C84u;
        goto label_fallthrough_0x174c7c;
    }
    ctx->pc = 0x174C7Cu;
    ctx->pc = 0x174C80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1741D8u;
    cvFsError_0x1741d8(rdram, ctx, runtime); return;
label_fallthrough_0x174c7c:
    ctx->pc = 0x174C84u;
}
