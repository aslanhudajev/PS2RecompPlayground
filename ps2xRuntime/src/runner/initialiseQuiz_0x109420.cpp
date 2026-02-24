#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initialiseQuiz
// Address: 0x109420 - 0x10943c
void initialiseQuiz_0x109420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x109420u;

    // 0x109420: 0x27bdfff0
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109424: 0xffbf0000
    ctx->pc = 0x109424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109428: 0xc0423da
    ctx->pc = 0x109428u;
    SET_GPR_U32(ctx, 31, 0x109430u);
    ctx->pc = 0x108F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadConfig_0x108f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109430u; }
    }
    if (ctx->pc != 0x109430u) { return; }
    ctx->pc = 0x109430u;
    // 0x109430: 0xdfbf0000
    ctx->pc = 0x109430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109434: 0x8042496
    ctx->pc = 0x109434u;
    ctx->pc = 0x109438u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x109258u;
    loadQuestions_0x109258(rdram, ctx, runtime); return;
    ctx->pc = 0x10943Cu;
}
