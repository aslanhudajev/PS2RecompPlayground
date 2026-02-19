#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrapSwitch
// Address: 0x2607b0 - 0x260830
void AudioTrapSwitch_0x2607b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2607b0u;

    // 0x2607b0: 0x27bdfff0
    ctx->pc = 0x2607b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2607b4: 0xffbf0000
    ctx->pc = 0x2607b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2607b8: 0x80302d
    ctx->pc = 0x2607b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2607bc: 0x3c040034
    ctx->pc = 0x2607bcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2607c0: 0x2484dc48
    ctx->pc = 0x2607c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958152));
    // 0x2607c4: 0x3c020034
    ctx->pc = 0x2607c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2607c8: 0x8c42e7f0
    ctx->pc = 0x2607c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x2607cc: 0x21080
    ctx->pc = 0x2607ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2607d0: 0x24030038
    ctx->pc = 0x2607d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2607d4: 0xa32818
    ctx->pc = 0x2607d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2607d8: 0x451021
    ctx->pc = 0x2607d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2607dc: 0x441021
    ctx->pc = 0x2607dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2607e0: 0x8c440000
    ctx->pc = 0x2607e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2607e4: 0x3c020032
    ctx->pc = 0x2607e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2607e8: 0x8c42080c
    ctx->pc = 0x2607e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x2607ec: 0x1440000e
    ctx->pc = 0x2607ECu;
    {
        const bool branch_taken_0x2607ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2607F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2607ec) {
            ctx->pc = 0x260828u;
            goto label_260828;
        }
    }
    ctx->pc = 0x2607F4u;
    // 0x2607f4: 0x3c020032
    ctx->pc = 0x2607f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2607f8: 0x8c420810
    ctx->pc = 0x2607f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
    // 0x2607fc: 0x1440000a
    ctx->pc = 0x2607FCu;
    {
        const bool branch_taken_0x2607fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x260800u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2607fc) {
            ctx->pc = 0x260828u;
            goto label_260828;
        }
    }
    ctx->pc = 0x260804u;
    // 0x260804: 0x8c42d934
    ctx->pc = 0x260804u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x260808: 0x4410007
    ctx->pc = 0x260808u;
    {
        const bool branch_taken_0x260808 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x260808) {
            ctx->pc = 0x260828u;
            goto label_260828;
        }
    }
    ctx->pc = 0x260810u;
    // 0x260810: 0x4800005
    ctx->pc = 0x260810u;
    {
        const bool branch_taken_0x260810 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x260814u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x260810) {
            ctx->pc = 0x260828u;
            goto label_260828;
        }
    }
    ctx->pc = 0x260818u;
    // 0x260818: 0x240600e0
    ctx->pc = 0x260818u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x26081c: 0xc088a26
    ctx->pc = 0x26081Cu;
    SET_GPR_U32(ctx, 31, 0x260824u);
    ctx->pc = 0x260820u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x222898u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSFX_0x222898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260824u; }
    }
    if (ctx->pc != 0x260824u) { return; }
    ctx->pc = 0x260824u;
    // 0x260824: 0xdfbf0000
    ctx->pc = 0x260824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260828:
    // 0x260828: 0x3e00008
    ctx->pc = 0x260828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26082Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x260828u: goto label_260828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x260830u;
}
