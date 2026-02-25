#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7mapUnInit
// Address: 0x149090 - 0x1490ec
void stage7mapUnInit_0x149090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7mapUnInit_0x149090");
#endif

    ctx->pc = 0x149090u;

    // 0x149090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149098: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x149098u;
    SET_GPR_U32(ctx, 31, 0x1490A0u);
    ctx->pc = 0x14909Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149098u;
            // 0x14909c: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490A0u; }
        if (ctx->pc != 0x1490A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490A0u; }
        if (ctx->pc != 0x1490A0u) { return; }
    }
    ctx->pc = 0x1490A0u;
    // 0x1490a0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1490A0u;
    SET_GPR_U32(ctx, 31, 0x1490A8u);
    ctx->pc = 0x1490A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490A0u;
            // 0x1490a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490A8u; }
        if (ctx->pc != 0x1490A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490A8u; }
        if (ctx->pc != 0x1490A8u) { return; }
    }
    ctx->pc = 0x1490A8u;
    // 0x1490a8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1490A8u;
    SET_GPR_U32(ctx, 31, 0x1490B0u);
    ctx->pc = 0x1490ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490A8u;
            // 0x1490ac: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490B0u; }
        if (ctx->pc != 0x1490B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490B0u; }
        if (ctx->pc != 0x1490B0u) { return; }
    }
    ctx->pc = 0x1490B0u;
    // 0x1490b0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1490B0u;
    SET_GPR_U32(ctx, 31, 0x1490B8u);
    ctx->pc = 0x1490B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490B0u;
            // 0x1490b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490B8u; }
        if (ctx->pc != 0x1490B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490B8u; }
        if (ctx->pc != 0x1490B8u) { return; }
    }
    ctx->pc = 0x1490B8u;
    // 0x1490b8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1490B8u;
    SET_GPR_U32(ctx, 31, 0x1490C0u);
    ctx->pc = 0x1490BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490B8u;
            // 0x1490bc: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490C0u; }
        if (ctx->pc != 0x1490C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490C0u; }
        if (ctx->pc != 0x1490C0u) { return; }
    }
    ctx->pc = 0x1490C0u;
    // 0x1490c0: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1490C0u;
    SET_GPR_U32(ctx, 31, 0x1490C8u);
    ctx->pc = 0x1490C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490C0u;
            // 0x1490c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490C8u; }
        if (ctx->pc != 0x1490C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490C8u; }
        if (ctx->pc != 0x1490C8u) { return; }
    }
    ctx->pc = 0x1490C8u;
    // 0x1490c8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1490C8u;
    SET_GPR_U32(ctx, 31, 0x1490D0u);
    ctx->pc = 0x1490CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490C8u;
            // 0x1490cc: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490D0u; }
        if (ctx->pc != 0x1490D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490D0u; }
        if (ctx->pc != 0x1490D0u) { return; }
    }
    ctx->pc = 0x1490D0u;
    // 0x1490d0: 0xc060680  jal         func_181A00
    ctx->pc = 0x1490D0u;
    SET_GPR_U32(ctx, 31, 0x1490D8u);
    ctx->pc = 0x1490D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490D0u;
            // 0x1490d4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490D8u; }
        if (ctx->pc != 0x1490D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490D8u; }
        if (ctx->pc != 0x1490D8u) { return; }
    }
    ctx->pc = 0x1490D8u;
    // 0x1490d8: 0xc060680  jal         func_181A00
    ctx->pc = 0x1490D8u;
    SET_GPR_U32(ctx, 31, 0x1490E0u);
    ctx->pc = 0x1490DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1490D8u;
            // 0x1490dc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181A00u;
    if (runtime->hasFunction(0x181A00u)) {
        auto targetFn = runtime->lookupFunction(0x181A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490E0u; }
        if (ctx->pc != 0x1490E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFreeEs_0x181a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1490E0u; }
        if (ctx->pc != 0x1490E0u) { return; }
    }
    ctx->pc = 0x1490E0u;
    // 0x1490e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1490e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1490E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1490E4u;
            // 0x1490e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1490ECu;
}
