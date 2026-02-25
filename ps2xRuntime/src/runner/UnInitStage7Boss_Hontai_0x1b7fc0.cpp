#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: UnInitStage7Boss_Hontai
// Address: 0x1b7fc0 - 0x1b802c
void UnInitStage7Boss_Hontai_0x1b7fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("UnInitStage7Boss_Hontai_0x1b7fc0");
#endif

    ctx->pc = 0x1b7fc0u;

    // 0x1b7fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7fc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7fc8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B7FC8u;
    SET_GPR_U32(ctx, 31, 0x1B7FD0u);
    ctx->pc = 0x1B7FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FC8u;
            // 0x1b7fcc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD0u; }
        if (ctx->pc != 0x1B7FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD0u; }
        if (ctx->pc != 0x1B7FD0u) { return; }
    }
    ctx->pc = 0x1B7FD0u;
    // 0x1b7fd0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1B7FD0u;
    SET_GPR_U32(ctx, 31, 0x1B7FD8u);
    ctx->pc = 0x1B7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FD0u;
            // 0x1b7fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD8u; }
        if (ctx->pc != 0x1B7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FD8u; }
        if (ctx->pc != 0x1B7FD8u) { return; }
    }
    ctx->pc = 0x1B7FD8u;
    // 0x1b7fd8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1B7FD8u;
    SET_GPR_U32(ctx, 31, 0x1B7FE0u);
    ctx->pc = 0x1B7FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FD8u;
            // 0x1b7fdc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE0u; }
        if (ctx->pc != 0x1B7FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE0u; }
        if (ctx->pc != 0x1B7FE0u) { return; }
    }
    ctx->pc = 0x1B7FE0u;
    // 0x1b7fe0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1B7FE0u;
    SET_GPR_U32(ctx, 31, 0x1B7FE8u);
    ctx->pc = 0x1B7FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FE0u;
            // 0x1b7fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE8u; }
        if (ctx->pc != 0x1B7FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FE8u; }
        if (ctx->pc != 0x1B7FE8u) { return; }
    }
    ctx->pc = 0x1B7FE8u;
    // 0x1b7fe8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B7FE8u;
    SET_GPR_U32(ctx, 31, 0x1B7FF0u);
    ctx->pc = 0x1B7FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FE8u;
            // 0x1b7fec: 0x24040032  addiu       $a0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF0u; }
        if (ctx->pc != 0x1B7FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF0u; }
        if (ctx->pc != 0x1B7FF0u) { return; }
    }
    ctx->pc = 0x1B7FF0u;
    // 0x1b7ff0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B7FF0u;
    SET_GPR_U32(ctx, 31, 0x1B7FF8u);
    ctx->pc = 0x1B7FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FF0u;
            // 0x1b7ff4: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF8u; }
        if (ctx->pc != 0x1B7FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7FF8u; }
        if (ctx->pc != 0x1B7FF8u) { return; }
    }
    ctx->pc = 0x1B7FF8u;
    // 0x1b7ff8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B7FF8u;
    SET_GPR_U32(ctx, 31, 0x1B8000u);
    ctx->pc = 0x1B7FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7FF8u;
            // 0x1b7ffc: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8000u; }
        if (ctx->pc != 0x1B8000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8000u; }
        if (ctx->pc != 0x1B8000u) { return; }
    }
    ctx->pc = 0x1B8000u;
    // 0x1b8000: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B8000u;
    SET_GPR_U32(ctx, 31, 0x1B8008u);
    ctx->pc = 0x1B8004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8000u;
            // 0x1b8004: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8008u; }
        if (ctx->pc != 0x1B8008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8008u; }
        if (ctx->pc != 0x1B8008u) { return; }
    }
    ctx->pc = 0x1B8008u;
    // 0x1b8008: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B8008u;
    SET_GPR_U32(ctx, 31, 0x1B8010u);
    ctx->pc = 0x1B800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8008u;
            // 0x1b800c: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8010u; }
        if (ctx->pc != 0x1B8010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8010u; }
        if (ctx->pc != 0x1B8010u) { return; }
    }
    ctx->pc = 0x1B8010u;
    // 0x1b8010: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B8010u;
    SET_GPR_U32(ctx, 31, 0x1B8018u);
    ctx->pc = 0x1B8014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8010u;
            // 0x1b8014: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8018u; }
        if (ctx->pc != 0x1B8018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8018u; }
        if (ctx->pc != 0x1B8018u) { return; }
    }
    ctx->pc = 0x1B8018u;
    // 0x1b8018: 0xc060680  jal         func_181A00
    ctx->pc = 0x1B8018u;
    SET_GPR_U32(ctx, 31, 0x1B8020u);
    ctx->pc = 0x1B801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8018u;
            // 0x1b801c: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8020u; }
        if (ctx->pc != 0x1B8020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B8020u; }
        if (ctx->pc != 0x1B8020u) { return; }
    }
    ctx->pc = 0x1B8020u;
    // 0x1b8020: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8024: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8024u;
            // 0x1b8028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B802Cu;
}
