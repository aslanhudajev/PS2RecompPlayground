#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChainBaku_small
// Address: 0x14e1e0 - 0x14e3d0
void CreateChainBaku_small_0x14e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChainBaku_small_0x14e1e0");
#endif

    ctx->pc = 0x14e1e0u;

    // 0x14e1e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14e1e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14e1e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14e1ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14e1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14e1f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14e1f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14e1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14e1f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14e1f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e1fc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14e1fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14e200: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14e200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14e204: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14e204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14e208: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14e208u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14e20c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E20Cu;
    {
        const bool branch_taken_0x14e20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14E210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E20Cu;
            // 0x14e210: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e20c) {
            ctx->pc = 0x14E220u;
            goto label_14e220;
        }
    }
    ctx->pc = 0x14E214u;
    // 0x14e214: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14e214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14e218: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14E218u;
    {
        const bool branch_taken_0x14e218 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e218) {
            ctx->pc = 0x14E228u;
            goto label_14e228;
        }
    }
    ctx->pc = 0x14E220u;
label_14e220:
    // 0x14e220: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x14E220u;
    {
        const bool branch_taken_0x14e220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e220) {
            ctx->pc = 0x14E3B0u;
            goto label_14e3b0;
        }
    }
    ctx->pc = 0x14E228u;
