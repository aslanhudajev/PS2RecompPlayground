#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotCreate_Nerai
// Address: 0x195830 - 0x1959c4
void EnemyShotCreate_Nerai_0x195830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotCreate_Nerai_0x195830");
#endif

    ctx->pc = 0x195830u;

    // 0x195830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x195834: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x195834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x195838: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x195838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19583c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19583cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x195840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x195844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195848: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
    // 0x19584c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19584cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195850: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x195850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x195854: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x195858: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x19585c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
    // 0x195860: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x195860u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x195864: 0x0  nop
    ctx->pc = 0x195864u;
    // NOP
    // 0x195868: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x195868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19586c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x19586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x195870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195874: 0x0  nop
    ctx->pc = 0x195874u;
    // NOP
    // 0x195878: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x195878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19587c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19587cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x195880: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x195880u;
    SET_GPR_U32(ctx, 31, 0x195888u);
    ctx->pc = 0x195884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195880u;
            // 0x195884: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195888u; }
        if (ctx->pc != 0x195888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195888u; }
        if (ctx->pc != 0x195888u) { return; }
    }
    ctx->pc = 0x195888u;
    // 0x195888: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x195888u;
    SET_GPR_U32(ctx, 31, 0x195890u);
    ctx->pc = 0x19588Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195888u;
            // 0x19588c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195890u; }
        if (ctx->pc != 0x195890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195890u; }
        if (ctx->pc != 0x195890u) { return; }
    }
    ctx->pc = 0x195890u;
    // 0x195890: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x195894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195898: 0xc040866  jal         func_102198
    ctx->pc = 0x195898u;
    SET_GPR_U32(ctx, 31, 0x1958A0u);
    ctx->pc = 0x19589Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195898u;
            // 0x19589c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958A0u; }
        if (ctx->pc != 0x1958A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958A0u; }
        if (ctx->pc != 0x1958A0u) { return; }
    }
    ctx->pc = 0x1958A0u;
    // 0x1958a0: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x1958a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x1958a4: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x1958a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x1958a8: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x1958a8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x1958ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1958acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1958b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1958b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1958b4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1958b4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1958b8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1958b8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1958bc: 0xc040880  jal         func_102200
    ctx->pc = 0x1958BCu;
    SET_GPR_U32(ctx, 31, 0x1958C4u);
    ctx->pc = 0x1958C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958BCu;
            // 0x1958c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958C4u; }
        if (ctx->pc != 0x1958C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958C4u; }
        if (ctx->pc != 0x1958C4u) { return; }
    }
    ctx->pc = 0x1958C4u;
    // 0x1958c4: 0x3c043fec  lui         $a0, 0x3FEC
    ctx->pc = 0x1958c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16364 << 16));
    // 0x1958c8: 0x3403cccc  ori         $v1, $zero, 0xCCCC
    ctx->pc = 0x1958c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)52428u)));
    // 0x1958cc: 0x3484cccc  ori         $a0, $a0, 0xCCCC
    ctx->pc = 0x1958ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)52428u)));
    // 0x1958d0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1958d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1958d4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1958d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1958d8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1958d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1958dc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1958dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1958e0: 0xc040850  jal         func_102140
    ctx->pc = 0x1958E0u;
    SET_GPR_U32(ctx, 31, 0x1958E8u);
    ctx->pc = 0x1958E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958E0u;
            // 0x1958e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958E8u; }
        if (ctx->pc != 0x1958E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958E8u; }
        if (ctx->pc != 0x1958E8u) { return; }
    }
    ctx->pc = 0x1958E8u;
    // 0x1958e8: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x1958E8u;
    SET_GPR_U32(ctx, 31, 0x1958F0u);
    ctx->pc = 0x1958ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958E8u;
            // 0x1958ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F0u; }
        if (ctx->pc != 0x1958F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F0u; }
        if (ctx->pc != 0x1958F0u) { return; }
    }
    ctx->pc = 0x1958F0u;
    // 0x1958f0: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1958F0u;
    SET_GPR_U32(ctx, 31, 0x1958F8u);
    ctx->pc = 0x1958F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958F0u;
            // 0x1958f4: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F8u; }
        if (ctx->pc != 0x1958F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1958F8u; }
        if (ctx->pc != 0x1958F8u) { return; }
    }
    ctx->pc = 0x1958F8u;
    // 0x1958f8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1958F8u;
    SET_GPR_U32(ctx, 31, 0x195900u);
    ctx->pc = 0x1958FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1958F8u;
            // 0x1958fc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195900u; }
        if (ctx->pc != 0x195900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195900u; }
        if (ctx->pc != 0x195900u) { return; }
    }
    ctx->pc = 0x195900u;
    // 0x195900: 0x3c033fe0  lui         $v1, 0x3FE0
    ctx->pc = 0x195900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16352 << 16));
    // 0x195904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x195904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195908: 0xc040866  jal         func_102198
    ctx->pc = 0x195908u;
    SET_GPR_U32(ctx, 31, 0x195910u);
    ctx->pc = 0x19590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195908u;
            // 0x19590c: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195910u; }
        if (ctx->pc != 0x195910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195910u; }
        if (ctx->pc != 0x195910u) { return; }
    }
    ctx->pc = 0x195910u;
    // 0x195910: 0x3c043fb9  lui         $a0, 0x3FB9
    ctx->pc = 0x195910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16313 << 16));
    // 0x195914: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x195914u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x195918: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x195918u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x19591c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x19591cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x195920: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x195920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x195924: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x195924u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x195928: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x195928u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x19592c: 0xc040880  jal         func_102200
    ctx->pc = 0x19592Cu;
    SET_GPR_U32(ctx, 31, 0x195934u);
    ctx->pc = 0x195930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19592Cu;
            // 0x195930: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195934u; }
        if (ctx->pc != 0x195934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195934u; }
        if (ctx->pc != 0x195934u) { return; }
    }
    ctx->pc = 0x195934u;
    // 0x195934: 0x3c043fec  lui         $a0, 0x3FEC
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16364 << 16));
    // 0x195938: 0x3403cccc  ori         $v1, $zero, 0xCCCC
    ctx->pc = 0x195938u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)52428u)));
    // 0x19593c: 0x3484cccc  ori         $a0, $a0, 0xCCCC
    ctx->pc = 0x19593cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)52428u)));
    // 0x195940: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x195940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x195944: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x195944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x195948: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x195948u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x19594c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x19594cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x195950: 0xc040850  jal         func_102140
    ctx->pc = 0x195950u;
    SET_GPR_U32(ctx, 31, 0x195958u);
    ctx->pc = 0x195954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195950u;
            // 0x195954: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195958u; }
        if (ctx->pc != 0x195958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195958u; }
        if (ctx->pc != 0x195958u) { return; }
    }
    ctx->pc = 0x195958u;
    // 0x195958: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x195958u;
    SET_GPR_U32(ctx, 31, 0x195960u);
    ctx->pc = 0x19595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195958u;
            // 0x19595c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195960u; }
        if (ctx->pc != 0x195960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195960u; }
        if (ctx->pc != 0x195960u) { return; }
    }
    ctx->pc = 0x195960u;
    // 0x195960: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x195960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x195964: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x195964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x195968: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x195968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19596c: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x19596Cu;
    SET_GPR_U32(ctx, 31, 0x195974u);
    ctx->pc = 0x195970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19596Cu;
            // 0x195970: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195974u; }
        if (ctx->pc != 0x195974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195974u; }
        if (ctx->pc != 0x195974u) { return; }
    }
    ctx->pc = 0x195974u;
    // 0x195974: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x195974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x195978: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x195978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19597c: 0xc04b752  jal         func_12DD48
    ctx->pc = 0x19597Cu;
    SET_GPR_U32(ctx, 31, 0x195984u);
    ctx->pc = 0x195980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19597Cu;
            // 0x195980: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD48u;
    if (runtime->hasFunction(0x12DD48u)) {
        auto targetFn = runtime->lookupFunction(0x12DD48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195984u; }
        if (ctx->pc != 0x195984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulVector_0x12dd48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195984u; }
        if (ctx->pc != 0x195984u) { return; }
    }
    ctx->pc = 0x195984u;
    // 0x195984: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x195984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x195988: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x195988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19598c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x19598cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195990: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x195990u;
    SET_GPR_U32(ctx, 31, 0x195998u);
    ctx->pc = 0x195994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x195990u;
            // 0x195994: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195998u; }
        if (ctx->pc != 0x195998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x195998u; }
        if (ctx->pc != 0x195998u) { return; }
    }
    ctx->pc = 0x195998u;
    // 0x195998: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x195998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19599c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19599cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959a0: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x1959a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1959a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1959a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959a8: 0xc065674  jal         func_1959D0
    ctx->pc = 0x1959A8u;
    SET_GPR_U32(ctx, 31, 0x1959B0u);
    ctx->pc = 0x1959ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1959A8u;
            // 0x1959ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1959D0u;
    if (runtime->hasFunction(0x1959D0u)) {
        auto targetFn = runtime->lookupFunction(0x1959D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959B0u; }
        if (ctx->pc != 0x1959B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_0x1959d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1959B0u; }
        if (ctx->pc != 0x1959B0u) { return; }
    }
    ctx->pc = 0x1959B0u;
    // 0x1959b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1959b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1959b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1959b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1959b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1959b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1959bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1959BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1959C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1959BCu;
            // 0x1959c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1959C4u;
}
