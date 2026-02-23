#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: voicePause__13SoundMgrClassFi
// Address: 0x2181f0 - 0x21820c
void voicePause__13SoundMgrClassFi_0x2181f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("voicePause__13SoundMgrClassFi");


    ctx->pc = 0x2181f0u;

    // 0x2181f0: 0x27bdfff0
    ctx->pc = 0x2181f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2181f4: 0x7fbf0000
    ctx->pc = 0x2181f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2181f8: 0xc05c994
    ctx->pc = 0x2181F8u;
    SET_GPR_U32(ctx, 31, 0x218200u);
    ctx->pc = 0x2181FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    ctx->pc = 0x172650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Pause_0x172650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218200u; }
        else if (ctx->pc != 0x218200u) { ctx->pc = 0x218200u; }
    }
    if (ctx->pc != 0x218200u) { return; }
    ctx->pc = 0x218200u;
    // 0x218200: 0x7bbf0000
    ctx->pc = 0x218200u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218204: 0x3e00008
    ctx->pc = 0x218204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218208u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21820Cu;
}
