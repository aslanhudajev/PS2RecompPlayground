#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateRandomBaku
// Address: 0x14e820 - 0x14ea68
void CreateRandomBaku_0x14e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateRandomBaku_0x14e820");
#endif

    ctx->pc = 0x14e820u;

    // 0x14e820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14e828: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e82c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e830: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e83c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e83cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e840: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14e840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14e844: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e844u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e848: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14e848u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14e84c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E84Cu;
    {
        const bool branch_taken_0x14e84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E84Cu;
            // 0x14e850: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e84c) {
            ctx->pc = 0x14E860u;
            goto label_14e860;
        }
    }
    ctx->pc = 0x14E854u;
    // 0x14e854: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14e854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14e858: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E858u;
    {
        const bool branch_taken_0x14e858 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e858) {
            ctx->pc = 0x14E868u;
            goto label_14e868;
        }
    }
    ctx->pc = 0x14E860u;
label_14e860:
    // 0x14e860: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x14E860u;
    {
        const bool branch_taken_0x14e860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e860) {
            ctx->pc = 0x14EA48u;
            goto label_14ea48;
        }
    }
    ctx->pc = 0x14E868u;
label_14e868:
    // 0x14e868: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14E868u;
    SET_GPR_U32(ctx, 31, 0x14E870u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E870u; }
        if (ctx->pc != 0x14E870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E870u; }
        if (ctx->pc != 0x14E870u) { return; }
    }
    ctx->pc = 0x14E870u;
    // 0x14e870: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E870u;
    SET_GPR_U32(ctx, 31, 0x14E878u);
    ctx->pc = 0x14E874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E870u;
            // 0x14e874: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E878u; }
        if (ctx->pc != 0x14E878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E878u; }
        if (ctx->pc != 0x14E878u) { return; }
    }
    ctx->pc = 0x14E878u;
    // 0x14e878: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e87c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e87cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e880: 0x0  nop
    ctx->pc = 0x14e880u;
    // NOP
    // 0x14e884: 0x0  nop
    ctx->pc = 0x14e884u;
    // NOP
    // 0x14e888: 0x1010  mfhi        $v0
    ctx->pc = 0x14e888u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e88c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14E88Cu;
    SET_GPR_U32(ctx, 31, 0x14E894u);
    ctx->pc = 0x14E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E88Cu;
            // 0x14e890: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E894u; }
        if (ctx->pc != 0x14E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E894u; }
        if (ctx->pc != 0x14E894u) { return; }
    }
    ctx->pc = 0x14E894u;
    // 0x14e894: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14e894u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e898: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14e898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14e89c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e89cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e8a0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x14e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14e8a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14e8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14e8a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14e8ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e8b0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14e8b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14e8b4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E8B4u;
    SET_GPR_U32(ctx, 31, 0x14E8BCu);
    ctx->pc = 0x14E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8B4u;
            // 0x14e8b8: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E8BCu; }
        if (ctx->pc != 0x14E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E8BCu; }
        if (ctx->pc != 0x14E8BCu) { return; }
    }
    ctx->pc = 0x14E8BCu;
    // 0x14e8bc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E8BCu;
    {
        const bool branch_taken_0x14e8bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14E8C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8BCu;
            // 0x14e8c0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8bc) {
            ctx->pc = 0x14E8D0u;
            goto label_14e8d0;
        }
    }
    ctx->pc = 0x14E8C4u;
    // 0x14e8c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e8c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e8c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E8C8u;
    {
        const bool branch_taken_0x14e8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E8C8u;
            // 0x14e8cc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e8c8) {
            ctx->pc = 0x14E8E8u;
            goto label_14e8e8;
        }
    }
    ctx->pc = 0x14E8D0u;
