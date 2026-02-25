#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsLeaveTask
// Address: 0x142bd0 - 0x142c4c
void wrsLeaveTask_0x142bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsLeaveTask_0x142bd0");
#endif

    ctx->pc = 0x142bd0u;

    // 0x142bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142bdc: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x142bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x142be0: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x142BE0u;
    SET_GPR_U32(ctx, 31, 0x142BE8u);
    ctx->pc = 0x142BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142BE0u;
            // 0x142be4: 0x26107a50  addiu       $s0, $s0, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB50u;
    if (runtime->hasFunction(0x12EB50u)) {
        auto targetFn = runtime->lookupFunction(0x12EB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142BE8u; }
        if (ctx->pc != 0x142BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x12eb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142BE8u; }
        if (ctx->pc != 0x142BE8u) { return; }
    }
    ctx->pc = 0x142BE8u;
    // 0x142be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x142be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142bec: 0x0  nop
    ctx->pc = 0x142becu;
    // NOP
label_142bf0:
    // 0x142bf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x142bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x142bf4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142BF4u;
    {
        const bool branch_taken_0x142bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142bf4) {
            ctx->pc = 0x142C10u;
            goto label_142c10;
        }
    }
    ctx->pc = 0x142BFCu;
    // 0x142bfc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x142bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x142c00: 0x28830040  slti        $v1, $a0, 0x40
    ctx->pc = 0x142c00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142c04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142C04u;
    {
        const bool branch_taken_0x142c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C04u;
            // 0x142c08: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c04) {
            ctx->pc = 0x142BF0u;
            goto label_142bf0;
        }
    }
    ctx->pc = 0x142C0Cu;
    // 0x142c0c: 0x0  nop
    ctx->pc = 0x142c0cu;
    // NOP
label_142c10:
    // 0x142c10: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142c14: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x142C14u;
    SET_GPR_U32(ctx, 31, 0x142C1Cu);
    ctx->pc = 0x142C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C14u;
            // 0x142c18: 0x8c247a48  lw          $a0, 0x7A48($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C1Cu; }
        if (ctx->pc != 0x142C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C1Cu; }
        if (ctx->pc != 0x142C1Cu) { return; }
    }
    ctx->pc = 0x142C1Cu;
    // 0x142c1c: 0x0  nop
    ctx->pc = 0x142c1cu;
    // NOP
label_142c20:
    // 0x142c20: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x142C20u;
    SET_GPR_U32(ctx, 31, 0x142C28u);
    ctx->pc = 0x142C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C20u;
            // 0x142c24: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C28u; }
        if (ctx->pc != 0x142C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142C28u; }
        if (ctx->pc != 0x142C28u) { return; }
    }
    ctx->pc = 0x142C28u;
    // 0x142c28: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142c2c: 0x8c237a28  lw          $v1, 0x7A28($at)
    ctx->pc = 0x142c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31272)));
    // 0x142c30: 0x0  nop
    ctx->pc = 0x142c30u;
    // NOP
    // 0x142c34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142C34u;
    {
        const bool branch_taken_0x142c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142c34) {
            ctx->pc = 0x142C20u;
            goto label_142c20;
        }
    }
    ctx->pc = 0x142C3Cu;
    // 0x142c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142c40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142c40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142c44: 0x3e00008  jr          $ra
    ctx->pc = 0x142C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C44u;
            // 0x142c48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142BF0u: goto label_142bf0;
            case 0x142C10u: goto label_142c10;
            case 0x142C20u: goto label_142c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142C4Cu;
}
