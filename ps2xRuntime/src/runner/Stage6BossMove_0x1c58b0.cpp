#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage6BossMove
// Address: 0x1c58b0 - 0x1c7680
void Stage6BossMove_0x1c58b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage6BossMove_0x1c58b0");
#endif

    ctx->pc = 0x1c58b0u;

    // 0x1c58b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c58b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c58b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1c58b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1c58b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1c58b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1c58bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c58bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1c58c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c58c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c58c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c58c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c58c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c58cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c58ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c58d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c58d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c58d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c58d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c58d8: 0x8c440184  lw          $a0, 0x184($v0)
    ctx->pc = 0x1c58d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1c58dc: 0xc0471aa  jal         func_11C6A8
    ctx->pc = 0x1C58DCu;
    SET_GPR_U32(ctx, 31, 0x1C58E4u);
    ctx->pc = 0x1C58E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58DCu;
            // 0x1c58e0: 0xdc25aa78  ld          $a1, -0x5588($at) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6A8u;
    if (runtime->hasFunction(0x11C6A8u)) {
        auto targetFn = runtime->lookupFunction(0x11C6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C58E4u; }
        if (ctx->pc != 0x1C58E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetHead_0x11c6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C58E4u; }
        if (ctx->pc != 0x1C58E4u) { return; }
    }
    ctx->pc = 0x1C58E4u;
    // 0x1c58e4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c58e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c58e8: 0xac221c88  sw          $v0, 0x1C88($at)
    ctx->pc = 0x1c58e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7304), GPR_U32(ctx, 2));
    // 0x1c58ec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c58ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c58f0: 0x8c241c88  lw          $a0, 0x1C88($at)
    ctx->pc = 0x1c58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7304)));
    // 0x1c58f4: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C58F4u;
    SET_GPR_U32(ctx, 31, 0x1C58FCu);
    ctx->pc = 0x1C58F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C58F4u;
            // 0x1c58f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C58FCu; }
        if (ctx->pc != 0x1C58FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C58FCu; }
        if (ctx->pc != 0x1C58FCu) { return; }
    }
    ctx->pc = 0x1C58FCu;
    // 0x1c58fc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c58fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5900: 0xac221c90  sw          $v0, 0x1C90($at)
    ctx->pc = 0x1c5900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7312), GPR_U32(ctx, 2));
    // 0x1c5904: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5908: 0x8c241c88  lw          $a0, 0x1C88($at)
    ctx->pc = 0x1c5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7304)));
    // 0x1c590c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C590Cu;
    SET_GPR_U32(ctx, 31, 0x1C5914u);
    ctx->pc = 0x1C5910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C590Cu;
            // 0x1c5910: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5914u; }
        if (ctx->pc != 0x1C5914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5914u; }
        if (ctx->pc != 0x1C5914u) { return; }
    }
    ctx->pc = 0x1C5914u;
    // 0x1c5914: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5918: 0xac221c98  sw          $v0, 0x1C98($at)
    ctx->pc = 0x1c5918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7320), GPR_U32(ctx, 2));
    // 0x1c591c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c591cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5920: 0x8c241c88  lw          $a0, 0x1C88($at)
    ctx->pc = 0x1c5920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7304)));
    // 0x1c5924: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C5924u;
    SET_GPR_U32(ctx, 31, 0x1C592Cu);
    ctx->pc = 0x1C5928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5924u;
            // 0x1c5928: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C592Cu; }
        if (ctx->pc != 0x1C592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C592Cu; }
        if (ctx->pc != 0x1C592Cu) { return; }
    }
    ctx->pc = 0x1C592Cu;
    // 0x1c592c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c592cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5930: 0xac221ca0  sw          $v0, 0x1CA0($at)
    ctx->pc = 0x1c5930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7328), GPR_U32(ctx, 2));
    // 0x1c5934: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5938: 0x8c241c88  lw          $a0, 0x1C88($at)
    ctx->pc = 0x1c5938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7304)));
    // 0x1c593c: 0xc0471b4  jal         func_11C6D0
    ctx->pc = 0x1C593Cu;
    SET_GPR_U32(ctx, 31, 0x1C5944u);
    ctx->pc = 0x1C5940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C593Cu;
            // 0x1c5940: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C6D0u;
    if (runtime->hasFunction(0x11C6D0u)) {
        auto targetFn = runtime->lookupFunction(0x11C6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5944u; }
        if (ctx->pc != 0x1C5944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugHrchyGetData_0x11c6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5944u; }
        if (ctx->pc != 0x1C5944u) { return; }
    }
    ctx->pc = 0x1C5944u;
    // 0x1c5944: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5948: 0xac221ca8  sw          $v0, 0x1CA8($at)
    ctx->pc = 0x1c5948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7336), GPR_U32(ctx, 2));
    // 0x1c594c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c594cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1c5950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c5950u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5958: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c5958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c595c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5960: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c5960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5964: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c5964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c5968: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x1c5968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x1c596c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5970: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1c5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5974: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5978: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c5978u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c597c: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1c597cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c5980: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5984: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1c5984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5988: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c5988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c598c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c598cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c5990: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1c5990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1c5994: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5998: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1c5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c599c: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1c599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c59a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1c59a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1c59a4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1c59a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1c59a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c59a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c59ac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1c59acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c59b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c59b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c59b4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C59B4u;
    {
        const bool branch_taken_0x1c59b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C59B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59B4u;
            // 0x1c59b8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59b4) {
            ctx->pc = 0x1C59D8u;
            goto label_1c59d8;
        }
    }
    ctx->pc = 0x1C59BCu;
    // 0x1c59bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c59c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c59c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c59c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59c8: 0x0  nop
    ctx->pc = 0x1c59c8u;
    // NOP
    // 0x1c59cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c59ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c59d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1c59d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c59d4: 0x0  nop
    ctx->pc = 0x1c59d4u;
    // NOP
label_1c59d8:
    // 0x1c59d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c59dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c59dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c59e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c59e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c59e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c59e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c59e8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1c59e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c59ec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c59ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c59f0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C59F0u;
    {
        const bool branch_taken_0x1c59f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C59F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C59F0u;
            // 0x1c59f4: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c59f0) {
            ctx->pc = 0x1C5A10u;
            goto label_1c5a10;
        }
    }
    ctx->pc = 0x1C59F8u;
    // 0x1c59f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c59fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c59fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5a00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a04: 0x0  nop
    ctx->pc = 0x1c5a04u;
    // NOP
    // 0x1c5a08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a0c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c5a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c5a10:
    // 0x1c5a10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c5a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5a14: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1c5a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1c5a18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c5a18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a20: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c5a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5a28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5A28u;
    {
        const bool branch_taken_0x1c5a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A28u;
            // 0x1c5a2c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a28) {
            ctx->pc = 0x1C5A48u;
            goto label_1c5a48;
        }
    }
    ctx->pc = 0x1C5A30u;
    // 0x1c5a30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c5a34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c5a34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a3c: 0x0  nop
    ctx->pc = 0x1c5a3cu;
    // NOP
    // 0x1c5a40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c5a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c5a48:
    // 0x1c5a48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c5a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5a4c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1c5a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1c5a50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c5a50u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a58: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1c5a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5a5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5a5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5a60: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5A60u;
    {
        const bool branch_taken_0x1c5a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A60u;
            // 0x1c5a64: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5a60) {
            ctx->pc = 0x1C5A80u;
            goto label_1c5a80;
        }
    }
    ctx->pc = 0x1C5A68u;
    // 0x1c5a68: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c5a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c5a6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1c5a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5a74: 0x0  nop
    ctx->pc = 0x1c5a74u;
    // NOP
    // 0x1c5a78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5a7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1c5a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1c5a80:
    // 0x1c5a80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5a84: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c5a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c5a88: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c5a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5a8c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c5a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5a90: 0xc071e9c  jal         func_1C7A70
    ctx->pc = 0x1C5A90u;
    SET_GPR_U32(ctx, 31, 0x1C5A98u);
    ctx->pc = 0x1C5A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5A90u;
            // 0x1c5a94: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A70u;
    if (runtime->hasFunction(0x1C7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A98u; }
        if (ctx->pc != 0x1C5A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5A98u; }
        if (ctx->pc != 0x1C5A98u) { return; }
    }
    ctx->pc = 0x1C5A98u;
    // 0x1c5a98: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5a9c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5aa4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1c5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1c5aa8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5aac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1c5aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1c5ab0: 0x8c221c90  lw          $v0, 0x1C90($at)
    ctx->pc = 0x1c5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7312)));
    // 0x1c5ab4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5ab8: 0xc4201cd0  lwc1        $f0, 0x1CD0($at)
    ctx->pc = 0x1c5ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5abc: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c5abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5ac0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5ac4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5ac4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5ac8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1c5ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c5acc: 0x8c221c98  lw          $v0, 0x1C98($at)
    ctx->pc = 0x1c5accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7320)));
    // 0x1c5ad0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5ad4: 0xc4201cd0  lwc1        $f0, 0x1CD0($at)
    ctx->pc = 0x1c5ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5ad8: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c5ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5adc: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5ae4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1c5ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c5ae8: 0x8c221ca0  lw          $v0, 0x1CA0($at)
    ctx->pc = 0x1c5ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7328)));
    // 0x1c5aec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5af0: 0xc4201cd0  lwc1        $f0, 0x1CD0($at)
    ctx->pc = 0x1c5af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5af4: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c5af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5af8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5afc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5afcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5b00: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1c5b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c5b04: 0x8c221ca8  lw          $v0, 0x1CA8($at)
    ctx->pc = 0x1c5b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7336)));
    // 0x1c5b08: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5b0c: 0xc4201cd0  lwc1        $f0, 0x1CD0($at)
    ctx->pc = 0x1c5b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5b10: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1c5b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5b14: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5b18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5b1c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1c5b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1c5b20: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5b24: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c5b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5b28: 0x2443ff88  addiu       $v1, $v0, -0x78
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1c5b2c: 0xac231cf0  sw          $v1, 0x1CF0($at)
    ctx->pc = 0x1c5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7408), GPR_U32(ctx, 3));
    // 0x1c5b30: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1c5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1c5b34: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5b38: 0xac221ce0  sw          $v0, 0x1CE0($at)
    ctx->pc = 0x1c5b38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7392), GPR_U32(ctx, 2));
    // 0x1c5b3c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5b40: 0xac251ce8  sw          $a1, 0x1CE8($at)
    ctx->pc = 0x1c5b40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7400), GPR_U32(ctx, 5));
    // 0x1c5b44: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5b48: 0xc05b994  jal         func_16E650
    ctx->pc = 0x1C5B48u;
    SET_GPR_U32(ctx, 31, 0x1C5B50u);
    ctx->pc = 0x1C5B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B48u;
            // 0x1c5b4c: 0xac251cd8  sw          $a1, 0x1CD8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7384), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E650u;
    if (runtime->hasFunction(0x16E650u)) {
        auto targetFn = runtime->lookupFunction(0x16E650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B50u; }
        if (ctx->pc != 0x1C5B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_DeadEnd_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5B50u; }
        if (ctx->pc != 0x1C5B50u) { return; }
    }
    ctx->pc = 0x1C5B50u;
    // 0x1c5b50: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1c5b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c5b54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c5b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5b58: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1c5b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c5b5c: 0x10c2058e  beq         $a2, $v0, . + 4 + (0x58E << 2)
    ctx->pc = 0x1C5B5Cu;
    {
        const bool branch_taken_0x1c5b5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5b5c) {
            ctx->pc = 0x1C7198u;
            goto label_1c7198;
        }
    }
    ctx->pc = 0x1C5B64u;
    // 0x1c5b64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c5b68: 0x10c2056f  beq         $a2, $v0, . + 4 + (0x56F << 2)
    ctx->pc = 0x1C5B68u;
    {
        const bool branch_taken_0x1c5b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B68u;
            // 0x1c5b6c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b68) {
            ctx->pc = 0x1C7128u;
            goto label_1c7128;
        }
    }
    ctx->pc = 0x1C5B70u;
    // 0x1c5b70: 0x10c2051b  beq         $a2, $v0, . + 4 + (0x51B << 2)
    ctx->pc = 0x1C5B70u;
    {
        const bool branch_taken_0x1c5b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5b70) {
            ctx->pc = 0x1C6FE0u;
            goto label_1c6fe0;
        }
    }
    ctx->pc = 0x1C5B78u;
    // 0x1c5b78: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c5b7c: 0x10c203cc  beq         $a2, $v0, . + 4 + (0x3CC << 2)
    ctx->pc = 0x1C5B7Cu;
    {
        const bool branch_taken_0x1c5b7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B7Cu;
            // 0x1c5b80: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b7c) {
            ctx->pc = 0x1C6AB0u;
            goto label_1c6ab0;
        }
    }
    ctx->pc = 0x1C5B84u;
    // 0x1c5b84: 0x10c302f8  beq         $a2, $v1, . + 4 + (0x2F8 << 2)
    ctx->pc = 0x1C5B84u;
    {
        const bool branch_taken_0x1c5b84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B84u;
            // 0x1c5b88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b84) {
            ctx->pc = 0x1C6768u;
            goto label_1c6768;
        }
    }
    ctx->pc = 0x1C5B8Cu;
    // 0x1c5b8c: 0x10c202e4  beq         $a2, $v0, . + 4 + (0x2E4 << 2)
    ctx->pc = 0x1C5B8Cu;
    {
        const bool branch_taken_0x1c5b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5b8c) {
            ctx->pc = 0x1C6720u;
            goto label_1c6720;
        }
    }
    ctx->pc = 0x1C5B94u;
    // 0x1c5b94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5b98: 0x10c30217  beq         $a2, $v1, . + 4 + (0x217 << 2)
    ctx->pc = 0x1C5B98u;
    {
        const bool branch_taken_0x1c5b98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C5B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5B98u;
            // 0x1c5b9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5b98) {
            ctx->pc = 0x1C63F8u;
            goto label_1c63f8;
        }
    }
    ctx->pc = 0x1C5BA0u;
    // 0x1c5ba0: 0x10c20181  beq         $a2, $v0, . + 4 + (0x181 << 2)
    ctx->pc = 0x1C5BA0u;
    {
        const bool branch_taken_0x1c5ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5ba0) {
            ctx->pc = 0x1C61A8u;
            goto label_1c61a8;
        }
    }
    ctx->pc = 0x1C5BA8u;
    // 0x1c5ba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5bac: 0x10c2002a  beq         $a2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C5BACu;
    {
        const bool branch_taken_0x1c5bac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5bac) {
            ctx->pc = 0x1C5C58u;
            goto label_1c5c58;
        }
    }
    ctx->pc = 0x1C5BB4u;
    // 0x1c5bb4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5BB4u;
    {
        const bool branch_taken_0x1c5bb4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bb4) {
            ctx->pc = 0x1C5BC8u;
            goto label_1c5bc8;
        }
    }
    ctx->pc = 0x1C5BBCu;
    // 0x1c5bbc: 0x10000586  b           . + 4 + (0x586 << 2)
    ctx->pc = 0x1C5BBCu;
    {
        const bool branch_taken_0x1c5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5bbc) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C5BC4u;
    // 0x1c5bc4: 0x0  nop
    ctx->pc = 0x1c5bc4u;
    // NOP
label_1c5bc8:
    // 0x1c5bc8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c5bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c5bcc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c5bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5bd0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5bd0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5bd8: 0x0  nop
    ctx->pc = 0x1c5bd8u;
    // NOP
    // 0x1c5bdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5bdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5be0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5BE0u;
    {
        const bool branch_taken_0x1c5be0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BE0u;
            // 0x1c5be4: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5be0) {
            ctx->pc = 0x1C5C00u;
            goto label_1c5c00;
        }
    }
    ctx->pc = 0x1C5BE8u;
    // 0x1c5be8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c5be8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1c5bec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5bf0: 0x0  nop
    ctx->pc = 0x1c5bf0u;
    // NOP
    // 0x1c5bf4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5bf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5BF8u;
    {
        const bool branch_taken_0x1c5bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5BF8u;
            // 0x1c5bfc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5bf8) {
            ctx->pc = 0x1C5C48u;
            goto label_1c5c48;
        }
    }
    ctx->pc = 0x1C5C00u;
label_1c5c00:
    // 0x1c5c00: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C5C00u;
    SET_GPR_U32(ctx, 31, 0x1C5C08u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C08u; }
        if (ctx->pc != 0x1C5C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C08u; }
        if (ctx->pc != 0x1C5C08u) { return; }
    }
    ctx->pc = 0x1C5C08u;
    // 0x1c5c08: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5c0c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c5c0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c5c10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c14: 0x0  nop
    ctx->pc = 0x1c5c14u;
    // NOP
    // 0x1c5c18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5c18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5c1c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1C5C1Cu;
    SET_GPR_U32(ctx, 31, 0x1C5C24u);
    ctx->pc = 0x1C5C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C1Cu;
            // 0x1c5c20: 0xe60000d0  swc1        $f0, 0xD0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C24u; }
        if (ctx->pc != 0x1C5C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C24u; }
        if (ctx->pc != 0x1C5C24u) { return; }
    }
    ctx->pc = 0x1C5C24u;
    // 0x1c5c24: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c5c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5c2c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c5c2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1c5c30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c5c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5c34: 0x0  nop
    ctx->pc = 0x1c5c34u;
    // NOP
    // 0x1c5c38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c5c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c5c3c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c5c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c5c40: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c5c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c5c44: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c5c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1c5c48:
    // 0x1c5c48: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1c5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1c5c4c: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5c50: 0x10000561  b           . + 4 + (0x561 << 2)
    ctx->pc = 0x1C5C50u;
    {
        const bool branch_taken_0x1c5c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C50u;
            // 0x1c5c54: 0xac201cd0  sw          $zero, 0x1CD0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 7376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c50) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C5C58u;
label_1c5c58:
    // 0x1c5c58: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1c5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1c5c5c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1c5c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5c60: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5c60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5c64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5c68: 0x0  nop
    ctx->pc = 0x1c5c68u;
    // NOP
    // 0x1c5c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5c70: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5C70u;
    {
        const bool branch_taken_0x1c5c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C70u;
            // 0x1c5c74: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5c70) {
            ctx->pc = 0x1C5CC0u;
            goto label_1c5cc0;
        }
    }
    ctx->pc = 0x1C5C78u;
    // 0x1c5c78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5c78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5c7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5c80: 0x0  nop
    ctx->pc = 0x1c5c80u;
    // NOP
    // 0x1c5c84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5c84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5c88: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1C5C88u;
    {
        const bool branch_taken_0x1c5c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5c88) {
            ctx->pc = 0x1C5CC0u;
            goto label_1c5cc0;
        }
    }
    ctx->pc = 0x1C5C90u;
    // 0x1c5c90: 0xc071da0  jal         func_1C7680
    ctx->pc = 0x1C5C90u;
    SET_GPR_U32(ctx, 31, 0x1C5C98u);
    ctx->pc = 0x1C5C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5C90u;
            // 0x1c5c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7680u;
    if (runtime->hasFunction(0x1C7680u)) {
        auto targetFn = runtime->lookupFunction(0x1C7680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C98u; }
        if (ctx->pc != 0x1C5C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c7680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5C98u; }
        if (ctx->pc != 0x1C5C98u) { return; }
    }
    ctx->pc = 0x1C5C98u;
    // 0x1c5c98: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5c9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5ca0: 0xc065590  jal         func_195640
    ctx->pc = 0x1C5CA0u;
    SET_GPR_U32(ctx, 31, 0x1C5CA8u);
    ctx->pc = 0x1C5CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CA0u;
            // 0x1c5ca4: 0x2444ffd3  addiu       $a0, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CA8u; }
        if (ctx->pc != 0x1C5CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CA8u; }
        if (ctx->pc != 0x1C5CA8u) { return; }
    }
    ctx->pc = 0x1C5CA8u;
    // 0x1c5ca8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5cac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c5cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5cb0: 0xc065590  jal         func_195640
    ctx->pc = 0x1C5CB0u;
    SET_GPR_U32(ctx, 31, 0x1C5CB8u);
    ctx->pc = 0x1C5CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CB0u;
            // 0x1c5cb4: 0x2444002d  addiu       $a0, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CB8u; }
        if (ctx->pc != 0x1C5CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5CB8u; }
        if (ctx->pc != 0x1C5CB8u) { return; }
    }
    ctx->pc = 0x1C5CB8u;
    // 0x1c5cb8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C5CB8u;
    {
        const bool branch_taken_0x1c5cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5cb8) {
            ctx->pc = 0x1C5D50u;
            goto label_1c5d50;
        }
    }
    ctx->pc = 0x1C5CC0u;
