#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_WaitForExecServer
// Address: 0x176500 - 0x176574
void SRD_WaitForExecServer_0x176500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_WaitForExecServer");


    ctx->pc = 0x176500u;

    // 0x176500: 0x3c040024
    ctx->pc = 0x176500u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
    // 0x176504: 0x3c060024
    ctx->pc = 0x176504u;
    SET_GPR_U32(ctx, 6, ((uint32_t)36 << 16));
    // 0x176508: 0xac8087ac
    ctx->pc = 0x176508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294936492), GPR_U32(ctx, 0));
    // 0x17650c: 0x27bdfff0
    ctx->pc = 0x17650cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176510: 0xffbf0000
    ctx->pc = 0x176510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x176514: 0x24030001
    ctx->pc = 0x176514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x176518: 0x8cc2879c
    ctx->pc = 0x176518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294936476)));
    // 0x17651c: 0x14430013
    ctx->pc = 0x17651Cu;
    {
        const bool branch_taken_0x17651c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x176520u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x17651c) {
            ctx->pc = 0x17656Cu;
            goto label_17656c;
        }
    }
    ctx->pc = 0x176524u;
    // 0x176524: 0x80282d
    ctx->pc = 0x176524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176528: 0xc0402d
    ctx->pc = 0x176528u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17652c: 0x3c0701f4
    ctx->pc = 0x17652cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)500 << 16));
    // 0x176530: 0x3c04002c
    ctx->pc = 0x176530u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x176534: 0x24060001
    ctx->pc = 0x176534u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
label_176538:
    // 0x176538: 0x8ca287ac
    ctx->pc = 0x176538u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294936492)));
    // 0x17653c: 0x24420001
    ctx->pc = 0x17653cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x176540: 0xaca287ac
    ctx->pc = 0x176540u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936492), GPR_U32(ctx, 2));
    // 0x176544: 0x8ca387ac
    ctx->pc = 0x176544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294936492)));
    // 0x176548: 0x14670005
    ctx->pc = 0x176548u;
    {
        const bool branch_taken_0x176548 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 7));
        if (branch_taken_0x176548) {
            ctx->pc = 0x176560u;
            goto label_176560;
        }
    }
    ctx->pc = 0x176550u;
    // 0x176550: 0xc05114a
    ctx->pc = 0x176550u;
    SET_GPR_U32(ctx, 31, 0x176558u);
    ctx->pc = 0x176554u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294946808));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176558u; }
        else if (ctx->pc != 0x176558u) { ctx->pc = 0x176558u; }
    }
    if (ctx->pc != 0x176558u) { return; }
    ctx->pc = 0x176558u;
    // 0x176558: 0x10000004
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17655Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x176558) {
            ctx->pc = 0x17656Cu;
            goto label_17656c;
        }
    }
    ctx->pc = 0x176560u;
label_176560:
    // 0x176560: 0x8d02879c
    ctx->pc = 0x176560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294936476)));
    // 0x176564: 0x1046fff4
    ctx->pc = 0x176564u;
    {
        const bool branch_taken_0x176564 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x176568u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x176564) {
            ctx->pc = 0x176538u;
            goto label_176538;
        }
    }
    ctx->pc = 0x17656Cu;
label_17656c:
    // 0x17656c: 0x3e00008
    ctx->pc = 0x17656Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176570u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176538u: goto label_176538;
            case 0x176560u: goto label_176560;
            case 0x17656Cu: goto label_17656c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x176574u;
}
