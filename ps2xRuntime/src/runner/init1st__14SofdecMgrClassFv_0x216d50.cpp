#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__14SofdecMgrClassFv
// Address: 0x216d50 - 0x216dc4
void init1st__14SofdecMgrClassFv_0x216d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__14SofdecMgrClassFv");
    const uint32_t caller_gp = GPR_U32(ctx, 28);
    ctx->pc = 0x216d50u;

    // 0x216d50: 0x27bdffc0
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x216d54: 0x7fbf0010
    ctx->pc = 0x216d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x216d58: 0x7fb00000
    ctx->pc = 0x216d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x216d5c: 0x70808628
    ctx->pc = 0x216d5cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x216d60: 0x27a40020
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x216d64: 0x70002e28
    ctx->pc = 0x216d64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x216d68: 0xc050cfe
    ctx->pc = 0x216D68u;
    SET_GPR_U32(ctx, 31, 0x216D70u);
    ctx->pc = 0x216D6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 32));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D70u; }
        else if (ctx->pc != 0x216D70u) { ctx->pc = 0x216D70u; }
    }
    if (ctx->pc != 0x216D70u) { return; }
    ctx->pc = 0x216D70u;
    // 0x216d70: 0x3c024248
    ctx->pc = 0x216d70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16968 << 16));
    // 0x216d74: 0xafa20020
    ctx->pc = 0x216d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x216d78: 0x24020001
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x216d7c: 0xafa20024
    ctx->pc = 0x216d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x216d80: 0x24020002
    ctx->pc = 0x216d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x216d84: 0xafa20028
    ctx->pc = 0x216d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x216d88: 0x27a40020
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 32));
    // 0x216d8c: 0xc063766
    ctx->pc = 0x216D8Cu;
    SET_GPR_U32(ctx, 31, 0x216D94u);
    ctx->pc = 0x216D90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x18DD98u;
    {
        const uint32_t saved_gp = GPR_U32(ctx, 28);
        const uint32_t __entryPc = ctx->pc;
        mwPlyInitSfdFx_0x18dd98(rdram, ctx, runtime);
        SET_GPR_U32(ctx, 28, saved_gp);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216D94u; }
        else if (ctx->pc != 0x216D94u) { ctx->pc = 0x216D94u; }
    }
    if (ctx->pc != 0x216D94u) { return; }
    ctx->pc = 0x216D94u;
    // 0x216d94: 0xae000000
    ctx->pc = 0x216d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x216d98: 0xae000004
    ctx->pc = 0x216d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x216d9c: 0x3c02001f
    ctx->pc = 0x216d9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)31 << 16));
    // 0x216da0: 0xae000008
    ctx->pc = 0x216da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x216da4: 0x2444ed20
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x216da8: 0x70002e28
    ctx->pc = 0x216da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x216dac: 0xc063dfc
    ctx->pc = 0x216DACu;
    SET_GPR_U32(ctx, 31, 0x216DB4u);
    ctx->pc = 0x216DB0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x18F7F0u;
    {
        const uint32_t saved_gp = GPR_U32(ctx, 28);
        const uint32_t __entryPc = ctx->pc;
        mwPlyEntryErrFn_0x18f7f0(rdram, ctx, runtime);
        SET_GPR_U32(ctx, 28, saved_gp);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DB4u; }
        else if (ctx->pc != 0x216DB4u) { ctx->pc = 0x216DB4u; }
    }
    if (ctx->pc != 0x216DB4u) { return; }
    ctx->pc = 0x216DB4u;
    // 0x216db4: 0x7bbf0010
    ctx->pc = 0x216db4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216db8: 0x7bb00000
    ctx->pc = 0x216db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216dbc: 0x3e00008
    ctx->pc = 0x216DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216DC0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        SET_GPR_U32(ctx, 28, caller_gp);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216DC4u;
}
