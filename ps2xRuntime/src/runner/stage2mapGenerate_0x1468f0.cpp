#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage2mapGenerate
// Address: 0x1468f0 - 0x146bb0
void stage2mapGenerate_0x1468f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage2mapGenerate_0x1468f0");
#endif

    ctx->pc = 0x1468f0u;

    // 0x1468f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1468f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1468f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1468f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1468f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1468f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1468fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1468fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146900: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x146900u;
    SET_GPR_U32(ctx, 31, 0x146908u);
    ctx->pc = 0x146904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146900u;
            // 0x146904: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146908u; }
        if (ctx->pc != 0x146908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146908u; }
        if (ctx->pc != 0x146908u) { return; }
    }
    ctx->pc = 0x146908u;
    // 0x146908: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x146908u;
    SET_GPR_U32(ctx, 31, 0x146910u);
    ctx->pc = 0x14690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146908u;
            // 0x14690c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146910u; }
        if (ctx->pc != 0x146910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146910u; }
        if (ctx->pc != 0x146910u) { return; }
    }
    ctx->pc = 0x146910u;
    // 0x146910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x146910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146914: 0x0  nop
    ctx->pc = 0x146914u;
    // NOP
    // 0x146918: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x146918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14691c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x146920: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x146920u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x146924: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x146924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x146928: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14692c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14692cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146930: 0x0  nop
    ctx->pc = 0x146930u;
    // NOP
    // 0x146934: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x146934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x146938: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x146938u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x14693c: 0x0  nop
    ctx->pc = 0x14693cu;
    // NOP
    // 0x146940: 0x0  nop
    ctx->pc = 0x146940u;
    // NOP
    // 0x146944: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x146944u;
    SET_GPR_U32(ctx, 31, 0x14694Cu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14694Cu; }
        if (ctx->pc != 0x14694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14694Cu; }
        if (ctx->pc != 0x14694Cu) { return; }
    }
    ctx->pc = 0x14694Cu;
    // 0x14694c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14694cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x146950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146954: 0x0  nop
    ctx->pc = 0x146954u;
    // NOP
    // 0x146958: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x146958u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x14695c: 0x0  nop
    ctx->pc = 0x14695cu;
    // NOP
    // 0x146960: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146964: 0xc0506f0  jal         func_141BC0
    ctx->pc = 0x146964u;
    SET_GPR_U32(ctx, 31, 0x14696Cu);
    ctx->pc = 0x146968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146964u;
            // 0x146968: 0xe4209d00  swc1        $f0, -0x6300($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941952), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x141BC0u;
    if (runtime->hasFunction(0x141BC0u)) {
        auto targetFn = runtime->lookupFunction(0x141BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14696Cu; }
        if (ctx->pc != 0x14696Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetNowFrame_0x141bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14696Cu; }
        if (ctx->pc != 0x14696Cu) { return; }
    }
    ctx->pc = 0x14696Cu;
    // 0x14696c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14696cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146970: 0x0  nop
    ctx->pc = 0x146970u;
    // NOP
    // 0x146974: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x146974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x146978: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x146978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x14697c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x14697cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x146980: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x146980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x146984: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x146984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x146988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14698c: 0x0  nop
    ctx->pc = 0x14698cu;
    // NOP
    // 0x146990: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x146990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x146994: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x146994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x146998: 0x0  nop
    ctx->pc = 0x146998u;
    // NOP
    // 0x14699c: 0x0  nop
    ctx->pc = 0x14699cu;
    // NOP
    // 0x1469a0: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1469A0u;
    SET_GPR_U32(ctx, 31, 0x1469A8u);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469A8u; }
        if (ctx->pc != 0x1469A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469A8u; }
        if (ctx->pc != 0x1469A8u) { return; }
    }
    ctx->pc = 0x1469A8u;
    // 0x1469a8: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x1469a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x1469ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1469acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1469b0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1469b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1469b4: 0x0  nop
    ctx->pc = 0x1469b4u;
    // NOP
    // 0x1469b8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1469b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1469bc: 0x0  nop
    ctx->pc = 0x1469bcu;
    // NOP
    // 0x1469c0: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1469c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1469c4: 0x16030074  bne         $s0, $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1469C4u;
    {
        const bool branch_taken_0x1469c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1469C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1469C4u;
            // 0x1469c8: 0xe4209cf8  swc1        $f0, -0x6308($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941944), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1469c4) {
            ctx->pc = 0x146B98u;
            goto label_146b98;
        }
    }
    ctx->pc = 0x1469CCu;
    // 0x1469cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1469ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1469d0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1469d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1469d4: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x1469D4u;
    SET_GPR_U32(ctx, 31, 0x1469DCu);
    ctx->pc = 0x1469D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1469D4u;
            // 0x1469d8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469DCu; }
        if (ctx->pc != 0x1469DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1469DCu; }
        if (ctx->pc != 0x1469DCu) { return; }
    }
    ctx->pc = 0x1469DCu;
    // 0x1469dc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1469dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1469e0: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x1469e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1469e4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1469e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1469e8: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x1469e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1469ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1469ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1469f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1469f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469f4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1469f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x1469f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1469f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1469fc: 0x0  nop
    ctx->pc = 0x1469fcu;
    // NOP
