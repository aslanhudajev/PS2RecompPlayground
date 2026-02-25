#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_InitStreamData
// Address: 0x1733a0 - 0x17340c
void SOUND_InitStreamData_0x1733a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_InitStreamData_0x1733a0");
#endif

    ctx->pc = 0x1733a0u;

    // 0x1733a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1733a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1733a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1733a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1733a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1733a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1733ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1733acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1733b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1733b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1733b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1733b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1733b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1733bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1733c0: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1733C0u;
    SET_GPR_U32(ctx, 31, 0x1733C8u);
    ctx->pc = 0x1733C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733C0u;
            // 0x1733c4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733C8u; }
        if (ctx->pc != 0x1733C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733C8u; }
        if (ctx->pc != 0x1733C8u) { return; }
    }
    ctx->pc = 0x1733C8u;
    // 0x1733c8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1733c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1733cc: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1733CCu;
    SET_GPR_U32(ctx, 31, 0x1733D4u);
    ctx->pc = 0x1733D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733CCu;
            // 0x1733d0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733D4u; }
        if (ctx->pc != 0x1733D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733D4u; }
        if (ctx->pc != 0x1733D4u) { return; }
    }
    ctx->pc = 0x1733D4u;
    // 0x1733d4: 0x11243c  dsll32      $a0, $s1, 16
    ctx->pc = 0x1733d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1733d8: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1733D8u;
    SET_GPR_U32(ctx, 31, 0x1733E0u);
    ctx->pc = 0x1733DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733D8u;
            // 0x1733dc: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733E0u; }
        if (ctx->pc != 0x1733E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733E0u; }
        if (ctx->pc != 0x1733E0u) { return; }
    }
    ctx->pc = 0x1733E0u;
    // 0x1733e0: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x1733e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1733e4: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1733E4u;
    SET_GPR_U32(ctx, 31, 0x1733ECu);
    ctx->pc = 0x1733E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1733E4u;
            // 0x1733e8: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733ECu; }
        if (ctx->pc != 0x1733ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733ECu; }
        if (ctx->pc != 0x1733ECu) { return; }
    }
    ctx->pc = 0x1733ECu;
    // 0x1733ec: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1733ECu;
    SET_GPR_U32(ctx, 31, 0x1733F4u);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F4u; }
        if (ctx->pc != 0x1733F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1733F4u; }
        if (ctx->pc != 0x1733F4u) { return; }
    }
    ctx->pc = 0x1733F4u;
    // 0x1733f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1733f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1733f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1733f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1733fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1733fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173404: 0x3e00008  jr          $ra
    ctx->pc = 0x173404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173404u;
            // 0x173408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17340Cu;
}
