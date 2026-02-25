#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateRandomParticle
// Address: 0x16ed30 - 0x16ef18
void CreateRandomParticle_0x16ed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateRandomParticle_0x16ed30");
#endif

    ctx->pc = 0x16ed30u;

    // 0x16ed30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16ed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16ed34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16ed38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16ed38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16ed3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16ed3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16ed40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ed40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed44: 0xc05bcd0  jal         func_16F340
    ctx->pc = 0x16ED44u;
    SET_GPR_U32(ctx, 31, 0x16ED4Cu);
    ctx->pc = 0x16ED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED44u;
            // 0x16ed48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F340u;
    if (runtime->hasFunction(0x16F340u)) {
        auto targetFn = runtime->lookupFunction(0x16F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED4Cu; }
        if (ctx->pc != 0x16ED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ParticleAlloc_0x16f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED4Cu; }
        if (ctx->pc != 0x16ED4Cu) { return; }
    }
    ctx->pc = 0x16ED4Cu;
    // 0x16ed4c: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x16ed4cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ed50: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x16ed50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed54: 0x0  nop
    ctx->pc = 0x16ed54u;
    // NOP
    // 0x16ed58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16ed58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16ed5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16ed5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ed60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ed60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ed64: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x16ed64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x16ed68: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16ED68u;
    SET_GPR_U32(ctx, 31, 0x16ED70u);
    ctx->pc = 0x16ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED68u;
            // 0x16ed6c: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED70u; }
        if (ctx->pc != 0x16ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ED70u; }
        if (ctx->pc != 0x16ED70u) { return; }
    }
    ctx->pc = 0x16ED70u;
    // 0x16ed70: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16ED70u;
    {
        const bool branch_taken_0x16ed70 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16ED74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED70u;
            // 0x16ed74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed70) {
            ctx->pc = 0x16ED84u;
            goto label_16ed84;
        }
    }
    ctx->pc = 0x16ED78u;
    // 0x16ed78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ed78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16ED7Cu;
    {
        const bool branch_taken_0x16ed7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ED7Cu;
            // 0x16ed80: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ed7c) {
            ctx->pc = 0x16ED9Cu;
            goto label_16ed9c;
        }
    }
    ctx->pc = 0x16ED84u;
label_16ed84:
    // 0x16ed84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16ed84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x16ed88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16ed88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16ed8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ed8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ed90: 0x0  nop
    ctx->pc = 0x16ed90u;
    // NOP
    // 0x16ed94: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16ed94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16ed98: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16ed98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_16ed9c:
    // 0x16ed9c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x16ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x16eda0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x16eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x16eda4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16eda4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x16eda8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16eda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16edac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16edacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16edb0: 0x0  nop
    ctx->pc = 0x16edb0u;
    // NOP
    // 0x16edb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16edb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16edb8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16edb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x16edbc: 0x0  nop
    ctx->pc = 0x16edbcu;
    // NOP
    // 0x16edc0: 0x0  nop
    ctx->pc = 0x16edc0u;
    // NOP
    // 0x16edc4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x16EDC4u;
    SET_GPR_U32(ctx, 31, 0x16EDCCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDCCu; }
        if (ctx->pc != 0x16EDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EDCCu; }
        if (ctx->pc != 0x16EDCCu) { return; }
    }
    ctx->pc = 0x16EDCCu;
    // 0x16edcc: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x16edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x16edd0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16edd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16edd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16edd8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16edd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16eddc: 0x0  nop
    ctx->pc = 0x16eddcu;
    // NOP
    // 0x16ede0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16ede0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16ede4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16ede4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16ede8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16ede8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x16edec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16edecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16edf0: 0x0  nop
    ctx->pc = 0x16edf0u;
    // NOP
    // 0x16edf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16edf4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x16edf8: 0x0  nop
    ctx->pc = 0x16edf8u;
    // NOP
    // 0x16edfc: 0x0  nop
    ctx->pc = 0x16edfcu;
    // NOP
    // 0x16ee00: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16EE00u;
    SET_GPR_U32(ctx, 31, 0x16EE08u);
    ctx->pc = 0x16EE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE00u;
            // 0x16ee04: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE08u; }
        if (ctx->pc != 0x16EE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE08u; }
        if (ctx->pc != 0x16EE08u) { return; }
    }
    ctx->pc = 0x16EE08u;
    // 0x16ee08: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16EE08u;
    {
        const bool branch_taken_0x16ee08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE08u;
            // 0x16ee0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee08) {
            ctx->pc = 0x16EE1Cu;
            goto label_16ee1c;
        }
    }
    ctx->pc = 0x16EE10u;
    // 0x16ee10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ee10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16EE14u;
    {
        const bool branch_taken_0x16ee14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE14u;
            // 0x16ee18: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ee14) {
            ctx->pc = 0x16EE34u;
            goto label_16ee34;
        }
    }
    ctx->pc = 0x16EE1Cu;
