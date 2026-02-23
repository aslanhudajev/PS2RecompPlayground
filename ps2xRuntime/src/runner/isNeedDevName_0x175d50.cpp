#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: isNeedDevName
// Address: 0x175d50 - 0x175d9c
void isNeedDevName_0x175d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("isNeedDevName");


    ctx->pc = 0x175d50u;

label_175d50:
    // 0x175d50: 0x27bdfff0
    ctx->pc = 0x175d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_175d54:
    // 0x175d54: 0xffbf0000
    ctx->pc = 0x175d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175d58:
    // 0x175d58: 0xc05d142
label_175d5c:
    if (ctx->pc == 0x175D5Cu) {
        ctx->pc = 0x175D60u;
        goto label_175d60;
    }
    ctx->pc = 0x175D58u;
    SET_GPR_U32(ctx, 31, 0x175D60u);
    ctx->pc = 0x174508u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDevice_0x174508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175D60u; }
        else if (ctx->pc != 0x175D60u) { ctx->pc = 0x175D60u; }
    }
    if (ctx->pc != 0x175D60u) { return; }
    ctx->pc = 0x175D60u;
label_175d60:
    // 0x175d60: 0x5040000b
label_175d64:
    if (ctx->pc == 0x175D64u) {
        ctx->pc = 0x175D64u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175D68u;
        goto label_175d68;
    }
    ctx->pc = 0x175D60u;
    {
        const bool branch_taken_0x175d60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x175d60) {
            ctx->pc = 0x175D64u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x175D90u;
            goto label_175d90;
        }
    }
    ctx->pc = 0x175D68u;
label_175d68:
    // 0x175d68: 0x8c420060
    ctx->pc = 0x175d68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_175d6c:
    // 0x175d6c: 0x10400007
label_175d70:
    if (ctx->pc == 0x175D70u) {
        ctx->pc = 0x175D70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175D74u;
        goto label_175d74;
    }
    ctx->pc = 0x175D6Cu;
    {
        const bool branch_taken_0x175d6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x175D70u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x175d6c) {
            ctx->pc = 0x175D8Cu;
            goto label_175d8c;
        }
    }
    ctx->pc = 0x175D74u;
label_175d74:
    // 0x175d74: 0x24050064
    ctx->pc = 0x175d74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
label_175d78:
    // 0x175d78: 0x302d
    ctx->pc = 0x175d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d7c:
    // 0x175d7c: 0x40f809
label_175d80:
    if (ctx->pc == 0x175D80u) {
        ctx->pc = 0x175D80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x175D84u;
        goto label_175d84;
    }
    ctx->pc = 0x175D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175D84u);
        ctx->pc = 0x175D80u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175D50u: goto label_175d50;
            case 0x175D54u: goto label_175d54;
            case 0x175D58u: goto label_175d58;
            case 0x175D5Cu: goto label_175d5c;
            case 0x175D60u: goto label_175d60;
            case 0x175D64u: goto label_175d64;
            case 0x175D68u: goto label_175d68;
            case 0x175D6Cu: goto label_175d6c;
            case 0x175D70u: goto label_175d70;
            case 0x175D74u: goto label_175d74;
            case 0x175D78u: goto label_175d78;
            case 0x175D7Cu: goto label_175d7c;
            case 0x175D80u: goto label_175d80;
            case 0x175D84u: goto label_175d84;
            case 0x175D88u: goto label_175d88;
            case 0x175D8Cu: goto label_175d8c;
            case 0x175D90u: goto label_175d90;
            case 0x175D94u: goto label_175d94;
            case 0x175D98u: goto label_175d98;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x175D84u; }
            if (ctx->pc != 0x175D84u) { return; }
        }
    }
    ctx->pc = 0x175D84u;
label_175d84:
    // 0x175d84: 0x10000003
label_175d88:
    if (ctx->pc == 0x175D88u) {
        ctx->pc = 0x175D88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x175D8Cu;
        goto label_175d8c;
    }
    ctx->pc = 0x175D84u;
    {
        const bool branch_taken_0x175d84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x175D88u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x175d84) {
            ctx->pc = 0x175D94u;
            goto label_175d94;
        }
    }
    ctx->pc = 0x175D8Cu;
label_175d8c:
    // 0x175d8c: 0x102d
    ctx->pc = 0x175d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175d90:
    // 0x175d90: 0xdfbf0000
    ctx->pc = 0x175d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175d94:
    // 0x175d94: 0x3e00008
label_175d98:
    if (ctx->pc == 0x175D98u) {
        ctx->pc = 0x175D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x175D9Cu;
        goto label_fallthrough_0x175d94;
    }
    ctx->pc = 0x175D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D98u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175D50u: goto label_175d50;
            case 0x175D54u: goto label_175d54;
            case 0x175D58u: goto label_175d58;
            case 0x175D5Cu: goto label_175d5c;
            case 0x175D60u: goto label_175d60;
            case 0x175D64u: goto label_175d64;
            case 0x175D68u: goto label_175d68;
            case 0x175D6Cu: goto label_175d6c;
            case 0x175D70u: goto label_175d70;
            case 0x175D74u: goto label_175d74;
            case 0x175D78u: goto label_175d78;
            case 0x175D7Cu: goto label_175d7c;
            case 0x175D80u: goto label_175d80;
            case 0x175D84u: goto label_175d84;
            case 0x175D88u: goto label_175d88;
            case 0x175D8Cu: goto label_175d8c;
            case 0x175D90u: goto label_175d90;
            case 0x175D94u: goto label_175d94;
            case 0x175D98u: goto label_175d98;
            default: break;
        }
        return;
    }
label_fallthrough_0x175d94:
    ctx->pc = 0x175D9Cu;
}
