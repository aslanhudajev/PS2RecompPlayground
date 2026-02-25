#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateRandomKemuri
// Address: 0x14e5d0 - 0x14e818
void CreateRandomKemuri_0x14e5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateRandomKemuri_0x14e5d0");
#endif

    ctx->pc = 0x14e5d0u;

    // 0x14e5d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e5d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14e5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14e5d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e5dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e5e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e5e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e5ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e5ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e5f0: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14e5f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14e5f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e5f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e5f8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14e5f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14e5fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E5FCu;
    {
        const bool branch_taken_0x14e5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5FCu;
            // 0x14e600: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e5fc) {
            ctx->pc = 0x14E610u;
            goto label_14e610;
        }
    }
    ctx->pc = 0x14E604u;
    // 0x14e604: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14e604u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14e608: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E608u;
    {
        const bool branch_taken_0x14e608 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e608) {
            ctx->pc = 0x14E618u;
            goto label_14e618;
        }
    }
    ctx->pc = 0x14E610u;
label_14e610:
    // 0x14e610: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x14E610u;
    {
        const bool branch_taken_0x14e610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e610) {
            ctx->pc = 0x14E7F8u;
            goto label_14e7f8;
        }
    }
    ctx->pc = 0x14E618u;
label_14e618:
    // 0x14e618: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14E618u;
    SET_GPR_U32(ctx, 31, 0x14E620u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E620u; }
        if (ctx->pc != 0x14E620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E620u; }
        if (ctx->pc != 0x14E620u) { return; }
    }
    ctx->pc = 0x14E620u;
    // 0x14e620: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E620u;
    SET_GPR_U32(ctx, 31, 0x14E628u);
    ctx->pc = 0x14E624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E620u;
            // 0x14e624: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E628u; }
        if (ctx->pc != 0x14E628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E628u; }
        if (ctx->pc != 0x14E628u) { return; }
    }
    ctx->pc = 0x14E628u;
    // 0x14e628: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14e62c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e62cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e630: 0x0  nop
    ctx->pc = 0x14e630u;
    // NOP
    // 0x14e634: 0x0  nop
    ctx->pc = 0x14e634u;
    // NOP
    // 0x14e638: 0x1010  mfhi        $v0
    ctx->pc = 0x14e638u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e63c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14E63Cu;
    SET_GPR_U32(ctx, 31, 0x14E644u);
    ctx->pc = 0x14E640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E63Cu;
            // 0x14e640: 0x2444000f  addiu       $a0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E644u; }
        if (ctx->pc != 0x14E644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E644u; }
        if (ctx->pc != 0x14E644u) { return; }
    }
    ctx->pc = 0x14E644u;
    // 0x14e644: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14e644u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e648: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14e648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14e64c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e64cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e650: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x14e650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14e654: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14e654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14e658: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14e658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14e65c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e65cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e660: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14e660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14e664: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E664u;
    SET_GPR_U32(ctx, 31, 0x14E66Cu);
    ctx->pc = 0x14E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E664u;
            // 0x14e668: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E66Cu; }
        if (ctx->pc != 0x14E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E66Cu; }
        if (ctx->pc != 0x14E66Cu) { return; }
    }
    ctx->pc = 0x14E66Cu;
    // 0x14e66c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E66Cu;
    {
        const bool branch_taken_0x14e66c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14E670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E66Cu;
            // 0x14e670: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e66c) {
            ctx->pc = 0x14E680u;
            goto label_14e680;
        }
    }
    ctx->pc = 0x14E674u;
    // 0x14e674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e678: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E678u;
    {
        const bool branch_taken_0x14e678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E678u;
            // 0x14e67c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e678) {
            ctx->pc = 0x14E698u;
            goto label_14e698;
        }
    }
    ctx->pc = 0x14E680u;
