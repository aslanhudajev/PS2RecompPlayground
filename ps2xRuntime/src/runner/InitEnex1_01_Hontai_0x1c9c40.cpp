#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitEnex1_01_Hontai
// Address: 0x1c9c40 - 0x1c9cbc
void InitEnex1_01_Hontai_0x1c9c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitEnex1_01_Hontai_0x1c9c40");
#endif

    ctx->pc = 0x1c9c40u;

    // 0x1c9c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9c44: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x1c9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x1c9c48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9c4c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1c9c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1c9c50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9c54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1c9c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c9c58: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1C9C58u;
    SET_GPR_U32(ctx, 31, 0x1C9C60u);
    ctx->pc = 0x1C9C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C58u;
            // 0x1c9c5c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C60u; }
        if (ctx->pc != 0x1C9C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C60u; }
        if (ctx->pc != 0x1C9C60u) { return; }
    }
    ctx->pc = 0x1C9C60u;
    // 0x1c9c60: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x1c9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1c9c64: 0xc05bce8  jal         func_16F3A0
    ctx->pc = 0x1C9C64u;
    SET_GPR_U32(ctx, 31, 0x1C9C6Cu);
    ctx->pc = 0x1C9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C64u;
            // 0x1c9c68: 0x24050029  addiu       $a1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F3A0u;
    if (runtime->hasFunction(0x16F3A0u)) {
        auto targetFn = runtime->lookupFunction(0x16F3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C6Cu; }
        if (ctx->pc != 0x1C9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadEsrom_0x16f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C6Cu; }
        if (ctx->pc != 0x1C9C6Cu) { return; }
    }
    ctx->pc = 0x1C9C6Cu;
    // 0x1c9c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c74: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C9C74u;
    SET_GPR_U32(ctx, 31, 0x1C9C7Cu);
    ctx->pc = 0x1C9C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C74u;
            // 0x1c9c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C7Cu; }
        if (ctx->pc != 0x1C9C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C7Cu; }
        if (ctx->pc != 0x1C9C7Cu) { return; }
    }
    ctx->pc = 0x1C9C7Cu;
    // 0x1c9c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c80: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C9C80u;
    SET_GPR_U32(ctx, 31, 0x1C9C88u);
    ctx->pc = 0x1C9C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C80u;
            // 0x1c9c84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C88u; }
        if (ctx->pc != 0x1C9C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C88u; }
        if (ctx->pc != 0x1C9C88u) { return; }
    }
    ctx->pc = 0x1C9C88u;
    // 0x1c9c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c8c: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C9C8Cu;
    SET_GPR_U32(ctx, 31, 0x1C9C94u);
    ctx->pc = 0x1C9C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C8Cu;
            // 0x1c9c90: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C94u; }
        if (ctx->pc != 0x1C9C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C94u; }
        if (ctx->pc != 0x1C9C94u) { return; }
    }
    ctx->pc = 0x1C9C94u;
    // 0x1c9c94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9c98: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C9C98u;
    SET_GPR_U32(ctx, 31, 0x1C9CA0u);
    ctx->pc = 0x1C9C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C98u;
            // 0x1c9c9c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CA0u; }
        if (ctx->pc != 0x1C9CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CA0u; }
        if (ctx->pc != 0x1C9CA0u) { return; }
    }
    ctx->pc = 0x1C9CA0u;
    // 0x1c9ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ca4: 0xc060630  jal         func_1818C0
    ctx->pc = 0x1C9CA4u;
    SET_GPR_U32(ctx, 31, 0x1C9CACu);
    ctx->pc = 0x1C9CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CA4u;
            // 0x1c9ca8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1818C0u;
    if (runtime->hasFunction(0x1818C0u)) {
        auto targetFn = runtime->lookupFunction(0x1818C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CACu; }
        if (ctx->pc != 0x1C9CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlugEs_0x1818c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9CACu; }
        if (ctx->pc != 0x1C9CACu) { return; }
    }
    ctx->pc = 0x1C9CACu;
    // 0x1c9cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c9cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9CB4u;
            // 0x1c9cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9CBCu;
}
