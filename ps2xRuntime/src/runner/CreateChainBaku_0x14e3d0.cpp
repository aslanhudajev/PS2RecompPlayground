#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChainBaku
// Address: 0x14e3d0 - 0x14e5c8
void CreateChainBaku_0x14e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChainBaku_0x14e3d0");
#endif

    ctx->pc = 0x14e3d0u;

    // 0x14e3d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e3d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14e3d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e3dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e3e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e3e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e3e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3ec: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e3ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e3f0: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14e3f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14e3f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e3f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e3f8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14e3f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14e3fc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E3FCu;
    {
        const bool branch_taken_0x14e3fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3FCu;
            // 0x14e400: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3fc) {
            ctx->pc = 0x14E410u;
            goto label_14e410;
        }
    }
    ctx->pc = 0x14E404u;
    // 0x14e404: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14e404u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14e408: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E408u;
    {
        const bool branch_taken_0x14e408 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e408) {
            ctx->pc = 0x14E418u;
            goto label_14e418;
        }
    }
    ctx->pc = 0x14E410u;
label_14e410:
    // 0x14e410: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x14E410u;
    {
        const bool branch_taken_0x14e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e410) {
            ctx->pc = 0x14E5A8u;
            goto label_14e5a8;
        }
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14E418u;
    SET_GPR_U32(ctx, 31, 0x14E420u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E420u; }
        if (ctx->pc != 0x14E420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E420u; }
        if (ctx->pc != 0x14E420u) { return; }
    }
    ctx->pc = 0x14E420u;
    // 0x14e420: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E420u;
    SET_GPR_U32(ctx, 31, 0x14E428u);
    ctx->pc = 0x14E424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E420u;
            // 0x14e424: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E428u; }
        if (ctx->pc != 0x14E428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E428u; }
        if (ctx->pc != 0x14E428u) { return; }
    }
    ctx->pc = 0x14E428u;
    // 0x14e428: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e42c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e42cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e430: 0x0  nop
    ctx->pc = 0x14e430u;
    // NOP
    // 0x14e434: 0x0  nop
    ctx->pc = 0x14e434u;
    // NOP
    // 0x14e438: 0x1010  mfhi        $v0
    ctx->pc = 0x14e438u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e43c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14E43Cu;
    SET_GPR_U32(ctx, 31, 0x14E444u);
    ctx->pc = 0x14E440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E43Cu;
            // 0x14e440: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E444u; }
        if (ctx->pc != 0x14E444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E444u; }
        if (ctx->pc != 0x14E444u) { return; }
    }
    ctx->pc = 0x14E444u;
    // 0x14e444: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14e444u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e448: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14e448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14e44c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e44cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e450: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x14e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14e454: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14e454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14e458: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14e458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14e45c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e45cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e460: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14e460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14e464: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E464u;
    SET_GPR_U32(ctx, 31, 0x14E46Cu);
    ctx->pc = 0x14E468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E464u;
            // 0x14e468: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E46Cu; }
        if (ctx->pc != 0x14E46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E46Cu; }
        if (ctx->pc != 0x14E46Cu) { return; }
    }
    ctx->pc = 0x14E46Cu;
    // 0x14e46c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e470: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e474: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e474u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e478: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e480: 0x0  nop
    ctx->pc = 0x14e480u;
    // NOP
    // 0x14e484: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e488: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e488u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e48c: 0x0  nop
    ctx->pc = 0x14e48cu;
    // NOP
    // 0x14e490: 0x0  nop
    ctx->pc = 0x14e490u;
    // NOP
    // 0x14e494: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E494u;
    SET_GPR_U32(ctx, 31, 0x14E49Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E49Cu; }
        if (ctx->pc != 0x14E49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E49Cu; }
        if (ctx->pc != 0x14E49Cu) { return; }
    }
    ctx->pc = 0x14E49Cu;
    // 0x14e49c: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e4a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e4a4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e4a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e4a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e4ac: 0x0  nop
    ctx->pc = 0x14e4acu;
    // NOP
    // 0x14e4b0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e4b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e4b4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e4b8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e4bc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e4bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e4c0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e4c0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e4c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e4c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e4c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e4c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e4cc: 0x0  nop
    ctx->pc = 0x14e4ccu;
    // NOP
    // 0x14e4d0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e4d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e4d4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14e4d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14e4d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e4d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e4dc: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E4DCu;
    SET_GPR_U32(ctx, 31, 0x14E4E4u);
    ctx->pc = 0x14E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E4DCu;
            // 0x14e4e0: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4E4u; }
        if (ctx->pc != 0x14E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E4E4u; }
        if (ctx->pc != 0x14E4E4u) { return; }
    }
    ctx->pc = 0x14E4E4u;
    // 0x14e4e4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e4e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e4ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e4ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e4f0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e4f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e4f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e4f8: 0x0  nop
    ctx->pc = 0x14e4f8u;
    // NOP
    // 0x14e4fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e4fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e500: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e500u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e504: 0x0  nop
    ctx->pc = 0x14e504u;
    // NOP
    // 0x14e508: 0x0  nop
    ctx->pc = 0x14e508u;
    // NOP
    // 0x14e50c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E50Cu;
    SET_GPR_U32(ctx, 31, 0x14E514u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E514u; }
        if (ctx->pc != 0x14E514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E514u; }
        if (ctx->pc != 0x14E514u) { return; }
    }
    ctx->pc = 0x14E514u;
    // 0x14e514: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e518: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e51c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e51cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e524: 0x0  nop
    ctx->pc = 0x14e524u;
    // NOP
    // 0x14e528: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e52c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e530: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e534: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e534u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e538: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e538u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e53c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e53cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e544: 0x0  nop
    ctx->pc = 0x14e544u;
    // NOP
    // 0x14e548: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e548u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e54c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e54cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14e550: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e554: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E554u;
    SET_GPR_U32(ctx, 31, 0x14E55Cu);
    ctx->pc = 0x14E558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E554u;
            // 0x14e558: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E55Cu; }
        if (ctx->pc != 0x14E55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E55Cu; }
        if (ctx->pc != 0x14E55Cu) { return; }
    }
    ctx->pc = 0x14E55Cu;
    // 0x14e55c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14e560: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14e560u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x14e564: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14e564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14e568: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x14e568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x14e56c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E56Cu;
    SET_GPR_U32(ctx, 31, 0x14E574u);
    ctx->pc = 0x14E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E56Cu;
            // 0x14e570: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E574u; }
        if (ctx->pc != 0x14E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E574u; }
        if (ctx->pc != 0x14E574u) { return; }
    }
    ctx->pc = 0x14E574u;
    // 0x14e574: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e578: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14e578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14e57c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e57cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e580: 0x24849870  addiu       $a0, $a0, -0x6790
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940784));
    // 0x14e584: 0x0  nop
    ctx->pc = 0x14e584u;
    // NOP
    // 0x14e588: 0x2810  mfhi        $a1
    ctx->pc = 0x14e588u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14e58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e590: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e590u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e594: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e598: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e59c: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x14e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x14e5a0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x14e5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x14e5a4: 0x0  nop
    ctx->pc = 0x14e5a4u;
    // NOP
label_14e5a8:
    // 0x14e5a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14e5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e5ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e5acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e5b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e5b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e5b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e5b8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e5bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14E5C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E5C0u;
            // 0x14e5c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E410u: goto label_14e410;
            case 0x14E418u: goto label_14e418;
            case 0x14E5A8u: goto label_14e5a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E5C8u;
}
