#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: stage3mapItemCreate
// Address: 0x146340 - 0x1465d8
void stage3mapItemCreate_0x146340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("stage3mapItemCreate_0x146340");
#endif

    ctx->pc = 0x146340u;

    // 0x146340: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x146344: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x146344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x146348: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x146348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14634c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14634cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146350: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146358: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14635c: 0xc0605a8  jal         func_1816A0
    ctx->pc = 0x14635Cu;
    SET_GPR_U32(ctx, 31, 0x146364u);
    ctx->pc = 0x146360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14635Cu;
            // 0x146360: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1816A0u;
    if (runtime->hasFunction(0x1816A0u)) {
        auto targetFn = runtime->lookupFunction(0x1816A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146364u; }
        if (ctx->pc != 0x146364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetMatrix_0x1816a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146364u; }
        if (ctx->pc != 0x146364u) { return; }
    }
    ctx->pc = 0x146364u;
    // 0x146364: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146368: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x146368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
    // 0x14636c: 0xac209cc4  sw          $zero, -0x633C($at)
    ctx->pc = 0x14636cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941892), GPR_U32(ctx, 0));
    // 0x146370: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x146370u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x146374: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146378: 0x27b10044  addiu       $s1, $sp, 0x44
    ctx->pc = 0x146378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14637c: 0xac209cc8  sw          $zero, -0x6338($at)
    ctx->pc = 0x14637cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941896), GPR_U32(ctx, 0));
    // 0x146380: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x146380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x146384: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146388: 0xac229cc0  sw          $v0, -0x6340($at)
    ctx->pc = 0x146388u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941888), GPR_U32(ctx, 2));
    // 0x14638c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x14638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x146390: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146394: 0xac229cb8  sw          $v0, -0x6348($at)
    ctx->pc = 0x146394u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941880), GPR_U32(ctx, 2));
    // 0x146398: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x146398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x14639c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14639cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463a0: 0xac229cb0  sw          $v0, -0x6350($at)
    ctx->pc = 0x1463a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941872), GPR_U32(ctx, 2));
    // 0x1463a4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463a8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1463a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1463ac: 0xac209cd0  sw          $zero, -0x6330($at)
    ctx->pc = 0x1463acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941904), GPR_U32(ctx, 0));
    // 0x1463b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1463b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1463b4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463b8: 0xac209cd4  sw          $zero, -0x632C($at)
    ctx->pc = 0x1463b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941908), GPR_U32(ctx, 0));
    // 0x1463bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463c0: 0xac209cd8  sw          $zero, -0x6328($at)
    ctx->pc = 0x1463c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941912), GPR_U32(ctx, 0));
    // 0x1463c4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463c8: 0xac209c08  sw          $zero, -0x63F8($at)
    ctx->pc = 0x1463c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941704), GPR_U32(ctx, 0));
    // 0x1463cc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463d0: 0xac209c10  sw          $zero, -0x63F0($at)
    ctx->pc = 0x1463d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941712), GPR_U32(ctx, 0));
    // 0x1463d4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463d8: 0xac209bf0  sw          $zero, -0x6410($at)
    ctx->pc = 0x1463d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941680), GPR_U32(ctx, 0));
    // 0x1463dc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463e0: 0xac209be8  sw          $zero, -0x6418($at)
    ctx->pc = 0x1463e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941672), GPR_U32(ctx, 0));
    // 0x1463e4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463e8: 0xac209bf8  sw          $zero, -0x6408($at)
    ctx->pc = 0x1463e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941688), GPR_U32(ctx, 0));
    // 0x1463ec: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463f0: 0xac209c00  sw          $zero, -0x6400($at)
    ctx->pc = 0x1463f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941696), GPR_U32(ctx, 0));
    // 0x1463f4: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1463f8: 0xc4259cc0  lwc1        $f5, -0x6340($at)
    ctx->pc = 0x1463f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1463fc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1463fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146400: 0xc4249cc4  lwc1        $f4, -0x633C($at)
    ctx->pc = 0x146400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x146404: 0xe7a50050  swc1        $f5, 0x50($sp)
    ctx->pc = 0x146404u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x146408: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14640c: 0xc4239cc8  lwc1        $f3, -0x6338($at)
    ctx->pc = 0x14640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x146410: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x146410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x146414: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146418: 0xc4229cd0  lwc1        $f2, -0x6330($at)
    ctx->pc = 0x146418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14641c: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x14641cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x146420: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146424: 0xc4209cd4  lwc1        $f0, -0x632C($at)
    ctx->pc = 0x146424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146428: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x146428u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14642c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x14642cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x146430: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146434: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x146434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x146438: 0xc4209cd8  lwc1        $f0, -0x6328($at)
    ctx->pc = 0x146438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14643c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x14643Cu;
    SET_GPR_U32(ctx, 31, 0x146444u);
    ctx->pc = 0x146440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14643Cu;
            // 0x146440: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146444u; }
        if (ctx->pc != 0x146444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146444u; }
        if (ctx->pc != 0x146444u) { return; }
    }
    ctx->pc = 0x146444u;
    // 0x146444: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x146448: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x14644c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x14644cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x146450: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146450u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146454: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x146454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x146458: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14645c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146460: 0x1010  mfhi        $v0
    ctx->pc = 0x146460u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146464: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x146464u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146468: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x146468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x14646c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146470: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146470u;
    SET_GPR_U32(ctx, 31, 0x146478u);
    ctx->pc = 0x146474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146470u;
            // 0x146474: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146478u; }
        if (ctx->pc != 0x146478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146478u; }
        if (ctx->pc != 0x146478u) { return; }
    }
    ctx->pc = 0x146478u;
    // 0x146478: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x14647c: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x14647cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146480: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x146484: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146488: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x146488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14648c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14648cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146494: 0xc0520a0  jal         func_148280
    ctx->pc = 0x146494u;
    SET_GPR_U32(ctx, 31, 0x14649Cu);
    ctx->pc = 0x146498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146494u;
            // 0x146498: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14649Cu; }
        if (ctx->pc != 0x14649Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14649Cu; }
        if (ctx->pc != 0x14649Cu) { return; }
    }
    ctx->pc = 0x14649Cu;
    // 0x14649c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x14649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1464a0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1464a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1464a4: 0xc4229cd0  lwc1        $f2, -0x6330($at)
    ctx->pc = 0x1464a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1464a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1464a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1464ac: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1464acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1464b0: 0xc4219cd4  lwc1        $f1, -0x632C($at)
    ctx->pc = 0x1464b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1464b4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x1464b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1464b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1464b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1464bc: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x1464c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1464c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1464c4: 0xc4209cd8  lwc1        $f0, -0x6328($at)
    ctx->pc = 0x1464c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1464C8u;
    SET_GPR_U32(ctx, 31, 0x1464D0u);
    ctx->pc = 0x1464CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1464C8u;
            // 0x1464cc: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464D0u; }
        if (ctx->pc != 0x1464D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1464D0u; }
        if (ctx->pc != 0x1464D0u) { return; }
    }
    ctx->pc = 0x1464D0u;
    // 0x1464d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1464d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1464d4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1464d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1464d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1464d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1464dc: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1464dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1464e0: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x1464e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x1464e4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1464e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1464e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1464e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1464ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1464ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1464f0: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x1464f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1464f4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1464f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1464f8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1464f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1464fc: 0xc0520cc  jal         func_148330
    ctx->pc = 0x1464FCu;
    SET_GPR_U32(ctx, 31, 0x146504u);
    ctx->pc = 0x146500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1464FCu;
            // 0x146500: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146504u; }
        if (ctx->pc != 0x146504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146504u; }
        if (ctx->pc != 0x146504u) { return; }
    }
    ctx->pc = 0x146504u;
    // 0x146504: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x146504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x146508: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146508u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x14650c: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x14650cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x146510: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x146510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146514: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x146514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x146518: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14651c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14651cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146520: 0xc0520a0  jal         func_148280
    ctx->pc = 0x146520u;
    SET_GPR_U32(ctx, 31, 0x146528u);
    ctx->pc = 0x146524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146520u;
            // 0x146524: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146528u; }
        if (ctx->pc != 0x146528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146528u; }
        if (ctx->pc != 0x146528u) { return; }
    }
    ctx->pc = 0x146528u;
    // 0x146528: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x14652c: 0x3c024496  lui         $v0, 0x4496
    ctx->pc = 0x14652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17558 << 16));
    // 0x146530: 0xc4229cd0  lwc1        $f2, -0x6330($at)
    ctx->pc = 0x146530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146534: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x146534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x146538: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x146538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x14653c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14653cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x146540: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146544: 0xc4219cd4  lwc1        $f1, -0x632C($at)
    ctx->pc = 0x146544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146548: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x146548u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x14654c: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x14654cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x146550: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x146550u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x146554: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x146554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x146558: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x146558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14655c: 0xc4209cd8  lwc1        $f0, -0x6328($at)
    ctx->pc = 0x14655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146560: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x146560u;
    SET_GPR_U32(ctx, 31, 0x146568u);
    ctx->pc = 0x146564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146560u;
            // 0x146564: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146568u; }
        if (ctx->pc != 0x146568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146568u; }
        if (ctx->pc != 0x146568u) { return; }
    }
    ctx->pc = 0x146568u;
    // 0x146568: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x146568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14656c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x14656cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x146570: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x146570u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x146574: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x146574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x146578: 0x24639520  addiu       $v1, $v1, -0x6AE0
    ctx->pc = 0x146578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939936));
    // 0x14657c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14657cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x146580: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x146584: 0x1010  mfhi        $v0
    ctx->pc = 0x146584u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x146588: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x146588u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14658c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x14658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x146590: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146594: 0xc0520cc  jal         func_148330
    ctx->pc = 0x146594u;
    SET_GPR_U32(ctx, 31, 0x14659Cu);
    ctx->pc = 0x146598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146594u;
            // 0x146598: 0x24e76830  addiu       $a3, $a3, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148330u;
    if (runtime->hasFunction(0x148330u)) {
        auto targetFn = runtime->lookupFunction(0x148330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14659Cu; }
        if (ctx->pc != 0x14659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_0x148330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14659Cu; }
        if (ctx->pc != 0x14659Cu) { return; }
    }
    ctx->pc = 0x14659Cu;
    // 0x14659c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x14659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1465a0: 0x3c070014  lui         $a3, 0x14
    ctx->pc = 0x1465a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20 << 16));
    // 0x1465a4: 0x24429530  addiu       $v0, $v0, -0x6AD0
    ctx->pc = 0x1465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939952));
    // 0x1465a8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1465a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1465ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1465acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1465b0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1465b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1465b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1465b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1465b8: 0xc0520a0  jal         func_148280
    ctx->pc = 0x1465B8u;
    SET_GPR_U32(ctx, 31, 0x1465C0u);
    ctx->pc = 0x1465BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1465B8u;
            // 0x1465bc: 0x24e76790  addiu       $a3, $a3, 0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148280u;
    if (runtime->hasFunction(0x148280u)) {
        auto targetFn = runtime->lookupFunction(0x148280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465C0u; }
        if (ctx->pc != 0x1465C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemCreate_Alpha_0x148280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1465C0u; }
        if (ctx->pc != 0x1465C0u) { return; }
    }
    ctx->pc = 0x1465C0u;
    // 0x1465c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1465c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1465c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1465c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1465c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1465c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1465cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1465ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1465d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1465D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1465D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1465D0u;
            // 0x1465d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1465D8u;
}
