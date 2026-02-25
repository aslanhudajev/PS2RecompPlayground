#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_PatchSFX
// Address: 0x172a60 - 0x172ab0
void SOUND_PatchSFX_0x172a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_PatchSFX_0x172a60");
#endif

    ctx->pc = 0x172a60u;

    // 0x172a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x172a64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x172a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x172a68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x172a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172a78: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x172A78u;
    SET_GPR_U32(ctx, 31, 0x172A80u);
    ctx->pc = 0x172A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A78u;
            // 0x172a7c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A80u; }
        if (ctx->pc != 0x172A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A80u; }
        if (ctx->pc != 0x172A80u) { return; }
    }
    ctx->pc = 0x172A80u;
    // 0x172a80: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x172a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x172a84: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x172A84u;
    SET_GPR_U32(ctx, 31, 0x172A8Cu);
    ctx->pc = 0x172A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A84u;
            // 0x172a88: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A8Cu; }
        if (ctx->pc != 0x172A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A8Cu; }
        if (ctx->pc != 0x172A8Cu) { return; }
    }
    ctx->pc = 0x172A8Cu;
    // 0x172a8c: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x172A8Cu;
    SET_GPR_U32(ctx, 31, 0x172A94u);
    ctx->pc = 0x172A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172A8Cu;
            // 0x172a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A94u; }
        if (ctx->pc != 0x172A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A94u; }
        if (ctx->pc != 0x172A94u) { return; }
    }
    ctx->pc = 0x172A94u;
    // 0x172a94: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x172A94u;
    SET_GPR_U32(ctx, 31, 0x172A9Cu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A9Cu; }
        if (ctx->pc != 0x172A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172A9Cu; }
        if (ctx->pc != 0x172A9Cu) { return; }
    }
    ctx->pc = 0x172A9Cu;
    // 0x172a9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172aa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x172aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172aa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x172aa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x172AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172AA8u;
            // 0x172aac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172AB0u;
}
