#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitStage3Boss_Hontai
// Address: 0x1a0e10 - 0x1a0fbc
void InitStage3Boss_Hontai_0x1a0e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitStage3Boss_Hontai_0x1a0e10");
#endif

    ctx->pc = 0x1a0e10u;

    // 0x1a0e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a0e14: 0x240400a5  addiu       $a0, $zero, 0xA5
    ctx->pc = 0x1a0e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x1a0e18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0e1c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1a0e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a0e20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1a0e24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0e28: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1A0E28u;
    SET_GPR_U32(ctx, 31, 0x1A0E30u);
    ctx->pc = 0x1A0E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E28u;
            // 0x1a0e2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E30u; }
        if (ctx->pc != 0x1A0E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E30u; }
        if (ctx->pc != 0x1A0E30u) { return; }
    }
    ctx->pc = 0x1A0E30u;
    // 0x1a0e30: 0x2404009c  addiu       $a0, $zero, 0x9C
    ctx->pc = 0x1a0e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x1a0e34: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A0E34u;
    SET_GPR_U32(ctx, 31, 0x1A0E3Cu);
    ctx->pc = 0x1A0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E34u;
            // 0x1a0e38: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E3Cu; }
        if (ctx->pc != 0x1A0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E3Cu; }
        if (ctx->pc != 0x1A0E3Cu) { return; }
    }
    ctx->pc = 0x1A0E3Cu;
    // 0x1a0e3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e44: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E44u;
    SET_GPR_U32(ctx, 31, 0x1A0E4Cu);
    ctx->pc = 0x1A0E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E44u;
            // 0x1a0e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E4Cu; }
        if (ctx->pc != 0x1A0E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E4Cu; }
        if (ctx->pc != 0x1A0E4Cu) { return; }
    }
    ctx->pc = 0x1A0E4Cu;
    // 0x1a0e4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e50: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E50u;
    SET_GPR_U32(ctx, 31, 0x1A0E58u);
    ctx->pc = 0x1A0E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E50u;
            // 0x1a0e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E58u; }
        if (ctx->pc != 0x1A0E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E58u; }
        if (ctx->pc != 0x1A0E58u) { return; }
    }
    ctx->pc = 0x1A0E58u;
    // 0x1a0e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e5c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E64u);
    ctx->pc = 0x1A0E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E5Cu;
            // 0x1a0e60: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E64u; }
        if (ctx->pc != 0x1A0E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E64u; }
        if (ctx->pc != 0x1A0E64u) { return; }
    }
    ctx->pc = 0x1A0E64u;
    // 0x1a0e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e68: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E68u;
    SET_GPR_U32(ctx, 31, 0x1A0E70u);
    ctx->pc = 0x1A0E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E68u;
            // 0x1a0e6c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E70u; }
        if (ctx->pc != 0x1A0E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E70u; }
        if (ctx->pc != 0x1A0E70u) { return; }
    }
    ctx->pc = 0x1A0E70u;
    // 0x1a0e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E74u;
    SET_GPR_U32(ctx, 31, 0x1A0E7Cu);
    ctx->pc = 0x1A0E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E74u;
            // 0x1a0e78: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E7Cu; }
        if (ctx->pc != 0x1A0E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E7Cu; }
        if (ctx->pc != 0x1A0E7Cu) { return; }
    }
    ctx->pc = 0x1A0E7Cu;
    // 0x1a0e7c: 0x2404009e  addiu       $a0, $zero, 0x9E
    ctx->pc = 0x1a0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x1a0e80: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A0E80u;
    SET_GPR_U32(ctx, 31, 0x1A0E88u);
    ctx->pc = 0x1A0E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E80u;
            // 0x1a0e84: 0x24050033  addiu       $a1, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E88u; }
        if (ctx->pc != 0x1A0E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E88u; }
        if (ctx->pc != 0x1A0E88u) { return; }
    }
    ctx->pc = 0x1A0E88u;
    // 0x1a0e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e90: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E90u;
    SET_GPR_U32(ctx, 31, 0x1A0E98u);
    ctx->pc = 0x1A0E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E90u;
            // 0x1a0e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E98u; }
        if (ctx->pc != 0x1A0E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0E98u; }
        if (ctx->pc != 0x1A0E98u) { return; }
    }
    ctx->pc = 0x1A0E98u;
    // 0x1a0e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0e9c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A0EA4u);
    ctx->pc = 0x1A0EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0E9Cu;
            // 0x1a0ea0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EA4u; }
        if (ctx->pc != 0x1A0EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EA4u; }
        if (ctx->pc != 0x1A0EA4u) { return; }
    }
    ctx->pc = 0x1A0EA4u;
    // 0x1a0ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ea8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EA8u;
    SET_GPR_U32(ctx, 31, 0x1A0EB0u);
    ctx->pc = 0x1A0EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EA8u;
            // 0x1a0eac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EB0u; }
        if (ctx->pc != 0x1A0EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EB0u; }
        if (ctx->pc != 0x1A0EB0u) { return; }
    }
    ctx->pc = 0x1A0EB0u;
    // 0x1a0eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0eb4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EB4u;
    SET_GPR_U32(ctx, 31, 0x1A0EBCu);
    ctx->pc = 0x1A0EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EB4u;
            // 0x1a0eb8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EBCu; }
        if (ctx->pc != 0x1A0EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EBCu; }
        if (ctx->pc != 0x1A0EBCu) { return; }
    }
    ctx->pc = 0x1A0EBCu;
    // 0x1a0ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ec0: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EC0u;
    SET_GPR_U32(ctx, 31, 0x1A0EC8u);
    ctx->pc = 0x1A0EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EC0u;
            // 0x1a0ec4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EC8u; }
        if (ctx->pc != 0x1A0EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EC8u; }
        if (ctx->pc != 0x1A0EC8u) { return; }
    }
    ctx->pc = 0x1A0EC8u;
    // 0x1a0ec8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1a0ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1a0ecc: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A0ECCu;
    SET_GPR_U32(ctx, 31, 0x1A0ED4u);
    ctx->pc = 0x1A0ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0ECCu;
            // 0x1a0ed0: 0x24050034  addiu       $a1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ED4u; }
        if (ctx->pc != 0x1A0ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0ED4u; }
        if (ctx->pc != 0x1A0ED4u) { return; }
    }
    ctx->pc = 0x1A0ED4u;
    // 0x1a0ed4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ed8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0edc: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EDCu;
    SET_GPR_U32(ctx, 31, 0x1A0EE4u);
    ctx->pc = 0x1A0EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EDCu;
            // 0x1a0ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EE4u; }
        if (ctx->pc != 0x1A0EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EE4u; }
        if (ctx->pc != 0x1A0EE4u) { return; }
    }
    ctx->pc = 0x1A0EE4u;
    // 0x1a0ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ee8: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EE8u;
    SET_GPR_U32(ctx, 31, 0x1A0EF0u);
    ctx->pc = 0x1A0EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EE8u;
            // 0x1a0eec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EF0u; }
        if (ctx->pc != 0x1A0EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EF0u; }
        if (ctx->pc != 0x1A0EF0u) { return; }
    }
    ctx->pc = 0x1A0EF0u;
    // 0x1a0ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ef4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0EF4u;
    SET_GPR_U32(ctx, 31, 0x1A0EFCu);
    ctx->pc = 0x1A0EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0EF4u;
            // 0x1a0ef8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EFCu; }
        if (ctx->pc != 0x1A0EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0EFCu; }
        if (ctx->pc != 0x1A0EFCu) { return; }
    }
    ctx->pc = 0x1A0EFCu;
    // 0x1a0efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f00: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F00u;
    SET_GPR_U32(ctx, 31, 0x1A0F08u);
    ctx->pc = 0x1A0F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F00u;
            // 0x1a0f04: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F08u; }
        if (ctx->pc != 0x1A0F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F08u; }
        if (ctx->pc != 0x1A0F08u) { return; }
    }
    ctx->pc = 0x1A0F08u;
    // 0x1a0f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f0c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F14u);
    ctx->pc = 0x1A0F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F0Cu;
            // 0x1a0f10: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F14u; }
        if (ctx->pc != 0x1A0F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F14u; }
        if (ctx->pc != 0x1A0F14u) { return; }
    }
    ctx->pc = 0x1A0F14u;
    // 0x1a0f14: 0x2404009d  addiu       $a0, $zero, 0x9D
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
    // 0x1a0f18: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A0F18u;
    SET_GPR_U32(ctx, 31, 0x1A0F20u);
    ctx->pc = 0x1A0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F18u;
            // 0x1a0f1c: 0x24050035  addiu       $a1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F20u; }
        if (ctx->pc != 0x1A0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F20u; }
        if (ctx->pc != 0x1A0F20u) { return; }
    }
    ctx->pc = 0x1A0F20u;
    // 0x1a0f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f28: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F28u;
    SET_GPR_U32(ctx, 31, 0x1A0F30u);
    ctx->pc = 0x1A0F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F28u;
            // 0x1a0f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F30u; }
        if (ctx->pc != 0x1A0F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F30u; }
        if (ctx->pc != 0x1A0F30u) { return; }
    }
    ctx->pc = 0x1A0F30u;
    // 0x1a0f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f34: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F34u;
    SET_GPR_U32(ctx, 31, 0x1A0F3Cu);
    ctx->pc = 0x1A0F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F34u;
            // 0x1a0f38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F3Cu; }
        if (ctx->pc != 0x1A0F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F3Cu; }
        if (ctx->pc != 0x1A0F3Cu) { return; }
    }
    ctx->pc = 0x1A0F3Cu;
    // 0x1a0f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f40: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F40u;
    SET_GPR_U32(ctx, 31, 0x1A0F48u);
    ctx->pc = 0x1A0F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F40u;
            // 0x1a0f44: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F48u; }
        if (ctx->pc != 0x1A0F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F48u; }
        if (ctx->pc != 0x1A0F48u) { return; }
    }
    ctx->pc = 0x1A0F48u;
    // 0x1a0f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f4c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F54u);
    ctx->pc = 0x1A0F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F4Cu;
            // 0x1a0f50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F54u; }
        if (ctx->pc != 0x1A0F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F54u; }
        if (ctx->pc != 0x1A0F54u) { return; }
    }
    ctx->pc = 0x1A0F54u;
    // 0x1a0f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f58: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F58u;
    SET_GPR_U32(ctx, 31, 0x1A0F60u);
    ctx->pc = 0x1A0F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F58u;
            // 0x1a0f5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F60u; }
        if (ctx->pc != 0x1A0F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F60u; }
        if (ctx->pc != 0x1A0F60u) { return; }
    }
    ctx->pc = 0x1A0F60u;
    // 0x1a0f60: 0x2404009f  addiu       $a0, $zero, 0x9F
    ctx->pc = 0x1a0f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
    // 0x1a0f64: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1A0F64u;
    SET_GPR_U32(ctx, 31, 0x1A0F6Cu);
    ctx->pc = 0x1A0F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F64u;
            // 0x1a0f68: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F6Cu; }
        if (ctx->pc != 0x1A0F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F6Cu; }
        if (ctx->pc != 0x1A0F6Cu) { return; }
    }
    ctx->pc = 0x1A0F6Cu;
    // 0x1a0f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F74u;
    SET_GPR_U32(ctx, 31, 0x1A0F7Cu);
    ctx->pc = 0x1A0F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F74u;
            // 0x1a0f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F7Cu; }
        if (ctx->pc != 0x1A0F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F7Cu; }
        if (ctx->pc != 0x1A0F7Cu) { return; }
    }
    ctx->pc = 0x1A0F7Cu;
    // 0x1a0f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F80u;
    SET_GPR_U32(ctx, 31, 0x1A0F88u);
    ctx->pc = 0x1A0F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F80u;
            // 0x1a0f84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F88u; }
        if (ctx->pc != 0x1A0F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F88u; }
        if (ctx->pc != 0x1A0F88u) { return; }
    }
    ctx->pc = 0x1A0F88u;
    // 0x1a0f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A0F94u);
    ctx->pc = 0x1A0F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F8Cu;
            // 0x1a0f90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F94u; }
        if (ctx->pc != 0x1A0F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0F94u; }
        if (ctx->pc != 0x1A0F94u) { return; }
    }
    ctx->pc = 0x1A0F94u;
    // 0x1a0f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0F98u;
    SET_GPR_U32(ctx, 31, 0x1A0FA0u);
    ctx->pc = 0x1A0F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0F98u;
            // 0x1a0f9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FA0u; }
        if (ctx->pc != 0x1A0FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FA0u; }
        if (ctx->pc != 0x1A0FA0u) { return; }
    }
    ctx->pc = 0x1A0FA0u;
    // 0x1a0fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0fa4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1A0FA4u;
    SET_GPR_U32(ctx, 31, 0x1A0FACu);
    ctx->pc = 0x1A0FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FA4u;
            // 0x1a0fa8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FACu; }
        if (ctx->pc != 0x1A0FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0FACu; }
        if (ctx->pc != 0x1A0FACu) { return; }
    }
    ctx->pc = 0x1A0FACu;
    // 0x1a0fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A0FB4u;
            // 0x1a0fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A0FBCu;
}
