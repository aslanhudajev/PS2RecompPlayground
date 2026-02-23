#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BRANCHNOSET__13EventCtrlTaskFv
// Address: 0x1e4e50 - 0x1e4e8c
void BRANCHNOSET__13EventCtrlTaskFv_0x1e4e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BRANCHNOSET__13EventCtrlTaskFv");


    ctx->pc = 0x1e4e50u;

    // 0x1e4e50: 0x27bdffe0
    ctx->pc = 0x1e4e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4e54: 0x7fbf0010
    ctx->pc = 0x1e4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4e58: 0x7fb00000
    ctx->pc = 0x1e4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e4e5c: 0x8c82000c
    ctx->pc = 0x1e4e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e4e60: 0x70808628
    ctx->pc = 0x1e4e60u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4e64: 0x8c450004
    ctx->pc = 0x1e4e64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e4e68: 0xc25f354
    ctx->pc = 0x1E4E68u;
    SET_GPR_U32(ctx, 31, 0x1E4E70u);
    ctx->pc = 0x1E4E6Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938000));
    ctx->pc = 0x97CD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        branchNoSet__16StBranchMgrClassFPi_0x97cd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4E70u; }
        else if (ctx->pc != 0x1E4E70u) { ctx->pc = 0x1E4E70u; }
    }
    if (ctx->pc != 0x1E4E70u) { return; }
    ctx->pc = 0x1E4E70u;
    // 0x1e4e70: 0x8e03000c
    ctx->pc = 0x1e4e70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e4e74: 0x24630008
    ctx->pc = 0x1e4e74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4e78: 0xae03000c
    ctx->pc = 0x1e4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4e7c: 0x7bbf0010
    ctx->pc = 0x1e4e7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e80: 0x7bb00000
    ctx->pc = 0x1e4e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e84: 0x3e00008
    ctx->pc = 0x1E4E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4E88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4E8Cu;
}
