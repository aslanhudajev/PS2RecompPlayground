#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_blocks
// Address: 0x1efc3c - 0x1f06fc
void inflate_blocks_0x1efc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_blocks_0x1efc3c");
#endif

    ctx->pc = 0x1efc3cu;

label_1efc3c:
    // 0x1efc3c: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1efc40:
    // 0x1efc40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1efc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1efc44:
    // 0x1efc44: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1efc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1efc48:
    // 0x1efc48: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1efc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1efc4c:
    // 0x1efc4c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1efc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1efc50:
    // 0x1efc50: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1efc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1efc54:
    // 0x1efc54: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1efc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_1efc58:
    // 0x1efc58: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1efc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1efc5c:
    // 0x1efc5c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1efc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_1efc60:
    // 0x1efc60: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1efc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1efc64:
    // 0x1efc64: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1efc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_1efc68:
    // 0x1efc68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1efc68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1efc6c:
    // 0x1efc6c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1efc6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1efc70:
    // 0x1efc70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1efc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
label_1efc74:
    // 0x1efc74: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x1efc74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1efc78:
    // 0x1efc78: 0x8eb70004  lw          $s7, 0x4($s5)
    ctx->pc = 0x1efc78u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1efc7c:
    // 0x1efc7c: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x1efc7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_1efc80:
    // 0x1efc80: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1efc84:
    // 0x1efc84: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1efc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1efc88:
    // 0x1efc88: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1efc88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1efc8c:
    // 0x1efc8c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1efc90:
    if (ctx->pc == 0x1EFC90u) {
        ctx->pc = 0x1EFC90u;
            // 0x1efc90: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1EFC94u;
        goto label_1efc94;
    }
    ctx->pc = 0x1EFC8Cu;
    {
        const bool branch_taken_0x1efc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC8Cu;
            // 0x1efc90: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc8c) {
            ctx->pc = 0x1EFD00u;
            goto label_1efd00;
        }
    }
    ctx->pc = 0x1EFC94u;
label_1efc94:
    // 0x1efc94: 0x7e9023  subu        $s2, $v1, $fp
    ctx->pc = 0x1efc94u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1efc98:
    // 0x1efc98: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1efc9c:
    if (ctx->pc == 0x1EFC9Cu) {
        ctx->pc = 0x1EFC9Cu;
            // 0x1efc9c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1EFCA0u;
        goto label_1efca0;
    }
    ctx->pc = 0x1EFC98u;
    {
        const bool branch_taken_0x1efc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC98u;
            // 0x1efc9c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc98) {
            ctx->pc = 0x1EFD08u;
            goto label_1efd08;
        }
    }
    ctx->pc = 0x1EFCA0u;
label_1efca0:
    // 0x1efca0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1efca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1efca4:
    // 0x1efca4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1efca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1efca8:
    // 0x1efca8: 0x24423188  addiu       $v0, $v0, 0x3188
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12680));
label_1efcac:
    // 0x1efcac: 0x1000026a  b           . + 4 + (0x26A << 2)
label_1efcb0:
    if (ctx->pc == 0x1EFCB0u) {
        ctx->pc = 0x1EFCB0u;
            // 0x1efcb0: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFCB4u;
        goto label_1efcb4;
    }
    ctx->pc = 0x1EFCACu;
    {
        const bool branch_taken_0x1efcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCACu;
            // 0x1efcb0: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcac) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1EFCB4u;
label_1efcb4:
    // 0x1efcb4: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1efcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1efcb8:
    // 0x1efcb8: 0x10000195  b           . + 4 + (0x195 << 2)
label_1efcbc:
    if (ctx->pc == 0x1EFCBCu) {
        ctx->pc = 0x1EFCBCu;
            // 0x1efcbc: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1EFCC0u;
        goto label_1efcc0;
    }
    ctx->pc = 0x1EFCB8u;
    {
        const bool branch_taken_0x1efcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCB8u;
            // 0x1efcbc: 0xaea00004  sw          $zero, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcb8) {
            ctx->pc = 0x1F0310u;
            goto label_1f0310;
        }
    }
    ctx->pc = 0x1EFCC0u;
label_1efcc0:
    // 0x1efcc0: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1efcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1efcc4:
    // 0x1efcc4: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1efcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1efcc8:
    // 0x1efcc8: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1efcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1efccc:
    // 0x1efccc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1efcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1efcd0:
    // 0x1efcd0: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1efcd4:
    // 0x1efcd4: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1efcd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1efcd8:
    // 0x1efcd8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1efcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1efcdc:
    // 0x1efcdc: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1efcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1efce0:
    // 0x1efce0: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1efce0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1efce4:
    // 0x1efce4: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1efce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1efce8:
    // 0x1efce8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1efcec:
    // 0x1efcec: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1efcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1efcf0:
    // 0x1efcf0: 0xc07c638  jal         func_1F18E0
label_1efcf4:
    if (ctx->pc == 0x1EFCF4u) {
        ctx->pc = 0x1EFCF4u;
            // 0x1efcf4: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x1EFCF8u;
        goto label_1efcf8;
    }
    ctx->pc = 0x1EFCF0u;
    SET_GPR_U32(ctx, 31, 0x1EFCF8u);
    ctx->pc = 0x1EFCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCF0u;
            // 0x1efcf4: 0x2406fffc  addiu       $a2, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCF8u; }
        if (ctx->pc != 0x1EFCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCF8u; }
        if (ctx->pc != 0x1EFCF8u) { return; }
    }
    ctx->pc = 0x1EFCF8u;
label_1efcf8:
    // 0x1efcf8: 0x10000275  b           . + 4 + (0x275 << 2)
label_1efcfc:
    if (ctx->pc == 0x1EFCFCu) {
        ctx->pc = 0x1EFCFCu;
            // 0x1efcfc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1EFD00u;
        goto label_1efd00;
    }
    ctx->pc = 0x1EFCF8u;
    {
        const bool branch_taken_0x1efcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCF8u;
            // 0x1efcfc: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcf8) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1EFD00u;
label_1efd00:
    // 0x1efd00: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1efd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efd04:
    // 0x1efd04: 0x5e9023  subu        $s2, $v0, $fp
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1efd08:
    // 0x1efd08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1efd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1efd0c:
    // 0x1efd0c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1efd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1efd10:
    // 0x1efd10: 0x50400261  beql        $v0, $zero, . + 4 + (0x261 << 2)
label_1efd14:
    if (ctx->pc == 0x1EFD14u) {
        ctx->pc = 0x1EFD14u;
            // 0x1efd14: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFD18u;
        goto label_1efd18;
    }
    ctx->pc = 0x1EFD10u;
    {
        const bool branch_taken_0x1efd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd10) {
            ctx->pc = 0x1EFD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD10u;
            // 0x1efd14: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0698u;
            goto label_1f0698;
        }
    }
    ctx->pc = 0x1EFD18u;
label_1efd18:
    // 0x1efd18: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1efd18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1efd1c:
    // 0x1efd1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1efd1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1efd20:
    // 0x1efd20: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1efd20u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_1efd24:
    // 0x1efd24: 0x8c2231f0  lw          $v0, 0x31F0($at)
    ctx->pc = 0x1efd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 12784)));
label_1efd28:
    // 0x1efd28: 0x400008  jr          $v0
label_1efd2c:
    if (ctx->pc == 0x1EFD2Cu) {
        ctx->pc = 0x1EFD30u;
        goto label_1efd30;
    }
    ctx->pc = 0x1EFD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F0658u: goto label_1f0658;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFD30u;
label_1efd30:
    // 0x1efd30: 0x52e00175  beql        $s7, $zero, . + 4 + (0x175 << 2)
label_1efd34:
    if (ctx->pc == 0x1EFD34u) {
        ctx->pc = 0x1EFD34u;
            // 0x1efd34: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFD38u;
        goto label_1efd38;
    }
    ctx->pc = 0x1EFD30u;
    {
        const bool branch_taken_0x1efd30 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd30) {
            ctx->pc = 0x1EFD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD30u;
            // 0x1efd34: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1EFD38u;
label_1efd38:
    // 0x1efd38: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1efd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1efd3c:
    // 0x1efd3c: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1efd3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1efd40:
    // 0x1efd40: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1efd40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1efd44:
    // 0x1efd44: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1efd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1efd48:
    // 0x1efd48: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1efd48u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1efd4c:
    // 0x1efd4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1efd4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1efd50:
    // 0x1efd50: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1efd54:
    // 0x1efd54: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x1efd54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1efd58:
    // 0x1efd58: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1efd5c:
    if (ctx->pc == 0x1EFD5Cu) {
        ctx->pc = 0x1EFD60u;
        goto label_1efd60;
    }
    ctx->pc = 0x1EFD58u;
    {
        const bool branch_taken_0x1efd58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efd58) {
            ctx->pc = 0x1EFD30u;
            goto label_1efd30;
        }
    }
    ctx->pc = 0x1EFD60u;
label_1efd60:
    // 0x1efd60: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1efd60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1efd64:
    // 0x1efd64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1efd64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1efd68:
    // 0x1efd68: 0x30500007  andi        $s0, $v0, 0x7
    ctx->pc = 0x1efd68u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
label_1efd6c:
    // 0x1efd6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1efd6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1efd70:
    // 0x1efd70: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x1efd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_1efd74:
    // 0x1efd74: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x1efd74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_1efd78:
    // 0x1efd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efd7c:
    // 0x1efd7c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1efd80:
    if (ctx->pc == 0x1EFD80u) {
        ctx->pc = 0x1EFD80u;
            // 0x1efd80: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1EFD84u;
        goto label_1efd84;
    }
    ctx->pc = 0x1EFD7Cu;
    {
        const bool branch_taken_0x1efd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1EFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD7Cu;
            // 0x1efd80: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efd7c) {
            ctx->pc = 0x1EFDC8u;
            goto label_1efdc8;
        }
    }
    ctx->pc = 0x1EFD84u;
label_1efd84:
    // 0x1efd84: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1efd88:
    if (ctx->pc == 0x1EFD88u) {
        ctx->pc = 0x1EFD88u;
            // 0x1efd88: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->pc = 0x1EFD8Cu;
        goto label_1efd8c;
    }
    ctx->pc = 0x1EFD84u;
    {
        const bool branch_taken_0x1efd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efd84) {
            ctx->pc = 0x1EFD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD84u;
            // 0x1efd88: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFDACu;
            goto label_1efdac;
        }
    }
    ctx->pc = 0x1EFD8Cu;
label_1efd8c:
    // 0x1efd8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1efd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1efd90:
    // 0x1efd90: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
label_1efd94:
    if (ctx->pc == 0x1EFD94u) {
        ctx->pc = 0x1EFD94u;
            // 0x1efd94: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->pc = 0x1EFD98u;
        goto label_1efd98;
    }
    ctx->pc = 0x1EFD90u;
    {
        const bool branch_taken_0x1efd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1efd90) {
            ctx->pc = 0x1EFD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD90u;
            // 0x1efd94: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE0Cu;
            goto label_1efe0c;
        }
    }
    ctx->pc = 0x1EFD98u;
label_1efd98:
    // 0x1efd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1efd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1efd9c:
    // 0x1efd9c: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
label_1efda0:
    if (ctx->pc == 0x1EFDA0u) {
        ctx->pc = 0x1EFDA0u;
            // 0x1efda0: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->pc = 0x1EFDA4u;
        goto label_1efda4;
    }
    ctx->pc = 0x1EFD9Cu;
    {
        const bool branch_taken_0x1efd9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1efd9c) {
            ctx->pc = 0x1EFDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD9Cu;
            // 0x1efda0: 0x14a0fa  dsrl        $s4, $s4, 3 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFE18u;
            goto label_1efe18;
        }
    }
    ctx->pc = 0x1EFDA4u;
label_1efda4:
    // 0x1efda4: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
label_1efda8:
    if (ctx->pc == 0x1EFDA8u) {
        ctx->pc = 0x1EFDA8u;
            // 0x1efda8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1EFDACu;
        goto label_1efdac;
    }
    ctx->pc = 0x1EFDA4u;
    {
        const bool branch_taken_0x1efda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDA4u;
            // 0x1efda8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efda4) {
            ctx->pc = 0x1EFD0Cu;
            goto label_1efd0c;
        }
    }
    ctx->pc = 0x1EFDACu;
label_1efdac:
    // 0x1efdac: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x1efdacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_1efdb0:
    // 0x1efdb0: 0x32700007  andi        $s0, $s3, 0x7
    ctx->pc = 0x1efdb0u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)7u)));
label_1efdb4:
    // 0x1efdb4: 0x214a016  dsrlv       $s4, $s4, $s0
    ctx->pc = 0x1efdb4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_1efdb8:
    // 0x1efdb8: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x1efdb8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1efdbc:
    // 0x1efdbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1efdc0:
    // 0x1efdc0: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_1efdc4:
    if (ctx->pc == 0x1EFDC4u) {
        ctx->pc = 0x1EFDC4u;
            // 0x1efdc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFDC8u;
        goto label_1efdc8;
    }
    ctx->pc = 0x1EFDC0u;
    {
        const bool branch_taken_0x1efdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDC0u;
            // 0x1efdc4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdc0) {
            ctx->pc = 0x1EFD08u;
            goto label_1efd08;
        }
    }
    ctx->pc = 0x1EFDC8u;
label_1efdc8:
    // 0x1efdc8: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1efdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1efdcc:
    // 0x1efdcc: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1efdccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1efdd0:
    // 0x1efdd0: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1efdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_1efdd4:
    // 0x1efdd4: 0xc07c41d  jal         func_1F1074
label_1efdd8:
    if (ctx->pc == 0x1EFDD8u) {
        ctx->pc = 0x1EFDD8u;
            // 0x1efdd8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDDCu;
        goto label_1efddc;
    }
    ctx->pc = 0x1EFDD4u;
    SET_GPR_U32(ctx, 31, 0x1EFDDCu);
    ctx->pc = 0x1EFDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDD4u;
            // 0x1efdd8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1074u;
    if (runtime->hasFunction(0x1F1074u)) {
        auto targetFn = runtime->lookupFunction(0x1F1074u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDDCu; }
        if (ctx->pc != 0x1EFDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_fixed_0x1f1074(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDDCu; }
        if (ctx->pc != 0x1EFDDCu) { return; }
    }
    ctx->pc = 0x1EFDDCu;
label_1efddc:
    // 0x1efddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1efddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1efde0:
    // 0x1efde0: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1efde0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1efde4:
    // 0x1efde4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x1efde4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1efde8:
    // 0x1efde8: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x1efde8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_1efdec:
    // 0x1efdec: 0xc07c42a  jal         func_1F10A8
label_1efdf0:
    if (ctx->pc == 0x1EFDF0u) {
        ctx->pc = 0x1EFDF0u;
            // 0x1efdf0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDF4u;
        goto label_1efdf4;
    }
    ctx->pc = 0x1EFDECu;
    SET_GPR_U32(ctx, 31, 0x1EFDF4u);
    ctx->pc = 0x1EFDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDECu;
            // 0x1efdf0: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F10A8u;
    if (runtime->hasFunction(0x1F10A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F10A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDF4u; }
        if (ctx->pc != 0x1EFDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_new_0x1f10a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFDF4u; }
        if (ctx->pc != 0x1EFDF4u) { return; }
    }
    ctx->pc = 0x1EFDF4u;
label_1efdf4:
    // 0x1efdf4: 0x1040ffb2  beqz        $v0, . + 4 + (-0x4E << 2)
label_1efdf8:
    if (ctx->pc == 0x1EFDF8u) {
        ctx->pc = 0x1EFDF8u;
            // 0x1efdf8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFDFCu;
        goto label_1efdfc;
    }
    ctx->pc = 0x1EFDF4u;
    {
        const bool branch_taken_0x1efdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFDF4u;
            // 0x1efdf8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdf4) {
            ctx->pc = 0x1EFCC0u;
            goto label_1efcc0;
        }
    }
    ctx->pc = 0x1EFDFCu;
