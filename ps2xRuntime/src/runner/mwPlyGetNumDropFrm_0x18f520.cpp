#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumDropFrm
// Address: 0x18f520 - 0x18f554
void mwPlyGetNumDropFrm_0x18f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumDropFrm");


    ctx->pc = 0x18f520u;

    // 0x18f520: 0x27bdffb0
    ctx->pc = 0x18f520u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18f524: 0xffbf0040
    ctx->pc = 0x18f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18f528: 0xc063d42
    ctx->pc = 0x18F528u;
    SET_GPR_U32(ctx, 31, 0x18F530u);
    ctx->pc = 0x18F508u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetSfdHn_0x18f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F530u; }
        else if (ctx->pc != 0x18F530u) { ctx->pc = 0x18F530u; }
    }
    if (ctx->pc != 0x18F530u) { return; }
    ctx->pc = 0x18F530u;
    // 0x18f530: 0x40202d
    ctx->pc = 0x18f530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f534: 0xc0674fa
    ctx->pc = 0x18F534u;
    SET_GPR_U32(ctx, 31, 0x18F53Cu);
    ctx->pc = 0x18F538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D3E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetPlyInf_0x19d3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F53Cu; }
        else if (ctx->pc != 0x18F53Cu) { ctx->pc = 0x18F53Cu; }
    }
    if (ctx->pc != 0x18F53Cu) { return; }
    ctx->pc = 0x18F53Cu;
    // 0x18f53c: 0x8fa30004
    ctx->pc = 0x18f53cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18f540: 0x8fa20010
    ctx->pc = 0x18f540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f544: 0xdfbf0040
    ctx->pc = 0x18f544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f548: 0x621023
    ctx->pc = 0x18f548u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18f54c: 0x3e00008
    ctx->pc = 0x18F54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F550u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F554u;
}