label_146a00:
    // 0x146a00: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146a04: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x146a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x146a08: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146a0c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146a10: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146A10u;
    SET_GPR_U32(ctx, 31, 0x146A18u);
    ctx->pc = 0x146A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146A10u;
            // 0x146a14: 0x24e77660  addiu       $a3, $a3, 0x7660 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146A18u; }
        if (ctx->pc != 0x146A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146A18u; }
        if (ctx->pc != 0x146A18u) { return; }
    }
    ctx->pc = 0x146A18u;
    // 0x146a18: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x146a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146a1c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x146a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x146a20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x146a20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x146a24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x146a24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x146a28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146a2c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x146a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x146a30: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x146a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x146a34: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x146a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x146a38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x146A38u;
    {
        const bool branch_taken_0x146a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A38u;
            // 0x146a3c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a38) {
            ctx->pc = 0x146A00u;
            goto label_146a00;
        }
    }
    ctx->pc = 0x146A40u;
    // 0x146a40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x146a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x146a44: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x146a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x146a48: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x146a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x146a4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x146a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146a50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x146a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x146a54: 0x0  nop
    ctx->pc = 0x146a54u;
    // NOP
label_146a58:
    // 0x146a58: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146a58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146a5c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x146a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x146a60: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146a64: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146a68: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146A68u;
    SET_GPR_U32(ctx, 31, 0x146A70u);
    ctx->pc = 0x146A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146A68u;
            // 0x146a6c: 0x24e77660  addiu       $a3, $a3, 0x7660 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146A70u; }
        if (ctx->pc != 0x146A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146A70u; }
        if (ctx->pc != 0x146A70u) { return; }
    }
    ctx->pc = 0x146A70u;
    // 0x146a70: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x146a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146a74: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x146a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x146a78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x146a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146a7c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x146a7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x146a80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x146a80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146a84: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x146a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x146a88: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x146a88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x146a8c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x146a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x146a90: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x146A90u;
    {
        const bool branch_taken_0x146a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A90u;
            // 0x146a94: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a90) {
            ctx->pc = 0x146A58u;
            goto label_146a58;
        }
    }
    ctx->pc = 0x146A98u;
    // 0x146a98: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x146a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x146a9c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x146a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x146aa0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x146aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x146aa4: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146aa8: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x146aac: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x146aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x146ab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x146ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x146ab4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146ab8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146abc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146ABCu;
    SET_GPR_U32(ctx, 31, 0x146AC4u);
    ctx->pc = 0x146AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146ABCu;
            // 0x146ac0: 0x24e77490  addiu       $a3, $a3, 0x7490 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146AC4u; }
        if (ctx->pc != 0x146AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146AC4u; }
        if (ctx->pc != 0x146AC4u) { return; }
    }
    ctx->pc = 0x146AC4u;
    // 0x146ac4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x146ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x146ac8: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x146acc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x146accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x146ad0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146ad4: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x146ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x146ad8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x146ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x146adc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x146adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x146ae0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146ae4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146ae8: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146AE8u;
    SET_GPR_U32(ctx, 31, 0x146AF0u);
    ctx->pc = 0x146AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146AE8u;
            // 0x146aec: 0x24e772c0  addiu       $a3, $a3, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146AF0u; }
        if (ctx->pc != 0x146AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146AF0u; }
        if (ctx->pc != 0x146AF0u) { return; }
    }
    ctx->pc = 0x146AF0u;
    // 0x146af0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x146af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x146af4: 0x3c02c448  lui         $v0, 0xC448
    ctx->pc = 0x146af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50248 << 16));
    // 0x146af8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x146af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x146afc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146afcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146b00: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x146b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x146b04: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x146b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x146b08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x146b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x146b0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146b10: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146b14: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146B14u;
    SET_GPR_U32(ctx, 31, 0x146B1Cu);
    ctx->pc = 0x146B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146B14u;
            // 0x146b18: 0x24e76f20  addiu       $a3, $a3, 0x6F20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B1Cu; }
        if (ctx->pc != 0x146B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B1Cu; }
        if (ctx->pc != 0x146B1Cu) { return; }
    }
    ctx->pc = 0x146B1Cu;
    // 0x146b1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x146b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x146b20: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x146b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x146b24: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x146b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x146b28: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146b28u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146b2c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x146b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
    // 0x146b30: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x146b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x146b34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x146b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x146b38: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146b3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146b40: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146B40u;
    SET_GPR_U32(ctx, 31, 0x146B48u);
    ctx->pc = 0x146B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146B40u;
            // 0x146b44: 0x24e772c0  addiu       $a3, $a3, 0x72C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B48u; }
        if (ctx->pc != 0x146B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B48u; }
        if (ctx->pc != 0x146B48u) { return; }
    }
    ctx->pc = 0x146B48u;
    // 0x146b48: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x146b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x146b4c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x146b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x146b50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x146b50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x146b54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x146b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b58: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x146b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x146b5c: 0x0  nop
    ctx->pc = 0x146b5cu;
    // NOP
