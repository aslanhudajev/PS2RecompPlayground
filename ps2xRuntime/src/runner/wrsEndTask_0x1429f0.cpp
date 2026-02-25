#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsEndTask
// Address: 0x1429f0 - 0x142a48
void wrsEndTask_0x1429f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsEndTask_0x1429f0");
#endif

    ctx->pc = 0x1429f0u;

    // 0x1429f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1429f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1429f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1429f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1429f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1429f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1429fc: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x1429fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x142a00: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x142A00u;
    SET_GPR_U32(ctx, 31, 0x142A08u);
    ctx->pc = 0x142A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A00u;
            // 0x142a04: 0x26107a50  addiu       $s0, $s0, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EB50u;
    if (runtime->hasFunction(0x12EB50u)) {
        auto targetFn = runtime->lookupFunction(0x12EB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A08u; }
        if (ctx->pc != 0x142A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x12eb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A08u; }
        if (ctx->pc != 0x142A08u) { return; }
    }
    ctx->pc = 0x142A08u;
    // 0x142a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a0c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x142a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_142a10:
    // 0x142a10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x142a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x142a14: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x142A14u;
    {
        const bool branch_taken_0x142a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142a14) {
            ctx->pc = 0x142A20u;
            goto label_142a20;
        }
    }
    ctx->pc = 0x142A1Cu;
    // 0x142a1c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x142a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_142a20:
    // 0x142a20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x142a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x142a24: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x142a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142a28: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x142A28u;
    {
        const bool branch_taken_0x142a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A28u;
            // 0x142a2c: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a28) {
            ctx->pc = 0x142A10u;
            goto label_142a10;
        }
    }
    ctx->pc = 0x142A30u;
    // 0x142a30: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x142A30u;
    SET_GPR_U32(ctx, 31, 0x142A38u);
    ctx->pc = 0x142A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A30u;
            // 0x142a34: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A38u; }
        if (ctx->pc != 0x142A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A38u; }
        if (ctx->pc != 0x142A38u) { return; }
    }
    ctx->pc = 0x142A38u;
    // 0x142a38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142a3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a40: 0x3e00008  jr          $ra
    ctx->pc = 0x142A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A40u;
            // 0x142a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142A10u: goto label_142a10;
            case 0x142A20u: goto label_142a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142A48u;
}
