#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateRandomChip_Mid
// Address: 0x1ec460 - 0x1ec78c
void CreateRandomChip_Mid_0x1ec460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateRandomChip_Mid_0x1ec460");
#endif

    ctx->pc = 0x1ec460u;

    // 0x1ec460: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ec464: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ec468: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ec46c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec470: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec478: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ec478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec47c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec480: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ec480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec484: 0xc07b3ac  jal         func_1ECEB0
    ctx->pc = 0x1EC484u;
    SET_GPR_U32(ctx, 31, 0x1EC48Cu);
    ctx->pc = 0x1EC488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC484u;
            // 0x1ec488: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECEB0u;
    if (runtime->hasFunction(0x1ECEB0u)) {
        auto targetFn = runtime->lookupFunction(0x1ECEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC48Cu; }
        if (ctx->pc != 0x1EC48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipAlloc_0x1eceb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC48Cu; }
        if (ctx->pc != 0x1EC48Cu) { return; }
    }
    ctx->pc = 0x1EC48Cu;
    // 0x1ec48c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ec48cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec490: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1ec490u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec494: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x1ec494u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec498: 0x0  nop
    ctx->pc = 0x1ec498u;
    // NOP
    // 0x1ec49c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ec49cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ec4a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec4a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1ec4a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ec4a8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC4A8u;
    SET_GPR_U32(ctx, 31, 0x1EC4B0u);
    ctx->pc = 0x1EC4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4A8u;
            // 0x1ec4ac: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4B0u; }
        if (ctx->pc != 0x1EC4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4B0u; }
        if (ctx->pc != 0x1EC4B0u) { return; }
    }
    ctx->pc = 0x1EC4B0u;
    // 0x1ec4b0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC4B0u;
    {
        const bool branch_taken_0x1ec4b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4B0u;
            // 0x1ec4b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4b0) {
            ctx->pc = 0x1EC4C4u;
            goto label_1ec4c4;
        }
    }
    ctx->pc = 0x1EC4B8u;
    // 0x1ec4b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec4bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC4BCu;
    {
        const bool branch_taken_0x1ec4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4BCu;
            // 0x1ec4c0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4bc) {
            ctx->pc = 0x1EC4DCu;
            goto label_1ec4dc;
        }
    }
    ctx->pc = 0x1EC4C4u;
label_1ec4c4:
    // 0x1ec4c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec4c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec4c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec4c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec4cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec4ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec4d0: 0x0  nop
    ctx->pc = 0x1ec4d0u;
    // NOP
    // 0x1ec4d4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ec4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec4d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ec4d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ec4dc:
    // 0x1ec4dc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ec4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec4e0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ec4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ec4e4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ec4e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ec4e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec4e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec4ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec4f0: 0x0  nop
    ctx->pc = 0x1ec4f0u;
    // NOP
    // 0x1ec4f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ec4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ec4f8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ec4f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ec4fc: 0x0  nop
    ctx->pc = 0x1ec4fcu;
    // NOP
    // 0x1ec500: 0x0  nop
    ctx->pc = 0x1ec500u;
    // NOP
    // 0x1ec504: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1EC504u;
    SET_GPR_U32(ctx, 31, 0x1EC50Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC50Cu; }
        if (ctx->pc != 0x1EC50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC50Cu; }
        if (ctx->pc != 0x1EC50Cu) { return; }
    }
    ctx->pc = 0x1EC50Cu;
    // 0x1ec50c: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ec50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ec510: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec514: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec518: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec51c: 0x0  nop
    ctx->pc = 0x1ec51cu;
    // NOP
    // 0x1ec520: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ec520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ec524: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ec524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1ec528: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ec528u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ec52c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec52cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec530: 0x0  nop
    ctx->pc = 0x1ec530u;
    // NOP
    // 0x1ec534: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ec534u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ec538: 0x0  nop
    ctx->pc = 0x1ec538u;
    // NOP
    // 0x1ec53c: 0x0  nop
    ctx->pc = 0x1ec53cu;
    // NOP
    // 0x1ec540: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC540u;
    SET_GPR_U32(ctx, 31, 0x1EC548u);
    ctx->pc = 0x1EC544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC540u;
            // 0x1ec544: 0xe660000c  swc1        $f0, 0xC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC548u; }
        if (ctx->pc != 0x1EC548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC548u; }
        if (ctx->pc != 0x1EC548u) { return; }
    }
    ctx->pc = 0x1EC548u;
    // 0x1ec548: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC548u;
    {
        const bool branch_taken_0x1ec548 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC548u;
            // 0x1ec54c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec548) {
            ctx->pc = 0x1EC55Cu;
            goto label_1ec55c;
        }
    }
    ctx->pc = 0x1EC550u;
    // 0x1ec550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec554: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC554u;
    {
        const bool branch_taken_0x1ec554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC554u;
            // 0x1ec558: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec554) {
            ctx->pc = 0x1EC574u;
            goto label_1ec574;
        }
    }
    ctx->pc = 0x1EC55Cu;
