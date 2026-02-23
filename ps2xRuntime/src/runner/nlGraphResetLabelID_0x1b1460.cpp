#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlGraphResetLabelID
// Address: 0x1b1460 - 0x1b14ac
void nlGraphResetLabelID_0x1b1460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlGraphResetLabelID");


    ctx->pc = 0x1b1460u;

    // 0x1b1460: 0x27bdffe0
    ctx->pc = 0x1b1460u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b1464: 0x7fbf0010
    ctx->pc = 0x1b1464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1b1468: 0xc069558
    ctx->pc = 0x1B1468u;
    SET_GPR_U32(ctx, 31, 0x1B1470u);
    ctx->pc = 0x1B146Cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1A5560u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaGetMFifoStat_0x1a5560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1470u; }
        else if (ctx->pc != 0x1B1470u) { ctx->pc = 0x1B1470u; }
    }
    if (ctx->pc != 0x1B1470u) { return; }
    ctx->pc = 0x1B1470u;
    // 0x1b1470: 0x70408628
    ctx->pc = 0x1b1470u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b1474: 0x16000003
    ctx->pc = 0x1B1474u;
    {
        const bool branch_taken_0x1b1474 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1478u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937352), GPR_U32(ctx, 0));
        if (branch_taken_0x1b1474) {
            ctx->pc = 0x1B1484u;
            goto label_1b1484;
        }
    }
    ctx->pc = 0x1B147Cu;
    // 0x1b147c: 0xc0694bc
    ctx->pc = 0x1B147Cu;
    SET_GPR_U32(ctx, 31, 0x1B1484u);
    ctx->pc = 0x1A52F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaBeginMFifo_0x1a52f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1484u; }
        else if (ctx->pc != 0x1B1484u) { ctx->pc = 0x1B1484u; }
    }
    if (ctx->pc != 0x1B1484u) { return; }
    ctx->pc = 0x1B1484u;
label_1b1484:
    // 0x1b1484: 0xc06c52c
    ctx->pc = 0x1B1484u;
    SET_GPR_U32(ctx, 31, 0x1B148Cu);
    ctx->pc = 0x1B14B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlGraphEntryLabelID_0x1b14b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B148Cu; }
        else if (ctx->pc != 0x1B148Cu) { ctx->pc = 0x1B148Cu; }
    }
    if (ctx->pc != 0x1B148Cu) { return; }
    ctx->pc = 0x1B148Cu;
    // 0x1b148c: 0x16000003
    ctx->pc = 0x1B148Cu;
    {
        const bool branch_taken_0x1b148c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1B1490u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1b148c) {
            ctx->pc = 0x1B149Cu;
            goto label_1b149c;
        }
    }
    ctx->pc = 0x1B1494u;
    // 0x1b1494: 0xc0694e8
    ctx->pc = 0x1B1494u;
    SET_GPR_U32(ctx, 31, 0x1B149Cu);
    ctx->pc = 0x1B1498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A53A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlDmaEndMFifo_0x1a53a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B149Cu; }
        else if (ctx->pc != 0x1B149Cu) { ctx->pc = 0x1B149Cu; }
    }
    if (ctx->pc != 0x1B149Cu) { return; }
    ctx->pc = 0x1B149Cu;
label_1b149c:
    // 0x1b149c: 0x7bbf0010
    ctx->pc = 0x1b149cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b14a0: 0x7bb00000
    ctx->pc = 0x1b14a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b14a4: 0x3e00008
    ctx->pc = 0x1B14A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B14A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1484u: goto label_1b1484;
            case 0x1B149Cu: goto label_1b149c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B14ACu;
}
