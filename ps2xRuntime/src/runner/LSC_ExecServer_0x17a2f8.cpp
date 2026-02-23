#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_ExecServer
// Address: 0x17a2f8 - 0x17a368
void LSC_ExecServer_0x17a2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_ExecServer");


    ctx->pc = 0x17a2f8u;

    // 0x17a2f8: 0x27bdffb0
    ctx->pc = 0x17a2f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a2fc: 0xffb20030
    ctx->pc = 0x17a2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x17a300: 0x3a0202d
    ctx->pc = 0x17a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a304: 0xffb10020
    ctx->pc = 0x17a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x17a308: 0xffb00010
    ctx->pc = 0x17a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17a30c: 0xffbf0040
    ctx->pc = 0x17a30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a310: 0xc05e9b4
    ctx->pc = 0x17A310u;
    SET_GPR_U32(ctx, 31, 0x17A318u);
    ctx->pc = 0x17A314u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17A6D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_LockCrs_0x17a6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A318u; }
        else if (ctx->pc != 0x17A318u) { ctx->pc = 0x17A318u; }
    }
    if (ctx->pc != 0x17A318u) { return; }
    ctx->pc = 0x17A318u;
    // 0x17a318: 0x3c020024
    ctx->pc = 0x17a318u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x17a31c: 0x2450a680
    ctx->pc = 0x17a31cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294944384));
    // 0x17a320: 0x261121c0
    ctx->pc = 0x17a320u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 8640));
    // 0x17a324: 0x82020000
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_17a328:
    // 0x17a328: 0x54520004
    ctx->pc = 0x17A328u;
    {
        const bool branch_taken_0x17a328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x17a328) {
            ctx->pc = 0x17A32Cu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1080));
            ctx->pc = 0x17A33Cu;
            goto label_17a33c;
        }
    }
    ctx->pc = 0x17A330u;
    // 0x17a330: 0xc05eafa
    ctx->pc = 0x17A330u;
    SET_GPR_U32(ctx, 31, 0x17A338u);
    ctx->pc = 0x17A334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17ABE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        lsc_ExecHndl_0x17abe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A338u; }
        else if (ctx->pc != 0x17A338u) { ctx->pc = 0x17A338u; }
    }
    if (ctx->pc != 0x17A338u) { return; }
    ctx->pc = 0x17A338u;
    // 0x17a338: 0x26100438
    ctx->pc = 0x17a338u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1080));
label_17a33c:
    // 0x17a33c: 0x211102a
    ctx->pc = 0x17a33cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x17a340: 0x5440fff9
    ctx->pc = 0x17A340u;
    {
        const bool branch_taken_0x17a340 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a340) {
            ctx->pc = 0x17A344u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x17A328u;
            goto label_17a328;
        }
    }
    ctx->pc = 0x17A348u;
    // 0x17a348: 0xc05e9bc
    ctx->pc = 0x17A348u;
    SET_GPR_U32(ctx, 31, 0x17A350u);
    ctx->pc = 0x17A34Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_UnlockCrs_0x17a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A350u; }
        else if (ctx->pc != 0x17A350u) { ctx->pc = 0x17A350u; }
    }
    if (ctx->pc != 0x17A350u) { return; }
    ctx->pc = 0x17A350u;
    // 0x17a350: 0xdfbf0040
    ctx->pc = 0x17a350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a354: 0xdfb20030
    ctx->pc = 0x17a354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a358: 0xdfb10020
    ctx->pc = 0x17a358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a35c: 0xdfb00010
    ctx->pc = 0x17a35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a360: 0x3e00008
    ctx->pc = 0x17A360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A364u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A328u: goto label_17a328;
            case 0x17A33Cu: goto label_17a33c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A368u;
}
