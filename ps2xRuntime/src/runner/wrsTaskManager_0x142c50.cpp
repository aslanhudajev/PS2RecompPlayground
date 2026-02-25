#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsTaskManager
// Address: 0x142c50 - 0x142d5c
void wrsTaskManager_0x142c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsTaskManager_0x142c50");
#endif

    ctx->pc = 0x142c50u;

    // 0x142c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x142c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x142c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142c60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x142c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142c64: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x142c64u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x142c68: 0x26107a50  addiu       $s0, $s0, 0x7A50
    ctx->pc = 0x142c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31312));
    // 0x142c6c: 0x0  nop
    ctx->pc = 0x142c6cu;
    // NOP
label_142c70:
    // 0x142c70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x142c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142c74: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x142c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142c78: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x142C78u;
    {
        const bool branch_taken_0x142c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x142C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142C78u;
            // 0x142c7c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142c78) {
            ctx->pc = 0x142CC0u;
            goto label_142cc0;
        }
    }
    ctx->pc = 0x142C80u;
    // 0x142c80: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142C80u;
    {
        const bool branch_taken_0x142c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x142c80) {
            ctx->pc = 0x142C90u;
            goto label_142c90;
        }
    }
    ctx->pc = 0x142C88u;
    // 0x142c88: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x142C88u;
    {
        const bool branch_taken_0x142c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142c88) {
            ctx->pc = 0x142CD8u;
            goto label_142cd8;
        }
    }
    ctx->pc = 0x142C90u;
label_142c90:
    // 0x142c90: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142c94: 0xac307a20  sw          $s0, 0x7A20($at)
    ctx->pc = 0x142c94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31264), GPR_U32(ctx, 16));
    // 0x142c98: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x142c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x142c9c: 0xc04baa0  jal         func_12EA80
    ctx->pc = 0x142C9Cu;
    SET_GPR_U32(ctx, 31, 0x142CA4u);
    ctx->pc = 0x142CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142C9Cu;
            // 0x142ca0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA80u;
    if (runtime->hasFunction(0x12EA80u)) {
        auto targetFn = runtime->lookupFunction(0x12EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CA4u; }
        if (ctx->pc != 0x142CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x12ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CA4u; }
        if (ctx->pc != 0x142CA4u) { return; }
    }
    ctx->pc = 0x142CA4u;
    // 0x142ca4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142ca8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142ca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142cac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x142cb0: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x142CB0u;
    SET_GPR_U32(ctx, 31, 0x142CB8u);
    ctx->pc = 0x142CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142CB0u;
            // 0x142cb4: 0x8c247a48  lw          $a0, 0x7A48($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CB8u; }
        if (ctx->pc != 0x142CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CB8u; }
        if (ctx->pc != 0x142CB8u) { return; }
    }
    ctx->pc = 0x142CB8u;
    // 0x142cb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x142CB8u;
    {
        const bool branch_taken_0x142cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142cb8) {
            ctx->pc = 0x142CD8u;
            goto label_142cd8;
        }
    }
    ctx->pc = 0x142CC0u;
label_142cc0:
    // 0x142cc0: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x142CC0u;
    SET_GPR_U32(ctx, 31, 0x142CC8u);
    ctx->pc = 0x142CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142CC0u;
            // 0x142cc4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CC8u; }
        if (ctx->pc != 0x142CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CC8u; }
        if (ctx->pc != 0x142CC8u) { return; }
    }
    ctx->pc = 0x142CC8u;
    // 0x142cc8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x142cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x142ccc: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x142CCCu;
    SET_GPR_U32(ctx, 31, 0x142CD4u);
    ctx->pc = 0x142CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142CCCu;
            // 0x142cd0: 0x8c247a48  lw          $a0, 0x7A48($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31304)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CD4u; }
        if (ctx->pc != 0x142CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142CD4u; }
        if (ctx->pc != 0x142CD4u) { return; }
    }
    ctx->pc = 0x142CD4u;
    // 0x142cd4: 0x0  nop
    ctx->pc = 0x142cd4u;
    // NOP