label_1c5cc0:
    // 0x1c5cc0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1c5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1c5cc4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c5cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5cc8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5cc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5cd0: 0x0  nop
    ctx->pc = 0x1c5cd0u;
    // NOP
    // 0x1c5cd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c5cd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5cd8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1C5CD8u;
    {
        const bool branch_taken_0x1c5cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C5CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CD8u;
            // 0x1c5cdc: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5cd8) {
            ctx->pc = 0x1C5D28u;
            goto label_1c5d28;
        }
    }
    ctx->pc = 0x1C5CE0u;
    // 0x1c5ce0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1c5ce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1c5ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5ce8: 0x0  nop
    ctx->pc = 0x1c5ce8u;
    // NOP
    // 0x1c5cec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c5cecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c5cf0: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1C5CF0u;
    {
        const bool branch_taken_0x1c5cf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c5cf0) {
            ctx->pc = 0x1C5D28u;
            goto label_1c5d28;
        }
    }
    ctx->pc = 0x1C5CF8u;
    // 0x1c5cf8: 0xc071da0  jal         func_1C7680
    ctx->pc = 0x1C5CF8u;
    SET_GPR_U32(ctx, 31, 0x1C5D00u);
    ctx->pc = 0x1C5CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CF8u;
            // 0x1c5cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7680u;
    if (runtime->hasFunction(0x1C7680u)) {
        auto targetFn = runtime->lookupFunction(0x1C7680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D00u; }
        if (ctx->pc != 0x1C5D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c7680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D00u; }
        if (ctx->pc != 0x1C5D00u) { return; }
    }
    ctx->pc = 0x1C5D00u;
    // 0x1c5d00: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5d04: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c5d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5d08: 0xc065590  jal         func_195640
    ctx->pc = 0x1C5D08u;
    SET_GPR_U32(ctx, 31, 0x1C5D10u);
    ctx->pc = 0x1C5D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D08u;
            // 0x1c5d0c: 0x2444ffd3  addiu       $a0, $v0, -0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967251));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D10u; }
        if (ctx->pc != 0x1C5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D10u; }
        if (ctx->pc != 0x1C5D10u) { return; }
    }
    ctx->pc = 0x1C5D10u;
    // 0x1c5d10: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5d14: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c5d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5d18: 0xc065590  jal         func_195640
    ctx->pc = 0x1C5D18u;
    SET_GPR_U32(ctx, 31, 0x1C5D20u);
    ctx->pc = 0x1C5D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D18u;
            // 0x1c5d1c: 0x2444002d  addiu       $a0, $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 45));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D20u; }
        if (ctx->pc != 0x1C5D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D20u; }
        if (ctx->pc != 0x1C5D20u) { return; }
    }
    ctx->pc = 0x1C5D20u;
    // 0x1c5d20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D20u;
    {
        const bool branch_taken_0x1c5d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5d20) {
            ctx->pc = 0x1C5D50u;
            goto label_1c5d50;
        }
    }
    ctx->pc = 0x1C5D28u;
label_1c5d28:
    // 0x1c5d28: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1c5d2c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5d30: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1c5d30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1c5d34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5d38: 0x0  nop
    ctx->pc = 0x1c5d38u;
    // NOP
    // 0x1c5d3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5d40: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c5d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c5d44: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5d48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c5d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c5d4c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c5d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1c5d50:
    // 0x1c5d50: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5d54: 0xc4341cd0  lwc1        $f20, 0x1CD0($at)
    ctx->pc = 0x1c5d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c5d58: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C5D58u;
    SET_GPR_U32(ctx, 31, 0x1C5D60u);
    ctx->pc = 0x1C5D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D58u;
            // 0x1c5d5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D60u; }
        if (ctx->pc != 0x1C5D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D60u; }
        if (ctx->pc != 0x1C5D60u) { return; }
    }
    ctx->pc = 0x1C5D60u;
    // 0x1c5d60: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1c5d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x1c5d64: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1c5d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x1c5d68: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1c5d68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
    // 0x1c5d6c: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1c5d6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
    // 0x1c5d70: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c5d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c5d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5d78: 0xc040084  jal         func_100210
    ctx->pc = 0x1C5D78u;
    SET_GPR_U32(ctx, 31, 0x1C5D80u);
    ctx->pc = 0x1C5D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D78u;
            // 0x1c5d7c: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D80u; }
        if (ctx->pc != 0x1C5D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5D80u; }
        if (ctx->pc != 0x1C5D80u) { return; }
    }
    ctx->pc = 0x1C5D80u;
    // 0x1c5d80: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5D80u;
    {
        const bool branch_taken_0x1c5d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5D80u;
            // 0x1c5d84: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5d80) {
            ctx->pc = 0x1C5DB0u;
            goto label_1c5db0;
        }
    }
    ctx->pc = 0x1C5D88u;
    // 0x1c5d88: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1c5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1c5d8c: 0xc4211cd0  lwc1        $f1, 0x1CD0($at)
    ctx->pc = 0x1c5d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5d90: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c5d90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c5d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5d98: 0x0  nop
    ctx->pc = 0x1c5d98u;
    // NOP
    // 0x1c5d9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c5d9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c5da0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5da4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C5DA4u;
    {
        const bool branch_taken_0x1c5da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DA4u;
            // 0x1c5da8: 0xe4201cd0  swc1        $f0, 0x1CD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 7376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5da4) {
            ctx->pc = 0x1C5E00u;
            goto label_1c5e00;
        }
    }
    ctx->pc = 0x1C5DACu;
    // 0x1c5dac: 0x0  nop
    ctx->pc = 0x1c5dacu;
    // NOP
label_1c5db0:
    // 0x1c5db0: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C5DB0u;
    SET_GPR_U32(ctx, 31, 0x1C5DB8u);
    ctx->pc = 0x1C5DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DB0u;
            // 0x1c5db4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DB8u; }
        if (ctx->pc != 0x1C5DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DB8u; }
        if (ctx->pc != 0x1C5DB8u) { return; }
    }
    ctx->pc = 0x1C5DB8u;
    // 0x1c5db8: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1c5db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
    // 0x1c5dbc: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1c5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
    // 0x1c5dc0: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1c5dc0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
    // 0x1c5dc4: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1c5dc4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
    // 0x1c5dc8: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c5dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c5dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c5dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5dd0: 0xc040098  jal         func_100260
    ctx->pc = 0x1C5DD0u;
    SET_GPR_U32(ctx, 31, 0x1C5DD8u);
    ctx->pc = 0x1C5DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DD0u;
            // 0x1c5dd4: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DD8u; }
        if (ctx->pc != 0x1C5DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5DD8u; }
        if (ctx->pc != 0x1C5DD8u) { return; }
    }
    ctx->pc = 0x1C5DD8u;
    // 0x1c5dd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C5DD8u;
    {
        const bool branch_taken_0x1c5dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5DD8u;
            // 0x1c5ddc: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5dd8) {
            ctx->pc = 0x1C5E00u;
            goto label_1c5e00;
        }
    }
    ctx->pc = 0x1C5DE0u;
    // 0x1c5de0: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1c5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1c5de4: 0xc4211cd0  lwc1        $f1, 0x1CD0($at)
    ctx->pc = 0x1c5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c5de8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c5de8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c5dec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c5decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c5df0: 0x0  nop
    ctx->pc = 0x1c5df0u;
    // NOP
    // 0x1c5df4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c5df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c5df8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c5df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c5dfc: 0xe4201cd0  swc1        $f0, 0x1CD0($at)
    ctx->pc = 0x1c5dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 7376), bits); }
label_1c5e00:
    // 0x1c5e00: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C5E00u;
    SET_GPR_U32(ctx, 31, 0x1C5E08u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E08u; }
        if (ctx->pc != 0x1C5E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E08u; }
        if (ctx->pc != 0x1C5E08u) { return; }
    }
    ctx->pc = 0x1C5E08u;
    // 0x1c5e08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5e0c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5E0Cu;
    {
        const bool branch_taken_0x1c5e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5e0c) {
            ctx->pc = 0x1C5E20u;
            goto label_1c5e20;
        }
    }
    ctx->pc = 0x1C5E14u;
    // 0x1c5e14: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C5E14u;
    {
        const bool branch_taken_0x1c5e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E14u;
            // 0x1c5e18: 0x2411003c  addiu       $s1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e14) {
            ctx->pc = 0x1C5E58u;
            goto label_1c5e58;
        }
    }
    ctx->pc = 0x1C5E1Cu;
    // 0x1c5e1c: 0x0  nop
    ctx->pc = 0x1c5e1cu;
    // NOP
label_1c5e20:
    // 0x1c5e20: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C5E20u;
    SET_GPR_U32(ctx, 31, 0x1C5E28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E28u; }
        if (ctx->pc != 0x1C5E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E28u; }
        if (ctx->pc != 0x1C5E28u) { return; }
    }
    ctx->pc = 0x1C5E28u;
    // 0x1c5e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5e2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5E2Cu;
    {
        const bool branch_taken_0x1c5e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c5e2c) {
            ctx->pc = 0x1C5E40u;
            goto label_1c5e40;
        }
    }
    ctx->pc = 0x1C5E34u;
    // 0x1c5e34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5E34u;
    {
        const bool branch_taken_0x1c5e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E34u;
            // 0x1c5e38: 0x2411005a  addiu       $s1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5e34) {
            ctx->pc = 0x1C5E58u;
            goto label_1c5e58;
        }
    }
    ctx->pc = 0x1C5E3Cu;
    // 0x1c5e3c: 0x0  nop
    ctx->pc = 0x1c5e3cu;
    // NOP
label_1c5e40:
    // 0x1c5e40: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C5E40u;
    SET_GPR_U32(ctx, 31, 0x1C5E48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E48u; }
        if (ctx->pc != 0x1C5E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E48u; }
        if (ctx->pc != 0x1C5E48u) { return; }
    }
    ctx->pc = 0x1C5E48u;
    // 0x1c5e48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5E48u;
    {
        const bool branch_taken_0x1c5e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e48) {
            ctx->pc = 0x1C5E58u;
            goto label_1c5e58;
        }
    }
    ctx->pc = 0x1C5E50u;
    // 0x1c5e50: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x1c5e50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c5e54: 0x0  nop
    ctx->pc = 0x1c5e54u;
    // NOP
label_1c5e58:
    // 0x1c5e58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c5e5c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c5e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c5e60: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c5e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c5e64: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c5e68: 0xc071e7c  jal         func_1C79F0
    ctx->pc = 0x1C5E68u;
    SET_GPR_U32(ctx, 31, 0x1C5E70u);
    ctx->pc = 0x1C5E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E68u;
            // 0x1c5e6c: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C79F0u;
    if (runtime->hasFunction(0x1C79F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C79F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E70u; }
        if (ctx->pc != 0x1C5E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D3_0x1c79f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5E70u; }
        if (ctx->pc != 0x1C5E70u) { return; }
    }
    ctx->pc = 0x1C5E70u;
    // 0x1c5e70: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5e74: 0x71001a  div         $zero, $v1, $s1
    ctx->pc = 0x1c5e74u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5e78: 0x0  nop
    ctx->pc = 0x1c5e78u;
    // NOP
    // 0x1c5e7c: 0x0  nop
    ctx->pc = 0x1c5e7cu;
    // NOP
    // 0x1c5e80: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5e80u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c5e84: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C5E84u;
    {
        const bool branch_taken_0x1c5e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5e84) {
            ctx->pc = 0x1C5EE8u;
            goto label_1c5ee8;
        }
    }
    ctx->pc = 0x1C5E8Cu;
    // 0x1c5e8c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5e90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5e94: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5e98: 0x2464ff74  addiu       $a0, $v1, -0x8C
    ctx->pc = 0x1c5e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967156));
    // 0x1c5e9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C5EA4u);
    ctx->pc = 0x1C5EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5E9Cu;
            // 0x1c5ea0: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EA4u; }
        if (ctx->pc != 0x1C5EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EA4u; }
        if (ctx->pc != 0x1C5EA4u) { return; }
    }
    ctx->pc = 0x1C5EA4u;
    // 0x1c5ea4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1c5ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1c5ea8: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5eac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5eb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5eb4: 0x2464ff74  addiu       $a0, $v1, -0x8C
    ctx->pc = 0x1c5eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967156));
    // 0x1c5eb8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5EB8u;
    SET_GPR_U32(ctx, 31, 0x1C5EC0u);
    ctx->pc = 0x1C5EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EB8u;
            // 0x1c5ebc: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EC0u; }
        if (ctx->pc != 0x1C5EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EC0u; }
        if (ctx->pc != 0x1C5EC0u) { return; }
    }
    ctx->pc = 0x1C5EC0u;
    // 0x1c5ec0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1c5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1c5ec4: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5ecc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5ed0: 0x2464ff74  addiu       $a0, $v1, -0x8C
    ctx->pc = 0x1c5ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967156));
    // 0x1c5ed4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5ED4u;
    SET_GPR_U32(ctx, 31, 0x1C5EDCu);
    ctx->pc = 0x1C5ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5ED4u;
            // 0x1c5ed8: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EDCu; }
        if (ctx->pc != 0x1C5EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5EDCu; }
        if (ctx->pc != 0x1C5EDCu) { return; }
    }
    ctx->pc = 0x1C5EDCu;
    // 0x1c5edc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1C5EDCu;
    {
        const bool branch_taken_0x1c5edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5edc) {
            ctx->pc = 0x1C5F68u;
            goto label_1c5f68;
        }
    }
    ctx->pc = 0x1C5EE4u;
    // 0x1c5ee4: 0x0  nop
    ctx->pc = 0x1c5ee4u;
    // NOP
label_1c5ee8:
    // 0x1c5ee8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5EE8u;
    {
        const bool branch_taken_0x1c5ee8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C5EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5EE8u;
            // 0x1c5eec: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5ee8) {
            ctx->pc = 0x1C5EF8u;
            goto label_1c5ef8;
        }
    }
    ctx->pc = 0x1C5EF0u;
    // 0x1c5ef0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1c5ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c5ef4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c5ef4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1c5ef8:
    // 0x1c5ef8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1c5ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c5efc: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x1c5efcu;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5f00: 0x0  nop
    ctx->pc = 0x1c5f00u;
    // NOP
    // 0x1c5f04: 0x0  nop
    ctx->pc = 0x1c5f04u;
    // NOP
    // 0x1c5f08: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5f08u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c5f0c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C5F0Cu;
    {
        const bool branch_taken_0x1c5f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5f0c) {
            ctx->pc = 0x1C5F68u;
            goto label_1c5f68;
        }
    }
    ctx->pc = 0x1C5F14u;
    // 0x1c5f14: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5f18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c5f18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5f1c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5f20: 0x2464008c  addiu       $a0, $v1, 0x8C
    ctx->pc = 0x1c5f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x1c5f24: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5F24u;
    SET_GPR_U32(ctx, 31, 0x1C5F2Cu);
    ctx->pc = 0x1C5F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F24u;
            // 0x1c5f28: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F2Cu; }
        if (ctx->pc != 0x1C5F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F2Cu; }
        if (ctx->pc != 0x1C5F2Cu) { return; }
    }
    ctx->pc = 0x1C5F2Cu;
    // 0x1c5f2c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1c5f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1c5f30: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5f34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5f38: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5f3c: 0x2464008c  addiu       $a0, $v1, 0x8C
    ctx->pc = 0x1c5f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x1c5f40: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5F40u;
    SET_GPR_U32(ctx, 31, 0x1C5F48u);
    ctx->pc = 0x1C5F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F40u;
            // 0x1c5f44: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F48u; }
        if (ctx->pc != 0x1C5F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F48u; }
        if (ctx->pc != 0x1C5F48u) { return; }
    }
    ctx->pc = 0x1C5F48u;
    // 0x1c5f48: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1c5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1c5f4c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c5f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c5f54: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5f58: 0x2464008c  addiu       $a0, $v1, 0x8C
    ctx->pc = 0x1c5f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 140));
    // 0x1c5f5c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1C5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1C5F64u);
    ctx->pc = 0x1C5F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F5Cu;
            // 0x1c5f60: 0x2445000f  addiu       $a1, $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F64u; }
        if (ctx->pc != 0x1C5F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5F64u; }
        if (ctx->pc != 0x1C5F64u) { return; }
    }
    ctx->pc = 0x1C5F64u;
    // 0x1c5f64: 0x0  nop
    ctx->pc = 0x1c5f64u;
    // NOP
label_1c5f68:
    // 0x1c5f68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5f6c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1c5f70: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C5F70u;
    {
        const bool branch_taken_0x1c5f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C5F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5F70u;
            // 0x1c5f74: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f70) {
            ctx->pc = 0x1C5F90u;
            goto label_1c5f90;
        }
    }
    ctx->pc = 0x1C5F78u;
    // 0x1c5f78: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C5F78u;
    {
        const bool branch_taken_0x1c5f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c5f78) {
            ctx->pc = 0x1C5F90u;
            goto label_1c5f90;
        }
    }
    ctx->pc = 0x1C5F80u;
    // 0x1c5f80: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1c5f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1c5f84: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5F84u;
    {
        const bool branch_taken_0x1c5f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5f84) {
            ctx->pc = 0x1C5F98u;
            goto label_1c5f98;
        }
    }
    ctx->pc = 0x1C5F8Cu;
    // 0x1c5f8c: 0x0  nop
    ctx->pc = 0x1c5f8cu;
    // NOP
label_1c5f90:
    // 0x1c5f90: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1c5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1c5f94: 0x0  nop
    ctx->pc = 0x1c5f94u;
    // NOP
label_1c5f98:
    // 0x1c5f98: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c5f9c: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x1c5f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c5fa0: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x1C5FA0u;
    {
        const bool branch_taken_0x1c5fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FA0u;
            // 0x1c5fa4: 0x28610096  slti        $at, $v1, 0x96 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fa0) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C5FA8u;
    // 0x1c5fa8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C5FA8u;
    {
        const bool branch_taken_0x1c5fa8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FA8u;
            // 0x1c5fac: 0x3c023cf5  lui         $v0, 0x3CF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fa8) {
            ctx->pc = 0x1C6050u;
            goto label_1c6050;
        }
    }
    ctx->pc = 0x1C5FB0u;
    // 0x1c5fb0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c5fb0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c5fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c5fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c5fb8: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c5fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c5fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c5fc0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c5fc0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c5fc4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c5fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c5fc8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c5fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c5fcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c5fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c5fd0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c5fd0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c5fd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c5fd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c5fd8: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1C5FD8u;
    {
        const bool branch_taken_0x1c5fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FD8u;
            // 0x1c5fdc: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fd8) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C5FE0u;
    // 0x1c5fe0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c5fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c5fe4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c5fe8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c5fec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c5fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c5ff0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c5ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c5ff4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C5FF4u;
    SET_GPR_U32(ctx, 31, 0x1C5FFCu);
    ctx->pc = 0x1C5FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5FF4u;
            // 0x1c5ff8: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FFCu; }
        if (ctx->pc != 0x1C5FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C5FFCu; }
        if (ctx->pc != 0x1C5FFCu) { return; }
    }
    ctx->pc = 0x1C5FFCu;
    // 0x1c5ffc: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5FFCu;
    {
        const bool branch_taken_0x1c5ffc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c5ffc) {
            ctx->pc = 0x1C6020u;
            goto label_1c6020;
        }
    }
    ctx->pc = 0x1C6004u;
    // 0x1c6004: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6008: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c6008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c600c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c600cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6010: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6014: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6014u;
    SET_GPR_U32(ctx, 31, 0x1C601Cu);
    ctx->pc = 0x1C6018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6014u;
            // 0x1c6018: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C601Cu; }
        if (ctx->pc != 0x1C601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C601Cu; }
        if (ctx->pc != 0x1C601Cu) { return; }
    }
    ctx->pc = 0x1C601Cu;
    // 0x1c601c: 0x0  nop
    ctx->pc = 0x1c601cu;
    // NOP