label_14e680:
    // 0x14e680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e680u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x14e684: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e684u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14e688: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e68c: 0x0  nop
    ctx->pc = 0x14e68cu;
    // NOP
    // 0x14e690: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e690u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e694: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14e694u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14e698:
    // 0x14e698: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e69c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e6a0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e6a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e6a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e6a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e6ac: 0x0  nop
    ctx->pc = 0x14e6acu;
    // NOP
    // 0x14e6b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14e6b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14e6b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e6b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x14e6b8: 0x0  nop
    ctx->pc = 0x14e6b8u;
    // NOP
    // 0x14e6bc: 0x0  nop
    ctx->pc = 0x14e6bcu;
    // NOP
    // 0x14e6c0: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E6C0u;
    SET_GPR_U32(ctx, 31, 0x14E6C8u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6C8u; }
        if (ctx->pc != 0x14E6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E6C8u; }
        if (ctx->pc != 0x14E6C8u) { return; }
    }
    ctx->pc = 0x14E6C8u;
    // 0x14e6c8: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e6cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e6d0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e6d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e6d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e6d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e6d8: 0x0  nop
    ctx->pc = 0x14e6d8u;
    // NOP
    // 0x14e6dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e6dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e6e0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14e6e4: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e6e8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e6e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e6ec: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e6ecu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e6f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e6f8: 0x0  nop
    ctx->pc = 0x14e6f8u;
    // NOP
    // 0x14e6fc: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e6fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e700: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14e700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14e704: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e708: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E708u;
    SET_GPR_U32(ctx, 31, 0x14E710u);
    ctx->pc = 0x14E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E708u;
            // 0x14e70c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E710u; }
        if (ctx->pc != 0x14E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E710u; }
        if (ctx->pc != 0x14E710u) { return; }
    }
    ctx->pc = 0x14E710u;
    // 0x14e710: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E710u;
    {
        const bool branch_taken_0x14e710 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E710u;
            // 0x14e714: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e710) {
            ctx->pc = 0x14E724u;
            goto label_14e724;
        }
    }
    ctx->pc = 0x14E718u;
    // 0x14e718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e71c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x14E71Cu;
    {
        const bool branch_taken_0x14e71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E71Cu;
            // 0x14e720: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e71c) {
            ctx->pc = 0x14E73Cu;
            goto label_14e73c;
        }
    }
    ctx->pc = 0x14E724u;
label_14e724:
    // 0x14e724: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14e724u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x14e728: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14e728u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x14e72c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14e72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e730: 0x0  nop
    ctx->pc = 0x14e730u;
    // NOP
    // 0x14e734: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14e734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14e738: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x14e738u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_14e73c:
    // 0x14e73c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e740: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e744u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e748: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e750: 0x0  nop
    ctx->pc = 0x14e750u;
    // NOP
    // 0x14e754: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14e754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14e758: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x14e758u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x14e75c: 0x0  nop
    ctx->pc = 0x14e75cu;
    // NOP
    // 0x14e760: 0x0  nop
    ctx->pc = 0x14e760u;
    // NOP
    // 0x14e764: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E764u;
    SET_GPR_U32(ctx, 31, 0x14E76Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E76Cu; }
        if (ctx->pc != 0x14E76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E76Cu; }
        if (ctx->pc != 0x14E76Cu) { return; }
    }
    ctx->pc = 0x14E76Cu;
    // 0x14e76c: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e770: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e774: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e77c: 0x0  nop
    ctx->pc = 0x14e77cu;
    // NOP
    // 0x14e780: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e780u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e784: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14e788: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e78c: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e78cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e790: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e790u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e794: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e79c: 0x0  nop
    ctx->pc = 0x14e79cu;
    // NOP
    // 0x14e7a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e7a0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e7a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e7a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14e7a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e7a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e7ac: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E7ACu;
    SET_GPR_U32(ctx, 31, 0x14E7B4u);
    ctx->pc = 0x14E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7ACu;
            // 0x14e7b0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7B4u; }
        if (ctx->pc != 0x14E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7B4u; }
        if (ctx->pc != 0x14E7B4u) { return; }
    }
    ctx->pc = 0x14E7B4u;
    // 0x14e7b4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14e7b8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14e7b8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x14e7bc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14e7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14e7c0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E7C0u;
    SET_GPR_U32(ctx, 31, 0x14E7C8u);
    ctx->pc = 0x14E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E7C0u;
            // 0x14e7c4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7C8u; }
        if (ctx->pc != 0x14E7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E7C8u; }
        if (ctx->pc != 0x14E7C8u) { return; }
    }
    ctx->pc = 0x14E7C8u;
    // 0x14e7c8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14e7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e7cc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14e7d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x14e7d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e7d4: 0x24639884  addiu       $v1, $v1, -0x677C
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940804));
    // 0x14e7d8: 0x0  nop
    ctx->pc = 0x14e7d8u;
    // NOP
    // 0x14e7dc: 0x2010  mfhi        $a0
    ctx->pc = 0x14e7dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x14e7e0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x14e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14e7e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14e7e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e7ec: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x14e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x14e7f0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x14e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x14e7f4: 0x0  nop
    ctx->pc = 0x14e7f4u;
    // NOP
label_14e7f8:
    // 0x14e7f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14e7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e7fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e800: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e804: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e808: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e80c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e80cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e810: 0x3e00008  jr          $ra
    ctx->pc = 0x14E810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E810u;
            // 0x14e814: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E610u: goto label_14e610;
            case 0x14E618u: goto label_14e618;
            case 0x14E680u: goto label_14e680;
            case 0x14E698u: goto label_14e698;
            case 0x14E724u: goto label_14e724;
            case 0x14E73Cu: goto label_14e73c;
            case 0x14E7F8u: goto label_14e7f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E818u;
}
