#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetTimeReal
// Address: 0x172168 - 0x1721c8
void ADXT_GetTimeReal_0x172168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetTimeReal");


    ctx->pc = 0x172168u;

    // 0x172168: 0x27bdffd0
    ctx->pc = 0x172168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17216c: 0xffb00010
    ctx->pc = 0x17216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172170: 0x3a0282d
    ctx->pc = 0x172170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172174: 0xffbf0020
    ctx->pc = 0x172174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172178: 0xc05c7ca
    ctx->pc = 0x172178u;
    SET_GPR_U32(ctx, 31, 0x172180u);
    ctx->pc = 0x17217Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x171F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_GetTime_0x171f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172180u; }
        else if (ctx->pc != 0x172180u) { ctx->pc = 0x172180u; }
    }
    if (ctx->pc != 0x172180u) { return; }
    ctx->pc = 0x172180u;
    // 0x172180: 0xc052e16
    ctx->pc = 0x172180u;
    SET_GPR_U32(ctx, 31, 0x172188u);
    ctx->pc = 0x172184u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172188u; }
        else if (ctx->pc != 0x172188u) { ctx->pc = 0x172188u; }
    }
    if (ctx->pc != 0x172188u) { return; }
    ctx->pc = 0x172188u;
    // 0x172188: 0x8fa40004
    ctx->pc = 0x172188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17218c: 0xc052e16
    ctx->pc = 0x17218Cu;
    SET_GPR_U32(ctx, 31, 0x172194u);
    ctx->pc = 0x172190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172194u; }
        else if (ctx->pc != 0x172194u) { ctx->pc = 0x172194u; }
    }
    if (ctx->pc != 0x172194u) { return; }
    ctx->pc = 0x172194u;
    // 0x172194: 0x200202d
    ctx->pc = 0x172194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172198: 0xc052d62
    ctx->pc = 0x172198u;
    SET_GPR_U32(ctx, 31, 0x1721A0u);
    ctx->pc = 0x17219Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721A0u; }
        else if (ctx->pc != 0x1721A0u) { ctx->pc = 0x1721A0u; }
    }
    if (ctx->pc != 0x1721A0u) { return; }
    ctx->pc = 0x1721A0u;
    // 0x1721a0: 0x340580b2
    ctx->pc = 0x1721a0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32946));
    // 0x1721a4: 0x52bfc
    ctx->pc = 0x1721a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1721a8: 0xc052cb8
    ctx->pc = 0x1721A8u;
    SET_GPR_U32(ctx, 31, 0x1721B0u);
    ctx->pc = 0x1721ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721B0u; }
        else if (ctx->pc != 0x1721B0u) { ctx->pc = 0x1721B0u; }
    }
    if (ctx->pc != 0x1721B0u) { return; }
    ctx->pc = 0x1721B0u;
    // 0x1721b0: 0xc052e44
    ctx->pc = 0x1721B0u;
    SET_GPR_U32(ctx, 31, 0x1721B8u);
    ctx->pc = 0x1721B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1721B8u; }
        else if (ctx->pc != 0x1721B8u) { ctx->pc = 0x1721B8u; }
    }
    if (ctx->pc != 0x1721B8u) { return; }
    ctx->pc = 0x1721B8u;
    // 0x1721b8: 0xdfbf0020
    ctx->pc = 0x1721b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1721bc: 0xdfb00010
    ctx->pc = 0x1721bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1721c0: 0x3e00008
    ctx->pc = 0x1721C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1721C8u;
}
