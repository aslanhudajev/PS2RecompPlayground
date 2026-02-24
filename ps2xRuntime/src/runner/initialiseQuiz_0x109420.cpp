#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: initialiseQuiz
// Address: 0x109420 - 0x10943c
void initialiseQuiz_0x109420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("initialiseQuiz_0x109420");
#endif

    ctx->pc = 0x109420u;

    // 0x109420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x109424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109428: 0xc0423da  jal         func_108F68
    ctx->pc = 0x109428u;
    SET_GPR_U32(ctx, 31, 0x109430u);
    ctx->pc = 0x108F68u;
    if (runtime->hasFunction(0x108F68u)) {
        auto targetFn = runtime->lookupFunction(0x108F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109430u; }
        if (ctx->pc != 0x109430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadConfig_0x108f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109430u; }
        if (ctx->pc != 0x109430u) { return; }
    }
    ctx->pc = 0x109430u;
    // 0x109430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x109430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109434: 0x8042496  j           func_109258
    ctx->pc = 0x109434u;
    ctx->pc = 0x109438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109434u;
            // 0x109438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109258u;
    if (runtime->hasFunction(0x109258u)) {
        auto targetFn = runtime->lookupFunction(0x109258u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        loadQuestions_0x109258(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10943Cu;
}
