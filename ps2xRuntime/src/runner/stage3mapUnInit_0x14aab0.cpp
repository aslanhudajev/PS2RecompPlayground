#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3mapUnInit
// Address: 0x14aab0 - 0x14aba4
void stage3mapUnInit_0x14aab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3mapUnInit_0x14aab0");
#endif

    ctx->pc = 0x14aab0u;

    // 0x14aab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14aab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14aab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14aab8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AAB8u;
    SET_GPR_U32(ctx, 31, 0x14AAC0u);
    ctx->pc = 0x14AABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAB8u;
            // 0x14aabc: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAC0u; }
        if (ctx->pc != 0x14AAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAC0u; }
        if (ctx->pc != 0x14AAC0u) { return; }
    }
    ctx->pc = 0x14AAC0u;
    // 0x14aac0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AAC0u;
    SET_GPR_U32(ctx, 31, 0x14AAC8u);
    ctx->pc = 0x14AAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAC0u;
            // 0x14aac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAC8u; }
        if (ctx->pc != 0x14AAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAC8u; }
        if (ctx->pc != 0x14AAC8u) { return; }
    }
    ctx->pc = 0x14AAC8u;
    // 0x14aac8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AAC8u;
    SET_GPR_U32(ctx, 31, 0x14AAD0u);
    ctx->pc = 0x14AACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAC8u;
            // 0x14aacc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAD0u; }
        if (ctx->pc != 0x14AAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAD0u; }
        if (ctx->pc != 0x14AAD0u) { return; }
    }
    ctx->pc = 0x14AAD0u;
    // 0x14aad0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AAD0u;
    SET_GPR_U32(ctx, 31, 0x14AAD8u);
    ctx->pc = 0x14AAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAD0u;
            // 0x14aad4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAD8u; }
        if (ctx->pc != 0x14AAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAD8u; }
        if (ctx->pc != 0x14AAD8u) { return; }
    }
    ctx->pc = 0x14AAD8u;
    // 0x14aad8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AAD8u;
    SET_GPR_U32(ctx, 31, 0x14AAE0u);
    ctx->pc = 0x14AADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAD8u;
            // 0x14aadc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE0u; }
        if (ctx->pc != 0x14AAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE0u; }
        if (ctx->pc != 0x14AAE0u) { return; }
    }
    ctx->pc = 0x14AAE0u;
    // 0x14aae0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AAE0u;
    SET_GPR_U32(ctx, 31, 0x14AAE8u);
    ctx->pc = 0x14AAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAE0u;
            // 0x14aae4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE8u; }
        if (ctx->pc != 0x14AAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAE8u; }
        if (ctx->pc != 0x14AAE8u) { return; }
    }
    ctx->pc = 0x14AAE8u;
    // 0x14aae8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AAE8u;
    SET_GPR_U32(ctx, 31, 0x14AAF0u);
    ctx->pc = 0x14AAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAE8u;
            // 0x14aaec: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAF0u; }
        if (ctx->pc != 0x14AAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAF0u; }
        if (ctx->pc != 0x14AAF0u) { return; }
    }
    ctx->pc = 0x14AAF0u;
    // 0x14aaf0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AAF0u;
    SET_GPR_U32(ctx, 31, 0x14AAF8u);
    ctx->pc = 0x14AAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAF0u;
            // 0x14aaf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAF8u; }
        if (ctx->pc != 0x14AAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AAF8u; }
        if (ctx->pc != 0x14AAF8u) { return; }
    }
    ctx->pc = 0x14AAF8u;
    // 0x14aaf8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AAF8u;
    SET_GPR_U32(ctx, 31, 0x14AB00u);
    ctx->pc = 0x14AAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AAF8u;
            // 0x14aafc: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB00u; }
        if (ctx->pc != 0x14AB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB00u; }
        if (ctx->pc != 0x14AB00u) { return; }
    }
    ctx->pc = 0x14AB00u;
    // 0x14ab00: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AB00u;
    SET_GPR_U32(ctx, 31, 0x14AB08u);
    ctx->pc = 0x14AB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB00u;
            // 0x14ab04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB08u; }
        if (ctx->pc != 0x14AB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB08u; }
        if (ctx->pc != 0x14AB08u) { return; }
    }
    ctx->pc = 0x14AB08u;
    // 0x14ab08: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14AB08u;
    SET_GPR_U32(ctx, 31, 0x14AB10u);
    ctx->pc = 0x14AB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB08u;
            // 0x14ab0c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB10u; }
        if (ctx->pc != 0x14AB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB10u; }
        if (ctx->pc != 0x14AB10u) { return; }
    }
    ctx->pc = 0x14AB10u;
    // 0x14ab10: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14AB10u;
    SET_GPR_U32(ctx, 31, 0x14AB18u);
    ctx->pc = 0x14AB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB10u;
            // 0x14ab14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB18u; }
        if (ctx->pc != 0x14AB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB18u; }
        if (ctx->pc != 0x14AB18u) { return; }
    }
    ctx->pc = 0x14AB18u;
    // 0x14ab18: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB18u;
    SET_GPR_U32(ctx, 31, 0x14AB20u);
    ctx->pc = 0x14AB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB18u;
            // 0x14ab1c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB20u; }
        if (ctx->pc != 0x14AB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB20u; }
        if (ctx->pc != 0x14AB20u) { return; }
    }
    ctx->pc = 0x14AB20u;
    // 0x14ab20: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB20u;
    SET_GPR_U32(ctx, 31, 0x14AB28u);
    ctx->pc = 0x14AB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB20u;
            // 0x14ab24: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB28u; }
        if (ctx->pc != 0x14AB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB28u; }
        if (ctx->pc != 0x14AB28u) { return; }
    }
    ctx->pc = 0x14AB28u;
    // 0x14ab28: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB28u;
    SET_GPR_U32(ctx, 31, 0x14AB30u);
    ctx->pc = 0x14AB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB28u;
            // 0x14ab2c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB30u; }
        if (ctx->pc != 0x14AB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB30u; }
        if (ctx->pc != 0x14AB30u) { return; }
    }
    ctx->pc = 0x14AB30u;
    // 0x14ab30: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB30u;
    SET_GPR_U32(ctx, 31, 0x14AB38u);
    ctx->pc = 0x14AB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB30u;
            // 0x14ab34: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB38u; }
        if (ctx->pc != 0x14AB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB38u; }
        if (ctx->pc != 0x14AB38u) { return; }
    }
    ctx->pc = 0x14AB38u;
    // 0x14ab38: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB38u;
    SET_GPR_U32(ctx, 31, 0x14AB40u);
    ctx->pc = 0x14AB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB38u;
            // 0x14ab3c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB40u; }
        if (ctx->pc != 0x14AB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB40u; }
        if (ctx->pc != 0x14AB40u) { return; }
    }
    ctx->pc = 0x14AB40u;
    // 0x14ab40: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB40u;
    SET_GPR_U32(ctx, 31, 0x14AB48u);
    ctx->pc = 0x14AB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB40u;
            // 0x14ab44: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB48u; }
        if (ctx->pc != 0x14AB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB48u; }
        if (ctx->pc != 0x14AB48u) { return; }
    }
    ctx->pc = 0x14AB48u;
    // 0x14ab48: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB48u;
    SET_GPR_U32(ctx, 31, 0x14AB50u);
    ctx->pc = 0x14AB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB48u;
            // 0x14ab4c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB50u; }
        if (ctx->pc != 0x14AB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB50u; }
        if (ctx->pc != 0x14AB50u) { return; }
    }
    ctx->pc = 0x14AB50u;
    // 0x14ab50: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB50u;
    SET_GPR_U32(ctx, 31, 0x14AB58u);
    ctx->pc = 0x14AB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB50u;
            // 0x14ab54: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB58u; }
        if (ctx->pc != 0x14AB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB58u; }
        if (ctx->pc != 0x14AB58u) { return; }
    }
    ctx->pc = 0x14AB58u;
    // 0x14ab58: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB58u;
    SET_GPR_U32(ctx, 31, 0x14AB60u);
    ctx->pc = 0x14AB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB58u;
            // 0x14ab5c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB60u; }
        if (ctx->pc != 0x14AB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB60u; }
        if (ctx->pc != 0x14AB60u) { return; }
    }
    ctx->pc = 0x14AB60u;
    // 0x14ab60: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB60u;
    SET_GPR_U32(ctx, 31, 0x14AB68u);
    ctx->pc = 0x14AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB60u;
            // 0x14ab64: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB68u; }
        if (ctx->pc != 0x14AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB68u; }
        if (ctx->pc != 0x14AB68u) { return; }
    }
    ctx->pc = 0x14AB68u;
    // 0x14ab68: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB68u;
    SET_GPR_U32(ctx, 31, 0x14AB70u);
    ctx->pc = 0x14AB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB68u;
            // 0x14ab6c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB70u; }
        if (ctx->pc != 0x14AB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB70u; }
        if (ctx->pc != 0x14AB70u) { return; }
    }
    ctx->pc = 0x14AB70u;
    // 0x14ab70: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB70u;
    SET_GPR_U32(ctx, 31, 0x14AB78u);
    ctx->pc = 0x14AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB70u;
            // 0x14ab74: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB78u; }
        if (ctx->pc != 0x14AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB78u; }
        if (ctx->pc != 0x14AB78u) { return; }
    }
    ctx->pc = 0x14AB78u;
    // 0x14ab78: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB78u;
    SET_GPR_U32(ctx, 31, 0x14AB80u);
    ctx->pc = 0x14AB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB78u;
            // 0x14ab7c: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB80u; }
        if (ctx->pc != 0x14AB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB80u; }
        if (ctx->pc != 0x14AB80u) { return; }
    }
    ctx->pc = 0x14AB80u;
    // 0x14ab80: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB80u;
    SET_GPR_U32(ctx, 31, 0x14AB88u);
    ctx->pc = 0x14AB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB80u;
            // 0x14ab84: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB88u; }
        if (ctx->pc != 0x14AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB88u; }
        if (ctx->pc != 0x14AB88u) { return; }
    }
    ctx->pc = 0x14AB88u;
    // 0x14ab88: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB88u;
    SET_GPR_U32(ctx, 31, 0x14AB90u);
    ctx->pc = 0x14AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB88u;
            // 0x14ab8c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB90u; }
        if (ctx->pc != 0x14AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB90u; }
        if (ctx->pc != 0x14AB90u) { return; }
    }
    ctx->pc = 0x14AB90u;
    // 0x14ab90: 0xc060680  jal         func_181A00
    ctx->pc = 0x14AB90u;
    SET_GPR_U32(ctx, 31, 0x14AB98u);
    ctx->pc = 0x14AB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB90u;
            // 0x14ab94: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB98u; }
        if (ctx->pc != 0x14AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14AB98u; }
        if (ctx->pc != 0x14AB98u) { return; }
    }
    ctx->pc = 0x14AB98u;
    // 0x14ab98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14ABA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14AB9Cu;
            // 0x14aba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14ABA4u;
}