label_1efdfc:
    // 0x1efdfc: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x1efdfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_1efe00:
    // 0x1efe00: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_1efe04:
    // 0x1efe04: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_1efe08:
    if (ctx->pc == 0x1EFE08u) {
        ctx->pc = 0x1EFE08u;
            // 0x1efe08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1EFE0Cu;
        goto label_1efe0c;
    }
    ctx->pc = 0x1EFE04u;
    {
        const bool branch_taken_0x1efe04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE04u;
            // 0x1efe08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe04) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFE0Cu;
label_1efe0c:
    // 0x1efe0c: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x1efe0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_1efe10:
    // 0x1efe10: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
label_1efe14:
    if (ctx->pc == 0x1EFE14u) {
        ctx->pc = 0x1EFE14u;
            // 0x1efe14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1EFE18u;
        goto label_1efe18;
    }
    ctx->pc = 0x1EFE10u;
    {
        const bool branch_taken_0x1efe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE10u;
            // 0x1efe14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe10) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFE18u;
label_1efe18:
    // 0x1efe18: 0x2673fffd  addiu       $s3, $s3, -0x3
    ctx->pc = 0x1efe18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
label_1efe1c:
    // 0x1efe1c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1efe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1efe20:
    // 0x1efe20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1efe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1efe24:
    // 0x1efe24: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1efe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1efe28:
    // 0x1efe28: 0x24423170  addiu       $v0, $v0, 0x3170
    ctx->pc = 0x1efe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12656));
label_1efe2c:
    // 0x1efe2c: 0x1000020a  b           . + 4 + (0x20A << 2)
label_1efe30:
    if (ctx->pc == 0x1EFE30u) {
        ctx->pc = 0x1EFE30u;
            // 0x1efe30: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFE34u;
        goto label_1efe34;
    }
    ctx->pc = 0x1EFE2Cu;
    {
        const bool branch_taken_0x1efe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE2Cu;
            // 0x1efe30: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe2c) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1EFE34u;
label_1efe34:
    // 0x1efe34: 0x52e00134  beql        $s7, $zero, . + 4 + (0x134 << 2)
label_1efe38:
    if (ctx->pc == 0x1EFE38u) {
        ctx->pc = 0x1EFE38u;
            // 0x1efe38: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFE3Cu;
        goto label_1efe3c;
    }
    ctx->pc = 0x1EFE34u;
    {
        const bool branch_taken_0x1efe34 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efe34) {
            ctx->pc = 0x1EFE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE34u;
            // 0x1efe38: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1EFE3Cu;
label_1efe3c:
    // 0x1efe3c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1efe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1efe40:
    // 0x1efe40: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1efe40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1efe44:
    // 0x1efe44: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1efe44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1efe48:
    // 0x1efe48: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1efe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1efe4c:
    // 0x1efe4c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1efe4cu;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1efe50:
    // 0x1efe50: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1efe50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1efe54:
    // 0x1efe54: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1efe54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1efe58:
    // 0x1efe58: 0x2e620020  sltiu       $v0, $s3, 0x20
    ctx->pc = 0x1efe58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_1efe5c:
    // 0x1efe5c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1efe60:
    if (ctx->pc == 0x1EFE60u) {
        ctx->pc = 0x1EFE60u;
            // 0x1efe60: 0x141827  nor         $v1, $zero, $s4 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
        ctx->pc = 0x1EFE64u;
        goto label_1efe64;
    }
    ctx->pc = 0x1EFE5Cu;
    {
        const bool branch_taken_0x1efe5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE5Cu;
            // 0x1efe60: 0x141827  nor         $v1, $zero, $s4 (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe5c) {
            ctx->pc = 0x1EFE34u;
            goto label_1efe34;
        }
    }
    ctx->pc = 0x1EFE64u;
label_1efe64:
    // 0x1efe64: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1efe64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
label_1efe68:
    // 0x1efe68: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1efe68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
label_1efe6c:
    // 0x1efe6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1efe6cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1efe70:
    // 0x1efe70: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x1efe70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1efe74:
    // 0x1efe74: 0x1462ff8a  bne         $v1, $v0, . + 4 + (-0x76 << 2)
label_1efe78:
    if (ctx->pc == 0x1EFE78u) {
        ctx->pc = 0x1EFE78u;
            // 0x1efe78: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1EFE7Cu;
        goto label_1efe7c;
    }
    ctx->pc = 0x1EFE74u;
    {
        const bool branch_taken_0x1efe74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE74u;
            // 0x1efe78: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe74) {
            ctx->pc = 0x1EFCA0u;
            goto label_1efca0;
        }
    }
    ctx->pc = 0x1EFE7Cu;
label_1efe7c:
    // 0x1efe7c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1efe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1efe80:
    // 0x1efe80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1efe80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1efe84:
    // 0x1efe84: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1efe84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
label_1efe88:
    // 0x1efe88: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1efe88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1efe8c:
    // 0x1efe8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1efe8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1efe90:
    // 0x1efe90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1efe94:
    if (ctx->pc == 0x1EFE94u) {
        ctx->pc = 0x1EFE94u;
            // 0x1efe94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE98u;
        goto label_1efe98;
    }
    ctx->pc = 0x1EFE90u;
    {
        const bool branch_taken_0x1efe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFE90u;
            // 0x1efe94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe90) {
            ctx->pc = 0x1EFEA8u;
            goto label_1efea8;
        }
    }
    ctx->pc = 0x1EFE98u;
label_1efe98:
    // 0x1efe98: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1efe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1efe9c:
    // 0x1efe9c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1efe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1efea0:
    // 0x1efea0: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
label_1efea4:
    if (ctx->pc == 0x1EFEA4u) {
        ctx->pc = 0x1EFEA4u;
            // 0x1efea4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x1EFEA8u;
        goto label_1efea8;
    }
    ctx->pc = 0x1EFEA0u;
    {
        const bool branch_taken_0x1efea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEA0u;
            // 0x1efea4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efea0) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFEA8u;
label_1efea8:
    // 0x1efea8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
label_1efeac:
    if (ctx->pc == 0x1EFEACu) {
        ctx->pc = 0x1EFEACu;
            // 0x1efeac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1EFEB0u;
        goto label_1efeb0;
    }
    ctx->pc = 0x1EFEA8u;
    {
        const bool branch_taken_0x1efea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEA8u;
            // 0x1efeac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efea8) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFEB0u;
label_1efeb0:
    // 0x1efeb0: 0x52e0ff80  beql        $s7, $zero, . + 4 + (-0x80 << 2)
label_1efeb4:
    if (ctx->pc == 0x1EFEB4u) {
        ctx->pc = 0x1EFEB4u;
            // 0x1efeb4: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFEB8u;
        goto label_1efeb8;
    }
    ctx->pc = 0x1EFEB0u;
    {
        const bool branch_taken_0x1efeb0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efeb0) {
            ctx->pc = 0x1EFEB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEB0u;
            // 0x1efeb4: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFCB4u;
            goto label_1efcb4;
        }
    }
    ctx->pc = 0x1EFEB8u;
label_1efeb8:
    // 0x1efeb8: 0x56400033  bnel        $s2, $zero, . + 4 + (0x33 << 2)
label_1efebc:
    if (ctx->pc == 0x1EFEBCu) {
        ctx->pc = 0x1EFEBCu;
            // 0x1efebc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1EFEC0u;
        goto label_1efec0;
    }
    ctx->pc = 0x1EFEB8u;
    {
        const bool branch_taken_0x1efeb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efeb8) {
            ctx->pc = 0x1EFEBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEB8u;
            // 0x1efebc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF88u;
            goto label_1eff88;
        }
    }
    ctx->pc = 0x1EFEC0u;
label_1efec0:
    // 0x1efec0: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1efec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1efec4:
    // 0x1efec4: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
label_1efec8:
    if (ctx->pc == 0x1EFEC8u) {
        ctx->pc = 0x1EFECCu;
        goto label_1efecc;
    }
    ctx->pc = 0x1EFEC4u;
    {
        const bool branch_taken_0x1efec4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1efec4) {
            ctx->pc = 0x1EFEFCu;
            goto label_1efefc;
        }
    }
    ctx->pc = 0x1EFECCu;
label_1efecc:
    // 0x1efecc: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1efeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1efed0:
    // 0x1efed0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1efed4:
    // 0x1efed4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1efed8:
    if (ctx->pc == 0x1EFED8u) {
        ctx->pc = 0x1EFEDCu;
        goto label_1efedc;
    }
    ctx->pc = 0x1EFED4u;
    {
        const bool branch_taken_0x1efed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1efed4) {
            ctx->pc = 0x1EFEFCu;
            goto label_1efefc;
        }
    }
    ctx->pc = 0x1EFEDCu;
label_1efedc:
    // 0x1efedc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1efedcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1efee0:
    // 0x1efee0: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1efee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1efee4:
    // 0x1efee4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1efee8:
    if (ctx->pc == 0x1EFEE8u) {
        ctx->pc = 0x1EFEE8u;
            // 0x1efee8: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x1EFEECu;
        goto label_1efeec;
    }
    ctx->pc = 0x1EFEE4u;
    {
        const bool branch_taken_0x1efee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efee4) {
            ctx->pc = 0x1EFEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEE4u;
            // 0x1efee8: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFEF8u;
            goto label_1efef8;
        }
    }
    ctx->pc = 0x1EFEECu;
label_1efeec:
    // 0x1efeec: 0x7e9023  subu        $s2, $v1, $fp
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1efef0:
    // 0x1efef0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1efef4:
    if (ctx->pc == 0x1EFEF4u) {
        ctx->pc = 0x1EFEF4u;
            // 0x1efef4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1EFEF8u;
        goto label_1efef8;
    }
    ctx->pc = 0x1EFEF0u;
    {
        const bool branch_taken_0x1efef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEF0u;
            // 0x1efef4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efef0) {
            ctx->pc = 0x1EFEFCu;
            goto label_1efefc;
        }
    }
    ctx->pc = 0x1EFEF8u;
label_1efef8:
    // 0x1efef8: 0x5e9023  subu        $s2, $v0, $fp
    ctx->pc = 0x1efef8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1efefc:
    // 0x1efefc: 0x56400022  bnel        $s2, $zero, . + 4 + (0x22 << 2)
label_1eff00:
    if (ctx->pc == 0x1EFF00u) {
        ctx->pc = 0x1EFF00u;
            // 0x1eff00: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1EFF04u;
        goto label_1eff04;
    }
    ctx->pc = 0x1EFEFCu;
    {
        const bool branch_taken_0x1efefc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1efefc) {
            ctx->pc = 0x1EFF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFEFCu;
            // 0x1eff00: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF88u;
            goto label_1eff88;
        }
    }
    ctx->pc = 0x1EFF04u;
label_1eff04:
    // 0x1eff04: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1eff04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1eff08:
    // 0x1eff08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eff08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eff0c:
    // 0x1eff0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1eff0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1eff10:
    // 0x1eff10: 0xc07c638  jal         func_1F18E0
label_1eff14:
    if (ctx->pc == 0x1EFF14u) {
        ctx->pc = 0x1EFF14u;
            // 0x1eff14: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1EFF18u;
        goto label_1eff18;
    }
    ctx->pc = 0x1EFF10u;
    SET_GPR_U32(ctx, 31, 0x1EFF18u);
    ctx->pc = 0x1EFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF10u;
            // 0x1eff14: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF18u; }
        if (ctx->pc != 0x1EFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF18u; }
        if (ctx->pc != 0x1EFF18u) { return; }
    }
    ctx->pc = 0x1EFF18u;
label_1eff18:
    // 0x1eff18: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1eff18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1eff1c:
    // 0x1eff1c: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x1eff1cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1eff20:
    // 0x1eff20: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1eff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eff24:
    // 0x1eff24: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1eff24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eff28:
    // 0x1eff28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eff2c:
    if (ctx->pc == 0x1EFF2Cu) {
        ctx->pc = 0x1EFF2Cu;
            // 0x1eff2c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x1EFF30u;
        goto label_1eff30;
    }
    ctx->pc = 0x1EFF28u;
    {
        const bool branch_taken_0x1eff28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff28) {
            ctx->pc = 0x1EFF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF28u;
            // 0x1eff2c: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF3Cu;
            goto label_1eff3c;
        }
    }
    ctx->pc = 0x1EFF30u;
label_1eff30:
    // 0x1eff30: 0x7e9023  subu        $s2, $v1, $fp
    ctx->pc = 0x1eff30u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1eff34:
    // 0x1eff34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eff38:
    if (ctx->pc == 0x1EFF38u) {
        ctx->pc = 0x1EFF38u;
            // 0x1eff38: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1EFF3Cu;
        goto label_1eff3c;
    }
    ctx->pc = 0x1EFF34u;
    {
        const bool branch_taken_0x1eff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF34u;
            // 0x1eff38: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff34) {
            ctx->pc = 0x1EFF40u;
            goto label_1eff40;
        }
    }
    ctx->pc = 0x1EFF3Cu;
label_1eff3c:
    // 0x1eff3c: 0x5e9023  subu        $s2, $v0, $fp
    ctx->pc = 0x1eff3cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1eff40:
    // 0x1eff40: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1eff40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1eff44:
    // 0x1eff44: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
label_1eff48:
    if (ctx->pc == 0x1EFF48u) {
        ctx->pc = 0x1EFF4Cu;
        goto label_1eff4c;
    }
    ctx->pc = 0x1EFF44u;
    {
        const bool branch_taken_0x1eff44 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eff44) {
            ctx->pc = 0x1EFF7Cu;
            goto label_1eff7c;
        }
    }
    ctx->pc = 0x1EFF4Cu;
label_1eff4c:
    // 0x1eff4c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1eff4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1eff50:
    // 0x1eff50: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1eff50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1eff54:
    // 0x1eff54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1eff58:
    if (ctx->pc == 0x1EFF58u) {
        ctx->pc = 0x1EFF5Cu;
        goto label_1eff5c;
    }
    ctx->pc = 0x1EFF54u;
    {
        const bool branch_taken_0x1eff54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1eff54) {
            ctx->pc = 0x1EFF7Cu;
            goto label_1eff7c;
        }
    }
    ctx->pc = 0x1EFF5Cu;
label_1eff5c:
    // 0x1eff5c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1eff5cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eff60:
    // 0x1eff60: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1eff60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1eff64:
    // 0x1eff64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1eff68:
    if (ctx->pc == 0x1EFF68u) {
        ctx->pc = 0x1EFF68u;
            // 0x1eff68: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x1EFF6Cu;
        goto label_1eff6c;
    }
    ctx->pc = 0x1EFF64u;
    {
        const bool branch_taken_0x1eff64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff64) {
            ctx->pc = 0x1EFF68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF64u;
            // 0x1eff68: 0x8e220030  lw          $v0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFF78u;
            goto label_1eff78;
        }
    }
    ctx->pc = 0x1EFF6Cu;
label_1eff6c:
    // 0x1eff6c: 0x7e9023  subu        $s2, $v1, $fp
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1eff70:
    // 0x1eff70: 0x10000002  b           . + 4 + (0x2 << 2)
label_1eff74:
    if (ctx->pc == 0x1EFF74u) {
        ctx->pc = 0x1EFF74u;
            // 0x1eff74: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1EFF78u;
        goto label_1eff78;
    }
    ctx->pc = 0x1EFF70u;
    {
        const bool branch_taken_0x1eff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF70u;
            // 0x1eff74: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff70) {
            ctx->pc = 0x1EFF7Cu;
            goto label_1eff7c;
        }
    }
    ctx->pc = 0x1EFF78u;
label_1eff78:
    // 0x1eff78: 0x5e9023  subu        $s2, $v0, $fp
    ctx->pc = 0x1eff78u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1eff7c:
    // 0x1eff7c: 0x524000e2  beql        $s2, $zero, . + 4 + (0xE2 << 2)
label_1eff80:
    if (ctx->pc == 0x1EFF80u) {
        ctx->pc = 0x1EFF80u;
            // 0x1eff80: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFF84u;
        goto label_1eff84;
    }
    ctx->pc = 0x1EFF7Cu;
    {
        const bool branch_taken_0x1eff7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eff7c) {
            ctx->pc = 0x1EFF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF7Cu;
            // 0x1eff80: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1EFF84u;
label_1eff84:
    // 0x1eff84: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1eff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1eff88:
    // 0x1eff88: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1eff88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1eff8c:
    // 0x1eff8c: 0x2f0102b  sltu        $v0, $s7, $s0
    ctx->pc = 0x1eff8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1eff90:
    // 0x1eff90: 0x2e2800b  movn        $s0, $s7, $v0
    ctx->pc = 0x1eff90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 23));
label_1eff94:
    // 0x1eff94: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x1eff94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1eff98:
    // 0x1eff98: 0x242800b  movn        $s0, $s2, $v0
    ctx->pc = 0x1eff98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 18));
label_1eff9c:
    // 0x1eff9c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1eff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1effa0:
    // 0x1effa0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1effa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1effa4:
    // 0x1effa4: 0xc04ed22  jal         func_13B488
