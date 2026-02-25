#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CreateChainKemuri_small
// Address: 0x14de00 - 0x14dff0
void CreateChainKemuri_small_0x14de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CreateChainKemuri_small_0x14de00");
#endif

    ctx->pc = 0x14de00u;

    // 0x14de00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14de04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14de08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14de0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14de10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14de10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14de14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14de18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14de18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14de1c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14de1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14de20: 0x2a23ff10  slti        $v1, $s1, -0xF0
    ctx->pc = 0x14de20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967056) ? 1 : 0);
    // 0x14de24: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14de24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14de28: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x14de28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x14de2c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14DE2Cu;
    {
        const bool branch_taken_0x14de2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE2Cu;
            // 0x14de30: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14de2c) {
            ctx->pc = 0x14DE40u;
            goto label_14de40;
        }
    }
    ctx->pc = 0x14DE34u;
    // 0x14de34: 0x2a2100f1  slti        $at, $s1, 0xF1
    ctx->pc = 0x14de34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)241) ? 1 : 0);
    // 0x14de38: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DE38u;
    {
        const bool branch_taken_0x14de38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14de38) {
            ctx->pc = 0x14DE48u;
            goto label_14de48;
        }
    }
    ctx->pc = 0x14DE40u;
label_14de40:
    // 0x14de40: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x14DE40u;
    {
        const bool branch_taken_0x14de40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14de40) {
            ctx->pc = 0x14DFD0u;
            goto label_14dfd0;
        }
    }
    ctx->pc = 0x14DE48u;