label_1ec55c:
    // 0x1ec55c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec55cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec560u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec568: 0x0  nop
    ctx->pc = 0x1ec568u;
    // NOP
    // 0x1ec56c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x1ec56cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec570: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1ec570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1ec574:
    // 0x1ec574: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ec574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ec578: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1ec57c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ec57cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1ec580: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ec580u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec588: 0x0  nop
    ctx->pc = 0x1ec588u;
    // NOP
    // 0x1ec58c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ec58cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ec590: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ec590u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1ec594: 0x0  nop
    ctx->pc = 0x1ec594u;
    // NOP
    // 0x1ec598: 0x0  nop
    ctx->pc = 0x1ec598u;
    // NOP
    // 0x1ec59c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1EC59Cu;
    SET_GPR_U32(ctx, 31, 0x1EC5A4u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5A4u; }
        if (ctx->pc != 0x1EC5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5A4u; }
        if (ctx->pc != 0x1EC5A4u) { return; }
    }
    ctx->pc = 0x1EC5A4u;
    // 0x1ec5a4: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1ec5a8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1ec5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1ec5ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec5b0: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x1ec5b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ec5b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1ec5b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1ec5b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ec5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ec5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec5c0: 0x0  nop
    ctx->pc = 0x1ec5c0u;
    // NOP
    // 0x1ec5c4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1ec5c4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1ec5c8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec5cc: 0x24423840  addiu       $v0, $v0, 0x3840
    ctx->pc = 0x1ec5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14400));
    // 0x1ec5d0: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x1ec5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec5d4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec5d8: 0x24423848  addiu       $v0, $v0, 0x3848
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14408));
    // 0x1ec5dc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ec5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec5e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec5e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec5e4: 0x0  nop
    ctx->pc = 0x1ec5e4u;
    // NOP
    // 0x1ec5e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1ec5e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1ec5ec: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x1ec5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1ec5f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec5f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ec5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec5f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec5f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec5fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec5fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec600: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1ec600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x1ec604: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC604u;
    SET_GPR_U32(ctx, 31, 0x1EC60Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC60Cu; }
        if (ctx->pc != 0x1EC60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC60Cu; }
        if (ctx->pc != 0x1EC60Cu) { return; }
    }
    ctx->pc = 0x1EC60Cu;
    // 0x1ec60c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC60Cu;
    {
        const bool branch_taken_0x1ec60c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1EC610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC60Cu;
            // 0x1ec610: 0x1018c3  sra         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec60c) {
            ctx->pc = 0x1EC61Cu;
            goto label_1ec61c;
        }
    }
    ctx->pc = 0x1EC614u;
    // 0x1ec614: 0x26030007  addiu       $v1, $s0, 0x7
    ctx->pc = 0x1ec614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x1ec618: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ec618u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ec61c:
    // 0x1ec61c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ec61cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec620: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec624: 0x24423844  addiu       $v0, $v0, 0x3844
    ctx->pc = 0x1ec624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14404));
    // 0x1ec628: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x1ec628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec62c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ec630: 0x2442384c  addiu       $v0, $v0, 0x384C
    ctx->pc = 0x1ec630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14412));
    // 0x1ec634: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ec634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1ec638: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1ec638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec63c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ec63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec640: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec640u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ec644: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ec644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ec648: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ec648u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ec64c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x1ec64cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1ec650: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC650u;
    SET_GPR_U32(ctx, 31, 0x1EC658u);
    ctx->pc = 0x1EC654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC650u;
            // 0x1ec654: 0x2a0c0  sll         $s4, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC658u; }
        if (ctx->pc != 0x1EC658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC658u; }
        if (ctx->pc != 0x1EC658u) { return; }
    }
    ctx->pc = 0x1EC658u;
    // 0x1ec658: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EC658u;
    {
        const bool branch_taken_0x1ec658 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1EC65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC658u;
            // 0x1ec65c: 0x1218c3  sra         $v1, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec658) {
            ctx->pc = 0x1EC668u;
            goto label_1ec668;
        }
    }
    ctx->pc = 0x1EC660u;
    // 0x1ec660: 0x26430007  addiu       $v1, $s2, 0x7
    ctx->pc = 0x1ec660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 7));
    // 0x1ec664: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1ec668:
    // 0x1ec668: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ec668u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec66c: 0x44941000  mtc1        $s4, $f2
    ctx->pc = 0x1ec66cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec670: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1ec670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec674: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ec674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec678: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ec678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ec67c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1ec67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1ec680: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1ec680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec684: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ec684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ec688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ec688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ec68c: 0x1010  mfhi        $v0
    ctx->pc = 0x1ec68cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1ec690: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ec694: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ec694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ec698: 0x0  nop
    ctx->pc = 0x1ec698u;
    // NOP
    // 0x1ec69c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1ec69cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1ec6a0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1ec6a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ec6a4: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x1ec6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1ec6a8: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x1ec6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec6ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec6acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec6b0: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x1ec6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1ec6b4: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1ec6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ec6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ec6bc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC6BCu;
    SET_GPR_U32(ctx, 31, 0x1EC6C4u);
    ctx->pc = 0x1EC6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6BCu;
            // 0x1ec6c0: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6C4u; }
        if (ctx->pc != 0x1EC6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6C4u; }
        if (ctx->pc != 0x1EC6C4u) { return; }
    }
    ctx->pc = 0x1EC6C4u;
    // 0x1ec6c4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ec6c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1ec6c8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC6C8u;
    {
        const bool branch_taken_0x1ec6c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6C8u;
            // 0x1ec6cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6c8) {
            ctx->pc = 0x1EC6DCu;
            goto label_1ec6dc;
        }
    }
    ctx->pc = 0x1EC6D0u;
    // 0x1ec6d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec6d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec6d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC6D4u;
    {
        const bool branch_taken_0x1ec6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6D4u;
            // 0x1ec6d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6d4) {
            ctx->pc = 0x1EC6F4u;
            goto label_1ec6f4;
        }
    }
    ctx->pc = 0x1EC6DCu;
