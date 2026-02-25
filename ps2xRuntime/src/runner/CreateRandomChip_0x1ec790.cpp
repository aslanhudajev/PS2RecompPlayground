#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateRandomChip
// Address: 0x1ec790 - 0x1ecabc
void CreateRandomChip_0x1ec790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateRandomChip_0x1ec790");
#endif

    ctx->pc = 0x1ec790u;

    // 0x1ec790: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ec794: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ec798: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ec79c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec7a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec7a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ec7a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec7b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ec7b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7b4: 0xc07b3ac  jal         func_1ECEB0
    ctx->pc = 0x1EC7B4u;
    SET_GPR_U32(ctx, 31, 0x1EC7BCu);
    ctx->pc = 0x1EC7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7B4u;
            // 0x1ec7b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECEB0u;
    if (runtime->hasFunction(0x1ECEB0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7BCu; }
        if (ctx->pc != 0x1EC7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipAlloc_0x1eceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7BCu; }
        if (ctx->pc != 0x1EC7BCu) { return; }
    }
    ctx->pc = 0x1EC7BCu;
    // 0x1ec7bc: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ec7bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec7c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec7c4: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ec7c4u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7c8: 0x0  nop
    ctx->pc = 0x1ec7c8u;
    // NOP
    // 0x1ec7cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec7ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec7d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec7d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec7d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ec7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ec7d8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC7D8u;
    SET_GPR_U32(ctx, 31, 0x1EC7E0u);
    ctx->pc = 0x1EC7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7D8u;
            // 0x1ec7dc: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7E0u; }
        if (ctx->pc != 0x1EC7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7E0u; }
        if (ctx->pc != 0x1EC7E0u) { return; }
    }
    ctx->pc = 0x1EC7E0u;
    // 0x1ec7e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC7E0u;
    {
        const bool branch_taken_0x1ec7e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7E0u;
            // 0x1ec7e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7e0) {
            ctx->pc = 0x1EC7F4u;
            goto label_1ec7f4;
        }
    }
    ctx->pc = 0x1EC7E8u;
    // 0x1ec7e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec7e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec7ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC7ECu;
    {
        const bool branch_taken_0x1ec7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7ECu;
            // 0x1ec7f0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ec) {
            ctx->pc = 0x1EC80Cu;
            goto label_1ec80c;
        }
    }
    ctx->pc = 0x1EC7F4u;
label_1ec7f4:
    // 0x1ec7f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec7f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec7f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec7f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec7fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec7fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec800: 0x0  nop
    ctx->pc = 0x1ec800u;
    // NOP
    // 0x1ec804: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ec804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec808: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ec808u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ec80c:
    // 0x1ec80c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec810: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ec814: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ec814u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ec818: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec81c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec820: 0x0  nop
    ctx->pc = 0x1ec820u;
    // NOP
    // 0x1ec824: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ec824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ec828: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ec828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ec82c: 0x0  nop
    ctx->pc = 0x1ec82cu;
    // NOP
    // 0x1ec830: 0x0  nop
    ctx->pc = 0x1ec830u;
    // NOP
    // 0x1ec834: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1EC834u;
    SET_GPR_U32(ctx, 31, 0x1EC83Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC83Cu; }
        if (ctx->pc != 0x1EC83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC83Cu; }
        if (ctx->pc != 0x1EC83Cu) { return; }
    }
    ctx->pc = 0x1EC83Cu;
    // 0x1ec83c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ec83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ec840: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ec840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec844: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec848: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec84c: 0x0  nop
    ctx->pc = 0x1ec84cu;
    // NOP
    // 0x1ec850: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ec850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ec854: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x1ec854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x1ec858: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ec858u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ec85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec860: 0x0  nop
    ctx->pc = 0x1ec860u;
    // NOP
    // 0x1ec864: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ec864u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ec868: 0x0  nop
    ctx->pc = 0x1ec868u;
    // NOP
    // 0x1ec86c: 0x0  nop
    ctx->pc = 0x1ec86cu;
    // NOP
    // 0x1ec870: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC870u;
    SET_GPR_U32(ctx, 31, 0x1EC878u);
    ctx->pc = 0x1EC874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC870u;
            // 0x1ec874: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC878u; }
        if (ctx->pc != 0x1EC878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC878u; }
        if (ctx->pc != 0x1EC878u) { return; }
    }
    ctx->pc = 0x1EC878u;
    // 0x1ec878: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC878u;
    {
        const bool branch_taken_0x1ec878 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC878u;
            // 0x1ec87c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec878) {
            ctx->pc = 0x1EC88Cu;
            goto label_1ec88c;
        }
    }
    ctx->pc = 0x1EC880u;
    // 0x1ec880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec884: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC884u;
    {
        const bool branch_taken_0x1ec884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC884u;
            // 0x1ec888: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec884) {
            ctx->pc = 0x1EC8A4u;
            goto label_1ec8a4;
        }
    }
    ctx->pc = 0x1EC88Cu;
