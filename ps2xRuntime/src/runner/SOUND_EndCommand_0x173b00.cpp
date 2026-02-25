#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_EndCommand
// Address: 0x173b00 - 0x173d68
void SOUND_EndCommand_0x173b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_EndCommand_0x173b00");
#endif

    ctx->pc = 0x173b00u;

    // 0x173b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173b04: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173b0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x173b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173b14: 0x8c25a050  lw          $a1, -0x5FB0($at)
    ctx->pc = 0x173b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294942800)));
    // 0x173b18: 0x14a3000b  bne         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x173B18u;
    {
        const bool branch_taken_0x173b18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x173B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B18u;
            // 0x173b1c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b18) {
            ctx->pc = 0x173B48u;
            goto label_173b48;
        }
    }
    ctx->pc = 0x173B20u;
    // 0x173b20: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173B20u;
    SET_GPR_U32(ctx, 31, 0x173B28u);
    ctx->pc = 0x173B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B20u;
            // 0x173b24: 0x248417d0  addiu       $a0, $a0, 0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B28u; }
        if (ctx->pc != 0x173B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B28u; }
        if (ctx->pc != 0x173B28u) { return; }
    }
    ctx->pc = 0x173B28u;
    // 0x173b28: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173b28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173b2c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173B2Cu;
    SET_GPR_U32(ctx, 31, 0x173B34u);
    ctx->pc = 0x173B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B2Cu;
            // 0x173b30: 0x248417f0  addiu       $a0, $a0, 0x17F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B34u; }
        if (ctx->pc != 0x173B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B34u; }
        if (ctx->pc != 0x173B34u) { return; }
    }
    ctx->pc = 0x173B34u;
    // 0x173b34: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x173b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x173b38: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173B38u;
    SET_GPR_U32(ctx, 31, 0x173B40u);
    ctx->pc = 0x173B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B38u;
            // 0x173b3c: 0x24841830  addiu       $a0, $a0, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B40u; }
        if (ctx->pc != 0x173B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B40u; }
        if (ctx->pc != 0x173B40u) { return; }
    }
    ctx->pc = 0x173B40u;
    // 0x173b40: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x173B40u;
    {
        const bool branch_taken_0x173b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b40) {
            ctx->pc = 0x173D58u;
            goto label_173d58;
        }
    }
    ctx->pc = 0x173B48u;
label_173b48:
    // 0x173b48: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173b4c: 0x8c2c0ab0  lw          $t4, 0xAB0($at)
    ctx->pc = 0x173b4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173b50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173b54: 0x8c2809d0  lw          $t0, 0x9D0($at)
    ctx->pc = 0x173b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2512)));
    // 0x173b58: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x173b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x173b5c: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x173b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x173b60: 0x2c630400  sltiu       $v1, $v1, 0x400
    ctx->pc = 0x173b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x173b64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x173B64u;
    {
        const bool branch_taken_0x173b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173B64u;
            // 0x173b68: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173b64) {
            ctx->pc = 0x173B80u;
            goto label_173b80;
        }
    }
    ctx->pc = 0x173B6Cu;
    // 0x173b6c: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x173B6Cu;
    SET_GPR_U32(ctx, 31, 0x173B74u);
    ctx->pc = 0x173B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173B6Cu;
            // 0x173b70: 0x24841850  addiu       $a0, $a0, 0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B74u; }
        if (ctx->pc != 0x173B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173B74u; }
        if (ctx->pc != 0x173B74u) { return; }
    }
    ctx->pc = 0x173B74u;
    // 0x173b74: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x173B74u;
    {
        const bool branch_taken_0x173b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173b74) {
            ctx->pc = 0x173D58u;
            goto label_173d58;
        }
    }
    ctx->pc = 0x173B7Cu;
    // 0x173b7c: 0x0  nop
    ctx->pc = 0x173b7cu;
    // NOP