label_142cd8:
    // 0x142cd8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x142cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x142cdc: 0x2a230040  slti        $v1, $s1, 0x40
    ctx->pc = 0x142cdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142ce0: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x142CE0u;
    {
        const bool branch_taken_0x142ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142CE0u;
            // 0x142ce4: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ce0) {
            ctx->pc = 0x142C70u;
            goto label_142c70;
        }
    }
    ctx->pc = 0x142CE8u;
    // 0x142ce8: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x142ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x142cec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x142cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142cf0: 0x26317a50  addiu       $s1, $s1, 0x7A50
    ctx->pc = 0x142cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31312));
    // 0x142cf4: 0x0  nop
    ctx->pc = 0x142cf4u;
    // NOP
label_142cf8:
    // 0x142cf8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x142cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x142cfc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x142cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142d00: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x142D00u;
    {
        const bool branch_taken_0x142d00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x142d00) {
            ctx->pc = 0x142D38u;
            goto label_142d38;
        }
    }
    ctx->pc = 0x142D08u;
    // 0x142d08: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x142D08u;
    SET_GPR_U32(ctx, 31, 0x142D10u);
    ctx->pc = 0x142D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D08u;
            // 0x142d0c: 0x8e240040  lw          $a0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D10u; }
        if (ctx->pc != 0x142D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D10u; }
        if (ctx->pc != 0x142D10u) { return; }
    }
    ctx->pc = 0x142D10u;
    // 0x142d10: 0xc04baac  jal         func_12EAB0
    ctx->pc = 0x142D10u;
    SET_GPR_U32(ctx, 31, 0x142D18u);
    ctx->pc = 0x142D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D10u;
            // 0x142d14: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAB0u;
    if (runtime->hasFunction(0x12EAB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D18u; }
        if (ctx->pc != 0x142D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TerminateThread_0x12eab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D18u; }
        if (ctx->pc != 0x142D18u) { return; }
    }
    ctx->pc = 0x142D18u;
    // 0x142d18: 0xc04ba9c  jal         func_12EA70
    ctx->pc = 0x142D18u;
    SET_GPR_U32(ctx, 31, 0x142D20u);
    ctx->pc = 0x142D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D18u;
            // 0x142d1c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA70u;
    if (runtime->hasFunction(0x12EA70u)) {
        auto targetFn = runtime->lookupFunction(0x12EA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D20u; }
        if (ctx->pc != 0x142D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteThread_0x12ea70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D20u; }
        if (ctx->pc != 0x142D20u) { return; }
    }
    ctx->pc = 0x142D20u;
    // 0x142d20: 0xc050700  jal         func_141C00
    ctx->pc = 0x142D20u;
    SET_GPR_U32(ctx, 31, 0x142D28u);
    ctx->pc = 0x142D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142D20u;
            // 0x142d24: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D28u; }
        if (ctx->pc != 0x142D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142D28u; }
        if (ctx->pc != 0x142D28u) { return; }
    }
    ctx->pc = 0x142D28u;
    // 0x142d28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x142d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x142d2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x142d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x142d30: 0xa2200044  sb          $zero, 0x44($s1)
    ctx->pc = 0x142d30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x142d34: 0x0  nop
    ctx->pc = 0x142d34u;
    // NOP
label_142d38:
    // 0x142d38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x142d3c: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x142d3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142d40: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x142D40u;
    {
        const bool branch_taken_0x142d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D40u;
            // 0x142d44: 0x26310084  addiu       $s1, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142d40) {
            ctx->pc = 0x142CF8u;
            goto label_142cf8;
        }
    }
    ctx->pc = 0x142D48u;
    // 0x142d48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x142d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142d4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142d54: 0x3e00008  jr          $ra
    ctx->pc = 0x142D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142D54u;
            // 0x142d58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142C70u: goto label_142c70;
            case 0x142C90u: goto label_142c90;
            case 0x142CC0u: goto label_142cc0;
            case 0x142CD8u: goto label_142cd8;
            case 0x142CF8u: goto label_142cf8;
            case 0x142D38u: goto label_142d38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142D5Cu;
}