label_1ec88c:
    // 0x1ec88c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec88cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec890: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec890u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec898: 0x0  nop
    ctx->pc = 0x1ec898u;
    // NOP
    // 0x1ec89c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ec89cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec8a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ec8a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ec8a4:
    // 0x1ec8a4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ec8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec8a8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ec8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ec8ac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ec8acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ec8b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec8b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec8b8: 0x0  nop
    ctx->pc = 0x1ec8b8u;
    // NOP
    // 0x1ec8bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ec8bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ec8c0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ec8c0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ec8c4: 0x0  nop
    ctx->pc = 0x1ec8c4u;
    // NOP
    // 0x1ec8c8: 0x0  nop
    ctx->pc = 0x1ec8c8u;
    // NOP
    // 0x1ec8cc: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1EC8CCu;
    SET_GPR_U32(ctx, 31, 0x1EC8D4u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D4u; }
        if (ctx->pc != 0x1EC8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC8D4u; }
        if (ctx->pc != 0x1EC8D4u) { return; }
    }
    ctx->pc = 0x1EC8D4u;
    // 0x1ec8d4: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ec8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ec8d8: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x1ec8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x1ec8dc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec8e0: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x1ec8e0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ec8e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ec8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ec8e8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ec8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec8ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec8f0: 0x0  nop
    ctx->pc = 0x1ec8f0u;
    // NOP
    // 0x1ec8f4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ec8f4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ec8f8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec8fc: 0x24423840  addiu       $v0, $v0, 0x3840
    ctx->pc = 0x1ec8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14400));
    // 0x1ec900: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1ec900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec904: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec908: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x1ec908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x1ec90c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ec90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec914: 0x0  nop
    ctx->pc = 0x1ec914u;
    // NOP
    // 0x1ec918: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ec918u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ec91c: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1ec91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1ec920: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec924: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ec924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec928: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec92c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec92cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec930: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1ec930u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1ec934: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC934u;
    SET_GPR_U32(ctx, 31, 0x1EC93Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC93Cu; }
        if (ctx->pc != 0x1EC93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC93Cu; }
        if (ctx->pc != 0x1EC93Cu) { return; }
    }
    ctx->pc = 0x1EC93Cu;
    // 0x1ec93c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC93Cu;
    {
        const bool branch_taken_0x1ec93c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EC940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC93Cu;
            // 0x1ec940: 0x1018c3  sra         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec93c) {
            ctx->pc = 0x1EC94Cu;
            goto label_1ec94c;
        }
    }
    ctx->pc = 0x1EC944u;
    // 0x1ec944: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x1ec944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x1ec948: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ec948u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ec94c:
    // 0x1ec94c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ec94cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec950: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec954: 0x24423844  addiu       $v0, $v0, 0x3844
    ctx->pc = 0x1ec954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14404));
    // 0x1ec958: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1ec958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec95c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec960: 0x2442384c  addiu       $v0, $v0, 0x384C
    ctx->pc = 0x1ec960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14412));
    // 0x1ec964: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ec964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec968: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec96c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ec96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec970: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec970u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ec974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec978: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec97c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1ec97cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1ec980: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC980u;
    SET_GPR_U32(ctx, 31, 0x1EC988u);
    ctx->pc = 0x1EC984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC980u;
            // 0x1ec984: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC988u; }
        if (ctx->pc != 0x1EC988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC988u; }
        if (ctx->pc != 0x1EC988u) { return; }
    }
    ctx->pc = 0x1EC988u;
    // 0x1ec988: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC988u;
    {
        const bool branch_taken_0x1ec988 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1EC98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC988u;
            // 0x1ec98c: 0x1218c3  sra         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec988) {
            ctx->pc = 0x1EC998u;
            goto label_1ec998;
        }
    }
    ctx->pc = 0x1EC990u;
    // 0x1ec990: 0x26430007  addiu       $v1, $s2, 0x7
    ctx->pc = 0x1ec990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x1ec994: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ec994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ec998:
    // 0x1ec998: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ec998u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec99c: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x1ec99cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec9a0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ec9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9a4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ec9a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec9a8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ec9a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ec9ac: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1ec9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1ec9b0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ec9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9b4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ec9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec9b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec9b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec9bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec9bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ec9c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ec9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ec9c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec9c8: 0x0  nop
    ctx->pc = 0x1ec9c8u;
    // NOP
    // 0x1ec9cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ec9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec9d0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ec9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ec9d4: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1ec9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1ec9d8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1ec9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec9dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec9e0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1ec9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1ec9e4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1ec9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec9e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec9e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec9ec: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC9ECu;
    SET_GPR_U32(ctx, 31, 0x1EC9F4u);
    ctx->pc = 0x1EC9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9ECu;
            // 0x1ec9f0: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC9F4u; }
        if (ctx->pc != 0x1EC9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC9F4u; }
        if (ctx->pc != 0x1EC9F4u) { return; }
    }
    ctx->pc = 0x1EC9F4u;
    // 0x1ec9f4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ec9f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1ec9f8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC9F8u;
    {
        const bool branch_taken_0x1ec9f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC9F8u;
            // 0x1ec9fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec9f8) {
            ctx->pc = 0x1ECA0Cu;
            goto label_1eca0c;
        }
    }
    ctx->pc = 0x1ECA00u;
    // 0x1eca00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eca00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECA04u;
    {
        const bool branch_taken_0x1eca04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA04u;
            // 0x1eca08: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca04) {
            ctx->pc = 0x1ECA24u;
            goto label_1eca24;
        }
    }
    ctx->pc = 0x1ECA0Cu;
