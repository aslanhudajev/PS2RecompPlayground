#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateWeapon_Particle
// Address: 0x152a70 - 0x152ce4
void CreateWeapon_Particle_0x152a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateWeapon_Particle_0x152a70");
#endif

    ctx->pc = 0x152a70u;

    // 0x152a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152a74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x152a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x152a78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152a80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x152a80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x152a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a88: 0xc05506c  jal         func_1541B0
    ctx->pc = 0x152A88u;
    SET_GPR_U32(ctx, 31, 0x152A90u);
    ctx->pc = 0x152A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A88u;
            // 0x152a8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1541B0u;
    if (runtime->hasFunction(0x1541B0u)) {
        auto targetFn = runtime->lookupFunction(0x1541B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A90u; }
        if (ctx->pc != 0x152A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotAlloc_0x1541b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A90u; }
        if (ctx->pc != 0x152A90u) { return; }
    }
    ctx->pc = 0x152A90u;
    // 0x152a90: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x152a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x152a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152a98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x152a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x152a9c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x152a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x152aa0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x152aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x152aa4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x152aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x152aa8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x152aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x152aac: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x152ab0: 0x16200021  bnez        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x152AB0u;
    {
        const bool branch_taken_0x152ab0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x152AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152AB0u;
            // 0x152ab4: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152ab0) {
            ctx->pc = 0x152B38u;
            goto label_152b38;
        }
    }
    ctx->pc = 0x152AB8u;
    // 0x152ab8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152AB8u;
    SET_GPR_U32(ctx, 31, 0x152AC0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AC0u; }
        if (ctx->pc != 0x152AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AC0u; }
        if (ctx->pc != 0x152AC0u) { return; }
    }
    ctx->pc = 0x152AC0u;
    // 0x152ac0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x152ac4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x152ac8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152ac8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152acc: 0x0  nop
    ctx->pc = 0x152accu;
    // NOP
    // 0x152ad0: 0x0  nop
    ctx->pc = 0x152ad0u;
    // NOP
    // 0x152ad4: 0x1010  mfhi        $v0
    ctx->pc = 0x152ad4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152ad8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x152ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152adc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152ADCu;
    SET_GPR_U32(ctx, 31, 0x152AE4u);
    ctx->pc = 0x152AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152ADCu;
            // 0x152ae0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AE4u; }
        if (ctx->pc != 0x152AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152AE4u; }
        if (ctx->pc != 0x152AE4u) { return; }
    }
    ctx->pc = 0x152AE4u;
    // 0x152ae4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x152ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x152ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152aec: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152aecu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152af0: 0x0  nop
    ctx->pc = 0x152af0u;
    // NOP
    // 0x152af4: 0x0  nop
    ctx->pc = 0x152af4u;
    // NOP
    // 0x152af8: 0x1010  mfhi        $v0
    ctx->pc = 0x152af8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152afc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x152afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x152b00: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152B00u;
    SET_GPR_U32(ctx, 31, 0x152B08u);
    ctx->pc = 0x152B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B00u;
            // 0x152b04: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B08u; }
        if (ctx->pc != 0x152B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B08u; }
        if (ctx->pc != 0x152B08u) { return; }
    }
    ctx->pc = 0x152B08u;
    // 0x152b08: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x152b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152b0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x152b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152b10: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x152b10u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152b14: 0x0  nop
    ctx->pc = 0x152b14u;
    // NOP
    // 0x152b18: 0x0  nop
    ctx->pc = 0x152b18u;
    // NOP
    // 0x152b1c: 0x2810  mfhi        $a1
    ctx->pc = 0x152b1cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x152b20: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152b24: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x152b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x152b28: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x152b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x152b2c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x152B2Cu;
    {
        const bool branch_taken_0x152b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152B2Cu;
            // 0x152b30: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152b2c) {
            ctx->pc = 0x152CC8u;
            goto label_152cc8;
        }
    }
    ctx->pc = 0x152B34u;
    // 0x152b34: 0x0  nop
    ctx->pc = 0x152b34u;
    // NOP
