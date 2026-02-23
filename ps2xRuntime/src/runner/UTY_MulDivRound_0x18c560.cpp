#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_MulDivRound
// Address: 0x18c560 - 0x18c610
void UTY_MulDivRound_0x18c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_MulDivRound");


    ctx->pc = 0x18c560u;

    // 0x18c560: 0x27bdffc0
    ctx->pc = 0x18c560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18c564: 0xffb20020
    ctx->pc = 0x18c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18c568: 0xffb10010
    ctx->pc = 0x18c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18c56c: 0xc0902d
    ctx->pc = 0x18c56cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c570: 0xffbf0030
    ctx->pc = 0x18c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18c574: 0xa0882d
    ctx->pc = 0x18c574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c578: 0x16400009
    ctx->pc = 0x18C578u;
    {
        const bool branch_taken_0x18c578 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x18C57Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x18c578) {
            ctx->pc = 0x18C5A0u;
            goto label_18c5a0;
        }
    }
    ctx->pc = 0x18C580u;
    // 0x18c580: 0x911026
    ctx->pc = 0x18c580u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x18c584: 0x2403ffff
    ctx->pc = 0x18c584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18c588: 0x62182a
    ctx->pc = 0x18c588u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x18c58c: 0x3c047fff
    ctx->pc = 0x18c58cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x18c590: 0x3484ffff
    ctx->pc = 0x18c590u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65535));
    // 0x18c594: 0x3c028000
    ctx->pc = 0x18c594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32768 << 16));
    // 0x18c598: 0x10000017
    ctx->pc = 0x18C598u;
    {
        const bool branch_taken_0x18c598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18C59Cu;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
        if (branch_taken_0x18c598) {
            ctx->pc = 0x18C5F8u;
            goto label_18c5f8;
        }
    }
    ctx->pc = 0x18C5A0u;
label_18c5a0:
    // 0x18c5a0: 0xc052e16
    ctx->pc = 0x18C5A0u;
    SET_GPR_U32(ctx, 31, 0x18C5A8u);
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5A8u; }
        else if (ctx->pc != 0x18C5A8u) { ctx->pc = 0x18C5A8u; }
    }
    if (ctx->pc != 0x18C5A8u) { return; }
    ctx->pc = 0x18C5A8u;
    // 0x18c5a8: 0x40802d
    ctx->pc = 0x18c5a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5ac: 0xc052e16
    ctx->pc = 0x18C5ACu;
    SET_GPR_U32(ctx, 31, 0x18C5B4u);
    ctx->pc = 0x18C5B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5B4u; }
        else if (ctx->pc != 0x18C5B4u) { ctx->pc = 0x18C5B4u; }
    }
    if (ctx->pc != 0x18C5B4u) { return; }
    ctx->pc = 0x18C5B4u;
    // 0x18c5b4: 0x200202d
    ctx->pc = 0x18c5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5b8: 0xc052cb8
    ctx->pc = 0x18C5B8u;
    SET_GPR_U32(ctx, 31, 0x18C5C0u);
    ctx->pc = 0x18C5BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5C0u; }
        else if (ctx->pc != 0x18C5C0u) { ctx->pc = 0x18C5C0u; }
    }
    if (ctx->pc != 0x18C5C0u) { return; }
    ctx->pc = 0x18C5C0u;
    // 0x18c5c0: 0x40802d
    ctx->pc = 0x18c5c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5c4: 0xc052e16
    ctx->pc = 0x18C5C4u;
    SET_GPR_U32(ctx, 31, 0x18C5CCu);
    ctx->pc = 0x18C5C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5CCu; }
        else if (ctx->pc != 0x18C5CCu) { ctx->pc = 0x18C5CCu; }
    }
    if (ctx->pc != 0x18C5CCu) { return; }
    ctx->pc = 0x18C5CCu;
    // 0x18c5cc: 0x200202d
    ctx->pc = 0x18c5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c5d0: 0xc052d62
    ctx->pc = 0x18C5D0u;
    SET_GPR_U32(ctx, 31, 0x18C5D8u);
    ctx->pc = 0x18C5D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B588u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x14b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5D8u; }
        else if (ctx->pc != 0x18C5D8u) { ctx->pc = 0x18C5D8u; }
    }
    if (ctx->pc != 0x18C5D8u) { return; }
    ctx->pc = 0x18C5D8u;
    // 0x18c5d8: 0x3405ff80
    ctx->pc = 0x18c5d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x18c5dc: 0x52bbc
    ctx->pc = 0x18c5dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x18c5e0: 0xc052c88
    ctx->pc = 0x18C5E0u;
    SET_GPR_U32(ctx, 31, 0x18C5E8u);
    ctx->pc = 0x18C5E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B220u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x14b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5E8u; }
        else if (ctx->pc != 0x18C5E8u) { ctx->pc = 0x18C5E8u; }
    }
    if (ctx->pc != 0x18C5E8u) { return; }
    ctx->pc = 0x18C5E8u;
    // 0x18c5e8: 0xc0540b0
    ctx->pc = 0x18C5E8u;
    SET_GPR_U32(ctx, 31, 0x18C5F0u);
    ctx->pc = 0x18C5ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1502C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        floor_0x1502c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5F0u; }
        else if (ctx->pc != 0x18C5F0u) { ctx->pc = 0x18C5F0u; }
    }
    if (ctx->pc != 0x18C5F0u) { return; }
    ctx->pc = 0x18C5F0u;
    // 0x18c5f0: 0xc052e44
    ctx->pc = 0x18C5F0u;
    SET_GPR_U32(ctx, 31, 0x18C5F8u);
    ctx->pc = 0x18C5F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B910u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x14b910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C5F8u; }
        else if (ctx->pc != 0x18C5F8u) { ctx->pc = 0x18C5F8u; }
    }
    if (ctx->pc != 0x18C5F8u) { return; }
    ctx->pc = 0x18C5F8u;
label_18c5f8:
    // 0x18c5f8: 0xdfbf0030
    ctx->pc = 0x18c5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c5fc: 0xdfb20020
    ctx->pc = 0x18c5fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c600: 0xdfb10010
    ctx->pc = 0x18c600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c604: 0xdfb00000
    ctx->pc = 0x18c604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c608: 0x3e00008
    ctx->pc = 0x18C608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18C5A0u: goto label_18c5a0;
            case 0x18C5F8u: goto label_18c5f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C610u;
}