label_14e8d0:
    // 0x14e8d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e8d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x14e8d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e8d4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14e8d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e8d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e8dc: 0x0  nop
    ctx->pc = 0x14e8dcu;
    // NOP
    // 0x14e8e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e8e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e8e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14e8e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14e8e8:
    // 0x14e8e8: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e8ec: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e8f0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e8f0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e8f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e8f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e8f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e8f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e8fc: 0x0  nop
    ctx->pc = 0x14e8fcu;
    // NOP
    // 0x14e900: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14e900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14e904: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e904u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x14e908: 0x0  nop
    ctx->pc = 0x14e908u;
    // NOP
    // 0x14e90c: 0x0  nop
    ctx->pc = 0x14e90cu;
    // NOP
    // 0x14e910: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E910u;
    SET_GPR_U32(ctx, 31, 0x14E918u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E918u; }
        if (ctx->pc != 0x14E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E918u; }
        if (ctx->pc != 0x14E918u) { return; }
    }
    ctx->pc = 0x14E918u;
    // 0x14e918: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e91c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e920: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e928: 0x0  nop
    ctx->pc = 0x14e928u;
    // NOP
    // 0x14e92c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e930: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e934: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e938: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e938u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e93c: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e93cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e940: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e948: 0x0  nop
    ctx->pc = 0x14e948u;
    // NOP
    // 0x14e94c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e94cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e950: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14e950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14e954: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e954u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e958: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E958u;
    SET_GPR_U32(ctx, 31, 0x14E960u);
    ctx->pc = 0x14E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E958u;
            // 0x14e95c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E960u; }
        if (ctx->pc != 0x14E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E960u; }
        if (ctx->pc != 0x14E960u) { return; }
    }
    ctx->pc = 0x14E960u;
    // 0x14e960: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E960u;
    {
        const bool branch_taken_0x14e960 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14E964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E960u;
            // 0x14e964: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e960) {
            ctx->pc = 0x14E974u;
            goto label_14e974;
        }
    }
    ctx->pc = 0x14E968u;
    // 0x14e968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e96c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E96Cu;
    {
        const bool branch_taken_0x14e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E96Cu;
            // 0x14e970: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e96c) {
            ctx->pc = 0x14E98Cu;
            goto label_14e98c;
        }
    }
    ctx->pc = 0x14E974u;
label_14e974:
    // 0x14e974: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e974u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x14e978: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e978u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14e97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e980: 0x0  nop
    ctx->pc = 0x14e980u;
    // NOP
    // 0x14e984: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e988: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14e988u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14e98c:
    // 0x14e98c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e990: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e994: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e994u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e998: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e998u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e99c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e99cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e9a0: 0x0  nop
    ctx->pc = 0x14e9a0u;
    // NOP
    // 0x14e9a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14e9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14e9a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e9a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x14e9ac: 0x0  nop
    ctx->pc = 0x14e9acu;
    // NOP
    // 0x14e9b0: 0x0  nop
    ctx->pc = 0x14e9b0u;
    // NOP
    // 0x14e9b4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E9B4u;
    SET_GPR_U32(ctx, 31, 0x14E9BCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9BCu; }
        if (ctx->pc != 0x14E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E9BCu; }
        if (ctx->pc != 0x14E9BCu) { return; }
    }
    ctx->pc = 0x14E9BCu;
    // 0x14e9bc: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e9c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e9c4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e9c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e9cc: 0x0  nop
    ctx->pc = 0x14e9ccu;
    // NOP
    // 0x14e9d0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e9d4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e9d8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e9dc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e9dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e9e0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e9e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e9e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e9e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e9e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e9e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e9ec: 0x0  nop
    ctx->pc = 0x14e9ecu;
    // NOP
    // 0x14e9f0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e9f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e9f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e9f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14e9f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e9f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e9fc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E9FCu;
    SET_GPR_U32(ctx, 31, 0x14EA04u);
    ctx->pc = 0x14EA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E9FCu;
            // 0x14ea00: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA04u; }
        if (ctx->pc != 0x14EA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA04u; }
        if (ctx->pc != 0x14EA04u) { return; }
    }
    ctx->pc = 0x14EA04u;
    // 0x14ea04: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14ea08: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14ea08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x14ea0c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14ea10: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x14ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x14ea14: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14EA14u;
    SET_GPR_U32(ctx, 31, 0x14EA1Cu);
    ctx->pc = 0x14EA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA14u;
            // 0x14ea18: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA1Cu; }
        if (ctx->pc != 0x14EA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14EA1Cu; }
        if (ctx->pc != 0x14EA1Cu) { return; }
    }
    ctx->pc = 0x14EA1Cu;
    // 0x14ea1c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14ea20: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14ea20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14ea24: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x14ea24u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14ea28: 0x24639870  addiu       $v1, $v1, -0x6790
    ctx->pc = 0x14ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940784));
    // 0x14ea2c: 0x0  nop
    ctx->pc = 0x14ea2cu;
    // NOP
    // 0x14ea30: 0x2010  mfhi        $a0
    ctx->pc = 0x14ea30u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14ea34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14ea34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14ea38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14ea3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ea40: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x14ea40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x14ea44: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14ea44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_14ea48:
    // 0x14ea48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14ea48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ea4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14ea4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ea50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14ea50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14ea54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14ea54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ea58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14ea58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ea5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ea5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ea60: 0x3e00008  jr          $ra
    ctx->pc = 0x14EA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14EA60u;
            // 0x14ea64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E860u: goto label_14e860;
            case 0x14E868u: goto label_14e868;
            case 0x14E8D0u: goto label_14e8d0;
            case 0x14E8E8u: goto label_14e8e8;
            case 0x14E974u: goto label_14e974;
            case 0x14E98Cu: goto label_14e98c;
            case 0x14EA48u: goto label_14ea48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14EA68u;
}