label_1c6020:
    // 0x1c6020: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c6020u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c6024: 0x14200036  bnez        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1C6024u;
    {
        const bool branch_taken_0x1c6024 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6024) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C602Cu;
    // 0x1c602c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6030: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c6030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6034: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6038: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c603c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C603Cu;
    SET_GPR_U32(ctx, 31, 0x1C6044u);
    ctx->pc = 0x1C6040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C603Cu;
            // 0x1c6040: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6044u; }
        if (ctx->pc != 0x1C6044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6044u; }
        if (ctx->pc != 0x1C6044u) { return; }
    }
    ctx->pc = 0x1C6044u;
    // 0x1c6044: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1C6044u;
    {
        const bool branch_taken_0x1c6044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6044) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C604Cu;
    // 0x1c604c: 0x0  nop
    ctx->pc = 0x1c604cu;
    // NOP
label_1c6050:
    // 0x1c6050: 0x286200c8  slti        $v0, $v1, 0xC8
    ctx->pc = 0x1c6050u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c6054: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C6054u;
    {
        const bool branch_taken_0x1c6054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6054u;
            // 0x1c6058: 0x286100fa  slti        $at, $v1, 0xFA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)250) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6054) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C605Cu;
    // 0x1c605c: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C605Cu;
    {
        const bool branch_taken_0x1c605c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C605Cu;
            // 0x1c6060: 0x3c023d75  lui         $v0, 0x3D75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c605c) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C6064u;
    // 0x1c6064: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c6064u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c6068: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c606c: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6070: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c6070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c6074: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c6074u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6078: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c6078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c607c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c607cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6080: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c6080u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c6084: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c6084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c6088: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c6088u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c608c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c608cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6090: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6090u;
    {
        const bool branch_taken_0x1c6090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6090u;
            // 0x1c6094: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6090) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C6098u;
    // 0x1c6098: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c6098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c609c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c60a0: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c60a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c60a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c60a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c60a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c60ac: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C60ACu;
    SET_GPR_U32(ctx, 31, 0x1C60B4u);
    ctx->pc = 0x1C60B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60ACu;
            // 0x1c60b0: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60B4u; }
        if (ctx->pc != 0x1C60B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60B4u; }
        if (ctx->pc != 0x1C60B4u) { return; }
    }
    ctx->pc = 0x1C60B4u;
    // 0x1c60b4: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60B4u;
    {
        const bool branch_taken_0x1c60b4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c60b4) {
            ctx->pc = 0x1C60D8u;
            goto label_1c60d8;
        }
    }
    ctx->pc = 0x1C60BCu;
    // 0x1c60bc: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c60bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c60c0: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c60c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c60c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c60c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c60cc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C60CCu;
    SET_GPR_U32(ctx, 31, 0x1C60D4u);
    ctx->pc = 0x1C60D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60CCu;
            // 0x1c60d0: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60D4u; }
        if (ctx->pc != 0x1C60D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60D4u; }
        if (ctx->pc != 0x1C60D4u) { return; }
    }
    ctx->pc = 0x1C60D4u;
    // 0x1c60d4: 0x0  nop
    ctx->pc = 0x1c60d4u;
    // NOP
label_1c60d8:
    // 0x1c60d8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c60d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c60dc: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C60DCu;
    {
        const bool branch_taken_0x1c60dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c60dc) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C60E4u;
    // 0x1c60e4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c60e8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c60ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c60f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c60f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c60f4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C60F4u;
    SET_GPR_U32(ctx, 31, 0x1C60FCu);
    ctx->pc = 0x1C60F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C60F4u;
            // 0x1c60f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60FCu; }
        if (ctx->pc != 0x1C60FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C60FCu; }
        if (ctx->pc != 0x1C60FCu) { return; }
    }
    ctx->pc = 0x1C60FCu;
    // 0x1c60fc: 0x0  nop
    ctx->pc = 0x1c60fcu;
    // NOP
label_1c6100:
    // 0x1c6100: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6108: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c6108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x1c610c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6110: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1c6114: 0x14200430  bnez        $at, . + 4 + (0x430 << 2)
    ctx->pc = 0x1C6114u;
    {
        const bool branch_taken_0x1c6114 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6114) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C611Cu;
    // 0x1c611c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C611Cu;
    SET_GPR_U32(ctx, 31, 0x1C6124u);
    ctx->pc = 0x1C6120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C611Cu;
            // 0x1c6120: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6124u; }
        if (ctx->pc != 0x1C6124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6124u; }
        if (ctx->pc != 0x1C6124u) { return; }
    }
    ctx->pc = 0x1C6124u;
    // 0x1c6124: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x1c6124u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c6128: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1c6128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1c612c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c6130: 0x2442aa70  addiu       $v0, $v0, -0x5590
    ctx->pc = 0x1c6130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945392));
    // 0x1c6134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c6138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c613c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c6140: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6140u;
    SET_GPR_U32(ctx, 31, 0x1C6148u);
    ctx->pc = 0x1C6144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6140u;
            // 0x1c6144: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6148u; }
        if (ctx->pc != 0x1C6148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6148u; }
        if (ctx->pc != 0x1C6148u) { return; }
    }
    ctx->pc = 0x1C6148u;
    // 0x1c6148: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c6148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c614c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c614cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6150: 0x0  nop
    ctx->pc = 0x1c6150u;
    // NOP
    // 0x1c6154: 0x0  nop
    ctx->pc = 0x1c6154u;
    // NOP
    // 0x1c6158: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6158u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c615c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c6160: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6160u;
    SET_GPR_U32(ctx, 31, 0x1C6168u);
    ctx->pc = 0x1C6164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6160u;
            // 0x1c6164: 0xae020118  sw          $v0, 0x118($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6168u; }
        if (ctx->pc != 0x1C6168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6168u; }
        if (ctx->pc != 0x1C6168u) { return; }
    }
    ctx->pc = 0x1C6168u;
    // 0x1c6168: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c6168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c616c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c616cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6170: 0x0  nop
    ctx->pc = 0x1c6170u;
    // NOP
    // 0x1c6174: 0x0  nop
    ctx->pc = 0x1c6174u;
    // NOP
    // 0x1c6178: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6178u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c617c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c6180: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6180u;
    SET_GPR_U32(ctx, 31, 0x1C6188u);
    ctx->pc = 0x1C6184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6180u;
            // 0x1c6184: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6188u; }
        if (ctx->pc != 0x1C6188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6188u; }
        if (ctx->pc != 0x1C6188u) { return; }
    }
    ctx->pc = 0x1C6188u;
    // 0x1c6188: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c6188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c618c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c618cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6190: 0x0  nop
    ctx->pc = 0x1c6190u;
    // NOP
    // 0x1c6194: 0x0  nop
    ctx->pc = 0x1c6194u;
    // NOP
    // 0x1c6198: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6198u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c619c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1c619cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1c61a0: 0x1000040d  b           . + 4 + (0x40D << 2)
    ctx->pc = 0x1C61A0u;
    {
        const bool branch_taken_0x1c61a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61A0u;
            // 0x1c61a4: 0xae020120  sw          $v0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a0) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C61A8u;
label_1c61a8:
    // 0x1c61a8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c61ac: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c61b0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c61b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c61b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c61b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c61b8: 0x0  nop
    ctx->pc = 0x1c61b8u;
    // NOP
    // 0x1c61bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c61bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c61c0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c61c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c61c4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c61c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c61c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c61c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c61cc: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c61ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c61d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c61d4: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x1c61d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1c61d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C61D8u;
    {
        const bool branch_taken_0x1c61d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c61d8) {
            ctx->pc = 0x1C61E8u;
            goto label_1c61e8;
        }
    }
    ctx->pc = 0x1C61E0u;
    // 0x1c61e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c61e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c61e4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c61e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_1c61e8:
    // 0x1c61e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c61ec: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c61f0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c61f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c61f4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c61f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c61f8: 0xc071e8c  jal         func_1C7A30
    ctx->pc = 0x1C61F8u;
    SET_GPR_U32(ctx, 31, 0x1C6200u);
    ctx->pc = 0x1C61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C61F8u;
            // 0x1c61fc: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A30u;
    if (runtime->hasFunction(0x1C7A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6200u; }
        if (ctx->pc != 0x1C6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1c7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6200u; }
        if (ctx->pc != 0x1C6200u) { return; }
    }
    ctx->pc = 0x1C6200u;
    // 0x1c6200: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6204: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x1c6204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x1c6208: 0x14200027  bnez        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C6208u;
    {
        const bool branch_taken_0x1c6208 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C620Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6208u;
            // 0x1c620c: 0x28610096  slti        $at, $v1, 0x96 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6208) {
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6210u;
    // 0x1c6210: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6210u;
    {
        const bool branch_taken_0x1c6210 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6210u;
            // 0x1c6214: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6210) {
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6218u;
    // 0x1c6218: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6218u;
    {
        const bool branch_taken_0x1c6218 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c6218) {
            ctx->pc = 0x1C622Cu;
            goto label_1c622c;
        }
    }
    ctx->pc = 0x1C6220u;
    // 0x1c6220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6220u;
    {
        const bool branch_taken_0x1c6220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6220) {
            ctx->pc = 0x1C622Cu;
            goto label_1c622c;
        }
    }
    ctx->pc = 0x1C6228u;
    // 0x1c6228: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1c6228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1c622c:
    // 0x1c622c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C622Cu;
    {
        const bool branch_taken_0x1c622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c622c) {
            ctx->pc = 0x1C62A8u;
            goto label_1c62a8;
        }
    }
    ctx->pc = 0x1C6234u;
    // 0x1c6234: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1c6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6238: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1c6238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1c623c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x1c623cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6240: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c6240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c6244: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C6244u;
    SET_GPR_U32(ctx, 31, 0x1C624Cu);
    ctx->pc = 0x1C6248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6244u;
            // 0x1c6248: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C624Cu; }
        if (ctx->pc != 0x1C624Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C624Cu; }
        if (ctx->pc != 0x1C624Cu) { return; }
    }
    ctx->pc = 0x1C624Cu;
    // 0x1c624c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c624cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6250: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6254: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1c6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1c6258: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1C6258u;
    SET_GPR_U32(ctx, 31, 0x1C6260u);
    ctx->pc = 0x1C625Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6258u;
            // 0x1c625c: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6260u; }
        if (ctx->pc != 0x1C6260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6260u; }
        if (ctx->pc != 0x1C6260u) { return; }
    }
    ctx->pc = 0x1C6260u;
    // 0x1c6260: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c6260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6264: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c6264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6268: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1c6268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c626c: 0x2464000a  addiu       $a0, $v1, 0xA
    ctx->pc = 0x1c626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1c6270: 0xc065508  jal         func_195420
    ctx->pc = 0x1C6270u;
    SET_GPR_U32(ctx, 31, 0x1C6278u);
    ctx->pc = 0x1C6274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6270u;
            // 0x1c6274: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6278u; }
        if (ctx->pc != 0x1C6278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6278u; }
        if (ctx->pc != 0x1C6278u) { return; }
    }
    ctx->pc = 0x1C6278u;
    // 0x1c6278: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c6278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c627c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6280: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1c6280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1c6284: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1C6284u;
    SET_GPR_U32(ctx, 31, 0x1C628Cu);
    ctx->pc = 0x1C6288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6284u;
            // 0x1c6288: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C628Cu; }
        if (ctx->pc != 0x1C628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C628Cu; }
        if (ctx->pc != 0x1C628Cu) { return; }
    }
    ctx->pc = 0x1C628Cu;
    // 0x1c628c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6290: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c6290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6294: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c6294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6298: 0x2484fff6  addiu       $a0, $a0, -0xA
    ctx->pc = 0x1c6298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967286));
    // 0x1c629c: 0x2465000a  addiu       $a1, $v1, 0xA
    ctx->pc = 0x1c629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1c62a0: 0xc065508  jal         func_195420
    ctx->pc = 0x1C62A0u;
    SET_GPR_U32(ctx, 31, 0x1C62A8u);
    ctx->pc = 0x1C62A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62A0u;
            // 0x1c62a4: 0x23023  negu        $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62A8u; }
        if (ctx->pc != 0x1C62A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62A8u; }
        if (ctx->pc != 0x1C62A8u) { return; }
    }
    ctx->pc = 0x1C62A8u;
label_1c62a8:
    // 0x1c62a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c62ac: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1c62acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1c62b0: 0x1420003b  bnez        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x1C62B0u;
    {
        const bool branch_taken_0x1c62b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c62b0) {
            ctx->pc = 0x1C63A0u;
            goto label_1c63a0;
        }
    }
    ctx->pc = 0x1C62B8u;
    // 0x1c62b8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x1c62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x1c62bc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c62bcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c62c0: 0x0  nop
    ctx->pc = 0x1c62c0u;
    // NOP
    // 0x1c62c4: 0x0  nop
    ctx->pc = 0x1c62c4u;
    // NOP
    // 0x1c62c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c62c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c62cc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C62CCu;
    {
        const bool branch_taken_0x1c62cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c62cc) {
            ctx->pc = 0x1C6328u;
            goto label_1c6328;
        }
    }
    ctx->pc = 0x1C62D4u;
    // 0x1c62d4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C62D4u;
    SET_GPR_U32(ctx, 31, 0x1C62DCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62DCu; }
        if (ctx->pc != 0x1C62DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C62DCu; }
        if (ctx->pc != 0x1C62DCu) { return; }
    }
    ctx->pc = 0x1C62DCu;
    // 0x1c62dc: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c62dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c62e0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c62e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c62e4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c62e4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c62e8: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c62e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c62ec: 0x0  nop
    ctx->pc = 0x1c62ecu;
    // NOP
    // 0x1c62f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c62f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c62f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c62f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c62f8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c62fc: 0xc06b2c4  jal         func_1ACB10
    ctx->pc = 0x1C62FCu;
    SET_GPR_U32(ctx, 31, 0x1C6304u);
    ctx->pc = 0x1C6300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C62FCu;
            // 0x1c6300: 0x2445ffd8  addiu       $a1, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6304u; }
        if (ctx->pc != 0x1C6304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6304u; }
        if (ctx->pc != 0x1C6304u) { return; }
    }
    ctx->pc = 0x1C6304u;
    // 0x1c6304: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6304u;
    SET_GPR_U32(ctx, 31, 0x1C630Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C630Cu; }
        if (ctx->pc != 0x1C630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C630Cu; }
        if (ctx->pc != 0x1C630Cu) { return; }
    }
    ctx->pc = 0x1C630Cu;
    // 0x1c630c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c630cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c6310: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6310u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6314: 0x0  nop
    ctx->pc = 0x1c6314u;
    // NOP
    // 0x1c6318: 0x0  nop
    ctx->pc = 0x1c6318u;
    // NOP
    // 0x1c631c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c631cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6320: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c6320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c6324: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x1c6324u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_1c6328:
    // 0x1c6328: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c632c: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1c632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x1c6330: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c6330u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6334: 0x0  nop
    ctx->pc = 0x1c6334u;
    // NOP
    // 0x1c6338: 0x0  nop
    ctx->pc = 0x1c6338u;
    // NOP
    // 0x1c633c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c633cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6340: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6340u;
    {
        const bool branch_taken_0x1c6340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6340) {
            ctx->pc = 0x1C63A0u;
            goto label_1c63a0;
        }
    }
    ctx->pc = 0x1C6348u;
    // 0x1c6348: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6348u;
    SET_GPR_U32(ctx, 31, 0x1C6350u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6350u; }
        if (ctx->pc != 0x1C6350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6350u; }
        if (ctx->pc != 0x1C6350u) { return; }
    }
    ctx->pc = 0x1C6350u;
    // 0x1c6350: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1c6350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c6354: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c6354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c6358: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1c6358u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c635c: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c635cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c6360: 0x0  nop
    ctx->pc = 0x1c6360u;
    // NOP
    // 0x1c6364: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6364u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6368: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1c6368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c636c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1c636cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6370: 0xc06b2c4  jal         func_1ACB10
    ctx->pc = 0x1C6370u;
    SET_GPR_U32(ctx, 31, 0x1C6378u);
    ctx->pc = 0x1C6374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6370u;
            // 0x1c6374: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACB10u;
    if (runtime->hasFunction(0x1ACB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ACB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6378u; }
        if (ctx->pc != 0x1C6378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_04_0x1acb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6378u; }
        if (ctx->pc != 0x1C6378u) { return; }
    }
    ctx->pc = 0x1C6378u;
    // 0x1c6378: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6378u;
    SET_GPR_U32(ctx, 31, 0x1C6380u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6380u; }
        if (ctx->pc != 0x1C6380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6380u; }
        if (ctx->pc != 0x1C6380u) { return; }
    }
    ctx->pc = 0x1C6380u;
    // 0x1c6380: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c6384: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6384u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6388: 0x0  nop
    ctx->pc = 0x1c6388u;
    // NOP
    // 0x1c638c: 0x0  nop
    ctx->pc = 0x1c638cu;
    // NOP
    // 0x1c6390: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6390u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6394: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1c6394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c6398: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1c6398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
    // 0x1c639c: 0x0  nop
    ctx->pc = 0x1c639cu;
    // NOP
label_1c63a0:
    // 0x1c63a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c63a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c63a4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C63A4u;
    SET_GPR_U32(ctx, 31, 0x1C63ACu);
    ctx->pc = 0x1C63A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63A4u;
            // 0x1c63a8: 0xc42c1cd0  lwc1        $f12, 0x1CD0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63ACu; }
        if (ctx->pc != 0x1C63ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63ACu; }
        if (ctx->pc != 0x1C63ACu) { return; }
    }
    ctx->pc = 0x1C63ACu;
    // 0x1c63ac: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x1c63acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x1c63b0: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1c63b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1c63b4: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1c63b4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c63b8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c63b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c63bc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c63bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c63c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c63c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c63c4: 0xc040098  jal         func_100260
    ctx->pc = 0x1C63C4u;
    SET_GPR_U32(ctx, 31, 0x1C63CCu);
    ctx->pc = 0x1C63C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63C4u;
            // 0x1c63c8: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63CCu; }
        if (ctx->pc != 0x1C63CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C63CCu; }
        if (ctx->pc != 0x1C63CCu) { return; }
    }
    ctx->pc = 0x1C63CCu;
    // 0x1c63cc: 0x10400382  beqz        $v0, . + 4 + (0x382 << 2)
    ctx->pc = 0x1C63CCu;
    {
        const bool branch_taken_0x1c63cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63CCu;
            // 0x1c63d0: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63cc) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C63D4u;
    // 0x1c63d4: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1c63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
    // 0x1c63d8: 0xc4211cd0  lwc1        $f1, 0x1CD0($at)
    ctx->pc = 0x1c63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c63dc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1c63dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1c63e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c63e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c63e4: 0x0  nop
    ctx->pc = 0x1c63e4u;
    // NOP
    // 0x1c63e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c63e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c63ec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c63ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c63f0: 0x10000379  b           . + 4 + (0x379 << 2)
    ctx->pc = 0x1C63F0u;
    {
        const bool branch_taken_0x1c63f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C63F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C63F0u;
            // 0x1c63f4: 0xe4201cd0  swc1        $f0, 0x1CD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 7376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c63f0) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C63F8u;
label_1c63f8:
    // 0x1c63f8: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c63f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c63fc: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6400: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c6400u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c6404: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6408: 0x0  nop
    ctx->pc = 0x1c6408u;
    // NOP
    // 0x1c640c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c640cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6410: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c6410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c6414: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c641c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c6420: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c6420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6424: 0x28410259  slti        $at, $v0, 0x259
    ctx->pc = 0x1c6424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x1c6428: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6428u;
    {
        const bool branch_taken_0x1c6428 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6428) {
            ctx->pc = 0x1C6448u;
            goto label_1c6448;
        }
    }
    ctx->pc = 0x1C6430u;
    // 0x1c6430: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6438: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1c6438u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1c643c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c643cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6440: 0xc071da0  jal         func_1C7680
    ctx->pc = 0x1C6440u;
    SET_GPR_U32(ctx, 31, 0x1C6448u);
    ctx->pc = 0x1C6444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6440u;
            // 0x1c6444: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7680u;
    if (runtime->hasFunction(0x1C7680u)) {
        auto targetFn = runtime->lookupFunction(0x1C7680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6448u; }
        if (ctx->pc != 0x1C6448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c7680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6448u; }
        if (ctx->pc != 0x1C6448u) { return; }
    }
    ctx->pc = 0x1C6448u;
label_1c6448:
    // 0x1c6448: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c644c: 0x28620064  slti        $v0, $v1, 0x64
    ctx->pc = 0x1c644cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c6450: 0x1440009b  bnez        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1C6450u;
    {
        const bool branch_taken_0x1c6450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6450u;
            // 0x1c6454: 0x286100c8  slti        $at, $v1, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6450) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C6458u;
    // 0x1c6458: 0x1020007b  beqz        $at, . + 4 + (0x7B << 2)
    ctx->pc = 0x1C6458u;
    {
        const bool branch_taken_0x1c6458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6458u;
            // 0x1c645c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6458) {
            ctx->pc = 0x1C6648u;
            goto label_1c6648;
        }
    }
    ctx->pc = 0x1C6460u;
    // 0x1c6460: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c6460u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6464: 0x0  nop
    ctx->pc = 0x1c6464u;
    // NOP
    // 0x1c6468: 0x0  nop
    ctx->pc = 0x1c6468u;
    // NOP
    // 0x1c646c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c646cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6470: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C6470u;
    {
        const bool branch_taken_0x1c6470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6470) {
            ctx->pc = 0x1C64C8u;
            goto label_1c64c8;
        }
    }
    ctx->pc = 0x1C6478u;
    // 0x1c6478: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c647c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c647cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6480: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c6480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6484: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c6484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6488: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c648c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c648cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6490: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c6490u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c6494: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c6494u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c6498: 0xc06ba20  jal         func_1AE880
    ctx->pc = 0x1C6498u;
    SET_GPR_U32(ctx, 31, 0x1C64A0u);
    ctx->pc = 0x1C649Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6498u;
            // 0x1c649c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64A0u; }
        if (ctx->pc != 0x1C64A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64A0u; }
        if (ctx->pc != 0x1C64A0u) { return; }
    }
    ctx->pc = 0x1C64A0u;
    // 0x1c64a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c64a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c64a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c64a8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c64a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c64ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c64b0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c64b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c64b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c64b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c64b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c64b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c64bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c64bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c64c0: 0xc06ba20  jal         func_1AE880
    ctx->pc = 0x1C64C0u;
    SET_GPR_U32(ctx, 31, 0x1C64C8u);
    ctx->pc = 0x1C64C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64C0u;
            // 0x1c64c4: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64C8u; }
        if (ctx->pc != 0x1C64C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64C8u; }
        if (ctx->pc != 0x1C64C8u) { return; }
    }
    ctx->pc = 0x1C64C8u;
