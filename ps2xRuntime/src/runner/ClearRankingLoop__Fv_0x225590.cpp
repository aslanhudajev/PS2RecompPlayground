#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ClearRankingLoop__Fv
// Address: 0x225590 - 0x225614
void ClearRankingLoop__Fv_0x225590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ClearRankingLoop__Fv");


    ctx->pc = 0x225590u;

    // 0x225590: 0x27bdfff0
    ctx->pc = 0x225590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225594: 0x7fbf0000
    ctx->pc = 0x225594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x225598: 0xc068918
    ctx->pc = 0x225598u;
    SET_GPR_U32(ctx, 31, 0x2255A0u);
    ctx->pc = 0x22559Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937568)));
    ctx->pc = 0x1A2460u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskLoop_0x1a2460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255A0u; }
        else if (ctx->pc != 0x2255A0u) { ctx->pc = 0x2255A0u; }
    }
    if (ctx->pc != 0x2255A0u) { return; }
    ctx->pc = 0x2255A0u;
    // 0x2255a0: 0x3c020050
    ctx->pc = 0x2255a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2255a4: 0xc07ce18
    ctx->pc = 0x2255A4u;
    SET_GPR_U32(ctx, 31, 0x2255ACu);
    ctx->pc = 0x2255A8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255ACu; }
        else if (ctx->pc != 0x2255ACu) { ctx->pc = 0x2255ACu; }
    }
    if (ctx->pc != 0x2255ACu) { return; }
    ctx->pc = 0x2255ACu;
    // 0x2255ac: 0x28410005
    ctx->pc = 0x2255acu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x2255b0: 0x10200015
    ctx->pc = 0x2255B0u;
    {
        const bool branch_taken_0x2255b0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2255b0) {
            ctx->pc = 0x225608u;
            goto label_225608;
        }
    }
    ctx->pc = 0x2255B8u;
    // 0x2255b8: 0x8f838b9c
    ctx->pc = 0x2255b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937500)));
    // 0x2255bc: 0x24630001
    ctx->pc = 0x2255bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2255c0: 0xaf838b9c
    ctx->pc = 0x2255c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937500), GPR_U32(ctx, 3));
    // 0x2255c4: 0x8f838b9c
    ctx->pc = 0x2255c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937500)));
    // 0x2255c8: 0x2c6102b3
    ctx->pc = 0x2255c8u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 691));
    // 0x2255cc: 0x1420000e
    ctx->pc = 0x2255CCu;
    {
        const bool branch_taken_0x2255cc = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x2255cc) {
            ctx->pc = 0x225608u;
            goto label_225608;
        }
    }
    ctx->pc = 0x2255D4u;
    // 0x2255d4: 0x3c020051
    ctx->pc = 0x2255d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2255d8: 0x244434f0
    ctx->pc = 0x2255d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x2255dc: 0x3c020040
    ctx->pc = 0x2255dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x2255e0: 0x34450001
    ctx->pc = 0x2255e0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 1));
    // 0x2255e4: 0x70003628
    ctx->pc = 0x2255e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2255e8: 0x70003e28
    ctx->pc = 0x2255e8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2255ec: 0xc086018
    ctx->pc = 0x2255ECu;
    SET_GPR_U32(ctx, 31, 0x2255F4u);
    ctx->pc = 0x2255F0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255F4u; }
        else if (ctx->pc != 0x2255F4u) { ctx->pc = 0x2255F4u; }
    }
    if (ctx->pc != 0x2255F4u) { return; }
    ctx->pc = 0x2255F4u;
    // 0x2255f4: 0xc080cb0
    ctx->pc = 0x2255F4u;
    SET_GPR_U32(ctx, 31, 0x2255FCu);
    ctx->pc = 0x2032C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MaskScreen__Fv_0x2032c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2255FCu; }
        else if (ctx->pc != 0x2255FCu) { ctx->pc = 0x2255FCu; }
    }
    if (ctx->pc != 0x2255FCu) { return; }
    ctx->pc = 0x2255FCu;
    // 0x2255fc: 0x2403000b
    ctx->pc = 0x2255fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11));
    // 0x225600: 0x3c010050
    ctx->pc = 0x225600u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x225604: 0xa423e506
    ctx->pc = 0x225604u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294960390), (uint16_t)GPR_U32(ctx, 3));
label_225608:
    // 0x225608: 0x7bbf0000
    ctx->pc = 0x225608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22560c: 0x3e00008
    ctx->pc = 0x22560Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225610u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x225608u: goto label_225608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x225614u;
}
