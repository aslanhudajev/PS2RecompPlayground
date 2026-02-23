#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_ItoA2
// Address: 0x16a300 - 0x16a394
void ADXERR_ItoA2_0x16a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_ItoA2");


    ctx->pc = 0x16a300u;

    // 0x16a300: 0x27bdffb0
    ctx->pc = 0x16a300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a304: 0xffb30030
    ctx->pc = 0x16a304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x16a308: 0xffb20020
    ctx->pc = 0x16a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16a30c: 0xa0982d
    ctx->pc = 0x16a30cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a310: 0xffb10010
    ctx->pc = 0x16a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16a314: 0xc0902d
    ctx->pc = 0x16a314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a318: 0xe0882d
    ctx->pc = 0x16a318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a31c: 0xffb00000
    ctx->pc = 0x16a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a320: 0x240282d
    ctx->pc = 0x16a320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a324: 0xffbf0040
    ctx->pc = 0x16a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x16a328: 0xc05a882
    ctx->pc = 0x16A328u;
    SET_GPR_U32(ctx, 31, 0x16A330u);
    ctx->pc = 0x16A32Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A208u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_ItoA_0x16a208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A330u; }
        else if (ctx->pc != 0x16A330u) { ctx->pc = 0x16A330u; }
    }
    if (ctx->pc != 0x16A330u) { return; }
    ctx->pc = 0x16A330u;
    // 0x16a330: 0x3c10002d
    ctx->pc = 0x16a330u;
    SET_GPR_U32(ctx, 16, ((uint32_t)45 << 16));
    // 0x16a334: 0x240202d
    ctx->pc = 0x16a334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a338: 0xc051554
    ctx->pc = 0x16A338u;
    SET_GPR_U32(ctx, 31, 0x16A340u);
    ctx->pc = 0x16A33Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 22400));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A340u; }
        else if (ctx->pc != 0x16A340u) { ctx->pc = 0x16A340u; }
    }
    if (ctx->pc != 0x16A340u) { return; }
    ctx->pc = 0x16A340u;
    // 0x16a340: 0x2228823
    ctx->pc = 0x16a340u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16a344: 0x200282d
    ctx->pc = 0x16a344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a348: 0x2626ffff
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16a34c: 0xc0515a2
    ctx->pc = 0x16A34Cu;
    SET_GPR_U32(ctx, 31, 0x16A354u);
    ctx->pc = 0x16A350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145688u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x145688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A354u; }
        else if (ctx->pc != 0x16A354u) { ctx->pc = 0x16A354u; }
    }
    if (ctx->pc != 0x16A354u) { return; }
    ctx->pc = 0x16A354u;
    // 0x16a354: 0xc051554
    ctx->pc = 0x16A354u;
    SET_GPR_U32(ctx, 31, 0x16A35Cu);
    ctx->pc = 0x16A358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A35Cu; }
        else if (ctx->pc != 0x16A35Cu) { ctx->pc = 0x16A35Cu; }
    }
    if (ctx->pc != 0x16A35Cu) { return; }
    ctx->pc = 0x16A35Cu;
    // 0x16a35c: 0x2428021
    ctx->pc = 0x16a35cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16a360: 0xc051554
    ctx->pc = 0x16A360u;
    SET_GPR_U32(ctx, 31, 0x16A368u);
    ctx->pc = 0x16A364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A368u; }
        else if (ctx->pc != 0x16A368u) { ctx->pc = 0x16A368u; }
    }
    if (ctx->pc != 0x16A368u) { return; }
    ctx->pc = 0x16A368u;
    // 0x16a368: 0x260202d
    ctx->pc = 0x16a368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a36c: 0x200282d
    ctx->pc = 0x16a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a370: 0x24060004
    ctx->pc = 0x16a370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a374: 0xdfbf0040
    ctx->pc = 0x16a374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a378: 0xdfb30030
    ctx->pc = 0x16a378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a37c: 0xc23023
    ctx->pc = 0x16a37cu;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16a380: 0xdfb20020
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a384: 0xdfb10010
    ctx->pc = 0x16a384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a388: 0xdfb00000
    ctx->pc = 0x16a388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a38c: 0x805a882
    ctx->pc = 0x16A38Cu;
    ctx->pc = 0x16A390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x16A208u;
    ADXERR_ItoA_0x16a208(rdram, ctx, runtime); return;
    ctx->pc = 0x16A394u;
}
