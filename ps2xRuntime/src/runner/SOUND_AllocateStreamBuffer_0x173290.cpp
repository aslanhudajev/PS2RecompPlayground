#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_AllocateStreamBuffer
// Address: 0x173290 - 0x1732f4
void SOUND_AllocateStreamBuffer_0x173290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_AllocateStreamBuffer_0x173290");
#endif

    ctx->pc = 0x173290u;

    // 0x173290: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x173290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x173294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x173298: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17329c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17329cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1732a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1732a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1732a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1732a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1732a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1732acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1732b0: 0xc05cf5c  jal         func_173D70
    ctx->pc = 0x1732B0u;
    SET_GPR_U32(ctx, 31, 0x1732B8u);
    ctx->pc = 0x1732B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732B0u;
            // 0x1732b4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173D70u;
    if (runtime->hasFunction(0x173D70u)) {
        auto targetFn = runtime->lookupFunction(0x173D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732B8u; }
        if (ctx->pc != 0x1732B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_StartCommand_0x173d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732B8u; }
        if (ctx->pc != 0x1732B8u) { return; }
    }
    ctx->pc = 0x1732B8u;
    // 0x1732b8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1732b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1732bc: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x1732BCu;
    SET_GPR_U32(ctx, 31, 0x1732C4u);
    ctx->pc = 0x1732C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732BCu;
            // 0x1732c0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732C4u; }
        if (ctx->pc != 0x1732C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddData_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732C4u; }
        if (ctx->pc != 0x1732C4u) { return; }
    }
    ctx->pc = 0x1732C4u;
    // 0x1732c4: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1732C4u;
    SET_GPR_U32(ctx, 31, 0x1732CCu);
    ctx->pc = 0x1732C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732C4u;
            // 0x1732c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732CCu; }
        if (ctx->pc != 0x1732CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732CCu; }
        if (ctx->pc != 0x1732CCu) { return; }
    }
    ctx->pc = 0x1732CCu;
    // 0x1732cc: 0xc05ce98  jal         func_173A60
    ctx->pc = 0x1732CCu;
    SET_GPR_U32(ctx, 31, 0x1732D4u);
    ctx->pc = 0x1732D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1732CCu;
            // 0x1732d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173A60u;
    if (runtime->hasFunction(0x173A60u)) {
        auto targetFn = runtime->lookupFunction(0x173A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732D4u; }
        if (ctx->pc != 0x1732D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_AddLongData_0x173a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732D4u; }
        if (ctx->pc != 0x1732D4u) { return; }
    }
    ctx->pc = 0x1732D4u;
    // 0x1732d4: 0xc05cec0  jal         func_173B00
    ctx->pc = 0x1732D4u;
    SET_GPR_U32(ctx, 31, 0x1732DCu);
    ctx->pc = 0x173B00u;
    if (runtime->hasFunction(0x173B00u)) {
        auto targetFn = runtime->lookupFunction(0x173B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732DCu; }
        if (ctx->pc != 0x1732DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SOUND_EndCommand_0x173b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1732DCu; }
        if (ctx->pc != 0x1732DCu) { return; }
    }
    ctx->pc = 0x1732DCu;
    // 0x1732dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1732dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1732e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1732e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1732e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1732e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1732e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1732e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1732ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1732ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1732F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1732ECu;
            // 0x1732f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1732F4u;
}
