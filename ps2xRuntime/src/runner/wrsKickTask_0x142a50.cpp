#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsKickTask
// Address: 0x142a50 - 0x142bc4
void wrsKickTask_0x142a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsKickTask_0x142a50");
#endif

    ctx->pc = 0x142a50u;

    // 0x142a50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x142a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x142a54: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x142a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x142a58: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142a5c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142a60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x142a60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142a68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x142a68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142a70: 0x2a42007f  slti        $v0, $s2, 0x7F
    ctx->pc = 0x142a70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x142a74: 0x3c100024  lui         $s0, 0x24
    ctx->pc = 0x142a74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    // 0x142a78: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x142a78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x142a7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142A80u;
    {
        const bool branch_taken_0x142a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A80u;
            // 0x142a84: 0x26107a50  addiu       $s0, $s0, 0x7A50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142a80) {
            ctx->pc = 0x142A90u;
            goto label_142a90;
        }
    }
    ctx->pc = 0x142A88u;
    // 0x142a88: 0x2412007e  addiu       $s2, $zero, 0x7E
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x142a8c: 0x0  nop
    ctx->pc = 0x142a8cu;
    // NOP
label_142a90:
    // 0x142a90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x142a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142a94: 0x0  nop
    ctx->pc = 0x142a94u;
    // NOP
label_142a98:
    // 0x142a98: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x142a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x142a9c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x142A9Cu;
    {
        const bool branch_taken_0x142a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142a9c) {
            ctx->pc = 0x142B68u;
            goto label_142b68;
        }
    }
    ctx->pc = 0x142AA4u;
    // 0x142aa4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x142aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x142aa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142aac: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x142aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x142ab0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142ab0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ab4: 0x0  nop
    ctx->pc = 0x142ab4u;
    // NOP
label_142ab8:
    // 0x142ab8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x142ab8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142abc: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x142abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x142ac0: 0xa0430044  sb          $v1, 0x44($v0)
    ctx->pc = 0x142ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 3));
    // 0x142ac4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x142ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x142ac8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x142ac8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142acc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142ACCu;
    {
        const bool branch_taken_0x142acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142ACCu;
            // 0x142ad0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142acc) {
            ctx->pc = 0x142AB8u;
            goto label_142ab8;
        }
    }
    ctx->pc = 0x142AD4u;
    // 0x142ad4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x142ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ad8: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x142ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x142adc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x142adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x142ae0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x142ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ae4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x142ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ae8: 0xc050788  jal         func_141E20
    ctx->pc = 0x142AE8u;
    SET_GPR_U32(ctx, 31, 0x142AF0u);
    ctx->pc = 0x142AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142AE8u;
            // 0x142aec: 0x24080081  addiu       $t0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E20u;
    if (runtime->hasFunction(0x141E20u)) {
        auto targetFn = runtime->lookupFunction(0x141E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142AF0u; }
        if (ctx->pc != 0x142AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsMalloc_0x141e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142AF0u; }
        if (ctx->pc != 0x142AF0u) { return; }
    }
    ctx->pc = 0x142AF0u;
    // 0x142af0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x142af4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x142af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x142af8: 0x2442b670  addiu       $v0, $v0, -0x4990
    ctx->pc = 0x142af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948464));
    // 0x142afc: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x142afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x142b00: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x142b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x142b04: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x142b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x142b08: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x142b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x142b0c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x142b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x142b10: 0xc04ba98  jal         func_12EA60
    ctx->pc = 0x142B10u;
    SET_GPR_U32(ctx, 31, 0x142B18u);
    ctx->pc = 0x142B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B10u;
            // 0x142b14: 0xae110030  sw          $s1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA60u;
    if (runtime->hasFunction(0x12EA60u)) {
        auto targetFn = runtime->lookupFunction(0x12EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B18u; }
        if (ctx->pc != 0x142B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x12ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B18u; }
        if (ctx->pc != 0x142B18u) { return; }
    }
    ctx->pc = 0x142B18u;
    // 0x142b18: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x142b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x142b1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x142b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x142b20: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x142B20u;
    SET_GPR_U32(ctx, 31, 0x142B28u);
    ctx->pc = 0x142B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B20u;
            // 0x142b24: 0x24847a30  addiu       $a0, $a0, 0x7A30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B28u; }
        if (ctx->pc != 0x142B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B28u; }
        if (ctx->pc != 0x142B28u) { return; }
    }
    ctx->pc = 0x142B28u;
    // 0x142b28: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x142b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x142b2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x142b30: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x142B30u;
    {
        const bool branch_taken_0x142b30 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x142B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B30u;
            // 0x142b34: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b30) {
            ctx->pc = 0x142B60u;
            goto label_142b60;
        }
    }
    ctx->pc = 0x142B38u;
    // 0x142b38: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142B38u;
    SET_GPR_U32(ctx, 31, 0x142B40u);
    ctx->pc = 0x142B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B38u;
            // 0x142b3c: 0x24840ad0  addiu       $a0, $a0, 0xAD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B40u; }
        if (ctx->pc != 0x142B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B40u; }
        if (ctx->pc != 0x142B40u) { return; }
    }
    ctx->pc = 0x142B40u;
