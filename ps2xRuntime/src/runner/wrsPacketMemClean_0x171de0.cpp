#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPacketMemClean
// Address: 0x171de0 - 0x171eb0
void wrsPacketMemClean_0x171de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPacketMemClean_0x171de0");
#endif

    ctx->pc = 0x171de0u;

    // 0x171de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171de4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x171de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x171de8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x171dec: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x171decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x171df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x171df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x171df4: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171df8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x171df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x171dfc: 0x24423970  addiu       $v0, $v0, 0x3970
    ctx->pc = 0x171dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14704));
    // 0x171e00: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x171e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171e04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x171e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171e08: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x171e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x171e0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x171e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x171e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171e14: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x171e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171e18: 0xc059e60  jal         func_167980
    ctx->pc = 0x171E18u;
    SET_GPR_U32(ctx, 31, 0x171E20u);
    ctx->pc = 0x171E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171E18u;
            // 0x171e1c: 0x24c61350  addiu       $a2, $a2, 0x1350 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167980u;
    if (runtime->hasFunction(0x167980u)) {
        auto targetFn = runtime->lookupFunction(0x167980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E20u; }
        if (ctx->pc != 0x171E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        debug_draw_print_0x167980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E20u; }
        if (ctx->pc != 0x171E20u) { return; }
    }
    ctx->pc = 0x171E20u;
    // 0x171e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x171e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x171e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171e28:
    // 0x171e28: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171e2c: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x171e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171e30: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x171e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x171e34: 0x2463f980  addiu       $v1, $v1, -0x680
    ctx->pc = 0x171e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965632));
    // 0x171e38: 0x422c0  sll         $a0, $a0, 11
    ctx->pc = 0x171e38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 11));
    // 0x171e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171e40: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x171e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x171e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x171e48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x171E48u;
    {
        const bool branch_taken_0x171e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x171e48) {
            ctx->pc = 0x171E58u;
            goto label_171e58;
        }
    }
    ctx->pc = 0x171E50u;
    // 0x171e50: 0xc04ea3c  jal         func_13A8F0
    ctx->pc = 0x171E50u;
    SET_GPR_U32(ctx, 31, 0x171E58u);
    ctx->pc = 0x13A8F0u;
    if (runtime->hasFunction(0x13A8F0u)) {
        auto targetFn = runtime->lookupFunction(0x13A8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E58u; }
        if (ctx->pc != 0x171E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        free_0x13a8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E58u; }
        if (ctx->pc != 0x171E58u) { return; }
    }
    ctx->pc = 0x171E58u;
label_171e58:
    // 0x171e58: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171e5c: 0x8c267670  lw          $a2, 0x7670($at)
    ctx->pc = 0x171e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171e60: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x171e64: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x171e64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x171e68: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x171e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    // 0x171e6c: 0x2a230200  slti        $v1, $s1, 0x200
    ctx->pc = 0x171e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x171e70: 0x62ac0  sll         $a1, $a2, 11
    ctx->pc = 0x171e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x171e74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171e78: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x171e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x171e7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x171e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x171e80: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x171E80u;
    {
        const bool branch_taken_0x171e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x171E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E80u;
            // 0x171e84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171e80) {
            ctx->pc = 0x171E28u;
            goto label_171e28;
        }
    }
    ctx->pc = 0x171E88u;
    // 0x171e88: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x171e8c: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x171e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x171e90: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x171e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x171e94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x171e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171e98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x171e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x171e9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171ea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171ea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171ea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x171EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171EA8u;
            // 0x171eac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171E28u: goto label_171e28;
            case 0x171E58u: goto label_171e58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171EB0u;
}
