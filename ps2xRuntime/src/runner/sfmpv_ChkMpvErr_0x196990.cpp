#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ChkMpvErr
// Address: 0x196990 - 0x196a10
void sfmpv_ChkMpvErr_0x196990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ChkMpvErr");


    ctx->pc = 0x196990u;

    // 0x196990: 0x27bdfff0
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196994: 0x3c02ffff
    ctx->pc = 0x196994u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x196998: 0x3442fffd
    ctx->pc = 0x196998u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65533));
    // 0x19699c: 0x10a20011
    ctx->pc = 0x19699Cu;
    {
        const bool branch_taken_0x19699c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x1969A0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x19699c) {
            ctx->pc = 0x1969E4u;
            goto label_1969e4;
        }
    }
    ctx->pc = 0x1969A4u;
    // 0x1969a4: 0x45102b
    ctx->pc = 0x1969a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1969a8: 0x14400005
    ctx->pc = 0x1969A8u;
    {
        const bool branch_taken_0x1969a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1969a8) {
            ctx->pc = 0x1969C0u;
            goto label_1969c0;
        }
    }
    ctx->pc = 0x1969B0u;
    // 0x1969b0: 0x10a0000e
    ctx->pc = 0x1969B0u;
    {
        const bool branch_taken_0x1969b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1969B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1969b0) {
            ctx->pc = 0x1969ECu;
            goto label_1969ec;
        }
    }
    ctx->pc = 0x1969B8u;
    // 0x1969b8: 0x10000010
    ctx->pc = 0x1969B8u;
    {
        const bool branch_taken_0x1969b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1969b8) {
            ctx->pc = 0x1969FCu;
            goto label_1969fc;
        }
    }
    ctx->pc = 0x1969C0u;
label_1969c0:
    // 0x1969c0: 0x3c02ffff
    ctx->pc = 0x1969c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x1969c4: 0x3442fffe
    ctx->pc = 0x1969c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x1969c8: 0x54a2000c
    ctx->pc = 0x1969C8u;
    {
        const bool branch_taken_0x1969c8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x1969c8) {
            ctx->pc = 0x1969CCu;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1969FCu;
            goto label_1969fc;
        }
    }
    ctx->pc = 0x1969D0u;
    // 0x1969d0: 0x1cc0000c
    ctx->pc = 0x1969D0u;
    {
        const bool branch_taken_0x1969d0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1969D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1969d0) {
            ctx->pc = 0x196A04u;
            goto label_196a04;
        }
    }
    ctx->pc = 0x1969D8u;
    // 0x1969d8: 0x3c05ffff
    ctx->pc = 0x1969d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x1969dc: 0x10000007
    ctx->pc = 0x1969DCu;
    {
        const bool branch_taken_0x1969dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1969E0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
        if (branch_taken_0x1969dc) {
            ctx->pc = 0x1969FCu;
            goto label_1969fc;
        }
    }
    ctx->pc = 0x1969E4u;
label_1969e4:
    // 0x1969e4: 0x18c00003
    ctx->pc = 0x1969E4u;
    {
        const bool branch_taken_0x1969e4 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1969e4) {
            ctx->pc = 0x1969F4u;
            goto label_1969f4;
        }
    }
    ctx->pc = 0x1969ECu;
label_1969ec:
    // 0x1969ec: 0x10000005
    ctx->pc = 0x1969ECu;
    {
        const bool branch_taken_0x1969ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1969F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1969ec) {
            ctx->pc = 0x196A04u;
            goto label_196a04;
        }
    }
    ctx->pc = 0x1969F4u;
label_1969f4:
    // 0x1969f4: 0x3c05ffff
    ctx->pc = 0x1969f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
    // 0x1969f8: 0x34a5fffd
    ctx->pc = 0x1969f8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65533));
label_1969fc:
    // 0x1969fc: 0xc064ea0
    ctx->pc = 0x1969FCu;
    SET_GPR_U32(ctx, 31, 0x196A04u);
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196A04u; }
        else if (ctx->pc != 0x196A04u) { ctx->pc = 0x196A04u; }
    }
    if (ctx->pc != 0x196A04u) { return; }
    ctx->pc = 0x196A04u;
label_196a04:
    // 0x196a04: 0xdfbf0000
    ctx->pc = 0x196a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196a08: 0x3e00008
    ctx->pc = 0x196A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196A0Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1969C0u: goto label_1969c0;
            case 0x1969E4u: goto label_1969e4;
            case 0x1969ECu: goto label_1969ec;
            case 0x1969F4u: goto label_1969f4;
            case 0x1969FCu: goto label_1969fc;
            case 0x196A04u: goto label_196a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196A10u;
}
