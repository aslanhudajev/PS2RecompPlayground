#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFADXT_SetSpeed
// Address: 0x18faf8 - 0x18fb80
void SFADXT_SetSpeed_0x18faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFADXT_SetSpeed");


    ctx->pc = 0x18faf8u;

    // 0x18faf8: 0x27bdffe0
    ctx->pc = 0x18faf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fafc: 0xffb00000
    ctx->pc = 0x18fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fb00: 0x24903e18
    ctx->pc = 0x18fb00u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 15896));
    // 0x18fb04: 0xffbf0010
    ctx->pc = 0x18fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fb08: 0xc052e16
    ctx->pc = 0x18FB08u;
    SET_GPR_U32(ctx, 31, 0x18FB10u);
    ctx->pc = 0x18FB0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x14b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB10u; }
        else if (ctx->pc != 0x18FB10u) { ctx->pc = 0x18FB10u; }
    }
    if (ctx->pc != 0x18FB10u) { return; }
    ctx->pc = 0x18FB10u;
    // 0x18fb10: 0xc0541ac
    ctx->pc = 0x18FB10u;
    SET_GPR_U32(ctx, 31, 0x18FB18u);
    ctx->pc = 0x18FB14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1506B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        log_0x1506b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB18u; }
        else if (ctx->pc != 0x18FB18u) { ctx->pc = 0x18FB18u; }
    }
    if (ctx->pc != 0x18FB18u) { return; }
    ctx->pc = 0x18FB18u;
    // 0x18fb18: 0xc052eac
    ctx->pc = 0x18FB18u;
    SET_GPR_U32(ctx, 31, 0x18FB20u);
    ctx->pc = 0x18FB1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14BAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x14bab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB20u; }
        else if (ctx->pc != 0x18FB20u) { ctx->pc = 0x18FB20u; }
    }
    if (ctx->pc != 0x18FB20u) { return; }
    ctx->pc = 0x18FB20u;
    // 0x18fb20: 0x3c0140dd
    ctx->pc = 0x18fb20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16605 << 16));
    // 0x18fb24: 0x34210c55
    ctx->pc = 0x18fb24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 3157));
    // 0x18fb28: 0x44811000
    ctx->pc = 0x18fb28u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x18fb2c: 0x24060064
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 100));
    // 0x18fb30: 0x3c0144d8
    ctx->pc = 0x18fb30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17624 << 16));
    // 0x18fb34: 0x3421677d
    ctx->pc = 0x18fb34u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26493));
    // 0x18fb38: 0x44811800
    ctx->pc = 0x18fb38u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x18fb3c: 0x46020001
    ctx->pc = 0x18fb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x18fb40: 0x3c013c23
    ctx->pc = 0x18fb40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x18fb44: 0x3421d70a
    ctx->pc = 0x18fb44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x18fb48: 0x44810800
    ctx->pc = 0x18fb48u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x18fb4c: 0x8e040008
    ctx->pc = 0x18fb4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18fb50: 0xdfbf0010
    ctx->pc = 0x18fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fb54: 0x46030002
    ctx->pc = 0x18fb54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x18fb58: 0xdfb00000
    ctx->pc = 0x18fb58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fb5c: 0x46010042
    ctx->pc = 0x18fb5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18fb60: 0x460000a4
    ctx->pc = 0x18fb60u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[0]);
    // 0x18fb64: 0x44021000
    ctx->pc = 0x18fb64u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[2]);
    // 0x18fb68: 0x46000824
    ctx->pc = 0x18fb68u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x18fb6c: 0x44050000
    ctx->pc = 0x18fb6cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x18fb70: 0xa63018
    ctx->pc = 0x18fb70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x18fb74: 0x463023
    ctx->pc = 0x18fb74u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x18fb78: 0x805ca1c
    ctx->pc = 0x18FB78u;
    ctx->pc = 0x18FB7Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x172870u;
    ADXT_SetTranspose_0x172870(rdram, ctx, runtime); return;
    ctx->pc = 0x18FB80u;
}