label_1effa8:
    if (ctx->pc == 0x1EFFA8u) {
        ctx->pc = 0x1EFFA8u;
            // 0x1effa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFACu;
        goto label_1effac;
    }
    ctx->pc = 0x1EFFA4u;
    SET_GPR_U32(ctx, 31, 0x1EFFACu);
    ctx->pc = 0x1EFFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFA4u;
            // 0x1effa8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFACu; }
        if (ctx->pc != 0x1EFFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFACu; }
        if (ctx->pc != 0x1EFFACu) { return; }
    }
    ctx->pc = 0x1EFFACu;
label_1effac:
    // 0x1effac: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1effb0:
    // 0x1effb0: 0x2f0b823  subu        $s7, $s7, $s0
    ctx->pc = 0x1effb0u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1effb4:
    // 0x1effb4: 0x3d0f021  addu        $fp, $fp, $s0
    ctx->pc = 0x1effb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_1effb8:
    // 0x1effb8: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1effbc:
    // 0x1effbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1effbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1effc0:
    // 0x1effc0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1effc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1effc4:
    // 0x1effc4: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
label_1effc8:
    if (ctx->pc == 0x1EFFC8u) {
        ctx->pc = 0x1EFFC8u;
            // 0x1effc8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x1EFFCCu;
        goto label_1effcc;
    }
    ctx->pc = 0x1EFFC4u;
    {
        const bool branch_taken_0x1effc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFC4u;
            // 0x1effc8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc4) {
            ctx->pc = 0x1EFD08u;
            goto label_1efd08;
        }
    }
    ctx->pc = 0x1EFFCCu;
label_1effcc:
    // 0x1effcc: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1effccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1effd0:
    // 0x1effd0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1effd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1effd4:
    // 0x1effd4: 0x1000ff7a  b           . + 4 + (-0x86 << 2)
label_1effd8:
    if (ctx->pc == 0x1EFFD8u) {
        ctx->pc = 0x1EFFD8u;
            // 0x1effd8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x1EFFDCu;
        goto label_1effdc;
    }
    ctx->pc = 0x1EFFD4u;
    {
        const bool branch_taken_0x1effd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFD4u;
            // 0x1effd8: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effd4) {
            ctx->pc = 0x1EFDC0u;
            goto label_1efdc0;
        }
    }
    ctx->pc = 0x1EFFDCu;
label_1effdc:
    // 0x1effdc: 0x52e000ca  beql        $s7, $zero, . + 4 + (0xCA << 2)
label_1effe0:
    if (ctx->pc == 0x1EFFE0u) {
        ctx->pc = 0x1EFFE0u;
            // 0x1effe0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1EFFE4u;
        goto label_1effe4;
    }
    ctx->pc = 0x1EFFDCu;
    {
        const bool branch_taken_0x1effdc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1effdc) {
            ctx->pc = 0x1EFFE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFDCu;
            // 0x1effe0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1EFFE4u;
label_1effe4:
    // 0x1effe4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1effe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1effe8:
    // 0x1effe8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1effe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1effec:
    // 0x1effec: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1effecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1efff0:
    // 0x1efff0: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1efff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1efff4:
    // 0x1efff4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1efff4u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1efff8:
    // 0x1efff8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1efff8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1efffc:
    // 0x1efffc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f0000:
    // 0x1f0000: 0x2e62000e  sltiu       $v0, $s3, 0xE
    ctx->pc = 0x1f0000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1f0004:
    // 0x1f0004: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f0008:
    if (ctx->pc == 0x1F0008u) {
        ctx->pc = 0x1F000Cu;
        goto label_1f000c;
    }
    ctx->pc = 0x1F0004u;
    {
        const bool branch_taken_0x1f0004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0004) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1F000Cu;
label_1f000c:
    // 0x1f000c: 0x14803c  dsll32      $s0, $s4, 0
    ctx->pc = 0x1f000cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 0));
label_1f0010:
    // 0x1f0010: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1f0010u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_1f0014:
    // 0x1f0014: 0x32103fff  andi        $s0, $s0, 0x3FFF
    ctx->pc = 0x1f0014u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)16383u)));
label_1f0018:
    // 0x1f0018: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x1f0018u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
label_1f001c:
    // 0x1f001c: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x1f001cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_1f0020:
    // 0x1f0020: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f0024:
    if (ctx->pc == 0x1F0024u) {
        ctx->pc = 0x1F0024u;
            // 0x1f0024: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x1F0028u;
        goto label_1f0028;
    }
    ctx->pc = 0x1F0020u;
    {
        const bool branch_taken_0x1f0020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0020u;
            // 0x1f0024: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0020) {
            ctx->pc = 0x1F003Cu;
            goto label_1f003c;
        }
    }
    ctx->pc = 0x1F0028u;
label_1f0028:
    // 0x1f0028: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1f0028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f002c:
    // 0x1f002c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f002cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
label_1f0030:
    // 0x1f0030: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x1f0030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_1f0034:
    // 0x1f0034: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f0038:
    if (ctx->pc == 0x1F0038u) {
        ctx->pc = 0x1F0038u;
            // 0x1f0038: 0x3203001f  andi        $v1, $s0, 0x1F (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
        ctx->pc = 0x1F003Cu;
        goto label_1f003c;
    }
    ctx->pc = 0x1F0034u;
    {
        const bool branch_taken_0x1f0034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0034u;
            // 0x1f0038: 0x3203001f  andi        $v1, $s0, 0x1F (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0034) {
            ctx->pc = 0x1F0054u;
            goto label_1f0054;
        }
    }
    ctx->pc = 0x1F003Cu;
label_1f003c:
    // 0x1f003c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f003cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f0040:
    // 0x1f0040: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f0040u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f0044:
    // 0x1f0044: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0048:
    // 0x1f0048: 0x244231a8  addiu       $v0, $v0, 0x31A8
    ctx->pc = 0x1f0048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12712));
label_1f004c:
    // 0x1f004c: 0x10000182  b           . + 4 + (0x182 << 2)
label_1f0050:
    if (ctx->pc == 0x1F0050u) {
        ctx->pc = 0x1F0050u;
            // 0x1f0050: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1F0054u;
        goto label_1f0054;
    }
    ctx->pc = 0x1F004Cu;
    {
        const bool branch_taken_0x1f004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F004Cu;
            // 0x1f0050: 0xaea20020  sw          $v0, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f004c) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1F0054u;
label_1f0054:
    // 0x1f0054: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f0058:
    // 0x1f0058: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f0058u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
label_1f005c:
    // 0x1f005c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1f005cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f0060:
    // 0x1f0060: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x1f0060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_1f0064:
    // 0x1f0064: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1f0064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f0068:
    // 0x1f0068: 0x26050102  addiu       $a1, $s0, 0x102
    ctx->pc = 0x1f0068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 258));
label_1f006c:
    // 0x1f006c: 0x40f809  jalr        $v0
label_1f0070:
    if (ctx->pc == 0x1F0070u) {
        ctx->pc = 0x1F0070u;
            // 0x1f0070: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1F0074u;
        goto label_1f0074;
    }
    ctx->pc = 0x1F006Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0074u);
        ctx->pc = 0x1F0070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F006Cu;
            // 0x1f0070: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0074u; }
            if (ctx->pc != 0x1F0074u) { return; }
        }
    }
    ctx->pc = 0x1F0074u;
label_1f0074:
    // 0x1f0074: 0x1040ff12  beqz        $v0, . + 4 + (-0xEE << 2)
label_1f0078:
    if (ctx->pc == 0x1F0078u) {
        ctx->pc = 0x1F0078u;
            // 0x1f0078: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x1F007Cu;
        goto label_1f007c;
    }
    ctx->pc = 0x1F0074u;
    {
        const bool branch_taken_0x1f0074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0074u;
            // 0x1f0078: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0074) {
            ctx->pc = 0x1EFCC0u;
            goto label_1efcc0;
        }
    }
    ctx->pc = 0x1F007Cu;
label_1f007c:
    // 0x1f007c: 0x14a3ba  dsrl        $s4, $s4, 14
    ctx->pc = 0x1f007cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 14);
label_1f0080:
    // 0x1f0080: 0x2673fff2  addiu       $s3, $s3, -0xE
    ctx->pc = 0x1f0080u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967282));
label_1f0084:
    // 0x1f0084: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1f0084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1f0088:
    // 0x1f0088: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f008c:
    // 0x1f008c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f008cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f0090:
    // 0x1f0090: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f0090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f0094:
    // 0x1f0094: 0x31a82  srl         $v1, $v1, 10
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
label_1f0098:
    // 0x1f0098: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f0098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1f009c:
    // 0x1f009c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f00a0:
    // 0x1f00a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f00a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f00a4:
    // 0x1f00a4: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
label_1f00a8:
    if (ctx->pc == 0x1F00A8u) {
        ctx->pc = 0x1F00A8u;
            // 0x1f00a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1F00ACu;
        goto label_1f00ac;
    }
    ctx->pc = 0x1F00A4u;
    {
        const bool branch_taken_0x1f00a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00a4) {
            ctx->pc = 0x1F00A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00A4u;
            // 0x1f00a8: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0140u;
            goto label_1f0140;
        }
    }
    ctx->pc = 0x1F00ACu;
label_1f00ac:
    // 0x1f00ac: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f00acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f00b0:
    // 0x1f00b0: 0x24463120  addiu       $a2, $v0, 0x3120
    ctx->pc = 0x1f00b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1f00b4:
    // 0x1f00b4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1f00b8:
    if (ctx->pc == 0x1F00B8u) {
        ctx->pc = 0x1F00B8u;
            // 0x1f00b8: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1F00BCu;
        goto label_1f00bc;
    }
    ctx->pc = 0x1F00B4u;
    {
        const bool branch_taken_0x1f00b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00B4u;
            // 0x1f00b8: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00b4) {
            ctx->pc = 0x1F00E0u;
            goto label_1f00e0;
        }
    }
    ctx->pc = 0x1F00BCu;
label_1f00bc:
    // 0x1f00bc: 0x52e00092  beql        $s7, $zero, . + 4 + (0x92 << 2)
label_1f00c0:
    if (ctx->pc == 0x1F00C0u) {
        ctx->pc = 0x1F00C0u;
            // 0x1f00c0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1F00C4u;
        goto label_1f00c4;
    }
    ctx->pc = 0x1F00BCu;
    {
        const bool branch_taken_0x1f00bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f00bc) {
            ctx->pc = 0x1F00C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00BCu;
            // 0x1f00c0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1F00C4u;
label_1f00c4:
    // 0x1f00c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f00c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1f00c8:
    // 0x1f00c8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1f00c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1f00cc:
    // 0x1f00cc: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1f00ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1f00d0:
    // 0x1f00d0: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1f00d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1f00d4:
    // 0x1f00d4: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f00d4u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1f00d8:
    // 0x1f00d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1f00d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1f00dc:
    // 0x1f00dc: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f00dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f00e0:
    // 0x1f00e0: 0x2e620003  sltiu       $v0, $s3, 0x3
    ctx->pc = 0x1f00e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1f00e4:
    // 0x1f00e4: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1f00e8:
    if (ctx->pc == 0x1F00E8u) {
        ctx->pc = 0x1F00ECu;
        goto label_1f00ec;
    }
    ctx->pc = 0x1F00E4u;
    {
        const bool branch_taken_0x1f00e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f00e4) {
            ctx->pc = 0x1F00BCu;
            goto label_1f00bc;
        }
    }
    ctx->pc = 0x1F00ECu;
label_1f00ec:
    // 0x1f00ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1f00ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f00f0:
    // 0x1f00f0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1f00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1f00f4:
    // 0x1f00f4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f00f8:
    // 0x1f00f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f00fc:
    // 0x1f00fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f0100:
    // 0x1f0100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0104:
    // 0x1f0104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f0108:
    // 0x1f0108: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x1f0108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_1f010c:
    // 0x1f010c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f010cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1f0110:
    // 0x1f0110: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1f0110u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
label_1f0114:
    // 0x1f0114: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f0114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f0118:
    // 0x1f0118: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f0118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1f011c:
    // 0x1f011c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1f011cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1f0120:
    // 0x1f0120: 0x14a0fa  dsrl        $s4, $s4, 3
    ctx->pc = 0x1f0120u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 3);
label_1f0124:
    // 0x1f0124: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f0124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f0128:
    // 0x1f0128: 0x21282  srl         $v0, $v0, 10
    ctx->pc = 0x1f0128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
label_1f012c:
    // 0x1f012c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1f0130:
    // 0x1f0130: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x1f0130u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0134:
    // 0x1f0134: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_1f0138:
    if (ctx->pc == 0x1F0138u) {
        ctx->pc = 0x1F0138u;
            // 0x1f0138: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->pc = 0x1F013Cu;
        goto label_1f013c;
    }
    ctx->pc = 0x1F0134u;
    {
        const bool branch_taken_0x1f0134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0134u;
            // 0x1f0138: 0x2673fffd  addiu       $s3, $s3, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0134) {
            ctx->pc = 0x1F00E0u;
            goto label_1f00e0;
        }
    }
    ctx->pc = 0x1F013Cu;
label_1f013c:
    // 0x1f013c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f0140:
    // 0x1f0140: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x1f0140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1f0144:
    // 0x1f0144: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1f0148:
    if (ctx->pc == 0x1F0148u) {
        ctx->pc = 0x1F0148u;
            // 0x1f0148: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1F014Cu;
        goto label_1f014c;
    }
    ctx->pc = 0x1F0144u;
    {
        const bool branch_taken_0x1f0144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0144u;
            // 0x1f0148: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0144) {
            ctx->pc = 0x1F0190u;
            goto label_1f0190;
        }
    }
    ctx->pc = 0x1F014Cu;
label_1f014c:
    // 0x1f014c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0150:
    // 0x1f0150: 0x24463120  addiu       $a2, $v0, 0x3120
    ctx->pc = 0x1f0150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12576));
label_1f0154:
    // 0x1f0154: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x1f0154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1f0158:
    // 0x1f0158: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f0158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f015c:
    // 0x1f015c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f015cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f0160:
    // 0x1f0160: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1f0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1f0164:
    // 0x1f0164: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f0164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0168:
    // 0x1f0168: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1f0168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f016c:
    // 0x1f016c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f0170:
    // 0x1f0170: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f0170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1f0174:
    // 0x1f0174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f0174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f0178:
    // 0x1f0178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f0178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f017c:
    // 0x1f017c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1f017cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1f0180:
    // 0x1f0180: 0x2c630013  sltiu       $v1, $v1, 0x13
    ctx->pc = 0x1f0180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_1f0184:
    // 0x1f0184: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
label_1f0188:
    if (ctx->pc == 0x1F0188u) {
        ctx->pc = 0x1F0188u;
            // 0x1f0188: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x1F018Cu;
        goto label_1f018c;
    }
    ctx->pc = 0x1F0184u;
    {
        const bool branch_taken_0x1f0184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0184) {
            ctx->pc = 0x1F0188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0184u;
            // 0x1f0188: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F015Cu;
            goto label_1f015c;
        }
    }
    ctx->pc = 0x1F018Cu;
label_1f018c:
    // 0x1f018c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f0190:
    // 0x1f0190: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1f0190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1f0194:
    // 0x1f0194: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1f0194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f0198:
    // 0x1f0198: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1f0198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1f019c:
    // 0x1f019c: 0x26260014  addiu       $a2, $s1, 0x14
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_1f01a0:
    // 0x1f01a0: 0x8e270028  lw          $a3, 0x28($s1)
    ctx->pc = 0x1f01a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1f01a4:
    // 0x1f01a4: 0xc07c362  jal         func_1F0D88
label_1f01a8:
    if (ctx->pc == 0x1F01A8u) {
        ctx->pc = 0x1F01A8u;
            // 0x1f01a8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F01ACu;
        goto label_1f01ac;
    }
    ctx->pc = 0x1F01A4u;
    SET_GPR_U32(ctx, 31, 0x1F01ACu);
    ctx->pc = 0x1F01A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01A4u;
            // 0x1f01a8: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0D88u;
    if (runtime->hasFunction(0x1F0D88u)) {
        auto targetFn = runtime->lookupFunction(0x1F0D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01ACu; }
        if (ctx->pc != 0x1F01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_bits_0x1f0d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F01ACu; }
        if (ctx->pc != 0x1F01ACu) { return; }
    }
    ctx->pc = 0x1F01ACu;
