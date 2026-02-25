#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Get5BossNextStep
// Address: 0x1c3e20 - 0x1c4084
void Get5BossNextStep_0x1c3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Get5BossNextStep_0x1c3e20");
#endif

    ctx->pc = 0x1c3e20u;

    // 0x1c3e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3e24: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c3e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c3e2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3e30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c3e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c3e34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c3e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c3e38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e3c: 0x8c231c78  lw          $v1, 0x1C78($at)
    ctx->pc = 0x1c3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7288)));
    // 0x1c3e40: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1c3e40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1c3e44: 0x10200086  beqz        $at, . + 4 + (0x86 << 2)
    ctx->pc = 0x1C3E44u;
    {
        const bool branch_taken_0x1c3e44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E44u;
            // 0x1c3e48: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e44) {
            ctx->pc = 0x1C4060u;
            goto label_1c4060;
        }
    }
    ctx->pc = 0x1C3E4Cu;
    // 0x1c3e4c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1c3e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1c3e50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3e54: 0x24842ba0  addiu       $a0, $a0, 0x2BA0
    ctx->pc = 0x1c3e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11168));
    // 0x1c3e58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c3e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c3e5c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3e60: 0x600008  jr          $v1
    ctx->pc = 0x1C3E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3F28u: goto label_1c3f28;
            case 0x1C4000u: goto label_1c4000;
            case 0x1C4060u: goto label_1c4060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C3E68u;
label_1c3e68:
    // 0x1c3e68: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3E68u;
    SET_GPR_U32(ctx, 31, 0x1C3E70u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E70u; }
        if (ctx->pc != 0x1C3E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E70u; }
        if (ctx->pc != 0x1C3E70u) { return; }
    }
    ctx->pc = 0x1C3E70u;
    // 0x1c3e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3e70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1c3e74: 0x28410061  slti        $at, $v0, 0x61
    ctx->pc = 0x1c3e74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x1c3e78: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3E78u;
    {
        const bool branch_taken_0x1c3e78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3e78) {
            ctx->pc = 0x1C3EB0u;
            goto label_1c3eb0;
        }
    }
    ctx->pc = 0x1C3E80u;
    // 0x1c3e80: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3E80u;
    SET_GPR_U32(ctx, 31, 0x1C3E88u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E88u; }
        if (ctx->pc != 0x1C3E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E88u; }
        if (ctx->pc != 0x1C3E88u) { return; }
    }
    ctx->pc = 0x1C3E88u;
    // 0x1c3e88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3e8c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c3e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c3e90: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c3e90u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3e94: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x1c3e98: 0x0  nop
    ctx->pc = 0x1c3e98u;
    // NOP
    // 0x1c3e9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c3e9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c3ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3ea4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3ea8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1C3EA8u;
    {
        const bool branch_taken_0x1c3ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EA8u;
            // 0x1c3eac: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ea8) {
            ctx->pc = 0x1C3F00u;
            goto label_1c3f00;
        }
    }
    ctx->pc = 0x1C3EB0u;
label_1c3eb0:
    // 0x1c3eb0: 0x2a010bb8  slti        $at, $s0, 0xBB8
    ctx->pc = 0x1c3eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3000) ? 1 : 0);
    // 0x1c3eb4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3EB4u;
    {
        const bool branch_taken_0x1c3eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3eb4) {
            ctx->pc = 0x1C3EE0u;
            goto label_1c3ee0;
        }
    }
    ctx->pc = 0x1C3EBCu;
    // 0x1c3ebc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3EBCu;
    SET_GPR_U32(ctx, 31, 0x1C3EC4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC4u; }
        if (ctx->pc != 0x1C3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC4u; }
        if (ctx->pc != 0x1C3EC4u) { return; }
    }
    ctx->pc = 0x1C3EC4u;
    // 0x1c3ec4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c3ec4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3ec8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c3ecc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3eccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3ed0: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1c3ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
    // 0x1c3ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3ed8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C3ED8u;
    {
        const bool branch_taken_0x1c3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ED8u;
            // 0x1c3edc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ed8) {
            ctx->pc = 0x1C3F00u;
            goto label_1c3f00;
        }
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3EE0u;
    SET_GPR_U32(ctx, 31, 0x1C3EE8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EE8u; }
        if (ctx->pc != 0x1C3EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EE8u; }
        if (ctx->pc != 0x1C3EE8u) { return; }
    }
    ctx->pc = 0x1C3EE8u;
    // 0x1c3ee8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c3ee8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3eec: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c3ef0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3ef4: 0x2442aa40  addiu       $v0, $v0, -0x55C0
    ctx->pc = 0x1c3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x1c3ef8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3efc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c3f00:
    // 0x1c3f00: 0x3c03c1ec  lui         $v1, 0xC1EC
    ctx->pc = 0x1c3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49644 << 16));
    // 0x1c3f04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3f04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3f08: 0x0  nop
    ctx->pc = 0x1c3f08u;
    // NOP
    // 0x1c3f0c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c3f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3f10: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3F10u;
    {
        const bool branch_taken_0x1c3f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F10u;
            // 0x1c3f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f10) {
            ctx->pc = 0x1C3F28u;
            goto label_1c3f28;
        }
    }
    ctx->pc = 0x1C3F18u;
    // 0x1c3f18: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3f1c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3F1Cu;
    {
        const bool branch_taken_0x1c3f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c3f1c) {
            ctx->pc = 0x1C3F28u;
            goto label_1c3f28;
        }
    }
    ctx->pc = 0x1C3F24u;
    // 0x1c3f24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c3f28:
    // 0x1c3f28: 0x14a0ffcf  bnez        $a1, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1C3F28u;
    {
        const bool branch_taken_0x1c3f28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f28) {
            ctx->pc = 0x1C3E68u;
            goto label_1c3e68;
        }
    }
    ctx->pc = 0x1C3F30u;
    // 0x1c3f30: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1C3F30u;
    {
        const bool branch_taken_0x1c3f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f30) {
            ctx->pc = 0x1C4068u;
            goto label_1c4068;
        }
    }
    ctx->pc = 0x1C3F38u;
