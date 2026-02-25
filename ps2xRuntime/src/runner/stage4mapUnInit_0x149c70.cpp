#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage4mapUnInit
// Address: 0x149c70 - 0x149d2c
void stage4mapUnInit_0x149c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage4mapUnInit_0x149c70");
#endif

    ctx->pc = 0x149c70u;

    // 0x149c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149c78: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149C78u;
    SET_GPR_U32(ctx, 31, 0x149C80u);
    ctx->pc = 0x149C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C78u;
            // 0x149c7c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C80u; }
        if (ctx->pc != 0x149C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C80u; }
        if (ctx->pc != 0x149C80u) { return; }
    }
    ctx->pc = 0x149C80u;
    // 0x149c80: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149C80u;
    SET_GPR_U32(ctx, 31, 0x149C88u);
    ctx->pc = 0x149C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C80u;
            // 0x149c84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C88u; }
        if (ctx->pc != 0x149C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C88u; }
        if (ctx->pc != 0x149C88u) { return; }
    }
    ctx->pc = 0x149C88u;
    // 0x149c88: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149C88u;
    SET_GPR_U32(ctx, 31, 0x149C90u);
    ctx->pc = 0x149C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C88u;
            // 0x149c8c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C90u; }
        if (ctx->pc != 0x149C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C90u; }
        if (ctx->pc != 0x149C90u) { return; }
    }
    ctx->pc = 0x149C90u;
    // 0x149c90: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149C90u;
    SET_GPR_U32(ctx, 31, 0x149C98u);
    ctx->pc = 0x149C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C90u;
            // 0x149c94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C98u; }
        if (ctx->pc != 0x149C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149C98u; }
        if (ctx->pc != 0x149C98u) { return; }
    }
    ctx->pc = 0x149C98u;
    // 0x149c98: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149C98u;
    SET_GPR_U32(ctx, 31, 0x149CA0u);
    ctx->pc = 0x149C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149C98u;
            // 0x149c9c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA0u; }
        if (ctx->pc != 0x149CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA0u; }
        if (ctx->pc != 0x149CA0u) { return; }
    }
    ctx->pc = 0x149CA0u;
    // 0x149ca0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149CA0u;
    SET_GPR_U32(ctx, 31, 0x149CA8u);
    ctx->pc = 0x149CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CA0u;
            // 0x149ca4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA8u; }
        if (ctx->pc != 0x149CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CA8u; }
        if (ctx->pc != 0x149CA8u) { return; }
    }
    ctx->pc = 0x149CA8u;
    // 0x149ca8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149CA8u;
    SET_GPR_U32(ctx, 31, 0x149CB0u);
    ctx->pc = 0x149CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CA8u;
            // 0x149cac: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB0u; }
        if (ctx->pc != 0x149CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB0u; }
        if (ctx->pc != 0x149CB0u) { return; }
    }
    ctx->pc = 0x149CB0u;
    // 0x149cb0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x149CB0u;
    SET_GPR_U32(ctx, 31, 0x149CB8u);
    ctx->pc = 0x149CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CB0u;
            // 0x149cb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB8u; }
        if (ctx->pc != 0x149CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CB8u; }
        if (ctx->pc != 0x149CB8u) { return; }
    }
    ctx->pc = 0x149CB8u;
    // 0x149cb8: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CB8u;
    SET_GPR_U32(ctx, 31, 0x149CC0u);
    ctx->pc = 0x149CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CB8u;
            // 0x149cbc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CC0u; }
        if (ctx->pc != 0x149CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CC0u; }
        if (ctx->pc != 0x149CC0u) { return; }
    }
    ctx->pc = 0x149CC0u;
    // 0x149cc0: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CC0u;
    SET_GPR_U32(ctx, 31, 0x149CC8u);
    ctx->pc = 0x149CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CC0u;
            // 0x149cc4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CC8u; }
        if (ctx->pc != 0x149CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CC8u; }
        if (ctx->pc != 0x149CC8u) { return; }
    }
    ctx->pc = 0x149CC8u;
    // 0x149cc8: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CC8u;
    SET_GPR_U32(ctx, 31, 0x149CD0u);
    ctx->pc = 0x149CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CC8u;
            // 0x149ccc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CD0u; }
        if (ctx->pc != 0x149CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CD0u; }
        if (ctx->pc != 0x149CD0u) { return; }
    }
    ctx->pc = 0x149CD0u;
    // 0x149cd0: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CD0u;
    SET_GPR_U32(ctx, 31, 0x149CD8u);
    ctx->pc = 0x149CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CD0u;
            // 0x149cd4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CD8u; }
        if (ctx->pc != 0x149CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CD8u; }
        if (ctx->pc != 0x149CD8u) { return; }
    }
    ctx->pc = 0x149CD8u;
    // 0x149cd8: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CD8u;
    SET_GPR_U32(ctx, 31, 0x149CE0u);
    ctx->pc = 0x149CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CD8u;
            // 0x149cdc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CE0u; }
        if (ctx->pc != 0x149CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CE0u; }
        if (ctx->pc != 0x149CE0u) { return; }
    }
    ctx->pc = 0x149CE0u;
    // 0x149ce0: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CE0u;
    SET_GPR_U32(ctx, 31, 0x149CE8u);
    ctx->pc = 0x149CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CE0u;
            // 0x149ce4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CE8u; }
        if (ctx->pc != 0x149CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CE8u; }
        if (ctx->pc != 0x149CE8u) { return; }
    }
    ctx->pc = 0x149CE8u;
    // 0x149ce8: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CE8u;
    SET_GPR_U32(ctx, 31, 0x149CF0u);
    ctx->pc = 0x149CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CE8u;
            // 0x149cec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF0u; }
        if (ctx->pc != 0x149CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF0u; }
        if (ctx->pc != 0x149CF0u) { return; }
    }
    ctx->pc = 0x149CF0u;
    // 0x149cf0: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CF0u;
    SET_GPR_U32(ctx, 31, 0x149CF8u);
    ctx->pc = 0x149CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CF0u;
            // 0x149cf4: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF8u; }
        if (ctx->pc != 0x149CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149CF8u; }
        if (ctx->pc != 0x149CF8u) { return; }
    }
    ctx->pc = 0x149CF8u;
    // 0x149cf8: 0xc060680  jal         func_181A00
    ctx->pc = 0x149CF8u;
    SET_GPR_U32(ctx, 31, 0x149D00u);
    ctx->pc = 0x149CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149CF8u;
            // 0x149cfc: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D00u; }
        if (ctx->pc != 0x149D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D00u; }
        if (ctx->pc != 0x149D00u) { return; }
    }
    ctx->pc = 0x149D00u;
    // 0x149d00: 0xc060680  jal         func_181A00
    ctx->pc = 0x149D00u;
    SET_GPR_U32(ctx, 31, 0x149D08u);
    ctx->pc = 0x149D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D00u;
            // 0x149d04: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D08u; }
        if (ctx->pc != 0x149D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D08u; }
        if (ctx->pc != 0x149D08u) { return; }
    }
    ctx->pc = 0x149D08u;
    // 0x149d08: 0xc060680  jal         func_181A00
    ctx->pc = 0x149D08u;
    SET_GPR_U32(ctx, 31, 0x149D10u);
    ctx->pc = 0x149D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D08u;
            // 0x149d0c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D10u; }
        if (ctx->pc != 0x149D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D10u; }
        if (ctx->pc != 0x149D10u) { return; }
    }
    ctx->pc = 0x149D10u;
    // 0x149d10: 0xc060680  jal         func_181A00
    ctx->pc = 0x149D10u;
    SET_GPR_U32(ctx, 31, 0x149D18u);
    ctx->pc = 0x149D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D10u;
            // 0x149d14: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D18u; }
        if (ctx->pc != 0x149D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D18u; }
        if (ctx->pc != 0x149D18u) { return; }
    }
    ctx->pc = 0x149D18u;
    // 0x149d18: 0xc060680  jal         func_181A00
    ctx->pc = 0x149D18u;
    SET_GPR_U32(ctx, 31, 0x149D20u);
    ctx->pc = 0x149D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149D18u;
            // 0x149d1c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D20u; }
        if (ctx->pc != 0x149D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149D20u; }
        if (ctx->pc != 0x149D20u) { return; }
    }
    ctx->pc = 0x149D20u;
    // 0x149d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d24: 0x3e00008  jr          $ra
    ctx->pc = 0x149D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149D24u;
            // 0x149d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149D2Cu;
}