label_1f01ac:
    // 0x1f01ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f01acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f01b0:
    // 0x1f01b0: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_1f01b4:
    if (ctx->pc == 0x1F01B4u) {
        ctx->pc = 0x1F01B4u;
            // 0x1f01b4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x1F01B8u;
        goto label_1f01b8;
    }
    ctx->pc = 0x1F01B0u;
    {
        const bool branch_taken_0x1f01b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f01b0) {
            ctx->pc = 0x1F01B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01B0u;
            // 0x1f01b4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F01E0u;
            goto label_1f01e0;
        }
    }
    ctx->pc = 0x1F01B8u;
label_1f01b8:
    // 0x1f01b8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f01b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f01bc:
    // 0x1f01bc: 0x16020051  bne         $s0, $v0, . + 4 + (0x51 << 2)
label_1f01c0:
    if (ctx->pc == 0x1F01C0u) {
        ctx->pc = 0x1F01C0u;
            // 0x1f01c0: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x1F01C4u;
        goto label_1f01c4;
    }
    ctx->pc = 0x1F01BCu;
    {
        const bool branch_taken_0x1f01bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F01C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01BCu;
            // 0x1f01c0: 0xafb00030  sw          $s0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01bc) {
            ctx->pc = 0x1F0304u;
            goto label_1f0304;
        }
    }
    ctx->pc = 0x1F01C4u;
label_1f01c4:
    // 0x1f01c4: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1f01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_1f01c8:
    // 0x1f01c8: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1f01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f01cc:
    // 0x1f01cc: 0x40f809  jalr        $v0
label_1f01d0:
    if (ctx->pc == 0x1F01D0u) {
        ctx->pc = 0x1F01D0u;
            // 0x1f01d0: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1F01D4u;
        goto label_1f01d4;
    }
    ctx->pc = 0x1F01CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F01D4u);
        ctx->pc = 0x1F01D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01CCu;
            // 0x1f01d0: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F01D4u; }
            if (ctx->pc != 0x1F01D4u) { return; }
        }
    }
    ctx->pc = 0x1F01D4u;
label_1f01d4:
    // 0x1f01d4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f01d8:
    // 0x1f01d8: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1f01dc:
    if (ctx->pc == 0x1F01DCu) {
        ctx->pc = 0x1F01DCu;
            // 0x1f01dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F01E0u;
        goto label_1f01e0;
    }
    ctx->pc = 0x1F01D8u;
    {
        const bool branch_taken_0x1f01d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F01D8u;
            // 0x1f01dc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01d8) {
            ctx->pc = 0x1F0304u;
            goto label_1f0304;
        }
    }
    ctx->pc = 0x1F01E0u;
label_1f01e0:
    // 0x1f01e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1f01e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1f01e4:
    // 0x1f01e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f01e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f01e8:
    // 0x1f01e8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f01e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f01ec:
    // 0x1f01ec: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x1f01ecu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
label_1f01f0:
    // 0x1f01f0: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f01f4:
    // 0x1f01f4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f01f4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31u)));
label_1f01f8:
    // 0x1f01f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f01f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f01fc:
    // 0x1f01fc: 0x24420102  addiu       $v0, $v0, 0x102
    ctx->pc = 0x1f01fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
label_1f0200:
    // 0x1f0200: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f0200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f0204:
    // 0x1f0204: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1f0204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0208:
    // 0x1f0208: 0x50600092  beql        $v1, $zero, . + 4 + (0x92 << 2)
label_1f020c:
    if (ctx->pc == 0x1F020Cu) {
        ctx->pc = 0x1F020Cu;
            // 0x1f020c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->pc = 0x1F0210u;
        goto label_1f0210;
    }
    ctx->pc = 0x1F0208u;
    {
        const bool branch_taken_0x1f0208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0208) {
            ctx->pc = 0x1F020Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0208u;
            // 0x1f020c: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0454u;
            goto label_1f0454;
        }
    }
    ctx->pc = 0x1F0210u;
label_1f0210:
    // 0x1f0210: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0214:
    // 0x1f0214: 0x244abe50  addiu       $t2, $v0, -0x41B0
    ctx->pc = 0x1f0214u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_1f0218:
    // 0x1f0218: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1f0218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1f021c:
    // 0x1f021c: 0x24090010  addiu       $t1, $zero, 0x10
    ctx->pc = 0x1f021cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1f0220:
    // 0x1f0220: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f0220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1f0224:
    // 0x1f0224: 0x245231d0  addiu       $s2, $v0, 0x31D0
    ctx->pc = 0x1f0224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 12752));
label_1f0228:
    // 0x1f0228: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1f0228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1f022c:
    // 0x1f022c: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x1f022cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1f0230:
    // 0x1f0230: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f0234:
    if (ctx->pc == 0x1F0234u) {
        ctx->pc = 0x1F0238u;
        goto label_1f0238;
    }
    ctx->pc = 0x1F0230u;
    {
        const bool branch_taken_0x1f0230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0230) {
            ctx->pc = 0x1F0264u;
            goto label_1f0264;
        }
    }
    ctx->pc = 0x1F0238u;
label_1f0238:
    // 0x1f0238: 0x52e00033  beql        $s7, $zero, . + 4 + (0x33 << 2)
label_1f023c:
    if (ctx->pc == 0x1F023Cu) {
        ctx->pc = 0x1F023Cu;
            // 0x1f023c: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1F0240u;
        goto label_1f0240;
    }
    ctx->pc = 0x1F0238u;
    {
        const bool branch_taken_0x1f0238 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0238) {
            ctx->pc = 0x1F023Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0238u;
            // 0x1f023c: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1F0240u;
label_1f0240:
    // 0x1f0240: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f0240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1f0244:
    // 0x1f0244: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1f0244u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1f0248:
    // 0x1f0248: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1f0248u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1f024c:
    // 0x1f024c: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1f024cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1f0250:
    // 0x1f0250: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f0250u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1f0254:
    // 0x1f0254: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f0258:
    // 0x1f0258: 0x270102b  sltu        $v0, $s3, $s0
    ctx->pc = 0x1f0258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1f025c:
    // 0x1f025c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1f0260:
    if (ctx->pc == 0x1F0260u) {
        ctx->pc = 0x1F0260u;
            // 0x1f0260: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x1F0264u;
        goto label_1f0264;
    }
    ctx->pc = 0x1F025Cu;
    {
        const bool branch_taken_0x1f025c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F025Cu;
            // 0x1f0260: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f025c) {
            ctx->pc = 0x1F0238u;
            goto label_1f0238;
        }
    }
    ctx->pc = 0x1F0264u;
label_1f0264:
    // 0x1f0264: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1f0264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_1f0268:
    // 0x1f0268: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f0268u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1f026c:
    // 0x1f026c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f026cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f0270:
    // 0x1f0270: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f0270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1f0274:
    // 0x1f0274: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f0274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0278:
    // 0x1f0278: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f0278u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1f027c:
    // 0x1f027c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1f027cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1f0280:
    // 0x1f0280: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1f0280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1f0284:
    // 0x1f0284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f0284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f0288:
    // 0x1f0288: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x1f0288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f028c:
    // 0x1f028c: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x1f028cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1f0290:
    // 0x1f0290: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f0294:
    if (ctx->pc == 0x1F0294u) {
        ctx->pc = 0x1F0294u;
            // 0x1f0294: 0x90700001  lbu         $s0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->pc = 0x1F0298u;
        goto label_1f0298;
    }
    ctx->pc = 0x1F0290u;
    {
        const bool branch_taken_0x1f0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0290u;
            // 0x1f0294: 0x90700001  lbu         $s0, 0x1($v1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0290) {
            ctx->pc = 0x1F02C0u;
            goto label_1f02c0;
        }
    }
    ctx->pc = 0x1F0298u;
label_1f0298:
    // 0x1f0298: 0x214a016  dsrlv       $s4, $s4, $s0
    ctx->pc = 0x1f0298u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_1f029c:
    // 0x1f029c: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x1f029cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1f02a0:
    // 0x1f02a0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1f02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f02a4:
    // 0x1f02a4: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1f02a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f02a8:
    // 0x1f02a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f02a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f02ac:
    // 0x1f02ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f02acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1f02b0:
    // 0x1f02b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f02b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f02b4:
    // 0x1f02b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1f02b8:
    // 0x1f02b8: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1f02bc:
    if (ctx->pc == 0x1F02BCu) {
        ctx->pc = 0x1F02BCu;
            // 0x1f02bc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1F02C0u;
        goto label_1f02c0;
    }
    ctx->pc = 0x1F02B8u;
    {
        const bool branch_taken_0x1f02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02B8u;
            // 0x1f02bc: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02b8) {
            ctx->pc = 0x1F0428u;
            goto label_1f0428;
        }
    }
    ctx->pc = 0x1F02C0u;
label_1f02c0:
    // 0x1f02c0: 0x24a4fff2  addiu       $a0, $a1, -0xE
    ctx->pc = 0x1f02c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967282));
label_1f02c4:
    // 0x1f02c4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f02c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1f02c8:
    // 0x1f02c8: 0x38a30012  xori        $v1, $a1, 0x12
    ctx->pc = 0x1f02c8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)18u)));
label_1f02cc:
    // 0x1f02cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f02ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f02d0:
    // 0x1f02d0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x1f02d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_1f02d4:
    // 0x1f02d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1f02d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f02d8:
    // 0x1f02d8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1f02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f02dc:
    // 0x1f02dc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1f02dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f02e0:
    // 0x1f02e0: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x1f02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1f02e4:
    // 0x1f02e4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f02e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f02e8:
    // 0x1f02e8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1f02ec:
    if (ctx->pc == 0x1F02ECu) {
        ctx->pc = 0x1F02ECu;
            // 0x1f02ec: 0x83400b  movn        $t0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
        ctx->pc = 0x1F02F0u;
        goto label_1f02f0;
    }
    ctx->pc = 0x1F02E8u;
    {
        const bool branch_taken_0x1f02e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F02ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02E8u;
            // 0x1f02ec: 0x83400b  movn        $t0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02e8) {
            ctx->pc = 0x1F0364u;
            goto label_1f0364;
        }
    }
    ctx->pc = 0x1F02F0u;
label_1f02f0:
    // 0x1f02f0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1f02f4:
    // 0x1f02f4: 0x52e00004  beql        $s7, $zero, . + 4 + (0x4 << 2)
label_1f02f8:
    if (ctx->pc == 0x1F02F8u) {
        ctx->pc = 0x1F02F8u;
            // 0x1f02f8: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1F02FCu;
        goto label_1f02fc;
    }
    ctx->pc = 0x1F02F4u;
    {
        const bool branch_taken_0x1f02f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f02f4) {
            ctx->pc = 0x1F02F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02F4u;
            // 0x1f02f8: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0308u;
            goto label_1f0308;
        }
    }
    ctx->pc = 0x1F02FCu;
label_1f02fc:
    // 0x1f02fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1f0300:
    if (ctx->pc == 0x1F0300u) {
        ctx->pc = 0x1F0300u;
            // 0x1f0300: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1F0304u;
        goto label_1f0304;
    }
    ctx->pc = 0x1F02FCu;
    {
        const bool branch_taken_0x1f02fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F02FCu;
            // 0x1f0300: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02fc) {
            ctx->pc = 0x1F0344u;
            goto label_1f0344;
        }
    }
    ctx->pc = 0x1F0304u;
label_1f0304:
    // 0x1f0304: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f0304u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f0308:
    // 0x1f0308: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f0308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f030c:
    // 0x1f030c: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f030cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f0310:
    // 0x1f0310: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f0310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0314:
    // 0x1f0314: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f0314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f0318:
    // 0x1f0318: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f0318u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f031c:
    // 0x1f031c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f031cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f0320:
    // 0x1f0320: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f0320u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f0324:
    // 0x1f0324: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f0324u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f0328:
    // 0x1f0328: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f0328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f032c:
    // 0x1f032c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0330:
    // 0x1f0330: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f0330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0334:
    // 0x1f0334: 0xc07c638  jal         func_1F18E0
label_1f0338:
    if (ctx->pc == 0x1F0338u) {
        ctx->pc = 0x1F0338u;
            // 0x1f0338: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1F033Cu;
        goto label_1f033c;
    }
    ctx->pc = 0x1F0334u;
    SET_GPR_U32(ctx, 31, 0x1F033Cu);
    ctx->pc = 0x1F0338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0334u;
            // 0x1f0338: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F033Cu; }
        if (ctx->pc != 0x1F033Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F033Cu; }
        if (ctx->pc != 0x1F033Cu) { return; }
    }
    ctx->pc = 0x1F033Cu;
label_1f033c:
    // 0x1f033c: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_1f0340:
    if (ctx->pc == 0x1F0340u) {
        ctx->pc = 0x1F0340u;
            // 0x1f0340: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F0344u;
        goto label_1f0344;
    }
    ctx->pc = 0x1F033Cu;
    {
        const bool branch_taken_0x1f033c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F033Cu;
            // 0x1f0340: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f033c) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F0344u;
label_1f0344:
    // 0x1f0344: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x1f0344u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_1f0348:
    // 0x1f0348: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1f0348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_1f034c:
    // 0x1f034c: 0x2621014  dsllv       $v0, $v0, $s3
    ctx->pc = 0x1f034cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 19) & 0x3F));
label_1f0350:
    // 0x1f0350: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x1f0350u;
    SET_GPR_VEC(ctx, 20, PS2_POR(GPR_VEC(ctx, 20), GPR_VEC(ctx, 2)));
label_1f0354:
    // 0x1f0354: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x1f0354u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1f0358:
    // 0x1f0358: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x1f0358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f035c:
    // 0x1f035c: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1f0360:
    if (ctx->pc == 0x1F0360u) {
        ctx->pc = 0x1F0360u;
            // 0x1f0360: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x1F0364u;
        goto label_1f0364;
    }
    ctx->pc = 0x1F035Cu;
    {
        const bool branch_taken_0x1f035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F035Cu;
            // 0x1f0360: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f035c) {
            ctx->pc = 0x1F02F4u;
            goto label_1f02f4;
        }
    }
    ctx->pc = 0x1F0364u;
label_1f0364:
    // 0x1f0364: 0x214a016  dsrlv       $s4, $s4, $s0
    ctx->pc = 0x1f0364u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 16) & 0x3F));
label_1f0368:
    // 0x1f0368: 0x2709823  subu        $s3, $s3, $s0
    ctx->pc = 0x1f0368u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_1f036c:
    // 0x1f036c: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x1f036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
label_1f0370:
    // 0x1f0370: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f0370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1f0374:
    // 0x1f0374: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f0378:
    // 0x1f0378: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1f0378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_1f037c:
    // 0x1f037c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f0380:
    // 0x1f0380: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f0380u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_1f0384:
    // 0x1f0384: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1f0384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1f0388:
    // 0x1f0388: 0xf4a016  dsrlv       $s4, $s4, $a3
    ctx->pc = 0x1f0388u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (GPR_U32(ctx, 7) & 0x3F));
label_1f038c:
    // 0x1f038c: 0x2679823  subu        $s3, $s3, $a3
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
label_1f0390:
    // 0x1f0390: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f0394:
    // 0x1f0394: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f0394u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f0398:
    // 0x1f0398: 0xe82021  addu        $a0, $a3, $t0
    ctx->pc = 0x1f0398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1f039c:
    // 0x1f039c: 0x3203001f  andi        $v1, $s0, 0x1F
    ctx->pc = 0x1f039cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
label_1f03a0:
    // 0x1f03a0: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1f03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f03a4:
    // 0x1f03a4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x1f03a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
label_1f03a8:
    // 0x1f03a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f03ac:
    // 0x1f03ac: 0x24630102  addiu       $v1, $v1, 0x102
    ctx->pc = 0x1f03acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 258));
label_1f03b0:
    // 0x1f03b0: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x1f03b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1f03b4:
    // 0x1f03b4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1f03b8:
    if (ctx->pc == 0x1F03B8u) {
        ctx->pc = 0x1F03B8u;
            // 0x1f03b8: 0x8ea2002c  lw          $v0, 0x2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
        ctx->pc = 0x1F03BCu;
        goto label_1f03bc;
    }
    ctx->pc = 0x1F03B4u;
    {
        const bool branch_taken_0x1f03b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f03b4) {
            ctx->pc = 0x1F03B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03B4u;
            // 0x1f03b8: 0x8ea2002c  lw          $v0, 0x2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F03D0u;
            goto label_1f03d0;
        }
    }
    ctx->pc = 0x1F03BCu;