label_1c64c8:
    // 0x1c64c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c64c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c64cc: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c64d0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c64d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c64d4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c64d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c64d8: 0xc071e8c  jal         func_1C7A30
    ctx->pc = 0x1C64D8u;
    SET_GPR_U32(ctx, 31, 0x1C64E0u);
    ctx->pc = 0x1C64DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64D8u;
            // 0x1c64dc: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A30u;
    if (runtime->hasFunction(0x1C7A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E0u; }
        if (ctx->pc != 0x1C64E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1c7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C64E0u; }
        if (ctx->pc != 0x1C64E0u) { return; }
    }
    ctx->pc = 0x1C64E0u;
    // 0x1c64e0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c64e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c64e4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1c64e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1c64e8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C64E8u;
    {
        const bool branch_taken_0x1c64e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C64ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C64E8u;
            // 0x1c64ec: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c64e8) {
            ctx->pc = 0x1C64F8u;
            goto label_1c64f8;
        }
    }
    ctx->pc = 0x1C64F0u;
    // 0x1c64f0: 0x14620073  bne         $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x1C64F0u;
    {
        const bool branch_taken_0x1c64f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c64f0) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C64F8u;
label_1c64f8:
    // 0x1c64f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C64F8u;
    SET_GPR_U32(ctx, 31, 0x1C6500u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6500u; }
        if (ctx->pc != 0x1C6500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6500u; }
        if (ctx->pc != 0x1C6500u) { return; }
    }
    ctx->pc = 0x1C6500u;
    // 0x1c6500: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c6500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c6504: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C6504u;
    {
        const bool branch_taken_0x1c6504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6504u;
            // 0x1c6508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6504) {
            ctx->pc = 0x1C6568u;
            goto label_1c6568;
        }
    }
    ctx->pc = 0x1C650Cu;
    // 0x1c650c: 0x0  nop
    ctx->pc = 0x1c650cu;
    // NOP
label_1c6510:
    // 0x1c6510: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6514: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1c6514u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6518: 0x0  nop
    ctx->pc = 0x1c6518u;
    // NOP
    // 0x1c651c: 0x0  nop
    ctx->pc = 0x1c651cu;
    // NOP
    // 0x1c6520: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6520u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6524: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6524u;
    {
        const bool branch_taken_0x1c6524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6524) {
            ctx->pc = 0x1C6558u;
            goto label_1c6558;
        }
    }
    ctx->pc = 0x1C652Cu;
    // 0x1c652c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C652Cu;
    SET_GPR_U32(ctx, 31, 0x1C6534u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6534u; }
        if (ctx->pc != 0x1C6534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6534u; }
        if (ctx->pc != 0x1C6534u) { return; }
    }
    ctx->pc = 0x1C6534u;
    // 0x1c6534: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c6534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6538: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c653c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c653cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6540: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6544: 0x0  nop
    ctx->pc = 0x1c6544u;
    // NOP
    // 0x1c6548: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6548u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c654c: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C654Cu;
    SET_GPR_U32(ctx, 31, 0x1C6554u);
    ctx->pc = 0x1C6550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C654Cu;
            // 0x1c6550: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6554u; }
        if (ctx->pc != 0x1C6554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6554u; }
        if (ctx->pc != 0x1C6554u) { return; }
    }
    ctx->pc = 0x1C6554u;
    // 0x1c6554: 0x0  nop
    ctx->pc = 0x1c6554u;
    // NOP
label_1c6558:
    // 0x1c6558: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c6558u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c655c: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1c655cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c6560: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C6560u;
    {
        const bool branch_taken_0x1c6560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6560) {
            ctx->pc = 0x1C6510u;
            goto label_1c6510;
        }
    }
    ctx->pc = 0x1C6568u;
label_1c6568:
    // 0x1c6568: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C6568u;
    SET_GPR_U32(ctx, 31, 0x1C6570u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6570u; }
        if (ctx->pc != 0x1C6570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6570u; }
        if (ctx->pc != 0x1C6570u) { return; }
    }
    ctx->pc = 0x1C6570u;
    // 0x1c6570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c6570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6574: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C6574u;
    {
        const bool branch_taken_0x1c6574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C6578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6574u;
            // 0x1c6578: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6574) {
            ctx->pc = 0x1C65D8u;
            goto label_1c65d8;
        }
    }
    ctx->pc = 0x1C657Cu;
    // 0x1c657c: 0x0  nop
    ctx->pc = 0x1c657cu;
    // NOP
label_1c6580:
    // 0x1c6580: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6584: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1c6584u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6588: 0x0  nop
    ctx->pc = 0x1c6588u;
    // NOP
    // 0x1c658c: 0x0  nop
    ctx->pc = 0x1c658cu;
    // NOP
    // 0x1c6590: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6590u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6594: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C6594u;
    {
        const bool branch_taken_0x1c6594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6594) {
            ctx->pc = 0x1C65C8u;
            goto label_1c65c8;
        }
    }
    ctx->pc = 0x1C659Cu;
    // 0x1c659c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C659Cu;
    SET_GPR_U32(ctx, 31, 0x1C65A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65A4u; }
        if (ctx->pc != 0x1C65A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65A4u; }
        if (ctx->pc != 0x1C65A4u) { return; }
    }
    ctx->pc = 0x1C65A4u;
    // 0x1c65a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c65a8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c65a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c65ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c65acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c65b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c65b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c65b4: 0x0  nop
    ctx->pc = 0x1c65b4u;
    // NOP
    // 0x1c65b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c65b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c65bc: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C65BCu;
    SET_GPR_U32(ctx, 31, 0x1C65C4u);
    ctx->pc = 0x1C65C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65BCu;
            // 0x1c65c0: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65C4u; }
        if (ctx->pc != 0x1C65C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65C4u; }
        if (ctx->pc != 0x1C65C4u) { return; }
    }
    ctx->pc = 0x1C65C4u;
    // 0x1c65c4: 0x0  nop
    ctx->pc = 0x1c65c4u;
    // NOP
label_1c65c8:
    // 0x1c65c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c65c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c65cc: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1c65ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c65d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C65D0u;
    {
        const bool branch_taken_0x1c65d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65d0) {
            ctx->pc = 0x1C6580u;
            goto label_1c6580;
        }
    }
    ctx->pc = 0x1C65D8u;
label_1c65d8:
    // 0x1c65d8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1C65D8u;
    SET_GPR_U32(ctx, 31, 0x1C65E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65E0u; }
        if (ctx->pc != 0x1C65E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C65E0u; }
        if (ctx->pc != 0x1C65E0u) { return; }
    }
    ctx->pc = 0x1C65E0u;
    // 0x1c65e0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C65E0u;
    {
        const bool branch_taken_0x1c65e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C65E0u;
            // 0x1c65e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65e0) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C65E8u;
label_1c65e8:
    // 0x1c65e8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c65ec: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x1c65ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c65f0: 0x0  nop
    ctx->pc = 0x1c65f0u;
    // NOP
    // 0x1c65f4: 0x0  nop
    ctx->pc = 0x1c65f4u;
    // NOP
    // 0x1c65f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1c65f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c65fc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C65FCu;
    {
        const bool branch_taken_0x1c65fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c65fc) {
            ctx->pc = 0x1C6630u;
            goto label_1c6630;
        }
    }
    ctx->pc = 0x1C6604u;
    // 0x1c6604: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6604u;
    SET_GPR_U32(ctx, 31, 0x1C660Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C660Cu; }
        if (ctx->pc != 0x1C660Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C660Cu; }
        if (ctx->pc != 0x1C660Cu) { return; }
    }
    ctx->pc = 0x1C660Cu;
    // 0x1c660c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1c660cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c6610: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6614: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6614u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6618: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c661c: 0x0  nop
    ctx->pc = 0x1c661cu;
    // NOP
    // 0x1c6620: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6620u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6624: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1C6624u;
    SET_GPR_U32(ctx, 31, 0x1C662Cu);
    ctx->pc = 0x1C6628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6624u;
            // 0x1c6628: 0x2223021  addu        $a2, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C662Cu; }
        if (ctx->pc != 0x1C662Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C662Cu; }
        if (ctx->pc != 0x1C662Cu) { return; }
    }
    ctx->pc = 0x1C662Cu;
    // 0x1c662c: 0x0  nop
    ctx->pc = 0x1c662cu;
    // NOP
label_1c6630:
    // 0x1c6630: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c6630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c6634: 0x2a220078  slti        $v0, $s1, 0x78
    ctx->pc = 0x1c6634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c6638: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1C6638u;
    {
        const bool branch_taken_0x1c6638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6638) {
            ctx->pc = 0x1C65E8u;
            goto label_1c65e8;
        }
    }
    ctx->pc = 0x1C6640u;
    // 0x1c6640: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C6640u;
    {
        const bool branch_taken_0x1c6640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6640) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C6648u;
label_1c6648:
    // 0x1c6648: 0x28610191  slti        $at, $v1, 0x191
    ctx->pc = 0x1c6648u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)401) ? 1 : 0);
    // 0x1c664c: 0x1420001c  bnez        $at, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C664Cu;
    {
        const bool branch_taken_0x1c664c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C664Cu;
            // 0x1c6650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c664c) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C6654u;
    // 0x1c6654: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c6654u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6658: 0x0  nop
    ctx->pc = 0x1c6658u;
    // NOP
    // 0x1c665c: 0x0  nop
    ctx->pc = 0x1c665cu;
    // NOP
    // 0x1c6660: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6660u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6664: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1C6664u;
    {
        const bool branch_taken_0x1c6664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6664) {
            ctx->pc = 0x1C66C0u;
            goto label_1c66c0;
        }
    }
    ctx->pc = 0x1C666Cu;
    // 0x1c666c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6670: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6674: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c6674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6678: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c667c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c667cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c6680: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6680u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6684: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c6684u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c6688: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c6688u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c668c: 0xc06ba20  jal         func_1AE880
    ctx->pc = 0x1C668Cu;
    SET_GPR_U32(ctx, 31, 0x1C6694u);
    ctx->pc = 0x1C6690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C668Cu;
            // 0x1c6690: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6694u; }
        if (ctx->pc != 0x1C6694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6694u; }
        if (ctx->pc != 0x1C6694u) { return; }
    }
    ctx->pc = 0x1C6694u;
    // 0x1c6694: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c669c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c669cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c66a0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c66a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c66a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c66a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c66a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c66a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c66ac: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1c66acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1c66b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c66b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c66b4: 0xc06ba20  jal         func_1AE880
    ctx->pc = 0x1C66B4u;
    SET_GPR_U32(ctx, 31, 0x1C66BCu);
    ctx->pc = 0x1C66B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66B4u;
            // 0x1c66b8: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE880u;
    if (runtime->hasFunction(0x1AE880u)) {
        auto targetFn = runtime->lookupFunction(0x1AE880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66BCu; }
        if (ctx->pc != 0x1C66BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn6_06_0x1ae880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66BCu; }
        if (ctx->pc != 0x1C66BCu) { return; }
    }
    ctx->pc = 0x1C66BCu;
    // 0x1c66bc: 0x0  nop
    ctx->pc = 0x1c66bcu;
    // NOP
label_1c66c0:
    // 0x1c66c0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c66c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c66c4: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x1C66C4u;
    SET_GPR_U32(ctx, 31, 0x1C66CCu);
    ctx->pc = 0x1C66C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66C4u;
            // 0x1c66c8: 0xc42c1cd0  lwc1        $f12, 0x1CD0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66CCu; }
        if (ctx->pc != 0x1C66CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66CCu; }
        if (ctx->pc != 0x1C66CCu) { return; }
    }
    ctx->pc = 0x1C66CCu;
    // 0x1c66cc: 0x3c04bfd3  lui         $a0, 0xBFD3
    ctx->pc = 0x1c66ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49107 << 16));
    // 0x1c66d0: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x1c66d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x1c66d4: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x1c66d4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c66d8: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1c66d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x1c66dc: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1c66dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c66e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c66e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66e4: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x1c66e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x1c66e8: 0xc040084  jal         func_100210
    ctx->pc = 0x1C66E8u;
    SET_GPR_U32(ctx, 31, 0x1C66F0u);
    ctx->pc = 0x1C66ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66E8u;
            // 0x1c66ec: 0x70022b89  pcpyld      $a1, $zero, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66F0u; }
        if (ctx->pc != 0x1C66F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C66F0u; }
        if (ctx->pc != 0x1C66F0u) { return; }
    }
    ctx->pc = 0x1C66F0u;
    // 0x1c66f0: 0x104002b9  beqz        $v0, . + 4 + (0x2B9 << 2)
    ctx->pc = 0x1C66F0u;
    {
        const bool branch_taken_0x1c66f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66F0u;
            // 0x1c66f4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66f0) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C66F8u;
    // 0x1c66f8: 0x3c023a1d  lui         $v0, 0x3A1D
    ctx->pc = 0x1c66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14877 << 16));
    // 0x1c66fc: 0xc4211cd0  lwc1        $f1, 0x1CD0($at)
    ctx->pc = 0x1c66fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 7376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6700: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1c6700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
    // 0x1c6704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6708: 0x0  nop
    ctx->pc = 0x1c6708u;
    // NOP
    // 0x1c670c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c670cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c6710: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1c6710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1c6714: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x1C6714u;
    {
        const bool branch_taken_0x1c6714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6714u;
            // 0x1c6718: 0xe4201cd0  swc1        $f0, 0x1CD0($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 7376), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6714) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C671Cu;
    // 0x1c671c: 0x0  nop
    ctx->pc = 0x1c671cu;
    // NOP
label_1c6720:
    // 0x1c6720: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c6720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c6724: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c6724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6728: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c6728u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c672c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c672cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6730: 0x0  nop
    ctx->pc = 0x1c6730u;
    // NOP
    // 0x1c6734: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6734u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6738: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c6738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c673c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c673cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6740: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6744: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c6748: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c674c: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1c674cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1c6750: 0x142002a1  bnez        $at, . + 4 + (0x2A1 << 2)
    ctx->pc = 0x1C6750u;
    {
        const bool branch_taken_0x1c6750 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6750) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6758u;
    // 0x1c6758: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c675c: 0x1000029e  b           . + 4 + (0x29E << 2)
    ctx->pc = 0x1C675Cu;
    {
        const bool branch_taken_0x1c675c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C675Cu;
            // 0x1c6760: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c675c) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6764u;
    // 0x1c6764: 0x0  nop
    ctx->pc = 0x1c6764u;
    // NOP
label_1c6768:
    // 0x1c6768: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c676c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1c676cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1c6770: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6770u;
    {
        const bool branch_taken_0x1c6770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C6774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6770u;
            // 0x1c6774: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6770) {
            ctx->pc = 0x1C6790u;
            goto label_1c6790;
        }
    }
    ctx->pc = 0x1C6778u;
    // 0x1c6778: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6778u;
    {
        const bool branch_taken_0x1c6778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6778) {
            ctx->pc = 0x1C6790u;
            goto label_1c6790;
        }
    }
    ctx->pc = 0x1C6780u;
    // 0x1c6780: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1c6780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1c6784: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6784u;
    {
        const bool branch_taken_0x1c6784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c6784) {
            ctx->pc = 0x1C6798u;
            goto label_1c6798;
        }
    }
    ctx->pc = 0x1C678Cu;
    // 0x1c678c: 0x0  nop
    ctx->pc = 0x1c678cu;
    // NOP
label_1c6790:
    // 0x1c6790: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1c6790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1c6794: 0x0  nop
    ctx->pc = 0x1c6794u;
    // NOP
label_1c6798:
    // 0x1c6798: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c679c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c679cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c67a0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c67a4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c67a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c67a8: 0xc071e8c  jal         func_1C7A30
    ctx->pc = 0x1C67A8u;
    SET_GPR_U32(ctx, 31, 0x1C67B0u);
    ctx->pc = 0x1C67ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67A8u;
            // 0x1c67ac: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A30u;
    if (runtime->hasFunction(0x1C7A30u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67B0u; }
        if (ctx->pc != 0x1C67B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D2_0x1c7a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C67B0u; }
        if (ctx->pc != 0x1C67B0u) { return; }
    }
    ctx->pc = 0x1C67B0u;
    // 0x1c67b0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c67b4: 0x28610032  slti        $at, $v1, 0x32
    ctx->pc = 0x1c67b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1c67b8: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C67B8u;
    {
        const bool branch_taken_0x1c67b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67B8u;
            // 0x1c67bc: 0x3c023cf5  lui         $v0, 0x3CF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67b8) {
            ctx->pc = 0x1C6860u;
            goto label_1c6860;
        }
    }
    ctx->pc = 0x1C67C0u;
    // 0x1c67c0: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c67c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c67c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c67c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c67c8: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c67c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c67cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c67d0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c67d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c67d4: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c67d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c67d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c67d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c67dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c67dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c67e0: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c67e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c67e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1c67e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c67e8: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1C67E8u;
    {
        const bool branch_taken_0x1c67e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67E8u;
            // 0x1c67ec: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67e8) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C67F0u;
    // 0x1c67f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c67f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c67f8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c67fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c67fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6800: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6800u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6804: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6804u;
    SET_GPR_U32(ctx, 31, 0x1C680Cu);
    ctx->pc = 0x1C6808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6804u;
            // 0x1c6808: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C680Cu; }
        if (ctx->pc != 0x1C680Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C680Cu; }
        if (ctx->pc != 0x1C680Cu) { return; }
    }
    ctx->pc = 0x1C680Cu;
    // 0x1c680c: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C680Cu;
    {
        const bool branch_taken_0x1c680c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c680c) {
            ctx->pc = 0x1C6830u;
            goto label_1c6830;
        }
    }
    ctx->pc = 0x1C6814u;
    // 0x1c6814: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6818: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c681c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c681cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6820: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6824: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6824u;
    SET_GPR_U32(ctx, 31, 0x1C682Cu);
    ctx->pc = 0x1C6828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6824u;
            // 0x1c6828: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C682Cu; }
        if (ctx->pc != 0x1C682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C682Cu; }
        if (ctx->pc != 0x1C682Cu) { return; }
    }
    ctx->pc = 0x1C682Cu;
    // 0x1c682c: 0x0  nop
    ctx->pc = 0x1c682cu;
    // NOP
