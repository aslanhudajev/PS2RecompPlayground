#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: cmd_sem_init
// Address: 0x1039f8 - 0x103ab0
void cmd_sem_init_0x1039f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cmd_sem_init_0x1039f8");
#endif

    ctx->pc = 0x1039f8u;

    // 0x1039f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1039f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1039fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1039fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x103a00: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x103a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x103a04: 0x3c110021  lui         $s1, 0x21
    ctx->pc = 0x103a04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
    // 0x103a08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x103a0c: 0x8e22da28  lw          $v0, -0x25D8($s1)
    ctx->pc = 0x103a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294957608)));
    // 0x103a10: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x103a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x103a14: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x103A14u;
    {
        const bool branch_taken_0x103a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x103A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A14u;
            // 0x103a18: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a14) {
            ctx->pc = 0x103A40u;
            goto label_103a40;
        }
    }
    ctx->pc = 0x103A1Cu;
    // 0x103a1c: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x103a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x103a20: 0x8e02da2c  lw          $v0, -0x25D4($s0)
    ctx->pc = 0x103a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294957612)));
    // 0x103a24: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x103A24u;
    {
        const bool branch_taken_0x103a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x103A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A24u;
            // 0x103a28: 0x3c120021  lui         $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a24) {
            ctx->pc = 0x103A44u;
            goto label_103a44;
        }
    }
    ctx->pc = 0x103A2Cu;
    // 0x103a2c: 0x8e42da30  lw          $v0, -0x25D0($s2)
    ctx->pc = 0x103a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294957616)));
    // 0x103a30: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x103A30u;
    {
        const bool branch_taken_0x103a30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x103A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A30u;
            // 0x103a34: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a30) {
            ctx->pc = 0x103A9Cu;
            goto label_103a9c;
        }
    }
    ctx->pc = 0x103A38u;
    // 0x103a38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103A38u;
    {
        const bool branch_taken_0x103a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103A38u;
            // 0x103a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103a38) {
            ctx->pc = 0x103A4Cu;
            goto label_103a4c;
        }
    }
    ctx->pc = 0x103A40u;
label_103a40:
    // 0x103a40: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x103a40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
label_103a44:
    // 0x103a44: 0x3c120021  lui         $s2, 0x21
    ctx->pc = 0x103a44u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)33 << 16));
    // 0x103a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103a4c:
    // 0x103a4c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x103a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x103a50: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x103a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x103a54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a58: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x103A58u;
    SET_GPR_U32(ctx, 31, 0x103A60u);
    ctx->pc = 0x103A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A58u;
            // 0x103a5c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A60u; }
        if (ctx->pc != 0x103A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A60u; }
        if (ctx->pc != 0x103A60u) { return; }
    }
    ctx->pc = 0x103A60u;
    // 0x103a60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a64: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x103A64u;
    SET_GPR_U32(ctx, 31, 0x103A6Cu);
    ctx->pc = 0x103A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A64u;
            // 0x103a68: 0xae22da28  sw          $v0, -0x25D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294957608), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A6Cu; }
        if (ctx->pc != 0x103A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A6Cu; }
        if (ctx->pc != 0x103A6Cu) { return; }
    }
    ctx->pc = 0x103A6Cu;
    // 0x103a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a70: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x103A70u;
    SET_GPR_U32(ctx, 31, 0x103A78u);
    ctx->pc = 0x103A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A70u;
            // 0x103a74: 0xae02da2c  sw          $v0, -0x25D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294957612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A78u; }
        if (ctx->pc != 0x103A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A78u; }
        if (ctx->pc != 0x103A78u) { return; }
    }
    ctx->pc = 0x103A78u;
    // 0x103a78: 0xae42da30  sw          $v0, -0x25D0($s2)
    ctx->pc = 0x103a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294957616), GPR_U32(ctx, 2));
    // 0x103a7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x103a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103a80: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x103A80u;
    SET_GPR_U32(ctx, 31, 0x103A88u);
    ctx->pc = 0x103A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x103A80u;
            // 0x103a84: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A88u; }
        if (ctx->pc != 0x103A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x103A88u; }
        if (ctx->pc != 0x103A88u) { return; }
    }
    ctx->pc = 0x103A88u;
    // 0x103a88: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x103a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x103a8c: 0xac62da20  sw          $v0, -0x25E0($v1)
    ctx->pc = 0x103a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957600), GPR_U32(ctx, 2));
    // 0x103a90: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x103a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x103a94: 0xac40da34  sw          $zero, -0x25CC($v0)
    ctx->pc = 0x103a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957620), GPR_U32(ctx, 0));
    // 0x103a98: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x103a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_103a9c:
    // 0x103a9c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x103a9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x103aa0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x103aa0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x103aa4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x103AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x103AA8u;
            // 0x103aac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x103A40u: goto label_103a40;
            case 0x103A44u: goto label_103a44;
            case 0x103A4Cu: goto label_103a4c;
            case 0x103A9Cu: goto label_103a9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x103AB0u;
}
