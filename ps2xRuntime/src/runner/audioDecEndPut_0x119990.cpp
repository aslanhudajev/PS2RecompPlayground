#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecEndPut
// Address: 0x119990 - 0x119aac
void audioDecEndPut_0x119990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecEndPut_0x119990");
#endif

    ctx->pc = 0x119990u;

    // 0x119990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x119990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x119994: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x119994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x119998: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x119998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11999c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11999cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1199a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1199a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199a4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1199a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1199a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1199a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1199ac: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1199ACu;
    {
        const bool branch_taken_0x1199ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199ACu;
            // 0x1199b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199ac) {
            ctx->pc = 0x119A5Cu;
            goto label_119a5c;
        }
    }
    ctx->pc = 0x1199B4u;
    // 0x1199b4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1199b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1199b8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1199b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1199bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1199bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1199c0: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x1199c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1199c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1199c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1199c8: 0x223900a  movz        $s2, $s1, $v1
    ctx->pc = 0x1199c8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
    // 0x1199cc: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x1199ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1199d0: 0x2c820028  sltiu       $v0, $a0, 0x28
    ctx->pc = 0x1199d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x1199d4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1199D4u;
    {
        const bool branch_taken_0x1199d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1199D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1199D4u;
            // 0x1199d8: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1199d4) {
            ctx->pc = 0x119A58u;
            goto label_119a58;
        }
    }
    ctx->pc = 0x1199DCu;
    // 0x1199dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1199dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1199e0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1199e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1199e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1199e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1199e8: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x1199E8u;
    SET_GPR_U32(ctx, 31, 0x1199F0u);
    ctx->pc = 0x1199ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1199E8u;
            // 0x1199ec: 0x248444c0  addiu       $a0, $a0, 0x44C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F0u; }
        if (ctx->pc != 0x1199F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1199F0u; }
        if (ctx->pc != 0x1199F0u) { return; }
    }
    ctx->pc = 0x1199F0u;
    // 0x1199f0: 0x8e0d0014  lw          $t5, 0x14($s0)
    ctx->pc = 0x1199f0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1199f4: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x1199f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x1199f8: 0x8e0c0018  lw          $t4, 0x18($s0)
    ctx->pc = 0x1199f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1199fc: 0x248444f8  addiu       $a0, $a0, 0x44F8
    ctx->pc = 0x1199fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    // 0x119a00: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x119a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x119a04: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x119a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x119a08: 0x8e0a000c  lw          $t2, 0xC($s0)
    ctx->pc = 0x119a08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x119a0c: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x119a0cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119a10: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x119a10u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x119a14: 0x82060005  lb          $a2, 0x5($s0)
    ctx->pc = 0x119a14u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x119a18: 0x82070006  lb          $a3, 0x6($s0)
    ctx->pc = 0x119a18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x119a1c: 0x82080007  lb          $t0, 0x7($s0)
    ctx->pc = 0x119a1cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x119a20: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x119a20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119a24: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x119a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x119a28: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x119a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x119a2c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x119a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x119a30: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x119A30u;
    SET_GPR_U32(ctx, 31, 0x119A38u);
    ctx->pc = 0x119A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A30u;
            // 0x119a34: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A38u; }
        if (ctx->pc != 0x119A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A38u; }
        if (ctx->pc != 0x119A38u) { return; }
    }
    ctx->pc = 0x119A38u;
    // 0x119a38: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x119a38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x119a3c: 0x82050024  lb          $a1, 0x24($s0)
    ctx->pc = 0x119a3cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x119a40: 0x82060025  lb          $a2, 0x25($s0)
    ctx->pc = 0x119a40u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x119a44: 0x24844638  addiu       $a0, $a0, 0x4638
    ctx->pc = 0x119a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17976));
    // 0x119a48: 0x82070026  lb          $a3, 0x26($s0)
    ctx->pc = 0x119a48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 38)));
    // 0x119a4c: 0x82080027  lb          $t0, 0x27($s0)
    ctx->pc = 0x119a4cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 39)));
    // 0x119a50: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x119A50u;
    SET_GPR_U32(ctx, 31, 0x119A58u);
    ctx->pc = 0x119A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119A50u;
            // 0x119a54: 0x8e090028  lw          $t1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A58u; }
        if (ctx->pc != 0x119A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119A58u; }
        if (ctx->pc != 0x119A58u) { return; }
    }
    ctx->pc = 0x119A58u;
label_119a58:
    // 0x119a58: 0x2328823  subu        $s1, $s1, $s2
    ctx->pc = 0x119a58u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_119a5c:
    // 0x119a5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x119a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x119a60: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x119a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x119a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119a68: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x119a68u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x119a6c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x119A6Cu;
    {
        const bool branch_taken_0x119a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x119a6c) {
            ctx->pc = 0x119A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119A6Cu;
            // 0x119a70: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x119A74u;
            goto label_119a74;
        }
    }
    ctx->pc = 0x119A74u;
label_119a74:
    // 0x119a74: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x119a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x119a78: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x119a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x119a7c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x119a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x119a80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x119a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x119a84: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x119a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x119a88: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x119a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x119a8c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x119a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x119a90: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x119a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x119a94: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x119a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119a98: 0x2010  mfhi        $a0
    ctx->pc = 0x119a98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x119a9c: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x119a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x119aa0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x119aa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x119AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119AA4u;
            // 0x119aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119A58u: goto label_119a58;
            case 0x119A5Cu: goto label_119a5c;
            case 0x119A74u: goto label_119a74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119AACu;
}