label_146b60:
    // 0x146b60: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146b64: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146b68: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146b6c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146b70: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146B70u;
    SET_GPR_U32(ctx, 31, 0x146B78u);
    ctx->pc = 0x146B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146B70u;
            // 0x146b74: 0x24e770f0  addiu       $a3, $a3, 0x70F0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B78u; }
        if (ctx->pc != 0x146B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146B78u; }
        if (ctx->pc != 0x146B78u) { return; }
    }
    ctx->pc = 0x146B78u;
    // 0x146b78: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x146b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146b7c: 0x3c03438c  lui         $v1, 0x438C
    ctx->pc = 0x146b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17292 << 16));
    // 0x146b80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x146b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146b84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x146b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x146b88: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x146b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x146b8c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146b8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146b90: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x146B90u;
    {
        const bool branch_taken_0x146b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B90u;
            // 0x146b94: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b90) {
            ctx->pc = 0x146B60u;
            goto label_146b60;
        }
    }
    ctx->pc = 0x146B98u;
label_146b98:
    // 0x146b98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x146b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x146b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x146ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x146ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x146BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BA8u;
            // 0x146bac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146A00u: goto label_146a00;
            case 0x146A58u: goto label_146a58;
            case 0x146B60u: goto label_146b60;
            case 0x146B98u: goto label_146b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x146BB0u;
}