label_16ee1c:
    // 0x16ee1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16ee1cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x16ee20: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16ee20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16ee24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16ee24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee28: 0x0  nop
    ctx->pc = 0x16ee28u;
    // NOP
    // 0x16ee2c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x16ee2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16ee30: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x16ee30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_16ee34:
    // 0x16ee34: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x16ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x16ee38: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x16ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x16ee3c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x16ee3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x16ee40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16ee40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ee44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ee44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee48: 0x0  nop
    ctx->pc = 0x16ee48u;
    // NOP
    // 0x16ee4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x16ee4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x16ee50: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x16ee50u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x16ee54: 0x0  nop
    ctx->pc = 0x16ee54u;
    // NOP
    // 0x16ee58: 0x0  nop
    ctx->pc = 0x16ee58u;
    // NOP
    // 0x16ee5c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x16EE5Cu;
    SET_GPR_U32(ctx, 31, 0x16EE64u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE64u; }
        if (ctx->pc != 0x16EE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EE64u; }
        if (ctx->pc != 0x16EE64u) { return; }
    }
    ctx->pc = 0x16EE64u;
    // 0x16ee64: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x16ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x16ee68: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x16ee68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x16ee6c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16ee6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16ee70: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16ee70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16ee74: 0x0  nop
    ctx->pc = 0x16ee74u;
    // NOP
    // 0x16ee78: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x16ee78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x16ee7c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16ee80: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16ee80u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x16ee84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16ee84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ee88: 0x0  nop
    ctx->pc = 0x16ee88u;
    // NOP
    // 0x16ee8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16ee8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x16ee90: 0x0  nop
    ctx->pc = 0x16ee90u;
    // NOP
    // 0x16ee94: 0x0  nop
    ctx->pc = 0x16ee94u;
    // NOP
    // 0x16ee98: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16EE98u;
    SET_GPR_U32(ctx, 31, 0x16EEA0u);
    ctx->pc = 0x16EE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EE98u;
            // 0x16ee9c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEA0u; }
        if (ctx->pc != 0x16EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEA0u; }
        if (ctx->pc != 0x16EEA0u) { return; }
    }
    ctx->pc = 0x16EEA0u;
    // 0x16eea0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x16eea0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x16eea4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16EEA4u;
    {
        const bool branch_taken_0x16eea4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEA4u;
            // 0x16eea8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eea4) {
            ctx->pc = 0x16EEB8u;
            goto label_16eeb8;
        }
    }
    ctx->pc = 0x16EEACu;
    // 0x16eeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16eeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eeb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16EEB0u;
    {
        const bool branch_taken_0x16eeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EEB0u;
            // 0x16eeb4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eeb0) {
            ctx->pc = 0x16EED0u;
            goto label_16eed0;
        }
    }
    ctx->pc = 0x16EEB8u;
label_16eeb8:
    // 0x16eeb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16eeb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x16eebc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16eebcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x16eec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16eec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16eec4: 0x0  nop
    ctx->pc = 0x16eec4u;
    // NOP
    // 0x16eec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16eec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16eecc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x16eeccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16eed0:
    // 0x16eed0: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x16eed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x16eed4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x16EED4u;
    SET_GPR_U32(ctx, 31, 0x16EEDCu);
    ctx->pc = 0x16EED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16EED4u;
            // 0x16eed8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEDCu; }
        if (ctx->pc != 0x16EEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16EEDCu; }
        if (ctx->pc != 0x16EEDCu) { return; }
    }
    ctx->pc = 0x16EEDCu;
    // 0x16eedc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x16eedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16eee0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x16eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x16eee4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x16eee4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16eee8: 0x24639ed0  addiu       $v1, $v1, -0x6130
    ctx->pc = 0x16eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942416));
    // 0x16eeec: 0x0  nop
    ctx->pc = 0x16eeecu;
    // NOP
    // 0x16eef0: 0x2010  mfhi        $a0
    ctx->pc = 0x16eef0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16eef4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16eef8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16eefc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16eefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ef00: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x16ef00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x16ef04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16ef04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ef08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16ef08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ef0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16EF10u;
            // 0x16ef14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16ED84u: goto label_16ed84;
            case 0x16ED9Cu: goto label_16ed9c;
            case 0x16EE1Cu: goto label_16ee1c;
            case 0x16EE34u: goto label_16ee34;
            case 0x16EEB8u: goto label_16eeb8;
            case 0x16EED0u: goto label_16eed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16EF18u;
}
