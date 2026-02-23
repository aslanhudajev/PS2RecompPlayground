#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetFrmTime
// Address: 0x1983a8 - 0x19844c
void sfmpv_SetFrmTime_0x1983a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetFrmTime");


    ctx->pc = 0x1983a8u;

    // 0x1983a8: 0x27bdffc0
    ctx->pc = 0x1983a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1983ac: 0xffb00000
    ctx->pc = 0x1983acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1983b0: 0xffb20020
    ctx->pc = 0x1983b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1983b4: 0x80802d
    ctx->pc = 0x1983b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983b8: 0xffb10010
    ctx->pc = 0x1983b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1983bc: 0x26120b24
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 2852));
    // 0x1983c0: 0xffbf0030
    ctx->pc = 0x1983c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1983c4: 0xa0882d
    ctx->pc = 0x1983c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983c8: 0x8e050b94
    ctx->pc = 0x1983c8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 2964)));
    // 0x1983cc: 0x8e420020
    ctx->pc = 0x1983ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1983d0: 0x8e030bac
    ctx->pc = 0x1983d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2988)));
    // 0x1983d4: 0x451023
    ctx->pc = 0x1983d4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1983d8: 0x431021
    ctx->pc = 0x1983d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1983dc: 0xae220008
    ctx->pc = 0x1983dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1983e0: 0x8e430024
    ctx->pc = 0x1983e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1983e4: 0xc066774
    ctx->pc = 0x1983E4u;
    SET_GPR_U32(ctx, 31, 0x1983ECu);
    ctx->pc = 0x1983E8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x199DD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_IsSceMpegUsed_0x199dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983ECu; }
        else if (ctx->pc != 0x1983ECu) { ctx->pc = 0x1983ECu; }
    }
    if (ctx->pc != 0x1983ECu) { return; }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0x10400011
    ctx->pc = 0x1983ECu;
    {
        const bool branch_taken_0x1983ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1983F0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x1983ec) {
            ctx->pc = 0x198434u;
            goto label_198434;
        }
    }
    ctx->pc = 0x1983F4u;
    // 0x1983f4: 0x8e22002c
    ctx->pc = 0x1983f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1983f8: 0x2463d5f0
    ctx->pc = 0x1983f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956528));
    // 0x1983fc: 0x200202d
    ctx->pc = 0x1983fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198400: 0x21080
    ctx->pc = 0x198400u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x198404: 0x431021
    ctx->pc = 0x198404u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198408: 0xc066978
    ctx->pc = 0x198408u;
    SET_GPR_U32(ctx, 31, 0x198410u);
    ctx->pc = 0x19840Cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x19A5E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVP_GetFrameCount_0x19a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198410u; }
        else if (ctx->pc != 0x198410u) { ctx->pc = 0x198410u; }
    }
    if (ctx->pc != 0x198410u) { return; }
    ctx->pc = 0x198410u;
    // 0x198410: 0x240503e8
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x198414: 0x8e440024
    ctx->pc = 0x198414u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198418: 0x450018
    ctx->pc = 0x198418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x19841c: 0x2812
    ctx->pc = 0x19841cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x198420: 0xc063132
    ctx->pc = 0x198420u;
    SET_GPR_U32(ctx, 31, 0x198428u);
    ctx->pc = 0x198424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C4C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MulAbDivC_0x18c4c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198428u; }
        else if (ctx->pc != 0x198428u) { ctx->pc = 0x198428u; }
    }
    if (ctx->pc != 0x198428u) { return; }
    ctx->pc = 0x198428u;
    // 0x198428: 0xae220008
    ctx->pc = 0x198428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x19842c: 0x8e420024
    ctx->pc = 0x19842cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x198430: 0xae22000c
    ctx->pc = 0x198430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_198434:
    // 0x198434: 0xdfbf0030
    ctx->pc = 0x198434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198438: 0xdfb20020
    ctx->pc = 0x198438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19843c: 0xdfb10010
    ctx->pc = 0x19843cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198440: 0xdfb00000
    ctx->pc = 0x198440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198444: 0x3e00008
    ctx->pc = 0x198444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198448u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198434u: goto label_198434;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19844Cu;
}