label_1c6830:
    // 0x1c6830: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c6830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c6834: 0x1420008e  bnez        $at, . + 4 + (0x8E << 2)
    ctx->pc = 0x1C6834u;
    {
        const bool branch_taken_0x1c6834 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6834) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C683Cu;
    // 0x1c683c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c683cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6840: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c6840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6844: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6848: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c684c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C684Cu;
    SET_GPR_U32(ctx, 31, 0x1C6854u);
    ctx->pc = 0x1C6850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C684Cu;
            // 0x1c6850: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6854u; }
        if (ctx->pc != 0x1C6854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6854u; }
        if (ctx->pc != 0x1C6854u) { return; }
    }
    ctx->pc = 0x1C6854u;
    // 0x1c6854: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x1C6854u;
    {
        const bool branch_taken_0x1c6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6854) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C685Cu;
    // 0x1c685c: 0x0  nop
    ctx->pc = 0x1c685cu;
    // NOP
label_1c6860:
    // 0x1c6860: 0x28610064  slti        $at, $v1, 0x64
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1c6864: 0x1020002a  beqz        $at, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C6864u;
    {
        const bool branch_taken_0x1c6864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6864u;
            // 0x1c6868: 0x3c023d75  lui         $v0, 0x3D75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6864) {
            ctx->pc = 0x1C6910u;
            goto label_1c6910;
        }
    }
    ctx->pc = 0x1C686Cu;
    // 0x1c686c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c686cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c6870: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6874: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c6874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6878: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c687c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c687cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6880: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c6880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6884: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6888: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c6888u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c688c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c688cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c6890: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c6890u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6894: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6894u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6898: 0x14400075  bnez        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1C6898u;
    {
        const bool branch_taken_0x1c6898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C689Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6898u;
            // 0x1c689c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6898) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C68A0u;
    // 0x1c68a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c68a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c68a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c68a8: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c68a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c68ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c68acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c68b0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c68b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c68b4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C68B4u;
    SET_GPR_U32(ctx, 31, 0x1C68BCu);
    ctx->pc = 0x1C68B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68B4u;
            // 0x1c68b8: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68BCu; }
        if (ctx->pc != 0x1C68BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68BCu; }
        if (ctx->pc != 0x1C68BCu) { return; }
    }
    ctx->pc = 0x1C68BCu;
    // 0x1c68bc: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C68BCu;
    {
        const bool branch_taken_0x1c68bc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c68bc) {
            ctx->pc = 0x1C68E0u;
            goto label_1c68e0;
        }
    }
    ctx->pc = 0x1C68C4u;
    // 0x1c68c4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c68c8: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c68cc: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c68d0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c68d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c68d4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C68D4u;
    SET_GPR_U32(ctx, 31, 0x1C68DCu);
    ctx->pc = 0x1C68D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68D4u;
            // 0x1c68d8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68DCu; }
        if (ctx->pc != 0x1C68DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C68DCu; }
        if (ctx->pc != 0x1C68DCu) { return; }
    }
    ctx->pc = 0x1C68DCu;
    // 0x1c68dc: 0x0  nop
    ctx->pc = 0x1c68dcu;
    // NOP
label_1c68e0:
    // 0x1c68e0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c68e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c68e4: 0x14200062  bnez        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x1C68E4u;
    {
        const bool branch_taken_0x1c68e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c68e4) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C68ECu;
    // 0x1c68ec: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c68f0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c68f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c68f4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c68f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c68f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c68fc: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C68FCu;
    SET_GPR_U32(ctx, 31, 0x1C6904u);
    ctx->pc = 0x1C6900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68FCu;
            // 0x1c6900: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6904u; }
        if (ctx->pc != 0x1C6904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6904u; }
        if (ctx->pc != 0x1C6904u) { return; }
    }
    ctx->pc = 0x1C6904u;
    // 0x1c6904: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1C6904u;
    {
        const bool branch_taken_0x1c6904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6904) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C690Cu;
    // 0x1c690c: 0x0  nop
    ctx->pc = 0x1c690cu;
    // NOP
label_1c6910:
    // 0x1c6910: 0x28610096  slti        $at, $v1, 0x96
    ctx->pc = 0x1c6910u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1c6914: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1C6914u;
    {
        const bool branch_taken_0x1c6914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6914) {
            ctx->pc = 0x1C69C8u;
            goto label_1c69c8;
        }
    }
    ctx->pc = 0x1C691Cu;
    // 0x1c691c: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6920: 0x3c023db8  lui         $v0, 0x3DB8
    ctx->pc = 0x1c6920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15800 << 16));
    // 0x1c6924: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c6924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6928: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1c6928u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
    // 0x1c692c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c692cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6930: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1c6930u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x1c6934: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c6934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c6938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c6938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c693c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c693cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c6940: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6940u;
    {
        const bool branch_taken_0x1c6940 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C6944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6940u;
            // 0x1c6944: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6940) {
            ctx->pc = 0x1C6954u;
            goto label_1c6954;
        }
    }
    ctx->pc = 0x1C6948u;
    // 0x1c6948: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6948u;
    {
        const bool branch_taken_0x1c6948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6948) {
            ctx->pc = 0x1C6954u;
            goto label_1c6954;
        }
    }
    ctx->pc = 0x1C6950u;
    // 0x1c6950: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1c6950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_1c6954:
    // 0x1c6954: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1C6954u;
    {
        const bool branch_taken_0x1c6954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6954) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C695Cu;
    // 0x1c695c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c695cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6960: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6964: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6968: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c696c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c696cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6970: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6970u;
    SET_GPR_U32(ctx, 31, 0x1C6978u);
    ctx->pc = 0x1C6974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6970u;
            // 0x1c6974: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6978u; }
        if (ctx->pc != 0x1C6978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6978u; }
        if (ctx->pc != 0x1C6978u) { return; }
    }
    ctx->pc = 0x1C6978u;
    // 0x1c6978: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C6978u;
    {
        const bool branch_taken_0x1c6978 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c6978) {
            ctx->pc = 0x1C6998u;
            goto label_1c6998;
        }
    }
    ctx->pc = 0x1C6980u;
    // 0x1c6980: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6984: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c6984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c6988: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c698c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c698cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6990: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6990u;
    SET_GPR_U32(ctx, 31, 0x1C6998u);
    ctx->pc = 0x1C6994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6990u;
            // 0x1c6994: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6998u; }
        if (ctx->pc != 0x1C6998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6998u; }
        if (ctx->pc != 0x1C6998u) { return; }
    }
    ctx->pc = 0x1C6998u;
label_1c6998:
    // 0x1c6998: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c6998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c699c: 0x14200034  bnez        $at, . + 4 + (0x34 << 2)
    ctx->pc = 0x1C699Cu;
    {
        const bool branch_taken_0x1c699c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c699c) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C69A4u;
    // 0x1c69a4: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c69a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c69a8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c69ac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c69acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c69b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c69b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c69b4: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C69B4u;
    SET_GPR_U32(ctx, 31, 0x1C69BCu);
    ctx->pc = 0x1C69B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69B4u;
            // 0x1c69b8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69BCu; }
        if (ctx->pc != 0x1C69BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C69BCu; }
        if (ctx->pc != 0x1C69BCu) { return; }
    }
    ctx->pc = 0x1C69BCu;
    // 0x1c69bc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1C69BCu;
    {
        const bool branch_taken_0x1c69bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c69bc) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C69C4u;
    // 0x1c69c4: 0x0  nop
    ctx->pc = 0x1c69c4u;
    // NOP
label_1c69c8:
    // 0x1c69c8: 0x286100c8  slti        $at, $v1, 0xC8
    ctx->pc = 0x1c69c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1c69cc: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C69CCu;
    {
        const bool branch_taken_0x1c69cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69CCu;
            // 0x1c69d0: 0x3c023df5  lui         $v0, 0x3DF5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69cc) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C69D4u;
    // 0x1c69d4: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c69d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c69d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c69d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c69dc: 0xc6020110  lwc1        $f2, 0x110($s0)
    ctx->pc = 0x1c69dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c69e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c69e4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c69e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c69e8: 0xc6000120  lwc1        $f0, 0x120($s0)
    ctx->pc = 0x1c69e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c69ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c69ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1c69f0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1c69f0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1c69f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c69f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c69f8: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x1c69f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1c69fc: 0x1010  mfhi        $v0
    ctx->pc = 0x1c69fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6a00: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6A00u;
    {
        const bool branch_taken_0x1c6a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A00u;
            // 0x1c6a04: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6a00) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C6A08u;
    // 0x1c6a08: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c6a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6a0c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6a10: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6a14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6a18: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c6a18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c6a1c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A24u);
    ctx->pc = 0x1C6A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A1Cu;
            // 0x1c6a20: 0x2465fff6  addiu       $a1, $v1, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A24u; }
        if (ctx->pc != 0x1C6A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A24u; }
        if (ctx->pc != 0x1C6A24u) { return; }
    }
    ctx->pc = 0x1C6A24u;
    // 0x1c6a24: 0x1a400008  blez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6A24u;
    {
        const bool branch_taken_0x1c6a24 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x1c6a24) {
            ctx->pc = 0x1C6A48u;
            goto label_1c6a48;
        }
    }
    ctx->pc = 0x1C6A2Cu;
    // 0x1c6a2c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6a30: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x1c6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x1c6a34: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6a38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6a3c: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C6A44u);
    ctx->pc = 0x1C6A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A3Cu;
            // 0x1c6a40: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A44u; }
        if (ctx->pc != 0x1C6A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A44u; }
        if (ctx->pc != 0x1C6A44u) { return; }
    }
    ctx->pc = 0x1C6A44u;
    // 0x1c6a44: 0x0  nop
    ctx->pc = 0x1c6a44u;
    // NOP
label_1c6a48:
    // 0x1c6a48: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1c6a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c6a4c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6A4Cu;
    {
        const bool branch_taken_0x1c6a4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a4c) {
            ctx->pc = 0x1C6A70u;
            goto label_1c6a70;
        }
    }
    ctx->pc = 0x1C6A54u;
    // 0x1c6a54: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1c6a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6a58: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c6a5c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1c6a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6a60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1c6a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1c6a64: 0xc0655dc  jal         func_195770
    ctx->pc = 0x1C6A64u;
    SET_GPR_U32(ctx, 31, 0x1C6A6Cu);
    ctx->pc = 0x1C6A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A64u;
            // 0x1c6a68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A6Cu; }
        if (ctx->pc != 0x1C6A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6A6Cu; }
        if (ctx->pc != 0x1C6A6Cu) { return; }
    }
    ctx->pc = 0x1C6A6Cu;
    // 0x1c6a6c: 0x0  nop
    ctx->pc = 0x1c6a6cu;
    // NOP
label_1c6a70:
    // 0x1c6a70: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1c6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c6a74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6a78: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1c6a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x1c6a7c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6a80: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1c6a80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1c6a84: 0x142001d4  bnez        $at, . + 4 + (0x1D4 << 2)
    ctx->pc = 0x1C6A84u;
    {
        const bool branch_taken_0x1c6a84 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6a84) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6A8Cu;
    // 0x1c6a8c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c6a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c6a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6a94: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1c6a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1c6a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6a9c: 0xc071da0  jal         func_1C7680
    ctx->pc = 0x1C6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1C6AA4u);
    ctx->pc = 0x1C6AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A9Cu;
            // 0x1c6aa0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7680u;
    if (runtime->hasFunction(0x1C7680u)) {
        auto targetFn = runtime->lookupFunction(0x1C7680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AA4u; }
        if (ctx->pc != 0x1C6AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1c7680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AA4u; }
        if (ctx->pc != 0x1C6AA4u) { return; }
    }
    ctx->pc = 0x1C6AA4u;
    // 0x1c6aa4: 0x100001cc  b           . + 4 + (0x1CC << 2)
    ctx->pc = 0x1C6AA4u;
    {
        const bool branch_taken_0x1c6aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6aa4) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6AACu;
    // 0x1c6aac: 0x0  nop
    ctx->pc = 0x1c6aacu;
    // NOP
label_1c6ab0:
    // 0x1c6ab0: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1C6AB0u;
    SET_GPR_U32(ctx, 31, 0x1C6AB8u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AB8u; }
        if (ctx->pc != 0x1C6AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AB8u; }
        if (ctx->pc != 0x1C6AB8u) { return; }
    }
    ctx->pc = 0x1C6AB8u;
    // 0x1c6ab8: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1C6AB8u;
    SET_GPR_U32(ctx, 31, 0x1C6AC0u);
    ctx->pc = 0x1C6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AB8u;
            // 0x1c6abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC0u; }
        if (ctx->pc != 0x1C6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC0u; }
        if (ctx->pc != 0x1C6AC0u) { return; }
    }
    ctx->pc = 0x1C6AC0u;
    // 0x1c6ac0: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1C6AC0u;
    SET_GPR_U32(ctx, 31, 0x1C6AC8u);
    ctx->pc = 0x1C6AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6AC0u;
            // 0x1c6ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC8u; }
        if (ctx->pc != 0x1C6AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6AC8u; }
        if (ctx->pc != 0x1C6AC8u) { return; }
    }
    ctx->pc = 0x1C6AC8u;
    // 0x1c6ac8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c6ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6acc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1c6accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1c6ad0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1c6ad0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1c6ad4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1c6ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1c6ad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6adc: 0x0  nop
    ctx->pc = 0x1c6adcu;
    // NOP
    // 0x1c6ae0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6ae4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1c6ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1c6ae8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6aec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c6aecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c6af0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1c6af4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6af8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1c6af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c6afc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1c6afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c6b00: 0xc071e9c  jal         func_1C7A70
    ctx->pc = 0x1C6B00u;
    SET_GPR_U32(ctx, 31, 0x1C6B08u);
    ctx->pc = 0x1C6B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B00u;
            // 0x1c6b04: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7A70u;
    if (runtime->hasFunction(0x1C7A70u)) {
        auto targetFn = runtime->lookupFunction(0x1C7A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B08u; }
        if (ctx->pc != 0x1C6B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1c7a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B08u; }
        if (ctx->pc != 0x1C6B08u) { return; }
    }
    ctx->pc = 0x1C6B08u;
    // 0x1c6b08: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1c6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c6b0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c6b10: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1c6b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1c6b14: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1c6b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c6b18: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1c6b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1c6b1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c6b20: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c6b20u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c6b24: 0x0  nop
    ctx->pc = 0x1c6b24u;
    // NOP
    // 0x1c6b28: 0x0  nop
    ctx->pc = 0x1c6b28u;
    // NOP
    // 0x1c6b2c: 0x1010  mfhi        $v0
    ctx->pc = 0x1c6b2cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c6b30: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1C6B30u;
    {
        const bool branch_taken_0x1c6b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6b30) {
            ctx->pc = 0x1C6D58u;
            goto label_1c6d58;
        }
    }
    ctx->pc = 0x1C6B38u;
    // 0x1c6b38: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6B38u;
    SET_GPR_U32(ctx, 31, 0x1C6B40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B40u; }
        if (ctx->pc != 0x1C6B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B40u; }
        if (ctx->pc != 0x1C6B40u) { return; }
    }
    ctx->pc = 0x1C6B40u;
    // 0x1c6b40: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1c6b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1c6b44: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6b44u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6b48: 0x0  nop
    ctx->pc = 0x1c6b48u;
    // NOP
    // 0x1c6b4c: 0x0  nop
    ctx->pc = 0x1c6b4cu;
    // NOP
    // 0x1c6b50: 0x8810  mfhi        $s1
    ctx->pc = 0x1c6b50u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c6b54: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6B54u;
    SET_GPR_U32(ctx, 31, 0x1C6B5Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B5Cu; }
        if (ctx->pc != 0x1C6B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6B5Cu; }
        if (ctx->pc != 0x1C6B5Cu) { return; }
    }
    ctx->pc = 0x1C6B5Cu;
    // 0x1c6b5c: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c6b60: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c6b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6b64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6b64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6b68: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c6b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6b6c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b70: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6b74: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6b78: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6b7c: 0x9010  mfhi        $s2
    ctx->pc = 0x1c6b7cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1c6b80: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c6b84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6b84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6b88: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c6b88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c6b8c: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1c6b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c6b90: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1c6b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1c6b94: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1c6b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1c6b98: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1C6B98u;
    SET_GPR_U32(ctx, 31, 0x1C6BA0u);
    ctx->pc = 0x1C6B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6B98u;
            // 0x1c6b9c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BA0u; }
        if (ctx->pc != 0x1C6BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BA0u; }
        if (ctx->pc != 0x1C6BA0u) { return; }
    }
    ctx->pc = 0x1C6BA0u;
    // 0x1c6ba0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6ba4: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6ba8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6bac: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1c6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6bb0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c6bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6bb4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c6bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6bb8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c6bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c6bbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6bc0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6bc4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c6bc8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c6bc8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c6bcc: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c6bd0: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x1c6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6bd4: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C6BD4u;
    SET_GPR_U32(ctx, 31, 0x1C6BDCu);
    ctx->pc = 0x1C6BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6BD4u;
            // 0x1c6bd8: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BDCu; }
        if (ctx->pc != 0x1C6BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6BDCu; }
        if (ctx->pc != 0x1C6BDCu) { return; }
    }
    ctx->pc = 0x1C6BDCu;
    // 0x1c6bdc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6be0: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6be4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6be8: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6bec: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6bf0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6bf4: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c6bf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6bfc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6c00: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1c6c00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1c6c04: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c6c04u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c6c08: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c6c0c: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x1c6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c6c10: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C6C10u;
    SET_GPR_U32(ctx, 31, 0x1C6C18u);
    ctx->pc = 0x1C6C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C10u;
            // 0x1c6c14: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C18u; }
        if (ctx->pc != 0x1C6C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C18u; }
        if (ctx->pc != 0x1C6C18u) { return; }
    }
    ctx->pc = 0x1C6C18u;
    // 0x1c6c18: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6c1c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1c6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1c6c20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6c24: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c6c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c6c28: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c6c2c: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c6c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c6c30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c38: 0x0  nop
    ctx->pc = 0x1c6c38u;
    // NOP
    // 0x1c6c3c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c6c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c6c40: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C6C40u;
    SET_GPR_U32(ctx, 31, 0x1C6C48u);
    ctx->pc = 0x1C6C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C40u;
            // 0x1c6c44: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C48u; }
        if (ctx->pc != 0x1C6C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C48u; }
        if (ctx->pc != 0x1C6C48u) { return; }
    }
    ctx->pc = 0x1C6C48u;
    // 0x1c6c48: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6C48u;
    SET_GPR_U32(ctx, 31, 0x1C6C50u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C50u; }
        if (ctx->pc != 0x1C6C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C50u; }
        if (ctx->pc != 0x1C6C50u) { return; }
    }
    ctx->pc = 0x1C6C50u;
    // 0x1c6c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6c50u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c6c54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C6C54u;
    {
        const bool branch_taken_0x1c6c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c54) {
            ctx->pc = 0x1C6C90u;
            goto label_1c6c90;
        }
    }
    ctx->pc = 0x1C6C5Cu;
    // 0x1c6c5c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c6c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6c60: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1c6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c6c64: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c6c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6c68: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c6c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c6c6c: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c6c70: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c6c74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6c7c: 0x0  nop
    ctx->pc = 0x1c6c7cu;
    // NOP
    // 0x1c6c80: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c6c80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c6c84: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C6C84u;
    SET_GPR_U32(ctx, 31, 0x1C6C8Cu);
    ctx->pc = 0x1C6C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6C84u;
            // 0x1c6c88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C8Cu; }
        if (ctx->pc != 0x1C6C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C8Cu; }
        if (ctx->pc != 0x1C6C8Cu) { return; }
    }
    ctx->pc = 0x1C6C8Cu;
    // 0x1c6c8c: 0x0  nop
    ctx->pc = 0x1c6c8cu;
    // NOP
