#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage1mapItemCreate
// Address: 0x147a50 - 0x147aa8
void stage1mapItemCreate_0x147a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage1mapItemCreate_0x147a50");
#endif

    ctx->pc = 0x147a50u;

    // 0x147a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x147a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x147a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147a58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x147a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x147a5c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x147a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147a60: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x147A60u;
    SET_GPR_U32(ctx, 31, 0x147A68u);
    ctx->pc = 0x147A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A60u;
            // 0x147a64: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A68u; }
        if (ctx->pc != 0x147A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A68u; }
        if (ctx->pc != 0x147A68u) { return; }
    }
    ctx->pc = 0x147A68u;
    // 0x147a68: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x147a68u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147a6c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x147a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x147a70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x147a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147a74: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x147a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x147a78: 0x24e77ab0  addiu       $a3, $a3, 0x7AB0
    ctx->pc = 0x147a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31408));
    // 0x147a7c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147A7Cu;
    SET_GPR_U32(ctx, 31, 0x147A84u);
    ctx->pc = 0x147A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A7Cu;
            // 0x147a80: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A84u; }
        if (ctx->pc != 0x147A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A84u; }
        if (ctx->pc != 0x147A84u) { return; }
    }
    ctx->pc = 0x147A84u;
    // 0x147a84: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x147a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x147a88: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x147a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147a8c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x147a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x147a90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x147a94: 0xc0520cc  jal         func_148330
    ctx->pc = 0x147A94u;
    SET_GPR_U32(ctx, 31, 0x147A9Cu);
    ctx->pc = 0x147A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A94u;
            // 0x147a98: 0x24e77c30  addiu       $a3, $a3, 0x7C30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 31792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A9Cu; }
        if (ctx->pc != 0x147A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A9Cu; }
        if (ctx->pc != 0x147A9Cu) { return; }
    }
    ctx->pc = 0x147A9Cu;
    // 0x147a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x147AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AA0u;
            // 0x147aa4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147AA8u;
}
