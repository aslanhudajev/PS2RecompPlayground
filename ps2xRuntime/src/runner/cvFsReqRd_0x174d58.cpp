#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cvFsReqRd
// Address: 0x174d58 - 0x174dbc
void cvFsReqRd_0x174d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cvFsReqRd");


    ctx->pc = 0x174d58u;

label_174d58:
    // 0x174d58: 0x27bdffe0
    ctx->pc = 0x174d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_174d5c:
    // 0x174d5c: 0xffbf0010
    ctx->pc = 0x174d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_174d60:
    // 0x174d60: 0x14800006
label_174d64:
    if (ctx->pc == 0x174D64u) {
        ctx->pc = 0x174D64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x174D68u;
        goto label_174d68;
    }
    ctx->pc = 0x174D60u;
    {
        const bool branch_taken_0x174d60 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x174D64u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x174d60) {
            ctx->pc = 0x174D7Cu;
            goto label_174d7c;
        }
    }
    ctx->pc = 0x174D68u;
label_174d68:
    // 0x174d68: 0x3c04002c
    ctx->pc = 0x174d68u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_174d6c:
    // 0x174d6c: 0xc05d076
label_174d70:
    if (ctx->pc == 0x174D70u) {
        ctx->pc = 0x174D70u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944352));
        ctx->pc = 0x174D74u;
        goto label_174d74;
    }
    ctx->pc = 0x174D6Cu;
    SET_GPR_U32(ctx, 31, 0x174D74u);
    ctx->pc = 0x174D70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944352));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174D74u; }
        else if (ctx->pc != 0x174D74u) { ctx->pc = 0x174D74u; }
    }
    if (ctx->pc != 0x174D74u) { return; }
    ctx->pc = 0x174D74u;
label_174d74:
    // 0x174d74: 0x1000000d
label_174d78:
    if (ctx->pc == 0x174D78u) {
        ctx->pc = 0x174D78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D7Cu;
        goto label_174d7c;
    }
    ctx->pc = 0x174D74u;
    {
        const bool branch_taken_0x174d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d74) {
            ctx->pc = 0x174DACu;
            goto label_174dac;
        }
    }
    ctx->pc = 0x174D7Cu;
label_174d7c:
    // 0x174d7c: 0x8c820000
    ctx->pc = 0x174d7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174d80:
    // 0x174d80: 0x8c420020
    ctx->pc = 0x174d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_174d84:
    // 0x174d84: 0x50400005
label_174d88:
    if (ctx->pc == 0x174D88u) {
        ctx->pc = 0x174D88u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x174D8Cu;
        goto label_174d8c;
    }
    ctx->pc = 0x174D84u;
    {
        const bool branch_taken_0x174d84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x174d84) {
            ctx->pc = 0x174D88u;
            SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
            ctx->pc = 0x174D9Cu;
            goto label_174d9c;
        }
    }
    ctx->pc = 0x174D8Cu;
label_174d8c:
    // 0x174d8c: 0x40f809
label_174d90:
    if (ctx->pc == 0x174D90u) {
        ctx->pc = 0x174D90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x174D94u;
        goto label_174d94;
    }
    ctx->pc = 0x174D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174D94u);
        ctx->pc = 0x174D90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174D58u: goto label_174d58;
            case 0x174D5Cu: goto label_174d5c;
            case 0x174D60u: goto label_174d60;
            case 0x174D64u: goto label_174d64;
            case 0x174D68u: goto label_174d68;
            case 0x174D6Cu: goto label_174d6c;
            case 0x174D70u: goto label_174d70;
            case 0x174D74u: goto label_174d74;
            case 0x174D78u: goto label_174d78;
            case 0x174D7Cu: goto label_174d7c;
            case 0x174D80u: goto label_174d80;
            case 0x174D84u: goto label_174d84;
            case 0x174D88u: goto label_174d88;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174D90u: goto label_174d90;
            case 0x174D94u: goto label_174d94;
            case 0x174D98u: goto label_174d98;
            case 0x174D9Cu: goto label_174d9c;
            case 0x174DA0u: goto label_174da0;
            case 0x174DA4u: goto label_174da4;
            case 0x174DA8u: goto label_174da8;
            case 0x174DACu: goto label_174dac;
            case 0x174DB0u: goto label_174db0;
            case 0x174DB4u: goto label_174db4;
            case 0x174DB8u: goto label_174db8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174D94u; }
            if (ctx->pc != 0x174D94u) { return; }
        }
    }
    ctx->pc = 0x174D94u;
label_174d94:
    // 0x174d94: 0x10000004
label_174d98:
    if (ctx->pc == 0x174D98u) {
        ctx->pc = 0x174D98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x174D9Cu;
        goto label_174d9c;
    }
    ctx->pc = 0x174D94u;
    {
        const bool branch_taken_0x174d94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x174D98u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x174d94) {
            ctx->pc = 0x174DA8u;
            goto label_174da8;
        }
    }
    ctx->pc = 0x174D9Cu;
label_174d9c:
    // 0x174d9c: 0x802d
    ctx->pc = 0x174d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174da0:
    // 0x174da0: 0xc05d076
label_174da4:
    if (ctx->pc == 0x174DA4u) {
        ctx->pc = 0x174DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944384));
        ctx->pc = 0x174DA8u;
        goto label_174da8;
    }
    ctx->pc = 0x174DA0u;
    SET_GPR_U32(ctx, 31, 0x174DA8u);
    ctx->pc = 0x174DA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294944384));
    ctx->pc = 0x1741D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsError_0x1741d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174DA8u; }
        else if (ctx->pc != 0x174DA8u) { ctx->pc = 0x174DA8u; }
    }
    if (ctx->pc != 0x174DA8u) { return; }
    ctx->pc = 0x174DA8u;
label_174da8:
    // 0x174da8: 0x200102d
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174dac:
    // 0x174dac: 0xdfbf0010
    ctx->pc = 0x174dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_174db0:
    // 0x174db0: 0xdfb00000
    ctx->pc = 0x174db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_174db4:
    // 0x174db4: 0x3e00008
label_174db8:
    if (ctx->pc == 0x174DB8u) {
        ctx->pc = 0x174DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x174DBCu;
        goto label_fallthrough_0x174db4;
    }
    ctx->pc = 0x174DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174DB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174D58u: goto label_174d58;
            case 0x174D5Cu: goto label_174d5c;
            case 0x174D60u: goto label_174d60;
            case 0x174D64u: goto label_174d64;
            case 0x174D68u: goto label_174d68;
            case 0x174D6Cu: goto label_174d6c;
            case 0x174D70u: goto label_174d70;
            case 0x174D74u: goto label_174d74;
            case 0x174D78u: goto label_174d78;
            case 0x174D7Cu: goto label_174d7c;
            case 0x174D80u: goto label_174d80;
            case 0x174D84u: goto label_174d84;
            case 0x174D88u: goto label_174d88;
            case 0x174D8Cu: goto label_174d8c;
            case 0x174D90u: goto label_174d90;
            case 0x174D94u: goto label_174d94;
            case 0x174D98u: goto label_174d98;
            case 0x174D9Cu: goto label_174d9c;
            case 0x174DA0u: goto label_174da0;
            case 0x174DA4u: goto label_174da4;
            case 0x174DA8u: goto label_174da8;
            case 0x174DACu: goto label_174dac;
            case 0x174DB0u: goto label_174db0;
            case 0x174DB4u: goto label_174db4;
            case 0x174DB8u: goto label_174db8;
            default: break;
        }
        return;
    }
label_fallthrough_0x174db4:
    ctx->pc = 0x174DBCu;
}