label_1f03bc:
    // 0x1f03bc: 0x14a90011  bne         $a1, $t1, . + 4 + (0x11 << 2)
label_1f03c0:
    if (ctx->pc == 0x1F03C0u) {
        ctx->pc = 0x1F03C0u;
            // 0x1f03c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F03C4u;
        goto label_1f03c4;
    }
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x1F03C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03BCu;
            // 0x1f03c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F0404u;
            goto label_1f0404;
        }
    }
    ctx->pc = 0x1F03C4u;
label_1f03c4:
    // 0x1f03c4: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_1f03c8:
    if (ctx->pc == 0x1F03C8u) {
        ctx->pc = 0x1F03CCu;
        goto label_1f03cc;
    }
    ctx->pc = 0x1F03C4u;
    {
        const bool branch_taken_0x1f03c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f03c4) {
            ctx->pc = 0x1F03ECu;
            goto label_1f03ec;
        }
    }
    ctx->pc = 0x1F03CCu;
label_1f03cc:
    // 0x1f03cc: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1f03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_1f03d0:
    // 0x1f03d0: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1f03d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f03d4:
    // 0x1f03d4: 0x40f809  jalr        $v0
label_1f03d8:
    if (ctx->pc == 0x1F03D8u) {
        ctx->pc = 0x1F03D8u;
            // 0x1f03d8: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1F03DCu;
        goto label_1f03dc;
    }
    ctx->pc = 0x1F03D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F03DCu);
        ctx->pc = 0x1F03D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03D4u;
            // 0x1f03d8: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F03DCu; }
            if (ctx->pc != 0x1F03DCu) { return; }
        }
    }
    ctx->pc = 0x1F03DCu;
label_1f03dc:
    // 0x1f03dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1f03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f03e0:
    // 0x1f03e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f03e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f03e4:
    // 0x1f03e4: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1f03e8:
    if (ctx->pc == 0x1F03E8u) {
        ctx->pc = 0x1F03E8u;
            // 0x1f03e8: 0xaeb20020  sw          $s2, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 18));
        ctx->pc = 0x1F03ECu;
        goto label_1f03ec;
    }
    ctx->pc = 0x1F03E4u;
    {
        const bool branch_taken_0x1f03e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F03E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03E4u;
            // 0x1f03e8: 0xaeb20020  sw          $s2, 0x20($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03e4) {
            ctx->pc = 0x1F0658u;
            goto label_1f0658;
        }
    }
    ctx->pc = 0x1F03ECu;
label_1f03ec:
    // 0x1f03ec: 0x54a90005  bnel        $a1, $t1, . + 4 + (0x5 << 2)
label_1f03f0:
    if (ctx->pc == 0x1F03F0u) {
        ctx->pc = 0x1F03F0u;
            // 0x1f03f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F03F4u;
        goto label_1f03f4;
    }
    ctx->pc = 0x1F03ECu;
    {
        const bool branch_taken_0x1f03ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        if (branch_taken_0x1f03ec) {
            ctx->pc = 0x1F03F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F03ECu;
            // 0x1f03f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0404u;
            goto label_1f0404;
        }
    }
    ctx->pc = 0x1F03F4u;
label_1f03f4:
    // 0x1f03f4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f03f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f03f8:
    // 0x1f03f8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f03f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f03fc:
    // 0x1f03fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0400:
    // 0x1f0400: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x1f0400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1f0404:
    // 0x1f0404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f0404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f0408:
    // 0x1f0408: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1f0408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f040c:
    // 0x1f040c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1f040cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1f0410:
    // 0x1f0410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f0414:
    // 0x1f0414: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1f0414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1f0418:
    // 0x1f0418: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1f0418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f041c:
    // 0x1f041c: 0x1500fffa  bnez        $t0, . + 4 + (-0x6 << 2)
label_1f0420:
    if (ctx->pc == 0x1F0420u) {
        ctx->pc = 0x1F0420u;
            // 0x1f0420: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x1F0424u;
        goto label_1f0424;
    }
    ctx->pc = 0x1F041Cu;
    {
        const bool branch_taken_0x1f041c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F041Cu;
            // 0x1f0420: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f041c) {
            ctx->pc = 0x1F0408u;
            goto label_1f0408;
        }
    }
    ctx->pc = 0x1F0424u;
label_1f0424:
    // 0x1f0424: 0xae270008  sw          $a3, 0x8($s1)
    ctx->pc = 0x1f0424u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 7));
label_1f0428:
    // 0x1f0428: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f0428u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f042c:
    // 0x1f042c: 0x3202001f  andi        $v0, $s0, 0x1F
    ctx->pc = 0x1f042cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
label_1f0430:
    // 0x1f0430: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x1f0430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f0434:
    // 0x1f0434: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1f0434u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31u)));
label_1f0438:
    // 0x1f0438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f043c:
    // 0x1f043c: 0x24420102  addiu       $v0, $v0, 0x102
    ctx->pc = 0x1f043cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 258));
label_1f0440:
    // 0x1f0440: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1f0440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1f0444:
    // 0x1f0444: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1f0444u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f0448:
    // 0x1f0448: 0x5460ff78  bnel        $v1, $zero, . + 4 + (-0x88 << 2)
label_1f044c:
    if (ctx->pc == 0x1F044Cu) {
        ctx->pc = 0x1F044Cu;
            // 0x1f044c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x1F0450u;
        goto label_1f0450;
    }
    ctx->pc = 0x1F0448u;
    {
        const bool branch_taken_0x1f0448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0448) {
            ctx->pc = 0x1F044Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0448u;
            // 0x1f044c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F022Cu;
            goto label_1f022c;
        }
    }
    ctx->pc = 0x1F0450u;
label_1f0450:
    // 0x1f0450: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x1f0450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_1f0454:
    // 0x1f0454: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x1f0454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1f0458:
    // 0x1f0458: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x1f0458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_1f045c:
    // 0x1f045c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f0460:
    // 0x1f0460: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1f0460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_1f0464:
    // 0x1f0464: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f0464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f0468:
    // 0x1f0468: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1f0468u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)31u)));
label_1f046c:
    // 0x1f046c: 0x102942  srl         $a1, $s0, 5
    ctx->pc = 0x1f046cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1f0470:
    // 0x1f0470: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1f0470u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)31u)));
label_1f0474:
    // 0x1f0474: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x1f0474u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
label_1f0478:
    // 0x1f0478: 0x24840101  addiu       $a0, $a0, 0x101
    ctx->pc = 0x1f0478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 257));
label_1f047c:
    // 0x1f047c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1f0480:
    // 0x1f0480: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x1f0480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1f0484:
    // 0x1f0484: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x1f0484u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1f0488:
    // 0x1f0488: 0x27a80024  addiu       $t0, $sp, 0x24
    ctx->pc = 0x1f0488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1f048c:
    // 0x1f048c: 0x27a90028  addiu       $t1, $sp, 0x28
    ctx->pc = 0x1f048cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_1f0490:
    // 0x1f0490: 0x27aa002c  addiu       $t2, $sp, 0x2C
    ctx->pc = 0x1f0490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1f0494:
    // 0x1f0494: 0xc07c3a3  jal         func_1F0E8C
label_1f0498:
    if (ctx->pc == 0x1F0498u) {
        ctx->pc = 0x1F0498u;
            // 0x1f0498: 0x8e2b0028  lw          $t3, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x1F049Cu;
        goto label_1f049c;
    }
    ctx->pc = 0x1F0494u;
    SET_GPR_U32(ctx, 31, 0x1F049Cu);
    ctx->pc = 0x1F0498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0494u;
            // 0x1f0498: 0x8e2b0028  lw          $t3, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E8Cu;
    if (runtime->hasFunction(0x1F0E8Cu)) {
        auto targetFn = runtime->lookupFunction(0x1F0E8Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F049Cu; }
        if (ctx->pc != 0x1F049Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_trees_dynamic_0x1f0e8c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F049Cu; }
        if (ctx->pc != 0x1F049Cu) { return; }
    }
    ctx->pc = 0x1F049Cu;
label_1f049c:
    // 0x1f049c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f049cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f04a0:
    // 0x1f04a0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_1f04a4:
    if (ctx->pc == 0x1F04A4u) {
        ctx->pc = 0x1F04A4u;
            // 0x1f04a4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1F04A8u;
        goto label_1f04a8;
    }
    ctx->pc = 0x1F04A0u;
    {
        const bool branch_taken_0x1f04a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04A0u;
            // 0x1f04a4: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04a0) {
            ctx->pc = 0x1F0508u;
            goto label_1f0508;
        }
    }
    ctx->pc = 0x1F04A8u;
label_1f04a8:
    // 0x1f04a8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1f04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_1f04ac:
    // 0x1f04ac: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_1f04b0:
    if (ctx->pc == 0x1F04B0u) {
        ctx->pc = 0x1F04B0u;
            // 0x1f04b0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1F04B4u;
        goto label_1f04b4;
    }
    ctx->pc = 0x1F04ACu;
    {
        const bool branch_taken_0x1f04ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f04ac) {
            ctx->pc = 0x1F04B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04ACu;
            // 0x1f04b0: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F04CCu;
            goto label_1f04cc;
        }
    }
    ctx->pc = 0x1F04B4u;
label_1f04b4:
    // 0x1f04b4: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1f04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_1f04b8:
    // 0x1f04b8: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1f04b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f04bc:
    // 0x1f04bc: 0x40f809  jalr        $v0
label_1f04c0:
    if (ctx->pc == 0x1F04C0u) {
        ctx->pc = 0x1F04C0u;
            // 0x1f04c0: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1F04C4u;
        goto label_1f04c4;
    }
    ctx->pc = 0x1F04BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F04C4u);
        ctx->pc = 0x1F04C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04BCu;
            // 0x1f04c0: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F04C4u; }
            if (ctx->pc != 0x1F04C4u) { return; }
        }
    }
    ctx->pc = 0x1F04C4u;
label_1f04c4:
    // 0x1f04c4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1f04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_1f04c8:
    // 0x1f04c8: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f04c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f04cc:
    // 0x1f04cc: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f04ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f04d0:
    // 0x1f04d0: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f04d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f04d4:
    // 0x1f04d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f04d8:
    // 0x1f04d8: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f04dc:
    // 0x1f04dc: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f04dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f04e0:
    // 0x1f04e0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f04e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f04e4:
    // 0x1f04e4: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f04e4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f04e8:
    // 0x1f04e8: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f04ec:
    // 0x1f04ec: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f04f0:
    // 0x1f04f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f04f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f04f4:
    // 0x1f04f4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f04f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f04f8:
    // 0x1f04f8: 0xc07c638  jal         func_1F18E0
label_1f04fc:
    if (ctx->pc == 0x1F04FCu) {
        ctx->pc = 0x1F04FCu;
            // 0x1f04fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F0500u;
        goto label_1f0500;
    }
    ctx->pc = 0x1F04F8u;
    SET_GPR_U32(ctx, 31, 0x1F0500u);
    ctx->pc = 0x1F04FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04F8u;
            // 0x1f04fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0500u; }
        if (ctx->pc != 0x1F0500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0500u; }
        if (ctx->pc != 0x1F0500u) { return; }
    }
    ctx->pc = 0x1F0500u;
label_1f0500:
    // 0x1f0500: 0x10000073  b           . + 4 + (0x73 << 2)
label_1f0504:
    if (ctx->pc == 0x1F0504u) {
        ctx->pc = 0x1F0504u;
            // 0x1f0504: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F0508u;
        goto label_1f0508;
    }
    ctx->pc = 0x1F0500u;
    {
        const bool branch_taken_0x1f0500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0500u;
            // 0x1f0504: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0500) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F0508u;
label_1f0508:
    // 0x1f0508: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1f0508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1f050c:
    // 0x1f050c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1f050cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1f0510:
    // 0x1f0510: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x1f0510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1f0514:
    // 0x1f0514: 0xc07c42a  jal         func_1F10A8
label_1f0518:
    if (ctx->pc == 0x1F0518u) {
        ctx->pc = 0x1F0518u;
            // 0x1f0518: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F051Cu;
        goto label_1f051c;
    }
    ctx->pc = 0x1F0514u;
    SET_GPR_U32(ctx, 31, 0x1F051Cu);
    ctx->pc = 0x1F0518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0514u;
            // 0x1f0518: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F10A8u;
    if (runtime->hasFunction(0x1F10A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F10A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F051Cu; }
        if (ctx->pc != 0x1F051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_new_0x1f10a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F051Cu; }
        if (ctx->pc != 0x1F051Cu) { return; }
    }
    ctx->pc = 0x1F051Cu;
label_1f051c:
    // 0x1f051c: 0x5040fde9  beql        $v0, $zero, . + 4 + (-0x217 << 2)
label_1f0520:
    if (ctx->pc == 0x1F0520u) {
        ctx->pc = 0x1F0520u;
            // 0x1f0520: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->pc = 0x1F0524u;
        goto label_1f0524;
    }
    ctx->pc = 0x1F051Cu;
    {
        const bool branch_taken_0x1f051c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f051c) {
            ctx->pc = 0x1F0520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F051Cu;
            // 0x1f0520: 0xfe340020  sd          $s4, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFCC4u;
            goto label_1efcc4;
        }
    }
    ctx->pc = 0x1F0524u;
label_1f0524:
    // 0x1f0524: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f0524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f0528:
    // 0x1f0528: 0x8ea2002c  lw          $v0, 0x2C($s5)
    ctx->pc = 0x1f0528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
label_1f052c:
    // 0x1f052c: 0x8ea40030  lw          $a0, 0x30($s5)
    ctx->pc = 0x1f052cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1f0530:
    // 0x1f0530: 0x40f809  jalr        $v0
label_1f0534:
    if (ctx->pc == 0x1F0534u) {
        ctx->pc = 0x1F0534u;
            // 0x1f0534: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x1F0538u;
        goto label_1f0538;
    }
    ctx->pc = 0x1F0530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F0538u);
        ctx->pc = 0x1F0534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0530u;
            // 0x1f0534: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F0538u; }
            if (ctx->pc != 0x1F0538u) { return; }
        }
    }
    ctx->pc = 0x1F0538u;
label_1f0538:
    // 0x1f0538: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1f0538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f053c:
    // 0x1f053c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f053cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f0540:
    // 0x1f0540: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f0540u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f0544:
    // 0x1f0544: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f0544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f0548:
    // 0x1f0548: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f0548u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f054c:
    // 0x1f054c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f054cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0550:
    // 0x1f0550: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f0550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f0554:
    // 0x1f0554: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f0554u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f0558:
    // 0x1f0558: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f0558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f055c:
    // 0x1f055c: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f055cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f0560:
    // 0x1f0560: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f0560u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f0564:
    // 0x1f0564: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f0564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f0568:
    // 0x1f0568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f056c:
    // 0x1f056c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0570:
    // 0x1f0570: 0xc07c447  jal         func_1F111C
label_1f0574:
    if (ctx->pc == 0x1F0574u) {
        ctx->pc = 0x1F0574u;
            // 0x1f0574: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1F0578u;
        goto label_1f0578;
    }
    ctx->pc = 0x1F0570u;
    SET_GPR_U32(ctx, 31, 0x1F0578u);
    ctx->pc = 0x1F0574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0570u;
            // 0x1f0574: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F111Cu;
    if (runtime->hasFunction(0x1F111Cu)) {
        auto targetFn = runtime->lookupFunction(0x1F111Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0578u; }
        if (ctx->pc != 0x1F0578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_0x1f111c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0578u; }
        if (ctx->pc != 0x1F0578u) { return; }
    }
    ctx->pc = 0x1F0578u;
label_1f0578:
    // 0x1f0578: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f0578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f057c:
    // 0x1f057c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0580:
    // 0x1f0580: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0584:
    // 0x1f0584: 0x1462ff6a  bne         $v1, $v0, . + 4 + (-0x96 << 2)
label_1f0588:
    if (ctx->pc == 0x1F0588u) {
        ctx->pc = 0x1F0588u;
            // 0x1f0588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F058Cu;
        goto label_1f058c;
    }
    ctx->pc = 0x1F0584u;
    {
        const bool branch_taken_0x1f0584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0584u;
            // 0x1f0588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0584) {
            ctx->pc = 0x1F0330u;
            goto label_1f0330;
        }
    }
    ctx->pc = 0x1F058Cu;
label_1f058c:
    // 0x1f058c: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x1f058cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_1f0590:
    // 0x1f0590: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1f0594:
    // 0x1f0594: 0xc07c62d  jal         func_1F18B4
