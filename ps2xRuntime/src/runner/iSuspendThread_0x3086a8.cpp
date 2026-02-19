#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSuspendThread
// Address: 0x3086a8 - 0x308724
void iSuspendThread_0x3086a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3086a8u;

    // 0x3086a8: 0x27bdffe0
    ctx->pc = 0x3086a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3086ac: 0xffbf0010
    ctx->pc = 0x3086acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3086b0: 0xffb00000
    ctx->pc = 0x3086b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3086b4: 0x2403ffd1
    ctx->pc = 0x3086b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x3086b8: 0xc
    ctx->pc = 0x3086b8u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x3086bc: 0x40802d
    ctx->pc = 0x3086bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3086c0: 0x12040005
    ctx->pc = 0x3086C0u;
    {
        const bool branch_taken_0x3086c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 4));
        ctx->pc = 0x3086C4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 256));
        if (branch_taken_0x3086c0) {
            ctx->pc = 0x3086D8u;
            goto label_3086d8;
        }
    }
    ctx->pc = 0x3086C8u;
    // 0x3086c8: 0xc0c0d58
    ctx->pc = 0x3086C8u;
    SET_GPR_U32(ctx, 31, 0x3086D0u);
    ctx->pc = 0x303560u;
    {
        const uint32_t __entryPc = ctx->pc;
        _iSuspendThread_0x303560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3086D0u; }
    }
    if (ctx->pc != 0x3086D0u) { return; }
    ctx->pc = 0x3086D0u;
    // 0x3086d0: 0x10000011
    ctx->pc = 0x3086D0u;
    {
        const bool branch_taken_0x3086d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3086D4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x3086d0) {
            ctx->pc = 0x308718u;
            goto label_308718;
        }
    }
    ctx->pc = 0x3086D8u;
label_3086d8:
    // 0x3086d8: 0x10400004
    ctx->pc = 0x3086D8u;
    {
        const bool branch_taken_0x3086d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3086DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x3086d8) {
            ctx->pc = 0x3086ECu;
            goto label_3086ec;
        }
    }
    ctx->pc = 0x3086E0u;
    // 0x3086e0: 0x8c4342a0
    ctx->pc = 0x3086e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 17056)));
    // 0x3086e4: 0x14600003
    ctx->pc = 0x3086E4u;
    {
        const bool branch_taken_0x3086e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x3086E8u;
        SET_GPR_U32(ctx, 5, ((uint32_t)62 << 16));
        if (branch_taken_0x3086e4) {
            ctx->pc = 0x3086F4u;
            goto label_3086f4;
        }
    }
    ctx->pc = 0x3086ECu;
label_3086ec:
    // 0x3086ec: 0x10000009
    ctx->pc = 0x3086ECu;
    {
        const bool branch_taken_0x3086ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3086F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x3086ec) {
            ctx->pc = 0x308714u;
            goto label_308714;
        }
    }
    ctx->pc = 0x3086F4u;
label_3086f4:
    // 0x3086f4: 0x3c02003e
    ctx->pc = 0x3086f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x3086f8: 0x8c447478
    ctx->pc = 0x3086f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 29816)));
    // 0x3086fc: 0x24a37470
    ctx->pc = 0x3086fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 29808));
    // 0x308700: 0x24020002
    ctx->pc = 0x308700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x308704: 0xac700004
    ctx->pc = 0x308704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x308708: 0xc0c0d84
    ctx->pc = 0x308708u;
    SET_GPR_U32(ctx, 31, 0x308710u);
    ctx->pc = 0x30870Cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 29808), GPR_U32(ctx, 2));
    ctx->pc = 0x303610u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x303610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x308710u; }
    }
    if (ctx->pc != 0x308710u) { return; }
    ctx->pc = 0x308710u;
    // 0x308710: 0x200102d
    ctx->pc = 0x308710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308714:
    // 0x308714: 0xdfbf0010
    ctx->pc = 0x308714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308718:
    // 0x308718: 0xdfb00000
    ctx->pc = 0x308718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30871c: 0x3e00008
    ctx->pc = 0x30871Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308720u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3086D8u: goto label_3086d8;
            case 0x3086ECu: goto label_3086ec;
            case 0x3086F4u: goto label_3086f4;
            case 0x308714u: goto label_308714;
            case 0x308718u: goto label_308718;
            default: break;
        }
        return;
    }
    ctx->pc = 0x308724u;
}
