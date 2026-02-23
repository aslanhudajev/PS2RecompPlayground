#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: clrAll__14SysCfgMgrClassFv
// Address: 0x1d3830 - 0x1d3878
void clrAll__14SysCfgMgrClassFv_0x1d3830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("clrAll__14SysCfgMgrClassFv");


    ctx->pc = 0x1d3830u;

    // 0x1d3830: 0x27bdffe0
    ctx->pc = 0x1d3830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d3834: 0x7fbf0010
    ctx->pc = 0x1d3834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d3838: 0x7fb00000
    ctx->pc = 0x1d3838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d383c: 0x70808628
    ctx->pc = 0x1d383cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d3840: 0x3c020050
    ctx->pc = 0x1d3840u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1d3844: 0x2444fec0
    ctx->pc = 0x1d3844u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x1d3848: 0x3c020026
    ctx->pc = 0x1d3848u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1d384c: 0x24455220
    ctx->pc = 0x1d384cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 21024));
    // 0x1d3850: 0xc06ac36
    ctx->pc = 0x1D3850u;
    SET_GPR_U32(ctx, 31, 0x1D3858u);
    ctx->pc = 0x1D3854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x1AB0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB0D8_0x1ab0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3858u; }
        else if (ctx->pc != 0x1D3858u) { ctx->pc = 0x1D3858u; }
    }
    if (ctx->pc != 0x1D3858u) { return; }
    ctx->pc = 0x1D3858u;
    // 0x1d3858: 0xc074ddc
    ctx->pc = 0x1D3858u;
    SET_GPR_U32(ctx, 31, 0x1D3860u);
    ctx->pc = 0x1D385Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1D3770u;
    {
        const uint32_t __entryPc = ctx->pc;
        setLang__14SysCfgMgrClassFv_0x1d3770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3860u; }
        else if (ctx->pc != 0x1D3860u) { ctx->pc = 0x1D3860u; }
    }
    if (ctx->pc != 0x1D3860u) { return; }
    ctx->pc = 0x1D3860u;
    // 0x1d3860: 0xc0858d4
    ctx->pc = 0x1D3860u;
    SET_GPR_U32(ctx, 31, 0x1D3868u);
    ctx->pc = 0x1D3864u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937992));
    ctx->pc = 0x216350u;
    {
        const uint32_t __entryPc = ctx->pc;
        setInitTbl__15RankingMgrClassFv_0x216350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3868u; }
        else if (ctx->pc != 0x1D3868u) { ctx->pc = 0x1D3868u; }
    }
    if (ctx->pc != 0x1D3868u) { return; }
    ctx->pc = 0x1D3868u;
    // 0x1d3868: 0x7bbf0010
    ctx->pc = 0x1d3868u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d386c: 0x7bb00000
    ctx->pc = 0x1d386cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3870: 0x3e00008
    ctx->pc = 0x1D3870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3874u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3878u;
}
