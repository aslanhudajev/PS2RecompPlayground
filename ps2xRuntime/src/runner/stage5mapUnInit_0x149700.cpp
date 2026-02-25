#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage5mapUnInit
// Address: 0x149700 - 0x1497ec
void stage5mapUnInit_0x149700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage5mapUnInit_0x149700");
#endif

    ctx->pc = 0x149700u;

    // 0x149700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149708: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149708u;
    SET_GPR_U32(ctx, 31, 0x149710u);
    ctx->pc = 0x14970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149708u;
            // 0x14970c: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149710u; }
        if (ctx->pc != 0x149710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149710u; }
        if (ctx->pc != 0x149710u) { return; }
    }
    ctx->pc = 0x149710u;
    // 0x149710: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149710u;
    SET_GPR_U32(ctx, 31, 0x149718u);
    ctx->pc = 0x149714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149710u;
            // 0x149714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149718u; }
        if (ctx->pc != 0x149718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149718u; }
        if (ctx->pc != 0x149718u) { return; }
    }
    ctx->pc = 0x149718u;
    // 0x149718: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149718u;
    SET_GPR_U32(ctx, 31, 0x149720u);
    ctx->pc = 0x14971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149718u;
            // 0x14971c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149720u; }
        if (ctx->pc != 0x149720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149720u; }
        if (ctx->pc != 0x149720u) { return; }
    }
    ctx->pc = 0x149720u;
    // 0x149720: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149720u;
    SET_GPR_U32(ctx, 31, 0x149728u);
    ctx->pc = 0x149724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149720u;
            // 0x149724: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149728u; }
        if (ctx->pc != 0x149728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149728u; }
        if (ctx->pc != 0x149728u) { return; }
    }
    ctx->pc = 0x149728u;
    // 0x149728: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149728u;
    SET_GPR_U32(ctx, 31, 0x149730u);
    ctx->pc = 0x14972Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149728u;
            // 0x14972c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149730u; }
        if (ctx->pc != 0x149730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149730u; }
        if (ctx->pc != 0x149730u) { return; }
    }
    ctx->pc = 0x149730u;
    // 0x149730: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149730u;
    SET_GPR_U32(ctx, 31, 0x149738u);
    ctx->pc = 0x149734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149730u;
            // 0x149734: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149738u; }
        if (ctx->pc != 0x149738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149738u; }
        if (ctx->pc != 0x149738u) { return; }
    }
    ctx->pc = 0x149738u;
    // 0x149738: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149738u;
    SET_GPR_U32(ctx, 31, 0x149740u);
    ctx->pc = 0x14973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149738u;
            // 0x14973c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149740u; }
        if (ctx->pc != 0x149740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149740u; }
        if (ctx->pc != 0x149740u) { return; }
    }
    ctx->pc = 0x149740u;
    // 0x149740: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149740u;
    SET_GPR_U32(ctx, 31, 0x149748u);
    ctx->pc = 0x149744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149740u;
            // 0x149744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149748u; }
        if (ctx->pc != 0x149748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149748u; }
        if (ctx->pc != 0x149748u) { return; }
    }
    ctx->pc = 0x149748u;
    // 0x149748: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149748u;
    SET_GPR_U32(ctx, 31, 0x149750u);
    ctx->pc = 0x14974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149748u;
            // 0x14974c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149750u; }
        if (ctx->pc != 0x149750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149750u; }
        if (ctx->pc != 0x149750u) { return; }
    }
    ctx->pc = 0x149750u;
    // 0x149750: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149750u;
    SET_GPR_U32(ctx, 31, 0x149758u);
    ctx->pc = 0x149754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149750u;
            // 0x149754: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149758u; }
        if (ctx->pc != 0x149758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149758u; }
        if (ctx->pc != 0x149758u) { return; }
    }
    ctx->pc = 0x149758u;
    // 0x149758: 0xc060680  jal         func_181A00
    ctx->pc = 0x149758u;
    SET_GPR_U32(ctx, 31, 0x149760u);
    ctx->pc = 0x14975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149758u;
            // 0x14975c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149760u; }
        if (ctx->pc != 0x149760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149760u; }
        if (ctx->pc != 0x149760u) { return; }
    }
    ctx->pc = 0x149760u;
    // 0x149760: 0xc060680  jal         func_181A00
    ctx->pc = 0x149760u;
    SET_GPR_U32(ctx, 31, 0x149768u);
    ctx->pc = 0x149764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149760u;
            // 0x149764: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149768u; }
        if (ctx->pc != 0x149768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149768u; }
        if (ctx->pc != 0x149768u) { return; }
    }
    ctx->pc = 0x149768u;
    // 0x149768: 0xc060680  jal         func_181A00
    ctx->pc = 0x149768u;
    SET_GPR_U32(ctx, 31, 0x149770u);
    ctx->pc = 0x14976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149768u;
            // 0x14976c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149770u; }
        if (ctx->pc != 0x149770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149770u; }
        if (ctx->pc != 0x149770u) { return; }
    }
    ctx->pc = 0x149770u;
    // 0x149770: 0xc060680  jal         func_181A00
    ctx->pc = 0x149770u;
    SET_GPR_U32(ctx, 31, 0x149778u);
    ctx->pc = 0x149774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149770u;
            // 0x149774: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149778u; }
        if (ctx->pc != 0x149778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149778u; }
        if (ctx->pc != 0x149778u) { return; }
    }
    ctx->pc = 0x149778u;
    // 0x149778: 0xc060680  jal         func_181A00
    ctx->pc = 0x149778u;
    SET_GPR_U32(ctx, 31, 0x149780u);
    ctx->pc = 0x14977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149778u;
            // 0x14977c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149780u; }
        if (ctx->pc != 0x149780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149780u; }
        if (ctx->pc != 0x149780u) { return; }
    }
    ctx->pc = 0x149780u;
    // 0x149780: 0xc060680  jal         func_181A00
    ctx->pc = 0x149780u;
    SET_GPR_U32(ctx, 31, 0x149788u);
    ctx->pc = 0x149784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149780u;
            // 0x149784: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149788u; }
        if (ctx->pc != 0x149788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149788u; }
        if (ctx->pc != 0x149788u) { return; }
    }
    ctx->pc = 0x149788u;
    // 0x149788: 0xc060680  jal         func_181A00
    ctx->pc = 0x149788u;
    SET_GPR_U32(ctx, 31, 0x149790u);
    ctx->pc = 0x14978Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149788u;
            // 0x14978c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149790u; }
        if (ctx->pc != 0x149790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149790u; }
        if (ctx->pc != 0x149790u) { return; }
    }
    ctx->pc = 0x149790u;
    // 0x149790: 0xc060680  jal         func_181A00
    ctx->pc = 0x149790u;
    SET_GPR_U32(ctx, 31, 0x149798u);
    ctx->pc = 0x149794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149790u;
            // 0x149794: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149798u; }
        if (ctx->pc != 0x149798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149798u; }
        if (ctx->pc != 0x149798u) { return; }
    }
    ctx->pc = 0x149798u;
    // 0x149798: 0xc060680  jal         func_181A00
    ctx->pc = 0x149798u;
    SET_GPR_U32(ctx, 31, 0x1497A0u);
    ctx->pc = 0x14979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149798u;
            // 0x14979c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497A0u; }
        if (ctx->pc != 0x1497A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497A0u; }
        if (ctx->pc != 0x1497A0u) { return; }
    }
    ctx->pc = 0x1497A0u;
    // 0x1497a0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497A0u;
    SET_GPR_U32(ctx, 31, 0x1497A8u);
    ctx->pc = 0x1497A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497A0u;
            // 0x1497a4: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497A8u; }
        if (ctx->pc != 0x1497A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497A8u; }
        if (ctx->pc != 0x1497A8u) { return; }
    }
    ctx->pc = 0x1497A8u;
    // 0x1497a8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497A8u;
    SET_GPR_U32(ctx, 31, 0x1497B0u);
    ctx->pc = 0x1497ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497A8u;
            // 0x1497ac: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B0u; }
        if (ctx->pc != 0x1497B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B0u; }
        if (ctx->pc != 0x1497B0u) { return; }
    }
    ctx->pc = 0x1497B0u;
    // 0x1497b0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497B0u;
    SET_GPR_U32(ctx, 31, 0x1497B8u);
    ctx->pc = 0x1497B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497B0u;
            // 0x1497b4: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B8u; }
        if (ctx->pc != 0x1497B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497B8u; }
        if (ctx->pc != 0x1497B8u) { return; }
    }
    ctx->pc = 0x1497B8u;
    // 0x1497b8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497B8u;
    SET_GPR_U32(ctx, 31, 0x1497C0u);
    ctx->pc = 0x1497BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497B8u;
            // 0x1497bc: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C0u; }
        if (ctx->pc != 0x1497C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C0u; }
        if (ctx->pc != 0x1497C0u) { return; }
    }
    ctx->pc = 0x1497C0u;
    // 0x1497c0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497C0u;
    SET_GPR_U32(ctx, 31, 0x1497C8u);
    ctx->pc = 0x1497C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497C0u;
            // 0x1497c4: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C8u; }
        if (ctx->pc != 0x1497C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497C8u; }
        if (ctx->pc != 0x1497C8u) { return; }
    }
    ctx->pc = 0x1497C8u;
    // 0x1497c8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497C8u;
    SET_GPR_U32(ctx, 31, 0x1497D0u);
    ctx->pc = 0x1497CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497C8u;
            // 0x1497cc: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497D0u; }
        if (ctx->pc != 0x1497D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497D0u; }
        if (ctx->pc != 0x1497D0u) { return; }
    }
    ctx->pc = 0x1497D0u;
    // 0x1497d0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497D0u;
    SET_GPR_U32(ctx, 31, 0x1497D8u);
    ctx->pc = 0x1497D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497D0u;
            // 0x1497d4: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497D8u; }
        if (ctx->pc != 0x1497D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497D8u; }
        if (ctx->pc != 0x1497D8u) { return; }
    }
    ctx->pc = 0x1497D8u;
    // 0x1497d8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1497D8u;
    SET_GPR_U32(ctx, 31, 0x1497E0u);
    ctx->pc = 0x1497DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1497D8u;
            // 0x1497dc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497E0u; }
        if (ctx->pc != 0x1497E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1497E0u; }
        if (ctx->pc != 0x1497E0u) { return; }
    }
    ctx->pc = 0x1497E0u;
    // 0x1497e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1497e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1497e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1497E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1497E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497E4u;
            // 0x1497e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1497ECu;
}
