#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: videoCallback
// Address: 0x188ba0 - 0x188cb8
void videoCallback_0x188ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("videoCallback_0x188ba0");
#endif

    ctx->pc = 0x188ba0u;

    // 0x188ba0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x188ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x188ba4: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x188ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x188ba8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x188ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x188bac: 0xc10821  addu        $at, $a2, $at
    ctx->pc = 0x188bacu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 1)));
    // 0x188bb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x188bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x188bb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x188bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x188bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x188bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x188bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x188bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x188bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188bc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188bc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x188bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188bcc: 0x8c220008  lw          $v0, 0x8($at)
    ctx->pc = 0x188bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8)));
    // 0x188bd0: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x188bd4: 0x8cb2000c  lw          $s2, 0xC($a1)
    ctx->pc = 0x188bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x188bd8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188bdc: 0x53a823  subu        $s5, $v0, $s3
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x188be0: 0x255082b  sltu        $at, $s2, $s5
    ctx->pc = 0x188be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x188be4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x188BE4u;
    {
        const bool branch_taken_0x188be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x188BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188BE4u;
            // 0x188be8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188be4) {
            ctx->pc = 0x188BF0u;
            goto label_188bf0;
        }
    }
    ctx->pc = 0x188BECu;
    // 0x188bec: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x188becu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_188bf0:
    // 0x188bf0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188bf4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x188bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x188bf8: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x188bfc: 0x27a60074  addiu       $a2, $sp, 0x74
    ctx->pc = 0x188bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x188c00: 0x27a70078  addiu       $a3, $sp, 0x78
    ctx->pc = 0x188c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x188c04: 0xc062a70  jal         func_18A9C0
    ctx->pc = 0x188C04u;
    SET_GPR_U32(ctx, 31, 0x188C0Cu);
    ctx->pc = 0x188C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C04u;
            // 0x188c08: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9C0u;
    if (runtime->hasFunction(0x18A9C0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C0Cu; }
        if (ctx->pc != 0x188C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecBeginPut_0x18a9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C0Cu; }
        if (ctx->pc != 0x188C0Cu) { return; }
    }
    ctx->pc = 0x188C0Cu;
    // 0x188c0c: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x188C0Cu;
    SET_GPR_U32(ctx, 31, 0x188C14u);
    ctx->pc = 0x188C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C0Cu;
            // 0x188c10: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C14u; }
        if (ctx->pc != 0x188C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C14u; }
        if (ctx->pc != 0x188C14u) { return; }
    }
    ctx->pc = 0x188C14u;
    // 0x188c14: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x188c18: 0xc061ecc  jal         func_187B30
    ctx->pc = 0x188C18u;
    SET_GPR_U32(ctx, 31, 0x188C20u);
    ctx->pc = 0x188C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C18u;
            // 0x188c1c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187B30u;
    if (runtime->hasFunction(0x187B30u)) {
        auto targetFn = runtime->lookupFunction(0x187B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C20u; }
        if (ctx->pc != 0x188C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UncAddr_0x187b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C20u; }
        if (ctx->pc != 0x188C20u) { return; }
    }
    ctx->pc = 0x188C20u;
    // 0x188c20: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x188c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x188c24: 0x2555823  subu        $t3, $s2, $s5
    ctx->pc = 0x188c24u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x188c28: 0x8fa70070  lw          $a3, 0x70($sp)
    ctx->pc = 0x188c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x188c2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x188c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c30: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x188c30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c34: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x188c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c38: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x188c38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c3c: 0xc062264  jal         func_188990
    ctx->pc = 0x188C3Cu;
    SET_GPR_U32(ctx, 31, 0x188C44u);
    ctx->pc = 0x188C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C3Cu;
            // 0x188c40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188990u;
    if (runtime->hasFunction(0x188990u)) {
        auto targetFn = runtime->lookupFunction(0x188990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C44u; }
        if (ctx->pc != 0x188C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copy2area_0x188990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C44u; }
        if (ctx->pc != 0x188C44u) { return; }
    }
    ctx->pc = 0x188C44u;
    // 0x188c44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x188c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188c48: 0x1a00000d  blez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x188C48u;
    {
        const bool branch_taken_0x188c48 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x188c48) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188C50u;
    // 0x188c50: 0xde250010  ld          $a1, 0x10($s1)
    ctx->pc = 0x188c50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x188c54: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188c58: 0xde260018  ld          $a2, 0x18($s1)
    ctx->pc = 0x188c58u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x188c5c: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x188c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x188c60: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x188c64: 0xc062a40  jal         func_18A900
    ctx->pc = 0x188C64u;
    SET_GPR_U32(ctx, 31, 0x188C6Cu);
    ctx->pc = 0x188C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C64u;
            // 0x188c68: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A900u;
    if (runtime->hasFunction(0x18A900u)) {
        auto targetFn = runtime->lookupFunction(0x18A900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C6Cu; }
        if (ctx->pc != 0x188C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecPutTs_0x18a900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C6Cu; }
        if (ctx->pc != 0x188C6Cu) { return; }
    }
    ctx->pc = 0x188C6Cu;
    // 0x188c6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x188C6Cu;
    {
        const bool branch_taken_0x188c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188C6Cu;
            // 0x188c70: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188c6c) {
            ctx->pc = 0x188C80u;
            goto label_188c80;
        }
    }
    ctx->pc = 0x188C74u;
    // 0x188c74: 0xc062048  jal         func_188120
    ctx->pc = 0x188C74u;
    SET_GPR_U32(ctx, 31, 0x188C7Cu);
    ctx->pc = 0x188C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C74u;
            // 0x188c78: 0x248425d0  addiu       $a0, $a0, 0x25D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188120u;
    if (runtime->hasFunction(0x188120u)) {
        auto targetFn = runtime->lookupFunction(0x188120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C7Cu; }
        if (ctx->pc != 0x188C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ErrMessage_0x188120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C7Cu; }
        if (ctx->pc != 0x188C7Cu) { return; }
    }
    ctx->pc = 0x188C7Cu;
    // 0x188c7c: 0x0  nop
    ctx->pc = 0x188c7cu;
    // NOP
label_188c80:
    // 0x188c80: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x188c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x188c84: 0x2484fe00  addiu       $a0, $a0, -0x200
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966784));
    // 0x188c88: 0xc062a6c  jal         func_18A9B0
    ctx->pc = 0x188C88u;
    SET_GPR_U32(ctx, 31, 0x188C90u);
    ctx->pc = 0x188C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188C88u;
            // 0x188c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A9B0u;
    if (runtime->hasFunction(0x18A9B0u)) {
        auto targetFn = runtime->lookupFunction(0x18A9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C90u; }
        if (ctx->pc != 0x188C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        videoDecEndPut_0x18a9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188C90u; }
        if (ctx->pc != 0x188C90u) { return; }
    }
    ctx->pc = 0x188C90u;
    // 0x188c90: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x188c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x188c94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x188c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x188c98: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x188c98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x188c9c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x188c9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188ca0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x188ca0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x188ca4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x188ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188ca8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188cac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x188cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x188CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188CB0u;
            // 0x188cb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188BF0u: goto label_188bf0;
            case 0x188C80u: goto label_188c80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188CB8u;
}