label_1c3f38:
    // 0x1c3f38: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3F38u;
    SET_GPR_U32(ctx, 31, 0x1C3F40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F40u; }
        if (ctx->pc != 0x1C3F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F40u; }
        if (ctx->pc != 0x1C3F40u) { return; }
    }
    ctx->pc = 0x1C3F40u;
    // 0x1c3f40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c3f40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x1c3f44: 0x28410061  slti        $at, $v0, 0x61
    ctx->pc = 0x1c3f44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x1c3f48: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C3F48u;
    {
        const bool branch_taken_0x1c3f48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F48u;
            // 0x1c3f4c: 0x2a010bb8  slti        $at, $s0, 0xBB8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f48) {
            ctx->pc = 0x1C3FA8u;
            goto label_1c3fa8;
        }
    }
    ctx->pc = 0x1C3F50u;
    // 0x1c3f50: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3F50u;
    {
        const bool branch_taken_0x1c3f50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f50) {
            ctx->pc = 0x1C3F80u;
            goto label_1c3f80;
        }
    }
    ctx->pc = 0x1C3F58u;
    // 0x1c3f58: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3F58u;
    SET_GPR_U32(ctx, 31, 0x1C3F60u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F60u; }
        if (ctx->pc != 0x1C3F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F60u; }
        if (ctx->pc != 0x1C3F60u) { return; }
    }
    ctx->pc = 0x1C3F60u;
    // 0x1c3f60: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c3f60u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3f64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c3f68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3f6c: 0x2442aa48  addiu       $v0, $v0, -0x55B8
    ctx->pc = 0x1c3f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945352));
    // 0x1c3f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1C3F74u;
    {
        const bool branch_taken_0x1c3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F74u;
            // 0x1c3f78: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f74) {
            ctx->pc = 0x1C3FD8u;
            goto label_1c3fd8;
        }
    }
    ctx->pc = 0x1C3F7Cu;
    // 0x1c3f7c: 0x0  nop
    ctx->pc = 0x1c3f7cu;
    // NOP
label_1c3f80:
    // 0x1c3f80: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3F80u;
    SET_GPR_U32(ctx, 31, 0x1C3F88u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F88u; }
        if (ctx->pc != 0x1C3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F88u; }
        if (ctx->pc != 0x1C3F88u) { return; }
    }
    ctx->pc = 0x1C3F88u;
    // 0x1c3f88: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c3f88u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c3f8c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c3f90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c3f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c3f94: 0x2442aa40  addiu       $v0, $v0, -0x55C0
    ctx->pc = 0x1c3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945344));
    // 0x1c3f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c3f9c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C3F9Cu;
    {
        const bool branch_taken_0x1c3f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F9Cu;
            // 0x1c3fa0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f9c) {
            ctx->pc = 0x1C3FD8u;
            goto label_1c3fd8;
        }
    }
    ctx->pc = 0x1C3FA4u;
    // 0x1c3fa4: 0x0  nop
    ctx->pc = 0x1c3fa4u;
    // NOP
