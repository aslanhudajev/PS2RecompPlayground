#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxm_lock
// Address: 0x16c818 - 0x16c884
// Called from SVM_Unlock as callback; must preserve $gp (r28) across callees that may corrupt it.
void adxm_lock_0x16c818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxm_lock");
    ctx->pc = 0x16c818u;

    const uint32_t saved_gp = GPR_U32(ctx, 28);

    // 0x16c818: 0x27bdffe0
    ctx->pc = 0x16c818u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c81c: 0x8f828134
    ctx->pc = 0x16c81cu;
    SET_GPR_U32(ctx, 28, saved_gp);
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934836)));
    // 0x16c820: 0xffbf0010
    ctx->pc = 0x16c820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c824: 0x14400011
    ctx->pc = 0x16C824u;
    {
        const bool branch_taken_0x16c824 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C828u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x16c824) {
            ctx->pc = 0x16C86Cu;
            goto label_16c86c;
        }
    }
    ctx->pc = 0x16C82Cu;
    // 0x16c82c: 0xc0551f4
    ctx->pc = 0x16C82Cu;
    SET_GPR_U32(ctx, 31, 0x16C834u);
    ctx->pc = 0x1547D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x1547d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C834u; }
        else if (ctx->pc != 0x16C834u) { ctx->pc = 0x16C834u; }
    }
    if (ctx->pc != 0x16C834u) { return; }
    ctx->pc = 0x16C834u;
    // 0x16c834: 0x3c030023
    ctx->pc = 0x16c834u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x16c838: 0x40802d
    ctx->pc = 0x16c838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c83c: 0x8c65e6c0
    ctx->pc = 0x16c83cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294960832)));
    // 0x16c840: 0xc0551dc
    ctx->pc = 0x16C840u;
    SET_GPR_U32(ctx, 31, 0x16C848u);
    ctx->pc = 0x16C844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x154770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x154770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C848u; }
        else if (ctx->pc != 0x16C848u) { ctx->pc = 0x16C848u; }
    }
    if (ctx->pc != 0x16C848u) { return; }
    ctx->pc = 0x16C848u;
    // 0x16c848: 0x8f838170
    ctx->pc = 0x16c848u;
    SET_GPR_U32(ctx, 28, saved_gp);
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16c84c: 0xaf8281e4
    ctx->pc = 0x16c84cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935012), GPR_U32(ctx, 2));
    // 0x16c850: 0x10600005
    ctx->pc = 0x16C850u;
    {
        const bool branch_taken_0x16c850 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x16C854u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935016), GPR_U32(ctx, 16));
        if (branch_taken_0x16c850) {
            ctx->pc = 0x16C868u;
            goto label_16c868;
        }
    }
    ctx->pc = 0x16C858u;
    // 0x16c858: 0x8f848170
    ctx->pc = 0x16c858u;
    SET_GPR_U32(ctx, 28, saved_gp);
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x16c85c: 0xc05b340
    ctx->pc = 0x16C85Cu;
    SET_GPR_U32(ctx, 31, 0x16C864u);
    ctx->pc = 0x16CD00u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxm_ResumeThread_0x16cd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C864u; }
        else if (ctx->pc != 0x16C864u) { ctx->pc = 0x16C864u; }
    }
    if (ctx->pc != 0x16C864u) { return; }
    ctx->pc = 0x16C864u;
    // 0x16c864: 0x8f838170
    ctx->pc = 0x16c864u;
    SET_GPR_U32(ctx, 28, saved_gp);
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_16c868:
    // 0x16c868: 0x8f828134
    ctx->pc = 0x16c868u;
    SET_GPR_U32(ctx, 28, saved_gp);
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934836)));
label_16c86c:
    // 0x16c86c: 0x24420001
    ctx->pc = 0x16c86cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16c870: 0xdfbf0010
    ctx->pc = 0x16c870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c874: 0xdfb00000
    ctx->pc = 0x16c874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c878: 0xaf828134
    ctx->pc = 0x16c878u;
    SET_GPR_U32(ctx, 28, saved_gp);
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934836), GPR_U32(ctx, 2));
    // 0x16c87c: 0x3e00008
    ctx->pc = 0x16C87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C880u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C868u: goto label_16c868;
            case 0x16C86Cu: goto label_16c86c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C884u;
}