label_1c6c90:
    // 0x1c6c90: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6C90u;
    SET_GPR_U32(ctx, 31, 0x1C6C98u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C98u; }
        if (ctx->pc != 0x1C6C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6C98u; }
        if (ctx->pc != 0x1C6C98u) { return; }
    }
    ctx->pc = 0x1C6C98u;
    // 0x1c6c98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c6c98u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1c6c9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C6C9Cu;
    {
        const bool branch_taken_0x1c6c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6c9c) {
            ctx->pc = 0x1C6CD8u;
            goto label_1c6cd8;
        }
    }
    ctx->pc = 0x1C6CA4u;
    // 0x1c6ca4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1c6ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6ca8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1c6ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1c6cac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1c6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6cb0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c6cb4: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1c6cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1c6cb8: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1c6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1c6cbc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c6cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6cc4: 0x0  nop
    ctx->pc = 0x1c6cc4u;
    // NOP
    // 0x1c6cc8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1c6cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1c6ccc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1C6CCCu;
    SET_GPR_U32(ctx, 31, 0x1C6CD4u);
    ctx->pc = 0x1C6CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CCCu;
            // 0x1c6cd0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CD4u; }
        if (ctx->pc != 0x1C6CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CD4u; }
        if (ctx->pc != 0x1C6CD4u) { return; }
    }
    ctx->pc = 0x1C6CD4u;
    // 0x1c6cd4: 0x0  nop
    ctx->pc = 0x1c6cd4u;
    // NOP
label_1c6cd8:
    // 0x1c6cd8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1c6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6cdc: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1c6cdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1c6ce0: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C6CE0u;
    {
        const bool branch_taken_0x1c6ce0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6CE0u;
            // 0x1c6ce4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ce0) {
            ctx->pc = 0x1C6D58u;
            goto label_1c6d58;
        }
    }
    ctx->pc = 0x1C6CE8u;
    // 0x1c6ce8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6CE8u;
    SET_GPR_U32(ctx, 31, 0x1C6CF0u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CF0u; }
        if (ctx->pc != 0x1C6CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6CF0u; }
        if (ctx->pc != 0x1C6CF0u) { return; }
    }
    ctx->pc = 0x1C6CF0u;
    // 0x1c6cf0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6CF0u;
    {
        const bool branch_taken_0x1c6cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6cf0) {
            ctx->pc = 0x1C6D20u;
            goto label_1c6d20;
        }
    }
    ctx->pc = 0x1C6CF8u;
    // 0x1c6cf8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6CF8u;
    SET_GPR_U32(ctx, 31, 0x1C6D00u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D00u; }
        if (ctx->pc != 0x1C6D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D00u; }
        if (ctx->pc != 0x1C6D00u) { return; }
    }
    ctx->pc = 0x1C6D00u;
    // 0x1c6d00: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c6d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c6d04: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6d04u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6d08: 0x0  nop
    ctx->pc = 0x1c6d08u;
    // NOP
    // 0x1c6d0c: 0x0  nop
    ctx->pc = 0x1c6d0cu;
    // NOP
    // 0x1c6d10: 0x2810  mfhi        $a1
    ctx->pc = 0x1c6d10u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c6d14: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6D14u;
    SET_GPR_U32(ctx, 31, 0x1C6D1Cu);
    ctx->pc = 0x1C6D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D14u;
            // 0x1c6d18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D1Cu; }
        if (ctx->pc != 0x1C6D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D1Cu; }
        if (ctx->pc != 0x1C6D1Cu) { return; }
    }
    ctx->pc = 0x1C6D1Cu;
    // 0x1c6d1c: 0x0  nop
    ctx->pc = 0x1c6d1cu;
    // NOP
label_1c6d20:
    // 0x1c6d20: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6D20u;
    SET_GPR_U32(ctx, 31, 0x1C6D28u);
    ctx->pc = 0x1C6D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D20u;
            // 0x1c6d24: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D28u; }
        if (ctx->pc != 0x1C6D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D28u; }
        if (ctx->pc != 0x1C6D28u) { return; }
    }
    ctx->pc = 0x1C6D28u;
    // 0x1c6d28: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C6D28u;
    {
        const bool branch_taken_0x1c6d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d28) {
            ctx->pc = 0x1C6D58u;
            goto label_1c6d58;
        }
    }
    ctx->pc = 0x1C6D30u;
    // 0x1c6d30: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6D30u;
    SET_GPR_U32(ctx, 31, 0x1C6D38u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D38u; }
        if (ctx->pc != 0x1C6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D38u; }
        if (ctx->pc != 0x1C6D38u) { return; }
    }
    ctx->pc = 0x1C6D38u;
    // 0x1c6d38: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1c6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c6d3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6d3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6d40: 0x0  nop
    ctx->pc = 0x1c6d40u;
    // NOP
    // 0x1c6d44: 0x0  nop
    ctx->pc = 0x1c6d44u;
    // NOP
    // 0x1c6d48: 0x2810  mfhi        $a1
    ctx->pc = 0x1c6d48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1c6d4c: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1C6D54u);
    ctx->pc = 0x1C6D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D4Cu;
            // 0x1c6d50: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D54u; }
        if (ctx->pc != 0x1C6D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D54u; }
        if (ctx->pc != 0x1C6D54u) { return; }
    }
    ctx->pc = 0x1C6D54u;
    // 0x1c6d54: 0x0  nop
    ctx->pc = 0x1c6d54u;
    // NOP
label_1c6d58:
    // 0x1c6d58: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c6d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6d5c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1c6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1c6d60: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6D60u;
    {
        const bool branch_taken_0x1c6d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D60u;
            // 0x1c6d64: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d60) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6D68u;
    // 0x1c6d68: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C6D68u;
    SET_GPR_U32(ctx, 31, 0x1C6D70u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D70u; }
        if (ctx->pc != 0x1C6D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D70u; }
        if (ctx->pc != 0x1C6D70u) { return; }
    }
    ctx->pc = 0x1C6D70u;
    // 0x1c6d70: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C6D70u;
    SET_GPR_U32(ctx, 31, 0x1C6D78u);
    ctx->pc = 0x1C6D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D70u;
            // 0x1c6d74: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D78u; }
        if (ctx->pc != 0x1C6D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D78u; }
        if (ctx->pc != 0x1C6D78u) { return; }
    }
    ctx->pc = 0x1C6D78u;
    // 0x1c6d78: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6D78u;
    SET_GPR_U32(ctx, 31, 0x1C6D80u);
    ctx->pc = 0x1C6D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D78u;
            // 0x1c6d7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D80u; }
        if (ctx->pc != 0x1C6D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D80u; }
        if (ctx->pc != 0x1C6D80u) { return; }
    }
    ctx->pc = 0x1C6D80u;
    // 0x1c6d80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D80u;
    {
        const bool branch_taken_0x1c6d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D80u;
            // 0x1c6d84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d80) {
            ctx->pc = 0x1C6D90u;
            goto label_1c6d90;
        }
    }
    ctx->pc = 0x1C6D88u;
    // 0x1c6d88: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6D88u;
    SET_GPR_U32(ctx, 31, 0x1C6D90u);
    ctx->pc = 0x1C6D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D88u;
            // 0x1c6d8c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D90u; }
        if (ctx->pc != 0x1C6D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D90u; }
        if (ctx->pc != 0x1C6D90u) { return; }
    }
    ctx->pc = 0x1C6D90u;
label_1c6d90:
    // 0x1c6d90: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6D90u;
    SET_GPR_U32(ctx, 31, 0x1C6D98u);
    ctx->pc = 0x1C6D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D90u;
            // 0x1c6d94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D98u; }
        if (ctx->pc != 0x1C6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6D98u; }
        if (ctx->pc != 0x1C6D98u) { return; }
    }
    ctx->pc = 0x1C6D98u;
    // 0x1c6d98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D98u;
            // 0x1c6d9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6DA0u;
    // 0x1c6da0: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6DA0u;
    SET_GPR_U32(ctx, 31, 0x1C6DA8u);
    ctx->pc = 0x1C6DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DA0u;
            // 0x1c6da4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DA8u; }
        if (ctx->pc != 0x1C6DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DA8u; }
        if (ctx->pc != 0x1C6DA8u) { return; }
    }
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c6da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6dac: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1c6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1c6db0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6DB0u;
    {
        const bool branch_taken_0x1c6db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DB0u;
            // 0x1c6db4: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6db0) {
            ctx->pc = 0x1C6E20u;
            goto label_1c6e20;
        }
    }
    ctx->pc = 0x1C6DB8u;
    // 0x1c6db8: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C6DB8u;
    SET_GPR_U32(ctx, 31, 0x1C6DC0u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DC0u; }
        if (ctx->pc != 0x1C6DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DC0u; }
        if (ctx->pc != 0x1C6DC0u) { return; }
    }
    ctx->pc = 0x1C6DC0u;
    // 0x1c6dc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6dc4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6dc8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c6dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6dcc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6dccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c6dd0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6dd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6dd4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c6dd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c6dd8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c6dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c6ddc: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1C6DDCu;
    SET_GPR_U32(ctx, 31, 0x1C6DE4u);
    ctx->pc = 0x1C6DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DDCu;
            // 0x1c6de0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DE4u; }
        if (ctx->pc != 0x1C6DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DE4u; }
        if (ctx->pc != 0x1C6DE4u) { return; }
    }
    ctx->pc = 0x1C6DE4u;
    // 0x1c6de4: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C6DE4u;
    SET_GPR_U32(ctx, 31, 0x1C6DECu);
    ctx->pc = 0x1C6DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DE4u;
            // 0x1c6de8: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DECu; }
        if (ctx->pc != 0x1C6DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DECu; }
        if (ctx->pc != 0x1C6DECu) { return; }
    }
    ctx->pc = 0x1C6DECu;
    // 0x1c6dec: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6DECu;
    SET_GPR_U32(ctx, 31, 0x1C6DF4u);
    ctx->pc = 0x1C6DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DECu;
            // 0x1c6df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DF4u; }
        if (ctx->pc != 0x1C6DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DF4u; }
        if (ctx->pc != 0x1C6DF4u) { return; }
    }
    ctx->pc = 0x1C6DF4u;
    // 0x1c6df4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6DF4u;
    {
        const bool branch_taken_0x1c6df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DF4u;
            // 0x1c6df8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6df4) {
            ctx->pc = 0x1C6E08u;
            goto label_1c6e08;
        }
    }
    ctx->pc = 0x1C6DFCu;
    // 0x1c6dfc: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6DFCu;
    SET_GPR_U32(ctx, 31, 0x1C6E04u);
    ctx->pc = 0x1C6E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DFCu;
            // 0x1c6e00: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E04u; }
        if (ctx->pc != 0x1C6E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E04u; }
        if (ctx->pc != 0x1C6E04u) { return; }
    }
    ctx->pc = 0x1C6E04u;
    // 0x1c6e04: 0x0  nop
    ctx->pc = 0x1c6e04u;
    // NOP
label_1c6e08:
    // 0x1c6e08: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6E08u;
    SET_GPR_U32(ctx, 31, 0x1C6E10u);
    ctx->pc = 0x1C6E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E08u;
            // 0x1c6e0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E10u; }
        if (ctx->pc != 0x1C6E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E10u; }
        if (ctx->pc != 0x1C6E10u) { return; }
    }
    ctx->pc = 0x1C6E10u;
    // 0x1c6e10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6E10u;
    {
        const bool branch_taken_0x1c6e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E10u;
            // 0x1c6e14: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e10) {
            ctx->pc = 0x1C6E20u;
            goto label_1c6e20;
        }
    }
    ctx->pc = 0x1C6E18u;
    // 0x1c6e18: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6E18u;
    SET_GPR_U32(ctx, 31, 0x1C6E20u);
    ctx->pc = 0x1C6E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E18u;
            // 0x1c6e1c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E20u; }
        if (ctx->pc != 0x1C6E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E20u; }
        if (ctx->pc != 0x1C6E20u) { return; }
    }
    ctx->pc = 0x1C6E20u;
label_1c6e20:
    // 0x1c6e20: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c6e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6e24: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1c6e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1c6e28: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6E28u;
    {
        const bool branch_taken_0x1c6e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E28u;
            // 0x1c6e2c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e28) {
            ctx->pc = 0x1C6E70u;
            goto label_1c6e70;
        }
    }
    ctx->pc = 0x1C6E30u;
    // 0x1c6e30: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C6E30u;
    SET_GPR_U32(ctx, 31, 0x1C6E38u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E38u; }
        if (ctx->pc != 0x1C6E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E38u; }
        if (ctx->pc != 0x1C6E38u) { return; }
    }
    ctx->pc = 0x1C6E38u;
    // 0x1c6e38: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C6E38u;
    SET_GPR_U32(ctx, 31, 0x1C6E40u);
    ctx->pc = 0x1C6E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E38u;
            // 0x1c6e3c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E40u; }
        if (ctx->pc != 0x1C6E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E40u; }
        if (ctx->pc != 0x1C6E40u) { return; }
    }
    ctx->pc = 0x1C6E40u;
    // 0x1c6e40: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6E40u;
    SET_GPR_U32(ctx, 31, 0x1C6E48u);
    ctx->pc = 0x1C6E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E40u;
            // 0x1c6e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E48u; }
        if (ctx->pc != 0x1C6E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E48u; }
        if (ctx->pc != 0x1C6E48u) { return; }
    }
    ctx->pc = 0x1C6E48u;
    // 0x1c6e48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6E48u;
    {
        const bool branch_taken_0x1c6e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E48u;
            // 0x1c6e4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e48) {
            ctx->pc = 0x1C6E58u;
            goto label_1c6e58;
        }
    }
    ctx->pc = 0x1C6E50u;
    // 0x1c6e50: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6E50u;
    SET_GPR_U32(ctx, 31, 0x1C6E58u);
    ctx->pc = 0x1C6E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E50u;
            // 0x1c6e54: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E58u; }
        if (ctx->pc != 0x1C6E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E58u; }
        if (ctx->pc != 0x1C6E58u) { return; }
    }
    ctx->pc = 0x1C6E58u;
label_1c6e58:
    // 0x1c6e58: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6E58u;
    SET_GPR_U32(ctx, 31, 0x1C6E60u);
    ctx->pc = 0x1C6E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E58u;
            // 0x1c6e5c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E60u; }
        if (ctx->pc != 0x1C6E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E60u; }
        if (ctx->pc != 0x1C6E60u) { return; }
    }
    ctx->pc = 0x1C6E60u;
    // 0x1c6e60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6E60u;
    {
        const bool branch_taken_0x1c6e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E60u;
            // 0x1c6e64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e60) {
            ctx->pc = 0x1C6E70u;
            goto label_1c6e70;
        }
    }
    ctx->pc = 0x1C6E68u;
    // 0x1c6e68: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6E68u;
    SET_GPR_U32(ctx, 31, 0x1C6E70u);
    ctx->pc = 0x1C6E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E68u;
            // 0x1c6e6c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E70u; }
        if (ctx->pc != 0x1C6E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E70u; }
        if (ctx->pc != 0x1C6E70u) { return; }
    }
    ctx->pc = 0x1C6E70u;
label_1c6e70:
    // 0x1c6e70: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c6e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6e74: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1c6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1c6e78: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6E78u;
    {
        const bool branch_taken_0x1c6e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E78u;
            // 0x1c6e7c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e78) {
            ctx->pc = 0x1C6EE8u;
            goto label_1c6ee8;
        }
    }
    ctx->pc = 0x1C6E80u;
    // 0x1c6e80: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C6E80u;
    SET_GPR_U32(ctx, 31, 0x1C6E88u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E88u; }
        if (ctx->pc != 0x1C6E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E88u; }
        if (ctx->pc != 0x1C6E88u) { return; }
    }
    ctx->pc = 0x1C6E88u;
    // 0x1c6e88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6e8c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1c6e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6e90: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c6e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6e94: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6e94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c6e98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c6e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c6e9c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1c6e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1c6ea0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1c6ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1c6ea4: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1C6EA4u;
    SET_GPR_U32(ctx, 31, 0x1C6EACu);
    ctx->pc = 0x1C6EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EA4u;
            // 0x1c6ea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EACu; }
        if (ctx->pc != 0x1C6EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EACu; }
        if (ctx->pc != 0x1C6EACu) { return; }
    }
    ctx->pc = 0x1C6EACu;
    // 0x1c6eac: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C6EACu;
    SET_GPR_U32(ctx, 31, 0x1C6EB4u);
    ctx->pc = 0x1C6EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EACu;
            // 0x1c6eb0: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EB4u; }
        if (ctx->pc != 0x1C6EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EB4u; }
        if (ctx->pc != 0x1C6EB4u) { return; }
    }
    ctx->pc = 0x1C6EB4u;
    // 0x1c6eb4: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6EB4u;
    SET_GPR_U32(ctx, 31, 0x1C6EBCu);
    ctx->pc = 0x1C6EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EB4u;
            // 0x1c6eb8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EBCu; }
        if (ctx->pc != 0x1C6EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EBCu; }
        if (ctx->pc != 0x1C6EBCu) { return; }
    }
    ctx->pc = 0x1C6EBCu;
    // 0x1c6ebc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6EBCu;
    {
        const bool branch_taken_0x1c6ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EBCu;
            // 0x1c6ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ebc) {
            ctx->pc = 0x1C6ED0u;
            goto label_1c6ed0;
        }
    }
    ctx->pc = 0x1C6EC4u;
    // 0x1c6ec4: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6EC4u;
    SET_GPR_U32(ctx, 31, 0x1C6ECCu);
    ctx->pc = 0x1C6EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EC4u;
            // 0x1c6ec8: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ECCu; }
        if (ctx->pc != 0x1C6ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ECCu; }
        if (ctx->pc != 0x1C6ECCu) { return; }
    }
    ctx->pc = 0x1C6ECCu;
    // 0x1c6ecc: 0x0  nop
    ctx->pc = 0x1c6eccu;
    // NOP
label_1c6ed0:
    // 0x1c6ed0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1C6ED0u;
    SET_GPR_U32(ctx, 31, 0x1C6ED8u);
    ctx->pc = 0x1C6ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ED0u;
            // 0x1c6ed4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ED8u; }
        if (ctx->pc != 0x1C6ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6ED8u; }
        if (ctx->pc != 0x1C6ED8u) { return; }
    }
    ctx->pc = 0x1C6ED8u;
    // 0x1c6ed8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6ED8u;
    {
        const bool branch_taken_0x1c6ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6ED8u;
            // 0x1c6edc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ed8) {
            ctx->pc = 0x1C6EE8u;
            goto label_1c6ee8;
        }
    }
    ctx->pc = 0x1C6EE0u;
    // 0x1c6ee0: 0xc055124  jal         func_154490
    ctx->pc = 0x1C6EE0u;
    SET_GPR_U32(ctx, 31, 0x1C6EE8u);
    ctx->pc = 0x1C6EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EE0u;
            // 0x1c6ee4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EE8u; }
        if (ctx->pc != 0x1C6EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6EE8u; }
        if (ctx->pc != 0x1C6EE8u) { return; }
    }
    ctx->pc = 0x1C6EE8u;
label_1c6ee8:
    // 0x1c6ee8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1c6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1c6eec: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c6ef0: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1c6ef0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1c6ef4: 0x142000b8  bnez        $at, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1C6EF4u;
    {
        const bool branch_taken_0x1c6ef4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6EF4u;
            // 0x1c6ef8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ef4) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6EFCu;
    // 0x1c6efc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6f00: 0xc060718  jal         func_181C60
    ctx->pc = 0x1C6F00u;
    SET_GPR_U32(ctx, 31, 0x1C6F08u);
    ctx->pc = 0x1C6F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F00u;
            // 0x1c6f04: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F08u; }
        if (ctx->pc != 0x1C6F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F08u; }
        if (ctx->pc != 0x1C6F08u) { return; }
    }
    ctx->pc = 0x1C6F08u;
    // 0x1c6f08: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c6f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6f0c: 0x0  nop
    ctx->pc = 0x1c6f0cu;
    // NOP
