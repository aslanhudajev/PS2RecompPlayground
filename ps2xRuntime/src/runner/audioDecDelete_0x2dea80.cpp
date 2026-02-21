#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecDelete
// Address: 0x2dea80 - 0x2deaac
void audioDecDelete_0x2dea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2dea80u;

    // 0x2dea80: 0x27bdffe0
    ctx->pc = 0x2dea80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dea84: 0xffbf0010
    ctx->pc = 0x2dea84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dea88: 0xffb00000
    ctx->pc = 0x2dea88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dea8c: 0xc08839e
    ctx->pc = 0x2DEA8Cu;
    SET_GPR_U32(ctx, 31, 0x2DEA94u);
    ctx->pc = 0x2DEA90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x220E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamStop_0x220e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DEA94u; }
    }
    if (ctx->pc != 0x2DEA94u) { return; }
    ctx->pc = 0x2DEA94u;
    // 0x2dea94: 0xae000044
    ctx->pc = 0x2dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2dea98: 0x24020001
    ctx->pc = 0x2dea98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dea9c: 0xdfbf0010
    ctx->pc = 0x2dea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deaa0: 0xdfb00000
    ctx->pc = 0x2deaa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2deaa4: 0x3e00008
    ctx->pc = 0x2DEAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEAA8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEAACu;
}