label_152b38:
    // 0x152b38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152b3c: 0x16230024  bne         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x152B3Cu;
    {
        const bool branch_taken_0x152b3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x152b3c) {
            ctx->pc = 0x152BD0u;
            goto label_152bd0;
        }
    }
    ctx->pc = 0x152B44u;
    // 0x152b44: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152B44u;
    SET_GPR_U32(ctx, 31, 0x152B4Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B4Cu; }
        if (ctx->pc != 0x152B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B4Cu; }
        if (ctx->pc != 0x152B4Cu) { return; }
    }
    ctx->pc = 0x152B4Cu;
    // 0x152b4c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x152b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x152b50: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x152b54: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152b54u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152b58: 0x0  nop
    ctx->pc = 0x152b58u;
    // NOP
    // 0x152b5c: 0x0  nop
    ctx->pc = 0x152b5cu;
    // NOP
    // 0x152b60: 0x1010  mfhi        $v0
    ctx->pc = 0x152b60u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152b64: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x152b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152b68: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152B68u;
    SET_GPR_U32(ctx, 31, 0x152B70u);
    ctx->pc = 0x152B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B68u;
            // 0x152b6c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B70u; }
        if (ctx->pc != 0x152B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B70u; }
        if (ctx->pc != 0x152B70u) { return; }
    }
    ctx->pc = 0x152B70u;
    // 0x152b70: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x152b74: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x152b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x152b78: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152b78u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152b7c: 0x0  nop
    ctx->pc = 0x152b7cu;
    // NOP
    // 0x152b80: 0x0  nop
    ctx->pc = 0x152b80u;
    // NOP
    // 0x152b84: 0x2010  mfhi        $a0
    ctx->pc = 0x152b84u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x152b88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152b88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x152b8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x152b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152b90: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x152b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x152b94: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152B94u;
    SET_GPR_U32(ctx, 31, 0x152B9Cu);
    ctx->pc = 0x152B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152B94u;
            // 0x152b98: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B9Cu; }
        if (ctx->pc != 0x152B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152B9Cu; }
        if (ctx->pc != 0x152B9Cu) { return; }
    }
    ctx->pc = 0x152B9Cu;
    // 0x152b9c: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x152b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x152ba0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152ba4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x152ba4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152ba8: 0x0  nop
    ctx->pc = 0x152ba8u;
    // NOP
    // 0x152bac: 0x0  nop
    ctx->pc = 0x152bacu;
    // NOP
    // 0x152bb0: 0x2810  mfhi        $a1
    ctx->pc = 0x152bb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x152bb4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x152bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x152bb8: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x152bbc: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x152bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x152bc0: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x152bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x152bc4: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x152BC4u;
    {
        const bool branch_taken_0x152bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152BC4u;
            // 0x152bc8: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152bc4) {
            ctx->pc = 0x152CC8u;
            goto label_152cc8;
        }
    }
    ctx->pc = 0x152BCCu;
    // 0x152bcc: 0x0  nop
    ctx->pc = 0x152bccu;
    // NOP
