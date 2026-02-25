#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResetPlayer
// Address: 0x18da70 - 0x18db9c
void ResetPlayer_0x18da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResetPlayer_0x18da70");
#endif

    ctx->pc = 0x18da70u;

    // 0x18da70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18da70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18da74: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x18da74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18da78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18da78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18da7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18da80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18da84: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18da88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18da8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x18da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x18da90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18da90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18da94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18da94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18da98: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x18da98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18da9c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x18da9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18daa0: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x18daa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18daa4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x18DAA4u;
    SET_GPR_U32(ctx, 31, 0x18DAACu);
    ctx->pc = 0x18DAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18DAA4u;
            // 0x18daa8: 0x26060060  addiu       $a2, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAACu; }
        if (ctx->pc != 0x18DAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18DAACu; }
        if (ctx->pc != 0x18DAACu) { return; }
    }
    ctx->pc = 0x18DAACu;
    // 0x18daac: 0xae000098  sw          $zero, 0x98($s0)
    ctx->pc = 0x18daacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 0));
    // 0x18dab0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18dab4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x18dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x18dab8: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x18dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x18dabc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x18dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x18dac0: 0x24633548  addiu       $v1, $v1, 0x3548
    ctx->pc = 0x18dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13640));
    // 0x18dac4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x18dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x18dac8: 0x643821  addu        $a3, $v1, $a0
    ctx->pc = 0x18dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dacc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x18daccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x18dad0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18dad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18dad4: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x18dad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x18dad8: 0x24633558  addiu       $v1, $v1, 0x3558
    ctx->pc = 0x18dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13656));
    // 0x18dadc: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x18dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x18dae0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x18dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dae4: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x18dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x18dae8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x18dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x18daec: 0xae110070  sw          $s1, 0x70($s0)
    ctx->pc = 0x18daecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 17));
    // 0x18daf0: 0x24633550  addiu       $v1, $v1, 0x3550
    ctx->pc = 0x18daf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13648));
    // 0x18daf4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x18daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18daf8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18dafc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18db00: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x18db00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x18db04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18db04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db08: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x18db08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18db0c: 0xae060074  sw          $a2, 0x74($s0)
    ctx->pc = 0x18db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 6));
    // 0x18db10: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x18db10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18db14: 0xae06007c  sw          $a2, 0x7C($s0)
    ctx->pc = 0x18db14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 6));
    // 0x18db18: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x18db18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18db1c: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x18db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
    // 0x18db20: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x18db20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18db24: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x18db24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
    // 0x18db28: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x18db28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
    // 0x18db2c: 0x8c231618  lw          $v1, 0x1618($at)
    ctx->pc = 0x18db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5656)));
    // 0x18db30: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x18db30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
    // 0x18db34: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x18db34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x18db38: 0x8c23161c  lw          $v1, 0x161C($at)
    ctx->pc = 0x18db38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5660)));
    // 0x18db3c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x18db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x18db40: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x18db40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x18db44: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x18db44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x18db48: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x18db48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x18db4c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x18db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x18db50: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x18db50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x18db54: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x18db54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x18db58: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x18db58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x18db5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x18db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_18db60:
    // 0x18db60: 0xad0000e4  sw          $zero, 0xE4($t0)
    ctx->pc = 0x18db60u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 228), GPR_U32(ctx, 0));
    // 0x18db64: 0xad0000e8  sw          $zero, 0xE8($t0)
    ctx->pc = 0x18db64u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 232), GPR_U32(ctx, 0));
    // 0x18db68: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x18db68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x18db6c: 0xad0000ec  sw          $zero, 0xEC($t0)
    ctx->pc = 0x18db6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 236), GPR_U32(ctx, 0));
    // 0x18db70: 0x2923000a  slti        $v1, $t1, 0xA
    ctx->pc = 0x18db70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x18db74: 0xad0000f0  sw          $zero, 0xF0($t0)
    ctx->pc = 0x18db74u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 240), GPR_U32(ctx, 0));
    // 0x18db78: 0xad0000f4  sw          $zero, 0xF4($t0)
    ctx->pc = 0x18db78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 244), GPR_U32(ctx, 0));
    // 0x18db7c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18DB7Cu;
    {
        const bool branch_taken_0x18db7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB7Cu;
            // 0x18db80: 0x25080014  addiu       $t0, $t0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18db7c) {
            ctx->pc = 0x18DB60u;
            goto label_18db60;
        }
    }
    ctx->pc = 0x18DB84u;
    // 0x18db84: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x18db84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x18db88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18db88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18db8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18db8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18db90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18db90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18db94: 0x3e00008  jr          $ra
    ctx->pc = 0x18DB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18DB94u;
            // 0x18db98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18DB60u: goto label_18db60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18DB9Cu;
}