label_1f0598:
    if (ctx->pc == 0x1F0598u) {
        ctx->pc = 0x1F0598u;
            // 0x1f0598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F059Cu;
        goto label_1f059c;
    }
    ctx->pc = 0x1F0594u;
    SET_GPR_U32(ctx, 31, 0x1F059Cu);
    ctx->pc = 0x1F0598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0594u;
            // 0x1f0598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18B4u;
    if (runtime->hasFunction(0x1F18B4u)) {
        auto targetFn = runtime->lookupFunction(0x1F18B4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F059Cu; }
        if (ctx->pc != 0x1F059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_codes_free_0x1f18b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F059Cu; }
        if (ctx->pc != 0x1F059Cu) { return; }
    }
    ctx->pc = 0x1F059Cu;
label_1f059c:
    // 0x1f059c: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x1f059cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f05a0:
    // 0x1f05a0: 0x8eb70004  lw          $s7, 0x4($s5)
    ctx->pc = 0x1f05a0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1f05a4:
    // 0x1f05a4: 0xde340020  ld          $s4, 0x20($s1)
    ctx->pc = 0x1f05a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_1f05a8:
    // 0x1f05a8: 0x8e3e0038  lw          $fp, 0x38($s1)
    ctx->pc = 0x1f05a8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1f05ac:
    // 0x1f05ac: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f05acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1f05b0:
    // 0x1f05b0: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x1f05b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f05b4:
    // 0x1f05b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1f05b8:
    if (ctx->pc == 0x1F05B8u) {
        ctx->pc = 0x1F05B8u;
            // 0x1f05b8: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x1F05BCu;
        goto label_1f05bc;
    }
    ctx->pc = 0x1F05B4u;
    {
        const bool branch_taken_0x1f05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05B4u;
            // 0x1f05b8: 0x8e33001c  lw          $s3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05b4) {
            ctx->pc = 0x1F05C8u;
            goto label_1f05c8;
        }
    }
    ctx->pc = 0x1F05BCu;
label_1f05bc:
    // 0x1f05bc: 0x7e9023  subu        $s2, $v1, $fp
    ctx->pc = 0x1f05bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_1f05c0:
    // 0x1f05c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f05c4:
    if (ctx->pc == 0x1F05C4u) {
        ctx->pc = 0x1F05C4u;
            // 0x1f05c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x1F05C8u;
        goto label_1f05c8;
    }
    ctx->pc = 0x1F05C0u;
    {
        const bool branch_taken_0x1f05c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05C0u;
            // 0x1f05c4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05c0) {
            ctx->pc = 0x1F05D0u;
            goto label_1f05d0;
        }
    }
    ctx->pc = 0x1F05C8u;
label_1f05c8:
    // 0x1f05c8: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1f05c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1f05cc:
    // 0x1f05cc: 0x5e9023  subu        $s2, $v0, $fp
    ctx->pc = 0x1f05ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_1f05d0:
    // 0x1f05d0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f05d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f05d4:
    // 0x1f05d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f05d8:
    if (ctx->pc == 0x1F05D8u) {
        ctx->pc = 0x1F05D8u;
            // 0x1f05d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1F05DCu;
        goto label_1f05dc;
    }
    ctx->pc = 0x1F05D4u;
    {
        const bool branch_taken_0x1f05d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F05D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05D4u;
            // 0x1f05d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05d4) {
            ctx->pc = 0x1F05E4u;
            goto label_1f05e4;
        }
    }
    ctx->pc = 0x1F05DCu;
label_1f05dc:
    // 0x1f05dc: 0x1000fdca  b           . + 4 + (-0x236 << 2)
label_1f05e0:
    if (ctx->pc == 0x1F05E0u) {
        ctx->pc = 0x1F05E0u;
            // 0x1f05e0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1F05E4u;
        goto label_1f05e4;
    }
    ctx->pc = 0x1F05DCu;
    {
        const bool branch_taken_0x1f05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F05E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05DCu;
            // 0x1f05e0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05dc) {
            ctx->pc = 0x1EFD08u;
            goto label_1efd08;
        }
    }
    ctx->pc = 0x1F05E4u;
label_1f05e4:
    // 0x1f05e4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f05e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f05e8:
    // 0x1f05e8: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f05e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f05ec:
    // 0x1f05ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f05ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f05f0:
    // 0x1f05f0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f05f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f05f4:
    // 0x1f05f4: 0xc07c638  jal         func_1F18E0
label_1f05f8:
    if (ctx->pc == 0x1F05F8u) {
        ctx->pc = 0x1F05F8u;
            // 0x1f05f8: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1F05FCu;
        goto label_1f05fc;
    }
    ctx->pc = 0x1F05F4u;
    SET_GPR_U32(ctx, 31, 0x1F05FCu);
    ctx->pc = 0x1F05F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05F4u;
            // 0x1f05f8: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05FCu; }
        if (ctx->pc != 0x1F05FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05FCu; }
        if (ctx->pc != 0x1F05FCu) { return; }
    }
    ctx->pc = 0x1F05FCu;
label_1f05fc:
    // 0x1f05fc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x1f05fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_1f0600:
    // 0x1f0600: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1f0600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1f0604:
    // 0x1f0604: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1f0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1f0608:
    // 0x1f0608: 0x1462ff3e  bne         $v1, $v0, . + 4 + (-0xC2 << 2)
label_1f060c:
    if (ctx->pc == 0x1F060Cu) {
        ctx->pc = 0x1F060Cu;
            // 0x1f060c: 0x8e3e0038  lw          $fp, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->pc = 0x1F0610u;
        goto label_1f0610;
    }
    ctx->pc = 0x1F0608u;
    {
        const bool branch_taken_0x1f0608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F060Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0608u;
            // 0x1f060c: 0x8e3e0038  lw          $fp, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0608) {
            ctx->pc = 0x1F0304u;
            goto label_1f0304;
        }
    }
    ctx->pc = 0x1F0610u;
label_1f0610:
    // 0x1f0610: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1f0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1f0614:
    // 0x1f0614: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f0614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1f0618:
    // 0x1f0618: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f0618u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f061c:
    // 0x1f061c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f061cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f0620:
    // 0x1f0620: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f0620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f0624:
    // 0x1f0624: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f0624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0628:
    // 0x1f0628: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f0628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f062c:
    // 0x1f062c: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f062cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f0630:
    // 0x1f0630: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f0630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f0634:
    // 0x1f0634: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f0634u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f0638:
    // 0x1f0638: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f0638u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f063c:
    // 0x1f063c: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f063cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f0640:
    // 0x1f0640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0644:
    // 0x1f0644: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f0644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0648:
    // 0x1f0648: 0xc07c638  jal         func_1F18E0
label_1f064c:
    if (ctx->pc == 0x1F064Cu) {
        ctx->pc = 0x1F064Cu;
            // 0x1f064c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F0650u;
        goto label_1f0650;
    }
    ctx->pc = 0x1F0648u;
    SET_GPR_U32(ctx, 31, 0x1F0650u);
    ctx->pc = 0x1F064Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0648u;
            // 0x1f064c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0650u; }
        if (ctx->pc != 0x1F0650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0650u; }
        if (ctx->pc != 0x1F0650u) { return; }
    }
    ctx->pc = 0x1F0650u;
label_1f0650:
    // 0x1f0650: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1f0654:
    if (ctx->pc == 0x1F0654u) {
        ctx->pc = 0x1F0654u;
            // 0x1f0654: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F0658u;
        goto label_1f0658;
    }
    ctx->pc = 0x1F0650u;
    {
        const bool branch_taken_0x1f0650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0650u;
            // 0x1f0654: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0650) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F0658u;
label_1f0658:
    // 0x1f0658: 0xfe340020  sd          $s4, 0x20($s1)
    ctx->pc = 0x1f0658u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 20));
label_1f065c:
    // 0x1f065c: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f065cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f0660:
    // 0x1f0660: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f0660u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f0664:
    // 0x1f0664: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f0664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f0668:
    // 0x1f0668: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f066c:
    // 0x1f066c: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f066cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f0670:
    // 0x1f0670: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f0670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f0674:
    // 0x1f0674: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f0674u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f0678:
    // 0x1f0678: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f0678u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f067c:
    // 0x1f067c: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f067cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f0680:
    // 0x1f0680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f0680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f0684:
    // 0x1f0684: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f0684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0688:
    // 0x1f0688: 0xc07c638  jal         func_1F18E0
label_1f068c:
    if (ctx->pc == 0x1F068Cu) {
        ctx->pc = 0x1F068Cu;
            // 0x1f068c: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1F0690u;
        goto label_1f0690;
    }
    ctx->pc = 0x1F0688u;
    SET_GPR_U32(ctx, 31, 0x1F0690u);
    ctx->pc = 0x1F068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0688u;
            // 0x1f068c: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0690u; }
        if (ctx->pc != 0x1F0690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0690u; }
        if (ctx->pc != 0x1F0690u) { return; }
    }
    ctx->pc = 0x1F0690u;
label_1f0690:
    // 0x1f0690: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f0694:
    if (ctx->pc == 0x1F0694u) {
        ctx->pc = 0x1F0694u;
            // 0x1f0694: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1F0698u;
        goto label_1f0698;
    }
    ctx->pc = 0x1F0690u;
    {
        const bool branch_taken_0x1f0690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0690u;
            // 0x1f0694: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0690) {
            ctx->pc = 0x1F06D0u;
            goto label_1f06d0;
        }
    }
    ctx->pc = 0x1F0698u;
label_1f0698:
    // 0x1f0698: 0xae33001c  sw          $s3, 0x1C($s1)
    ctx->pc = 0x1f0698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 19));
label_1f069c:
    // 0x1f069c: 0xaeb70004  sw          $s7, 0x4($s5)
    ctx->pc = 0x1f069cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 23));
label_1f06a0:
    // 0x1f06a0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1f06a4:
    // 0x1f06a4: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x1f06a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f06a8:
    // 0x1f06a8: 0xdea30008  ld          $v1, 0x8($s5)
    ctx->pc = 0x1f06a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_1f06ac:
    // 0x1f06ac: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f06acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f06b0:
    // 0x1f06b0: 0xfea20008  sd          $v0, 0x8($s5)
    ctx->pc = 0x1f06b0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 2));
label_1f06b4:
    // 0x1f06b4: 0xaeb60000  sw          $s6, 0x0($s5)
    ctx->pc = 0x1f06b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 22));
label_1f06b8:
    // 0x1f06b8: 0xae3e0038  sw          $fp, 0x38($s1)
    ctx->pc = 0x1f06b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 30));
label_1f06bc:
    // 0x1f06bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f06bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c0:
    // 0x1f06c0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f06c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f06c4:
    // 0x1f06c4: 0xc07c638  jal         func_1F18E0
label_1f06c8:
    if (ctx->pc == 0x1F06C8u) {
        ctx->pc = 0x1F06C8u;
            // 0x1f06c8: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x1F06CCu;
        goto label_1f06cc;
    }
    ctx->pc = 0x1F06C4u;
    SET_GPR_U32(ctx, 31, 0x1F06CCu);
    ctx->pc = 0x1F06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06C4u;
            // 0x1f06c8: 0x2406fffe  addiu       $a2, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (runtime->hasFunction(0x1F18E0u)) {
        auto targetFn = runtime->lookupFunction(0x1F18E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06CCu; }
        if (ctx->pc != 0x1F06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_flush_0x1f18e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F06CCu; }
        if (ctx->pc != 0x1F06CCu) { return; }
    }
    ctx->pc = 0x1F06CCu;
label_1f06cc:
    // 0x1f06cc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f06ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1f06d0:
    // 0x1f06d0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f06d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1f06d4:
    // 0x1f06d4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f06d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1f06d8:
    // 0x1f06d8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1f06d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1f06dc:
    // 0x1f06dc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1f06dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f06e0:
    // 0x1f06e0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1f06e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1f06e4:
    // 0x1f06e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f06e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1f06e8:
    // 0x1f06e8: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1f06e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1f06ec:
    // 0x1f06ec: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1f06ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f06f0:
    // 0x1f06f0: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1f06f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1f06f4:
    // 0x1f06f4: 0x3e00008  jr          $ra
