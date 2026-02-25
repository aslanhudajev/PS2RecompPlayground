#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Ryushi_Chibi
// Address: 0x194ee0 - 0x19500c
void EnemyShotCreate_Ryushi_Chibi_0x194ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Ryushi_Chibi_0x194ee0");
#endif

    ctx->pc = 0x194ee0u;

    // 0x194ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x194ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x194ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x194ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x194ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x194ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x194eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x194ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x194ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194ef4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ef8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194efc: 0xc0656fc  jal         func_195BF0
    ctx->pc = 0x194EFCu;
    SET_GPR_U32(ctx, 31, 0x194F04u);
    ctx->pc = 0x194F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194EFCu;
            // 0x194f00: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BF0u;
    if (runtime->hasFunction(0x195BF0u)) {
        auto targetFn = runtime->lookupFunction(0x195BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F04u; }
        if (ctx->pc != 0x194F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotAlloc_0x195bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F04u; }
        if (ctx->pc != 0x194F04u) { return; }
    }
    ctx->pc = 0x194F04u;
    // 0x194f04: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x194f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x194f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194f0c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x194F0Cu;
    SET_GPR_U32(ctx, 31, 0x194F14u);
    ctx->pc = 0x194F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F0Cu;
            // 0x194f10: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F14u; }
        if (ctx->pc != 0x194F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F14u; }
        if (ctx->pc != 0x194F14u) { return; }
    }
    ctx->pc = 0x194F14u;
    // 0x194f14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x194f14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x194f18: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x194f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x194f1c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x194F1Cu;
    SET_GPR_U32(ctx, 31, 0x194F24u);
    ctx->pc = 0x194F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F1Cu;
            // 0x194f20: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F24u; }
        if (ctx->pc != 0x194F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F24u; }
        if (ctx->pc != 0x194F24u) { return; }
    }
    ctx->pc = 0x194F24u;
    // 0x194f24: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x194f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x194f28: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x194f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x194f2c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x194f2cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x194f30: 0x0  nop
    ctx->pc = 0x194f30u;
    // NOP
    // 0x194f34: 0x0  nop
    ctx->pc = 0x194f34u;
    // NOP
    // 0x194f38: 0x1010  mfhi        $v0
    ctx->pc = 0x194f38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x194f3c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x194F3Cu;
    SET_GPR_U32(ctx, 31, 0x194F44u);
    ctx->pc = 0x194F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F3Cu;
            // 0x194f40: 0x629823  subu        $s3, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F44u; }
        if (ctx->pc != 0x194F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F44u; }
        if (ctx->pc != 0x194F44u) { return; }
    }
    ctx->pc = 0x194F44u;
    // 0x194f44: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x194f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x194f48: 0x2531821  addu        $v1, $s2, $s3
    ctx->pc = 0x194f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x194f4c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x194f4cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x194f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x194f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f54: 0x0  nop
    ctx->pc = 0x194f54u;
    // NOP
    // 0x194f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194f5c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x194f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x194f60: 0x1810  mfhi        $v1
    ctx->pc = 0x194f60u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x194f64: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x194f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x194f68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x194f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194f6c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x194f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x194f70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f74: 0x0  nop
    ctx->pc = 0x194f74u;
    // NOP
    // 0x194f78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194f7c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x194F7Cu;
    SET_GPR_U32(ctx, 31, 0x194F84u);
    ctx->pc = 0x194F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F7Cu;
            // 0x194f80: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F84u; }
        if (ctx->pc != 0x194F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F84u; }
        if (ctx->pc != 0x194F84u) { return; }
    }
    ctx->pc = 0x194F84u;
    // 0x194f84: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x194f84u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x194f88: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x194f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194f8c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x194F8Cu;
    SET_GPR_U32(ctx, 31, 0x194F94u);
    ctx->pc = 0x194F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194F8Cu;
            // 0x194f90: 0x439823  subu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F94u; }
        if (ctx->pc != 0x194F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194F94u; }
        if (ctx->pc != 0x194F94u) { return; }
    }
    ctx->pc = 0x194F94u;
    // 0x194f94: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x194f94u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194f98: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x194f98u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7u)));
    // 0x194f9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x194f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x194fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194fa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194fa8: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x194fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194fac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x194facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x194fb0: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x194fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x194fb4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x194fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x194fb8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x194fb8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x194fbc: 0x0  nop
    ctx->pc = 0x194fbcu;
    // NOP
    // 0x194fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x194fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x194fc4: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x194fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x194fc8: 0xae050018  sw          $a1, 0x18($s0)
    ctx->pc = 0x194fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 5));
    // 0x194fcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x194fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x194fd0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x194fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x194fd4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x194fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x194fd8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x194fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194fdc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x194fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x194fe0: 0xae120034  sw          $s2, 0x34($s0)
    ctx->pc = 0x194fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 18));
    // 0x194fe4: 0xae110038  sw          $s1, 0x38($s0)
    ctx->pc = 0x194fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 17));
    // 0x194fe8: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x194fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x194fec: 0xae050040  sw          $a1, 0x40($s0)
    ctx->pc = 0x194fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    // 0x194ff0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x194ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194ff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x194ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194ff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194ff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194ffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195004: 0x3e00008  jr          $ra
    ctx->pc = 0x195004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195004u;
            // 0x195008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19500Cu;
}