label_173b80:
    // 0x173b80: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x173b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x173b84: 0x83040  sll         $a2, $t0, 1
    ctx->pc = 0x173b84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x173b88: 0x24841f82  addiu       $a0, $a0, 0x1F82
    ctx->pc = 0x173b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8066));
    // 0x173b8c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x173b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x173b90: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173b94: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x173b94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x173b98: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173b9c: 0x8c240ab0  lw          $a0, 0xAB0($at)
    ctx->pc = 0x173b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173ba0: 0x24631f84  addiu       $v1, $v1, 0x1F84
    ctx->pc = 0x173ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8068));
    // 0x173ba4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x173ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x173ba8: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x173ba8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bac: 0x4082b  sltu        $at, $zero, $a0
    ctx->pc = 0x173bacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x173bb0: 0x10200055  beqz        $at, . + 4 + (0x55 << 2)
    ctx->pc = 0x173BB0u;
    {
        const bool branch_taken_0x173bb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BB0u;
            // 0x173bb4: 0xa4640000  sh          $a0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bb0) {
            ctx->pc = 0x173D08u;
            goto label_173d08;
        }
    }
    ctx->pc = 0x173BB8u;
    // 0x173bb8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173bbc: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173bc0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x173bc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x173bc4: 0x1420003c  bnez        $at, . + 4 + (0x3C << 2)
    ctx->pc = 0x173BC4u;
    {
        const bool branch_taken_0x173bc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x173BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173BC4u;
            // 0x173bc8: 0x246dfff8  addiu       $t5, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bc4) {
            ctx->pc = 0x173CB8u;
            goto label_173cb8;
        }
    }
    ctx->pc = 0x173BCCu;
    // 0x173bcc: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173bd0: 0x3c0b003a  lui         $t3, 0x3A
    ctx->pc = 0x173bd0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)58 << 16));
    // 0x173bd4: 0x8c2a09d0  lw          $t2, 0x9D0($at)
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2512)));
    // 0x173bd8: 0x256b1780  addiu       $t3, $t3, 0x1780
    ctx->pc = 0x173bd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6016));
    // 0x173bdc: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x173bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173be0: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x173be0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x173be4: 0x24e71f80  addiu       $a3, $a3, 0x1F80
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8064));
label_173be8:
    // 0x173be8: 0x956f0000  lhu         $t7, 0x0($t3)
    ctx->pc = 0x173be8u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x173bec: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x173becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x173bf0: 0x25c30001  addiu       $v1, $t6, 0x1
    ctx->pc = 0x173bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x173bf4: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x173bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x173bf8: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x173bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x173bfc: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x173bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173c00: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x173c00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x173c04: 0x25c30002  addiu       $v1, $t6, 0x2
    ctx->pc = 0x173c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x173c08: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x173c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x173c0c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x173c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x173c10: 0xa4af0006  sh          $t7, 0x6($a1)
    ctx->pc = 0x173c10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 15));
    // 0x173c14: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x173c14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173c18: 0x95700002  lhu         $s0, 0x2($t3)
    ctx->pc = 0x173c18u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x173c1c: 0x25c30003  addiu       $v1, $t6, 0x3
    ctx->pc = 0x173c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 3));
    // 0x173c20: 0x25cf0005  addiu       $t7, $t6, 0x5
    ctx->pc = 0x173c20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 5));
    // 0x173c24: 0xe42821  addu        $a1, $a3, $a0
    ctx->pc = 0x173c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x173c28: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x173c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x173c2c: 0x12f7821  addu        $t7, $t1, $t7
    ctx->pc = 0x173c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x173c30: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x173c30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173c34: 0xfc040  sll         $t8, $t7, 1
    ctx->pc = 0x173c34u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 15), 1));
    // 0x173c38: 0x25c30004  addiu       $v1, $t6, 0x4
    ctx->pc = 0x173c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x173c3c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x173c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x173c40: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x173c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x173c44: 0xf8c821  addu        $t9, $a3, $t8
    ctx->pc = 0x173c44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x173c48: 0xa4d00006  sh          $s0, 0x6($a2)
    ctx->pc = 0x173c48u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x173c4c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x173c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173c50: 0x95700004  lhu         $s0, 0x4($t3)
    ctx->pc = 0x173c50u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x173c54: 0x25cf0006  addiu       $t7, $t6, 0x6
    ctx->pc = 0x173c54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 6));
    // 0x173c58: 0x12f3021  addu        $a2, $t1, $t7
    ctx->pc = 0x173c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 15)));
    // 0x173c5c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x173c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x173c60: 0x67840  sll         $t7, $a2, 1
    ctx->pc = 0x173c60u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x173c64: 0x25c60007  addiu       $a2, $t6, 0x7
    ctx->pc = 0x173c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 7));
    // 0x173c68: 0xefc021  addu        $t8, $a3, $t7
    ctx->pc = 0x173c68u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x173c6c: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x173c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x173c70: 0x25ce0008  addiu       $t6, $t6, 0x8
    ctx->pc = 0x173c70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x173c74: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x173c74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x173c78: 0xa4b00006  sh          $s0, 0x6($a1)
    ctx->pc = 0x173c78u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x173c7c: 0xe67821  addu        $t7, $a3, $a2
    ctx->pc = 0x173c7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x173c80: 0x95650006  lhu         $a1, 0x6($t3)
    ctx->pc = 0x173c80u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x173c84: 0x1cd302b  sltu        $a2, $t6, $t5
    ctx->pc = 0x173c84u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x173c88: 0xa4850006  sh          $a1, 0x6($a0)
    ctx->pc = 0x173c88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x173c8c: 0x95640008  lhu         $a0, 0x8($t3)
    ctx->pc = 0x173c8cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x173c90: 0xa4640006  sh          $a0, 0x6($v1)
    ctx->pc = 0x173c90u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x173c94: 0x9563000a  lhu         $v1, 0xA($t3)
    ctx->pc = 0x173c94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 10)));
    // 0x173c98: 0xa7230006  sh          $v1, 0x6($t9)
    ctx->pc = 0x173c98u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x173c9c: 0x9563000c  lhu         $v1, 0xC($t3)
    ctx->pc = 0x173c9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x173ca0: 0xa7030006  sh          $v1, 0x6($t8)
    ctx->pc = 0x173ca0u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x173ca4: 0x9563000e  lhu         $v1, 0xE($t3)
    ctx->pc = 0x173ca4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 14)));
    // 0x173ca8: 0xa5e30006  sh          $v1, 0x6($t7)
    ctx->pc = 0x173ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x173cac: 0x14c0ffce  bnez        $a2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x173CACu;
    {
        const bool branch_taken_0x173cac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x173CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CACu;
            // 0x173cb0: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cac) {
            ctx->pc = 0x173BE8u;
            goto label_173be8;
        }
    }
    ctx->pc = 0x173CB4u;
    // 0x173cb4: 0x0  nop
    ctx->pc = 0x173cb4u;
    // NOP
