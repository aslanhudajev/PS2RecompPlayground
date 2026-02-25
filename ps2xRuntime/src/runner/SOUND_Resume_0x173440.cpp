#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_Resume
// Address: 0x173440 - 0x173464
void SOUND_Resume_0x173440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_Resume_0x173440");
#endif

    ctx->pc = 0x173440u;

    // 0x173440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173448: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x173448u;
    SET_GPR_U32(ctx, 31, 0x173450u);
    ctx->pc = 0x17344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173448u;
            // 0x17344c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173450u; }
        if (ctx->pc != 0x173450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173450u; }
        if (ctx->pc != 0x173450u) { return; }
    }
    ctx->pc = 0x173450u;
    // 0x173450: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x173450u;
    SET_GPR_U32(ctx, 31, 0x173458u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173458u; }
        if (ctx->pc != 0x173458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173458u; }
        if (ctx->pc != 0x173458u) { return; }
    }
    ctx->pc = 0x173458u;
    // 0x173458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17345c: 0x3e00008  jr          $ra
    ctx->pc = 0x17345Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17345Cu;
            // 0x173460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173464u;
}