label_1c3fa8:
    // 0x1c3fa8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C3FA8u;
    SET_GPR_U32(ctx, 31, 0x1C3FB0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FB0u; }
        if (ctx->pc != 0x1C3FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FB0u; }
        if (ctx->pc != 0x1C3FB0u) { return; }
    }
    ctx->pc = 0x1C3FB0u;
    // 0x1c3fb0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c3fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c3fb4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c3fb8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c3fb8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c3fbc: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x1c3fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x1c3fc0: 0x0  nop
    ctx->pc = 0x1c3fc0u;
    // NOP
    // 0x1c3fc4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c3fc4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c3fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c3fcc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c3fd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c3fd4: 0x0  nop
    ctx->pc = 0x1c3fd4u;
    // NOP
label_1c3fd8:
    // 0x1c3fd8: 0x3c03c1ec  lui         $v1, 0xC1EC
    ctx->pc = 0x1c3fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49644 << 16));
    // 0x1c3fdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c3fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c3fe0: 0x0  nop
    ctx->pc = 0x1c3fe0u;
    // NOP
    // 0x1c3fe4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c3fe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c3fe8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3FE8u;
    {
        const bool branch_taken_0x1c3fe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FE8u;
            // 0x1c3fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fe8) {
            ctx->pc = 0x1C4000u;
            goto label_1c4000;
        }
    }
    ctx->pc = 0x1C3FF0u;
    // 0x1c3ff0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c3ff4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C3FF4u;
    {
        const bool branch_taken_0x1c3ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c3ff4) {
            ctx->pc = 0x1C4000u;
            goto label_1c4000;
        }
    }
    ctx->pc = 0x1C3FFCu;
    // 0x1c3ffc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c3ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4000:
    // 0x1c4000: 0x14a0ffcd  bnez        $a1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1C4000u;
    {
        const bool branch_taken_0x1c4000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4000) {
            ctx->pc = 0x1C3F38u;
            goto label_1c3f38;
        }
    }
    ctx->pc = 0x1C4008u;
    // 0x1c4008: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C4008u;
    {
        const bool branch_taken_0x1c4008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4008) {
            ctx->pc = 0x1C4068u;
            goto label_1c4068;
        }
    }
    ctx->pc = 0x1C4010u;
label_1c4010:
    // 0x1c4010: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C4010u;
    SET_GPR_U32(ctx, 31, 0x1C4018u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4018u; }
        if (ctx->pc != 0x1C4018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4018u; }
        if (ctx->pc != 0x1C4018u) { return; }
    }
    ctx->pc = 0x1C4018u;
    // 0x1c4018: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c4018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c401c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1c401cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1c4020: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c4020u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c4024: 0x2463aa30  addiu       $v1, $v1, -0x55D0
    ctx->pc = 0x1c4024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945328));
    // 0x1c4028: 0x3c02c1ec  lui         $v0, 0xC1EC
    ctx->pc = 0x1c4028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49644 << 16));
    // 0x1c402c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c402cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4030: 0x1010  mfhi        $v0
    ctx->pc = 0x1c4030u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c4034: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1c4034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c4038: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c403c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4044: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4044u;
    {
        const bool branch_taken_0x1c4044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C4048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4044u;
            // 0x1c4048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4044) {
            ctx->pc = 0x1C4060u;
            goto label_1c4060;
        }
    }
    ctx->pc = 0x1C404Cu;
    // 0x1c404c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c4050: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4050u;
    {
        const bool branch_taken_0x1c4050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c4050) {
            ctx->pc = 0x1C4060u;
            goto label_1c4060;
        }
    }
    ctx->pc = 0x1C4058u;
    // 0x1c4058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c4058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c405c: 0x0  nop
    ctx->pc = 0x1c405cu;
    // NOP
label_1c4060:
    // 0x1c4060: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C4060u;
    {
        const bool branch_taken_0x1c4060 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4060) {
            ctx->pc = 0x1C4010u;
            goto label_1c4010;
        }
    }
    ctx->pc = 0x1C4068u;
label_1c4068:
    // 0x1c4068: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c406c: 0xac221c78  sw          $v0, 0x1C78($at)
    ctx->pc = 0x1c406cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7288), GPR_U32(ctx, 2));
    // 0x1c4070: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4074: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c4074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c4078: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c407c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C407Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C407Cu;
            // 0x1c4080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3E68u: goto label_1c3e68;
            case 0x1C3EB0u: goto label_1c3eb0;
            case 0x1C3EE0u: goto label_1c3ee0;
            case 0x1C3F00u: goto label_1c3f00;
            case 0x1C3F28u: goto label_1c3f28;
            case 0x1C3F38u: goto label_1c3f38;
            case 0x1C3F80u: goto label_1c3f80;
            case 0x1C3FA8u: goto label_1c3fa8;
            case 0x1C3FD8u: goto label_1c3fd8;
            case 0x1C4000u: goto label_1c4000;
            case 0x1C4010u: goto label_1c4010;
            case 0x1C4060u: goto label_1c4060;
            case 0x1C4068u: goto label_1c4068;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4084u;
}