label_1eca0c:
    // 0x1eca0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eca0cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1eca10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eca10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1eca14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eca14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca18: 0x0  nop
    ctx->pc = 0x1eca18u;
    // NOP
    // 0x1eca1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eca1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eca20: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eca20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eca24:
    // 0x1eca24: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ECA24u;
    SET_GPR_U32(ctx, 31, 0x1ECA2Cu);
    ctx->pc = 0x1ECA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA24u;
            // 0x1eca28: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA2Cu; }
        if (ctx->pc != 0x1ECA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA2Cu; }
        if (ctx->pc != 0x1ECA2Cu) { return; }
    }
    ctx->pc = 0x1ECA2Cu;
    // 0x1eca2c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1eca2cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1eca30: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ECA30u;
    {
        const bool branch_taken_0x1eca30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1ECA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA30u;
            // 0x1eca34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca30) {
            ctx->pc = 0x1ECA44u;
            goto label_1eca44;
        }
    }
    ctx->pc = 0x1ECA38u;
    // 0x1eca38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eca38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECA3Cu;
    {
        const bool branch_taken_0x1eca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA3Cu;
            // 0x1eca40: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eca3c) {
            ctx->pc = 0x1ECA5Cu;
            goto label_1eca5c;
        }
    }
    ctx->pc = 0x1ECA44u;
label_1eca44:
    // 0x1eca44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eca44u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1eca48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eca48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1eca4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eca4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eca50: 0x0  nop
    ctx->pc = 0x1eca50u;
    // NOP
    // 0x1eca54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eca54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eca58: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1eca58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1eca5c:
    // 0x1eca5c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ECA5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECA64u);
    ctx->pc = 0x1ECA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA5Cu;
            // 0x1eca60: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA64u; }
        if (ctx->pc != 0x1ECA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA64u; }
        if (ctx->pc != 0x1ECA64u) { return; }
    }
    ctx->pc = 0x1ECA64u;
    // 0x1eca64: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1eca64u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x1eca68: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1eca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1eca6c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1ECA6Cu;
    SET_GPR_U32(ctx, 31, 0x1ECA74u);
    ctx->pc = 0x1ECA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECA6Cu;
            // 0x1eca70: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA74u; }
        if (ctx->pc != 0x1ECA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECA74u; }
        if (ctx->pc != 0x1ECA74u) { return; }
    }
    ctx->pc = 0x1ECA74u;
    // 0x1eca74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1eca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1eca78: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1eca78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1eca7c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1eca7cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1eca80: 0x2463abe0  addiu       $v1, $v1, -0x5420
    ctx->pc = 0x1eca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945760));
    // 0x1eca84: 0x0  nop
    ctx->pc = 0x1eca84u;
    // NOP
    // 0x1eca88: 0x2010  mfhi        $a0
    ctx->pc = 0x1eca88u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1eca8c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1eca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1eca90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1eca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1eca94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1eca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eca98: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x1eca98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x1eca9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1eca9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecaa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ecaa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecaa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ecaa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecaa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecaa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecaac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecab4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECAB4u;
            // 0x1ecab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC7F4u: goto label_1ec7f4;
            case 0x1EC80Cu: goto label_1ec80c;
            case 0x1EC88Cu: goto label_1ec88c;
            case 0x1EC8A4u: goto label_1ec8a4;
            case 0x1EC94Cu: goto label_1ec94c;
            case 0x1EC998u: goto label_1ec998;
            case 0x1ECA0Cu: goto label_1eca0c;
            case 0x1ECA24u: goto label_1eca24;
            case 0x1ECA44u: goto label_1eca44;
            case 0x1ECA5Cu: goto label_1eca5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECABCu;
}