label_1ec6dc:
    // 0x1ec6dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec6dcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec6e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec6e0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec6e8: 0x0  nop
    ctx->pc = 0x1ec6e8u;
    // NOP
    // 0x1ec6ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec6ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec6f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ec6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ec6f4:
    // 0x1ec6f4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC6F4u;
    SET_GPR_U32(ctx, 31, 0x1EC6FCu);
    ctx->pc = 0x1EC6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6F4u;
            // 0x1ec6f8: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6FCu; }
        if (ctx->pc != 0x1EC6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6FCu; }
        if (ctx->pc != 0x1EC6FCu) { return; }
    }
    ctx->pc = 0x1EC6FCu;
    // 0x1ec6fc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1ec6fcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)3u)));
    // 0x1ec700: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EC700u;
    {
        const bool branch_taken_0x1ec700 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1EC704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC700u;
            // 0x1ec704: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec700) {
            ctx->pc = 0x1EC714u;
            goto label_1ec714;
        }
    }
    ctx->pc = 0x1EC708u;
    // 0x1ec708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec70c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC70Cu;
    {
        const bool branch_taken_0x1ec70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC70Cu;
            // 0x1ec710: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec70c) {
            ctx->pc = 0x1EC72Cu;
            goto label_1ec72c;
        }
    }
    ctx->pc = 0x1EC714u;
label_1ec714:
    // 0x1ec714: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ec714u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1ec718: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ec718u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1ec71c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ec71cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec720: 0x0  nop
    ctx->pc = 0x1ec720u;
    // NOP
    // 0x1ec724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ec724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ec728: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1ec728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1ec72c:
    // 0x1ec72c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC72Cu;
    SET_GPR_U32(ctx, 31, 0x1EC734u);
    ctx->pc = 0x1EC730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC72Cu;
            // 0x1ec730: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC734u; }
        if (ctx->pc != 0x1EC734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC734u; }
        if (ctx->pc != 0x1EC734u) { return; }
    }
    ctx->pc = 0x1EC734u;
    // 0x1ec734: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1ec734u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)63u)));
    // 0x1ec738: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1ec738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1ec73c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1EC73Cu;
    SET_GPR_U32(ctx, 31, 0x1EC744u);
    ctx->pc = 0x1EC740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC73Cu;
            // 0x1ec740: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC744u; }
        if (ctx->pc != 0x1EC744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC744u; }
        if (ctx->pc != 0x1EC744u) { return; }
    }
    ctx->pc = 0x1EC744u;
    // 0x1ec744: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1ec744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ec748: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1ec748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1ec74c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ec74cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ec750: 0x2463abe0  addiu       $v1, $v1, -0x5420
    ctx->pc = 0x1ec750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945760));
    // 0x1ec754: 0x0  nop
    ctx->pc = 0x1ec754u;
    // NOP
    // 0x1ec758: 0x2010  mfhi        $a0
    ctx->pc = 0x1ec758u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ec75c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1ec75cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ec760: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ec760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ec764: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ec764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ec768: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x1ec768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x1ec76c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ec76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ec770: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec774: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec774u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec778: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec778u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec784: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC784u;
            // 0x1ec788: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EC4C4u: goto label_1ec4c4;
            case 0x1EC4DCu: goto label_1ec4dc;
            case 0x1EC55Cu: goto label_1ec55c;
            case 0x1EC574u: goto label_1ec574;
            case 0x1EC61Cu: goto label_1ec61c;
            case 0x1EC668u: goto label_1ec668;
            case 0x1EC6DCu: goto label_1ec6dc;
            case 0x1EC6F4u: goto label_1ec6f4;
            case 0x1EC714u: goto label_1ec714;
            case 0x1EC72Cu: goto label_1ec72c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EC78Cu;
}
