#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: unalloc_buf
// Address: 0x188850 - 0x1888c4
void unalloc_buf_0x188850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("unalloc_buf_0x188850");
#endif

    ctx->pc = 0x188850u;

    // 0x188850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x188854: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18885c: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x18885Cu;
    SET_GPR_U32(ctx, 31, 0x188864u);
    ctx->pc = 0x188860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18885Cu;
            // 0x188860: 0x8c24cb30  lw          $a0, -0x34D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188864u; }
        if (ctx->pc != 0x188864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188864u; }
        if (ctx->pc != 0x188864u) { return; }
    }
    ctx->pc = 0x188864u;
    // 0x188864: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188868: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x188868u;
    SET_GPR_U32(ctx, 31, 0x188870u);
    ctx->pc = 0x18886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188868u;
            // 0x18886c: 0x8c24cb28  lw          $a0, -0x34D8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953768)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188870u; }
        if (ctx->pc != 0x188870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188870u; }
        if (ctx->pc != 0x188870u) { return; }
    }
    ctx->pc = 0x188870u;
    // 0x188870: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188874: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x188874u;
    SET_GPR_U32(ctx, 31, 0x18887Cu);
    ctx->pc = 0x188878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188874u;
            // 0x188878: 0x8c24cb20  lw          $a0, -0x34E0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953760)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18887Cu; }
        if (ctx->pc != 0x18887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18887Cu; }
        if (ctx->pc != 0x18887Cu) { return; }
    }
    ctx->pc = 0x18887Cu;
    // 0x18887c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x18887cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188880: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x188880u;
    SET_GPR_U32(ctx, 31, 0x188888u);
    ctx->pc = 0x188884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188880u;
            // 0x188884: 0x8c24cb18  lw          $a0, -0x34E8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953752)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188888u; }
        if (ctx->pc != 0x188888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188888u; }
        if (ctx->pc != 0x188888u) { return; }
    }
    ctx->pc = 0x188888u;
    // 0x188888: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18888c: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x18888Cu;
    SET_GPR_U32(ctx, 31, 0x188894u);
    ctx->pc = 0x188890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18888Cu;
            // 0x188890: 0x8c24cb10  lw          $a0, -0x34F0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953744)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188894u; }
        if (ctx->pc != 0x188894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188894u; }
        if (ctx->pc != 0x188894u) { return; }
    }
    ctx->pc = 0x188894u;
    // 0x188894: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x188894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x188898: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x188898u;
    SET_GPR_U32(ctx, 31, 0x1888A0u);
    ctx->pc = 0x18889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188898u;
            // 0x18889c: 0x8c24cb08  lw          $a0, -0x34F8($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953736)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888A0u; }
        if (ctx->pc != 0x1888A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888A0u; }
        if (ctx->pc != 0x1888A0u) { return; }
    }
    ctx->pc = 0x1888A0u;
    // 0x1888a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1888a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1888a4: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1888A4u;
    SET_GPR_U32(ctx, 31, 0x1888ACu);
    ctx->pc = 0x1888A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888A4u;
            // 0x1888a8: 0x8c24cb00  lw          $a0, -0x3500($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888ACu; }
        if (ctx->pc != 0x1888ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888ACu; }
        if (ctx->pc != 0x1888ACu) { return; }
    }
    ctx->pc = 0x1888ACu;
    // 0x1888ac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1888acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1888b0: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x1888B0u;
    SET_GPR_U32(ctx, 31, 0x1888B8u);
    ctx->pc = 0x1888B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1888B0u;
            // 0x1888b4: 0x8c24caf8  lw          $a0, -0x3508($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888B8u; }
        if (ctx->pc != 0x1888B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1888B8u; }
        if (ctx->pc != 0x1888B8u) { return; }
    }
    ctx->pc = 0x1888B8u;
    // 0x1888b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1888b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1888bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1888BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1888C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1888BCu;
            // 0x1888c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1888C4u;
}
