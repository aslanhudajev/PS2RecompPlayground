#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage6mapUnInit
// Address: 0x149420 - 0x149494
void stage6mapUnInit_0x149420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage6mapUnInit_0x149420");
#endif

    ctx->pc = 0x149420u;

    // 0x149420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149428: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149428u;
    SET_GPR_U32(ctx, 31, 0x149430u);
    ctx->pc = 0x14942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149428u;
            // 0x14942c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149430u; }
        if (ctx->pc != 0x149430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149430u; }
        if (ctx->pc != 0x149430u) { return; }
    }
    ctx->pc = 0x149430u;
    // 0x149430: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149430u;
    SET_GPR_U32(ctx, 31, 0x149438u);
    ctx->pc = 0x149434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149430u;
            // 0x149434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149438u; }
        if (ctx->pc != 0x149438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149438u; }
        if (ctx->pc != 0x149438u) { return; }
    }
    ctx->pc = 0x149438u;
    // 0x149438: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149438u;
    SET_GPR_U32(ctx, 31, 0x149440u);
    ctx->pc = 0x14943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149438u;
            // 0x14943c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149440u; }
        if (ctx->pc != 0x149440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149440u; }
        if (ctx->pc != 0x149440u) { return; }
    }
    ctx->pc = 0x149440u;
    // 0x149440: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149440u;
    SET_GPR_U32(ctx, 31, 0x149448u);
    ctx->pc = 0x149444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149440u;
            // 0x149444: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149448u; }
        if (ctx->pc != 0x149448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149448u; }
        if (ctx->pc != 0x149448u) { return; }
    }
    ctx->pc = 0x149448u;
    // 0x149448: 0xc060680  jal         func_181A00
    ctx->pc = 0x149448u;
    SET_GPR_U32(ctx, 31, 0x149450u);
    ctx->pc = 0x14944Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149448u;
            // 0x14944c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149450u; }
        if (ctx->pc != 0x149450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149450u; }
        if (ctx->pc != 0x149450u) { return; }
    }
    ctx->pc = 0x149450u;
    // 0x149450: 0xc060680  jal         func_181A00
    ctx->pc = 0x149450u;
    SET_GPR_U32(ctx, 31, 0x149458u);
    ctx->pc = 0x149454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149450u;
            // 0x149454: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149458u; }
        if (ctx->pc != 0x149458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149458u; }
        if (ctx->pc != 0x149458u) { return; }
    }
    ctx->pc = 0x149458u;
    // 0x149458: 0xc060680  jal         func_181A00
    ctx->pc = 0x149458u;
    SET_GPR_U32(ctx, 31, 0x149460u);
    ctx->pc = 0x14945Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149458u;
            // 0x14945c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149460u; }
        if (ctx->pc != 0x149460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149460u; }
        if (ctx->pc != 0x149460u) { return; }
    }
    ctx->pc = 0x149460u;
    // 0x149460: 0xc060680  jal         func_181A00
    ctx->pc = 0x149460u;
    SET_GPR_U32(ctx, 31, 0x149468u);
    ctx->pc = 0x149464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149460u;
            // 0x149464: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149468u; }
        if (ctx->pc != 0x149468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149468u; }
        if (ctx->pc != 0x149468u) { return; }
    }
    ctx->pc = 0x149468u;
    // 0x149468: 0xc060680  jal         func_181A00
    ctx->pc = 0x149468u;
    SET_GPR_U32(ctx, 31, 0x149470u);
    ctx->pc = 0x14946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149468u;
            // 0x14946c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149470u; }
        if (ctx->pc != 0x149470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149470u; }
        if (ctx->pc != 0x149470u) { return; }
    }
    ctx->pc = 0x149470u;
    // 0x149470: 0xc060680  jal         func_181A00
    ctx->pc = 0x149470u;
    SET_GPR_U32(ctx, 31, 0x149478u);
    ctx->pc = 0x149474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149470u;
            // 0x149474: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149478u; }
        if (ctx->pc != 0x149478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149478u; }
        if (ctx->pc != 0x149478u) { return; }
    }
    ctx->pc = 0x149478u;
    // 0x149478: 0xc060680  jal         func_181A00
    ctx->pc = 0x149478u;
    SET_GPR_U32(ctx, 31, 0x149480u);
    ctx->pc = 0x14947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149478u;
            // 0x14947c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149480u; }
        if (ctx->pc != 0x149480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149480u; }
        if (ctx->pc != 0x149480u) { return; }
    }
    ctx->pc = 0x149480u;
    // 0x149480: 0xc060680  jal         func_181A00
    ctx->pc = 0x149480u;
    SET_GPR_U32(ctx, 31, 0x149488u);
    ctx->pc = 0x149484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149480u;
            // 0x149484: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149488u; }
        if (ctx->pc != 0x149488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149488u; }
        if (ctx->pc != 0x149488u) { return; }
    }
    ctx->pc = 0x149488u;
    // 0x149488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14948c: 0x3e00008  jr          $ra
    ctx->pc = 0x14948Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14948Cu;
            // 0x149490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149494u;
}