label_142b40:
    // 0x142b40: 0x0  nop
    ctx->pc = 0x142b40u;
    // NOP
    // 0x142b44: 0x0  nop
    ctx->pc = 0x142b44u;
    // NOP
    // 0x142b48: 0x0  nop
    ctx->pc = 0x142b48u;
    // NOP
    // 0x142b4c: 0x0  nop
    ctx->pc = 0x142b4cu;
    // NOP
    // 0x142b50: 0x0  nop
    ctx->pc = 0x142b50u;
    // NOP
    // 0x142b54: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x142B54u;
    {
        const bool branch_taken_0x142b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b54) {
            ctx->pc = 0x142B40u;
            goto label_142b40;
        }
    }
    ctx->pc = 0x142B5Cu;
    // 0x142b5c: 0x0  nop
    ctx->pc = 0x142b5cu;
    // NOP
label_142b60:
    // 0x142b60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x142B60u;
    {
        const bool branch_taken_0x142b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b60) {
            ctx->pc = 0x142BA8u;
            goto label_142ba8;
        }
    }
    ctx->pc = 0x142B68u;
label_142b68:
    // 0x142b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x142b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x142b6c: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x142b6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x142b70: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x142B70u;
    {
        const bool branch_taken_0x142b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x142B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142B70u;
            // 0x142b74: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b70) {
            ctx->pc = 0x142A98u;
            goto label_142a98;
        }
    }
    ctx->pc = 0x142B78u;
    // 0x142b78: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x142b7c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x142B7Cu;
    SET_GPR_U32(ctx, 31, 0x142B84u);
    ctx->pc = 0x142B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142B7Cu;
            // 0x142b80: 0x24840ae8  addiu       $a0, $a0, 0xAE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B84u; }
        if (ctx->pc != 0x142B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142B84u; }
        if (ctx->pc != 0x142B84u) { return; }
    }
    ctx->pc = 0x142B84u;
    // 0x142b84: 0x0  nop
    ctx->pc = 0x142b84u;
    // NOP
label_142b88:
    // 0x142b88: 0x0  nop
    ctx->pc = 0x142b88u;
    // NOP
    // 0x142b8c: 0x0  nop
    ctx->pc = 0x142b8cu;
    // NOP
    // 0x142b90: 0x0  nop
    ctx->pc = 0x142b90u;
    // NOP
    // 0x142b94: 0x0  nop
    ctx->pc = 0x142b94u;
    // NOP
    // 0x142b98: 0x0  nop
    ctx->pc = 0x142b98u;
    // NOP
    // 0x142b9c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x142B9Cu;
    {
        const bool branch_taken_0x142b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142b9c) {
            ctx->pc = 0x142B88u;
            goto label_142b88;
        }
    }
    ctx->pc = 0x142BA4u;
    // 0x142ba4: 0x0  nop
    ctx->pc = 0x142ba4u;
    // NOP
label_142ba8:
    // 0x142ba8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x142ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142bac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x142bacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142bb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x142bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x142bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x142bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x142bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x142BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142BBCu;
            // 0x142bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142A90u: goto label_142a90;
            case 0x142A98u: goto label_142a98;
            case 0x142AB8u: goto label_142ab8;
            case 0x142B40u: goto label_142b40;
            case 0x142B60u: goto label_142b60;
            case 0x142B68u: goto label_142b68;
            case 0x142B88u: goto label_142b88;
            case 0x142BA8u: goto label_142ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x142BC4u;
}