label_152bd0:
    // 0x152bd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x152bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152bd4: 0x16230024  bne         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x152BD4u;
    {
        const bool branch_taken_0x152bd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x152bd4) {
            ctx->pc = 0x152C68u;
            goto label_152c68;
        }
    }
    ctx->pc = 0x152BDCu;
    // 0x152bdc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x152bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x152be0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x152be4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x152be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x152be8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x152be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x152bec: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x152bf0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152BF0u;
    SET_GPR_U32(ctx, 31, 0x152BF8u);
    ctx->pc = 0x152BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152BF0u;
            // 0x152bf4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BF8u; }
        if (ctx->pc != 0x152BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152BF8u; }
        if (ctx->pc != 0x152BF8u) { return; }
    }
    ctx->pc = 0x152BF8u;
    // 0x152bf8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x152bfc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x152bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x152c00: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152c00u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152c04: 0x0  nop
    ctx->pc = 0x152c04u;
    // NOP
    // 0x152c08: 0x0  nop
    ctx->pc = 0x152c08u;
    // NOP
    // 0x152c0c: 0x1010  mfhi        $v0
    ctx->pc = 0x152c0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152c10: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x152c14: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152C14u;
    SET_GPR_U32(ctx, 31, 0x152C1Cu);
    ctx->pc = 0x152C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C14u;
            // 0x152c18: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C1Cu; }
        if (ctx->pc != 0x152C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C1Cu; }
        if (ctx->pc != 0x152C1Cu) { return; }
    }
    ctx->pc = 0x152C1Cu;
    // 0x152c1c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x152c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x152c20: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152c20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x152c24: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152c24u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152c28: 0x0  nop
    ctx->pc = 0x152c28u;
    // NOP
    // 0x152c2c: 0x0  nop
    ctx->pc = 0x152c2cu;
    // NOP
    // 0x152c30: 0x1010  mfhi        $v0
    ctx->pc = 0x152c30u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x152c34: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x152c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x152c38: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152C38u;
    SET_GPR_U32(ctx, 31, 0x152C40u);
    ctx->pc = 0x152C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C38u;
            // 0x152c3c: 0xae030030  sw          $v1, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C40u; }
        if (ctx->pc != 0x152C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152C40u; }
        if (ctx->pc != 0x152C40u) { return; }
    }
    ctx->pc = 0x152C40u;
    // 0x152c40: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152c44: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x152c48: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152c48u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152c4c: 0x0  nop
    ctx->pc = 0x152c4cu;
    // NOP
    // 0x152c50: 0x0  nop
    ctx->pc = 0x152c50u;
    // NOP
    // 0x152c54: 0x2010  mfhi        $a0
    ctx->pc = 0x152c54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x152c58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152c5c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x152c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x152c60: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x152C60u;
    {
        const bool branch_taken_0x152c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152C60u;
            // 0x152c64: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c60) {
            ctx->pc = 0x152CC8u;
            goto label_152cc8;
        }
    }
    ctx->pc = 0x152C68u;
label_152c68:
    // 0x152c68: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x152c68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x152c6c: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x152C6Cu;
    {
        const bool branch_taken_0x152c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c6c) {
            ctx->pc = 0x152CC8u;
            goto label_152cc8;
        }
    }
    ctx->pc = 0x152C74u;
    // 0x152c74: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x152c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x152c78: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152c78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x152c7c: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x152c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x152c80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x152c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x152c84: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x152c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x152c88: 0x2463001e  addiu       $v1, $v1, 0x1E
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x152c8c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x152c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x152c90: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x152c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x152c94: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x152c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x152c98: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x152C98u;
    SET_GPR_U32(ctx, 31, 0x152CA0u);
    ctx->pc = 0x152C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152C98u;
            // 0x152c9c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CA0u; }
        if (ctx->pc != 0x152CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152CA0u; }
        if (ctx->pc != 0x152CA0u) { return; }
    }
    ctx->pc = 0x152CA0u;
    // 0x152ca0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x152ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152ca4: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x152ca8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x152ca8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x152cac: 0x0  nop
    ctx->pc = 0x152cacu;
    // NOP
    // 0x152cb0: 0x0  nop
    ctx->pc = 0x152cb0u;
    // NOP
    // 0x152cb4: 0x2010  mfhi        $a0
    ctx->pc = 0x152cb4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x152cb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x152cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152cbc: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x152cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x152cc0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x152cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x152cc4: 0x0  nop
    ctx->pc = 0x152cc4u;
    // NOP
label_152cc8:
    // 0x152cc8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x152cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x152ccc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x152cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152cd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152cd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x152CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152CDCu;
            // 0x152ce0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152B38u: goto label_152b38;
            case 0x152BD0u: goto label_152bd0;
            case 0x152C68u: goto label_152c68;
            case 0x152CC8u: goto label_152cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152CE4u;
}
