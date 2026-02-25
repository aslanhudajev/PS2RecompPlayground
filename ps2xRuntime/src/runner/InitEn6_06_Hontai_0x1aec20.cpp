#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn6_06_Hontai
// Address: 0x1aec20 - 0x1aec9c
void InitEn6_06_Hontai_0x1aec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn6_06_Hontai_0x1aec20");
#endif

    ctx->pc = 0x1aec20u;

    // 0x1aec20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aec24: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1aec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1aec28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1aec28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1aec2c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1aec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1aec30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aec30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1aec34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aec38: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1AEC38u;
    SET_GPR_U32(ctx, 31, 0x1AEC40u);
    ctx->pc = 0x1AEC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC38u;
            // 0x1aec3c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC40u; }
        if (ctx->pc != 0x1AEC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC40u; }
        if (ctx->pc != 0x1AEC40u) { return; }
    }
    ctx->pc = 0x1AEC40u;
    // 0x1aec40: 0x240400fb  addiu       $a0, $zero, 0xFB
    ctx->pc = 0x1aec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
    // 0x1aec44: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1AEC44u;
    SET_GPR_U32(ctx, 31, 0x1AEC4Cu);
    ctx->pc = 0x1AEC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC44u;
            // 0x1aec48: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC4Cu; }
        if (ctx->pc != 0x1AEC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC4Cu; }
        if (ctx->pc != 0x1AEC4Cu) { return; }
    }
    ctx->pc = 0x1AEC4Cu;
    // 0x1aec4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aec4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aec50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec54: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AEC54u;
    SET_GPR_U32(ctx, 31, 0x1AEC5Cu);
    ctx->pc = 0x1AEC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC54u;
            // 0x1aec58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC5Cu; }
        if (ctx->pc != 0x1AEC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC5Cu; }
        if (ctx->pc != 0x1AEC5Cu) { return; }
    }
    ctx->pc = 0x1AEC5Cu;
    // 0x1aec5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec60: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AEC60u;
    SET_GPR_U32(ctx, 31, 0x1AEC68u);
    ctx->pc = 0x1AEC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC60u;
            // 0x1aec64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC68u; }
        if (ctx->pc != 0x1AEC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC68u; }
        if (ctx->pc != 0x1AEC68u) { return; }
    }
    ctx->pc = 0x1AEC68u;
    // 0x1aec68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec6c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AEC6Cu;
    SET_GPR_U32(ctx, 31, 0x1AEC74u);
    ctx->pc = 0x1AEC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC6Cu;
            // 0x1aec70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC74u; }
        if (ctx->pc != 0x1AEC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC74u; }
        if (ctx->pc != 0x1AEC74u) { return; }
    }
    ctx->pc = 0x1AEC74u;
    // 0x1aec74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aec74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec78: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AEC78u;
    SET_GPR_U32(ctx, 31, 0x1AEC80u);
    ctx->pc = 0x1AEC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC78u;
            // 0x1aec7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC80u; }
        if (ctx->pc != 0x1AEC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC80u; }
        if (ctx->pc != 0x1AEC80u) { return; }
    }
    ctx->pc = 0x1AEC80u;
    // 0x1aec80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aec80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aec84: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1AEC84u;
    SET_GPR_U32(ctx, 31, 0x1AEC8Cu);
    ctx->pc = 0x1AEC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC84u;
            // 0x1aec88: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC8Cu; }
        if (ctx->pc != 0x1AEC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AEC8Cu; }
        if (ctx->pc != 0x1AEC8Cu) { return; }
    }
    ctx->pc = 0x1AEC8Cu;
    // 0x1aec8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aec8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aec90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aec90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aec94: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AEC94u;
            // 0x1aec98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AEC9Cu;
}
