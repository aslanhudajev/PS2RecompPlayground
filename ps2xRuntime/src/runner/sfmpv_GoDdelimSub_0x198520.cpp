#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_GoDdelimSub
// Address: 0x198520 - 0x198598
void sfmpv_GoDdelimSub_0x198520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_GoDdelimSub");


    ctx->pc = 0x198520u;

    // 0x198520: 0x27bdffb0
    ctx->pc = 0x198520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198524: 0xffb30030
    ctx->pc = 0x198524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x198528: 0xffb20020
    ctx->pc = 0x198528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19852c: 0xa0982d
    ctx->pc = 0x19852cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198530: 0xffbf0040
    ctx->pc = 0x198530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x198534: 0x80902d
    ctx->pc = 0x198534u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198538: 0xffb10010
    ctx->pc = 0x198538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19853c: 0xffb00000
    ctx->pc = 0x19853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198540: 0x8e500004
    ctx->pc = 0x198540u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x198544: 0x8e510000
    ctx->pc = 0x198544u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198548: 0x200282d
    ctx->pc = 0x198548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19854c: 0xc061676
    ctx->pc = 0x19854Cu;
    SET_GPR_U32(ctx, 31, 0x198554u);
    ctx->pc = 0x198550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1859D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_SearchDelim_0x1859d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198554u; }
        else if (ctx->pc != 0x198554u) { ctx->pc = 0x198554u; }
    }
    if (ctx->pc != 0x198554u) { return; }
    ctx->pc = 0x198554u;
    // 0x198554: 0x8e650000
    ctx->pc = 0x198554u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x198558: 0x511823
    ctx->pc = 0x198558u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x19855c: 0x2604fffd
    ctx->pc = 0x19855cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x198560: 0xdfbf0040
    ctx->pc = 0x198560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x198564: 0x62200b
    ctx->pc = 0x198564u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x198568: 0xa42821
    ctx->pc = 0x198568u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x19856c: 0x2048023
    ctx->pc = 0x19856cu;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x198570: 0xae650000
    ctx->pc = 0x198570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
    // 0x198574: 0x2248821
    ctx->pc = 0x198574u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x198578: 0xae500004
    ctx->pc = 0x198578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
    // 0x19857c: 0xae510000
    ctx->pc = 0x19857cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x198580: 0xdfb30030
    ctx->pc = 0x198580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198584: 0xdfb20020
    ctx->pc = 0x198584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198588: 0xdfb10010
    ctx->pc = 0x198588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19858c: 0xdfb00000
    ctx->pc = 0x19858cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198590: 0x3e00008
    ctx->pc = 0x198590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198594u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198598u;
}
