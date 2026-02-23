#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PUSHLIGHT__13EventCtrlTaskFv
// Address: 0x1e49a0 - 0x1e49d4
void PUSHLIGHT__13EventCtrlTaskFv_0x1e49a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PUSHLIGHT__13EventCtrlTaskFv");


    ctx->pc = 0x1e49a0u;

    // 0x1e49a0: 0x27bdffe0
    ctx->pc = 0x1e49a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e49a4: 0x7fbf0010
    ctx->pc = 0x1e49a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e49a8: 0x7fb00000
    ctx->pc = 0x1e49a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e49ac: 0x70808628
    ctx->pc = 0x1e49acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e49b0: 0xc07c2dc
    ctx->pc = 0x1E49B0u;
    SET_GPR_U32(ctx, 31, 0x1E49B8u);
    ctx->pc = 0x1E49B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0B70u;
    {
        const uint32_t __entryPc = ctx->pc;
        PushLight__13LightCtrlTaskFv_0x1f0b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E49B8u; }
        else if (ctx->pc != 0x1E49B8u) { ctx->pc = 0x1E49B8u; }
    }
    if (ctx->pc != 0x1E49B8u) { return; }
    ctx->pc = 0x1E49B8u;
    // 0x1e49b8: 0x8e03000c
    ctx->pc = 0x1e49b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e49bc: 0x24630008
    ctx->pc = 0x1e49bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e49c0: 0xae03000c
    ctx->pc = 0x1e49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e49c4: 0x7bbf0010
    ctx->pc = 0x1e49c4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e49c8: 0x7bb00000
    ctx->pc = 0x1e49c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e49cc: 0x3e00008
    ctx->pc = 0x1E49CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E49D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E49D4u;
}
