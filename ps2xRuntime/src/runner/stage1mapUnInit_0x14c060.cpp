#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1mapUnInit
// Address: 0x14c060 - 0x14c16c
void stage1mapUnInit_0x14c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1mapUnInit_0x14c060");
#endif

    ctx->pc = 0x14c060u;

    // 0x14c060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c068: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C068u;
    SET_GPR_U32(ctx, 31, 0x14C070u);
    ctx->pc = 0x14C06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C068u;
            // 0x14c06c: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C070u; }
        if (ctx->pc != 0x14C070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C070u; }
        if (ctx->pc != 0x14C070u) { return; }
    }
    ctx->pc = 0x14C070u;
    // 0x14c070: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C070u;
    SET_GPR_U32(ctx, 31, 0x14C078u);
    ctx->pc = 0x14C074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C070u;
            // 0x14c074: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C078u; }
        if (ctx->pc != 0x14C078u) { return; }
    }
    ctx->pc = 0x14C078u;
    // 0x14c078: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C078u;
    SET_GPR_U32(ctx, 31, 0x14C080u);
    ctx->pc = 0x14C07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C078u;
            // 0x14c07c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C080u; }
        if (ctx->pc != 0x14C080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C080u; }
        if (ctx->pc != 0x14C080u) { return; }
    }
    ctx->pc = 0x14C080u;
    // 0x14c080: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C080u;
    SET_GPR_U32(ctx, 31, 0x14C088u);
    ctx->pc = 0x14C084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C080u;
            // 0x14c084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C088u; }
        if (ctx->pc != 0x14C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C088u; }
        if (ctx->pc != 0x14C088u) { return; }
    }
    ctx->pc = 0x14C088u;
    // 0x14c088: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C088u;
    SET_GPR_U32(ctx, 31, 0x14C090u);
    ctx->pc = 0x14C08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C088u;
            // 0x14c08c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C090u; }
        if (ctx->pc != 0x14C090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C090u; }
        if (ctx->pc != 0x14C090u) { return; }
    }
    ctx->pc = 0x14C090u;
    // 0x14c090: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C090u;
    SET_GPR_U32(ctx, 31, 0x14C098u);
    ctx->pc = 0x14C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C090u;
            // 0x14c094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C098u; }
        if (ctx->pc != 0x14C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C098u; }
        if (ctx->pc != 0x14C098u) { return; }
    }
    ctx->pc = 0x14C098u;
    // 0x14c098: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C098u;
    SET_GPR_U32(ctx, 31, 0x14C0A0u);
    ctx->pc = 0x14C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C098u;
            // 0x14c09c: 0x2404002a  addiu       $a0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A0u; }
        if (ctx->pc != 0x14C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A0u; }
        if (ctx->pc != 0x14C0A0u) { return; }
    }
    ctx->pc = 0x14C0A0u;
    // 0x14c0a0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0A0u;
    SET_GPR_U32(ctx, 31, 0x14C0A8u);
    ctx->pc = 0x14C0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0A0u;
            // 0x14c0a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A8u; }
        if (ctx->pc != 0x14C0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0A8u; }
        if (ctx->pc != 0x14C0A8u) { return; }
    }
    ctx->pc = 0x14C0A8u;
    // 0x14c0a8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0A8u;
    SET_GPR_U32(ctx, 31, 0x14C0B0u);
    ctx->pc = 0x14C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0A8u;
            // 0x14c0ac: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0B0u; }
        if (ctx->pc != 0x14C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0B0u; }
        if (ctx->pc != 0x14C0B0u) { return; }
    }
    ctx->pc = 0x14C0B0u;
    // 0x14c0b0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0B0u;
    SET_GPR_U32(ctx, 31, 0x14C0B8u);
    ctx->pc = 0x14C0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0B0u;
            // 0x14c0b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0B8u; }
        if (ctx->pc != 0x14C0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0B8u; }
        if (ctx->pc != 0x14C0B8u) { return; }
    }
    ctx->pc = 0x14C0B8u;
    // 0x14c0b8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0B8u;
    SET_GPR_U32(ctx, 31, 0x14C0C0u);
    ctx->pc = 0x14C0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0B8u;
            // 0x14c0bc: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0C0u; }
        if (ctx->pc != 0x14C0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0C0u; }
        if (ctx->pc != 0x14C0C0u) { return; }
    }
    ctx->pc = 0x14C0C0u;
    // 0x14c0c0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0C0u;
    SET_GPR_U32(ctx, 31, 0x14C0C8u);
    ctx->pc = 0x14C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0C0u;
            // 0x14c0c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0C8u; }
        if (ctx->pc != 0x14C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0C8u; }
        if (ctx->pc != 0x14C0C8u) { return; }
    }
    ctx->pc = 0x14C0C8u;
    // 0x14c0c8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0C8u;
    SET_GPR_U32(ctx, 31, 0x14C0D0u);
    ctx->pc = 0x14C0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0C8u;
            // 0x14c0cc: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0D0u; }
        if (ctx->pc != 0x14C0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0D0u; }
        if (ctx->pc != 0x14C0D0u) { return; }
    }
    ctx->pc = 0x14C0D0u;
    // 0x14c0d0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0D0u;
    SET_GPR_U32(ctx, 31, 0x14C0D8u);
    ctx->pc = 0x14C0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0D0u;
            // 0x14c0d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0D8u; }
        if (ctx->pc != 0x14C0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0D8u; }
        if (ctx->pc != 0x14C0D8u) { return; }
    }
    ctx->pc = 0x14C0D8u;
    // 0x14c0d8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0D8u;
    SET_GPR_U32(ctx, 31, 0x14C0E0u);
    ctx->pc = 0x14C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0D8u;
            // 0x14c0dc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E0u; }
        if (ctx->pc != 0x14C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E0u; }
        if (ctx->pc != 0x14C0E0u) { return; }
    }
    ctx->pc = 0x14C0E0u;
    // 0x14c0e0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0E0u;
    SET_GPR_U32(ctx, 31, 0x14C0E8u);
    ctx->pc = 0x14C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0E0u;
            // 0x14c0e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E8u; }
        if (ctx->pc != 0x14C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0E8u; }
        if (ctx->pc != 0x14C0E8u) { return; }
    }
    ctx->pc = 0x14C0E8u;
    // 0x14c0e8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0E8u;
    SET_GPR_U32(ctx, 31, 0x14C0F0u);
    ctx->pc = 0x14C0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0E8u;
            // 0x14c0ec: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0F0u; }
        if (ctx->pc != 0x14C0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0F0u; }
        if (ctx->pc != 0x14C0F0u) { return; }
    }
    ctx->pc = 0x14C0F0u;
    // 0x14c0f0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C0F0u;
    SET_GPR_U32(ctx, 31, 0x14C0F8u);
    ctx->pc = 0x14C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0F0u;
            // 0x14c0f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0F8u; }
        if (ctx->pc != 0x14C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C0F8u; }
        if (ctx->pc != 0x14C0F8u) { return; }
    }
    ctx->pc = 0x14C0F8u;
    // 0x14c0f8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x14C0F8u;
    SET_GPR_U32(ctx, 31, 0x14C100u);
    ctx->pc = 0x14C0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C0F8u;
            // 0x14c0fc: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C100u; }
        if (ctx->pc != 0x14C100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C100u; }
        if (ctx->pc != 0x14C100u) { return; }
    }
    ctx->pc = 0x14C100u;
    // 0x14c100: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x14C100u;
    SET_GPR_U32(ctx, 31, 0x14C108u);
    ctx->pc = 0x14C104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C100u;
            // 0x14c104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C108u; }
        if (ctx->pc != 0x14C108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C108u; }
        if (ctx->pc != 0x14C108u) { return; }
    }
    ctx->pc = 0x14C108u;
    // 0x14c108: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C108u;
    SET_GPR_U32(ctx, 31, 0x14C110u);
    ctx->pc = 0x14C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C108u;
            // 0x14c10c: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C110u; }
        if (ctx->pc != 0x14C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C110u; }
        if (ctx->pc != 0x14C110u) { return; }
    }
    ctx->pc = 0x14C110u;
    // 0x14c110: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C110u;
    SET_GPR_U32(ctx, 31, 0x14C118u);
    ctx->pc = 0x14C114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C110u;
            // 0x14c114: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C118u; }
        if (ctx->pc != 0x14C118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C118u; }
        if (ctx->pc != 0x14C118u) { return; }
    }
    ctx->pc = 0x14C118u;
    // 0x14c118: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C118u;
    SET_GPR_U32(ctx, 31, 0x14C120u);
    ctx->pc = 0x14C11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C118u;
            // 0x14c11c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C120u; }
        if (ctx->pc != 0x14C120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C120u; }
        if (ctx->pc != 0x14C120u) { return; }
    }
    ctx->pc = 0x14C120u;
    // 0x14c120: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C120u;
    SET_GPR_U32(ctx, 31, 0x14C128u);
    ctx->pc = 0x14C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C120u;
            // 0x14c124: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C128u; }
        if (ctx->pc != 0x14C128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C128u; }
        if (ctx->pc != 0x14C128u) { return; }
    }
    ctx->pc = 0x14C128u;
    // 0x14c128: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C128u;
    SET_GPR_U32(ctx, 31, 0x14C130u);
    ctx->pc = 0x14C12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C128u;
            // 0x14c12c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C130u; }
        if (ctx->pc != 0x14C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C130u; }
        if (ctx->pc != 0x14C130u) { return; }
    }
    ctx->pc = 0x14C130u;
    // 0x14c130: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C130u;
    SET_GPR_U32(ctx, 31, 0x14C138u);
    ctx->pc = 0x14C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C130u;
            // 0x14c134: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C138u; }
        if (ctx->pc != 0x14C138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C138u; }
        if (ctx->pc != 0x14C138u) { return; }
    }
    ctx->pc = 0x14C138u;
    // 0x14c138: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C138u;
    SET_GPR_U32(ctx, 31, 0x14C140u);
    ctx->pc = 0x14C13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C138u;
            // 0x14c13c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C140u; }
        if (ctx->pc != 0x14C140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C140u; }
        if (ctx->pc != 0x14C140u) { return; }
    }
    ctx->pc = 0x14C140u;
    // 0x14c140: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C140u;
    SET_GPR_U32(ctx, 31, 0x14C148u);
    ctx->pc = 0x14C144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C140u;
            // 0x14c144: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C148u; }
        if (ctx->pc != 0x14C148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C148u; }
        if (ctx->pc != 0x14C148u) { return; }
    }
    ctx->pc = 0x14C148u;
    // 0x14c148: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C148u;
    SET_GPR_U32(ctx, 31, 0x14C150u);
    ctx->pc = 0x14C14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C148u;
            // 0x14c14c: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C150u; }
        if (ctx->pc != 0x14C150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C150u; }
        if (ctx->pc != 0x14C150u) { return; }
    }
    ctx->pc = 0x14C150u;
    // 0x14c150: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C150u;
    SET_GPR_U32(ctx, 31, 0x14C158u);
    ctx->pc = 0x14C154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C150u;
            // 0x14c154: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C158u; }
        if (ctx->pc != 0x14C158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C158u; }
        if (ctx->pc != 0x14C158u) { return; }
    }
    ctx->pc = 0x14C158u;
    // 0x14c158: 0xc060680  jal         func_181A00
    ctx->pc = 0x14C158u;
    SET_GPR_U32(ctx, 31, 0x14C160u);
    ctx->pc = 0x14C15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C158u;
            // 0x14c15c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C160u; }
        if (ctx->pc != 0x14C160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C160u; }
        if (ctx->pc != 0x14C160u) { return; }
    }
    ctx->pc = 0x14C160u;
    // 0x14c160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c164: 0x3e00008  jr          $ra
    ctx->pc = 0x14C164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C164u;
            // 0x14c168: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C16Cu;
}
