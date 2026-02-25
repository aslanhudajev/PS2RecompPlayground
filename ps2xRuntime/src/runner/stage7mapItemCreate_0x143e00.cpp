#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage7mapItemCreate
// Address: 0x143e00 - 0x143e58
void stage7mapItemCreate_0x143e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage7mapItemCreate_0x143e00");
#endif

    ctx->pc = 0x143e00u;

    // 0x143e00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x143e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x143e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143e08: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x143e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x143e0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143e10: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x143E10u;
    SET_GPR_U32(ctx, 31, 0x143E18u);
    ctx->pc = 0x143E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E10u;
            // 0x143e14: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E18u; }
        if (ctx->pc != 0x143E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E18u; }
        if (ctx->pc != 0x143E18u) { return; }
    }
    ctx->pc = 0x143E18u;
    // 0x143e18: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143e18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143e1c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x143e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x143e20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143e24: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143e28: 0x24e74170  addiu       $a3, $a3, 0x4170
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16752));
    // 0x143e2c: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143E2Cu;
    SET_GPR_U32(ctx, 31, 0x143E34u);
    ctx->pc = 0x143E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E2Cu;
            // 0x143e30: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E34u; }
        if (ctx->pc != 0x143E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E34u; }
        if (ctx->pc != 0x143E34u) { return; }
    }
    ctx->pc = 0x143E34u;
    // 0x143e34: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x143e34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x143e38: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x143e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x143e3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143e40: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x143e44: 0xc0520cc  jal         func_148330
    ctx->pc = 0x143E44u;
    SET_GPR_U32(ctx, 31, 0x143E4Cu);
    ctx->pc = 0x143E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143E44u;
            // 0x143e48: 0x24e74060  addiu       $a3, $a3, 0x4060 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E4Cu; }
        if (ctx->pc != 0x143E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E4Cu; }
        if (ctx->pc != 0x143E4Cu) { return; }
    }
    ctx->pc = 0x143E4Cu;
    // 0x143e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143e50: 0x3e00008  jr          $ra
    ctx->pc = 0x143E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E50u;
            // 0x143e54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143E58u;
}
