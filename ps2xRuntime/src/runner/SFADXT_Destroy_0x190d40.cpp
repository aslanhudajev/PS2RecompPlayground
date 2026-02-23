#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_Destroy
// Address: 0x190d40 - 0x190d94
void SFADXT_Destroy_0x190d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_Destroy");


    ctx->pc = 0x190d40u;

label_190d40:
    // 0x190d40: 0x27bdffd0
    ctx->pc = 0x190d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_190d44:
    // 0x190d44: 0xffbf0020
    ctx->pc = 0x190d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_190d48:
    // 0x190d48: 0xffb00000
    ctx->pc = 0x190d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_190d4c:
    // 0x190d4c: 0xffb10010
    ctx->pc = 0x190d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_190d50:
    // 0x190d50: 0x8c913e24
    ctx->pc = 0x190d50u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 15908)));
label_190d54:
    // 0x190d54: 0x8c843e20
    ctx->pc = 0x190d54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 15904)));
label_190d58:
    // 0x190d58: 0x10800009
label_190d5c:
    if (ctx->pc == 0x190D5Cu) {
        ctx->pc = 0x190D5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190D60u;
        goto label_190d60;
    }
    ctx->pc = 0x190D58u;
    {
        const bool branch_taken_0x190d58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x190D5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x190d58) {
            ctx->pc = 0x190D80u;
            goto label_190d80;
        }
    }
    ctx->pc = 0x190D60u;
label_190d60:
    // 0x190d60: 0xc064366
label_190d64:
    if (ctx->pc == 0x190D64u) {
        ctx->pc = 0x190D68u;
        goto label_190d68;
    }
    ctx->pc = 0x190D60u;
    SET_GPR_U32(ctx, 31, 0x190D68u);
    ctx->pc = 0x190D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_DestroySub_0x190d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190D68u; }
        else if (ctx->pc != 0x190D68u) { ctx->pc = 0x190D68u; }
    }
    if (ctx->pc != 0x190D68u) { return; }
    ctx->pc = 0x190D68u;
label_190d68:
    // 0x190d68: 0x8e230000
    ctx->pc = 0x190d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_190d6c:
    // 0x190d6c: 0x40802d
    ctx->pc = 0x190d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_190d70:
    // 0x190d70: 0x8c62000c
    ctx->pc = 0x190d70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_190d74:
    // 0x190d74: 0x40f809
label_190d78:
    if (ctx->pc == 0x190D78u) {
        ctx->pc = 0x190D78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x190D7Cu;
        goto label_190d7c;
    }
    ctx->pc = 0x190D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x190D7Cu);
        ctx->pc = 0x190D78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190D40u: goto label_190d40;
            case 0x190D44u: goto label_190d44;
            case 0x190D48u: goto label_190d48;
            case 0x190D4Cu: goto label_190d4c;
            case 0x190D50u: goto label_190d50;
            case 0x190D54u: goto label_190d54;
            case 0x190D58u: goto label_190d58;
            case 0x190D5Cu: goto label_190d5c;
            case 0x190D60u: goto label_190d60;
            case 0x190D64u: goto label_190d64;
            case 0x190D68u: goto label_190d68;
            case 0x190D6Cu: goto label_190d6c;
            case 0x190D70u: goto label_190d70;
            case 0x190D74u: goto label_190d74;
            case 0x190D78u: goto label_190d78;
            case 0x190D7Cu: goto label_190d7c;
            case 0x190D80u: goto label_190d80;
            case 0x190D84u: goto label_190d84;
            case 0x190D88u: goto label_190d88;
            case 0x190D8Cu: goto label_190d8c;
            case 0x190D90u: goto label_190d90;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x190D7Cu; }
            if (ctx->pc != 0x190D7Cu) { return; }
        }
    }
    ctx->pc = 0x190D7Cu;
label_190d7c:
    // 0x190d7c: 0x200102d
    ctx->pc = 0x190d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_190d80:
    // 0x190d80: 0xdfbf0020
    ctx->pc = 0x190d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_190d84:
    // 0x190d84: 0xdfb10010
    ctx->pc = 0x190d84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_190d88:
    // 0x190d88: 0xdfb00000
    ctx->pc = 0x190d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_190d8c:
    // 0x190d8c: 0x3e00008
label_190d90:
    if (ctx->pc == 0x190D90u) {
        ctx->pc = 0x190D90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x190D94u;
        goto label_fallthrough_0x190d8c;
    }
    ctx->pc = 0x190D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190D90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190D40u: goto label_190d40;
            case 0x190D44u: goto label_190d44;
            case 0x190D48u: goto label_190d48;
            case 0x190D4Cu: goto label_190d4c;
            case 0x190D50u: goto label_190d50;
            case 0x190D54u: goto label_190d54;
            case 0x190D58u: goto label_190d58;
            case 0x190D5Cu: goto label_190d5c;
            case 0x190D60u: goto label_190d60;
            case 0x190D64u: goto label_190d64;
            case 0x190D68u: goto label_190d68;
            case 0x190D6Cu: goto label_190d6c;
            case 0x190D70u: goto label_190d70;
            case 0x190D74u: goto label_190d74;
            case 0x190D78u: goto label_190d78;
            case 0x190D7Cu: goto label_190d7c;
            case 0x190D80u: goto label_190d80;
            case 0x190D84u: goto label_190d84;
            case 0x190D88u: goto label_190d88;
            case 0x190D8Cu: goto label_190d8c;
            case 0x190D90u: goto label_190d90;
            default: break;
        }
        return;
    }
label_fallthrough_0x190d8c:
    ctx->pc = 0x190D94u;
}