label_14e228:
    // 0x14e228: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14E228u;
    SET_GPR_U32(ctx, 31, 0x14E230u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E230u; }
        if (ctx->pc != 0x14E230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E230u; }
        if (ctx->pc != 0x14E230u) { return; }
    }
    ctx->pc = 0x14E230u;
    // 0x14e230: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E230u;
    SET_GPR_U32(ctx, 31, 0x14E238u);
    ctx->pc = 0x14E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E230u;
            // 0x14e234: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E238u; }
        if (ctx->pc != 0x14E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E238u; }
        if (ctx->pc != 0x14E238u) { return; }
    }
    ctx->pc = 0x14E238u;
    // 0x14e238: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e23c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e23cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e240: 0x0  nop
    ctx->pc = 0x14e240u;
    // NOP
    // 0x14e244: 0x0  nop
    ctx->pc = 0x14e244u;
    // NOP
    // 0x14e248: 0x1010  mfhi        $v0
    ctx->pc = 0x14e248u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14e24c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14E24Cu;
    SET_GPR_U32(ctx, 31, 0x14E254u);
    ctx->pc = 0x14E250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E24Cu;
            // 0x14e250: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E254u; }
        if (ctx->pc != 0x14E254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E254u; }
        if (ctx->pc != 0x14E254u) { return; }
    }
    ctx->pc = 0x14E254u;
    // 0x14e254: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14e254u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e258: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14e258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14e25c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14e25cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e260: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x14e260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x14e264: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14e264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14e268: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14e268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14e26c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14e26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14e270: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14e270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14e274: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E274u;
    SET_GPR_U32(ctx, 31, 0x14E27Cu);
    ctx->pc = 0x14E278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E274u;
            // 0x14e278: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E27Cu; }
        if (ctx->pc != 0x14E27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E27Cu; }
        if (ctx->pc != 0x14E27Cu) { return; }
    }
    ctx->pc = 0x14E27Cu;
    // 0x14e27c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e280: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e284: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e284u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e288: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e28c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e290: 0x0  nop
    ctx->pc = 0x14e290u;
    // NOP
    // 0x14e294: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e298: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e298u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e29c: 0x0  nop
    ctx->pc = 0x14e29cu;
    // NOP
    // 0x14e2a0: 0x0  nop
    ctx->pc = 0x14e2a0u;
    // NOP
    // 0x14e2a4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E2A4u;
    SET_GPR_U32(ctx, 31, 0x14E2ACu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2ACu; }
        if (ctx->pc != 0x14E2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2ACu; }
        if (ctx->pc != 0x14E2ACu) { return; }
    }
    ctx->pc = 0x14E2ACu;
    // 0x14e2ac: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e2b0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e2b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e2b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e2b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e2bc: 0x0  nop
    ctx->pc = 0x14e2bcu;
    // NOP
    // 0x14e2c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e2c4: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e2c8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e2cc: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e2ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e2d0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e2d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e2d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e2d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e2dc: 0x0  nop
    ctx->pc = 0x14e2dcu;
    // NOP
    // 0x14e2e0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e2e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e2e4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14e2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14e2e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e2e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e2ec: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14E2ECu;
    SET_GPR_U32(ctx, 31, 0x14E2F4u);
    ctx->pc = 0x14E2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E2ECu;
            // 0x14e2f0: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2F4u; }
        if (ctx->pc != 0x14E2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E2F4u; }
        if (ctx->pc != 0x14E2F4u) { return; }
    }
    ctx->pc = 0x14E2F4u;
    // 0x14e2f4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14e2f8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14e2fc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14e2fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14e300: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e300u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e304: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e308: 0x0  nop
    ctx->pc = 0x14e308u;
    // NOP
    // 0x14e30c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e30cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e310: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14e310u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14e314: 0x0  nop
    ctx->pc = 0x14e314u;
    // NOP
    // 0x14e318: 0x0  nop
    ctx->pc = 0x14e318u;
    // NOP
    // 0x14e31c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14E31Cu;
    SET_GPR_U32(ctx, 31, 0x14E324u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E324u; }
        if (ctx->pc != 0x14E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E324u; }
        if (ctx->pc != 0x14E324u) { return; }
    }
    ctx->pc = 0x14E324u;
    // 0x14e324: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14e324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14e328: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14e328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14e32c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14e32cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14e330: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14e330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e334: 0x0  nop
    ctx->pc = 0x14e334u;
    // NOP
    // 0x14e338: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14e338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14e33c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x14e33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x14e340: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14e340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14e344: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14e344u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14e348: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14e348u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14e34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14e34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14e350: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e354: 0x0  nop
    ctx->pc = 0x14e354u;
    // NOP
    // 0x14e358: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14e358u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14e35c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14e35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14e360: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14e360u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14e364: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E364u;
    SET_GPR_U32(ctx, 31, 0x14E36Cu);
    ctx->pc = 0x14E368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E364u;
            // 0x14e368: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E36Cu; }
        if (ctx->pc != 0x14E36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E36Cu; }
        if (ctx->pc != 0x14E36Cu) { return; }
    }
    ctx->pc = 0x14E36Cu;
    // 0x14e36c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x14e36cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31u)));
    // 0x14e370: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14e370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14e374: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x14e374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x14e378: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14E378u;
    SET_GPR_U32(ctx, 31, 0x14E380u);
    ctx->pc = 0x14E37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14E378u;
            // 0x14e37c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E380u; }
        if (ctx->pc != 0x14E380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14E380u; }
        if (ctx->pc != 0x14E380u) { return; }
    }
    ctx->pc = 0x14E380u;
    // 0x14e380: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14e380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14e384: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14e384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14e388: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14e388u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14e38c: 0x24849870  addiu       $a0, $a0, -0x6790
    ctx->pc = 0x14e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940784));
    // 0x14e390: 0x0  nop
    ctx->pc = 0x14e390u;
    // NOP
    // 0x14e394: 0x2810  mfhi        $a1
    ctx->pc = 0x14e394u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14e398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e39c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14e39cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14e3a0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14e3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14e3a4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14e3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14e3a8: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x14e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x14e3ac: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x14e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_14e3b0:
    // 0x14e3b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14e3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14e3b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14e3b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e3b8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14e3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14e3bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14e3bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e3c0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14e3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14e3c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14e3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x14E3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14E3C8u;
            // 0x14e3cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E220u: goto label_14e220;
            case 0x14E228u: goto label_14e228;
            case 0x14E3B0u: goto label_14e3b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14E3D0u;
}