label_1f06f8:
    if (ctx->pc == 0x1F06F8u) {
        ctx->pc = 0x1F06F8u;
            // 0x1f06f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1F06FCu;
        goto label_fallthrough_0x1f06f4;
    }
    ctx->pc = 0x1F06F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F06F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F06F4u;
            // 0x1f06f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EFC3Cu: goto label_1efc3c;
            case 0x1EFC40u: goto label_1efc40;
            case 0x1EFC44u: goto label_1efc44;
            case 0x1EFC48u: goto label_1efc48;
            case 0x1EFC4Cu: goto label_1efc4c;
            case 0x1EFC50u: goto label_1efc50;
            case 0x1EFC54u: goto label_1efc54;
            case 0x1EFC58u: goto label_1efc58;
            case 0x1EFC5Cu: goto label_1efc5c;
            case 0x1EFC60u: goto label_1efc60;
            case 0x1EFC64u: goto label_1efc64;
            case 0x1EFC68u: goto label_1efc68;
            case 0x1EFC6Cu: goto label_1efc6c;
            case 0x1EFC70u: goto label_1efc70;
            case 0x1EFC74u: goto label_1efc74;
            case 0x1EFC78u: goto label_1efc78;
            case 0x1EFC7Cu: goto label_1efc7c;
            case 0x1EFC80u: goto label_1efc80;
            case 0x1EFC84u: goto label_1efc84;
            case 0x1EFC88u: goto label_1efc88;
            case 0x1EFC8Cu: goto label_1efc8c;
            case 0x1EFC90u: goto label_1efc90;
            case 0x1EFC94u: goto label_1efc94;
            case 0x1EFC98u: goto label_1efc98;
            case 0x1EFC9Cu: goto label_1efc9c;
            case 0x1EFCA0u: goto label_1efca0;
            case 0x1EFCA4u: goto label_1efca4;
            case 0x1EFCA8u: goto label_1efca8;
            case 0x1EFCACu: goto label_1efcac;
            case 0x1EFCB0u: goto label_1efcb0;
            case 0x1EFCB4u: goto label_1efcb4;
            case 0x1EFCB8u: goto label_1efcb8;
            case 0x1EFCBCu: goto label_1efcbc;
            case 0x1EFCC0u: goto label_1efcc0;
            case 0x1EFCC4u: goto label_1efcc4;
            case 0x1EFCC8u: goto label_1efcc8;
            case 0x1EFCCCu: goto label_1efccc;
            case 0x1EFCD0u: goto label_1efcd0;
            case 0x1EFCD4u: goto label_1efcd4;
            case 0x1EFCD8u: goto label_1efcd8;
            case 0x1EFCDCu: goto label_1efcdc;
            case 0x1EFCE0u: goto label_1efce0;
            case 0x1EFCE4u: goto label_1efce4;
            case 0x1EFCE8u: goto label_1efce8;
            case 0x1EFCECu: goto label_1efcec;
            case 0x1EFCF0u: goto label_1efcf0;
            case 0x1EFCF4u: goto label_1efcf4;
            case 0x1EFCF8u: goto label_1efcf8;
            case 0x1EFCFCu: goto label_1efcfc;
            case 0x1EFD00u: goto label_1efd00;
            case 0x1EFD04u: goto label_1efd04;
            case 0x1EFD08u: goto label_1efd08;
            case 0x1EFD0Cu: goto label_1efd0c;
            case 0x1EFD10u: goto label_1efd10;
            case 0x1EFD14u: goto label_1efd14;
            case 0x1EFD18u: goto label_1efd18;
            case 0x1EFD1Cu: goto label_1efd1c;
            case 0x1EFD20u: goto label_1efd20;
            case 0x1EFD24u: goto label_1efd24;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            case 0x1EFD30u: goto label_1efd30;
            case 0x1EFD34u: goto label_1efd34;
            case 0x1EFD38u: goto label_1efd38;
            case 0x1EFD3Cu: goto label_1efd3c;
            case 0x1EFD40u: goto label_1efd40;
            case 0x1EFD44u: goto label_1efd44;
            case 0x1EFD48u: goto label_1efd48;
            case 0x1EFD4Cu: goto label_1efd4c;
            case 0x1EFD50u: goto label_1efd50;
            case 0x1EFD54u: goto label_1efd54;
            case 0x1EFD58u: goto label_1efd58;
            case 0x1EFD5Cu: goto label_1efd5c;
            case 0x1EFD60u: goto label_1efd60;
            case 0x1EFD64u: goto label_1efd64;
            case 0x1EFD68u: goto label_1efd68;
            case 0x1EFD6Cu: goto label_1efd6c;
            case 0x1EFD70u: goto label_1efd70;
            case 0x1EFD74u: goto label_1efd74;
            case 0x1EFD78u: goto label_1efd78;
            case 0x1EFD7Cu: goto label_1efd7c;
            case 0x1EFD80u: goto label_1efd80;
            case 0x1EFD84u: goto label_1efd84;
            case 0x1EFD88u: goto label_1efd88;
            case 0x1EFD8Cu: goto label_1efd8c;
            case 0x1EFD90u: goto label_1efd90;
            case 0x1EFD94u: goto label_1efd94;
            case 0x1EFD98u: goto label_1efd98;
            case 0x1EFD9Cu: goto label_1efd9c;
            case 0x1EFDA0u: goto label_1efda0;
            case 0x1EFDA4u: goto label_1efda4;
            case 0x1EFDA8u: goto label_1efda8;
            case 0x1EFDACu: goto label_1efdac;
            case 0x1EFDB0u: goto label_1efdb0;
            case 0x1EFDB4u: goto label_1efdb4;
            case 0x1EFDB8u: goto label_1efdb8;
            case 0x1EFDBCu: goto label_1efdbc;
            case 0x1EFDC0u: goto label_1efdc0;
            case 0x1EFDC4u: goto label_1efdc4;
            case 0x1EFDC8u: goto label_1efdc8;
            case 0x1EFDCCu: goto label_1efdcc;
            case 0x1EFDD0u: goto label_1efdd0;
            case 0x1EFDD4u: goto label_1efdd4;
            case 0x1EFDD8u: goto label_1efdd8;
            case 0x1EFDDCu: goto label_1efddc;
            case 0x1EFDE0u: goto label_1efde0;
            case 0x1EFDE4u: goto label_1efde4;
            case 0x1EFDE8u: goto label_1efde8;
            case 0x1EFDECu: goto label_1efdec;
            case 0x1EFDF0u: goto label_1efdf0;
            case 0x1EFDF4u: goto label_1efdf4;
            case 0x1EFDF8u: goto label_1efdf8;
            case 0x1EFDFCu: goto label_1efdfc;
            case 0x1EFE00u: goto label_1efe00;
            case 0x1EFE04u: goto label_1efe04;
            case 0x1EFE08u: goto label_1efe08;
            case 0x1EFE0Cu: goto label_1efe0c;
            case 0x1EFE10u: goto label_1efe10;
            case 0x1EFE14u: goto label_1efe14;
            case 0x1EFE18u: goto label_1efe18;
            case 0x1EFE1Cu: goto label_1efe1c;
            case 0x1EFE20u: goto label_1efe20;
            case 0x1EFE24u: goto label_1efe24;
            case 0x1EFE28u: goto label_1efe28;
            case 0x1EFE2Cu: goto label_1efe2c;
            case 0x1EFE30u: goto label_1efe30;
            case 0x1EFE34u: goto label_1efe34;
            case 0x1EFE38u: goto label_1efe38;
            case 0x1EFE3Cu: goto label_1efe3c;
            case 0x1EFE40u: goto label_1efe40;
            case 0x1EFE44u: goto label_1efe44;
            case 0x1EFE48u: goto label_1efe48;
            case 0x1EFE4Cu: goto label_1efe4c;
            case 0x1EFE50u: goto label_1efe50;
            case 0x1EFE54u: goto label_1efe54;
            case 0x1EFE58u: goto label_1efe58;
            case 0x1EFE5Cu: goto label_1efe5c;
            case 0x1EFE60u: goto label_1efe60;
            case 0x1EFE64u: goto label_1efe64;
            case 0x1EFE68u: goto label_1efe68;
            case 0x1EFE6Cu: goto label_1efe6c;
            case 0x1EFE70u: goto label_1efe70;
            case 0x1EFE74u: goto label_1efe74;
            case 0x1EFE78u: goto label_1efe78;
            case 0x1EFE7Cu: goto label_1efe7c;
            case 0x1EFE80u: goto label_1efe80;
            case 0x1EFE84u: goto label_1efe84;
            case 0x1EFE88u: goto label_1efe88;
            case 0x1EFE8Cu: goto label_1efe8c;
            case 0x1EFE90u: goto label_1efe90;
            case 0x1EFE94u: goto label_1efe94;
            case 0x1EFE98u: goto label_1efe98;
            case 0x1EFE9Cu: goto label_1efe9c;
            case 0x1EFEA0u: goto label_1efea0;
            case 0x1EFEA4u: goto label_1efea4;
            case 0x1EFEA8u: goto label_1efea8;
            case 0x1EFEACu: goto label_1efeac;
            case 0x1EFEB0u: goto label_1efeb0;
            case 0x1EFEB4u: goto label_1efeb4;
            case 0x1EFEB8u: goto label_1efeb8;
            case 0x1EFEBCu: goto label_1efebc;
            case 0x1EFEC0u: goto label_1efec0;
            case 0x1EFEC4u: goto label_1efec4;
            case 0x1EFEC8u: goto label_1efec8;
            case 0x1EFECCu: goto label_1efecc;
            case 0x1EFED0u: goto label_1efed0;
            case 0x1EFED4u: goto label_1efed4;
            case 0x1EFED8u: goto label_1efed8;
            case 0x1EFEDCu: goto label_1efedc;
            case 0x1EFEE0u: goto label_1efee0;
            case 0x1EFEE4u: goto label_1efee4;
            case 0x1EFEE8u: goto label_1efee8;
            case 0x1EFEECu: goto label_1efeec;
            case 0x1EFEF0u: goto label_1efef0;
            case 0x1EFEF4u: goto label_1efef4;
            case 0x1EFEF8u: goto label_1efef8;
            case 0x1EFEFCu: goto label_1efefc;
            case 0x1EFF00u: goto label_1eff00;
            case 0x1EFF04u: goto label_1eff04;
            case 0x1EFF08u: goto label_1eff08;
            case 0x1EFF0Cu: goto label_1eff0c;
            case 0x1EFF10u: goto label_1eff10;
            case 0x1EFF14u: goto label_1eff14;
            case 0x1EFF18u: goto label_1eff18;
            case 0x1EFF1Cu: goto label_1eff1c;
            case 0x1EFF20u: goto label_1eff20;
            case 0x1EFF24u: goto label_1eff24;
            case 0x1EFF28u: goto label_1eff28;
            case 0x1EFF2Cu: goto label_1eff2c;
            case 0x1EFF30u: goto label_1eff30;
            case 0x1EFF34u: goto label_1eff34;
            case 0x1EFF38u: goto label_1eff38;
            case 0x1EFF3Cu: goto label_1eff3c;
            case 0x1EFF40u: goto label_1eff40;
            case 0x1EFF44u: goto label_1eff44;
            case 0x1EFF48u: goto label_1eff48;
            case 0x1EFF4Cu: goto label_1eff4c;
            case 0x1EFF50u: goto label_1eff50;
            case 0x1EFF54u: goto label_1eff54;
            case 0x1EFF58u: goto label_1eff58;
            case 0x1EFF5Cu: goto label_1eff5c;
            case 0x1EFF60u: goto label_1eff60;
            case 0x1EFF64u: goto label_1eff64;
            case 0x1EFF68u: goto label_1eff68;
            case 0x1EFF6Cu: goto label_1eff6c;
            case 0x1EFF70u: goto label_1eff70;
            case 0x1EFF74u: goto label_1eff74;
            case 0x1EFF78u: goto label_1eff78;
            case 0x1EFF7Cu: goto label_1eff7c;
            case 0x1EFF80u: goto label_1eff80;
            case 0x1EFF84u: goto label_1eff84;
            case 0x1EFF88u: goto label_1eff88;
            case 0x1EFF8Cu: goto label_1eff8c;
            case 0x1EFF90u: goto label_1eff90;
            case 0x1EFF94u: goto label_1eff94;
            case 0x1EFF98u: goto label_1eff98;
            case 0x1EFF9Cu: goto label_1eff9c;
            case 0x1EFFA0u: goto label_1effa0;
            case 0x1EFFA4u: goto label_1effa4;
            case 0x1EFFA8u: goto label_1effa8;
            case 0x1EFFACu: goto label_1effac;
            case 0x1EFFB0u: goto label_1effb0;
            case 0x1EFFB4u: goto label_1effb4;
            case 0x1EFFB8u: goto label_1effb8;
            case 0x1EFFBCu: goto label_1effbc;
            case 0x1EFFC0u: goto label_1effc0;
            case 0x1EFFC4u: goto label_1effc4;
            case 0x1EFFC8u: goto label_1effc8;
            case 0x1EFFCCu: goto label_1effcc;
            case 0x1EFFD0u: goto label_1effd0;
            case 0x1EFFD4u: goto label_1effd4;
            case 0x1EFFD8u: goto label_1effd8;
            case 0x1EFFDCu: goto label_1effdc;
            case 0x1EFFE0u: goto label_1effe0;
            case 0x1EFFE4u: goto label_1effe4;
            case 0x1EFFE8u: goto label_1effe8;
            case 0x1EFFECu: goto label_1effec;
            case 0x1EFFF0u: goto label_1efff0;
            case 0x1EFFF4u: goto label_1efff4;
            case 0x1EFFF8u: goto label_1efff8;
            case 0x1EFFFCu: goto label_1efffc;
            case 0x1F0000u: goto label_1f0000;
            case 0x1F0004u: goto label_1f0004;
            case 0x1F0008u: goto label_1f0008;
            case 0x1F000Cu: goto label_1f000c;
            case 0x1F0010u: goto label_1f0010;
            case 0x1F0014u: goto label_1f0014;
            case 0x1F0018u: goto label_1f0018;
            case 0x1F001Cu: goto label_1f001c;
            case 0x1F0020u: goto label_1f0020;
            case 0x1F0024u: goto label_1f0024;
            case 0x1F0028u: goto label_1f0028;
            case 0x1F002Cu: goto label_1f002c;
            case 0x1F0030u: goto label_1f0030;
            case 0x1F0034u: goto label_1f0034;
            case 0x1F0038u: goto label_1f0038;
            case 0x1F003Cu: goto label_1f003c;
            case 0x1F0040u: goto label_1f0040;
            case 0x1F0044u: goto label_1f0044;
            case 0x1F0048u: goto label_1f0048;
            case 0x1F004Cu: goto label_1f004c;
            case 0x1F0050u: goto label_1f0050;
            case 0x1F0054u: goto label_1f0054;
            case 0x1F0058u: goto label_1f0058;
            case 0x1F005Cu: goto label_1f005c;
            case 0x1F0060u: goto label_1f0060;
            case 0x1F0064u: goto label_1f0064;
            case 0x1F0068u: goto label_1f0068;
            case 0x1F006Cu: goto label_1f006c;
            case 0x1F0070u: goto label_1f0070;
            case 0x1F0074u: goto label_1f0074;
            case 0x1F0078u: goto label_1f0078;
            case 0x1F007Cu: goto label_1f007c;
            case 0x1F0080u: goto label_1f0080;
            case 0x1F0084u: goto label_1f0084;
            case 0x1F0088u: goto label_1f0088;
            case 0x1F008Cu: goto label_1f008c;
            case 0x1F0090u: goto label_1f0090;
            case 0x1F0094u: goto label_1f0094;
            case 0x1F0098u: goto label_1f0098;
            case 0x1F009Cu: goto label_1f009c;
            case 0x1F00A0u: goto label_1f00a0;
            case 0x1F00A4u: goto label_1f00a4;
            case 0x1F00A8u: goto label_1f00a8;
            case 0x1F00ACu: goto label_1f00ac;
            case 0x1F00B0u: goto label_1f00b0;
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00B8u: goto label_1f00b8;
            case 0x1F00BCu: goto label_1f00bc;
            case 0x1F00C0u: goto label_1f00c0;
            case 0x1F00C4u: goto label_1f00c4;
            case 0x1F00C8u: goto label_1f00c8;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00D0u: goto label_1f00d0;
            case 0x1F00D4u: goto label_1f00d4;
            case 0x1F00D8u: goto label_1f00d8;
            case 0x1F00DCu: goto label_1f00dc;
            case 0x1F00E0u: goto label_1f00e0;
            case 0x1F00E4u: goto label_1f00e4;
            case 0x1F00E8u: goto label_1f00e8;
            case 0x1F00ECu: goto label_1f00ec;
            case 0x1F00F0u: goto label_1f00f0;
            case 0x1F00F4u: goto label_1f00f4;
            case 0x1F00F8u: goto label_1f00f8;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0100u: goto label_1f0100;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F0108u: goto label_1f0108;
            case 0x1F010Cu: goto label_1f010c;
            case 0x1F0110u: goto label_1f0110;
            case 0x1F0114u: goto label_1f0114;
            case 0x1F0118u: goto label_1f0118;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F0120u: goto label_1f0120;
            case 0x1F0124u: goto label_1f0124;
            case 0x1F0128u: goto label_1f0128;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0130u: goto label_1f0130;
            case 0x1F0134u: goto label_1f0134;
            case 0x1F0138u: goto label_1f0138;
            case 0x1F013Cu: goto label_1f013c;
            case 0x1F0140u: goto label_1f0140;
            case 0x1F0144u: goto label_1f0144;
            case 0x1F0148u: goto label_1f0148;
            case 0x1F014Cu: goto label_1f014c;
            case 0x1F0150u: goto label_1f0150;
            case 0x1F0154u: goto label_1f0154;
            case 0x1F0158u: goto label_1f0158;
            case 0x1F015Cu: goto label_1f015c;
            case 0x1F0160u: goto label_1f0160;
            case 0x1F0164u: goto label_1f0164;
            case 0x1F0168u: goto label_1f0168;
            case 0x1F016Cu: goto label_1f016c;
            case 0x1F0170u: goto label_1f0170;
            case 0x1F0174u: goto label_1f0174;
            case 0x1F0178u: goto label_1f0178;
            case 0x1F017Cu: goto label_1f017c;
            case 0x1F0180u: goto label_1f0180;
            case 0x1F0184u: goto label_1f0184;
            case 0x1F0188u: goto label_1f0188;
            case 0x1F018Cu: goto label_1f018c;
            case 0x1F0190u: goto label_1f0190;
            case 0x1F0194u: goto label_1f0194;
            case 0x1F0198u: goto label_1f0198;
            case 0x1F019Cu: goto label_1f019c;
            case 0x1F01A0u: goto label_1f01a0;
            case 0x1F01A4u: goto label_1f01a4;
            case 0x1F01A8u: goto label_1f01a8;
            case 0x1F01ACu: goto label_1f01ac;
            case 0x1F01B0u: goto label_1f01b0;
            case 0x1F01B4u: goto label_1f01b4;
            case 0x1F01B8u: goto label_1f01b8;
            case 0x1F01BCu: goto label_1f01bc;
            case 0x1F01C0u: goto label_1f01c0;
            case 0x1F01C4u: goto label_1f01c4;
            case 0x1F01C8u: goto label_1f01c8;
            case 0x1F01CCu: goto label_1f01cc;
            case 0x1F01D0u: goto label_1f01d0;
            case 0x1F01D4u: goto label_1f01d4;
            case 0x1F01D8u: goto label_1f01d8;
            case 0x1F01DCu: goto label_1f01dc;
            case 0x1F01E0u: goto label_1f01e0;
            case 0x1F01E4u: goto label_1f01e4;
            case 0x1F01E8u: goto label_1f01e8;
            case 0x1F01ECu: goto label_1f01ec;
            case 0x1F01F0u: goto label_1f01f0;
            case 0x1F01F4u: goto label_1f01f4;
            case 0x1F01F8u: goto label_1f01f8;
            case 0x1F01FCu: goto label_1f01fc;
            case 0x1F0200u: goto label_1f0200;
            case 0x1F0204u: goto label_1f0204;
            case 0x1F0208u: goto label_1f0208;
            case 0x1F020Cu: goto label_1f020c;
            case 0x1F0210u: goto label_1f0210;
            case 0x1F0214u: goto label_1f0214;
            case 0x1F0218u: goto label_1f0218;
            case 0x1F021Cu: goto label_1f021c;
            case 0x1F0220u: goto label_1f0220;
            case 0x1F0224u: goto label_1f0224;
            case 0x1F0228u: goto label_1f0228;
            case 0x1F022Cu: goto label_1f022c;
            case 0x1F0230u: goto label_1f0230;
            case 0x1F0234u: goto label_1f0234;
            case 0x1F0238u: goto label_1f0238;
            case 0x1F023Cu: goto label_1f023c;
            case 0x1F0240u: goto label_1f0240;
            case 0x1F0244u: goto label_1f0244;
            case 0x1F0248u: goto label_1f0248;
            case 0x1F024Cu: goto label_1f024c;
            case 0x1F0250u: goto label_1f0250;
            case 0x1F0254u: goto label_1f0254;
            case 0x1F0258u: goto label_1f0258;
            case 0x1F025Cu: goto label_1f025c;
            case 0x1F0260u: goto label_1f0260;
            case 0x1F0264u: goto label_1f0264;
            case 0x1F0268u: goto label_1f0268;
            case 0x1F026Cu: goto label_1f026c;
            case 0x1F0270u: goto label_1f0270;
            case 0x1F0274u: goto label_1f0274;
            case 0x1F0278u: goto label_1f0278;
            case 0x1F027Cu: goto label_1f027c;
            case 0x1F0280u: goto label_1f0280;
            case 0x1F0284u: goto label_1f0284;
            case 0x1F0288u: goto label_1f0288;
            case 0x1F028Cu: goto label_1f028c;
            case 0x1F0290u: goto label_1f0290;
            case 0x1F0294u: goto label_1f0294;
            case 0x1F0298u: goto label_1f0298;
            case 0x1F029Cu: goto label_1f029c;
            case 0x1F02A0u: goto label_1f02a0;
            case 0x1F02A4u: goto label_1f02a4;
            case 0x1F02A8u: goto label_1f02a8;
            case 0x1F02ACu: goto label_1f02ac;
            case 0x1F02B0u: goto label_1f02b0;
            case 0x1F02B4u: goto label_1f02b4;
            case 0x1F02B8u: goto label_1f02b8;
            case 0x1F02BCu: goto label_1f02bc;
            case 0x1F02C0u: goto label_1f02c0;
            case 0x1F02C4u: goto label_1f02c4;
            case 0x1F02C8u: goto label_1f02c8;
            case 0x1F02CCu: goto label_1f02cc;
            case 0x1F02D0u: goto label_1f02d0;
            case 0x1F02D4u: goto label_1f02d4;
            case 0x1F02D8u: goto label_1f02d8;
            case 0x1F02DCu: goto label_1f02dc;
            case 0x1F02E0u: goto label_1f02e0;
            case 0x1F02E4u: goto label_1f02e4;
            case 0x1F02E8u: goto label_1f02e8;
            case 0x1F02ECu: goto label_1f02ec;
            case 0x1F02F0u: goto label_1f02f0;
            case 0x1F02F4u: goto label_1f02f4;
            case 0x1F02F8u: goto label_1f02f8;
            case 0x1F02FCu: goto label_1f02fc;
            case 0x1F0300u: goto label_1f0300;
            case 0x1F0304u: goto label_1f0304;
            case 0x1F0308u: goto label_1f0308;
            case 0x1F030Cu: goto label_1f030c;
            case 0x1F0310u: goto label_1f0310;
            case 0x1F0314u: goto label_1f0314;
            case 0x1F0318u: goto label_1f0318;
            case 0x1F031Cu: goto label_1f031c;
            case 0x1F0320u: goto label_1f0320;
            case 0x1F0324u: goto label_1f0324;
            case 0x1F0328u: goto label_1f0328;
            case 0x1F032Cu: goto label_1f032c;
            case 0x1F0330u: goto label_1f0330;
            case 0x1F0334u: goto label_1f0334;
            case 0x1F0338u: goto label_1f0338;
            case 0x1F033Cu: goto label_1f033c;
            case 0x1F0340u: goto label_1f0340;
            case 0x1F0344u: goto label_1f0344;
            case 0x1F0348u: goto label_1f0348;
            case 0x1F034Cu: goto label_1f034c;
            case 0x1F0350u: goto label_1f0350;
            case 0x1F0354u: goto label_1f0354;
            case 0x1F0358u: goto label_1f0358;
            case 0x1F035Cu: goto label_1f035c;
            case 0x1F0360u: goto label_1f0360;
            case 0x1F0364u: goto label_1f0364;
            case 0x1F0368u: goto label_1f0368;
            case 0x1F036Cu: goto label_1f036c;
            case 0x1F0370u: goto label_1f0370;
            case 0x1F0374u: goto label_1f0374;
            case 0x1F0378u: goto label_1f0378;
            case 0x1F037Cu: goto label_1f037c;
            case 0x1F0380u: goto label_1f0380;
            case 0x1F0384u: goto label_1f0384;
            case 0x1F0388u: goto label_1f0388;
            case 0x1F038Cu: goto label_1f038c;
            case 0x1F0390u: goto label_1f0390;
            case 0x1F0394u: goto label_1f0394;
            case 0x1F0398u: goto label_1f0398;
            case 0x1F039Cu: goto label_1f039c;
            case 0x1F03A0u: goto label_1f03a0;
            case 0x1F03A4u: goto label_1f03a4;
            case 0x1F03A8u: goto label_1f03a8;
            case 0x1F03ACu: goto label_1f03ac;
            case 0x1F03B0u: goto label_1f03b0;
            case 0x1F03B4u: goto label_1f03b4;
            case 0x1F03B8u: goto label_1f03b8;
            case 0x1F03BCu: goto label_1f03bc;
            case 0x1F03C0u: goto label_1f03c0;
            case 0x1F03C4u: goto label_1f03c4;
            case 0x1F03C8u: goto label_1f03c8;
            case 0x1F03CCu: goto label_1f03cc;
            case 0x1F03D0u: goto label_1f03d0;
            case 0x1F03D4u: goto label_1f03d4;
            case 0x1F03D8u: goto label_1f03d8;
            case 0x1F03DCu: goto label_1f03dc;
            case 0x1F03E0u: goto label_1f03e0;
            case 0x1F03E4u: goto label_1f03e4;
            case 0x1F03E8u: goto label_1f03e8;
            case 0x1F03ECu: goto label_1f03ec;
            case 0x1F03F0u: goto label_1f03f0;
            case 0x1F03F4u: goto label_1f03f4;
            case 0x1F03F8u: goto label_1f03f8;
            case 0x1F03FCu: goto label_1f03fc;
            case 0x1F0400u: goto label_1f0400;
            case 0x1F0404u: goto label_1f0404;
            case 0x1F0408u: goto label_1f0408;
            case 0x1F040Cu: goto label_1f040c;
            case 0x1F0410u: goto label_1f0410;
            case 0x1F0414u: goto label_1f0414;
            case 0x1F0418u: goto label_1f0418;
            case 0x1F041Cu: goto label_1f041c;
            case 0x1F0420u: goto label_1f0420;
            case 0x1F0424u: goto label_1f0424;
            case 0x1F0428u: goto label_1f0428;
            case 0x1F042Cu: goto label_1f042c;
            case 0x1F0430u: goto label_1f0430;
            case 0x1F0434u: goto label_1f0434;
            case 0x1F0438u: goto label_1f0438;
            case 0x1F043Cu: goto label_1f043c;
            case 0x1F0440u: goto label_1f0440;
            case 0x1F0444u: goto label_1f0444;
            case 0x1F0448u: goto label_1f0448;
            case 0x1F044Cu: goto label_1f044c;
            case 0x1F0450u: goto label_1f0450;
            case 0x1F0454u: goto label_1f0454;
            case 0x1F0458u: goto label_1f0458;
            case 0x1F045Cu: goto label_1f045c;
            case 0x1F0460u: goto label_1f0460;
            case 0x1F0464u: goto label_1f0464;
            case 0x1F0468u: goto label_1f0468;
            case 0x1F046Cu: goto label_1f046c;
            case 0x1F0470u: goto label_1f0470;
            case 0x1F0474u: goto label_1f0474;
            case 0x1F0478u: goto label_1f0478;
            case 0x1F047Cu: goto label_1f047c;
            case 0x1F0480u: goto label_1f0480;
            case 0x1F0484u: goto label_1f0484;
            case 0x1F0488u: goto label_1f0488;
            case 0x1F048Cu: goto label_1f048c;
            case 0x1F0490u: goto label_1f0490;
            case 0x1F0494u: goto label_1f0494;
            case 0x1F0498u: goto label_1f0498;
            case 0x1F049Cu: goto label_1f049c;
            case 0x1F04A0u: goto label_1f04a0;
            case 0x1F04A4u: goto label_1f04a4;
            case 0x1F04A8u: goto label_1f04a8;
            case 0x1F04ACu: goto label_1f04ac;
            case 0x1F04B0u: goto label_1f04b0;
            case 0x1F04B4u: goto label_1f04b4;
            case 0x1F04B8u: goto label_1f04b8;
            case 0x1F04BCu: goto label_1f04bc;
            case 0x1F04C0u: goto label_1f04c0;
            case 0x1F04C4u: goto label_1f04c4;
            case 0x1F04C8u: goto label_1f04c8;
            case 0x1F04CCu: goto label_1f04cc;
            case 0x1F04D0u: goto label_1f04d0;
            case 0x1F04D4u: goto label_1f04d4;
            case 0x1F04D8u: goto label_1f04d8;
            case 0x1F04DCu: goto label_1f04dc;
            case 0x1F04E0u: goto label_1f04e0;
            case 0x1F04E4u: goto label_1f04e4;
            case 0x1F04E8u: goto label_1f04e8;
            case 0x1F04ECu: goto label_1f04ec;
            case 0x1F04F0u: goto label_1f04f0;
            case 0x1F04F4u: goto label_1f04f4;
            case 0x1F04F8u: goto label_1f04f8;
            case 0x1F04FCu: goto label_1f04fc;
            case 0x1F0500u: goto label_1f0500;
            case 0x1F0504u: goto label_1f0504;
            case 0x1F0508u: goto label_1f0508;
            case 0x1F050Cu: goto label_1f050c;
            case 0x1F0510u: goto label_1f0510;
            case 0x1F0514u: goto label_1f0514;
            case 0x1F0518u: goto label_1f0518;
            case 0x1F051Cu: goto label_1f051c;
            case 0x1F0520u: goto label_1f0520;
            case 0x1F0524u: goto label_1f0524;
            case 0x1F0528u: goto label_1f0528;
            case 0x1F052Cu: goto label_1f052c;
            case 0x1F0530u: goto label_1f0530;
            case 0x1F0534u: goto label_1f0534;
            case 0x1F0538u: goto label_1f0538;
            case 0x1F053Cu: goto label_1f053c;
            case 0x1F0540u: goto label_1f0540;
            case 0x1F0544u: goto label_1f0544;
            case 0x1F0548u: goto label_1f0548;
            case 0x1F054Cu: goto label_1f054c;
            case 0x1F0550u: goto label_1f0550;
            case 0x1F0554u: goto label_1f0554;
            case 0x1F0558u: goto label_1f0558;
            case 0x1F055Cu: goto label_1f055c;
            case 0x1F0560u: goto label_1f0560;
            case 0x1F0564u: goto label_1f0564;
            case 0x1F0568u: goto label_1f0568;
            case 0x1F056Cu: goto label_1f056c;
            case 0x1F0570u: goto label_1f0570;
            case 0x1F0574u: goto label_1f0574;
            case 0x1F0578u: goto label_1f0578;
            case 0x1F057Cu: goto label_1f057c;
            case 0x1F0580u: goto label_1f0580;
            case 0x1F0584u: goto label_1f0584;
            case 0x1F0588u: goto label_1f0588;
            case 0x1F058Cu: goto label_1f058c;
            case 0x1F0590u: goto label_1f0590;
            case 0x1F0594u: goto label_1f0594;
            case 0x1F0598u: goto label_1f0598;
            case 0x1F059Cu: goto label_1f059c;
            case 0x1F05A0u: goto label_1f05a0;
            case 0x1F05A4u: goto label_1f05a4;
            case 0x1F05A8u: goto label_1f05a8;
            case 0x1F05ACu: goto label_1f05ac;
            case 0x1F05B0u: goto label_1f05b0;
            case 0x1F05B4u: goto label_1f05b4;
            case 0x1F05B8u: goto label_1f05b8;
            case 0x1F05BCu: goto label_1f05bc;
            case 0x1F05C0u: goto label_1f05c0;
            case 0x1F05C4u: goto label_1f05c4;
            case 0x1F05C8u: goto label_1f05c8;
            case 0x1F05CCu: goto label_1f05cc;
            case 0x1F05D0u: goto label_1f05d0;
            case 0x1F05D4u: goto label_1f05d4;
            case 0x1F05D8u: goto label_1f05d8;
            case 0x1F05DCu: goto label_1f05dc;
            case 0x1F05E0u: goto label_1f05e0;
            case 0x1F05E4u: goto label_1f05e4;
            case 0x1F05E8u: goto label_1f05e8;
            case 0x1F05ECu: goto label_1f05ec;
            case 0x1F05F0u: goto label_1f05f0;
            case 0x1F05F4u: goto label_1f05f4;
            case 0x1F05F8u: goto label_1f05f8;
            case 0x1F05FCu: goto label_1f05fc;
            case 0x1F0600u: goto label_1f0600;
            case 0x1F0604u: goto label_1f0604;
            case 0x1F0608u: goto label_1f0608;
            case 0x1F060Cu: goto label_1f060c;
            case 0x1F0610u: goto label_1f0610;
            case 0x1F0614u: goto label_1f0614;
            case 0x1F0618u: goto label_1f0618;
            case 0x1F061Cu: goto label_1f061c;
            case 0x1F0620u: goto label_1f0620;
            case 0x1F0624u: goto label_1f0624;
            case 0x1F0628u: goto label_1f0628;
            case 0x1F062Cu: goto label_1f062c;
            case 0x1F0630u: goto label_1f0630;
            case 0x1F0634u: goto label_1f0634;
            case 0x1F0638u: goto label_1f0638;
            case 0x1F063Cu: goto label_1f063c;
            case 0x1F0640u: goto label_1f0640;
            case 0x1F0644u: goto label_1f0644;
            case 0x1F0648u: goto label_1f0648;
            case 0x1F064Cu: goto label_1f064c;
            case 0x1F0650u: goto label_1f0650;
            case 0x1F0654u: goto label_1f0654;
            case 0x1F0658u: goto label_1f0658;
            case 0x1F065Cu: goto label_1f065c;
            case 0x1F0660u: goto label_1f0660;
            case 0x1F0664u: goto label_1f0664;
            case 0x1F0668u: goto label_1f0668;
            case 0x1F066Cu: goto label_1f066c;
            case 0x1F0670u: goto label_1f0670;
            case 0x1F0674u: goto label_1f0674;
            case 0x1F0678u: goto label_1f0678;
            case 0x1F067Cu: goto label_1f067c;
            case 0x1F0680u: goto label_1f0680;
            case 0x1F0684u: goto label_1f0684;
            case 0x1F0688u: goto label_1f0688;
            case 0x1F068Cu: goto label_1f068c;
            case 0x1F0690u: goto label_1f0690;
            case 0x1F0694u: goto label_1f0694;
            case 0x1F0698u: goto label_1f0698;
            case 0x1F069Cu: goto label_1f069c;
            case 0x1F06A0u: goto label_1f06a0;
            case 0x1F06A4u: goto label_1f06a4;
            case 0x1F06A8u: goto label_1f06a8;
            case 0x1F06ACu: goto label_1f06ac;
            case 0x1F06B0u: goto label_1f06b0;
            case 0x1F06B4u: goto label_1f06b4;
            case 0x1F06B8u: goto label_1f06b8;
            case 0x1F06BCu: goto label_1f06bc;
            case 0x1F06C0u: goto label_1f06c0;
            case 0x1F06C4u: goto label_1f06c4;
            case 0x1F06C8u: goto label_1f06c8;
            case 0x1F06CCu: goto label_1f06cc;
            case 0x1F06D0u: goto label_1f06d0;
            case 0x1F06D4u: goto label_1f06d4;
            case 0x1F06D8u: goto label_1f06d8;
            case 0x1F06DCu: goto label_1f06dc;
            case 0x1F06E0u: goto label_1f06e0;
            case 0x1F06E4u: goto label_1f06e4;
            case 0x1F06E8u: goto label_1f06e8;
            case 0x1F06ECu: goto label_1f06ec;
            case 0x1F06F0u: goto label_1f06f0;
            case 0x1F06F4u: goto label_1f06f4;
            case 0x1F06F8u: goto label_1f06f8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f06f4:
    ctx->pc = 0x1F06FCu;
}
