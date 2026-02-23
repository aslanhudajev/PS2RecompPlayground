#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: iWakeupThread
// Address: 0x155818 - 0x1558ac
void iWakeupThread_0x155818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("iWakeupThread");


    ctx->pc = 0x155818u;

    // 0x155818: 0x27bdffe0
    ctx->pc = 0x155818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15581c: 0xffbf0010
    ctx->pc = 0x15581cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155820: 0xffb00000
    ctx->pc = 0x155820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x155824: 0x2403ffd1
    ctx->pc = 0x155824u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x155828: 0xc
    ctx->pc = 0x155828u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x15582c: 0x40802d
    ctx->pc = 0x15582cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155830: 0x12040005
    ctx->pc = 0x155830u;
    {
        const bool branch_taken_0x155830 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x155834u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x155830) {
            ctx->pc = 0x155848u;
            goto label_155848;
        }
    }
    ctx->pc = 0x155838u;
    // 0x155838: 0xc055208
    ctx->pc = 0x155838u;
    SET_GPR_U32(ctx, 31, 0x155840u);
    ctx->pc = 0x154820u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iWakeupThread_0x154820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155840u; }
        else if (ctx->pc != 0x155840u) { ctx->pc = 0x155840u; }
    }
    if (ctx->pc != 0x155840u) { return; }
    ctx->pc = 0x155840u;
    // 0x155840: 0x10000017
    ctx->pc = 0x155840u;
    {
        const bool branch_taken_0x155840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155844u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x155840) {
            ctx->pc = 0x1558A0u;
            goto label_1558a0;
        }
    }
    ctx->pc = 0x155848u;
label_155848:
    // 0x155848: 0x10400004
    ctx->pc = 0x155848u;
    {
        const bool branch_taken_0x155848 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x15584Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x155848) {
            ctx->pc = 0x15585Cu;
            goto label_15585c;
        }
    }
    ctx->pc = 0x155850u;
    // 0x155850: 0x8c43a020
    ctx->pc = 0x155850u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942752)));
    // 0x155854: 0x14600003
    ctx->pc = 0x155854u;
    {
        const bool branch_taken_0x155854 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x155858u;
        SET_GPR_U32(ctx, 3, ((uint32_t)45 << 16));
        if (branch_taken_0x155854) {
            ctx->pc = 0x155864u;
            goto label_155864;
        }
    }
    ctx->pc = 0x15585Cu;
label_15585c:
    // 0x15585c: 0x1000000f
    ctx->pc = 0x15585Cu;
    {
        const bool branch_taken_0x15585c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x155860u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x15585c) {
            ctx->pc = 0x15589Cu;
            goto label_15589c;
        }
    }
    ctx->pc = 0x155864u;
label_155864:
    // 0x155864: 0x3c05002d
    ctx->pc = 0x155864u;
    SET_GPR_U32(ctx, 5, ((uint32_t)45 << 16));
    // 0x155868: 0x24636fe8
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 28648));
    // 0x15586c: 0x8ca46fe0
    ctx->pc = 0x15586cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 28640)));
    // 0x155870: 0x8c620004
    ctx->pc = 0x155870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x155874: 0x304201ff
    ctx->pc = 0x155874u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x155878: 0x23040
    ctx->pc = 0x155878u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x15587c: 0x24420001
    ctx->pc = 0x15587cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x155880: 0x662821
    ctx->pc = 0x155880u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x155884: 0xac620004
    ctx->pc = 0x155884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x155888: 0xa0182d
    ctx->pc = 0x155888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15588c: 0xa0a00008
    ctx->pc = 0x15588cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x155890: 0xc055244
    ctx->pc = 0x155890u;
    SET_GPR_U32(ctx, 31, 0x155898u);
    ctx->pc = 0x155894u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x154910u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x154910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155898u; }
        else if (ctx->pc != 0x155898u) { ctx->pc = 0x155898u; }
    }
    if (ctx->pc != 0x155898u) { return; }
    ctx->pc = 0x155898u;
    // 0x155898: 0x200102d
    ctx->pc = 0x155898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15589c:
    // 0x15589c: 0xdfbf0010
    ctx->pc = 0x15589cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1558a0:
    // 0x1558a0: 0xdfb00000
    ctx->pc = 0x1558a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1558a4: 0x3e00008
    ctx->pc = 0x1558A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1558A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155848u: goto label_155848;
            case 0x15585Cu: goto label_15585c;
            case 0x155864u: goto label_155864;
            case 0x15589Cu: goto label_15589c;
            case 0x1558A0u: goto label_1558a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1558ACu;
}
