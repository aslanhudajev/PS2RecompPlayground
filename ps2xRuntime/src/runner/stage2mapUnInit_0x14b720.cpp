#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2mapUnInit
// Address: 0x14b720 - 0x14b7bc
void stage2mapUnInit_0x14b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2mapUnInit_0x14b720");
#endif

    ctx->pc = 0x14b720u;

    // 0x14b720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b728: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B728u;
    SET_GPR_U32(ctx, 31, 0x14B730u);
    ctx->pc = 0x14B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B728u;
            // 0x14b72c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B730u; }
        if (ctx->pc != 0x14B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B730u; }
        if (ctx->pc != 0x14B730u) { return; }
    }
    ctx->pc = 0x14B730u;
    // 0x14b730: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14B730u;
    SET_GPR_U32(ctx, 31, 0x14B738u);
    ctx->pc = 0x14B734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B730u;
            // 0x14b734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B738u; }
        if (ctx->pc != 0x14B738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B738u; }
        if (ctx->pc != 0x14B738u) { return; }
    }
    ctx->pc = 0x14B738u;
    // 0x14b738: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B738u;
    SET_GPR_U32(ctx, 31, 0x14B740u);
    ctx->pc = 0x14B73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B738u;
            // 0x14b73c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B740u; }
        if (ctx->pc != 0x14B740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B740u; }
        if (ctx->pc != 0x14B740u) { return; }
    }
    ctx->pc = 0x14B740u;
    // 0x14b740: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14B740u;
    SET_GPR_U32(ctx, 31, 0x14B748u);
    ctx->pc = 0x14B744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B740u;
            // 0x14b744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B748u; }
        if (ctx->pc != 0x14B748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B748u; }
        if (ctx->pc != 0x14B748u) { return; }
    }
    ctx->pc = 0x14B748u;
    // 0x14b748: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B748u;
    SET_GPR_U32(ctx, 31, 0x14B750u);
    ctx->pc = 0x14B74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B748u;
            // 0x14b74c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B750u; }
        if (ctx->pc != 0x14B750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B750u; }
        if (ctx->pc != 0x14B750u) { return; }
    }
    ctx->pc = 0x14B750u;
    // 0x14b750: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14B750u;
    SET_GPR_U32(ctx, 31, 0x14B758u);
    ctx->pc = 0x14B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B750u;
            // 0x14b754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B758u; }
        if (ctx->pc != 0x14B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B758u; }
        if (ctx->pc != 0x14B758u) { return; }
    }
    ctx->pc = 0x14B758u;
    // 0x14b758: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14B758u;
    SET_GPR_U32(ctx, 31, 0x14B760u);
    ctx->pc = 0x14B75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B758u;
            // 0x14b75c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B760u; }
        if (ctx->pc != 0x14B760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B760u; }
        if (ctx->pc != 0x14B760u) { return; }
    }
    ctx->pc = 0x14B760u;
    // 0x14b760: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14B760u;
    SET_GPR_U32(ctx, 31, 0x14B768u);
    ctx->pc = 0x14B764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B760u;
            // 0x14b764: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B768u; }
        if (ctx->pc != 0x14B768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B768u; }
        if (ctx->pc != 0x14B768u) { return; }
    }
    ctx->pc = 0x14B768u;
    // 0x14b768: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B768u;
    SET_GPR_U32(ctx, 31, 0x14B770u);
    ctx->pc = 0x14B76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B768u;
            // 0x14b76c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B770u; }
        if (ctx->pc != 0x14B770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B770u; }
        if (ctx->pc != 0x14B770u) { return; }
    }
    ctx->pc = 0x14B770u;
    // 0x14b770: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B770u;
    SET_GPR_U32(ctx, 31, 0x14B778u);
    ctx->pc = 0x14B774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B770u;
            // 0x14b774: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B778u; }
        if (ctx->pc != 0x14B778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B778u; }
        if (ctx->pc != 0x14B778u) { return; }
    }
    ctx->pc = 0x14B778u;
    // 0x14b778: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B778u;
    SET_GPR_U32(ctx, 31, 0x14B780u);
    ctx->pc = 0x14B77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B778u;
            // 0x14b77c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B780u; }
        if (ctx->pc != 0x14B780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B780u; }
        if (ctx->pc != 0x14B780u) { return; }
    }
    ctx->pc = 0x14B780u;
    // 0x14b780: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B780u;
    SET_GPR_U32(ctx, 31, 0x14B788u);
    ctx->pc = 0x14B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B780u;
            // 0x14b784: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B788u; }
        if (ctx->pc != 0x14B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B788u; }
        if (ctx->pc != 0x14B788u) { return; }
    }
    ctx->pc = 0x14B788u;
    // 0x14b788: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B788u;
    SET_GPR_U32(ctx, 31, 0x14B790u);
    ctx->pc = 0x14B78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B788u;
            // 0x14b78c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B790u; }
        if (ctx->pc != 0x14B790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B790u; }
        if (ctx->pc != 0x14B790u) { return; }
    }
    ctx->pc = 0x14B790u;
    // 0x14b790: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B790u;
    SET_GPR_U32(ctx, 31, 0x14B798u);
    ctx->pc = 0x14B794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B790u;
            // 0x14b794: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B798u; }
        if (ctx->pc != 0x14B798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B798u; }
        if (ctx->pc != 0x14B798u) { return; }
    }
    ctx->pc = 0x14B798u;
    // 0x14b798: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B798u;
    SET_GPR_U32(ctx, 31, 0x14B7A0u);
    ctx->pc = 0x14B79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B798u;
            // 0x14b79c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7A0u; }
        if (ctx->pc != 0x14B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7A0u; }
        if (ctx->pc != 0x14B7A0u) { return; }
    }
    ctx->pc = 0x14B7A0u;
    // 0x14b7a0: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B7A0u;
    SET_GPR_U32(ctx, 31, 0x14B7A8u);
    ctx->pc = 0x14B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7A0u;
            // 0x14b7a4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7A8u; }
        if (ctx->pc != 0x14B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7A8u; }
        if (ctx->pc != 0x14B7A8u) { return; }
    }
    ctx->pc = 0x14B7A8u;
    // 0x14b7a8: 0xc060680  jal         func_181A00
    ctx->pc = 0x14B7A8u;
    SET_GPR_U32(ctx, 31, 0x14B7B0u);
    ctx->pc = 0x14B7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7A8u;
            // 0x14b7ac: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7B0u; }
        if (ctx->pc != 0x14B7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14B7B0u; }
        if (ctx->pc != 0x14B7B0u) { return; }
    }
    ctx->pc = 0x14B7B0u;
    // 0x14b7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B7B4u;
            // 0x14b7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B7BCu;
}
