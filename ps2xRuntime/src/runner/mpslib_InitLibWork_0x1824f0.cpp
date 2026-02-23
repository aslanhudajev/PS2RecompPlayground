#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpslib_InitLibWork
// Address: 0x1824f0 - 0x182584
void mpslib_InitLibWork_0x1824f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpslib_InitLibWork");


    ctx->pc = 0x1824f0u;

    // 0x1824f0: 0x27bdffd0
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1824f4: 0x24020030
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1824f8: 0xffb10010
    ctx->pc = 0x1824f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1824fc: 0xa0182d
    ctx->pc = 0x1824fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182500: 0x80882d
    ctx->pc = 0x182500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182504: 0xffb00000
    ctx->pc = 0x182504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182508: 0x2626ffff
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x18250c: 0x3c100024
    ctx->pc = 0x18250cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    // 0x182510: 0xc23018
    ctx->pc = 0x182510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x182514: 0xffbf0020
    ctx->pc = 0x182514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182518: 0x282d
    ctx->pc = 0x182518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18251c: 0x60202d
    ctx->pc = 0x18251cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182520: 0x0
    ctx->pc = 0x182520u;
    // NOP
    // 0x182524: 0xc0601e6
    ctx->pc = 0x182524u;
    SET_GPR_U32(ctx, 31, 0x18252Cu);
    ctx->pc = 0x182528u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 52));
    ctx->pc = 0x180798u;
    {
        const uint32_t __entryPc = ctx->pc;
        UTY_MemsetDword_0x180798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18252Cu; }
        else if (ctx->pc != 0x18252Cu) { ctx->pc = 0x18252Cu; }
    }
    if (ctx->pc != 0x18252Cu) { return; }
    ctx->pc = 0x18252Cu;
    // 0x18252c: 0xc060980
    ctx->pc = 0x18252Cu;
    SET_GPR_U32(ctx, 31, 0x182534u);
    ctx->pc = 0x182530u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    ctx->pc = 0x182600u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitErr_0x182600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182534u; }
        else if (ctx->pc != 0x182534u) { ctx->pc = 0x182534u; }
    }
    if (ctx->pc != 0x182534u) { return; }
    ctx->pc = 0x182534u;
    // 0x182534: 0x8e021538
    ctx->pc = 0x182534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 5432)));
    // 0x182538: 0x24430010
    ctx->pc = 0x182538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 16));
    // 0x18253c: 0x1a20000b
    ctx->pc = 0x18253Cu;
    {
        const bool branch_taken_0x18253c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x182540u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
        if (branch_taken_0x18253c) {
            ctx->pc = 0x18256Cu;
            goto label_18256c;
        }
    }
    ctx->pc = 0x182544u;
    // 0x182544: 0x60102d
    ctx->pc = 0x182544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182548: 0x220202d
    ctx->pc = 0x182548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18254c: 0x24030001
    ctx->pc = 0x18254cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_182550:
    // 0x182550: 0xac430000
    ctx->pc = 0x182550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x182554: 0x2484ffff
    ctx->pc = 0x182554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x182558: 0x244200c0
    ctx->pc = 0x182558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 192));
    // 0x18255c: 0x0
    ctx->pc = 0x18255cu;
    // NOP
    // 0x182560: 0x0
    ctx->pc = 0x182560u;
    // NOP
    // 0x182564: 0x1480fffa
    ctx->pc = 0x182564u;
    {
        const bool branch_taken_0x182564 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x182564) {
            ctx->pc = 0x182550u;
            goto label_182550;
        }
    }
    ctx->pc = 0x18256Cu;
label_18256c:
    // 0x18256c: 0xdfbf0020
    ctx->pc = 0x18256cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182570: 0x102d
    ctx->pc = 0x182570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182574: 0xdfb10010
    ctx->pc = 0x182574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182578: 0xdfb00000
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18257c: 0x3e00008
    ctx->pc = 0x18257Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182550u: goto label_182550;
            case 0x18256Cu: goto label_18256c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182584u;
}
