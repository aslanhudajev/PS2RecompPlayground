#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEn3_02_Hontai
// Address: 0x19c0a0 - 0x19c108
void InitEn3_02_Hontai_0x19c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEn3_02_Hontai_0x19c0a0");
#endif

    ctx->pc = 0x19c0a0u;

    // 0x19c0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c0a4: 0x240400a2  addiu       $a0, $zero, 0xA2
    ctx->pc = 0x19c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x19c0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19c0ac: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x19c0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x19c0b0: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x19C0B0u;
    SET_GPR_U32(ctx, 31, 0x19C0B8u);
    ctx->pc = 0x19C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0B0u;
            // 0x19c0b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0B8u; }
        if (ctx->pc != 0x19C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0B8u; }
        if (ctx->pc != 0x19C0B8u) { return; }
    }
    ctx->pc = 0x19C0B8u;
    // 0x19c0b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0c0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19C0C0u;
    SET_GPR_U32(ctx, 31, 0x19C0C8u);
    ctx->pc = 0x19C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0C0u;
            // 0x19c0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0C8u; }
        if (ctx->pc != 0x19C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0C8u; }
        if (ctx->pc != 0x19C0C8u) { return; }
    }
    ctx->pc = 0x19C0C8u;
    // 0x19c0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0cc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19C0CCu;
    SET_GPR_U32(ctx, 31, 0x19C0D4u);
    ctx->pc = 0x19C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0CCu;
            // 0x19c0d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0D4u; }
        if (ctx->pc != 0x19C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0D4u; }
        if (ctx->pc != 0x19C0D4u) { return; }
    }
    ctx->pc = 0x19C0D4u;
    // 0x19c0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0d8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19C0D8u;
    SET_GPR_U32(ctx, 31, 0x19C0E0u);
    ctx->pc = 0x19C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0D8u;
            // 0x19c0dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E0u; }
        if (ctx->pc != 0x19C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0E0u; }
        if (ctx->pc != 0x19C0E0u) { return; }
    }
    ctx->pc = 0x19C0E0u;
    // 0x19c0e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0e4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19C0E4u;
    SET_GPR_U32(ctx, 31, 0x19C0ECu);
    ctx->pc = 0x19C0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0E4u;
            // 0x19c0e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0ECu; }
        if (ctx->pc != 0x19C0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0ECu; }
        if (ctx->pc != 0x19C0ECu) { return; }
    }
    ctx->pc = 0x19C0ECu;
    // 0x19c0ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0f0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x19C0F0u;
    SET_GPR_U32(ctx, 31, 0x19C0F8u);
    ctx->pc = 0x19C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0F0u;
            // 0x19c0f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0F8u; }
        if (ctx->pc != 0x19C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0F8u; }
        if (ctx->pc != 0x19C0F8u) { return; }
    }
    ctx->pc = 0x19C0F8u;
    // 0x19c0f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19c0f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c0fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19c0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c100: 0x3e00008  jr          $ra
    ctx->pc = 0x19C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C100u;
            // 0x19c104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C108u;
}
