#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_FreeFileID
// Address: 0x172980 - 0x1729bc
void SOUND_FreeFileID_0x172980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_FreeFileID_0x172980");
#endif

    ctx->pc = 0x172980u;

    // 0x172980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x172984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x172988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17298c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17298cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172990: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 31, 0x172998u);
    ctx->pc = 0x172994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172990u;
            // 0x172994: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172998u; }
        if (ctx->pc != 0x172998u) { return; }
    }
    ctx->pc = 0x172998u;
    // 0x172998: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x172998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x17299c: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x17299Cu;
    SET_GPR_U32(ctx, 31, 0x1729A4u);
    ctx->pc = 0x1729A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17299Cu;
            // 0x1729a0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729A4u; }
        if (ctx->pc != 0x1729A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729A4u; }
        if (ctx->pc != 0x1729A4u) { return; }
    }
    ctx->pc = 0x1729A4u;
    // 0x1729a4: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1729A4u;
    SET_GPR_U32(ctx, 31, 0x1729ACu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729ACu; }
        if (ctx->pc != 0x1729ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729ACu; }
        if (ctx->pc != 0x1729ACu) { return; }
    }
    ctx->pc = 0x1729ACu;
    // 0x1729ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1729acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1729b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1729b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1729b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1729B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1729B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1729B4u;
            // 0x1729b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1729BCu;
}
