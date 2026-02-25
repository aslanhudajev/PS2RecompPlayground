#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stageEX2mapUnInit
// Address: 0x1487c0 - 0x14881c
void stageEX2mapUnInit_0x1487c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stageEX2mapUnInit_0x1487c0");
#endif

    ctx->pc = 0x1487c0u;

    // 0x1487c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1487c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1487c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1487c8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1487C8u;
    SET_GPR_U32(ctx, 31, 0x1487D0u);
    ctx->pc = 0x1487CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487C8u;
            // 0x1487cc: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487D0u; }
        if (ctx->pc != 0x1487D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487D0u; }
        if (ctx->pc != 0x1487D0u) { return; }
    }
    ctx->pc = 0x1487D0u;
    // 0x1487d0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1487D0u;
    SET_GPR_U32(ctx, 31, 0x1487D8u);
    ctx->pc = 0x1487D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487D0u;
            // 0x1487d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487D8u; }
        if (ctx->pc != 0x1487D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487D8u; }
        if (ctx->pc != 0x1487D8u) { return; }
    }
    ctx->pc = 0x1487D8u;
    // 0x1487d8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1487D8u;
    SET_GPR_U32(ctx, 31, 0x1487E0u);
    ctx->pc = 0x1487DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487D8u;
            // 0x1487dc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487E0u; }
        if (ctx->pc != 0x1487E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487E0u; }
        if (ctx->pc != 0x1487E0u) { return; }
    }
    ctx->pc = 0x1487E0u;
    // 0x1487e0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1487E0u;
    SET_GPR_U32(ctx, 31, 0x1487E8u);
    ctx->pc = 0x1487E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487E0u;
            // 0x1487e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487E8u; }
        if (ctx->pc != 0x1487E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487E8u; }
        if (ctx->pc != 0x1487E8u) { return; }
    }
    ctx->pc = 0x1487E8u;
    // 0x1487e8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1487E8u;
    SET_GPR_U32(ctx, 31, 0x1487F0u);
    ctx->pc = 0x1487ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487E8u;
            // 0x1487ec: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F0u; }
        if (ctx->pc != 0x1487F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F0u; }
        if (ctx->pc != 0x1487F0u) { return; }
    }
    ctx->pc = 0x1487F0u;
    // 0x1487f0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1487F0u;
    SET_GPR_U32(ctx, 31, 0x1487F8u);
    ctx->pc = 0x1487F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487F0u;
            // 0x1487f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F8u; }
        if (ctx->pc != 0x1487F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1487F8u; }
        if (ctx->pc != 0x1487F8u) { return; }
    }
    ctx->pc = 0x1487F8u;
    // 0x1487f8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1487F8u;
    SET_GPR_U32(ctx, 31, 0x148800u);
    ctx->pc = 0x1487FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1487F8u;
            // 0x1487fc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148800u; }
        if (ctx->pc != 0x148800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148800u; }
        if (ctx->pc != 0x148800u) { return; }
    }
    ctx->pc = 0x148800u;
    // 0x148800: 0xc060680  jal         func_181A00
    ctx->pc = 0x148800u;
    SET_GPR_U32(ctx, 31, 0x148808u);
    ctx->pc = 0x148804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148800u;
            // 0x148804: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148808u; }
        if (ctx->pc != 0x148808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148808u; }
        if (ctx->pc != 0x148808u) { return; }
    }
    ctx->pc = 0x148808u;
    // 0x148808: 0xc060680  jal         func_181A00
    ctx->pc = 0x148808u;
    SET_GPR_U32(ctx, 31, 0x148810u);
    ctx->pc = 0x14880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x148808u;
            // 0x14880c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148810u; }
        if (ctx->pc != 0x148810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x148810u; }
        if (ctx->pc != 0x148810u) { return; }
    }
    ctx->pc = 0x148810u;
    // 0x148810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x148810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148814: 0x3e00008  jr          $ra
    ctx->pc = 0x148814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x148814u;
            // 0x148818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14881Cu;
}