label_173cb8:
    // 0x173cb8: 0x1cc082b  sltu        $at, $t6, $t4
    ctx->pc = 0x173cb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x173cbc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x173CBCu;
    {
        const bool branch_taken_0x173cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x173CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CBCu;
            // 0x173cc0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cbc) {
            ctx->pc = 0x173D08u;
            goto label_173d08;
        }
    }
    ctx->pc = 0x173CC4u;
    // 0x173cc4: 0x10e3821  addu        $a3, $t0, $t6
    ctx->pc = 0x173cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x173cc8: 0xe2040  sll         $a0, $t6, 1
    ctx->pc = 0x173cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x173ccc: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x173cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x173cd0: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x173cd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173cd4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x173cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x173cd8: 0x24a51f80  addiu       $a1, $a1, 0x1F80
    ctx->pc = 0x173cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8064));
    // 0x173cdc: 0x0  nop
    ctx->pc = 0x173cdcu;
    // NOP
label_173ce0:
    // 0x173ce0: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x173ce0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x173ce4: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x173ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x173ce8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x173ce8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x173cec: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x173cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173cf0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x173cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x173cf4: 0x1cc182b  sltu        $v1, $t6, $t4
    ctx->pc = 0x173cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x173cf8: 0xa4860006  sh          $a2, 0x6($a0)
    ctx->pc = 0x173cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x173cfc: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x173CFCu;
    {
        const bool branch_taken_0x173cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173CFCu;
            // 0x173d00: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cfc) {
            ctx->pc = 0x173CE0u;
            goto label_173ce0;
        }
    }
    ctx->pc = 0x173D04u;
    // 0x173d04: 0x0  nop
    ctx->pc = 0x173d04u;
    // NOP
label_173d08:
    // 0x173d08: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d0c: 0xac200ab0  sw          $zero, 0xAB0($at)
    ctx->pc = 0x173d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 0));
    // 0x173d10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173d14: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d18: 0x8c2409d0  lw          $a0, 0x9D0($at)
    ctx->pc = 0x173d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2512)));
    // 0x173d1c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x173d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x173d20: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x173d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x173d24: 0xac23a050  sw          $v1, -0x5FB0($at)
    ctx->pc = 0x173d24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942800), GPR_U32(ctx, 3));
    // 0x173d28: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d2c: 0x94231f80  lhu         $v1, 0x1F80($at)
    ctx->pc = 0x173d2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 8064)));
    // 0x173d30: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173d38: 0xac2409d0  sw          $a0, 0x9D0($at)
    ctx->pc = 0x173d38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2512), GPR_U32(ctx, 4));
    // 0x173d3c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d40: 0x8c2409d0  lw          $a0, 0x9D0($at)
    ctx->pc = 0x173d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2512)));
    // 0x173d44: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d48: 0xa4231f80  sh          $v1, 0x1F80($at)
    ctx->pc = 0x173d48u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 8064), (uint16_t)GPR_U32(ctx, 3));
    // 0x173d4c: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x173d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x173d50: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173d54: 0xac2309d0  sw          $v1, 0x9D0($at)
    ctx->pc = 0x173d54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2512), GPR_U32(ctx, 3));
label_173d58:
    // 0x173d58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173d5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d60: 0x3e00008  jr          $ra
    ctx->pc = 0x173D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D60u;
            // 0x173d64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173B48u: goto label_173b48;
            case 0x173B80u: goto label_173b80;
            case 0x173BE8u: goto label_173be8;
            case 0x173CB8u: goto label_173cb8;
            case 0x173CE0u: goto label_173ce0;
            case 0x173D08u: goto label_173d08;
            case 0x173D58u: goto label_173d58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173D68u;
}