label_1c6f10:
    // 0x1c6f10: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6F10u;
    SET_GPR_U32(ctx, 31, 0x1C6F18u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F18u; }
        if (ctx->pc != 0x1C6F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F18u; }
        if (ctx->pc != 0x1C6F18u) { return; }
    }
    ctx->pc = 0x1C6F18u;
    // 0x1c6f18: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1c6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1c6f1c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6f1cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6f20: 0x0  nop
    ctx->pc = 0x1c6f20u;
    // NOP
    // 0x1c6f24: 0x0  nop
    ctx->pc = 0x1c6f24u;
    // NOP
    // 0x1c6f28: 0x9810  mfhi        $s3
    ctx->pc = 0x1c6f28u;
    SET_GPR_U64(ctx, 19, ctx->hi);
    // 0x1c6f2c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1C6F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C6F34u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F34u; }
        if (ctx->pc != 0x1C6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F34u; }
        if (ctx->pc != 0x1C6F34u) { return; }
    }
    ctx->pc = 0x1C6F34u;
    // 0x1c6f34: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1c6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1c6f38: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6f3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1c6f3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1c6f40: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c6f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6f44: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f48: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6f4c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6f50: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6f54: 0x8810  mfhi        $s1
    ctx->pc = 0x1c6f54u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1c6f58: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c6f5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f60: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c6f60u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c6f64: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1c6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c6f68: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6f6c: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c6f70: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c6f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c6f74: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1C6F74u;
    SET_GPR_U32(ctx, 31, 0x1C6F7Cu);
    ctx->pc = 0x1C6F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6F74u;
            // 0x1c6f78: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F7Cu; }
        if (ctx->pc != 0x1C6F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6F7Cu; }
        if (ctx->pc != 0x1C6F7Cu) { return; }
    }
    ctx->pc = 0x1C6F7Cu;
    // 0x1c6f7c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1c6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1c6f80: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1c6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1c6f84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1c6f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c6f88: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1c6f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1c6f8c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1c6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c6f90: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1c6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1c6f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c6f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6f98: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1c6f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6f9c: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1c6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1c6fa0: 0x532023  subu        $a0, $v0, $s3
    ctx->pc = 0x1c6fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c6fa4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1c6fa4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1c6fa8: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1c6fac: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1c6facu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1c6fb0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1C6FB0u;
    SET_GPR_U32(ctx, 31, 0x1C6FB8u);
    ctx->pc = 0x1C6FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FB0u;
            // 0x1c6fb4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FB8u; }
        if (ctx->pc != 0x1C6FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6FB8u; }
        if (ctx->pc != 0x1C6FB8u) { return; }
    }
    ctx->pc = 0x1C6FB8u;
    // 0x1c6fb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c6fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c6fbc: 0x2a42003c  slti        $v0, $s2, 0x3C
    ctx->pc = 0x1c6fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1c6fc0: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1C6FC0u;
    {
        const bool branch_taken_0x1c6fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FC0u;
            // 0x1c6fc4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fc0) {
            ctx->pc = 0x1C6F10u;
            goto label_1c6f10;
        }
    }
    ctx->pc = 0x1C6FC8u;
    // 0x1c6fc8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c6fc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1c6fcc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c6fd0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c6fd4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x1C6FD4u;
    {
        const bool branch_taken_0x1c6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6FD4u;
            // 0x1c6fd8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6fd4) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C6FDCu;
    // 0x1c6fdc: 0x0  nop
    ctx->pc = 0x1c6fdcu;
    // NOP
label_1c6fe0:
    // 0x1c6fe0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6fe4: 0x3c034302  lui         $v1, 0x4302
    ctx->pc = 0x1c6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17154 << 16));
    // 0x1c6fe8: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1c6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1c6fec: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c6fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c6ff0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6ff4: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1c6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1c6ff8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c6ffc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7000: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1c7000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1c7004: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1c7004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1c7008: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c7008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c700c: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1c700cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1c7010: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1c7010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1c7014: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1c7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c7018: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7018u;
    {
        const bool branch_taken_0x1c7018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7018u;
            // 0x1c701c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7018) {
            ctx->pc = 0x1C7028u;
            goto label_1c7028;
        }
    }
    ctx->pc = 0x1C7020u;
    // 0x1c7020: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7020u;
    SET_GPR_U32(ctx, 31, 0x1C7028u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7028u; }
        if (ctx->pc != 0x1C7028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7028u; }
        if (ctx->pc != 0x1C7028u) { return; }
    }
    ctx->pc = 0x1C7028u;
label_1c7028:
    // 0x1c7028: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c702c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7030: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7030u;
    {
        const bool branch_taken_0x1c7030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7030u;
            // 0x1c7034: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7030) {
            ctx->pc = 0x1C7040u;
            goto label_1c7040;
        }
    }
    ctx->pc = 0x1C7038u;
    // 0x1c7038: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7038u;
    SET_GPR_U32(ctx, 31, 0x1C7040u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7040u; }
        if (ctx->pc != 0x1C7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7040u; }
        if (ctx->pc != 0x1C7040u) { return; }
    }
    ctx->pc = 0x1C7040u;
label_1c7040:
    // 0x1c7040: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c7044: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7048: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7048u;
    {
        const bool branch_taken_0x1c7048 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C704Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7048u;
            // 0x1c704c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7048) {
            ctx->pc = 0x1C7058u;
            goto label_1c7058;
        }
    }
    ctx->pc = 0x1C7050u;
    // 0x1c7050: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7050u;
    SET_GPR_U32(ctx, 31, 0x1C7058u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7058u; }
        if (ctx->pc != 0x1C7058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7058u; }
        if (ctx->pc != 0x1C7058u) { return; }
    }
    ctx->pc = 0x1C7058u;
label_1c7058:
    // 0x1c7058: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c705c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7060: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7060u;
    {
        const bool branch_taken_0x1c7060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7060u;
            // 0x1c7064: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7060) {
            ctx->pc = 0x1C7070u;
            goto label_1c7070;
        }
    }
    ctx->pc = 0x1C7068u;
    // 0x1c7068: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7068u;
    SET_GPR_U32(ctx, 31, 0x1C7070u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7070u; }
        if (ctx->pc != 0x1C7070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7070u; }
        if (ctx->pc != 0x1C7070u) { return; }
    }
    ctx->pc = 0x1C7070u;
label_1c7070:
    // 0x1c7070: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c7074: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c7074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c7078: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7078u;
    {
        const bool branch_taken_0x1c7078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7078u;
            // 0x1c707c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7078) {
            ctx->pc = 0x1C7088u;
            goto label_1c7088;
        }
    }
    ctx->pc = 0x1C7080u;
    // 0x1c7080: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7080u;
    SET_GPR_U32(ctx, 31, 0x1C7088u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7088u; }
        if (ctx->pc != 0x1C7088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7088u; }
        if (ctx->pc != 0x1C7088u) { return; }
    }
    ctx->pc = 0x1C7088u;
label_1c7088:
    // 0x1c7088: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c708c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7090: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7090u;
    {
        const bool branch_taken_0x1c7090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7090u;
            // 0x1c7094: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7090) {
            ctx->pc = 0x1C70A0u;
            goto label_1c70a0;
        }
    }
    ctx->pc = 0x1C7098u;
    // 0x1c7098: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C7098u;
    SET_GPR_U32(ctx, 31, 0x1C70A0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70A0u; }
        if (ctx->pc != 0x1C70A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70A0u; }
        if (ctx->pc != 0x1C70A0u) { return; }
    }
    ctx->pc = 0x1C70A0u;
label_1c70a0:
    // 0x1c70a0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c70a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c70a4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1c70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1c70a8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C70A8u;
    {
        const bool branch_taken_0x1c70a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70A8u;
            // 0x1c70ac: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70a8) {
            ctx->pc = 0x1C70B8u;
            goto label_1c70b8;
        }
    }
    ctx->pc = 0x1C70B0u;
    // 0x1c70b0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C70B0u;
    SET_GPR_U32(ctx, 31, 0x1C70B8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70B8u; }
        if (ctx->pc != 0x1C70B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70B8u; }
        if (ctx->pc != 0x1C70B8u) { return; }
    }
    ctx->pc = 0x1C70B8u;
label_1c70b8:
    // 0x1c70b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c70bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c70c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C70C0u;
    {
        const bool branch_taken_0x1c70c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70C0u;
            // 0x1c70c4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70c0) {
            ctx->pc = 0x1C70D0u;
            goto label_1c70d0;
        }
    }
    ctx->pc = 0x1C70C8u;
    // 0x1c70c8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C70C8u;
    SET_GPR_U32(ctx, 31, 0x1C70D0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70D0u; }
        if (ctx->pc != 0x1C70D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70D0u; }
        if (ctx->pc != 0x1C70D0u) { return; }
    }
    ctx->pc = 0x1C70D0u;
label_1c70d0:
    // 0x1c70d0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c70d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c70d4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1c70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c70d8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C70D8u;
    {
        const bool branch_taken_0x1c70d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C70DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C70D8u;
            // 0x1c70dc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c70d8) {
            ctx->pc = 0x1C70E8u;
            goto label_1c70e8;
        }
    }
    ctx->pc = 0x1C70E0u;
    // 0x1c70e0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1C70E0u;
    SET_GPR_U32(ctx, 31, 0x1C70E8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70E8u; }
        if (ctx->pc != 0x1C70E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C70E8u; }
        if (ctx->pc != 0x1C70E8u) { return; }
    }
    ctx->pc = 0x1C70E8u;
label_1c70e8:
    // 0x1c70e8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c70ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1c70ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c70f0: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1C70F0u;
    {
        const bool branch_taken_0x1c70f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c70f0) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C70F8u;
    // 0x1c70f8: 0xc056054  jal         func_158150
    ctx->pc = 0x1C70F8u;
    SET_GPR_U32(ctx, 31, 0x1C7100u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7100u; }
        if (ctx->pc != 0x1C7100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7100u; }
        if (ctx->pc != 0x1C7100u) { return; }
    }
    ctx->pc = 0x1C7100u;
    // 0x1c7100: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1C7100u;
    SET_GPR_U32(ctx, 31, 0x1C7108u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7108u; }
        if (ctx->pc != 0x1C7108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7108u; }
        if (ctx->pc != 0x1C7108u) { return; }
    }
    ctx->pc = 0x1C7108u;
    // 0x1c7108: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1C7108u;
    SET_GPR_U32(ctx, 31, 0x1C7110u);
    ctx->pc = 0x1C710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7108u;
            // 0x1c710c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7110u; }
        if (ctx->pc != 0x1C7110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7110u; }
        if (ctx->pc != 0x1C7110u) { return; }
    }
    ctx->pc = 0x1C7110u;
    // 0x1c7110: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1C7110u;
    SET_GPR_U32(ctx, 31, 0x1C7118u);
    ctx->pc = 0x1C7114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7110u;
            // 0x1c7114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7118u; }
        if (ctx->pc != 0x1C7118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7118u; }
        if (ctx->pc != 0x1C7118u) { return; }
    }
    ctx->pc = 0x1C7118u;
    // 0x1c7118: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1C7118u;
    SET_GPR_U32(ctx, 31, 0x1C7120u);
    ctx->pc = 0x1C711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7118u;
            // 0x1c711c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7120u; }
        if (ctx->pc != 0x1C7120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7120u; }
        if (ctx->pc != 0x1C7120u) { return; }
    }
    ctx->pc = 0x1C7120u;
    // 0x1c7120: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x1C7120u;
    {
        const bool branch_taken_0x1c7120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7120) {
            ctx->pc = 0x1C7660u;
            goto label_1c7660;
        }
    }
    ctx->pc = 0x1C7128u;
label_1c7128:
    // 0x1c7128: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1C7128u;
    SET_GPR_U32(ctx, 31, 0x1C7130u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7130u; }
        if (ctx->pc != 0x1C7130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7130u; }
        if (ctx->pc != 0x1C7130u) { return; }
    }
    ctx->pc = 0x1C7130u;
    // 0x1c7130: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7134: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1c7138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c713c: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1c713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7140: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7140u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7144: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1C7144u;
    {
        const bool branch_taken_0x1c7144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7144u;
            // 0x1c7148: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7144) {
            ctx->pc = 0x1C7170u;
            goto label_1c7170;
        }
    }
    ctx->pc = 0x1C714Cu;
    // 0x1c714c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1c714cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7150: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1c7154: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1c7154u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1c7158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c715c: 0x0  nop
    ctx->pc = 0x1c715cu;
    // NOP
    // 0x1c7160: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1c7160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c7164: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C7164u;
    {
        const bool branch_taken_0x1c7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7164u;
            // 0x1c7168: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7164) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C716Cu;
    // 0x1c716c: 0x0  nop
    ctx->pc = 0x1c716cu;
    // NOP
label_1c7170:
    // 0x1c7170: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1c7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1c7174: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1c7174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1c7178: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1c7178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1c717c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c717cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1c7180: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1c7180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1c7184: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1c7184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1c7188: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c7188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c718c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C718Cu;
    {
        const bool branch_taken_0x1c718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C718Cu;
            // 0x1c7190: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c718c) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C7194u;
    // 0x1c7194: 0x0  nop
    ctx->pc = 0x1c7194u;
    // NOP
label_1c7198:
    // 0x1c7198: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c719c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c71a0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C71A0u;
    {
        const bool branch_taken_0x1c71a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c71a0) {
            ctx->pc = 0x1C71D8u;
            goto label_1c71d8;
        }
    }
    ctx->pc = 0x1C71A8u;
    // 0x1c71a8: 0xc056054  jal         func_158150
    ctx->pc = 0x1C71A8u;
    SET_GPR_U32(ctx, 31, 0x1C71B0u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71B0u; }
        if (ctx->pc != 0x1C71B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71B0u; }
        if (ctx->pc != 0x1C71B0u) { return; }
    }
    ctx->pc = 0x1C71B0u;
    // 0x1c71b0: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1C71B0u;
    SET_GPR_U32(ctx, 31, 0x1C71B8u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71B8u; }
        if (ctx->pc != 0x1C71B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71B8u; }
        if (ctx->pc != 0x1C71B8u) { return; }
    }
    ctx->pc = 0x1C71B8u;
    // 0x1c71b8: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1C71B8u;
    SET_GPR_U32(ctx, 31, 0x1C71C0u);
    ctx->pc = 0x1C71BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71B8u;
            // 0x1c71bc: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71C0u; }
        if (ctx->pc != 0x1C71C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71C0u; }
        if (ctx->pc != 0x1C71C0u) { return; }
    }
    ctx->pc = 0x1C71C0u;
    // 0x1c71c0: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1C71C0u;
    SET_GPR_U32(ctx, 31, 0x1C71C8u);
    ctx->pc = 0x1C71C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71C0u;
            // 0x1c71c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71C8u; }
        if (ctx->pc != 0x1C71C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71C8u; }
        if (ctx->pc != 0x1C71C8u) { return; }
    }
    ctx->pc = 0x1C71C8u;
    // 0x1c71c8: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1C71C8u;
    SET_GPR_U32(ctx, 31, 0x1C71D0u);
    ctx->pc = 0x1C71CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71C8u;
            // 0x1c71cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71D0u; }
        if (ctx->pc != 0x1C71D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71D0u; }
        if (ctx->pc != 0x1C71D0u) { return; }
    }
    ctx->pc = 0x1C71D0u;
    // 0x1c71d0: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1C71D0u;
    {
        const bool branch_taken_0x1c71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c71d0) {
            ctx->pc = 0x1C7660u;
            goto label_1c7660;
        }
    }
    ctx->pc = 0x1C71D8u;
label_1c71d8:
    // 0x1c71d8: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1C71D8u;
    SET_GPR_U32(ctx, 31, 0x1C71E0u);
    ctx->pc = 0x1C71DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71D8u;
            // 0x1c71dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E0u; }
        if (ctx->pc != 0x1C71E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E0u; }
        if (ctx->pc != 0x1C71E0u) { return; }
    }
    ctx->pc = 0x1C71E0u;
    // 0x1c71e0: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1C71E0u;
    SET_GPR_U32(ctx, 31, 0x1C71E8u);
    ctx->pc = 0x1C71E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71E0u;
            // 0x1c71e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E8u; }
        if (ctx->pc != 0x1C71E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71E8u; }
        if (ctx->pc != 0x1C71E8u) { return; }
    }
    ctx->pc = 0x1C71E8u;
    // 0x1c71e8: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1C71E8u;
    SET_GPR_U32(ctx, 31, 0x1C71F0u);
    ctx->pc = 0x1C71ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71E8u;
            // 0x1c71ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71F0u; }
        if (ctx->pc != 0x1C71F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C71F0u; }
        if (ctx->pc != 0x1C71F0u) { return; }
    }
    ctx->pc = 0x1C71F0u;
    // 0x1c71f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c71f4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1c71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c71f8: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1C71F8u;
    SET_GPR_U32(ctx, 31, 0x1C7200u);
    ctx->pc = 0x1C71FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C71F8u;
            // 0x1c71fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7200u; }
        if (ctx->pc != 0x1C7200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7200u; }
        if (ctx->pc != 0x1C7200u) { return; }
    }
    ctx->pc = 0x1C7200u;
    // 0x1c7200: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c7200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7204: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1c7204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7208: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1C7208u;
    SET_GPR_U32(ctx, 31, 0x1C7210u);
    ctx->pc = 0x1C720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7208u;
            // 0x1c720c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7210u; }
        if (ctx->pc != 0x1C7210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7210u; }
        if (ctx->pc != 0x1C7210u) { return; }
    }
    ctx->pc = 0x1C7210u;
    // 0x1c7210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c7210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7214: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1c7214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c7218: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1C7218u;
    SET_GPR_U32(ctx, 31, 0x1C7220u);
    ctx->pc = 0x1C721Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7218u;
            // 0x1c721c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7220u; }
        if (ctx->pc != 0x1C7220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7220u; }
        if (ctx->pc != 0x1C7220u) { return; }
    }
    ctx->pc = 0x1C7220u;
    // 0x1c7220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c7220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c7224: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7228: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1C7228u;
    SET_GPR_U32(ctx, 31, 0x1C7230u);
    ctx->pc = 0x1C722Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7228u;
            // 0x1c722c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7230u; }
        if (ctx->pc != 0x1C7230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7230u; }
        if (ctx->pc != 0x1C7230u) { return; }
    }
    ctx->pc = 0x1C7230u;
    // 0x1c7230: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c7230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c7234: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1c7234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c7238: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1c7238u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c723c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C723Cu;
    {
        const bool branch_taken_0x1c723c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c723c) {
            ctx->pc = 0x1C7290u;
            goto label_1c7290;
        }
    }
    ctx->pc = 0x1C7244u;
    // 0x1c7244: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1c7244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c7248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7248u;
    {
        const bool branch_taken_0x1c7248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7248) {
            ctx->pc = 0x1C7260u;
            goto label_1c7260;
        }
    }
    ctx->pc = 0x1C7250u;
    // 0x1c7250: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1C7250u;
    SET_GPR_U32(ctx, 31, 0x1C7258u);
    ctx->pc = 0x1C7254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7250u;
            // 0x1c7254: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7258u; }
        if (ctx->pc != 0x1C7258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7258u; }
        if (ctx->pc != 0x1C7258u) { return; }
    }
    ctx->pc = 0x1C7258u;
    // 0x1c7258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7258u;
    {
        const bool branch_taken_0x1c7258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7258) {
            ctx->pc = 0x1C7268u;
            goto label_1c7268;
        }
    }
    ctx->pc = 0x1C7260u;
label_1c7260:
    // 0x1c7260: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C7260u;
    SET_GPR_U32(ctx, 31, 0x1C7268u);
    ctx->pc = 0x1C7264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7260u;
            // 0x1c7264: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7268u; }
        if (ctx->pc != 0x1C7268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7268u; }
        if (ctx->pc != 0x1C7268u) { return; }
    }
    ctx->pc = 0x1C7268u;
