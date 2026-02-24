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
// Address: 0x1179e8 - 0x117a7c
void cmd_sem_init_0x1179e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("cmd_sem_init_0x1179e8");
#endif

    ctx->pc = 0x1179e8u;

    // 0x1179e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1179ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1179ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1179f0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1179f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1179f4: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x1179f4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x1179f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1179fc: 0x8e22fca8  lw          $v0, -0x358($s1)
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966440)));
    // 0x117a00: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x117A00u;
    {
        const bool branch_taken_0x117a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x117A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A00u;
            // 0x117a04: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a00) {
            ctx->pc = 0x117A20u;
            goto label_117a20;
        }
    }
    ctx->pc = 0x117A08u;
    // 0x117a08: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x117a08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x117a0c: 0x8e02fcac  lw          $v0, -0x354($s0)
    ctx->pc = 0x117a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966444)));
    // 0x117a10: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x117A10u;
    {
        const bool branch_taken_0x117a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x117A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A10u;
            // 0x117a14: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a10) {
            ctx->pc = 0x117A6Cu;
            goto label_117a6c;
        }
    }
    ctx->pc = 0x117A18u;
    // 0x117a18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x117A18u;
    {
        const bool branch_taken_0x117a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A18u;
            // 0x117a1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a18) {
            ctx->pc = 0x117A28u;
            goto label_117a28;
        }
    }
    ctx->pc = 0x117A20u;
label_117a20:
    // 0x117a20: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x117a24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_117a28:
    // 0x117a28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x117a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x117a2c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x117a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x117a30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a34: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x117A34u;
    SET_GPR_U32(ctx, 31, 0x117A3Cu);
    ctx->pc = 0x117A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A34u;
            // 0x117a38: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2A0u;
    if (runtime->hasFunction(0x10E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A3Cu; }
        if (ctx->pc != 0x117A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A3Cu; }
        if (ctx->pc != 0x117A3Cu) { return; }
    }
    ctx->pc = 0x117A3Cu;
    // 0x117a3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a40: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x117A40u;
    SET_GPR_U32(ctx, 31, 0x117A48u);
    ctx->pc = 0x117A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A40u;
            // 0x117a44: 0xae22fca8  sw          $v0, -0x358($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294966440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2A0u;
    if (runtime->hasFunction(0x10E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A48u; }
        if (ctx->pc != 0x117A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A48u; }
        if (ctx->pc != 0x117A48u) { return; }
    }
    ctx->pc = 0x117A48u;
    // 0x117a48: 0xae02fcac  sw          $v0, -0x354($s0)
    ctx->pc = 0x117a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966444), GPR_U32(ctx, 2));
    // 0x117a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x117a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117a50: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x117A50u;
    SET_GPR_U32(ctx, 31, 0x117A58u);
    ctx->pc = 0x117A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117A50u;
            // 0x117a54: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2A0u;
    if (runtime->hasFunction(0x10E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A58u; }
        if (ctx->pc != 0x117A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117A58u; }
        if (ctx->pc != 0x117A58u) { return; }
    }
    ctx->pc = 0x117A58u;
    // 0x117a58: 0x3c030017  lui         $v1, 0x17
    ctx->pc = 0x117a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23 << 16));
    // 0x117a5c: 0xac62fca0  sw          $v0, -0x360($v1)
    ctx->pc = 0x117a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966432), GPR_U32(ctx, 2));
    // 0x117a60: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x117a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x117a64: 0xac40fcb0  sw          $zero, -0x350($v0)
    ctx->pc = 0x117a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966448), GPR_U32(ctx, 0));
    // 0x117a68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x117a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_117a6c:
    // 0x117a6c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x117a6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x117a70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x117a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a74: 0x3e00008  jr          $ra
    ctx->pc = 0x117A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117A74u;
            // 0x117a78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117A20u: goto label_117a20;
            case 0x117A28u: goto label_117a28;
            case 0x117A6Cu: goto label_117a6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117A7Cu;
}
