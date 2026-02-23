#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LIGHTIMMEXE__13EventCtrlTaskFv
// Address: 0x1e4960 - 0x1e4994
void LIGHTIMMEXE__13EventCtrlTaskFv_0x1e4960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LIGHTIMMEXE__13EventCtrlTaskFv");


    ctx->pc = 0x1e4960u;

    // 0x1e4960: 0x27bdffe0
    ctx->pc = 0x1e4960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e4964: 0x7fbf0010
    ctx->pc = 0x1e4964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e4968: 0x7fb00000
    ctx->pc = 0x1e4968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e496c: 0x70808628
    ctx->pc = 0x1e496cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e4970: 0xc07c2c4
    ctx->pc = 0x1E4970u;
    SET_GPR_U32(ctx, 31, 0x1E4978u);
    ctx->pc = 0x1E4974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937920)));
    ctx->pc = 0x1F0B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ImmediateExe__13LightCtrlTaskFv_0x1f0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4978u; }
        else if (ctx->pc != 0x1E4978u) { ctx->pc = 0x1E4978u; }
    }
    if (ctx->pc != 0x1E4978u) { return; }
    ctx->pc = 0x1E4978u;
    // 0x1e4978: 0x8e03000c
    ctx->pc = 0x1e4978u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e497c: 0x24630008
    ctx->pc = 0x1e497cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e4980: 0xae03000c
    ctx->pc = 0x1e4980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e4984: 0x7bbf0010
    ctx->pc = 0x1e4984u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4988: 0x7bb00000
    ctx->pc = 0x1e4988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e498c: 0x3e00008
    ctx->pc = 0x1E498Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4990u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4994u;
}