label_1c7268:
    // 0x1c7268: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1c7268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1c726c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C726Cu;
    {
        const bool branch_taken_0x1c726c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c726c) {
            ctx->pc = 0x1C7280u;
            goto label_1c7280;
        }
    }
    ctx->pc = 0x1C7274u;
    // 0x1c7274: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C7274u;
    {
        const bool branch_taken_0x1c7274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7274u;
            // 0x1c7278: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7274) {
            ctx->pc = 0x1C72E0u;
            goto label_1c72e0;
        }
    }
    ctx->pc = 0x1C727Cu;
    // 0x1c727c: 0x0  nop
    ctx->pc = 0x1c727cu;
    // NOP
label_1c7280:
    // 0x1c7280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7284: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C7284u;
    {
        const bool branch_taken_0x1c7284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7284u;
            // 0x1c7288: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7284) {
            ctx->pc = 0x1C72E0u;
            goto label_1c72e0;
        }
    }
    ctx->pc = 0x1C728Cu;
    // 0x1c728c: 0x0  nop
    ctx->pc = 0x1c728cu;
    // NOP
label_1c7290:
    // 0x1c7290: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1c7290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1c7294: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1C7294u;
    {
        const bool branch_taken_0x1c7294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7294) {
            ctx->pc = 0x1C72D0u;
            goto label_1c72d0;
        }
    }
    ctx->pc = 0x1C729Cu;
    // 0x1c729c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c729cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c72a0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1c72a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1c72a4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c72a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c72a8: 0x0  nop
    ctx->pc = 0x1c72a8u;
    // NOP
    // 0x1c72ac: 0x0  nop
    ctx->pc = 0x1c72acu;
    // NOP
    // 0x1c72b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1c72b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1c72b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C72B4u;
    {
        const bool branch_taken_0x1c72b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c72b4) {
            ctx->pc = 0x1C72D0u;
            goto label_1c72d0;
        }
    }
    ctx->pc = 0x1C72BCu;
    // 0x1c72bc: 0xc060500  jal         func_181400
    ctx->pc = 0x1C72BCu;
    SET_GPR_U32(ctx, 31, 0x1C72C4u);
    ctx->pc = 0x1C72C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72BCu;
            // 0x1c72c0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72C4u; }
        if (ctx->pc != 0x1C72C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72C4u; }
        if (ctx->pc != 0x1C72C4u) { return; }
    }
    ctx->pc = 0x1C72C4u;
    // 0x1c72c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C72C4u;
    {
        const bool branch_taken_0x1c72c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c72c4) {
            ctx->pc = 0x1C72D8u;
            goto label_1c72d8;
        }
    }
    ctx->pc = 0x1C72CCu;
    // 0x1c72cc: 0x0  nop
    ctx->pc = 0x1c72ccu;
    // NOP
label_1c72d0:
    // 0x1c72d0: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1C72D0u;
    SET_GPR_U32(ctx, 31, 0x1C72D8u);
    ctx->pc = 0x1C72D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C72D0u;
            // 0x1c72d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72D8u; }
        if (ctx->pc != 0x1C72D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C72D8u; }
        if (ctx->pc != 0x1C72D8u) { return; }
    }
    ctx->pc = 0x1C72D8u;
label_1c72d8:
    // 0x1c72d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c72dc: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1c72dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1c72e0:
    // 0x1c72e0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1c72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c72e4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1c72e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1c72e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1c72e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c72ec: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C72ECu;
    {
        const bool branch_taken_0x1c72ec = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1c72ec) {
            ctx->pc = 0x1C7320u;
            goto label_1c7320;
        }
    }
    ctx->pc = 0x1C72F4u;
    // 0x1c72f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1c72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c72f8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1c72f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1c72fc: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1c72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1c7300: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c7304: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1c7304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1c7308: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1c7308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1c730c: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1C730Cu;
    SET_GPR_U32(ctx, 31, 0x1C7314u);
    ctx->pc = 0x1C7310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C730Cu;
            // 0x1c7310: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7314u; }
        if (ctx->pc != 0x1C7314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7314u; }
        if (ctx->pc != 0x1C7314u) { return; }
    }
    ctx->pc = 0x1C7314u;
    // 0x1c7314: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1C7314u;
    {
        const bool branch_taken_0x1c7314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7314) {
            ctx->pc = 0x1C7650u;
            goto label_1c7650;
        }
    }
    ctx->pc = 0x1C731Cu;
    // 0x1c731c: 0x0  nop
    ctx->pc = 0x1c731cu;
    // NOP
label_1c7320:
    // 0x1c7320: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c7320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c7324: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7324u;
    {
        const bool branch_taken_0x1c7324 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1C7328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7324u;
            // 0x1c7328: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7324) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C732Cu;
    // 0x1c732c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C732Cu;
    {
        const bool branch_taken_0x1c732c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c732c) {
            ctx->pc = 0x1C7340u;
            goto label_1c7340;
        }
    }
    ctx->pc = 0x1C7334u;
    // 0x1c7334: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c7334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c7338: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x1C7338u;
    {
        const bool branch_taken_0x1c7338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C733Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7338u;
            // 0x1c733c: 0xae030028  sw          $v1, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7338) {
            ctx->pc = 0x1C7650u;
            goto label_1c7650;
        }
    }
    ctx->pc = 0x1C7340u;
label_1c7340:
    // 0x1c7340: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1c7340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1c7344: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c7344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c7348: 0x108300bd  beq         $a0, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1C7348u;
    {
        const bool branch_taken_0x1c7348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C734Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7348u;
            // 0x1c734c: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7348) {
            ctx->pc = 0x1C7640u;
            goto label_1c7640;
        }
    }
    ctx->pc = 0x1C7350u;
    // 0x1c7350: 0x108300bb  beq         $a0, $v1, . + 4 + (0xBB << 2)
    ctx->pc = 0x1C7350u;
    {
        const bool branch_taken_0x1c7350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c7350) {
            ctx->pc = 0x1C7640u;
            goto label_1c7640;
        }
    }
    ctx->pc = 0x1C7358u;
    // 0x1c7358: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c735c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c735cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c7360: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7364: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1c7364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1c7368: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c7368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c736c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c736cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7370: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c7370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7374: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1c7374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1c7378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c737c: 0x0  nop
    ctx->pc = 0x1c737cu;
    // NOP
    // 0x1c7380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7384: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1c7384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c7388: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c738c: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x1c738cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x1c7390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7394: 0x0  nop
    ctx->pc = 0x1c7394u;
    // NOP
    // 0x1c7398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c739c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c739cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c73a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c73a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c73a4: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1c73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1c73a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c73a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c73ac: 0x0  nop
    ctx->pc = 0x1c73acu;
    // NOP
    // 0x1c73b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c73b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c73b4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1c73b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1c73b8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c73bc: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1c73bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1c73c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c73c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c73c4: 0x0  nop
    ctx->pc = 0x1c73c4u;
    // NOP
    // 0x1c73c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c73c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c73cc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C73CCu;
    SET_GPR_U32(ctx, 31, 0x1C73D4u);
    ctx->pc = 0x1C73D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C73CCu;
            // 0x1c73d0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D4u; }
        if (ctx->pc != 0x1C73D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C73D4u; }
        if (ctx->pc != 0x1C73D4u) { return; }
    }
    ctx->pc = 0x1C73D4u;
    // 0x1c73d4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c73d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c73d8: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c73d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c73dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c73dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c73e0: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1c73e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1c73e4: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c73e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c73e8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c73e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73ec: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c73ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c73f0: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1c73f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1c73f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c73f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c73f8: 0x0  nop
    ctx->pc = 0x1c73f8u;
    // NOP
    // 0x1c73fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c73fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7400: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1c7400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1c7404: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7408: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1c7408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1c740c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c740cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7410: 0x0  nop
    ctx->pc = 0x1c7410u;
    // NOP
    // 0x1c7414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7418: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1c7418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1c741c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c741cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7420: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c7420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c7424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7428: 0x0  nop
    ctx->pc = 0x1c7428u;
    // NOP
    // 0x1c742c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c742cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7430: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1c7430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1c7434: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7438: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1c7438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1c743c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c743cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7440: 0x0  nop
    ctx->pc = 0x1c7440u;
    // NOP
    // 0x1c7444: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7448: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C7448u;
    SET_GPR_U32(ctx, 31, 0x1C7450u);
    ctx->pc = 0x1C744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7448u;
            // 0x1c744c: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7450u; }
        if (ctx->pc != 0x1C7450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7450u; }
        if (ctx->pc != 0x1C7450u) { return; }
    }
    ctx->pc = 0x1C7450u;
    // 0x1c7450: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7454: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c7454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c7458: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c745c: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1c745cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1c7460: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c7460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c7464: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c7464u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7468: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c7468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c746c: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1c746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1c7470: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7474: 0x0  nop
    ctx->pc = 0x1c7474u;
    // NOP
    // 0x1c7478: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7478u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c747c: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1c747cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1c7480: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7484: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1c7484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1c7488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c748c: 0x0  nop
    ctx->pc = 0x1c748cu;
    // NOP
    // 0x1c7490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7494: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1c7494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1c7498: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c749c: 0x2442ffce  addiu       $v0, $v0, -0x32
    ctx->pc = 0x1c749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967246));
    // 0x1c74a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c74a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c74a4: 0x0  nop
    ctx->pc = 0x1c74a4u;
    // NOP
    // 0x1c74a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c74a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c74ac: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1c74acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1c74b0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c74b4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1c74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1c74b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c74b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c74bc: 0x0  nop
    ctx->pc = 0x1c74bcu;
    // NOP
    // 0x1c74c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c74c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c74c4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C74C4u;
    SET_GPR_U32(ctx, 31, 0x1C74CCu);
    ctx->pc = 0x1C74C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C74C4u;
            // 0x1c74c8: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74CCu; }
        if (ctx->pc != 0x1C74CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C74CCu; }
        if (ctx->pc != 0x1C74CCu) { return; }
    }
    ctx->pc = 0x1C74CCu;
    // 0x1c74cc: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c74d0: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c74d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c74d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c74d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c74d8: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1c74d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1c74dc: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c74dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c74e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c74e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74e4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c74e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c74e8: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x1c74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x1c74ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c74ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c74f0: 0x0  nop
    ctx->pc = 0x1c74f0u;
    // NOP
    // 0x1c74f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c74f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c74f8: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1c74f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1c74fc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7500: 0x2442ffc4  addiu       $v0, $v0, -0x3C
    ctx->pc = 0x1c7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967236));
    // 0x1c7504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7508: 0x0  nop
    ctx->pc = 0x1c7508u;
    // NOP
    // 0x1c750c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c750cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7510: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1c7510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1c7514: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7518: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x1c7518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x1c751c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c751cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7520: 0x0  nop
    ctx->pc = 0x1c7520u;
    // NOP
    // 0x1c7524: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7528: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1c7528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1c752c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c752cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7530: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1c7530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1c7534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7538: 0x0  nop
    ctx->pc = 0x1c7538u;
    // NOP
    // 0x1c753c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c753cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7540: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C7540u;
    SET_GPR_U32(ctx, 31, 0x1C7548u);
    ctx->pc = 0x1C7544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7540u;
            // 0x1c7544: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7548u; }
        if (ctx->pc != 0x1C7548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7548u; }
        if (ctx->pc != 0x1C7548u) { return; }
    }
    ctx->pc = 0x1C7548u;
    // 0x1c7548: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c754c: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c754cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c7550: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c7550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c7554: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1c7554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1c7558: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c7558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c755c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c755cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7560: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c7560u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7564: 0x2442ff4c  addiu       $v0, $v0, -0xB4
    ctx->pc = 0x1c7564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967116));
    // 0x1c7568: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7568u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c756c: 0x0  nop
    ctx->pc = 0x1c756cu;
    // NOP
    // 0x1c7570: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7570u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7574: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1c7574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1c7578: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c757c: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1c757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1c7580: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7584: 0x0  nop
    ctx->pc = 0x1c7584u;
    // NOP
    // 0x1c7588: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c758c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1c758cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1c7590: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c7590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7594: 0x2442ffba  addiu       $v0, $v0, -0x46
    ctx->pc = 0x1c7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967226));
    // 0x1c7598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c759c: 0x0  nop
    ctx->pc = 0x1c759cu;
    // NOP
    // 0x1c75a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c75a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c75a4: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1c75a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1c75a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c75ac: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c75b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c75b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c75b4: 0x0  nop
    ctx->pc = 0x1c75b4u;
    // NOP
    // 0x1c75b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c75b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c75bc: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C75BCu;
    SET_GPR_U32(ctx, 31, 0x1C75C4u);
    ctx->pc = 0x1C75C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C75BCu;
            // 0x1c75c0: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C4u; }
        if (ctx->pc != 0x1C75C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C75C4u; }
        if (ctx->pc != 0x1C75C4u) { return; }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c75c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c75c8: 0x3c06001c  lui         $a2, 0x1C
    ctx->pc = 0x1c75c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28 << 16));
    // 0x1c75cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c75ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c75d0: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1c75d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1c75d4: 0x24c644a0  addiu       $a2, $a2, 0x44A0
    ctx->pc = 0x1c75d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17568));
    // 0x1c75d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c75d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75dc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c75dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c75e0: 0x24420046  addiu       $v0, $v0, 0x46
    ctx->pc = 0x1c75e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 70));
    // 0x1c75e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c75e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c75e8: 0x0  nop
    ctx->pc = 0x1c75e8u;
    // NOP
    // 0x1c75ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c75ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c75f0: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1c75f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1c75f4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c75f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c75f8: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1c75fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c75fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7600: 0x0  nop
    ctx->pc = 0x1c7600u;
    // NOP
    // 0x1c7604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7608: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1c7608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1c760c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1c7610: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1c7614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7618: 0x0  nop
    ctx->pc = 0x1c7618u;
    // NOP
    // 0x1c761c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c761cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7620: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1c7620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1c7624: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1c7624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1c7628: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c762c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c762cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7630: 0x0  nop
    ctx->pc = 0x1c7630u;
    // NOP
    // 0x1c7634: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c7634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c7638: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1C7638u;
    SET_GPR_U32(ctx, 31, 0x1C7640u);
    ctx->pc = 0x1C763Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7638u;
            // 0x1c763c: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7640u; }
        if (ctx->pc != 0x1C7640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7640u; }
        if (ctx->pc != 0x1C7640u) { return; }
    }
    ctx->pc = 0x1C7640u;
label_1c7640:
    // 0x1c7640: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c7644: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c7648: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1c7648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1c764c: 0x0  nop
    ctx->pc = 0x1c764cu;
    // NOP
label_1c7650:
    // 0x1c7650: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c7654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c7654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c7658: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1c7658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1c765c: 0x0  nop
    ctx->pc = 0x1c765cu;
    // NOP
label_1c7660:
    // 0x1c7660: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c7660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c7664: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c7664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7668: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c7668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c766c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c766cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7670: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c7670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7674: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7674u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7678: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C767Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7678u;
            // 0x1c767c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C59D8u: goto label_1c59d8;
            case 0x1C5A10u: goto label_1c5a10;
            case 0x1C5A48u: goto label_1c5a48;
            case 0x1C5A80u: goto label_1c5a80;
            case 0x1C5BC8u: goto label_1c5bc8;
            case 0x1C5C00u: goto label_1c5c00;
            case 0x1C5C48u: goto label_1c5c48;
            case 0x1C5C58u: goto label_1c5c58;
            case 0x1C5CC0u: goto label_1c5cc0;
            case 0x1C5D28u: goto label_1c5d28;
            case 0x1C5D50u: goto label_1c5d50;
            case 0x1C5DB0u: goto label_1c5db0;
            case 0x1C5E00u: goto label_1c5e00;
            case 0x1C5E20u: goto label_1c5e20;
            case 0x1C5E40u: goto label_1c5e40;
            case 0x1C5E58u: goto label_1c5e58;
            case 0x1C5EE8u: goto label_1c5ee8;
            case 0x1C5EF8u: goto label_1c5ef8;
            case 0x1C5F68u: goto label_1c5f68;
            case 0x1C5F90u: goto label_1c5f90;
            case 0x1C5F98u: goto label_1c5f98;
            case 0x1C6020u: goto label_1c6020;
            case 0x1C6050u: goto label_1c6050;
            case 0x1C60D8u: goto label_1c60d8;
            case 0x1C6100u: goto label_1c6100;
            case 0x1C61A8u: goto label_1c61a8;
            case 0x1C61E8u: goto label_1c61e8;
            case 0x1C622Cu: goto label_1c622c;
            case 0x1C62A8u: goto label_1c62a8;
            case 0x1C6328u: goto label_1c6328;
            case 0x1C63A0u: goto label_1c63a0;
            case 0x1C63F8u: goto label_1c63f8;
            case 0x1C6448u: goto label_1c6448;
            case 0x1C64C8u: goto label_1c64c8;
            case 0x1C64F8u: goto label_1c64f8;
            case 0x1C6510u: goto label_1c6510;
            case 0x1C6558u: goto label_1c6558;
            case 0x1C6568u: goto label_1c6568;
            case 0x1C6580u: goto label_1c6580;
            case 0x1C65C8u: goto label_1c65c8;
            case 0x1C65D8u: goto label_1c65d8;
            case 0x1C65E8u: goto label_1c65e8;
            case 0x1C6630u: goto label_1c6630;
            case 0x1C6648u: goto label_1c6648;
            case 0x1C66C0u: goto label_1c66c0;
            case 0x1C6720u: goto label_1c6720;
            case 0x1C6768u: goto label_1c6768;
            case 0x1C6790u: goto label_1c6790;
            case 0x1C6798u: goto label_1c6798;
            case 0x1C6830u: goto label_1c6830;
            case 0x1C6860u: goto label_1c6860;
            case 0x1C68E0u: goto label_1c68e0;
            case 0x1C6910u: goto label_1c6910;
            case 0x1C6954u: goto label_1c6954;
            case 0x1C6998u: goto label_1c6998;
            case 0x1C69C8u: goto label_1c69c8;
            case 0x1C6A48u: goto label_1c6a48;
            case 0x1C6A70u: goto label_1c6a70;
            case 0x1C6AB0u: goto label_1c6ab0;
            case 0x1C6C90u: goto label_1c6c90;
            case 0x1C6CD8u: goto label_1c6cd8;
            case 0x1C6D20u: goto label_1c6d20;
            case 0x1C6D58u: goto label_1c6d58;
            case 0x1C6D90u: goto label_1c6d90;
            case 0x1C6DA8u: goto label_1c6da8;
            case 0x1C6E08u: goto label_1c6e08;
            case 0x1C6E20u: goto label_1c6e20;
            case 0x1C6E58u: goto label_1c6e58;
            case 0x1C6E70u: goto label_1c6e70;
            case 0x1C6ED0u: goto label_1c6ed0;
            case 0x1C6EE8u: goto label_1c6ee8;
            case 0x1C6F10u: goto label_1c6f10;
            case 0x1C6FE0u: goto label_1c6fe0;
            case 0x1C7028u: goto label_1c7028;
            case 0x1C7040u: goto label_1c7040;
            case 0x1C7058u: goto label_1c7058;
            case 0x1C7070u: goto label_1c7070;
            case 0x1C7088u: goto label_1c7088;
            case 0x1C70A0u: goto label_1c70a0;
            case 0x1C70B8u: goto label_1c70b8;
            case 0x1C70D0u: goto label_1c70d0;
            case 0x1C70E8u: goto label_1c70e8;
            case 0x1C7128u: goto label_1c7128;
            case 0x1C7170u: goto label_1c7170;
            case 0x1C7198u: goto label_1c7198;
            case 0x1C71D8u: goto label_1c71d8;
            case 0x1C7260u: goto label_1c7260;
            case 0x1C7268u: goto label_1c7268;
            case 0x1C7280u: goto label_1c7280;
            case 0x1C7290u: goto label_1c7290;
            case 0x1C72D0u: goto label_1c72d0;
            case 0x1C72D8u: goto label_1c72d8;
            case 0x1C72E0u: goto label_1c72e0;
            case 0x1C7320u: goto label_1c7320;
            case 0x1C7340u: goto label_1c7340;
            case 0x1C7640u: goto label_1c7640;
            case 0x1C7650u: goto label_1c7650;
            case 0x1C7660u: goto label_1c7660;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7680u;
}