label_14de48:
    // 0x14de48: 0xc053bf8  jal         func_14EFE0
    ctx->pc = 0x14DE48u;
    SET_GPR_U32(ctx, 31, 0x14DE50u);
    ctx->pc = 0x14EFE0u;
    if (runtime->hasFunction(0x14EFE0u)) {
        auto targetFn = runtime->lookupFunction(0x14EFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE50u; }
        if (ctx->pc != 0x14DE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExplosionAlloc_0x14efe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE50u; }
        if (ctx->pc != 0x14DE50u) { return; }
    }
    ctx->pc = 0x14DE50u;
    // 0x14de50: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DE50u;
    SET_GPR_U32(ctx, 31, 0x14DE58u);
    ctx->pc = 0x14DE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE50u;
            // 0x14de54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE58u; }
        if (ctx->pc != 0x14DE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE58u; }
        if (ctx->pc != 0x14DE58u) { return; }
    }
    ctx->pc = 0x14DE58u;
    // 0x14de58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14de58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14de5c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14de5cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14de60: 0x0  nop
    ctx->pc = 0x14de60u;
    // NOP
    // 0x14de64: 0x0  nop
    ctx->pc = 0x14de64u;
    // NOP
    // 0x14de68: 0x1010  mfhi        $v0
    ctx->pc = 0x14de68u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14de6c: 0xc05c018  jal         func_170060
    ctx->pc = 0x14DE6Cu;
    SET_GPR_U32(ctx, 31, 0x14DE74u);
    ctx->pc = 0x14DE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE6Cu;
            // 0x14de70: 0x2444000f  addiu       $a0, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170060u;
    if (runtime->hasFunction(0x170060u)) {
        auto targetFn = runtime->lookupFunction(0x170060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE74u; }
        if (ctx->pc != 0x14DE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetUVData_0x170060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE74u; }
        if (ctx->pc != 0x14DE74u) { return; }
    }
    ctx->pc = 0x14DE74u;
    // 0x14de74: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x14de74u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14de78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14de78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14de7c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x14de7cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14de80: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x14de80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x14de84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14de84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14de88: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14de88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x14de8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14de8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14de90: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x14de90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x14de94: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14DE94u;
    SET_GPR_U32(ctx, 31, 0x14DE9Cu);
    ctx->pc = 0x14DE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DE94u;
            // 0x14de98: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE9Cu; }
        if (ctx->pc != 0x14DE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DE9Cu; }
        if (ctx->pc != 0x14DE9Cu) { return; }
    }
    ctx->pc = 0x14DE9Cu;
    // 0x14de9c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14dea0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14dea4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14dea4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14dea8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14dea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14deac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14deacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14deb0: 0x0  nop
    ctx->pc = 0x14deb0u;
    // NOP
    // 0x14deb4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14deb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14deb8: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14deb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14debc: 0x0  nop
    ctx->pc = 0x14debcu;
    // NOP
    // 0x14dec0: 0x0  nop
    ctx->pc = 0x14dec0u;
    // NOP
    // 0x14dec4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14DEC4u;
    SET_GPR_U32(ctx, 31, 0x14DECCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DECCu; }
        if (ctx->pc != 0x14DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DECCu; }
        if (ctx->pc != 0x14DECCu) { return; }
    }
    ctx->pc = 0x14DECCu;
    // 0x14decc: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14deccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14ded0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14ded4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14ded4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14ded8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14ded8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14dedc: 0x0  nop
    ctx->pc = 0x14dedcu;
    // NOP
    // 0x14dee0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14dee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14dee4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14dee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14dee8: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14deec: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14deecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14def0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14def0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14def4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14def4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14def8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14def8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14defc: 0x0  nop
    ctx->pc = 0x14defcu;
    // NOP
    // 0x14df00: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14df00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14df04: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x14df04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x14df08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14df08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14df0c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x14DF0Cu;
    SET_GPR_U32(ctx, 31, 0x14DF14u);
    ctx->pc = 0x14DF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF0Cu;
            // 0x14df10: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF14u; }
        if (ctx->pc != 0x14DF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF14u; }
        if (ctx->pc != 0x14DF14u) { return; }
    }
    ctx->pc = 0x14DF14u;
    // 0x14df14: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14df14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x14df18: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x14df18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x14df1c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14df1cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14df20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14df20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14df24: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14df24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df28: 0x0  nop
    ctx->pc = 0x14df28u;
    // NOP
    // 0x14df2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14df2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14df30: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x14df30u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
    // 0x14df34: 0x0  nop
    ctx->pc = 0x14df34u;
    // NOP
    // 0x14df38: 0x0  nop
    ctx->pc = 0x14df38u;
    // NOP
    // 0x14df3c: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x14DF3Cu;
    SET_GPR_U32(ctx, 31, 0x14DF44u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF44u; }
        if (ctx->pc != 0x14DF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF44u; }
        if (ctx->pc != 0x14DF44u) { return; }
    }
    ctx->pc = 0x14DF44u;
    // 0x14df44: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x14df44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x14df48: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x14df48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x14df4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14df4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14df50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14df50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df54: 0x0  nop
    ctx->pc = 0x14df54u;
    // NOP
    // 0x14df58: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x14df58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14df5c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14df60: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x14df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
    // 0x14df64: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x14df64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)26214u)));
    // 0x14df68: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x14df68u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[1];
    // 0x14df6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14df6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14df70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14df70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14df74: 0x0  nop
    ctx->pc = 0x14df74u;
    // NOP
    // 0x14df78: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14df78u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x14df7c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x14df7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x14df80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14df80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14df84: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DF84u;
    SET_GPR_U32(ctx, 31, 0x14DF8Cu);
    ctx->pc = 0x14DF88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF84u;
            // 0x14df88: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF8Cu; }
        if (ctx->pc != 0x14DF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF8Cu; }
        if (ctx->pc != 0x14DF8Cu) { return; }
    }
    ctx->pc = 0x14DF8Cu;
    // 0x14df8c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14df8cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)15u)));
    // 0x14df90: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x14df90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x14df94: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14DF94u;
    SET_GPR_U32(ctx, 31, 0x14DF9Cu);
    ctx->pc = 0x14DF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14DF94u;
            // 0x14df98: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF9Cu; }
        if (ctx->pc != 0x14DF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14DF9Cu; }
        if (ctx->pc != 0x14DF9Cu) { return; }
    }
    ctx->pc = 0x14DF9Cu;
    // 0x14df9c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14dfa0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x14dfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x14dfa4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x14dfa4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x14dfa8: 0x24849884  addiu       $a0, $a0, -0x677C
    ctx->pc = 0x14dfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940804));
    // 0x14dfac: 0x0  nop
    ctx->pc = 0x14dfacu;
    // NOP
    // 0x14dfb0: 0x2810  mfhi        $a1
    ctx->pc = 0x14dfb0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x14dfb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14dfb8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x14dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14dfbc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14dfc0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14dfc4: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x14dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x14dfc8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x14dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x14dfcc: 0x0  nop
    ctx->pc = 0x14dfccu;
    // NOP
label_14dfd0:
    // 0x14dfd0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14dfd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14dfd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14dfd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14dfd8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14dfdc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14dfdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14dfe0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14dfe4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14dfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14dfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x14DFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14DFE8u;
            // 0x14dfec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14DE40u: goto label_14de40;
            case 0x14DE48u: goto label_14de48;
            case 0x14DFD0u: goto label_14dfd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14DFF0u;
}
