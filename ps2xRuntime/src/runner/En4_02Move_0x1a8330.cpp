#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_02Move
// Address: 0x1a8330 - 0x1a94a4
void En4_02Move_0x1a8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_02Move_0x1a8330");
#endif

    ctx->pc = 0x1a8330u;

label_1a8330:
    // 0x1a8330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a8334:
    // 0x1a8334: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a8334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a8338:
    // 0x1a8338: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a8338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a833c:
    // 0x1a833c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a833cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8340:
    // 0x1a8340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a8340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a8344:
    // 0x1a8344: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8348:
    // 0x1a8348: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a834c:
    // 0x1a834c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a834cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8350:
    // 0x1a8350: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a8350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a8354:
    // 0x1a8354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8358:
    // 0x1a8358: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a8358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a835c:
    // 0x1a835c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a835cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a8360:
    // 0x1a8360: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a8360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1a8364:
    // 0x1a8364: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8368:
    // 0x1a8368: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a8368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a836c:
    // 0x1a836c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8370:
    // 0x1a8370: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a8370u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a8374:
    // 0x1a8374: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a8374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a8378:
    // 0x1a8378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a837c:
    // 0x1a837c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a8380:
    // 0x1a8380: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a8380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8384:
    // 0x1a8384: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a8384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a8388:
    // 0x1a8388: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a8388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a838c:
    // 0x1a838c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a838cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a8390:
    // 0x1a8390: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a8390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a8394:
    // 0x1a8394: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a8394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8398:
    // 0x1a8398: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a8398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a839c:
    // 0x1a839c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a839cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1a83a0:
    // 0x1a83a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a83a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a83a4:
    // 0x1a83a4: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1a83a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a83a8:
    // 0x1a83a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a83ac:
    // 0x1a83ac: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a83acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a83b0:
    // 0x1a83b0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1a83b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1a83b4:
    // 0x1a83b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a83b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a83b8:
    // 0x1a83b8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a83b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a83bc:
    // 0x1a83bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a83bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a83c0:
    // 0x1a83c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a83c4:
    if (ctx->pc == 0x1A83C4u) {
        ctx->pc = 0x1A83C4u;
            // 0x1a83c4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1A83C8u;
        goto label_1a83c8;
    }
    ctx->pc = 0x1A83C0u;
    {
        const bool branch_taken_0x1a83c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A83C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83C0u;
            // 0x1a83c4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83c0) {
            ctx->pc = 0x1A83E0u;
            goto label_1a83e0;
        }
    }
    ctx->pc = 0x1A83C8u;
label_1a83c8:
    // 0x1a83c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a83cc:
    // 0x1a83cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a83ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a83d0:
    // 0x1a83d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a83d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a83d4:
    // 0x1a83d4: 0x0  nop
    ctx->pc = 0x1a83d4u;
    // NOP
label_1a83d8:
    // 0x1a83d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a83d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a83dc:
    // 0x1a83dc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a83dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a83e0:
    // 0x1a83e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a83e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a83e4:
    // 0x1a83e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a83e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a83e8:
    // 0x1a83e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a83e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a83ec:
    // 0x1a83ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a83ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a83f0:
    // 0x1a83f0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a83f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a83f4:
    // 0x1a83f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a83f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a83f8:
    // 0x1a83f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a83fc:
    if (ctx->pc == 0x1A83FCu) {
        ctx->pc = 0x1A83FCu;
            // 0x1a83fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1A8400u;
        goto label_1a8400;
    }
    ctx->pc = 0x1A83F8u;
    {
        const bool branch_taken_0x1a83f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A83FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A83F8u;
            // 0x1a83fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a83f8) {
            ctx->pc = 0x1A8418u;
            goto label_1a8418;
        }
    }
    ctx->pc = 0x1A8400u;
label_1a8400:
    // 0x1a8400: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a8400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a8404:
    // 0x1a8404: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a8404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8408:
    // 0x1a8408: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a840c:
    // 0x1a840c: 0x0  nop
    ctx->pc = 0x1a840cu;
    // NOP
label_1a8410:
    // 0x1a8410: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a8410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a8414:
    // 0x1a8414: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a8414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a8418:
    // 0x1a8418: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a841c:
    // 0x1a841c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a841cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a8420:
    // 0x1a8420: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a8420u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8424:
    // 0x1a8424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8428:
    // 0x1a8428: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a8428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a842c:
    // 0x1a842c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a842cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8430:
    // 0x1a8430: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a8434:
    if (ctx->pc == 0x1A8434u) {
        ctx->pc = 0x1A8434u;
            // 0x1a8434: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A8438u;
        goto label_1a8438;
    }
    ctx->pc = 0x1A8430u;
    {
        const bool branch_taken_0x1a8430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8430u;
            // 0x1a8434: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8430) {
            ctx->pc = 0x1A8450u;
            goto label_1a8450;
        }
    }
    ctx->pc = 0x1A8438u;
label_1a8438:
    // 0x1a8438: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a8438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a843c:
    // 0x1a843c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a843cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8440:
    // 0x1a8440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8444:
    // 0x1a8444: 0x0  nop
    ctx->pc = 0x1a8444u;
    // NOP
label_1a8448:
    // 0x1a8448: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a8448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a844c:
    // 0x1a844c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a844cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a8450:
    // 0x1a8450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8454:
    // 0x1a8454: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a8454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a8458:
    // 0x1a8458: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a8458u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a845c:
    // 0x1a845c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a845cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8460:
    // 0x1a8460: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a8460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8464:
    // 0x1a8464: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a8464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8468:
    // 0x1a8468: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a846c:
    if (ctx->pc == 0x1A846Cu) {
        ctx->pc = 0x1A846Cu;
            // 0x1a846c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A8470u;
        goto label_1a8470;
    }
    ctx->pc = 0x1A8468u;
    {
        const bool branch_taken_0x1a8468 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8468u;
            // 0x1a846c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8468) {
            ctx->pc = 0x1A8488u;
            goto label_1a8488;
        }
    }
    ctx->pc = 0x1A8470u;
label_1a8470:
    // 0x1a8470: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a8470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a8474:
    // 0x1a8474: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a8474u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8478:
    // 0x1a8478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a847c:
    // 0x1a847c: 0x0  nop
    ctx->pc = 0x1a847cu;
    // NOP
label_1a8480:
    // 0x1a8480: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a8480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a8484:
    // 0x1a8484: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a8484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a8488:
    // 0x1a8488: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a848c:
    // 0x1a848c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a8490:
    // 0x1a8490: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a8490u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a8494:
    // 0x1a8494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8498:
    // 0x1a8498: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a8498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a849c:
    // 0x1a849c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a849cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a84a0:
    // 0x1a84a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a84a4:
    if (ctx->pc == 0x1A84A4u) {
        ctx->pc = 0x1A84A4u;
            // 0x1a84a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A84A8u;
        goto label_1a84a8;
    }
    ctx->pc = 0x1A84A0u;
    {
        const bool branch_taken_0x1a84a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A84A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84A0u;
            // 0x1a84a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84a0) {
            ctx->pc = 0x1A84C0u;
            goto label_1a84c0;
        }
    }
    ctx->pc = 0x1A84A8u;
label_1a84a8:
    // 0x1a84a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a84ac:
    // 0x1a84ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a84acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a84b0:
    // 0x1a84b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a84b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a84b4:
    // 0x1a84b4: 0x0  nop
    ctx->pc = 0x1a84b4u;
    // NOP
label_1a84b8:
    // 0x1a84b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a84b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a84bc:
    // 0x1a84bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a84bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a84c0:
    // 0x1a84c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a84c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a84c4:
    // 0x1a84c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a84c8:
    // 0x1a84c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a84c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a84cc:
    // 0x1a84cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a84ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a84d0:
    // 0x1a84d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a84d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a84d4:
    // 0x1a84d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a84d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a84d8:
    // 0x1a84d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a84dc:
    if (ctx->pc == 0x1A84DCu) {
        ctx->pc = 0x1A84DCu;
            // 0x1a84dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A84E0u;
        goto label_1a84e0;
    }
    ctx->pc = 0x1A84D8u;
    {
        const bool branch_taken_0x1a84d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A84DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A84D8u;
            // 0x1a84dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a84d8) {
            ctx->pc = 0x1A84F8u;
            goto label_1a84f8;
        }
    }
    ctx->pc = 0x1A84E0u;
label_1a84e0:
    // 0x1a84e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a84e4:
    // 0x1a84e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a84e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a84e8:
    // 0x1a84e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a84e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a84ec:
    // 0x1a84ec: 0x0  nop
    ctx->pc = 0x1a84ecu;
    // NOP
label_1a84f0:
    // 0x1a84f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a84f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a84f4:
    // 0x1a84f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a84f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a84f8:
    // 0x1a84f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a84fc:
    // 0x1a84fc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1a84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1a8500:
    // 0x1a8500: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a8500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8504:
    // 0x1a8504: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a8504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a8508:
    // 0x1a8508: 0xc06a52c  jal         func_1A94B0
label_1a850c:
    if (ctx->pc == 0x1A850Cu) {
        ctx->pc = 0x1A850Cu;
            // 0x1a850c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->pc = 0x1A8510u;
        goto label_1a8510;
    }
    ctx->pc = 0x1A8508u;
    SET_GPR_U32(ctx, 31, 0x1A8510u);
    ctx->pc = 0x1A850Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8508u;
            // 0x1a850c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A94B0u;
    if (runtime->hasFunction(0x1A94B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A94B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8510u; }
        if (ctx->pc != 0x1A8510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1a94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8510u; }
        if (ctx->pc != 0x1A8510u) { return; }
    }
    ctx->pc = 0x1A8510u;
label_1a8510:
    // 0x1a8510: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8514:
    // 0x1a8514: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a8514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a8518:
    // 0x1a8518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a851c:
    // 0x1a851c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a851cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a8520:
    // 0x1a8520: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a8524:
    // 0x1a8524: 0x1840016e  blez        $v0, . + 4 + (0x16E << 2)
label_1a8528:
    if (ctx->pc == 0x1A8528u) {
        ctx->pc = 0x1A852Cu;
        goto label_1a852c;
    }
    ctx->pc = 0x1A8524u;
    {
        const bool branch_taken_0x1a8524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a8524) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A852Cu;
label_1a852c:
    // 0x1a852c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8530:
    // 0x1a8530: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1a8534:
    if (ctx->pc == 0x1A8534u) {
        ctx->pc = 0x1A8538u;
        goto label_1a8538;
    }
    ctx->pc = 0x1A8530u;
    {
        const bool branch_taken_0x1a8530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8530) {
            ctx->pc = 0x1A85A8u;
            goto label_1a85a8;
        }
    }
    ctx->pc = 0x1A8538u;
label_1a8538:
    // 0x1a8538: 0xc050bb4  jal         func_142ED0
label_1a853c:
    if (ctx->pc == 0x1A853Cu) {
        ctx->pc = 0x1A8540u;
        goto label_1a8540;
    }
    ctx->pc = 0x1A8538u;
    SET_GPR_U32(ctx, 31, 0x1A8540u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8540u; }
        if (ctx->pc != 0x1A8540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8540u; }
        if (ctx->pc != 0x1A8540u) { return; }
    }
    ctx->pc = 0x1A8540u;
label_1a8540:
    // 0x1a8540: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8544:
    // 0x1a8544: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a8544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a8548:
    // 0x1a8548: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8548u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a854c:
    // 0x1a854c: 0x0  nop
    ctx->pc = 0x1a854cu;
    // NOP
label_1a8550:
    // 0x1a8550: 0x0  nop
    ctx->pc = 0x1a8550u;
    // NOP
label_1a8554:
    // 0x1a8554: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8554u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8558:
    // 0x1a8558: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a8558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a855c:
    // 0x1a855c: 0xc050bb4  jal         func_142ED0
label_1a8560:
    if (ctx->pc == 0x1A8560u) {
        ctx->pc = 0x1A8560u;
            // 0x1a8560: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1A8564u;
        goto label_1a8564;
    }
    ctx->pc = 0x1A855Cu;
    SET_GPR_U32(ctx, 31, 0x1A8564u);
    ctx->pc = 0x1A8560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A855Cu;
            // 0x1a8560: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8564u; }
        if (ctx->pc != 0x1A8564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8564u; }
        if (ctx->pc != 0x1A8564u) { return; }
    }
    ctx->pc = 0x1A8564u;
label_1a8564:
    // 0x1a8564: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8568:
    // 0x1a8568: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a8568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a856c:
    // 0x1a856c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a856cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8570:
    // 0x1a8570: 0x0  nop
    ctx->pc = 0x1a8570u;
    // NOP
label_1a8574:
    // 0x1a8574: 0x0  nop
    ctx->pc = 0x1a8574u;
    // NOP
label_1a8578:
    // 0x1a8578: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8578u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a857c:
    // 0x1a857c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1a857cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8580:
    // 0x1a8580: 0xc050bb4  jal         func_142ED0
label_1a8584:
    if (ctx->pc == 0x1A8584u) {
        ctx->pc = 0x1A8584u;
            // 0x1a8584: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1A8588u;
        goto label_1a8588;
    }
    ctx->pc = 0x1A8580u;
    SET_GPR_U32(ctx, 31, 0x1A8588u);
    ctx->pc = 0x1A8584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8580u;
            // 0x1a8584: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8588u; }
        if (ctx->pc != 0x1A8588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8588u; }
        if (ctx->pc != 0x1A8588u) { return; }
    }
    ctx->pc = 0x1A8588u;
label_1a8588:
    // 0x1a8588: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1a8588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a858c:
    // 0x1a858c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a858cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8590:
    // 0x1a8590: 0x0  nop
    ctx->pc = 0x1a8590u;
    // NOP
label_1a8594:
    // 0x1a8594: 0x0  nop
    ctx->pc = 0x1a8594u;
    // NOP
label_1a8598:
    // 0x1a8598: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8598u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a859c:
    // 0x1a859c: 0x10000150  b           . + 4 + (0x150 << 2)
label_1a85a0:
    if (ctx->pc == 0x1A85A0u) {
        ctx->pc = 0x1A85A0u;
            // 0x1a85a0: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1A85A4u;
        goto label_1a85a4;
    }
    ctx->pc = 0x1A859Cu;
    {
        const bool branch_taken_0x1a859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A859Cu;
            // 0x1a85a0: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a859c) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A85A4u;
label_1a85a4:
    // 0x1a85a4: 0x0  nop
    ctx->pc = 0x1a85a4u;
    // NOP
label_1a85a8:
    // 0x1a85a8: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1a85a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1a85ac:
    // 0x1a85ac: 0x1440014c  bnez        $v0, . + 4 + (0x14C << 2)
label_1a85b0:
    if (ctx->pc == 0x1A85B0u) {
        ctx->pc = 0x1A85B0u;
            // 0x1a85b0: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1A85B4u;
        goto label_1a85b4;
    }
    ctx->pc = 0x1A85ACu;
    {
        const bool branch_taken_0x1a85ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A85B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85ACu;
            // 0x1a85b0: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85ac) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A85B4u;
label_1a85b4:
    // 0x1a85b4: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1a85b8:
    if (ctx->pc == 0x1A85B8u) {
        ctx->pc = 0x1A85BCu;
        goto label_1a85bc;
    }
    ctx->pc = 0x1A85B4u;
    {
        const bool branch_taken_0x1a85b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a85b4) {
            ctx->pc = 0x1A85E0u;
            goto label_1a85e0;
        }
    }
    ctx->pc = 0x1A85BCu;
label_1a85bc:
    // 0x1a85bc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a85c0:
    // 0x1a85c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1a85c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1a85c4:
    // 0x1a85c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1a85c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1a85c8:
    // 0x1a85c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a85c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a85cc:
    // 0x1a85cc: 0x0  nop
    ctx->pc = 0x1a85ccu;
    // NOP
label_1a85d0:
    // 0x1a85d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a85d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a85d4:
    // 0x1a85d4: 0x10000142  b           . + 4 + (0x142 << 2)
label_1a85d8:
    if (ctx->pc == 0x1A85D8u) {
        ctx->pc = 0x1A85D8u;
            // 0x1a85d8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A85DCu;
        goto label_1a85dc;
    }
    ctx->pc = 0x1A85D4u;
    {
        const bool branch_taken_0x1a85d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85D4u;
            // 0x1a85d8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85d4) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A85DCu;
label_1a85dc:
    // 0x1a85dc: 0x0  nop
    ctx->pc = 0x1a85dcu;
    // NOP
label_1a85e0:
    // 0x1a85e0: 0x286100a0  slti        $at, $v1, 0xA0
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)160) ? 1 : 0);
label_1a85e4:
    // 0x1a85e4: 0x102000c2  beqz        $at, . + 4 + (0xC2 << 2)
label_1a85e8:
    if (ctx->pc == 0x1A85E8u) {
        ctx->pc = 0x1A85ECu;
        goto label_1a85ec;
    }
    ctx->pc = 0x1A85E4u;
    {
        const bool branch_taken_0x1a85e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a85e4) {
            ctx->pc = 0x1A88F0u;
            goto label_1a88f0;
        }
    }
    ctx->pc = 0x1A85ECu;
label_1a85ec:
    // 0x1a85ec: 0xc065d00  jal         func_197400
label_1a85f0:
    if (ctx->pc == 0x1A85F0u) {
        ctx->pc = 0x1A85F4u;
        goto label_1a85f4;
    }
    ctx->pc = 0x1A85ECu;
    SET_GPR_U32(ctx, 31, 0x1A85F4u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A85F4u; }
        if (ctx->pc != 0x1A85F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A85F4u; }
        if (ctx->pc != 0x1A85F4u) { return; }
    }
    ctx->pc = 0x1A85F4u;
label_1a85f4:
    // 0x1a85f4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_1a85f8:
    if (ctx->pc == 0x1A85F8u) {
        ctx->pc = 0x1A85FCu;
        goto label_1a85fc;
    }
    ctx->pc = 0x1A85F4u;
    {
        const bool branch_taken_0x1a85f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a85f4) {
            ctx->pc = 0x1A86C0u;
            goto label_1a86c0;
        }
    }
    ctx->pc = 0x1A85FCu;
label_1a85fc:
    // 0x1a85fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a85fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8600:
    // 0x1a8600: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a8604:
    // 0x1a8604: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a8604u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a8608:
    // 0x1a8608: 0x0  nop
    ctx->pc = 0x1a8608u;
    // NOP
label_1a860c:
    // 0x1a860c: 0x0  nop
    ctx->pc = 0x1a860cu;
    // NOP
label_1a8610:
    // 0x1a8610: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8610u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8614:
    // 0x1a8614: 0x14400132  bnez        $v0, . + 4 + (0x132 << 2)
label_1a8618:
    if (ctx->pc == 0x1A8618u) {
        ctx->pc = 0x1A861Cu;
        goto label_1a861c;
    }
    ctx->pc = 0x1A8614u;
    {
        const bool branch_taken_0x1a8614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8614) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A861Cu;
label_1a861c:
    // 0x1a861c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8620:
    // 0x1a8620: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1a8624:
    // 0x1a8624: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8628:
    // 0x1a8628: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a862c:
    // 0x1a862c: 0xc05d080  jal         func_174200
label_1a8630:
    if (ctx->pc == 0x1A8630u) {
        ctx->pc = 0x1A8630u;
            // 0x1a8630: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8634u;
        goto label_1a8634;
    }
    ctx->pc = 0x1A862Cu;
    SET_GPR_U32(ctx, 31, 0x1A8634u);
    ctx->pc = 0x1A8630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A862Cu;
            // 0x1a8630: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8634u; }
        if (ctx->pc != 0x1A8634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8634u; }
        if (ctx->pc != 0x1A8634u) { return; }
    }
    ctx->pc = 0x1A8634u;
label_1a8634:
    // 0x1a8634: 0xc050bb4  jal         func_142ED0
label_1a8638:
    if (ctx->pc == 0x1A8638u) {
        ctx->pc = 0x1A8638u;
            // 0x1a8638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A863Cu;
        goto label_1a863c;
    }
    ctx->pc = 0x1A8634u;
    SET_GPR_U32(ctx, 31, 0x1A863Cu);
    ctx->pc = 0x1A8638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8634u;
            // 0x1a8638: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A863Cu; }
        if (ctx->pc != 0x1A863Cu) { return; }
    }
    ctx->pc = 0x1A863Cu;
label_1a863c:
    // 0x1a863c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a863cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8640:
    // 0x1a8640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8644:
    if (ctx->pc == 0x1A8644u) {
        ctx->pc = 0x1A8648u;
        goto label_1a8648;
    }
    ctx->pc = 0x1A8640u;
    {
        const bool branch_taken_0x1a8640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8640) {
            ctx->pc = 0x1A8650u;
            goto label_1a8650;
        }
    }
    ctx->pc = 0x1A8648u;
label_1a8648:
    // 0x1a8648: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x1a8648u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a864c:
    // 0x1a864c: 0x0  nop
    ctx->pc = 0x1a864cu;
    // NOP
label_1a8650:
    // 0x1a8650: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8654:
    // 0x1a8654: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8658:
    // 0x1a8658: 0xc0655a8  jal         func_1956A0
label_1a865c:
    if (ctx->pc == 0x1A865Cu) {
        ctx->pc = 0x1A865Cu;
            // 0x1a865c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A8660u;
        goto label_1a8660;
    }
    ctx->pc = 0x1A8658u;
    SET_GPR_U32(ctx, 31, 0x1A8660u);
    ctx->pc = 0x1A865Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8658u;
            // 0x1a865c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8660u; }
        if (ctx->pc != 0x1A8660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8660u; }
        if (ctx->pc != 0x1A8660u) { return; }
    }
    ctx->pc = 0x1A8660u;
label_1a8660:
    // 0x1a8660: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8664:
    // 0x1a8664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a8664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8668:
    // 0x1a8668: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a866c:
    // 0x1a866c: 0xc0652b4  jal         func_194AD0
label_1a8670:
    if (ctx->pc == 0x1A8670u) {
        ctx->pc = 0x1A8670u;
            // 0x1a8670: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A8674u;
        goto label_1a8674;
    }
    ctx->pc = 0x1A866Cu;
    SET_GPR_U32(ctx, 31, 0x1A8674u);
    ctx->pc = 0x1A8670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A866Cu;
            // 0x1a8670: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8674u; }
        if (ctx->pc != 0x1A8674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8674u; }
        if (ctx->pc != 0x1A8674u) { return; }
    }
    ctx->pc = 0x1A8674u;
label_1a8674:
    // 0x1a8674: 0xc050bb4  jal         func_142ED0
label_1a8678:
    if (ctx->pc == 0x1A8678u) {
        ctx->pc = 0x1A8678u;
            // 0x1a8678: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A867Cu;
        goto label_1a867c;
    }
    ctx->pc = 0x1A8674u;
    SET_GPR_U32(ctx, 31, 0x1A867Cu);
    ctx->pc = 0x1A8678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8674u;
            // 0x1a8678: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A867Cu; }
        if (ctx->pc != 0x1A867Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A867Cu; }
        if (ctx->pc != 0x1A867Cu) { return; }
    }
    ctx->pc = 0x1A867Cu;
label_1a867c:
    // 0x1a867c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a867cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8680:
    // 0x1a8680: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8684:
    if (ctx->pc == 0x1A8684u) {
        ctx->pc = 0x1A8688u;
        goto label_1a8688;
    }
    ctx->pc = 0x1A8680u;
    {
        const bool branch_taken_0x1a8680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8680) {
            ctx->pc = 0x1A8690u;
            goto label_1a8690;
        }
    }
    ctx->pc = 0x1A8688u;
label_1a8688:
    // 0x1a8688: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x1a8688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a868c:
    // 0x1a868c: 0x0  nop
    ctx->pc = 0x1a868cu;
    // NOP
label_1a8690:
    // 0x1a8690: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8694:
    // 0x1a8694: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8698:
    // 0x1a8698: 0xc0655a8  jal         func_1956A0
label_1a869c:
    if (ctx->pc == 0x1A869Cu) {
        ctx->pc = 0x1A869Cu;
            // 0x1a869c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A86A0u;
        goto label_1a86a0;
    }
    ctx->pc = 0x1A8698u;
    SET_GPR_U32(ctx, 31, 0x1A86A0u);
    ctx->pc = 0x1A869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8698u;
            // 0x1a869c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86A0u; }
        if (ctx->pc != 0x1A86A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86A0u; }
        if (ctx->pc != 0x1A86A0u) { return; }
    }
    ctx->pc = 0x1A86A0u;
label_1a86a0:
    // 0x1a86a0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a86a4:
    // 0x1a86a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a86a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a86a8:
    // 0x1a86a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a86a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a86ac:
    // 0x1a86ac: 0xc0652b4  jal         func_194AD0
label_1a86b0:
    if (ctx->pc == 0x1A86B0u) {
        ctx->pc = 0x1A86B0u;
            // 0x1a86b0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A86B4u;
        goto label_1a86b4;
    }
    ctx->pc = 0x1A86ACu;
    SET_GPR_U32(ctx, 31, 0x1A86B4u);
    ctx->pc = 0x1A86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A86ACu;
            // 0x1a86b0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86B4u; }
        if (ctx->pc != 0x1A86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86B4u; }
        if (ctx->pc != 0x1A86B4u) { return; }
    }
    ctx->pc = 0x1A86B4u;
label_1a86b4:
    // 0x1a86b4: 0x1000010a  b           . + 4 + (0x10A << 2)
label_1a86b8:
    if (ctx->pc == 0x1A86B8u) {
        ctx->pc = 0x1A86BCu;
        goto label_1a86bc;
    }
    ctx->pc = 0x1A86B4u;
    {
        const bool branch_taken_0x1a86b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a86b4) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A86BCu;
label_1a86bc:
    // 0x1a86bc: 0x0  nop
    ctx->pc = 0x1a86bcu;
    // NOP
label_1a86c0:
    // 0x1a86c0: 0xc065d00  jal         func_197400
label_1a86c4:
    if (ctx->pc == 0x1A86C4u) {
        ctx->pc = 0x1A86C8u;
        goto label_1a86c8;
    }
    ctx->pc = 0x1A86C0u;
    SET_GPR_U32(ctx, 31, 0x1A86C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86C8u; }
        if (ctx->pc != 0x1A86C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A86C8u; }
        if (ctx->pc != 0x1A86C8u) { return; }
    }
    ctx->pc = 0x1A86C8u;
label_1a86c8:
    // 0x1a86c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a86c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a86cc:
    // 0x1a86cc: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_1a86d0:
    if (ctx->pc == 0x1A86D0u) {
        ctx->pc = 0x1A86D4u;
        goto label_1a86d4;
    }
    ctx->pc = 0x1A86CCu;
    {
        const bool branch_taken_0x1a86cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a86cc) {
            ctx->pc = 0x1A87D8u;
            goto label_1a87d8;
        }
    }
    ctx->pc = 0x1A86D4u;
label_1a86d4:
    // 0x1a86d4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a86d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a86d8:
    // 0x1a86d8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a86dc:
    // 0x1a86dc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a86dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a86e0:
    // 0x1a86e0: 0x0  nop
    ctx->pc = 0x1a86e0u;
    // NOP
label_1a86e4:
    // 0x1a86e4: 0x0  nop
    ctx->pc = 0x1a86e4u;
    // NOP
label_1a86e8:
    // 0x1a86e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a86e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a86ec:
    // 0x1a86ec: 0x144000fc  bnez        $v0, . + 4 + (0xFC << 2)
label_1a86f0:
    if (ctx->pc == 0x1A86F0u) {
        ctx->pc = 0x1A86F4u;
        goto label_1a86f4;
    }
    ctx->pc = 0x1A86ECu;
    {
        const bool branch_taken_0x1a86ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a86ec) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A86F4u;
label_1a86f4:
    // 0x1a86f4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a86f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a86f8:
    // 0x1a86f8: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1a86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1a86fc:
    // 0x1a86fc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a86fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8700:
    // 0x1a8700: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8704:
    // 0x1a8704: 0xc05d080  jal         func_174200
label_1a8708:
    if (ctx->pc == 0x1A8708u) {
        ctx->pc = 0x1A8708u;
            // 0x1a8708: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A870Cu;
        goto label_1a870c;
    }
    ctx->pc = 0x1A8704u;
    SET_GPR_U32(ctx, 31, 0x1A870Cu);
    ctx->pc = 0x1A8708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8704u;
            // 0x1a8708: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A870Cu; }
        if (ctx->pc != 0x1A870Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A870Cu; }
        if (ctx->pc != 0x1A870Cu) { return; }
    }
    ctx->pc = 0x1A870Cu;
label_1a870c:
    // 0x1a870c: 0xc050bb4  jal         func_142ED0
label_1a8710:
    if (ctx->pc == 0x1A8710u) {
        ctx->pc = 0x1A8714u;
        goto label_1a8714;
    }
    ctx->pc = 0x1A870Cu;
    SET_GPR_U32(ctx, 31, 0x1A8714u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8714u; }
        if (ctx->pc != 0x1A8714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8714u; }
        if (ctx->pc != 0x1A8714u) { return; }
    }
    ctx->pc = 0x1A8714u;
label_1a8714:
    // 0x1a8714: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1a8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a8718:
    // 0x1a8718: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8718u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a871c:
    // 0x1a871c: 0x0  nop
    ctx->pc = 0x1a871cu;
    // NOP
label_1a8720:
    // 0x1a8720: 0x0  nop
    ctx->pc = 0x1a8720u;
    // NOP
label_1a8724:
    // 0x1a8724: 0x8810  mfhi        $s1
    ctx->pc = 0x1a8724u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1a8728:
    // 0x1a8728: 0xc050bb4  jal         func_142ED0
label_1a872c:
    if (ctx->pc == 0x1A872Cu) {
        ctx->pc = 0x1A8730u;
        goto label_1a8730;
    }
    ctx->pc = 0x1A8728u;
    SET_GPR_U32(ctx, 31, 0x1A8730u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8730u; }
        if (ctx->pc != 0x1A8730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8730u; }
        if (ctx->pc != 0x1A8730u) { return; }
    }
    ctx->pc = 0x1A8730u;
label_1a8730:
    // 0x1a8730: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8730u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8734:
    // 0x1a8734: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8738:
    if (ctx->pc == 0x1A8738u) {
        ctx->pc = 0x1A873Cu;
        goto label_1a873c;
    }
    ctx->pc = 0x1A8734u;
    {
        const bool branch_taken_0x1a8734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8734) {
            ctx->pc = 0x1A8748u;
            goto label_1a8748;
        }
    }
    ctx->pc = 0x1A873Cu;
label_1a873c:
    // 0x1a873c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a8740:
    // 0x1a8740: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1a8740u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a8744:
    // 0x1a8744: 0x0  nop
    ctx->pc = 0x1a8744u;
    // NOP
label_1a8748:
    // 0x1a8748: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a874c:
    // 0x1a874c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a874cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8750:
    // 0x1a8750: 0xc0655a8  jal         func_1956A0
label_1a8754:
    if (ctx->pc == 0x1A8754u) {
        ctx->pc = 0x1A8754u;
            // 0x1a8754: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A8758u;
        goto label_1a8758;
    }
    ctx->pc = 0x1A8750u;
    SET_GPR_U32(ctx, 31, 0x1A8758u);
    ctx->pc = 0x1A8754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8750u;
            // 0x1a8754: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8758u; }
        if (ctx->pc != 0x1A8758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8758u; }
        if (ctx->pc != 0x1A8758u) { return; }
    }
    ctx->pc = 0x1A8758u;
label_1a8758:
    // 0x1a8758: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a875c:
    // 0x1a875c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a875cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8760:
    // 0x1a8760: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8764:
    // 0x1a8764: 0xc0652b4  jal         func_194AD0
label_1a8768:
    if (ctx->pc == 0x1A8768u) {
        ctx->pc = 0x1A8768u;
            // 0x1a8768: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A876Cu;
        goto label_1a876c;
    }
    ctx->pc = 0x1A8764u;
    SET_GPR_U32(ctx, 31, 0x1A876Cu);
    ctx->pc = 0x1A8768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8764u;
            // 0x1a8768: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A876Cu; }
        if (ctx->pc != 0x1A876Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A876Cu; }
        if (ctx->pc != 0x1A876Cu) { return; }
    }
    ctx->pc = 0x1A876Cu;
label_1a876c:
    // 0x1a876c: 0xc050bb4  jal         func_142ED0
label_1a8770:
    if (ctx->pc == 0x1A8770u) {
        ctx->pc = 0x1A8774u;
        goto label_1a8774;
    }
    ctx->pc = 0x1A876Cu;
    SET_GPR_U32(ctx, 31, 0x1A8774u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8774u; }
        if (ctx->pc != 0x1A8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8774u; }
        if (ctx->pc != 0x1A8774u) { return; }
    }
    ctx->pc = 0x1A8774u;
label_1a8774:
    // 0x1a8774: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1a8774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a8778:
    // 0x1a8778: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8778u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a877c:
    // 0x1a877c: 0x0  nop
    ctx->pc = 0x1a877cu;
    // NOP
label_1a8780:
    // 0x1a8780: 0x0  nop
    ctx->pc = 0x1a8780u;
    // NOP
label_1a8784:
    // 0x1a8784: 0x8810  mfhi        $s1
    ctx->pc = 0x1a8784u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1a8788:
    // 0x1a8788: 0xc050bb4  jal         func_142ED0
label_1a878c:
    if (ctx->pc == 0x1A878Cu) {
        ctx->pc = 0x1A8790u;
        goto label_1a8790;
    }
    ctx->pc = 0x1A8788u;
    SET_GPR_U32(ctx, 31, 0x1A8790u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8790u; }
        if (ctx->pc != 0x1A8790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8790u; }
        if (ctx->pc != 0x1A8790u) { return; }
    }
    ctx->pc = 0x1A8790u;
label_1a8790:
    // 0x1a8790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8790u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8794:
    // 0x1a8794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8798:
    if (ctx->pc == 0x1A8798u) {
        ctx->pc = 0x1A879Cu;
        goto label_1a879c;
    }
    ctx->pc = 0x1A8794u;
    {
        const bool branch_taken_0x1a8794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8794) {
            ctx->pc = 0x1A87A8u;
            goto label_1a87a8;
        }
    }
    ctx->pc = 0x1A879Cu;
label_1a879c:
    // 0x1a879c: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a87a0:
    // 0x1a87a0: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1a87a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a87a4:
    // 0x1a87a4: 0x0  nop
    ctx->pc = 0x1a87a4u;
    // NOP
label_1a87a8:
    // 0x1a87a8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a87ac:
    // 0x1a87ac: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a87acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a87b0:
    // 0x1a87b0: 0xc0655a8  jal         func_1956A0
label_1a87b4:
    if (ctx->pc == 0x1A87B4u) {
        ctx->pc = 0x1A87B4u;
            // 0x1a87b4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A87B8u;
        goto label_1a87b8;
    }
    ctx->pc = 0x1A87B0u;
    SET_GPR_U32(ctx, 31, 0x1A87B8u);
    ctx->pc = 0x1A87B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87B0u;
            // 0x1a87b4: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87B8u; }
        if (ctx->pc != 0x1A87B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87B8u; }
        if (ctx->pc != 0x1A87B8u) { return; }
    }
    ctx->pc = 0x1A87B8u;
label_1a87b8:
    // 0x1a87b8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a87b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a87bc:
    // 0x1a87bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a87bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a87c0:
    // 0x1a87c0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a87c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a87c4:
    // 0x1a87c4: 0xc0652b4  jal         func_194AD0
label_1a87c8:
    if (ctx->pc == 0x1A87C8u) {
        ctx->pc = 0x1A87C8u;
            // 0x1a87c8: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A87CCu;
        goto label_1a87cc;
    }
    ctx->pc = 0x1A87C4u;
    SET_GPR_U32(ctx, 31, 0x1A87CCu);
    ctx->pc = 0x1A87C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87C4u;
            // 0x1a87c8: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87CCu; }
        if (ctx->pc != 0x1A87CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87CCu; }
        if (ctx->pc != 0x1A87CCu) { return; }
    }
    ctx->pc = 0x1A87CCu;
label_1a87cc:
    // 0x1a87cc: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_1a87d0:
    if (ctx->pc == 0x1A87D0u) {
        ctx->pc = 0x1A87D4u;
        goto label_1a87d4;
    }
    ctx->pc = 0x1A87CCu;
    {
        const bool branch_taken_0x1a87cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87cc) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A87D4u;
label_1a87d4:
    // 0x1a87d4: 0x0  nop
    ctx->pc = 0x1a87d4u;
    // NOP
label_1a87d8:
    // 0x1a87d8: 0xc065d00  jal         func_197400
label_1a87dc:
    if (ctx->pc == 0x1A87DCu) {
        ctx->pc = 0x1A87E0u;
        goto label_1a87e0;
    }
    ctx->pc = 0x1A87D8u;
    SET_GPR_U32(ctx, 31, 0x1A87E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87E0u; }
        if (ctx->pc != 0x1A87E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A87E0u; }
        if (ctx->pc != 0x1A87E0u) { return; }
    }
    ctx->pc = 0x1A87E0u;
label_1a87e0:
    // 0x1a87e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a87e4:
    // 0x1a87e4: 0x144300be  bne         $v0, $v1, . + 4 + (0xBE << 2)
label_1a87e8:
    if (ctx->pc == 0x1A87E8u) {
        ctx->pc = 0x1A87ECu;
        goto label_1a87ec;
    }
    ctx->pc = 0x1A87E4u;
    {
        const bool branch_taken_0x1a87e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a87e4) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A87ECu;
label_1a87ec:
    // 0x1a87ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a87f0:
    // 0x1a87f0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1a87f4:
    if (ctx->pc == 0x1A87F4u) {
        ctx->pc = 0x1A87F4u;
            // 0x1a87f4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->pc = 0x1A87F8u;
        goto label_1a87f8;
    }
    ctx->pc = 0x1A87F0u;
    {
        const bool branch_taken_0x1a87f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1A87F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A87F0u;
            // 0x1a87f4: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a87f0) {
            ctx->pc = 0x1A8804u;
            goto label_1a8804;
        }
    }
    ctx->pc = 0x1A87F8u;
label_1a87f8:
    // 0x1a87f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a87fc:
    if (ctx->pc == 0x1A87FCu) {
        ctx->pc = 0x1A8800u;
        goto label_1a8800;
    }
    ctx->pc = 0x1A87F8u;
    {
        const bool branch_taken_0x1a87f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a87f8) {
            ctx->pc = 0x1A8804u;
            goto label_1a8804;
        }
    }
    ctx->pc = 0x1A8800u;
label_1a8800:
    // 0x1a8800: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1a8800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1a8804:
    // 0x1a8804: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_1a8808:
    if (ctx->pc == 0x1A8808u) {
        ctx->pc = 0x1A880Cu;
        goto label_1a880c;
    }
    ctx->pc = 0x1A8804u;
    {
        const bool branch_taken_0x1a8804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8804) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A880Cu;
label_1a880c:
    // 0x1a880c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8810:
    // 0x1a8810: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1a8810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1a8814:
    // 0x1a8814: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8818:
    // 0x1a8818: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8818u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a881c:
    // 0x1a881c: 0xc05d080  jal         func_174200
label_1a8820:
    if (ctx->pc == 0x1A8820u) {
        ctx->pc = 0x1A8820u;
            // 0x1a8820: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8824u;
        goto label_1a8824;
    }
    ctx->pc = 0x1A881Cu;
    SET_GPR_U32(ctx, 31, 0x1A8824u);
    ctx->pc = 0x1A8820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A881Cu;
            // 0x1a8820: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8824u; }
        if (ctx->pc != 0x1A8824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8824u; }
        if (ctx->pc != 0x1A8824u) { return; }
    }
    ctx->pc = 0x1A8824u;
label_1a8824:
    // 0x1a8824: 0xc050bb4  jal         func_142ED0
label_1a8828:
    if (ctx->pc == 0x1A8828u) {
        ctx->pc = 0x1A882Cu;
        goto label_1a882c;
    }
    ctx->pc = 0x1A8824u;
    SET_GPR_U32(ctx, 31, 0x1A882Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A882Cu; }
        if (ctx->pc != 0x1A882Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A882Cu; }
        if (ctx->pc != 0x1A882Cu) { return; }
    }
    ctx->pc = 0x1A882Cu;
label_1a882c:
    // 0x1a882c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a8830:
    // 0x1a8830: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8830u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8834:
    // 0x1a8834: 0x0  nop
    ctx->pc = 0x1a8834u;
    // NOP
label_1a8838:
    // 0x1a8838: 0x0  nop
    ctx->pc = 0x1a8838u;
    // NOP
label_1a883c:
    // 0x1a883c: 0x8810  mfhi        $s1
    ctx->pc = 0x1a883cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1a8840:
    // 0x1a8840: 0xc050bb4  jal         func_142ED0
label_1a8844:
    if (ctx->pc == 0x1A8844u) {
        ctx->pc = 0x1A8848u;
        goto label_1a8848;
    }
    ctx->pc = 0x1A8840u;
    SET_GPR_U32(ctx, 31, 0x1A8848u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8848u; }
        if (ctx->pc != 0x1A8848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8848u; }
        if (ctx->pc != 0x1A8848u) { return; }
    }
    ctx->pc = 0x1A8848u;
label_1a8848:
    // 0x1a8848: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8848u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a884c:
    // 0x1a884c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8850:
    if (ctx->pc == 0x1A8850u) {
        ctx->pc = 0x1A8854u;
        goto label_1a8854;
    }
    ctx->pc = 0x1A884Cu;
    {
        const bool branch_taken_0x1a884c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a884c) {
            ctx->pc = 0x1A8860u;
            goto label_1a8860;
        }
    }
    ctx->pc = 0x1A8854u;
label_1a8854:
    // 0x1a8854: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a8854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a8858:
    // 0x1a8858: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1a8858u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a885c:
    // 0x1a885c: 0x0  nop
    ctx->pc = 0x1a885cu;
    // NOP
label_1a8860:
    // 0x1a8860: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8864:
    // 0x1a8864: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8868:
    // 0x1a8868: 0xc0655a8  jal         func_1956A0
label_1a886c:
    if (ctx->pc == 0x1A886Cu) {
        ctx->pc = 0x1A886Cu;
            // 0x1a886c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A8870u;
        goto label_1a8870;
    }
    ctx->pc = 0x1A8868u;
    SET_GPR_U32(ctx, 31, 0x1A8870u);
    ctx->pc = 0x1A886Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8868u;
            // 0x1a886c: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8870u; }
        if (ctx->pc != 0x1A8870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8870u; }
        if (ctx->pc != 0x1A8870u) { return; }
    }
    ctx->pc = 0x1A8870u;
label_1a8870:
    // 0x1a8870: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8874:
    // 0x1a8874: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a8874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8878:
    // 0x1a8878: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a887c:
    // 0x1a887c: 0xc0652b4  jal         func_194AD0
label_1a8880:
    if (ctx->pc == 0x1A8880u) {
        ctx->pc = 0x1A8880u;
            // 0x1a8880: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1A8884u;
        goto label_1a8884;
    }
    ctx->pc = 0x1A887Cu;
    SET_GPR_U32(ctx, 31, 0x1A8884u);
    ctx->pc = 0x1A8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A887Cu;
            // 0x1a8880: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8884u; }
        if (ctx->pc != 0x1A8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8884u; }
        if (ctx->pc != 0x1A8884u) { return; }
    }
    ctx->pc = 0x1A8884u;
label_1a8884:
    // 0x1a8884: 0xc050bb4  jal         func_142ED0
label_1a8888:
    if (ctx->pc == 0x1A8888u) {
        ctx->pc = 0x1A888Cu;
        goto label_1a888c;
    }
    ctx->pc = 0x1A8884u;
    SET_GPR_U32(ctx, 31, 0x1A888Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A888Cu; }
        if (ctx->pc != 0x1A888Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A888Cu; }
        if (ctx->pc != 0x1A888Cu) { return; }
    }
    ctx->pc = 0x1A888Cu;
label_1a888c:
    // 0x1a888c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1a888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a8890:
    // 0x1a8890: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8890u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8894:
    // 0x1a8894: 0x0  nop
    ctx->pc = 0x1a8894u;
    // NOP
label_1a8898:
    // 0x1a8898: 0x0  nop
    ctx->pc = 0x1a8898u;
    // NOP
label_1a889c:
    // 0x1a889c: 0x8810  mfhi        $s1
    ctx->pc = 0x1a889cu;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_1a88a0:
    // 0x1a88a0: 0xc050bb4  jal         func_142ED0
label_1a88a4:
    if (ctx->pc == 0x1A88A4u) {
        ctx->pc = 0x1A88A8u;
        goto label_1a88a8;
    }
    ctx->pc = 0x1A88A0u;
    SET_GPR_U32(ctx, 31, 0x1A88A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88A8u; }
        if (ctx->pc != 0x1A88A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88A8u; }
        if (ctx->pc != 0x1A88A8u) { return; }
    }
    ctx->pc = 0x1A88A8u;
label_1a88a8:
    // 0x1a88a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a88a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a88ac:
    // 0x1a88ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a88b0:
    if (ctx->pc == 0x1A88B0u) {
        ctx->pc = 0x1A88B4u;
        goto label_1a88b4;
    }
    ctx->pc = 0x1A88ACu;
    {
        const bool branch_taken_0x1a88ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a88ac) {
            ctx->pc = 0x1A88C0u;
            goto label_1a88c0;
        }
    }
    ctx->pc = 0x1A88B4u;
label_1a88b4:
    // 0x1a88b4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1a88b8:
    // 0x1a88b8: 0x518823  subu        $s1, $v0, $s1
    ctx->pc = 0x1a88b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a88bc:
    // 0x1a88bc: 0x0  nop
    ctx->pc = 0x1a88bcu;
    // NOP
label_1a88c0:
    // 0x1a88c0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a88c4:
    // 0x1a88c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a88c8:
    // 0x1a88c8: 0xc0655a8  jal         func_1956A0
label_1a88cc:
    if (ctx->pc == 0x1A88CCu) {
        ctx->pc = 0x1A88CCu;
            // 0x1a88cc: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A88D0u;
        goto label_1a88d0;
    }
    ctx->pc = 0x1A88C8u;
    SET_GPR_U32(ctx, 31, 0x1A88D0u);
    ctx->pc = 0x1A88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88C8u;
            // 0x1a88cc: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88D0u; }
        if (ctx->pc != 0x1A88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88D0u; }
        if (ctx->pc != 0x1A88D0u) { return; }
    }
    ctx->pc = 0x1A88D0u;
label_1a88d0:
    // 0x1a88d0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a88d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a88d4:
    // 0x1a88d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a88d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a88d8:
    // 0x1a88d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a88dc:
    // 0x1a88dc: 0xc0652b4  jal         func_194AD0
label_1a88e0:
    if (ctx->pc == 0x1A88E0u) {
        ctx->pc = 0x1A88E0u;
            // 0x1a88e0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1A88E4u;
        goto label_1a88e4;
    }
    ctx->pc = 0x1A88DCu;
    SET_GPR_U32(ctx, 31, 0x1A88E4u);
    ctx->pc = 0x1A88E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88DCu;
            // 0x1a88e0: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194AD0u;
    if (runtime->hasFunction(0x194AD0u)) {
        auto targetFn = runtime->lookupFunction(0x194AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88E4u; }
        if (ctx->pc != 0x1A88E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Kowase_0x194ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A88E4u; }
        if (ctx->pc != 0x1A88E4u) { return; }
    }
    ctx->pc = 0x1A88E4u;
label_1a88e4:
    // 0x1a88e4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_1a88e8:
    if (ctx->pc == 0x1A88E8u) {
        ctx->pc = 0x1A88ECu;
        goto label_1a88ec;
    }
    ctx->pc = 0x1A88E4u;
    {
        const bool branch_taken_0x1a88e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a88e4) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A88ECu;
label_1a88ec:
    // 0x1a88ec: 0x0  nop
    ctx->pc = 0x1a88ecu;
    // NOP
label_1a88f0:
    // 0x1a88f0: 0x286100a1  slti        $at, $v1, 0xA1
    ctx->pc = 0x1a88f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
label_1a88f4:
    // 0x1a88f4: 0x10200072  beqz        $at, . + 4 + (0x72 << 2)
label_1a88f8:
    if (ctx->pc == 0x1A88F8u) {
        ctx->pc = 0x1A88F8u;
            // 0x1a88f8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A88FCu;
        goto label_1a88fc;
    }
    ctx->pc = 0x1A88F4u;
    {
        const bool branch_taken_0x1a88f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88F4u;
            // 0x1a88f8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88f4) {
            ctx->pc = 0x1A8AC0u;
            goto label_1a8ac0;
        }
    }
    ctx->pc = 0x1A88FCu;
label_1a88fc:
    // 0x1a88fc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a88fcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a8900:
    // 0x1a8900: 0xc065d00  jal         func_197400
label_1a8904:
    if (ctx->pc == 0x1A8904u) {
        ctx->pc = 0x1A8904u;
            // 0x1a8904: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x1A8908u;
        goto label_1a8908;
    }
    ctx->pc = 0x1A8900u;
    SET_GPR_U32(ctx, 31, 0x1A8908u);
    ctx->pc = 0x1A8904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8900u;
            // 0x1a8904: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8908u; }
        if (ctx->pc != 0x1A8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8908u; }
        if (ctx->pc != 0x1A8908u) { return; }
    }
    ctx->pc = 0x1A8908u;
label_1a8908:
    // 0x1a8908: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1a890c:
    if (ctx->pc == 0x1A890Cu) {
        ctx->pc = 0x1A8910u;
        goto label_1a8910;
    }
    ctx->pc = 0x1A8908u;
    {
        const bool branch_taken_0x1a8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8908) {
            ctx->pc = 0x1A8948u;
            goto label_1a8948;
        }
    }
    ctx->pc = 0x1A8910u;
label_1a8910:
    // 0x1a8910: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1a8910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8914:
    // 0x1a8914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8918:
    // 0x1a8918: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a891c:
    // 0x1a891c: 0xc065478  jal         func_1951E0
label_1a8920:
    if (ctx->pc == 0x1A8920u) {
        ctx->pc = 0x1A8920u;
            // 0x1a8920: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1A8924u;
        goto label_1a8924;
    }
    ctx->pc = 0x1A891Cu;
    SET_GPR_U32(ctx, 31, 0x1A8924u);
    ctx->pc = 0x1A8920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A891Cu;
            // 0x1a8920: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8924u; }
        if (ctx->pc != 0x1A8924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8924u; }
        if (ctx->pc != 0x1A8924u) { return; }
    }
    ctx->pc = 0x1A8924u;
label_1a8924:
    // 0x1a8924: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8928:
    // 0x1a8928: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a8928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a892c:
    // 0x1a892c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8930:
    // 0x1a8930: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8934:
    // 0x1a8934: 0xc05d080  jal         func_174200
label_1a8938:
    if (ctx->pc == 0x1A8938u) {
        ctx->pc = 0x1A8938u;
            // 0x1a8938: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A893Cu;
        goto label_1a893c;
    }
    ctx->pc = 0x1A8934u;
    SET_GPR_U32(ctx, 31, 0x1A893Cu);
    ctx->pc = 0x1A8938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8934u;
            // 0x1a8938: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A893Cu; }
        if (ctx->pc != 0x1A893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A893Cu; }
        if (ctx->pc != 0x1A893Cu) { return; }
    }
    ctx->pc = 0x1A893Cu;
label_1a893c:
    // 0x1a893c: 0x10000054  b           . + 4 + (0x54 << 2)
label_1a8940:
    if (ctx->pc == 0x1A8940u) {
        ctx->pc = 0x1A8944u;
        goto label_1a8944;
    }
    ctx->pc = 0x1A893Cu;
    {
        const bool branch_taken_0x1a893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a893c) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A8944u;
label_1a8944:
    // 0x1a8944: 0x0  nop
    ctx->pc = 0x1a8944u;
    // NOP
label_1a8948:
    // 0x1a8948: 0xc065d00  jal         func_197400
label_1a894c:
    if (ctx->pc == 0x1A894Cu) {
        ctx->pc = 0x1A8950u;
        goto label_1a8950;
    }
    ctx->pc = 0x1A8948u;
    SET_GPR_U32(ctx, 31, 0x1A8950u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8950u; }
        if (ctx->pc != 0x1A8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8950u; }
        if (ctx->pc != 0x1A8950u) { return; }
    }
    ctx->pc = 0x1A8950u;
label_1a8950:
    // 0x1a8950: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8954:
    // 0x1a8954: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_1a8958:
    if (ctx->pc == 0x1A8958u) {
        ctx->pc = 0x1A895Cu;
        goto label_1a895c;
    }
    ctx->pc = 0x1A8954u;
    {
        const bool branch_taken_0x1a8954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a8954) {
            ctx->pc = 0x1A89B8u;
            goto label_1a89b8;
        }
    }
    ctx->pc = 0x1A895Cu;
label_1a895c:
    // 0x1a895c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1a895cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1a8960:
    // 0x1a8960: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8964:
    // 0x1a8964: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a8964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1a8968:
    // 0x1a8968: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a896c:
    // 0x1a896c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a896cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8970:
    // 0x1a8970: 0xc065478  jal         func_1951E0
label_1a8974:
    if (ctx->pc == 0x1A8974u) {
        ctx->pc = 0x1A8974u;
            // 0x1a8974: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8978u;
        goto label_1a8978;
    }
    ctx->pc = 0x1A8970u;
    SET_GPR_U32(ctx, 31, 0x1A8978u);
    ctx->pc = 0x1A8974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8970u;
            // 0x1a8974: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8978u; }
        if (ctx->pc != 0x1A8978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8978u; }
        if (ctx->pc != 0x1A8978u) { return; }
    }
    ctx->pc = 0x1A8978u;
label_1a8978:
    // 0x1a8978: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1a897c:
    // 0x1a897c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8980:
    // 0x1a8980: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x1a8980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
label_1a8984:
    // 0x1a8984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8988:
    // 0x1a8988: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a898c:
    // 0x1a898c: 0xc065478  jal         func_1951E0
label_1a8990:
    if (ctx->pc == 0x1A8990u) {
        ctx->pc = 0x1A8990u;
            // 0x1a8990: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8994u;
        goto label_1a8994;
    }
    ctx->pc = 0x1A898Cu;
    SET_GPR_U32(ctx, 31, 0x1A8994u);
    ctx->pc = 0x1A8990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A898Cu;
            // 0x1a8990: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8994u; }
        if (ctx->pc != 0x1A8994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8994u; }
        if (ctx->pc != 0x1A8994u) { return; }
    }
    ctx->pc = 0x1A8994u;
label_1a8994:
    // 0x1a8994: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8998:
    // 0x1a8998: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a8998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a899c:
    // 0x1a899c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a899cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a89a0:
    // 0x1a89a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a89a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a89a4:
    // 0x1a89a4: 0xc05d080  jal         func_174200
label_1a89a8:
    if (ctx->pc == 0x1A89A8u) {
        ctx->pc = 0x1A89A8u;
            // 0x1a89a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A89ACu;
        goto label_1a89ac;
    }
    ctx->pc = 0x1A89A4u;
    SET_GPR_U32(ctx, 31, 0x1A89ACu);
    ctx->pc = 0x1A89A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89A4u;
            // 0x1a89a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89ACu; }
        if (ctx->pc != 0x1A89ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89ACu; }
        if (ctx->pc != 0x1A89ACu) { return; }
    }
    ctx->pc = 0x1A89ACu;
label_1a89ac:
    // 0x1a89ac: 0x10000038  b           . + 4 + (0x38 << 2)
label_1a89b0:
    if (ctx->pc == 0x1A89B0u) {
        ctx->pc = 0x1A89B4u;
        goto label_1a89b4;
    }
    ctx->pc = 0x1A89ACu;
    {
        const bool branch_taken_0x1a89ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a89ac) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A89B4u;
label_1a89b4:
    // 0x1a89b4: 0x0  nop
    ctx->pc = 0x1a89b4u;
    // NOP
label_1a89b8:
    // 0x1a89b8: 0xc065d00  jal         func_197400
label_1a89bc:
    if (ctx->pc == 0x1A89BCu) {
        ctx->pc = 0x1A89C0u;
        goto label_1a89c0;
    }
    ctx->pc = 0x1A89B8u;
    SET_GPR_U32(ctx, 31, 0x1A89C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89C0u; }
        if (ctx->pc != 0x1A89C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89C0u; }
        if (ctx->pc != 0x1A89C0u) { return; }
    }
    ctx->pc = 0x1A89C0u;
label_1a89c0:
    // 0x1a89c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a89c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a89c4:
    // 0x1a89c4: 0x14430032  bne         $v0, $v1, . + 4 + (0x32 << 2)
label_1a89c8:
    if (ctx->pc == 0x1A89C8u) {
        ctx->pc = 0x1A89CCu;
        goto label_1a89cc;
    }
    ctx->pc = 0x1A89C4u;
    {
        const bool branch_taken_0x1a89c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a89c4) {
            ctx->pc = 0x1A8A90u;
            goto label_1a8a90;
        }
    }
    ctx->pc = 0x1A89CCu;
label_1a89cc:
    // 0x1a89cc: 0x3c03bfc0  lui         $v1, 0xBFC0
    ctx->pc = 0x1a89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49088 << 16));
label_1a89d0:
    // 0x1a89d0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a89d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a89d4:
    // 0x1a89d4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a89d8:
    // 0x1a89d8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a89d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a89dc:
    // 0x1a89dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a89dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a89e0:
    // 0x1a89e0: 0xc065478  jal         func_1951E0
label_1a89e4:
    if (ctx->pc == 0x1A89E4u) {
        ctx->pc = 0x1A89E4u;
            // 0x1a89e4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A89E8u;
        goto label_1a89e8;
    }
    ctx->pc = 0x1A89E0u;
    SET_GPR_U32(ctx, 31, 0x1A89E8u);
    ctx->pc = 0x1A89E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89E0u;
            // 0x1a89e4: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89E8u; }
        if (ctx->pc != 0x1A89E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A89E8u; }
        if (ctx->pc != 0x1A89E8u) { return; }
    }
    ctx->pc = 0x1A89E8u;
label_1a89e8:
    // 0x1a89e8: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1a89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1a89ec:
    // 0x1a89ec: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a89ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a89f0:
    // 0x1a89f0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1a89f4:
    // 0x1a89f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a89f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a89f8:
    // 0x1a89f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a89f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a89fc:
    // 0x1a89fc: 0xc065478  jal         func_1951E0
label_1a8a00:
    if (ctx->pc == 0x1A8A00u) {
        ctx->pc = 0x1A8A00u;
            // 0x1a8a00: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8A04u;
        goto label_1a8a04;
    }
    ctx->pc = 0x1A89FCu;
    SET_GPR_U32(ctx, 31, 0x1A8A04u);
    ctx->pc = 0x1A8A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A89FCu;
            // 0x1a8a00: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A04u; }
        if (ctx->pc != 0x1A8A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A04u; }
        if (ctx->pc != 0x1A8A04u) { return; }
    }
    ctx->pc = 0x1A8A04u;
label_1a8a04:
    // 0x1a8a04: 0x3c03c020  lui         $v1, 0xC020
    ctx->pc = 0x1a8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49184 << 16));
label_1a8a08:
    // 0x1a8a08: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8a0c:
    // 0x1a8a0c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a8a10:
    // 0x1a8a10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8a10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8a14:
    // 0x1a8a14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8a18:
    // 0x1a8a18: 0xc065478  jal         func_1951E0
label_1a8a1c:
    if (ctx->pc == 0x1A8A1Cu) {
        ctx->pc = 0x1A8A1Cu;
            // 0x1a8a1c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8A20u;
        goto label_1a8a20;
    }
    ctx->pc = 0x1A8A18u;
    SET_GPR_U32(ctx, 31, 0x1A8A20u);
    ctx->pc = 0x1A8A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A18u;
            // 0x1a8a1c: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A20u; }
        if (ctx->pc != 0x1A8A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A20u; }
        if (ctx->pc != 0x1A8A20u) { return; }
    }
    ctx->pc = 0x1A8A20u;
label_1a8a20:
    // 0x1a8a20: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_1a8a24:
    // 0x1a8a24: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8a28:
    // 0x1a8a28: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1a8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
label_1a8a2c:
    // 0x1a8a2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8a2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8a30:
    // 0x1a8a30: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8a34:
    // 0x1a8a34: 0xc065478  jal         func_1951E0
label_1a8a38:
    if (ctx->pc == 0x1A8A38u) {
        ctx->pc = 0x1A8A38u;
            // 0x1a8a38: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8A3Cu;
        goto label_1a8a3c;
    }
    ctx->pc = 0x1A8A34u;
    SET_GPR_U32(ctx, 31, 0x1A8A3Cu);
    ctx->pc = 0x1A8A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A34u;
            // 0x1a8a38: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A3Cu; }
        if (ctx->pc != 0x1A8A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A3Cu; }
        if (ctx->pc != 0x1A8A3Cu) { return; }
    }
    ctx->pc = 0x1A8A3Cu;
label_1a8a3c:
    // 0x1a8a3c: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x1a8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
label_1a8a40:
    // 0x1a8a40: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8a44:
    // 0x1a8a44: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1a8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1a8a48:
    // 0x1a8a48: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8a48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8a4c:
    // 0x1a8a4c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8a50:
    // 0x1a8a50: 0xc065478  jal         func_1951E0
label_1a8a54:
    if (ctx->pc == 0x1A8A54u) {
        ctx->pc = 0x1A8A54u;
            // 0x1a8a54: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8A58u;
        goto label_1a8a58;
    }
    ctx->pc = 0x1A8A50u;
    SET_GPR_U32(ctx, 31, 0x1A8A58u);
    ctx->pc = 0x1A8A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A50u;
            // 0x1a8a54: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A58u; }
        if (ctx->pc != 0x1A8A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A58u; }
        if (ctx->pc != 0x1A8A58u) { return; }
    }
    ctx->pc = 0x1A8A58u;
label_1a8a58:
    // 0x1a8a58: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1a8a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_1a8a5c:
    // 0x1a8a5c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1a8a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8a60:
    // 0x1a8a60: 0x3c02c0a0  lui         $v0, 0xC0A0
    ctx->pc = 0x1a8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49312 << 16));
label_1a8a64:
    // 0x1a8a64: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a8a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8a68:
    // 0x1a8a68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8a6c:
    // 0x1a8a6c: 0xc065478  jal         func_1951E0
label_1a8a70:
    if (ctx->pc == 0x1A8A70u) {
        ctx->pc = 0x1A8A70u;
            // 0x1a8a70: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x1A8A74u;
        goto label_1a8a74;
    }
    ctx->pc = 0x1A8A6Cu;
    SET_GPR_U32(ctx, 31, 0x1A8A74u);
    ctx->pc = 0x1A8A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A6Cu;
            // 0x1a8a70: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1951E0u;
    if (runtime->hasFunction(0x1951E0u)) {
        auto targetFn = runtime->lookupFunction(0x1951E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A74u; }
        if (ctx->pc != 0x1A8A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzoudan_0x1951e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A74u; }
        if (ctx->pc != 0x1A8A74u) { return; }
    }
    ctx->pc = 0x1A8A74u;
label_1a8a74:
    // 0x1a8a74: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8a78:
    // 0x1a8a78: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1a8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_1a8a7c:
    // 0x1a8a7c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8a80:
    // 0x1a8a80: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8a84:
    // 0x1a8a84: 0xc05d080  jal         func_174200
label_1a8a88:
    if (ctx->pc == 0x1A8A88u) {
        ctx->pc = 0x1A8A88u;
            // 0x1a8a88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8A8Cu;
        goto label_1a8a8c;
    }
    ctx->pc = 0x1A8A84u;
    SET_GPR_U32(ctx, 31, 0x1A8A8Cu);
    ctx->pc = 0x1A8A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A84u;
            // 0x1a8a88: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A8Cu; }
        if (ctx->pc != 0x1A8A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8A8Cu; }
        if (ctx->pc != 0x1A8A8Cu) { return; }
    }
    ctx->pc = 0x1A8A8Cu;
label_1a8a8c:
    // 0x1a8a8c: 0x0  nop
    ctx->pc = 0x1a8a8cu;
    // NOP
label_1a8a90:
    // 0x1a8a90: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8a94:
    // 0x1a8a94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a8a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8a98:
    // 0x1a8a98: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1a8a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1a8a9c:
    // 0x1a8a9c: 0xc065590  jal         func_195640
label_1a8aa0:
    if (ctx->pc == 0x1A8AA0u) {
        ctx->pc = 0x1A8AA0u;
            // 0x1a8aa0: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->pc = 0x1A8AA4u;
        goto label_1a8aa4;
    }
    ctx->pc = 0x1A8A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A8AA4u);
    ctx->pc = 0x1A8AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8A9Cu;
            // 0x1a8aa0: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AA4u; }
        if (ctx->pc != 0x1A8AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AA4u; }
        if (ctx->pc != 0x1A8AA4u) { return; }
    }
    ctx->pc = 0x1A8AA4u;
label_1a8aa4:
    // 0x1a8aa4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1a8aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8aa8:
    // 0x1a8aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8aac:
    // 0x1a8aac: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1a8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1a8ab0:
    // 0x1a8ab0: 0xc065590  jal         func_195640
label_1a8ab4:
    if (ctx->pc == 0x1A8AB4u) {
        ctx->pc = 0x1A8AB4u;
            // 0x1a8ab4: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->pc = 0x1A8AB8u;
        goto label_1a8ab8;
    }
    ctx->pc = 0x1A8AB0u;
    SET_GPR_U32(ctx, 31, 0x1A8AB8u);
    ctx->pc = 0x1A8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AB0u;
            // 0x1a8ab4: 0x2445ffe2  addiu       $a1, $v0, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AB8u; }
        if (ctx->pc != 0x1A8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AB8u; }
        if (ctx->pc != 0x1A8AB8u) { return; }
    }
    ctx->pc = 0x1A8AB8u;
label_1a8ab8:
    // 0x1a8ab8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a8abc:
    if (ctx->pc == 0x1A8ABCu) {
        ctx->pc = 0x1A8AC0u;
        goto label_1a8ac0;
    }
    ctx->pc = 0x1A8AB8u;
    {
        const bool branch_taken_0x1a8ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8ab8) {
            ctx->pc = 0x1A8AE0u;
            goto label_1a8ae0;
        }
    }
    ctx->pc = 0x1A8AC0u;
label_1a8ac0:
    // 0x1a8ac0: 0x3c023f85  lui         $v0, 0x3F85
    ctx->pc = 0x1a8ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
label_1a8ac4:
    // 0x1a8ac4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a8ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8ac8:
    // 0x1a8ac8: 0x34421eb8  ori         $v0, $v0, 0x1EB8
    ctx->pc = 0x1a8ac8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)7864u)));
label_1a8acc:
    // 0x1a8acc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8ad0:
    // 0x1a8ad0: 0x0  nop
    ctx->pc = 0x1a8ad0u;
    // NOP
label_1a8ad4:
    // 0x1a8ad4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a8ad4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a8ad8:
    // 0x1a8ad8: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a8ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a8adc:
    // 0x1a8adc: 0x0  nop
    ctx->pc = 0x1a8adcu;
    // NOP
label_1a8ae0:
    // 0x1a8ae0: 0xc04b788  jal         func_12DE20
label_1a8ae4:
    if (ctx->pc == 0x1A8AE4u) {
        ctx->pc = 0x1A8AE4u;
            // 0x1a8ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8AE8u;
        goto label_1a8ae8;
    }
    ctx->pc = 0x1A8AE0u;
    SET_GPR_U32(ctx, 31, 0x1A8AE8u);
    ctx->pc = 0x1A8AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AE0u;
            // 0x1a8ae4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AE8u; }
        if (ctx->pc != 0x1A8AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AE8u; }
        if (ctx->pc != 0x1A8AE8u) { return; }
    }
    ctx->pc = 0x1A8AE8u;
label_1a8ae8:
    // 0x1a8ae8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8aec:
    // 0x1a8aec: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a8aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8af0:
    // 0x1a8af0: 0xc04b7da  jal         func_12DF68
label_1a8af4:
    if (ctx->pc == 0x1A8AF4u) {
        ctx->pc = 0x1A8AF4u;
            // 0x1a8af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8AF8u;
        goto label_1a8af8;
    }
    ctx->pc = 0x1A8AF0u;
    SET_GPR_U32(ctx, 31, 0x1A8AF8u);
    ctx->pc = 0x1A8AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8AF0u;
            // 0x1a8af4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AF8u; }
        if (ctx->pc != 0x1A8AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8AF8u; }
        if (ctx->pc != 0x1A8AF8u) { return; }
    }
    ctx->pc = 0x1A8AF8u;
label_1a8af8:
    // 0x1a8af8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a8af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8afc:
    // 0x1a8afc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a8afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8b00:
    // 0x1a8b00: 0xc04b804  jal         func_12E010
label_1a8b04:
    if (ctx->pc == 0x1A8B04u) {
        ctx->pc = 0x1A8B04u;
            // 0x1a8b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B08u;
        goto label_1a8b08;
    }
    ctx->pc = 0x1A8B00u;
    SET_GPR_U32(ctx, 31, 0x1A8B08u);
    ctx->pc = 0x1A8B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B00u;
            // 0x1a8b04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B08u; }
        if (ctx->pc != 0x1A8B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B08u; }
        if (ctx->pc != 0x1A8B08u) { return; }
    }
    ctx->pc = 0x1A8B08u;
label_1a8b08:
    // 0x1a8b08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a8b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8b0c:
    // 0x1a8b0c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a8b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a8b10:
    // 0x1a8b10: 0xc04b7b0  jal         func_12DEC0
label_1a8b14:
    if (ctx->pc == 0x1A8B14u) {
        ctx->pc = 0x1A8B14u;
            // 0x1a8b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B18u;
        goto label_1a8b18;
    }
    ctx->pc = 0x1A8B10u;
    SET_GPR_U32(ctx, 31, 0x1A8B18u);
    ctx->pc = 0x1A8B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B10u;
            // 0x1a8b14: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B18u; }
        if (ctx->pc != 0x1A8B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B18u; }
        if (ctx->pc != 0x1A8B18u) { return; }
    }
    ctx->pc = 0x1A8B18u;
label_1a8b18:
    // 0x1a8b18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8b1c:
    // 0x1a8b1c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a8b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8b20:
    // 0x1a8b20: 0xc04b75e  jal         func_12DD78
label_1a8b24:
    if (ctx->pc == 0x1A8B24u) {
        ctx->pc = 0x1A8B24u;
            // 0x1a8b24: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1A8B28u;
        goto label_1a8b28;
    }
    ctx->pc = 0x1A8B20u;
    SET_GPR_U32(ctx, 31, 0x1A8B28u);
    ctx->pc = 0x1A8B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B20u;
            // 0x1a8b24: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B28u; }
        if (ctx->pc != 0x1A8B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B28u; }
        if (ctx->pc != 0x1A8B28u) { return; }
    }
    ctx->pc = 0x1A8B28u;
label_1a8b28:
    // 0x1a8b28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a8b2c:
    // 0x1a8b2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a8b30:
    // 0x1a8b30: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a8b30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a8b34:
    // 0x1a8b34: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a8b38:
    if (ctx->pc == 0x1A8B38u) {
        ctx->pc = 0x1A8B3Cu;
        goto label_1a8b3c;
    }
    ctx->pc = 0x1A8B34u;
    {
        const bool branch_taken_0x1a8b34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b34) {
            ctx->pc = 0x1A8B88u;
            goto label_1a8b88;
        }
    }
    ctx->pc = 0x1A8B3Cu;
label_1a8b3c:
    // 0x1a8b3c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a8b40:
    // 0x1a8b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8b44:
    if (ctx->pc == 0x1A8B44u) {
        ctx->pc = 0x1A8B48u;
        goto label_1a8b48;
    }
    ctx->pc = 0x1A8B40u;
    {
        const bool branch_taken_0x1a8b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b40) {
            ctx->pc = 0x1A8B58u;
            goto label_1a8b58;
        }
    }
    ctx->pc = 0x1A8B48u;
label_1a8b48:
    // 0x1a8b48: 0xc0604f0  jal         func_1813C0
label_1a8b4c:
    if (ctx->pc == 0x1A8B4Cu) {
        ctx->pc = 0x1A8B4Cu;
            // 0x1a8b4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8B50u;
        goto label_1a8b50;
    }
    ctx->pc = 0x1A8B48u;
    SET_GPR_U32(ctx, 31, 0x1A8B50u);
    ctx->pc = 0x1A8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B48u;
            // 0x1a8b4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B50u; }
        if (ctx->pc != 0x1A8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B50u; }
        if (ctx->pc != 0x1A8B50u) { return; }
    }
    ctx->pc = 0x1A8B50u;
label_1a8b50:
    // 0x1a8b50: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a8b54:
    if (ctx->pc == 0x1A8B54u) {
        ctx->pc = 0x1A8B58u;
        goto label_1a8b58;
    }
    ctx->pc = 0x1A8B50u;
    {
        const bool branch_taken_0x1a8b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b50) {
            ctx->pc = 0x1A8B60u;
            goto label_1a8b60;
        }
    }
    ctx->pc = 0x1A8B58u;
label_1a8b58:
    // 0x1a8b58: 0xc0604dc  jal         func_181370
label_1a8b5c:
    if (ctx->pc == 0x1A8B5Cu) {
        ctx->pc = 0x1A8B5Cu;
            // 0x1a8b5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8B60u;
        goto label_1a8b60;
    }
    ctx->pc = 0x1A8B58u;
    SET_GPR_U32(ctx, 31, 0x1A8B60u);
    ctx->pc = 0x1A8B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B58u;
            // 0x1a8b5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B60u; }
        if (ctx->pc != 0x1A8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B60u; }
        if (ctx->pc != 0x1A8B60u) { return; }
    }
    ctx->pc = 0x1A8B60u;
label_1a8b60:
    // 0x1a8b60: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1a8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a8b64:
    // 0x1a8b64: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a8b68:
    if (ctx->pc == 0x1A8B68u) {
        ctx->pc = 0x1A8B6Cu;
        goto label_1a8b6c;
    }
    ctx->pc = 0x1A8B64u;
    {
        const bool branch_taken_0x1a8b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b64) {
            ctx->pc = 0x1A8B78u;
            goto label_1a8b78;
        }
    }
    ctx->pc = 0x1A8B6Cu;
label_1a8b6c:
    // 0x1a8b6c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1a8b70:
    if (ctx->pc == 0x1A8B70u) {
        ctx->pc = 0x1A8B70u;
            // 0x1a8b70: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1A8B74u;
        goto label_1a8b74;
    }
    ctx->pc = 0x1A8B6Cu;
    {
        const bool branch_taken_0x1a8b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B6Cu;
            // 0x1a8b70: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b6c) {
            ctx->pc = 0x1A8BF8u;
            goto label_1a8bf8;
        }
    }
    ctx->pc = 0x1A8B74u;
label_1a8b74:
    // 0x1a8b74: 0x0  nop
    ctx->pc = 0x1a8b74u;
    // NOP
label_1a8b78:
    // 0x1a8b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8b7c:
    // 0x1a8b7c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1a8b80:
    if (ctx->pc == 0x1A8B80u) {
        ctx->pc = 0x1A8B80u;
            // 0x1a8b80: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1A8B84u;
        goto label_1a8b84;
    }
    ctx->pc = 0x1A8B7Cu;
    {
        const bool branch_taken_0x1a8b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B7Cu;
            // 0x1a8b80: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8b7c) {
            ctx->pc = 0x1A8BF8u;
            goto label_1a8bf8;
        }
    }
    ctx->pc = 0x1A8B84u;
label_1a8b84:
    // 0x1a8b84: 0x0  nop
    ctx->pc = 0x1a8b84u;
    // NOP
label_1a8b88:
    // 0x1a8b88: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1a8b88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1a8b8c:
    // 0x1a8b8c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1a8b90:
    if (ctx->pc == 0x1A8B90u) {
        ctx->pc = 0x1A8B94u;
        goto label_1a8b94;
    }
    ctx->pc = 0x1A8B8Cu;
    {
        const bool branch_taken_0x1a8b8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8b8c) {
            ctx->pc = 0x1A8BE8u;
            goto label_1a8be8;
        }
    }
    ctx->pc = 0x1A8B94u;
label_1a8b94:
    // 0x1a8b94: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8b98:
    // 0x1a8b98: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1a8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a8b9c:
    // 0x1a8b9c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a8b9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a8ba0:
    // 0x1a8ba0: 0x0  nop
    ctx->pc = 0x1a8ba0u;
    // NOP
label_1a8ba4:
    // 0x1a8ba4: 0x0  nop
    ctx->pc = 0x1a8ba4u;
    // NOP
label_1a8ba8:
    // 0x1a8ba8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8ba8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8bac:
    // 0x1a8bac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1a8bb0:
    if (ctx->pc == 0x1A8BB0u) {
        ctx->pc = 0x1A8BB4u;
        goto label_1a8bb4;
    }
    ctx->pc = 0x1A8BACu;
    {
        const bool branch_taken_0x1a8bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bac) {
            ctx->pc = 0x1A8BE8u;
            goto label_1a8be8;
        }
    }
    ctx->pc = 0x1A8BB4u;
label_1a8bb4:
    // 0x1a8bb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8bb8:
    // 0x1a8bb8: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1a8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1a8bbc:
    // 0x1a8bbc: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1a8bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a8bc0:
    // 0x1a8bc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8bc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8bc4:
    // 0x1a8bc4: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a8bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8bc8:
    // 0x1a8bc8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a8bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a8bcc:
    // 0x1a8bcc: 0xc0536d8  jal         func_14DB60
label_1a8bd0:
    if (ctx->pc == 0x1A8BD0u) {
        ctx->pc = 0x1A8BD0u;
            // 0x1a8bd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A8BD4u;
        goto label_1a8bd4;
    }
    ctx->pc = 0x1A8BCCu;
    SET_GPR_U32(ctx, 31, 0x1A8BD4u);
    ctx->pc = 0x1A8BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BCCu;
            // 0x1a8bd0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BD4u; }
        if (ctx->pc != 0x1A8BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BD4u; }
        if (ctx->pc != 0x1A8BD4u) { return; }
    }
    ctx->pc = 0x1A8BD4u;
label_1a8bd4:
    // 0x1a8bd4: 0xc060500  jal         func_181400
label_1a8bd8:
    if (ctx->pc == 0x1A8BD8u) {
        ctx->pc = 0x1A8BD8u;
            // 0x1a8bd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8BDCu;
        goto label_1a8bdc;
    }
    ctx->pc = 0x1A8BD4u;
    SET_GPR_U32(ctx, 31, 0x1A8BDCu);
    ctx->pc = 0x1A8BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BD4u;
            // 0x1a8bd8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BDCu; }
        if (ctx->pc != 0x1A8BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BDCu; }
        if (ctx->pc != 0x1A8BDCu) { return; }
    }
    ctx->pc = 0x1A8BDCu;
label_1a8bdc:
    // 0x1a8bdc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a8be0:
    if (ctx->pc == 0x1A8BE0u) {
        ctx->pc = 0x1A8BE4u;
        goto label_1a8be4;
    }
    ctx->pc = 0x1A8BDCu;
    {
        const bool branch_taken_0x1a8bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8bdc) {
            ctx->pc = 0x1A8BF0u;
            goto label_1a8bf0;
        }
    }
    ctx->pc = 0x1A8BE4u;
label_1a8be4:
    // 0x1a8be4: 0x0  nop
    ctx->pc = 0x1a8be4u;
    // NOP
label_1a8be8:
    // 0x1a8be8: 0xc0604dc  jal         func_181370
label_1a8bec:
    if (ctx->pc == 0x1A8BECu) {
        ctx->pc = 0x1A8BECu;
            // 0x1a8bec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8BF0u;
        goto label_1a8bf0;
    }
    ctx->pc = 0x1A8BE8u;
    SET_GPR_U32(ctx, 31, 0x1A8BF0u);
    ctx->pc = 0x1A8BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BE8u;
            // 0x1a8bec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BF0u; }
        if (ctx->pc != 0x1A8BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8BF0u; }
        if (ctx->pc != 0x1A8BF0u) { return; }
    }
    ctx->pc = 0x1A8BF0u;
label_1a8bf0:
    // 0x1a8bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8bf4:
    // 0x1a8bf4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a8bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a8bf8:
    // 0x1a8bf8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a8bfc:
    // 0x1a8bfc: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1a8bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_1a8c00:
    // 0x1a8c00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a8c00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a8c04:
    // 0x1a8c04: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a8c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a8c08:
    // 0x1a8c08: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8c0c:
    // 0x1a8c0c: 0x2442ffa0  addiu       $v0, $v0, -0x60
    ctx->pc = 0x1a8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
label_1a8c10:
    // 0x1a8c10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8c14:
    // 0x1a8c14: 0x0  nop
    ctx->pc = 0x1a8c14u;
    // NOP
label_1a8c18:
    // 0x1a8c18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a8c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a8c1c:
    // 0x1a8c1c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a8c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a8c20:
    // 0x1a8c20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a8c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8c24:
    // 0x1a8c24: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1a8c28:
    // 0x1a8c28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8c2c:
    // 0x1a8c2c: 0x0  nop
    ctx->pc = 0x1a8c2cu;
    // NOP
label_1a8c30:
    // 0x1a8c30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a8c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a8c34:
    // 0x1a8c34: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1a8c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a8c38:
    // 0x1a8c38: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1a8c3c:
    // 0x1a8c3c: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_1a8c40:
    // 0x1a8c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8c44:
    // 0x1a8c44: 0x0  nop
    ctx->pc = 0x1a8c44u;
    // NOP
label_1a8c48:
    // 0x1a8c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a8c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a8c4c:
    // 0x1a8c4c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1a8c4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1a8c50:
    // 0x1a8c50: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a8c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8c54:
    // 0x1a8c54: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1a8c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1a8c58:
    // 0x1a8c58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8c5c:
    // 0x1a8c5c: 0x0  nop
    ctx->pc = 0x1a8c5cu;
    // NOP
label_1a8c60:
    // 0x1a8c60: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a8c60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a8c64:
    // 0x1a8c64: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1a8c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a8c68:
    // 0x1a8c68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a8c6c:
    // 0x1a8c6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8c70:
    // 0x1a8c70: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a8c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a8c74:
    // 0x1a8c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a8c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a8c78:
    // 0x1a8c78: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a8c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8c7c:
    // 0x1a8c7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a8c7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8c80:
    // 0x1a8c80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a8c84:
    if (ctx->pc == 0x1A8C84u) {
        ctx->pc = 0x1A8C88u;
        goto label_1a8c88;
    }
    ctx->pc = 0x1A8C80u;
    {
        const bool branch_taken_0x1a8c80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a8c80) {
            ctx->pc = 0x1A8CA0u;
            goto label_1a8ca0;
        }
    }
    ctx->pc = 0x1A8C88u;
label_1a8c88:
    // 0x1a8c88: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a8c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a8c8c:
    // 0x1a8c8c: 0x40f809  jalr        $v0
label_1a8c90:
    if (ctx->pc == 0x1A8C90u) {
        ctx->pc = 0x1A8C90u;
            // 0x1a8c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C94u;
        goto label_1a8c94;
    }
    ctx->pc = 0x1A8C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8C94u);
        ctx->pc = 0x1A8C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C8Cu;
            // 0x1a8c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8330u: goto label_1a8330;
            case 0x1A8334u: goto label_1a8334;
            case 0x1A8338u: goto label_1a8338;
            case 0x1A833Cu: goto label_1a833c;
            case 0x1A8340u: goto label_1a8340;
            case 0x1A8344u: goto label_1a8344;
            case 0x1A8348u: goto label_1a8348;
            case 0x1A834Cu: goto label_1a834c;
            case 0x1A8350u: goto label_1a8350;
            case 0x1A8354u: goto label_1a8354;
            case 0x1A8358u: goto label_1a8358;
            case 0x1A835Cu: goto label_1a835c;
            case 0x1A8360u: goto label_1a8360;
            case 0x1A8364u: goto label_1a8364;
            case 0x1A8368u: goto label_1a8368;
            case 0x1A836Cu: goto label_1a836c;
            case 0x1A8370u: goto label_1a8370;
            case 0x1A8374u: goto label_1a8374;
            case 0x1A8378u: goto label_1a8378;
            case 0x1A837Cu: goto label_1a837c;
            case 0x1A8380u: goto label_1a8380;
            case 0x1A8384u: goto label_1a8384;
            case 0x1A8388u: goto label_1a8388;
            case 0x1A838Cu: goto label_1a838c;
            case 0x1A8390u: goto label_1a8390;
            case 0x1A8394u: goto label_1a8394;
            case 0x1A8398u: goto label_1a8398;
            case 0x1A839Cu: goto label_1a839c;
            case 0x1A83A0u: goto label_1a83a0;
            case 0x1A83A4u: goto label_1a83a4;
            case 0x1A83A8u: goto label_1a83a8;
            case 0x1A83ACu: goto label_1a83ac;
            case 0x1A83B0u: goto label_1a83b0;
            case 0x1A83B4u: goto label_1a83b4;
            case 0x1A83B8u: goto label_1a83b8;
            case 0x1A83BCu: goto label_1a83bc;
            case 0x1A83C0u: goto label_1a83c0;
            case 0x1A83C4u: goto label_1a83c4;
            case 0x1A83C8u: goto label_1a83c8;
            case 0x1A83CCu: goto label_1a83cc;
            case 0x1A83D0u: goto label_1a83d0;
            case 0x1A83D4u: goto label_1a83d4;
            case 0x1A83D8u: goto label_1a83d8;
            case 0x1A83DCu: goto label_1a83dc;
            case 0x1A83E0u: goto label_1a83e0;
            case 0x1A83E4u: goto label_1a83e4;
            case 0x1A83E8u: goto label_1a83e8;
            case 0x1A83ECu: goto label_1a83ec;
            case 0x1A83F0u: goto label_1a83f0;
            case 0x1A83F4u: goto label_1a83f4;
            case 0x1A83F8u: goto label_1a83f8;
            case 0x1A83FCu: goto label_1a83fc;
            case 0x1A8400u: goto label_1a8400;
            case 0x1A8404u: goto label_1a8404;
            case 0x1A8408u: goto label_1a8408;
            case 0x1A840Cu: goto label_1a840c;
            case 0x1A8410u: goto label_1a8410;
            case 0x1A8414u: goto label_1a8414;
            case 0x1A8418u: goto label_1a8418;
            case 0x1A841Cu: goto label_1a841c;
            case 0x1A8420u: goto label_1a8420;
            case 0x1A8424u: goto label_1a8424;
            case 0x1A8428u: goto label_1a8428;
            case 0x1A842Cu: goto label_1a842c;
            case 0x1A8430u: goto label_1a8430;
            case 0x1A8434u: goto label_1a8434;
            case 0x1A8438u: goto label_1a8438;
            case 0x1A843Cu: goto label_1a843c;
            case 0x1A8440u: goto label_1a8440;
            case 0x1A8444u: goto label_1a8444;
            case 0x1A8448u: goto label_1a8448;
            case 0x1A844Cu: goto label_1a844c;
            case 0x1A8450u: goto label_1a8450;
            case 0x1A8454u: goto label_1a8454;
            case 0x1A8458u: goto label_1a8458;
            case 0x1A845Cu: goto label_1a845c;
            case 0x1A8460u: goto label_1a8460;
            case 0x1A8464u: goto label_1a8464;
            case 0x1A8468u: goto label_1a8468;
            case 0x1A846Cu: goto label_1a846c;
            case 0x1A8470u: goto label_1a8470;
            case 0x1A8474u: goto label_1a8474;
            case 0x1A8478u: goto label_1a8478;
            case 0x1A847Cu: goto label_1a847c;
            case 0x1A8480u: goto label_1a8480;
            case 0x1A8484u: goto label_1a8484;
            case 0x1A8488u: goto label_1a8488;
            case 0x1A848Cu: goto label_1a848c;
            case 0x1A8490u: goto label_1a8490;
            case 0x1A8494u: goto label_1a8494;
            case 0x1A8498u: goto label_1a8498;
            case 0x1A849Cu: goto label_1a849c;
            case 0x1A84A0u: goto label_1a84a0;
            case 0x1A84A4u: goto label_1a84a4;
            case 0x1A84A8u: goto label_1a84a8;
            case 0x1A84ACu: goto label_1a84ac;
            case 0x1A84B0u: goto label_1a84b0;
            case 0x1A84B4u: goto label_1a84b4;
            case 0x1A84B8u: goto label_1a84b8;
            case 0x1A84BCu: goto label_1a84bc;
            case 0x1A84C0u: goto label_1a84c0;
            case 0x1A84C4u: goto label_1a84c4;
            case 0x1A84C8u: goto label_1a84c8;
            case 0x1A84CCu: goto label_1a84cc;
            case 0x1A84D0u: goto label_1a84d0;
            case 0x1A84D4u: goto label_1a84d4;
            case 0x1A84D8u: goto label_1a84d8;
            case 0x1A84DCu: goto label_1a84dc;
            case 0x1A84E0u: goto label_1a84e0;
            case 0x1A84E4u: goto label_1a84e4;
            case 0x1A84E8u: goto label_1a84e8;
            case 0x1A84ECu: goto label_1a84ec;
            case 0x1A84F0u: goto label_1a84f0;
            case 0x1A84F4u: goto label_1a84f4;
            case 0x1A84F8u: goto label_1a84f8;
            case 0x1A84FCu: goto label_1a84fc;
            case 0x1A8500u: goto label_1a8500;
            case 0x1A8504u: goto label_1a8504;
            case 0x1A8508u: goto label_1a8508;
            case 0x1A850Cu: goto label_1a850c;
            case 0x1A8510u: goto label_1a8510;
            case 0x1A8514u: goto label_1a8514;
            case 0x1A8518u: goto label_1a8518;
            case 0x1A851Cu: goto label_1a851c;
            case 0x1A8520u: goto label_1a8520;
            case 0x1A8524u: goto label_1a8524;
            case 0x1A8528u: goto label_1a8528;
            case 0x1A852Cu: goto label_1a852c;
            case 0x1A8530u: goto label_1a8530;
            case 0x1A8534u: goto label_1a8534;
            case 0x1A8538u: goto label_1a8538;
            case 0x1A853Cu: goto label_1a853c;
            case 0x1A8540u: goto label_1a8540;
            case 0x1A8544u: goto label_1a8544;
            case 0x1A8548u: goto label_1a8548;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A855Cu: goto label_1a855c;
            case 0x1A8560u: goto label_1a8560;
            case 0x1A8564u: goto label_1a8564;
            case 0x1A8568u: goto label_1a8568;
            case 0x1A856Cu: goto label_1a856c;
            case 0x1A8570u: goto label_1a8570;
            case 0x1A8574u: goto label_1a8574;
            case 0x1A8578u: goto label_1a8578;
            case 0x1A857Cu: goto label_1a857c;
            case 0x1A8580u: goto label_1a8580;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8588u: goto label_1a8588;
            case 0x1A858Cu: goto label_1a858c;
            case 0x1A8590u: goto label_1a8590;
            case 0x1A8594u: goto label_1a8594;
            case 0x1A8598u: goto label_1a8598;
            case 0x1A859Cu: goto label_1a859c;
            case 0x1A85A0u: goto label_1a85a0;
            case 0x1A85A4u: goto label_1a85a4;
            case 0x1A85A8u: goto label_1a85a8;
            case 0x1A85ACu: goto label_1a85ac;
            case 0x1A85B0u: goto label_1a85b0;
            case 0x1A85B4u: goto label_1a85b4;
            case 0x1A85B8u: goto label_1a85b8;
            case 0x1A85BCu: goto label_1a85bc;
            case 0x1A85C0u: goto label_1a85c0;
            case 0x1A85C4u: goto label_1a85c4;
            case 0x1A85C8u: goto label_1a85c8;
            case 0x1A85CCu: goto label_1a85cc;
            case 0x1A85D0u: goto label_1a85d0;
            case 0x1A85D4u: goto label_1a85d4;
            case 0x1A85D8u: goto label_1a85d8;
            case 0x1A85DCu: goto label_1a85dc;
            case 0x1A85E0u: goto label_1a85e0;
            case 0x1A85E4u: goto label_1a85e4;
            case 0x1A85E8u: goto label_1a85e8;
            case 0x1A85ECu: goto label_1a85ec;
            case 0x1A85F0u: goto label_1a85f0;
            case 0x1A85F4u: goto label_1a85f4;
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A85FCu: goto label_1a85fc;
            case 0x1A8600u: goto label_1a8600;
            case 0x1A8604u: goto label_1a8604;
            case 0x1A8608u: goto label_1a8608;
            case 0x1A860Cu: goto label_1a860c;
            case 0x1A8610u: goto label_1a8610;
            case 0x1A8614u: goto label_1a8614;
            case 0x1A8618u: goto label_1a8618;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8624u: goto label_1a8624;
            case 0x1A8628u: goto label_1a8628;
            case 0x1A862Cu: goto label_1a862c;
            case 0x1A8630u: goto label_1a8630;
            case 0x1A8634u: goto label_1a8634;
            case 0x1A8638u: goto label_1a8638;
            case 0x1A863Cu: goto label_1a863c;
            case 0x1A8640u: goto label_1a8640;
            case 0x1A8644u: goto label_1a8644;
            case 0x1A8648u: goto label_1a8648;
            case 0x1A864Cu: goto label_1a864c;
            case 0x1A8650u: goto label_1a8650;
            case 0x1A8654u: goto label_1a8654;
            case 0x1A8658u: goto label_1a8658;
            case 0x1A865Cu: goto label_1a865c;
            case 0x1A8660u: goto label_1a8660;
            case 0x1A8664u: goto label_1a8664;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            case 0x1A8670u: goto label_1a8670;
            case 0x1A8674u: goto label_1a8674;
            case 0x1A8678u: goto label_1a8678;
            case 0x1A867Cu: goto label_1a867c;
            case 0x1A8680u: goto label_1a8680;
            case 0x1A8684u: goto label_1a8684;
            case 0x1A8688u: goto label_1a8688;
            case 0x1A868Cu: goto label_1a868c;
            case 0x1A8690u: goto label_1a8690;
            case 0x1A8694u: goto label_1a8694;
            case 0x1A8698u: goto label_1a8698;
            case 0x1A869Cu: goto label_1a869c;
            case 0x1A86A0u: goto label_1a86a0;
            case 0x1A86A4u: goto label_1a86a4;
            case 0x1A86A8u: goto label_1a86a8;
            case 0x1A86ACu: goto label_1a86ac;
            case 0x1A86B0u: goto label_1a86b0;
            case 0x1A86B4u: goto label_1a86b4;
            case 0x1A86B8u: goto label_1a86b8;
            case 0x1A86BCu: goto label_1a86bc;
            case 0x1A86C0u: goto label_1a86c0;
            case 0x1A86C4u: goto label_1a86c4;
            case 0x1A86C8u: goto label_1a86c8;
            case 0x1A86CCu: goto label_1a86cc;
            case 0x1A86D0u: goto label_1a86d0;
            case 0x1A86D4u: goto label_1a86d4;
            case 0x1A86D8u: goto label_1a86d8;
            case 0x1A86DCu: goto label_1a86dc;
            case 0x1A86E0u: goto label_1a86e0;
            case 0x1A86E4u: goto label_1a86e4;
            case 0x1A86E8u: goto label_1a86e8;
            case 0x1A86ECu: goto label_1a86ec;
            case 0x1A86F0u: goto label_1a86f0;
            case 0x1A86F4u: goto label_1a86f4;
            case 0x1A86F8u: goto label_1a86f8;
            case 0x1A86FCu: goto label_1a86fc;
            case 0x1A8700u: goto label_1a8700;
            case 0x1A8704u: goto label_1a8704;
            case 0x1A8708u: goto label_1a8708;
            case 0x1A870Cu: goto label_1a870c;
            case 0x1A8710u: goto label_1a8710;
            case 0x1A8714u: goto label_1a8714;
            case 0x1A8718u: goto label_1a8718;
            case 0x1A871Cu: goto label_1a871c;
            case 0x1A8720u: goto label_1a8720;
            case 0x1A8724u: goto label_1a8724;
            case 0x1A8728u: goto label_1a8728;
            case 0x1A872Cu: goto label_1a872c;
            case 0x1A8730u: goto label_1a8730;
            case 0x1A8734u: goto label_1a8734;
            case 0x1A8738u: goto label_1a8738;
            case 0x1A873Cu: goto label_1a873c;
            case 0x1A8740u: goto label_1a8740;
            case 0x1A8744u: goto label_1a8744;
            case 0x1A8748u: goto label_1a8748;
            case 0x1A874Cu: goto label_1a874c;
            case 0x1A8750u: goto label_1a8750;
            case 0x1A8754u: goto label_1a8754;
            case 0x1A8758u: goto label_1a8758;
            case 0x1A875Cu: goto label_1a875c;
            case 0x1A8760u: goto label_1a8760;
            case 0x1A8764u: goto label_1a8764;
            case 0x1A8768u: goto label_1a8768;
            case 0x1A876Cu: goto label_1a876c;
            case 0x1A8770u: goto label_1a8770;
            case 0x1A8774u: goto label_1a8774;
            case 0x1A8778u: goto label_1a8778;
            case 0x1A877Cu: goto label_1a877c;
            case 0x1A8780u: goto label_1a8780;
            case 0x1A8784u: goto label_1a8784;
            case 0x1A8788u: goto label_1a8788;
            case 0x1A878Cu: goto label_1a878c;
            case 0x1A8790u: goto label_1a8790;
            case 0x1A8794u: goto label_1a8794;
            case 0x1A8798u: goto label_1a8798;
            case 0x1A879Cu: goto label_1a879c;
            case 0x1A87A0u: goto label_1a87a0;
            case 0x1A87A4u: goto label_1a87a4;
            case 0x1A87A8u: goto label_1a87a8;
            case 0x1A87ACu: goto label_1a87ac;
            case 0x1A87B0u: goto label_1a87b0;
            case 0x1A87B4u: goto label_1a87b4;
            case 0x1A87B8u: goto label_1a87b8;
            case 0x1A87BCu: goto label_1a87bc;
            case 0x1A87C0u: goto label_1a87c0;
            case 0x1A87C4u: goto label_1a87c4;
            case 0x1A87C8u: goto label_1a87c8;
            case 0x1A87CCu: goto label_1a87cc;
            case 0x1A87D0u: goto label_1a87d0;
            case 0x1A87D4u: goto label_1a87d4;
            case 0x1A87D8u: goto label_1a87d8;
            case 0x1A87DCu: goto label_1a87dc;
            case 0x1A87E0u: goto label_1a87e0;
            case 0x1A87E4u: goto label_1a87e4;
            case 0x1A87E8u: goto label_1a87e8;
            case 0x1A87ECu: goto label_1a87ec;
            case 0x1A87F0u: goto label_1a87f0;
            case 0x1A87F4u: goto label_1a87f4;
            case 0x1A87F8u: goto label_1a87f8;
            case 0x1A87FCu: goto label_1a87fc;
            case 0x1A8800u: goto label_1a8800;
            case 0x1A8804u: goto label_1a8804;
            case 0x1A8808u: goto label_1a8808;
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8810u: goto label_1a8810;
            case 0x1A8814u: goto label_1a8814;
            case 0x1A8818u: goto label_1a8818;
            case 0x1A881Cu: goto label_1a881c;
            case 0x1A8820u: goto label_1a8820;
            case 0x1A8824u: goto label_1a8824;
            case 0x1A8828u: goto label_1a8828;
            case 0x1A882Cu: goto label_1a882c;
            case 0x1A8830u: goto label_1a8830;
            case 0x1A8834u: goto label_1a8834;
            case 0x1A8838u: goto label_1a8838;
            case 0x1A883Cu: goto label_1a883c;
            case 0x1A8840u: goto label_1a8840;
            case 0x1A8844u: goto label_1a8844;
            case 0x1A8848u: goto label_1a8848;
            case 0x1A884Cu: goto label_1a884c;
            case 0x1A8850u: goto label_1a8850;
            case 0x1A8854u: goto label_1a8854;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A885Cu: goto label_1a885c;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            case 0x1A8868u: goto label_1a8868;
            case 0x1A886Cu: goto label_1a886c;
            case 0x1A8870u: goto label_1a8870;
            case 0x1A8874u: goto label_1a8874;
            case 0x1A8878u: goto label_1a8878;
            case 0x1A887Cu: goto label_1a887c;
            case 0x1A8880u: goto label_1a8880;
            case 0x1A8884u: goto label_1a8884;
            case 0x1A8888u: goto label_1a8888;
            case 0x1A888Cu: goto label_1a888c;
            case 0x1A8890u: goto label_1a8890;
            case 0x1A8894u: goto label_1a8894;
            case 0x1A8898u: goto label_1a8898;
            case 0x1A889Cu: goto label_1a889c;
            case 0x1A88A0u: goto label_1a88a0;
            case 0x1A88A4u: goto label_1a88a4;
            case 0x1A88A8u: goto label_1a88a8;
            case 0x1A88ACu: goto label_1a88ac;
            case 0x1A88B0u: goto label_1a88b0;
            case 0x1A88B4u: goto label_1a88b4;
            case 0x1A88B8u: goto label_1a88b8;
            case 0x1A88BCu: goto label_1a88bc;
            case 0x1A88C0u: goto label_1a88c0;
            case 0x1A88C4u: goto label_1a88c4;
            case 0x1A88C8u: goto label_1a88c8;
            case 0x1A88CCu: goto label_1a88cc;
            case 0x1A88D0u: goto label_1a88d0;
            case 0x1A88D4u: goto label_1a88d4;
            case 0x1A88D8u: goto label_1a88d8;
            case 0x1A88DCu: goto label_1a88dc;
            case 0x1A88E0u: goto label_1a88e0;
            case 0x1A88E4u: goto label_1a88e4;
            case 0x1A88E8u: goto label_1a88e8;
            case 0x1A88ECu: goto label_1a88ec;
            case 0x1A88F0u: goto label_1a88f0;
            case 0x1A88F4u: goto label_1a88f4;
            case 0x1A88F8u: goto label_1a88f8;
            case 0x1A88FCu: goto label_1a88fc;
            case 0x1A8900u: goto label_1a8900;
            case 0x1A8904u: goto label_1a8904;
            case 0x1A8908u: goto label_1a8908;
            case 0x1A890Cu: goto label_1a890c;
            case 0x1A8910u: goto label_1a8910;
            case 0x1A8914u: goto label_1a8914;
            case 0x1A8918u: goto label_1a8918;
            case 0x1A891Cu: goto label_1a891c;
            case 0x1A8920u: goto label_1a8920;
            case 0x1A8924u: goto label_1a8924;
            case 0x1A8928u: goto label_1a8928;
            case 0x1A892Cu: goto label_1a892c;
            case 0x1A8930u: goto label_1a8930;
            case 0x1A8934u: goto label_1a8934;
            case 0x1A8938u: goto label_1a8938;
            case 0x1A893Cu: goto label_1a893c;
            case 0x1A8940u: goto label_1a8940;
            case 0x1A8944u: goto label_1a8944;
            case 0x1A8948u: goto label_1a8948;
            case 0x1A894Cu: goto label_1a894c;
            case 0x1A8950u: goto label_1a8950;
            case 0x1A8954u: goto label_1a8954;
            case 0x1A8958u: goto label_1a8958;
            case 0x1A895Cu: goto label_1a895c;
            case 0x1A8960u: goto label_1a8960;
            case 0x1A8964u: goto label_1a8964;
            case 0x1A8968u: goto label_1a8968;
            case 0x1A896Cu: goto label_1a896c;
            case 0x1A8970u: goto label_1a8970;
            case 0x1A8974u: goto label_1a8974;
            case 0x1A8978u: goto label_1a8978;
            case 0x1A897Cu: goto label_1a897c;
            case 0x1A8980u: goto label_1a8980;
            case 0x1A8984u: goto label_1a8984;
            case 0x1A8988u: goto label_1a8988;
            case 0x1A898Cu: goto label_1a898c;
            case 0x1A8990u: goto label_1a8990;
            case 0x1A8994u: goto label_1a8994;
            case 0x1A8998u: goto label_1a8998;
            case 0x1A899Cu: goto label_1a899c;
            case 0x1A89A0u: goto label_1a89a0;
            case 0x1A89A4u: goto label_1a89a4;
            case 0x1A89A8u: goto label_1a89a8;
            case 0x1A89ACu: goto label_1a89ac;
            case 0x1A89B0u: goto label_1a89b0;
            case 0x1A89B4u: goto label_1a89b4;
            case 0x1A89B8u: goto label_1a89b8;
            case 0x1A89BCu: goto label_1a89bc;
            case 0x1A89C0u: goto label_1a89c0;
            case 0x1A89C4u: goto label_1a89c4;
            case 0x1A89C8u: goto label_1a89c8;
            case 0x1A89CCu: goto label_1a89cc;
            case 0x1A89D0u: goto label_1a89d0;
            case 0x1A89D4u: goto label_1a89d4;
            case 0x1A89D8u: goto label_1a89d8;
            case 0x1A89DCu: goto label_1a89dc;
            case 0x1A89E0u: goto label_1a89e0;
            case 0x1A89E4u: goto label_1a89e4;
            case 0x1A89E8u: goto label_1a89e8;
            case 0x1A89ECu: goto label_1a89ec;
            case 0x1A89F0u: goto label_1a89f0;
            case 0x1A89F4u: goto label_1a89f4;
            case 0x1A89F8u: goto label_1a89f8;
            case 0x1A89FCu: goto label_1a89fc;
            case 0x1A8A00u: goto label_1a8a00;
            case 0x1A8A04u: goto label_1a8a04;
            case 0x1A8A08u: goto label_1a8a08;
            case 0x1A8A0Cu: goto label_1a8a0c;
            case 0x1A8A10u: goto label_1a8a10;
            case 0x1A8A14u: goto label_1a8a14;
            case 0x1A8A18u: goto label_1a8a18;
            case 0x1A8A1Cu: goto label_1a8a1c;
            case 0x1A8A20u: goto label_1a8a20;
            case 0x1A8A24u: goto label_1a8a24;
            case 0x1A8A28u: goto label_1a8a28;
            case 0x1A8A2Cu: goto label_1a8a2c;
            case 0x1A8A30u: goto label_1a8a30;
            case 0x1A8A34u: goto label_1a8a34;
            case 0x1A8A38u: goto label_1a8a38;
            case 0x1A8A3Cu: goto label_1a8a3c;
            case 0x1A8A40u: goto label_1a8a40;
            case 0x1A8A44u: goto label_1a8a44;
            case 0x1A8A48u: goto label_1a8a48;
            case 0x1A8A4Cu: goto label_1a8a4c;
            case 0x1A8A50u: goto label_1a8a50;
            case 0x1A8A54u: goto label_1a8a54;
            case 0x1A8A58u: goto label_1a8a58;
            case 0x1A8A5Cu: goto label_1a8a5c;
            case 0x1A8A60u: goto label_1a8a60;
            case 0x1A8A64u: goto label_1a8a64;
            case 0x1A8A68u: goto label_1a8a68;
            case 0x1A8A6Cu: goto label_1a8a6c;
            case 0x1A8A70u: goto label_1a8a70;
            case 0x1A8A74u: goto label_1a8a74;
            case 0x1A8A78u: goto label_1a8a78;
            case 0x1A8A7Cu: goto label_1a8a7c;
            case 0x1A8A80u: goto label_1a8a80;
            case 0x1A8A84u: goto label_1a8a84;
            case 0x1A8A88u: goto label_1a8a88;
            case 0x1A8A8Cu: goto label_1a8a8c;
            case 0x1A8A90u: goto label_1a8a90;
            case 0x1A8A94u: goto label_1a8a94;
            case 0x1A8A98u: goto label_1a8a98;
            case 0x1A8A9Cu: goto label_1a8a9c;
            case 0x1A8AA0u: goto label_1a8aa0;
            case 0x1A8AA4u: goto label_1a8aa4;
            case 0x1A8AA8u: goto label_1a8aa8;
            case 0x1A8AACu: goto label_1a8aac;
            case 0x1A8AB0u: goto label_1a8ab0;
            case 0x1A8AB4u: goto label_1a8ab4;
            case 0x1A8AB8u: goto label_1a8ab8;
            case 0x1A8ABCu: goto label_1a8abc;
            case 0x1A8AC0u: goto label_1a8ac0;
            case 0x1A8AC4u: goto label_1a8ac4;
            case 0x1A8AC8u: goto label_1a8ac8;
            case 0x1A8ACCu: goto label_1a8acc;
            case 0x1A8AD0u: goto label_1a8ad0;
            case 0x1A8AD4u: goto label_1a8ad4;
            case 0x1A8AD8u: goto label_1a8ad8;
            case 0x1A8ADCu: goto label_1a8adc;
            case 0x1A8AE0u: goto label_1a8ae0;
            case 0x1A8AE4u: goto label_1a8ae4;
            case 0x1A8AE8u: goto label_1a8ae8;
            case 0x1A8AECu: goto label_1a8aec;
            case 0x1A8AF0u: goto label_1a8af0;
            case 0x1A8AF4u: goto label_1a8af4;
            case 0x1A8AF8u: goto label_1a8af8;
            case 0x1A8AFCu: goto label_1a8afc;
            case 0x1A8B00u: goto label_1a8b00;
            case 0x1A8B04u: goto label_1a8b04;
            case 0x1A8B08u: goto label_1a8b08;
            case 0x1A8B0Cu: goto label_1a8b0c;
            case 0x1A8B10u: goto label_1a8b10;
            case 0x1A8B14u: goto label_1a8b14;
            case 0x1A8B18u: goto label_1a8b18;
            case 0x1A8B1Cu: goto label_1a8b1c;
            case 0x1A8B20u: goto label_1a8b20;
            case 0x1A8B24u: goto label_1a8b24;
            case 0x1A8B28u: goto label_1a8b28;
            case 0x1A8B2Cu: goto label_1a8b2c;
            case 0x1A8B30u: goto label_1a8b30;
            case 0x1A8B34u: goto label_1a8b34;
            case 0x1A8B38u: goto label_1a8b38;
            case 0x1A8B3Cu: goto label_1a8b3c;
            case 0x1A8B40u: goto label_1a8b40;
            case 0x1A8B44u: goto label_1a8b44;
            case 0x1A8B48u: goto label_1a8b48;
            case 0x1A8B4Cu: goto label_1a8b4c;
            case 0x1A8B50u: goto label_1a8b50;
            case 0x1A8B54u: goto label_1a8b54;
            case 0x1A8B58u: goto label_1a8b58;
            case 0x1A8B5Cu: goto label_1a8b5c;
            case 0x1A8B60u: goto label_1a8b60;
            case 0x1A8B64u: goto label_1a8b64;
            case 0x1A8B68u: goto label_1a8b68;
            case 0x1A8B6Cu: goto label_1a8b6c;
            case 0x1A8B70u: goto label_1a8b70;
            case 0x1A8B74u: goto label_1a8b74;
            case 0x1A8B78u: goto label_1a8b78;
            case 0x1A8B7Cu: goto label_1a8b7c;
            case 0x1A8B80u: goto label_1a8b80;
            case 0x1A8B84u: goto label_1a8b84;
            case 0x1A8B88u: goto label_1a8b88;
            case 0x1A8B8Cu: goto label_1a8b8c;
            case 0x1A8B90u: goto label_1a8b90;
            case 0x1A8B94u: goto label_1a8b94;
            case 0x1A8B98u: goto label_1a8b98;
            case 0x1A8B9Cu: goto label_1a8b9c;
            case 0x1A8BA0u: goto label_1a8ba0;
            case 0x1A8BA4u: goto label_1a8ba4;
            case 0x1A8BA8u: goto label_1a8ba8;
            case 0x1A8BACu: goto label_1a8bac;
            case 0x1A8BB0u: goto label_1a8bb0;
            case 0x1A8BB4u: goto label_1a8bb4;
            case 0x1A8BB8u: goto label_1a8bb8;
            case 0x1A8BBCu: goto label_1a8bbc;
            case 0x1A8BC0u: goto label_1a8bc0;
            case 0x1A8BC4u: goto label_1a8bc4;
            case 0x1A8BC8u: goto label_1a8bc8;
            case 0x1A8BCCu: goto label_1a8bcc;
            case 0x1A8BD0u: goto label_1a8bd0;
            case 0x1A8BD4u: goto label_1a8bd4;
            case 0x1A8BD8u: goto label_1a8bd8;
            case 0x1A8BDCu: goto label_1a8bdc;
            case 0x1A8BE0u: goto label_1a8be0;
            case 0x1A8BE4u: goto label_1a8be4;
            case 0x1A8BE8u: goto label_1a8be8;
            case 0x1A8BECu: goto label_1a8bec;
            case 0x1A8BF0u: goto label_1a8bf0;
            case 0x1A8BF4u: goto label_1a8bf4;
            case 0x1A8BF8u: goto label_1a8bf8;
            case 0x1A8BFCu: goto label_1a8bfc;
            case 0x1A8C00u: goto label_1a8c00;
            case 0x1A8C04u: goto label_1a8c04;
            case 0x1A8C08u: goto label_1a8c08;
            case 0x1A8C0Cu: goto label_1a8c0c;
            case 0x1A8C10u: goto label_1a8c10;
            case 0x1A8C14u: goto label_1a8c14;
            case 0x1A8C18u: goto label_1a8c18;
            case 0x1A8C1Cu: goto label_1a8c1c;
            case 0x1A8C20u: goto label_1a8c20;
            case 0x1A8C24u: goto label_1a8c24;
            case 0x1A8C28u: goto label_1a8c28;
            case 0x1A8C2Cu: goto label_1a8c2c;
            case 0x1A8C30u: goto label_1a8c30;
            case 0x1A8C34u: goto label_1a8c34;
            case 0x1A8C38u: goto label_1a8c38;
            case 0x1A8C3Cu: goto label_1a8c3c;
            case 0x1A8C40u: goto label_1a8c40;
            case 0x1A8C44u: goto label_1a8c44;
            case 0x1A8C48u: goto label_1a8c48;
            case 0x1A8C4Cu: goto label_1a8c4c;
            case 0x1A8C50u: goto label_1a8c50;
            case 0x1A8C54u: goto label_1a8c54;
            case 0x1A8C58u: goto label_1a8c58;
            case 0x1A8C5Cu: goto label_1a8c5c;
            case 0x1A8C60u: goto label_1a8c60;
            case 0x1A8C64u: goto label_1a8c64;
            case 0x1A8C68u: goto label_1a8c68;
            case 0x1A8C6Cu: goto label_1a8c6c;
            case 0x1A8C70u: goto label_1a8c70;
            case 0x1A8C74u: goto label_1a8c74;
            case 0x1A8C78u: goto label_1a8c78;
            case 0x1A8C7Cu: goto label_1a8c7c;
            case 0x1A8C80u: goto label_1a8c80;
            case 0x1A8C84u: goto label_1a8c84;
            case 0x1A8C88u: goto label_1a8c88;
            case 0x1A8C8Cu: goto label_1a8c8c;
            case 0x1A8C90u: goto label_1a8c90;
            case 0x1A8C94u: goto label_1a8c94;
            case 0x1A8C98u: goto label_1a8c98;
            case 0x1A8C9Cu: goto label_1a8c9c;
            case 0x1A8CA0u: goto label_1a8ca0;
            case 0x1A8CA4u: goto label_1a8ca4;
            case 0x1A8CA8u: goto label_1a8ca8;
            case 0x1A8CACu: goto label_1a8cac;
            case 0x1A8CB0u: goto label_1a8cb0;
            case 0x1A8CB4u: goto label_1a8cb4;
            case 0x1A8CB8u: goto label_1a8cb8;
            case 0x1A8CBCu: goto label_1a8cbc;
            case 0x1A8CC0u: goto label_1a8cc0;
            case 0x1A8CC4u: goto label_1a8cc4;
            case 0x1A8CC8u: goto label_1a8cc8;
            case 0x1A8CCCu: goto label_1a8ccc;
            case 0x1A8CD0u: goto label_1a8cd0;
            case 0x1A8CD4u: goto label_1a8cd4;
            case 0x1A8CD8u: goto label_1a8cd8;
            case 0x1A8CDCu: goto label_1a8cdc;
            case 0x1A8CE0u: goto label_1a8ce0;
            case 0x1A8CE4u: goto label_1a8ce4;
            case 0x1A8CE8u: goto label_1a8ce8;
            case 0x1A8CECu: goto label_1a8cec;
            case 0x1A8CF0u: goto label_1a8cf0;
            case 0x1A8CF4u: goto label_1a8cf4;
            case 0x1A8CF8u: goto label_1a8cf8;
            case 0x1A8CFCu: goto label_1a8cfc;
            case 0x1A8D00u: goto label_1a8d00;
            case 0x1A8D04u: goto label_1a8d04;
            case 0x1A8D08u: goto label_1a8d08;
            case 0x1A8D0Cu: goto label_1a8d0c;
            case 0x1A8D10u: goto label_1a8d10;
            case 0x1A8D14u: goto label_1a8d14;
            case 0x1A8D18u: goto label_1a8d18;
            case 0x1A8D1Cu: goto label_1a8d1c;
            case 0x1A8D20u: goto label_1a8d20;
            case 0x1A8D24u: goto label_1a8d24;
            case 0x1A8D28u: goto label_1a8d28;
            case 0x1A8D2Cu: goto label_1a8d2c;
            case 0x1A8D30u: goto label_1a8d30;
            case 0x1A8D34u: goto label_1a8d34;
            case 0x1A8D38u: goto label_1a8d38;
            case 0x1A8D3Cu: goto label_1a8d3c;
            case 0x1A8D40u: goto label_1a8d40;
            case 0x1A8D44u: goto label_1a8d44;
            case 0x1A8D48u: goto label_1a8d48;
            case 0x1A8D4Cu: goto label_1a8d4c;
            case 0x1A8D50u: goto label_1a8d50;
            case 0x1A8D54u: goto label_1a8d54;
            case 0x1A8D58u: goto label_1a8d58;
            case 0x1A8D5Cu: goto label_1a8d5c;
            case 0x1A8D60u: goto label_1a8d60;
            case 0x1A8D64u: goto label_1a8d64;
            case 0x1A8D68u: goto label_1a8d68;
            case 0x1A8D6Cu: goto label_1a8d6c;
            case 0x1A8D70u: goto label_1a8d70;
            case 0x1A8D74u: goto label_1a8d74;
            case 0x1A8D78u: goto label_1a8d78;
            case 0x1A8D7Cu: goto label_1a8d7c;
            case 0x1A8D80u: goto label_1a8d80;
            case 0x1A8D84u: goto label_1a8d84;
            case 0x1A8D88u: goto label_1a8d88;
            case 0x1A8D8Cu: goto label_1a8d8c;
            case 0x1A8D90u: goto label_1a8d90;
            case 0x1A8D94u: goto label_1a8d94;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8D9Cu: goto label_1a8d9c;
            case 0x1A8DA0u: goto label_1a8da0;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DACu: goto label_1a8dac;
            case 0x1A8DB0u: goto label_1a8db0;
            case 0x1A8DB4u: goto label_1a8db4;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8DBCu: goto label_1a8dbc;
            case 0x1A8DC0u: goto label_1a8dc0;
            case 0x1A8DC4u: goto label_1a8dc4;
            case 0x1A8DC8u: goto label_1a8dc8;
            case 0x1A8DCCu: goto label_1a8dcc;
            case 0x1A8DD0u: goto label_1a8dd0;
            case 0x1A8DD4u: goto label_1a8dd4;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DDCu: goto label_1a8ddc;
            case 0x1A8DE0u: goto label_1a8de0;
            case 0x1A8DE4u: goto label_1a8de4;
            case 0x1A8DE8u: goto label_1a8de8;
            case 0x1A8DECu: goto label_1a8dec;
            case 0x1A8DF0u: goto label_1a8df0;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8DF8u: goto label_1a8df8;
            case 0x1A8DFCu: goto label_1a8dfc;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E04u: goto label_1a8e04;
            case 0x1A8E08u: goto label_1a8e08;
            case 0x1A8E0Cu: goto label_1a8e0c;
            case 0x1A8E10u: goto label_1a8e10;
            case 0x1A8E14u: goto label_1a8e14;
            case 0x1A8E18u: goto label_1a8e18;
            case 0x1A8E1Cu: goto label_1a8e1c;
            case 0x1A8E20u: goto label_1a8e20;
            case 0x1A8E24u: goto label_1a8e24;
            case 0x1A8E28u: goto label_1a8e28;
            case 0x1A8E2Cu: goto label_1a8e2c;
            case 0x1A8E30u: goto label_1a8e30;
            case 0x1A8E34u: goto label_1a8e34;
            case 0x1A8E38u: goto label_1a8e38;
            case 0x1A8E3Cu: goto label_1a8e3c;
            case 0x1A8E40u: goto label_1a8e40;
            case 0x1A8E44u: goto label_1a8e44;
            case 0x1A8E48u: goto label_1a8e48;
            case 0x1A8E4Cu: goto label_1a8e4c;
            case 0x1A8E50u: goto label_1a8e50;
            case 0x1A8E54u: goto label_1a8e54;
            case 0x1A8E58u: goto label_1a8e58;
            case 0x1A8E5Cu: goto label_1a8e5c;
            case 0x1A8E60u: goto label_1a8e60;
            case 0x1A8E64u: goto label_1a8e64;
            case 0x1A8E68u: goto label_1a8e68;
            case 0x1A8E6Cu: goto label_1a8e6c;
            case 0x1A8E70u: goto label_1a8e70;
            case 0x1A8E74u: goto label_1a8e74;
            case 0x1A8E78u: goto label_1a8e78;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E80u: goto label_1a8e80;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8E88u: goto label_1a8e88;
            case 0x1A8E8Cu: goto label_1a8e8c;
            case 0x1A8E90u: goto label_1a8e90;
            case 0x1A8E94u: goto label_1a8e94;
            case 0x1A8E98u: goto label_1a8e98;
            case 0x1A8E9Cu: goto label_1a8e9c;
            case 0x1A8EA0u: goto label_1a8ea0;
            case 0x1A8EA4u: goto label_1a8ea4;
            case 0x1A8EA8u: goto label_1a8ea8;
            case 0x1A8EACu: goto label_1a8eac;
            case 0x1A8EB0u: goto label_1a8eb0;
            case 0x1A8EB4u: goto label_1a8eb4;
            case 0x1A8EB8u: goto label_1a8eb8;
            case 0x1A8EBCu: goto label_1a8ebc;
            case 0x1A8EC0u: goto label_1a8ec0;
            case 0x1A8EC4u: goto label_1a8ec4;
            case 0x1A8EC8u: goto label_1a8ec8;
            case 0x1A8ECCu: goto label_1a8ecc;
            case 0x1A8ED0u: goto label_1a8ed0;
            case 0x1A8ED4u: goto label_1a8ed4;
            case 0x1A8ED8u: goto label_1a8ed8;
            case 0x1A8EDCu: goto label_1a8edc;
            case 0x1A8EE0u: goto label_1a8ee0;
            case 0x1A8EE4u: goto label_1a8ee4;
            case 0x1A8EE8u: goto label_1a8ee8;
            case 0x1A8EECu: goto label_1a8eec;
            case 0x1A8EF0u: goto label_1a8ef0;
            case 0x1A8EF4u: goto label_1a8ef4;
            case 0x1A8EF8u: goto label_1a8ef8;
            case 0x1A8EFCu: goto label_1a8efc;
            case 0x1A8F00u: goto label_1a8f00;
            case 0x1A8F04u: goto label_1a8f04;
            case 0x1A8F08u: goto label_1a8f08;
            case 0x1A8F0Cu: goto label_1a8f0c;
            case 0x1A8F10u: goto label_1a8f10;
            case 0x1A8F14u: goto label_1a8f14;
            case 0x1A8F18u: goto label_1a8f18;
            case 0x1A8F1Cu: goto label_1a8f1c;
            case 0x1A8F20u: goto label_1a8f20;
            case 0x1A8F24u: goto label_1a8f24;
            case 0x1A8F28u: goto label_1a8f28;
            case 0x1A8F2Cu: goto label_1a8f2c;
            case 0x1A8F30u: goto label_1a8f30;
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F38u: goto label_1a8f38;
            case 0x1A8F3Cu: goto label_1a8f3c;
            case 0x1A8F40u: goto label_1a8f40;
            case 0x1A8F44u: goto label_1a8f44;
            case 0x1A8F48u: goto label_1a8f48;
            case 0x1A8F4Cu: goto label_1a8f4c;
            case 0x1A8F50u: goto label_1a8f50;
            case 0x1A8F54u: goto label_1a8f54;
            case 0x1A8F58u: goto label_1a8f58;
            case 0x1A8F5Cu: goto label_1a8f5c;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F64u: goto label_1a8f64;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8F6Cu: goto label_1a8f6c;
            case 0x1A8F70u: goto label_1a8f70;
            case 0x1A8F74u: goto label_1a8f74;
            case 0x1A8F78u: goto label_1a8f78;
            case 0x1A8F7Cu: goto label_1a8f7c;
            case 0x1A8F80u: goto label_1a8f80;
            case 0x1A8F84u: goto label_1a8f84;
            case 0x1A8F88u: goto label_1a8f88;
            case 0x1A8F8Cu: goto label_1a8f8c;
            case 0x1A8F90u: goto label_1a8f90;
            case 0x1A8F94u: goto label_1a8f94;
            case 0x1A8F98u: goto label_1a8f98;
            case 0x1A8F9Cu: goto label_1a8f9c;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FA8u: goto label_1a8fa8;
            case 0x1A8FACu: goto label_1a8fac;
            case 0x1A8FB0u: goto label_1a8fb0;
            case 0x1A8FB4u: goto label_1a8fb4;
            case 0x1A8FB8u: goto label_1a8fb8;
            case 0x1A8FBCu: goto label_1a8fbc;
            case 0x1A8FC0u: goto label_1a8fc0;
            case 0x1A8FC4u: goto label_1a8fc4;
            case 0x1A8FC8u: goto label_1a8fc8;
            case 0x1A8FCCu: goto label_1a8fcc;
            case 0x1A8FD0u: goto label_1a8fd0;
            case 0x1A8FD4u: goto label_1a8fd4;
            case 0x1A8FD8u: goto label_1a8fd8;
            case 0x1A8FDCu: goto label_1a8fdc;
            case 0x1A8FE0u: goto label_1a8fe0;
            case 0x1A8FE4u: goto label_1a8fe4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FECu: goto label_1a8fec;
            case 0x1A8FF0u: goto label_1a8ff0;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A8FF8u: goto label_1a8ff8;
            case 0x1A8FFCu: goto label_1a8ffc;
            case 0x1A9000u: goto label_1a9000;
            case 0x1A9004u: goto label_1a9004;
            case 0x1A9008u: goto label_1a9008;
            case 0x1A900Cu: goto label_1a900c;
            case 0x1A9010u: goto label_1a9010;
            case 0x1A9014u: goto label_1a9014;
            case 0x1A9018u: goto label_1a9018;
            case 0x1A901Cu: goto label_1a901c;
            case 0x1A9020u: goto label_1a9020;
            case 0x1A9024u: goto label_1a9024;
            case 0x1A9028u: goto label_1a9028;
            case 0x1A902Cu: goto label_1a902c;
            case 0x1A9030u: goto label_1a9030;
            case 0x1A9034u: goto label_1a9034;
            case 0x1A9038u: goto label_1a9038;
            case 0x1A903Cu: goto label_1a903c;
            case 0x1A9040u: goto label_1a9040;
            case 0x1A9044u: goto label_1a9044;
            case 0x1A9048u: goto label_1a9048;
            case 0x1A904Cu: goto label_1a904c;
            case 0x1A9050u: goto label_1a9050;
            case 0x1A9054u: goto label_1a9054;
            case 0x1A9058u: goto label_1a9058;
            case 0x1A905Cu: goto label_1a905c;
            case 0x1A9060u: goto label_1a9060;
            case 0x1A9064u: goto label_1a9064;
            case 0x1A9068u: goto label_1a9068;
            case 0x1A906Cu: goto label_1a906c;
            case 0x1A9070u: goto label_1a9070;
            case 0x1A9074u: goto label_1a9074;
            case 0x1A9078u: goto label_1a9078;
            case 0x1A907Cu: goto label_1a907c;
            case 0x1A9080u: goto label_1a9080;
            case 0x1A9084u: goto label_1a9084;
            case 0x1A9088u: goto label_1a9088;
            case 0x1A908Cu: goto label_1a908c;
            case 0x1A9090u: goto label_1a9090;
            case 0x1A9094u: goto label_1a9094;
            case 0x1A9098u: goto label_1a9098;
            case 0x1A909Cu: goto label_1a909c;
            case 0x1A90A0u: goto label_1a90a0;
            case 0x1A90A4u: goto label_1a90a4;
            case 0x1A90A8u: goto label_1a90a8;
            case 0x1A90ACu: goto label_1a90ac;
            case 0x1A90B0u: goto label_1a90b0;
            case 0x1A90B4u: goto label_1a90b4;
            case 0x1A90B8u: goto label_1a90b8;
            case 0x1A90BCu: goto label_1a90bc;
            case 0x1A90C0u: goto label_1a90c0;
            case 0x1A90C4u: goto label_1a90c4;
            case 0x1A90C8u: goto label_1a90c8;
            case 0x1A90CCu: goto label_1a90cc;
            case 0x1A90D0u: goto label_1a90d0;
            case 0x1A90D4u: goto label_1a90d4;
            case 0x1A90D8u: goto label_1a90d8;
            case 0x1A90DCu: goto label_1a90dc;
            case 0x1A90E0u: goto label_1a90e0;
            case 0x1A90E4u: goto label_1a90e4;
            case 0x1A90E8u: goto label_1a90e8;
            case 0x1A90ECu: goto label_1a90ec;
            case 0x1A90F0u: goto label_1a90f0;
            case 0x1A90F4u: goto label_1a90f4;
            case 0x1A90F8u: goto label_1a90f8;
            case 0x1A90FCu: goto label_1a90fc;
            case 0x1A9100u: goto label_1a9100;
            case 0x1A9104u: goto label_1a9104;
            case 0x1A9108u: goto label_1a9108;
            case 0x1A910Cu: goto label_1a910c;
            case 0x1A9110u: goto label_1a9110;
            case 0x1A9114u: goto label_1a9114;
            case 0x1A9118u: goto label_1a9118;
            case 0x1A911Cu: goto label_1a911c;
            case 0x1A9120u: goto label_1a9120;
            case 0x1A9124u: goto label_1a9124;
            case 0x1A9128u: goto label_1a9128;
            case 0x1A912Cu: goto label_1a912c;
            case 0x1A9130u: goto label_1a9130;
            case 0x1A9134u: goto label_1a9134;
            case 0x1A9138u: goto label_1a9138;
            case 0x1A913Cu: goto label_1a913c;
            case 0x1A9140u: goto label_1a9140;
            case 0x1A9144u: goto label_1a9144;
            case 0x1A9148u: goto label_1a9148;
            case 0x1A914Cu: goto label_1a914c;
            case 0x1A9150u: goto label_1a9150;
            case 0x1A9154u: goto label_1a9154;
            case 0x1A9158u: goto label_1a9158;
            case 0x1A915Cu: goto label_1a915c;
            case 0x1A9160u: goto label_1a9160;
            case 0x1A9164u: goto label_1a9164;
            case 0x1A9168u: goto label_1a9168;
            case 0x1A916Cu: goto label_1a916c;
            case 0x1A9170u: goto label_1a9170;
            case 0x1A9174u: goto label_1a9174;
            case 0x1A9178u: goto label_1a9178;
            case 0x1A917Cu: goto label_1a917c;
            case 0x1A9180u: goto label_1a9180;
            case 0x1A9184u: goto label_1a9184;
            case 0x1A9188u: goto label_1a9188;
            case 0x1A918Cu: goto label_1a918c;
            case 0x1A9190u: goto label_1a9190;
            case 0x1A9194u: goto label_1a9194;
            case 0x1A9198u: goto label_1a9198;
            case 0x1A919Cu: goto label_1a919c;
            case 0x1A91A0u: goto label_1a91a0;
            case 0x1A91A4u: goto label_1a91a4;
            case 0x1A91A8u: goto label_1a91a8;
            case 0x1A91ACu: goto label_1a91ac;
            case 0x1A91B0u: goto label_1a91b0;
            case 0x1A91B4u: goto label_1a91b4;
            case 0x1A91B8u: goto label_1a91b8;
            case 0x1A91BCu: goto label_1a91bc;
            case 0x1A91C0u: goto label_1a91c0;
            case 0x1A91C4u: goto label_1a91c4;
            case 0x1A91C8u: goto label_1a91c8;
            case 0x1A91CCu: goto label_1a91cc;
            case 0x1A91D0u: goto label_1a91d0;
            case 0x1A91D4u: goto label_1a91d4;
            case 0x1A91D8u: goto label_1a91d8;
            case 0x1A91DCu: goto label_1a91dc;
            case 0x1A91E0u: goto label_1a91e0;
            case 0x1A91E4u: goto label_1a91e4;
            case 0x1A91E8u: goto label_1a91e8;
            case 0x1A91ECu: goto label_1a91ec;
            case 0x1A91F0u: goto label_1a91f0;
            case 0x1A91F4u: goto label_1a91f4;
            case 0x1A91F8u: goto label_1a91f8;
            case 0x1A91FCu: goto label_1a91fc;
            case 0x1A9200u: goto label_1a9200;
            case 0x1A9204u: goto label_1a9204;
            case 0x1A9208u: goto label_1a9208;
            case 0x1A920Cu: goto label_1a920c;
            case 0x1A9210u: goto label_1a9210;
            case 0x1A9214u: goto label_1a9214;
            case 0x1A9218u: goto label_1a9218;
            case 0x1A921Cu: goto label_1a921c;
            case 0x1A9220u: goto label_1a9220;
            case 0x1A9224u: goto label_1a9224;
            case 0x1A9228u: goto label_1a9228;
            case 0x1A922Cu: goto label_1a922c;
            case 0x1A9230u: goto label_1a9230;
            case 0x1A9234u: goto label_1a9234;
            case 0x1A9238u: goto label_1a9238;
            case 0x1A923Cu: goto label_1a923c;
            case 0x1A9240u: goto label_1a9240;
            case 0x1A9244u: goto label_1a9244;
            case 0x1A9248u: goto label_1a9248;
            case 0x1A924Cu: goto label_1a924c;
            case 0x1A9250u: goto label_1a9250;
            case 0x1A9254u: goto label_1a9254;
            case 0x1A9258u: goto label_1a9258;
            case 0x1A925Cu: goto label_1a925c;
            case 0x1A9260u: goto label_1a9260;
            case 0x1A9264u: goto label_1a9264;
            case 0x1A9268u: goto label_1a9268;
            case 0x1A926Cu: goto label_1a926c;
            case 0x1A9270u: goto label_1a9270;
            case 0x1A9274u: goto label_1a9274;
            case 0x1A9278u: goto label_1a9278;
            case 0x1A927Cu: goto label_1a927c;
            case 0x1A9280u: goto label_1a9280;
            case 0x1A9284u: goto label_1a9284;
            case 0x1A9288u: goto label_1a9288;
            case 0x1A928Cu: goto label_1a928c;
            case 0x1A9290u: goto label_1a9290;
            case 0x1A9294u: goto label_1a9294;
            case 0x1A9298u: goto label_1a9298;
            case 0x1A929Cu: goto label_1a929c;
            case 0x1A92A0u: goto label_1a92a0;
            case 0x1A92A4u: goto label_1a92a4;
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92ACu: goto label_1a92ac;
            case 0x1A92B0u: goto label_1a92b0;
            case 0x1A92B4u: goto label_1a92b4;
            case 0x1A92B8u: goto label_1a92b8;
            case 0x1A92BCu: goto label_1a92bc;
            case 0x1A92C0u: goto label_1a92c0;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92C8u: goto label_1a92c8;
            case 0x1A92CCu: goto label_1a92cc;
            case 0x1A92D0u: goto label_1a92d0;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A92D8u: goto label_1a92d8;
            case 0x1A92DCu: goto label_1a92dc;
            case 0x1A92E0u: goto label_1a92e0;
            case 0x1A92E4u: goto label_1a92e4;
            case 0x1A92E8u: goto label_1a92e8;
            case 0x1A92ECu: goto label_1a92ec;
            case 0x1A92F0u: goto label_1a92f0;
            case 0x1A92F4u: goto label_1a92f4;
            case 0x1A92F8u: goto label_1a92f8;
            case 0x1A92FCu: goto label_1a92fc;
            case 0x1A9300u: goto label_1a9300;
            case 0x1A9304u: goto label_1a9304;
            case 0x1A9308u: goto label_1a9308;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9310u: goto label_1a9310;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A9318u: goto label_1a9318;
            case 0x1A931Cu: goto label_1a931c;
            case 0x1A9320u: goto label_1a9320;
            case 0x1A9324u: goto label_1a9324;
            case 0x1A9328u: goto label_1a9328;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9330u: goto label_1a9330;
            case 0x1A9334u: goto label_1a9334;
            case 0x1A9338u: goto label_1a9338;
            case 0x1A933Cu: goto label_1a933c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9344u: goto label_1a9344;
            case 0x1A9348u: goto label_1a9348;
            case 0x1A934Cu: goto label_1a934c;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9354u: goto label_1a9354;
            case 0x1A9358u: goto label_1a9358;
            case 0x1A935Cu: goto label_1a935c;
            case 0x1A9360u: goto label_1a9360;
            case 0x1A9364u: goto label_1a9364;
            case 0x1A9368u: goto label_1a9368;
            case 0x1A936Cu: goto label_1a936c;
            case 0x1A9370u: goto label_1a9370;
            case 0x1A9374u: goto label_1a9374;
            case 0x1A9378u: goto label_1a9378;
            case 0x1A937Cu: goto label_1a937c;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A9384u: goto label_1a9384;
            case 0x1A9388u: goto label_1a9388;
            case 0x1A938Cu: goto label_1a938c;
            case 0x1A9390u: goto label_1a9390;
            case 0x1A9394u: goto label_1a9394;
            case 0x1A9398u: goto label_1a9398;
            case 0x1A939Cu: goto label_1a939c;
            case 0x1A93A0u: goto label_1a93a0;
            case 0x1A93A4u: goto label_1a93a4;
            case 0x1A93A8u: goto label_1a93a8;
            case 0x1A93ACu: goto label_1a93ac;
            case 0x1A93B0u: goto label_1a93b0;
            case 0x1A93B4u: goto label_1a93b4;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93BCu: goto label_1a93bc;
            case 0x1A93C0u: goto label_1a93c0;
            case 0x1A93C4u: goto label_1a93c4;
            case 0x1A93C8u: goto label_1a93c8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93D0u: goto label_1a93d0;
            case 0x1A93D4u: goto label_1a93d4;
            case 0x1A93D8u: goto label_1a93d8;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93E4u: goto label_1a93e4;
            case 0x1A93E8u: goto label_1a93e8;
            case 0x1A93ECu: goto label_1a93ec;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A93F4u: goto label_1a93f4;
            case 0x1A93F8u: goto label_1a93f8;
            case 0x1A93FCu: goto label_1a93fc;
            case 0x1A9400u: goto label_1a9400;
            case 0x1A9404u: goto label_1a9404;
            case 0x1A9408u: goto label_1a9408;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9410u: goto label_1a9410;
            case 0x1A9414u: goto label_1a9414;
            case 0x1A9418u: goto label_1a9418;
            case 0x1A941Cu: goto label_1a941c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9424u: goto label_1a9424;
            case 0x1A9428u: goto label_1a9428;
            case 0x1A942Cu: goto label_1a942c;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9434u: goto label_1a9434;
            case 0x1A9438u: goto label_1a9438;
            case 0x1A943Cu: goto label_1a943c;
            case 0x1A9440u: goto label_1a9440;
            case 0x1A9444u: goto label_1a9444;
            case 0x1A9448u: goto label_1a9448;
            case 0x1A944Cu: goto label_1a944c;
            case 0x1A9450u: goto label_1a9450;
            case 0x1A9454u: goto label_1a9454;
            case 0x1A9458u: goto label_1a9458;
            case 0x1A945Cu: goto label_1a945c;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A9464u: goto label_1a9464;
            case 0x1A9468u: goto label_1a9468;
            case 0x1A946Cu: goto label_1a946c;
            case 0x1A9470u: goto label_1a9470;
            case 0x1A9474u: goto label_1a9474;
            case 0x1A9478u: goto label_1a9478;
            case 0x1A947Cu: goto label_1a947c;
            case 0x1A9480u: goto label_1a9480;
            case 0x1A9484u: goto label_1a9484;
            case 0x1A9488u: goto label_1a9488;
            case 0x1A948Cu: goto label_1a948c;
            case 0x1A9490u: goto label_1a9490;
            case 0x1A9494u: goto label_1a9494;
            case 0x1A9498u: goto label_1a9498;
            case 0x1A949Cu: goto label_1a949c;
            case 0x1A94A0u: goto label_1a94a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C94u; }
            if (ctx->pc != 0x1A8C94u) { return; }
        }
    }
    ctx->pc = 0x1A8C94u;
label_1a8c94:
    // 0x1a8c94: 0x100001fe  b           . + 4 + (0x1FE << 2)
label_1a8c98:
    if (ctx->pc == 0x1A8C98u) {
        ctx->pc = 0x1A8C9Cu;
        goto label_1a8c9c;
    }
    ctx->pc = 0x1A8C94u;
    {
        const bool branch_taken_0x1a8c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8c94) {
            ctx->pc = 0x1A9490u;
            goto label_1a9490;
        }
    }
    ctx->pc = 0x1A8C9Cu;
label_1a8c9c:
    // 0x1a8c9c: 0x0  nop
    ctx->pc = 0x1a8c9cu;
    // NOP
label_1a8ca0:
    // 0x1a8ca0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a8ca4:
    // 0x1a8ca4: 0x1c4001f2  bgtz        $v0, . + 4 + (0x1F2 << 2)
label_1a8ca8:
    if (ctx->pc == 0x1A8CA8u) {
        ctx->pc = 0x1A8CACu;
        goto label_1a8cac;
    }
    ctx->pc = 0x1A8CA4u;
    {
        const bool branch_taken_0x1a8ca4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a8ca4) {
            ctx->pc = 0x1A9470u;
            goto label_1a9470;
        }
    }
    ctx->pc = 0x1A8CACu;
label_1a8cac:
    // 0x1a8cac: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1a8cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1a8cb0:
    // 0x1a8cb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8cb4:
    // 0x1a8cb4: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1a8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1a8cb8:
    // 0x1a8cb8: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1a8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a8cbc:
    // 0x1a8cbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a8cc0:
    // 0x1a8cc0: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1a8cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1a8cc4:
    // 0x1a8cc4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1a8cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1a8cc8:
    // 0x1a8cc8: 0xc0604b0  jal         func_1812C0
label_1a8ccc:
    if (ctx->pc == 0x1A8CCCu) {
        ctx->pc = 0x1A8CCCu;
            // 0x1a8ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A8CD0u;
        goto label_1a8cd0;
    }
    ctx->pc = 0x1A8CC8u;
    SET_GPR_U32(ctx, 31, 0x1A8CD0u);
    ctx->pc = 0x1A8CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CC8u;
            // 0x1a8ccc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CD0u; }
        if (ctx->pc != 0x1A8CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CD0u; }
        if (ctx->pc != 0x1A8CD0u) { return; }
    }
    ctx->pc = 0x1A8CD0u;
label_1a8cd0:
    // 0x1a8cd0: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a8cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8cd4:
    // 0x1a8cd4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1a8cd8:
    // 0x1a8cd8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1a8cd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1a8cdc:
    // 0x1a8cdc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a8cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8ce0:
    // 0x1a8ce0: 0x0  nop
    ctx->pc = 0x1a8ce0u;
    // NOP
label_1a8ce4:
    // 0x1a8ce4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a8ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a8ce8:
    // 0x1a8ce8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a8ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a8cec:
    // 0x1a8cec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a8cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8cf0:
    // 0x1a8cf0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a8cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a8cf4:
    // 0x1a8cf4: 0xc050ba4  jal         func_142E90
label_1a8cf8:
    if (ctx->pc == 0x1A8CF8u) {
        ctx->pc = 0x1A8CF8u;
            // 0x1a8cf8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A8CFCu;
        goto label_1a8cfc;
    }
    ctx->pc = 0x1A8CF4u;
    SET_GPR_U32(ctx, 31, 0x1A8CFCu);
    ctx->pc = 0x1A8CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CF4u;
            // 0x1a8cf8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CFCu; }
        if (ctx->pc != 0x1A8CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8CFCu; }
        if (ctx->pc != 0x1A8CFCu) { return; }
    }
    ctx->pc = 0x1A8CFCu;
label_1a8cfc:
    // 0x1a8cfc: 0xc040d72  jal         func_1035C8
label_1a8d00:
    if (ctx->pc == 0x1A8D00u) {
        ctx->pc = 0x1A8D00u;
            // 0x1a8d00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1A8D04u;
        goto label_1a8d04;
    }
    ctx->pc = 0x1A8CFCu;
    SET_GPR_U32(ctx, 31, 0x1A8D04u);
    ctx->pc = 0x1A8D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8CFCu;
            // 0x1a8d00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D04u; }
        if (ctx->pc != 0x1A8D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D04u; }
        if (ctx->pc != 0x1A8D04u) { return; }
    }
    ctx->pc = 0x1A8D04u;
label_1a8d04:
    // 0x1a8d04: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1a8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1a8d08:
    // 0x1a8d08: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a8d08u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a8d0c:
    // 0x1a8d0c: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a8d0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a8d10:
    // 0x1a8d10: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a8d14:
    // 0x1a8d14: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a8d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a8d18:
    // 0x1a8d18: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a8d18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a8d1c:
    // 0x1a8d1c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8d1cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a8d20:
    // 0x1a8d20: 0xc040880  jal         func_102200
label_1a8d24:
    if (ctx->pc == 0x1A8D24u) {
        ctx->pc = 0x1A8D24u;
            // 0x1a8d24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D28u;
        goto label_1a8d28;
    }
    ctx->pc = 0x1A8D20u;
    SET_GPR_U32(ctx, 31, 0x1A8D28u);
    ctx->pc = 0x1A8D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D20u;
            // 0x1a8d24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D28u; }
        if (ctx->pc != 0x1A8D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D28u; }
        if (ctx->pc != 0x1A8D28u) { return; }
    }
    ctx->pc = 0x1A8D28u;
label_1a8d28:
    // 0x1a8d28: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1a8d28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1a8d2c:
    // 0x1a8d2c: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a8d2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a8d30:
    // 0x1a8d30: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a8d30u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a8d34:
    // 0x1a8d34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a8d38:
    // 0x1a8d38: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a8d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a8d3c:
    // 0x1a8d3c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a8d3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a8d40:
    // 0x1a8d40: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8d40u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a8d44:
    // 0x1a8d44: 0xc040866  jal         func_102198
label_1a8d48:
    if (ctx->pc == 0x1A8D48u) {
        ctx->pc = 0x1A8D48u;
            // 0x1a8d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D4Cu;
        goto label_1a8d4c;
    }
    ctx->pc = 0x1A8D44u;
    SET_GPR_U32(ctx, 31, 0x1A8D4Cu);
    ctx->pc = 0x1A8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D44u;
            // 0x1a8d48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D4Cu; }
        if (ctx->pc != 0x1A8D4Cu) { return; }
    }
    ctx->pc = 0x1A8D4Cu;
label_1a8d4c:
    // 0x1a8d4c: 0xc040a74  jal         func_1029D0
label_1a8d50:
    if (ctx->pc == 0x1A8D50u) {
        ctx->pc = 0x1A8D50u;
            // 0x1a8d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D54u;
        goto label_1a8d54;
    }
    ctx->pc = 0x1A8D4Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D54u);
    ctx->pc = 0x1A8D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D4Cu;
            // 0x1a8d50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D54u; }
        if (ctx->pc != 0x1A8D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D54u; }
        if (ctx->pc != 0x1A8D54u) { return; }
    }
    ctx->pc = 0x1A8D54u;
label_1a8d54:
    // 0x1a8d54: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1a8d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8d58:
    // 0x1a8d58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a8d58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a8d5c:
    // 0x1a8d5c: 0xc050ba4  jal         func_142E90
label_1a8d60:
    if (ctx->pc == 0x1A8D60u) {
        ctx->pc = 0x1A8D60u;
            // 0x1a8d60: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1A8D64u;
        goto label_1a8d64;
    }
    ctx->pc = 0x1A8D5Cu;
    SET_GPR_U32(ctx, 31, 0x1A8D64u);
    ctx->pc = 0x1A8D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D5Cu;
            // 0x1a8d60: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D64u; }
        if (ctx->pc != 0x1A8D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D64u; }
        if (ctx->pc != 0x1A8D64u) { return; }
    }
    ctx->pc = 0x1A8D64u;
label_1a8d64:
    // 0x1a8d64: 0xc040d72  jal         func_1035C8
label_1a8d68:
    if (ctx->pc == 0x1A8D68u) {
        ctx->pc = 0x1A8D68u;
            // 0x1a8d68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1A8D6Cu;
        goto label_1a8d6c;
    }
    ctx->pc = 0x1A8D64u;
    SET_GPR_U32(ctx, 31, 0x1A8D6Cu);
    ctx->pc = 0x1A8D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D64u;
            // 0x1a8d68: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D6Cu; }
        if (ctx->pc != 0x1A8D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D6Cu; }
        if (ctx->pc != 0x1A8D6Cu) { return; }
    }
    ctx->pc = 0x1A8D6Cu;
label_1a8d6c:
    // 0x1a8d6c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1a8d70:
    // 0x1a8d70: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a8d70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a8d74:
    // 0x1a8d74: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a8d74u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a8d78:
    // 0x1a8d78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a8d7c:
    // 0x1a8d7c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a8d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a8d80:
    // 0x1a8d80: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a8d80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a8d84:
    // 0x1a8d84: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8d84u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a8d88:
    // 0x1a8d88: 0xc040880  jal         func_102200
label_1a8d8c:
    if (ctx->pc == 0x1A8D8Cu) {
        ctx->pc = 0x1A8D8Cu;
            // 0x1a8d8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D90u;
        goto label_1a8d90;
    }
    ctx->pc = 0x1A8D88u;
    SET_GPR_U32(ctx, 31, 0x1A8D90u);
    ctx->pc = 0x1A8D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8D88u;
            // 0x1a8d8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D90u; }
        if (ctx->pc != 0x1A8D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8D90u; }
        if (ctx->pc != 0x1A8D90u) { return; }
    }
    ctx->pc = 0x1A8D90u;
label_1a8d90:
    // 0x1a8d90: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1a8d94:
    // 0x1a8d94: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1a8d94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1a8d98:
    // 0x1a8d98: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1a8d98u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1a8d9c:
    // 0x1a8d9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a8d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a8da0:
    // 0x1a8da0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a8da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a8da4:
    // 0x1a8da4: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1a8da4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1a8da8:
    // 0x1a8da8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a8da8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a8dac:
    // 0x1a8dac: 0xc040866  jal         func_102198
label_1a8db0:
    if (ctx->pc == 0x1A8DB0u) {
        ctx->pc = 0x1A8DB0u;
            // 0x1a8db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DB4u;
        goto label_1a8db4;
    }
    ctx->pc = 0x1A8DACu;
    SET_GPR_U32(ctx, 31, 0x1A8DB4u);
    ctx->pc = 0x1A8DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DACu;
            // 0x1a8db0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DB4u; }
        if (ctx->pc != 0x1A8DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DB4u; }
        if (ctx->pc != 0x1A8DB4u) { return; }
    }
    ctx->pc = 0x1A8DB4u;
label_1a8db4:
    // 0x1a8db4: 0xc040a74  jal         func_1029D0
label_1a8db8:
    if (ctx->pc == 0x1A8DB8u) {
        ctx->pc = 0x1A8DB8u;
            // 0x1a8db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DBCu;
        goto label_1a8dbc;
    }
    ctx->pc = 0x1A8DB4u;
    SET_GPR_U32(ctx, 31, 0x1A8DBCu);
    ctx->pc = 0x1A8DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DB4u;
            // 0x1a8db8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DBCu; }
        if (ctx->pc != 0x1A8DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DBCu; }
        if (ctx->pc != 0x1A8DBCu) { return; }
    }
    ctx->pc = 0x1A8DBCu;
label_1a8dbc:
    // 0x1a8dbc: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1a8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8dc0:
    // 0x1a8dc0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a8dc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a8dc4:
    // 0x1a8dc4: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1a8dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1a8dc8:
    // 0x1a8dc8: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1a8dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1a8dcc:
    // 0x1a8dcc: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1a8dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1a8dd0:
    // 0x1a8dd0: 0x142001af  bnez        $at, . + 4 + (0x1AF << 2)
label_1a8dd4:
    if (ctx->pc == 0x1A8DD4u) {
        ctx->pc = 0x1A8DD8u;
        goto label_1a8dd8;
    }
    ctx->pc = 0x1A8DD0u;
    {
        const bool branch_taken_0x1a8dd0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dd0) {
            ctx->pc = 0x1A9490u;
            goto label_1a9490;
        }
    }
    ctx->pc = 0x1A8DD8u;
label_1a8dd8:
    // 0x1a8dd8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8ddc:
    // 0x1a8ddc: 0x2404001a  addiu       $a0, $zero, 0x1A
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1a8de0:
    // 0x1a8de0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8de4:
    // 0x1a8de4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8de4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8de8:
    // 0x1a8de8: 0xc05d080  jal         func_174200
label_1a8dec:
    if (ctx->pc == 0x1A8DECu) {
        ctx->pc = 0x1A8DECu;
            // 0x1a8dec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8DF0u;
        goto label_1a8df0;
    }
    ctx->pc = 0x1A8DE8u;
    SET_GPR_U32(ctx, 31, 0x1A8DF0u);
    ctx->pc = 0x1A8DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DE8u;
            // 0x1a8dec: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DF0u; }
        if (ctx->pc != 0x1A8DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DF0u; }
        if (ctx->pc != 0x1A8DF0u) { return; }
    }
    ctx->pc = 0x1A8DF0u;
label_1a8df0:
    // 0x1a8df0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8df4:
    // 0x1a8df4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x1a8df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1a8df8:
    // 0x1a8df8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8dfc:
    // 0x1a8dfc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8dfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8e00:
    // 0x1a8e00: 0xc05d080  jal         func_174200
label_1a8e04:
    if (ctx->pc == 0x1A8E04u) {
        ctx->pc = 0x1A8E04u;
            // 0x1a8e04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8E08u;
        goto label_1a8e08;
    }
    ctx->pc = 0x1A8E00u;
    SET_GPR_U32(ctx, 31, 0x1A8E08u);
    ctx->pc = 0x1A8E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E00u;
            // 0x1a8e04: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E08u; }
        if (ctx->pc != 0x1A8E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E08u; }
        if (ctx->pc != 0x1A8E08u) { return; }
    }
    ctx->pc = 0x1A8E08u;
label_1a8e08:
    // 0x1a8e08: 0xc050bb4  jal         func_142ED0
label_1a8e0c:
    if (ctx->pc == 0x1A8E0Cu) {
        ctx->pc = 0x1A8E10u;
        goto label_1a8e10;
    }
    ctx->pc = 0x1A8E08u;
    SET_GPR_U32(ctx, 31, 0x1A8E10u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E10u; }
        if (ctx->pc != 0x1A8E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E10u; }
        if (ctx->pc != 0x1A8E10u) { return; }
    }
    ctx->pc = 0x1A8E10u;
label_1a8e10:
    // 0x1a8e10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8e10u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8e14:
    // 0x1a8e14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a8e18:
    if (ctx->pc == 0x1A8E18u) {
        ctx->pc = 0x1A8E1Cu;
        goto label_1a8e1c;
    }
    ctx->pc = 0x1A8E14u;
    {
        const bool branch_taken_0x1a8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e14) {
            ctx->pc = 0x1A8E38u;
            goto label_1a8e38;
        }
    }
    ctx->pc = 0x1A8E1Cu;
label_1a8e1c:
    // 0x1a8e1c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8e20:
    // 0x1a8e20: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1a8e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1a8e24:
    // 0x1a8e24: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8e28:
    // 0x1a8e28: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8e28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8e2c:
    // 0x1a8e2c: 0xc05d080  jal         func_174200
label_1a8e30:
    if (ctx->pc == 0x1A8E30u) {
        ctx->pc = 0x1A8E30u;
            // 0x1a8e30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8E34u;
        goto label_1a8e34;
    }
    ctx->pc = 0x1A8E2Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E34u);
    ctx->pc = 0x1A8E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E2Cu;
            // 0x1a8e30: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E34u; }
        if (ctx->pc != 0x1A8E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E34u; }
        if (ctx->pc != 0x1A8E34u) { return; }
    }
    ctx->pc = 0x1A8E34u;
label_1a8e34:
    // 0x1a8e34: 0x0  nop
    ctx->pc = 0x1a8e34u;
    // NOP
label_1a8e38:
    // 0x1a8e38: 0xc050bb4  jal         func_142ED0
label_1a8e3c:
    if (ctx->pc == 0x1A8E3Cu) {
        ctx->pc = 0x1A8E40u;
        goto label_1a8e40;
    }
    ctx->pc = 0x1A8E38u;
    SET_GPR_U32(ctx, 31, 0x1A8E40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E40u; }
        if (ctx->pc != 0x1A8E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E40u; }
        if (ctx->pc != 0x1A8E40u) { return; }
    }
    ctx->pc = 0x1A8E40u;
label_1a8e40:
    // 0x1a8e40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8e40u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8e44:
    // 0x1a8e44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a8e48:
    if (ctx->pc == 0x1A8E48u) {
        ctx->pc = 0x1A8E4Cu;
        goto label_1a8e4c;
    }
    ctx->pc = 0x1A8E44u;
    {
        const bool branch_taken_0x1a8e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e44) {
            ctx->pc = 0x1A8E68u;
            goto label_1a8e68;
        }
    }
    ctx->pc = 0x1A8E4Cu;
label_1a8e4c:
    // 0x1a8e4c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8e50:
    // 0x1a8e50: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1a8e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a8e54:
    // 0x1a8e54: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8e58:
    // 0x1a8e58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8e5c:
    // 0x1a8e5c: 0xc05d080  jal         func_174200
label_1a8e60:
    if (ctx->pc == 0x1A8E60u) {
        ctx->pc = 0x1A8E60u;
            // 0x1a8e60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8E64u;
        goto label_1a8e64;
    }
    ctx->pc = 0x1A8E5Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E64u);
    ctx->pc = 0x1A8E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E5Cu;
            // 0x1a8e60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E64u; }
        if (ctx->pc != 0x1A8E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E64u; }
        if (ctx->pc != 0x1A8E64u) { return; }
    }
    ctx->pc = 0x1A8E64u;
label_1a8e64:
    // 0x1a8e64: 0x0  nop
    ctx->pc = 0x1a8e64u;
    // NOP
label_1a8e68:
    // 0x1a8e68: 0xc050bb4  jal         func_142ED0
label_1a8e6c:
    if (ctx->pc == 0x1A8E6Cu) {
        ctx->pc = 0x1A8E70u;
        goto label_1a8e70;
    }
    ctx->pc = 0x1A8E68u;
    SET_GPR_U32(ctx, 31, 0x1A8E70u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E70u; }
        if (ctx->pc != 0x1A8E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E70u; }
        if (ctx->pc != 0x1A8E70u) { return; }
    }
    ctx->pc = 0x1A8E70u;
label_1a8e70:
    // 0x1a8e70: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a8e70u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a8e74:
    // 0x1a8e74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a8e78:
    if (ctx->pc == 0x1A8E78u) {
        ctx->pc = 0x1A8E7Cu;
        goto label_1a8e7c;
    }
    ctx->pc = 0x1A8E74u;
    {
        const bool branch_taken_0x1a8e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8e74) {
            ctx->pc = 0x1A8E98u;
            goto label_1a8e98;
        }
    }
    ctx->pc = 0x1A8E7Cu;
label_1a8e7c:
    // 0x1a8e7c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a8e80:
    // 0x1a8e80: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1a8e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1a8e84:
    // 0x1a8e84: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a8e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8e88:
    // 0x1a8e88: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a8e88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a8e8c:
    // 0x1a8e8c: 0xc05d080  jal         func_174200
label_1a8e90:
    if (ctx->pc == 0x1A8E90u) {
        ctx->pc = 0x1A8E90u;
            // 0x1a8e90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A8E94u;
        goto label_1a8e94;
    }
    ctx->pc = 0x1A8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E94u);
    ctx->pc = 0x1A8E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E8Cu;
            // 0x1a8e90: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E94u; }
        if (ctx->pc != 0x1A8E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E94u; }
        if (ctx->pc != 0x1A8E94u) { return; }
    }
    ctx->pc = 0x1A8E94u;
label_1a8e94:
    // 0x1a8e94: 0x0  nop
    ctx->pc = 0x1a8e94u;
    // NOP
label_1a8e98:
    // 0x1a8e98: 0xc050bb4  jal         func_142ED0
label_1a8e9c:
    if (ctx->pc == 0x1A8E9Cu) {
        ctx->pc = 0x1A8EA0u;
        goto label_1a8ea0;
    }
    ctx->pc = 0x1A8E98u;
    SET_GPR_U32(ctx, 31, 0x1A8EA0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EA0u; }
        if (ctx->pc != 0x1A8EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EA0u; }
        if (ctx->pc != 0x1A8EA0u) { return; }
    }
    ctx->pc = 0x1A8EA0u;
label_1a8ea0:
    // 0x1a8ea0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8ea4:
    // 0x1a8ea4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8ea8:
    // 0x1a8ea8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8ea8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8eac:
    // 0x1a8eac: 0x0  nop
    ctx->pc = 0x1a8eacu;
    // NOP
label_1a8eb0:
    // 0x1a8eb0: 0x0  nop
    ctx->pc = 0x1a8eb0u;
    // NOP
label_1a8eb4:
    // 0x1a8eb4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8eb4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8eb8:
    // 0x1a8eb8: 0xc050bb4  jal         func_142ED0
label_1a8ebc:
    if (ctx->pc == 0x1A8EBCu) {
        ctx->pc = 0x1A8EBCu;
            // 0x1a8ebc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8EC0u;
        goto label_1a8ec0;
    }
    ctx->pc = 0x1A8EB8u;
    SET_GPR_U32(ctx, 31, 0x1A8EC0u);
    ctx->pc = 0x1A8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EB8u;
            // 0x1a8ebc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EC0u; }
        if (ctx->pc != 0x1A8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EC0u; }
        if (ctx->pc != 0x1A8EC0u) { return; }
    }
    ctx->pc = 0x1A8EC0u;
label_1a8ec0:
    // 0x1a8ec0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a8ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a8ec4:
    // 0x1a8ec4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8ec8:
    // 0x1a8ec8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8ec8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8ecc:
    // 0x1a8ecc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8eccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8ed0:
    // 0x1a8ed0: 0x0  nop
    ctx->pc = 0x1a8ed0u;
    // NOP
label_1a8ed4:
    // 0x1a8ed4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a8ed4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a8ed8:
    // 0x1a8ed8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a8ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8edc:
    // 0x1a8edc: 0x1810  mfhi        $v1
    ctx->pc = 0x1a8edcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a8ee0:
    // 0x1a8ee0: 0xc053740  jal         func_14DD00
label_1a8ee4:
    if (ctx->pc == 0x1A8EE4u) {
        ctx->pc = 0x1A8EE4u;
            // 0x1a8ee4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A8EE8u;
        goto label_1a8ee8;
    }
    ctx->pc = 0x1A8EE0u;
    SET_GPR_U32(ctx, 31, 0x1A8EE8u);
    ctx->pc = 0x1A8EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8EE0u;
            // 0x1a8ee4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EE8u; }
        if (ctx->pc != 0x1A8EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EE8u; }
        if (ctx->pc != 0x1A8EE8u) { return; }
    }
    ctx->pc = 0x1A8EE8u;
label_1a8ee8:
    // 0x1a8ee8: 0xc050bb4  jal         func_142ED0
label_1a8eec:
    if (ctx->pc == 0x1A8EECu) {
        ctx->pc = 0x1A8EF0u;
        goto label_1a8ef0;
    }
    ctx->pc = 0x1A8EE8u;
    SET_GPR_U32(ctx, 31, 0x1A8EF0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EF0u; }
        if (ctx->pc != 0x1A8EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8EF0u; }
        if (ctx->pc != 0x1A8EF0u) { return; }
    }
    ctx->pc = 0x1A8EF0u;
label_1a8ef0:
    // 0x1a8ef0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8ef4:
    // 0x1a8ef4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a8ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8ef8:
    // 0x1a8ef8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8ef8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8efc:
    // 0x1a8efc: 0x0  nop
    ctx->pc = 0x1a8efcu;
    // NOP
label_1a8f00:
    // 0x1a8f00: 0x0  nop
    ctx->pc = 0x1a8f00u;
    // NOP
label_1a8f04:
    // 0x1a8f04: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8f04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8f08:
    // 0x1a8f08: 0xc050bb4  jal         func_142ED0
label_1a8f0c:
    if (ctx->pc == 0x1A8F0Cu) {
        ctx->pc = 0x1A8F0Cu;
            // 0x1a8f0c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8F10u;
        goto label_1a8f10;
    }
    ctx->pc = 0x1A8F08u;
    SET_GPR_U32(ctx, 31, 0x1A8F10u);
    ctx->pc = 0x1A8F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F08u;
            // 0x1a8f0c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F10u; }
        if (ctx->pc != 0x1A8F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F10u; }
        if (ctx->pc != 0x1A8F10u) { return; }
    }
    ctx->pc = 0x1A8F10u;
label_1a8f10:
    // 0x1a8f10: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a8f14:
    // 0x1a8f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f18:
    // 0x1a8f18: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8f18u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8f1c:
    // 0x1a8f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a8f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8f20:
    // 0x1a8f20: 0x0  nop
    ctx->pc = 0x1a8f20u;
    // NOP
label_1a8f24:
    // 0x1a8f24: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a8f24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a8f28:
    // 0x1a8f28: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8f2c:
    // 0x1a8f2c: 0x1810  mfhi        $v1
    ctx->pc = 0x1a8f2cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1a8f30:
    // 0x1a8f30: 0xc053740  jal         func_14DD00
label_1a8f34:
    if (ctx->pc == 0x1A8F34u) {
        ctx->pc = 0x1A8F34u;
            // 0x1a8f34: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1A8F38u;
        goto label_1a8f38;
    }
    ctx->pc = 0x1A8F30u;
    SET_GPR_U32(ctx, 31, 0x1A8F38u);
    ctx->pc = 0x1A8F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F30u;
            // 0x1a8f34: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F38u; }
        if (ctx->pc != 0x1A8F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F38u; }
        if (ctx->pc != 0x1A8F38u) { return; }
    }
    ctx->pc = 0x1A8F38u;
label_1a8f38:
    // 0x1a8f38: 0xc050bb4  jal         func_142ED0
label_1a8f3c:
    if (ctx->pc == 0x1A8F3Cu) {
        ctx->pc = 0x1A8F40u;
        goto label_1a8f40;
    }
    ctx->pc = 0x1A8F38u;
    SET_GPR_U32(ctx, 31, 0x1A8F40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F40u; }
        if (ctx->pc != 0x1A8F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F40u; }
        if (ctx->pc != 0x1A8F40u) { return; }
    }
    ctx->pc = 0x1A8F40u;
label_1a8f40:
    // 0x1a8f40: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8f44:
    // 0x1a8f44: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8f48:
    // 0x1a8f48: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8f48u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8f4c:
    // 0x1a8f4c: 0x0  nop
    ctx->pc = 0x1a8f4cu;
    // NOP
label_1a8f50:
    // 0x1a8f50: 0x0  nop
    ctx->pc = 0x1a8f50u;
    // NOP
label_1a8f54:
    // 0x1a8f54: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8f54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8f58:
    // 0x1a8f58: 0xc050bb4  jal         func_142ED0
label_1a8f5c:
    if (ctx->pc == 0x1A8F5Cu) {
        ctx->pc = 0x1A8F5Cu;
            // 0x1a8f5c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8F60u;
        goto label_1a8f60;
    }
    ctx->pc = 0x1A8F58u;
    SET_GPR_U32(ctx, 31, 0x1A8F60u);
    ctx->pc = 0x1A8F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F58u;
            // 0x1a8f5c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F60u; }
        if (ctx->pc != 0x1A8F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F60u; }
        if (ctx->pc != 0x1A8F60u) { return; }
    }
    ctx->pc = 0x1A8F60u;
label_1a8f60:
    // 0x1a8f60: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a8f64:
    // 0x1a8f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8f68:
    // 0x1a8f68: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8f68u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8f6c:
    // 0x1a8f6c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a8f70:
    // 0x1a8f70: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a8f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8f74:
    // 0x1a8f74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a8f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8f78:
    // 0x1a8f78: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8f78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8f7c:
    // 0x1a8f7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a8f7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a8f80:
    // 0x1a8f80: 0xc053740  jal         func_14DD00
label_1a8f84:
    if (ctx->pc == 0x1A8F84u) {
        ctx->pc = 0x1A8F84u;
            // 0x1a8f84: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8F88u;
        goto label_1a8f88;
    }
    ctx->pc = 0x1A8F80u;
    SET_GPR_U32(ctx, 31, 0x1A8F88u);
    ctx->pc = 0x1A8F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8F80u;
            // 0x1a8f84: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F88u; }
        if (ctx->pc != 0x1A8F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F88u; }
        if (ctx->pc != 0x1A8F88u) { return; }
    }
    ctx->pc = 0x1A8F88u;
label_1a8f88:
    // 0x1a8f88: 0xc050bb4  jal         func_142ED0
label_1a8f8c:
    if (ctx->pc == 0x1A8F8Cu) {
        ctx->pc = 0x1A8F90u;
        goto label_1a8f90;
    }
    ctx->pc = 0x1A8F88u;
    SET_GPR_U32(ctx, 31, 0x1A8F90u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F90u; }
        if (ctx->pc != 0x1A8F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8F90u; }
        if (ctx->pc != 0x1A8F90u) { return; }
    }
    ctx->pc = 0x1A8F90u;
label_1a8f90:
    // 0x1a8f90: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8f94:
    // 0x1a8f94: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a8f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8f98:
    // 0x1a8f98: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8f98u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8f9c:
    // 0x1a8f9c: 0x0  nop
    ctx->pc = 0x1a8f9cu;
    // NOP
label_1a8fa0:
    // 0x1a8fa0: 0x0  nop
    ctx->pc = 0x1a8fa0u;
    // NOP
label_1a8fa4:
    // 0x1a8fa4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8fa4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8fa8:
    // 0x1a8fa8: 0xc050bb4  jal         func_142ED0
label_1a8fac:
    if (ctx->pc == 0x1A8FACu) {
        ctx->pc = 0x1A8FACu;
            // 0x1a8fac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8FB0u;
        goto label_1a8fb0;
    }
    ctx->pc = 0x1A8FA8u;
    SET_GPR_U32(ctx, 31, 0x1A8FB0u);
    ctx->pc = 0x1A8FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FA8u;
            // 0x1a8fac: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB0u; }
        if (ctx->pc != 0x1A8FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FB0u; }
        if (ctx->pc != 0x1A8FB0u) { return; }
    }
    ctx->pc = 0x1A8FB0u;
label_1a8fb0:
    // 0x1a8fb0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a8fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a8fb4:
    // 0x1a8fb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a8fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8fb8:
    // 0x1a8fb8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a8fb8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8fbc:
    // 0x1a8fbc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a8fc0:
    // 0x1a8fc0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8fc4:
    // 0x1a8fc4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a8fc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a8fc8:
    // 0x1a8fc8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8fc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8fcc:
    // 0x1a8fcc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a8fccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a8fd0:
    // 0x1a8fd0: 0xc053740  jal         func_14DD00
label_1a8fd4:
    if (ctx->pc == 0x1A8FD4u) {
        ctx->pc = 0x1A8FD4u;
            // 0x1a8fd4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A8FD8u;
        goto label_1a8fd8;
    }
    ctx->pc = 0x1A8FD0u;
    SET_GPR_U32(ctx, 31, 0x1A8FD8u);
    ctx->pc = 0x1A8FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FD0u;
            // 0x1a8fd4: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FD8u; }
        if (ctx->pc != 0x1A8FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FD8u; }
        if (ctx->pc != 0x1A8FD8u) { return; }
    }
    ctx->pc = 0x1A8FD8u;
label_1a8fd8:
    // 0x1a8fd8: 0xc050bb4  jal         func_142ED0
label_1a8fdc:
    if (ctx->pc == 0x1A8FDCu) {
        ctx->pc = 0x1A8FE0u;
        goto label_1a8fe0;
    }
    ctx->pc = 0x1A8FD8u;
    SET_GPR_U32(ctx, 31, 0x1A8FE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FE0u; }
        if (ctx->pc != 0x1A8FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8FE0u; }
        if (ctx->pc != 0x1A8FE0u) { return; }
    }
    ctx->pc = 0x1A8FE0u;
label_1a8fe0:
    // 0x1a8fe0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a8fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a8fe4:
    // 0x1a8fe4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a8fe8:
    // 0x1a8fe8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a8fe8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a8fec:
    // 0x1a8fec: 0x0  nop
    ctx->pc = 0x1a8fecu;
    // NOP
label_1a8ff0:
    // 0x1a8ff0: 0x0  nop
    ctx->pc = 0x1a8ff0u;
    // NOP
label_1a8ff4:
    // 0x1a8ff4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a8ff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a8ff8:
    // 0x1a8ff8: 0xc050bb4  jal         func_142ED0
label_1a8ffc:
    if (ctx->pc == 0x1A8FFCu) {
        ctx->pc = 0x1A8FFCu;
            // 0x1a8ffc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9000u;
        goto label_1a9000;
    }
    ctx->pc = 0x1A8FF8u;
    SET_GPR_U32(ctx, 31, 0x1A9000u);
    ctx->pc = 0x1A8FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8FF8u;
            // 0x1a8ffc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9000u; }
        if (ctx->pc != 0x1A9000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9000u; }
        if (ctx->pc != 0x1A9000u) { return; }
    }
    ctx->pc = 0x1A9000u;
label_1a9000:
    // 0x1a9000: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a9004:
    // 0x1a9004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9008:
    // 0x1a9008: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9008u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a900c:
    // 0x1a900c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a9010:
    // 0x1a9010: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9014:
    // 0x1a9014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9018:
    // 0x1a9018: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9018u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a901c:
    // 0x1a901c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a901cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a9020:
    // 0x1a9020: 0xc053740  jal         func_14DD00
label_1a9024:
    if (ctx->pc == 0x1A9024u) {
        ctx->pc = 0x1A9024u;
            // 0x1a9024: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9028u;
        goto label_1a9028;
    }
    ctx->pc = 0x1A9020u;
    SET_GPR_U32(ctx, 31, 0x1A9028u);
    ctx->pc = 0x1A9024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9020u;
            // 0x1a9024: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9028u; }
        if (ctx->pc != 0x1A9028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9028u; }
        if (ctx->pc != 0x1A9028u) { return; }
    }
    ctx->pc = 0x1A9028u;
label_1a9028:
    // 0x1a9028: 0xc050bb4  jal         func_142ED0
label_1a902c:
    if (ctx->pc == 0x1A902Cu) {
        ctx->pc = 0x1A9030u;
        goto label_1a9030;
    }
    ctx->pc = 0x1A9028u;
    SET_GPR_U32(ctx, 31, 0x1A9030u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9030u; }
        if (ctx->pc != 0x1A9030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9030u; }
        if (ctx->pc != 0x1A9030u) { return; }
    }
    ctx->pc = 0x1A9030u;
label_1a9030:
    // 0x1a9030: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9034:
    // 0x1a9034: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9038:
    // 0x1a9038: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9038u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a903c:
    // 0x1a903c: 0x0  nop
    ctx->pc = 0x1a903cu;
    // NOP
label_1a9040:
    // 0x1a9040: 0x0  nop
    ctx->pc = 0x1a9040u;
    // NOP
label_1a9044:
    // 0x1a9044: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9044u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9048:
    // 0x1a9048: 0xc050bb4  jal         func_142ED0
label_1a904c:
    if (ctx->pc == 0x1A904Cu) {
        ctx->pc = 0x1A904Cu;
            // 0x1a904c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9050u;
        goto label_1a9050;
    }
    ctx->pc = 0x1A9048u;
    SET_GPR_U32(ctx, 31, 0x1A9050u);
    ctx->pc = 0x1A904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9048u;
            // 0x1a904c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9050u; }
        if (ctx->pc != 0x1A9050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9050u; }
        if (ctx->pc != 0x1A9050u) { return; }
    }
    ctx->pc = 0x1A9050u;
label_1a9050:
    // 0x1a9050: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a9054:
    // 0x1a9054: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a9054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9058:
    // 0x1a9058: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9058u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a905c:
    // 0x1a905c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9060:
    // 0x1a9060: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a9064:
    // 0x1a9064: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1a9064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1a9068:
    // 0x1a9068: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a9068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a906c:
    // 0x1a906c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a906cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9070:
    // 0x1a9070: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9070u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9074:
    // 0x1a9074: 0xc053740  jal         func_14DD00
label_1a9078:
    if (ctx->pc == 0x1A9078u) {
        ctx->pc = 0x1A9078u;
            // 0x1a9078: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A907Cu;
        goto label_1a907c;
    }
    ctx->pc = 0x1A9074u;
    SET_GPR_U32(ctx, 31, 0x1A907Cu);
    ctx->pc = 0x1A9078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9074u;
            // 0x1a9078: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A907Cu; }
        if (ctx->pc != 0x1A907Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A907Cu; }
        if (ctx->pc != 0x1A907Cu) { return; }
    }
    ctx->pc = 0x1A907Cu;
label_1a907c:
    // 0x1a907c: 0xc050bb4  jal         func_142ED0
label_1a9080:
    if (ctx->pc == 0x1A9080u) {
        ctx->pc = 0x1A9084u;
        goto label_1a9084;
    }
    ctx->pc = 0x1A907Cu;
    SET_GPR_U32(ctx, 31, 0x1A9084u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9084u; }
        if (ctx->pc != 0x1A9084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9084u; }
        if (ctx->pc != 0x1A9084u) { return; }
    }
    ctx->pc = 0x1A9084u;
label_1a9084:
    // 0x1a9084: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9088:
    // 0x1a9088: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a908c:
    // 0x1a908c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a908cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9090:
    // 0x1a9090: 0x0  nop
    ctx->pc = 0x1a9090u;
    // NOP
label_1a9094:
    // 0x1a9094: 0x0  nop
    ctx->pc = 0x1a9094u;
    // NOP
label_1a9098:
    // 0x1a9098: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9098u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a909c:
    // 0x1a909c: 0xc050bb4  jal         func_142ED0
label_1a90a0:
    if (ctx->pc == 0x1A90A0u) {
        ctx->pc = 0x1A90A0u;
            // 0x1a90a0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A90A4u;
        goto label_1a90a4;
    }
    ctx->pc = 0x1A909Cu;
    SET_GPR_U32(ctx, 31, 0x1A90A4u);
    ctx->pc = 0x1A90A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A909Cu;
            // 0x1a90a0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90A4u; }
        if (ctx->pc != 0x1A90A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90A4u; }
        if (ctx->pc != 0x1A90A4u) { return; }
    }
    ctx->pc = 0x1A90A4u;
label_1a90a4:
    // 0x1a90a4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a90a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a90a8:
    // 0x1a90a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a90a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a90ac:
    // 0x1a90ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a90acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a90b0:
    // 0x1a90b0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a90b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a90b4:
    // 0x1a90b4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a90b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a90b8:
    // 0x1a90b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a90b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a90bc:
    // 0x1a90bc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a90bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a90c0:
    // 0x1a90c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a90c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a90c4:
    // 0x1a90c4: 0xc053740  jal         func_14DD00
label_1a90c8:
    if (ctx->pc == 0x1A90C8u) {
        ctx->pc = 0x1A90C8u;
            // 0x1a90c8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A90CCu;
        goto label_1a90cc;
    }
    ctx->pc = 0x1A90C4u;
    SET_GPR_U32(ctx, 31, 0x1A90CCu);
    ctx->pc = 0x1A90C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90C4u;
            // 0x1a90c8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90CCu; }
        if (ctx->pc != 0x1A90CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90CCu; }
        if (ctx->pc != 0x1A90CCu) { return; }
    }
    ctx->pc = 0x1A90CCu;
label_1a90cc:
    // 0x1a90cc: 0xc050bb4  jal         func_142ED0
label_1a90d0:
    if (ctx->pc == 0x1A90D0u) {
        ctx->pc = 0x1A90D4u;
        goto label_1a90d4;
    }
    ctx->pc = 0x1A90CCu;
    SET_GPR_U32(ctx, 31, 0x1A90D4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D4u; }
        if (ctx->pc != 0x1A90D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90D4u; }
        if (ctx->pc != 0x1A90D4u) { return; }
    }
    ctx->pc = 0x1A90D4u;
label_1a90d4:
    // 0x1a90d4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a90d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a90d8:
    // 0x1a90d8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a90dc:
    // 0x1a90dc: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a90dcu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a90e0:
    // 0x1a90e0: 0x0  nop
    ctx->pc = 0x1a90e0u;
    // NOP
label_1a90e4:
    // 0x1a90e4: 0x0  nop
    ctx->pc = 0x1a90e4u;
    // NOP
label_1a90e8:
    // 0x1a90e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a90e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a90ec:
    // 0x1a90ec: 0xc050bb4  jal         func_142ED0
label_1a90f0:
    if (ctx->pc == 0x1A90F0u) {
        ctx->pc = 0x1A90F0u;
            // 0x1a90f0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A90F4u;
        goto label_1a90f4;
    }
    ctx->pc = 0x1A90ECu;
    SET_GPR_U32(ctx, 31, 0x1A90F4u);
    ctx->pc = 0x1A90F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A90ECu;
            // 0x1a90f0: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90F4u; }
        if (ctx->pc != 0x1A90F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A90F4u; }
        if (ctx->pc != 0x1A90F4u) { return; }
    }
    ctx->pc = 0x1A90F4u;
label_1a90f4:
    // 0x1a90f4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a90f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a90f8:
    // 0x1a90f8: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a90f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a90fc:
    // 0x1a90fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a90fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9100:
    // 0x1a9100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9104:
    // 0x1a9104: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1a9104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1a9108:
    // 0x1a9108: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x1a9108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
label_1a910c:
    // 0x1a910c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a910cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a9110:
    // 0x1a9110: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a9110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9114:
    // 0x1a9114: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9114u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9118:
    // 0x1a9118: 0xc053740  jal         func_14DD00
label_1a911c:
    if (ctx->pc == 0x1A911Cu) {
        ctx->pc = 0x1A911Cu;
            // 0x1a911c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9120u;
        goto label_1a9120;
    }
    ctx->pc = 0x1A9118u;
    SET_GPR_U32(ctx, 31, 0x1A9120u);
    ctx->pc = 0x1A911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9118u;
            // 0x1a911c: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9120u; }
        if (ctx->pc != 0x1A9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9120u; }
        if (ctx->pc != 0x1A9120u) { return; }
    }
    ctx->pc = 0x1A9120u;
label_1a9120:
    // 0x1a9120: 0xc050bb4  jal         func_142ED0
label_1a9124:
    if (ctx->pc == 0x1A9124u) {
        ctx->pc = 0x1A9128u;
        goto label_1a9128;
    }
    ctx->pc = 0x1A9120u;
    SET_GPR_U32(ctx, 31, 0x1A9128u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9128u; }
        if (ctx->pc != 0x1A9128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9128u; }
        if (ctx->pc != 0x1A9128u) { return; }
    }
    ctx->pc = 0x1A9128u;
label_1a9128:
    // 0x1a9128: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a912c:
    // 0x1a912c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9130:
    // 0x1a9130: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9130u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9134:
    // 0x1a9134: 0x0  nop
    ctx->pc = 0x1a9134u;
    // NOP
label_1a9138:
    // 0x1a9138: 0x0  nop
    ctx->pc = 0x1a9138u;
    // NOP
label_1a913c:
    // 0x1a913c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a913cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9140:
    // 0x1a9140: 0xc050bb4  jal         func_142ED0
label_1a9144:
    if (ctx->pc == 0x1A9144u) {
        ctx->pc = 0x1A9144u;
            // 0x1a9144: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9148u;
        goto label_1a9148;
    }
    ctx->pc = 0x1A9140u;
    SET_GPR_U32(ctx, 31, 0x1A9148u);
    ctx->pc = 0x1A9144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9140u;
            // 0x1a9144: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9148u; }
        if (ctx->pc != 0x1A9148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9148u; }
        if (ctx->pc != 0x1A9148u) { return; }
    }
    ctx->pc = 0x1A9148u;
label_1a9148:
    // 0x1a9148: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a914c:
    // 0x1a914c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9150:
    // 0x1a9150: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9150u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9154:
    // 0x1a9154: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a9154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a9158:
    // 0x1a9158: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a9158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a915c:
    // 0x1a915c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a915cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9160:
    // 0x1a9160: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9160u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9164:
    // 0x1a9164: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a9164u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a9168:
    // 0x1a9168: 0xc053740  jal         func_14DD00
label_1a916c:
    if (ctx->pc == 0x1A916Cu) {
        ctx->pc = 0x1A916Cu;
            // 0x1a916c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9170u;
        goto label_1a9170;
    }
    ctx->pc = 0x1A9168u;
    SET_GPR_U32(ctx, 31, 0x1A9170u);
    ctx->pc = 0x1A916Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9168u;
            // 0x1a916c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9170u; }
        if (ctx->pc != 0x1A9170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9170u; }
        if (ctx->pc != 0x1A9170u) { return; }
    }
    ctx->pc = 0x1A9170u;
label_1a9170:
    // 0x1a9170: 0xc050bb4  jal         func_142ED0
label_1a9174:
    if (ctx->pc == 0x1A9174u) {
        ctx->pc = 0x1A9178u;
        goto label_1a9178;
    }
    ctx->pc = 0x1A9170u;
    SET_GPR_U32(ctx, 31, 0x1A9178u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9178u; }
        if (ctx->pc != 0x1A9178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9178u; }
        if (ctx->pc != 0x1A9178u) { return; }
    }
    ctx->pc = 0x1A9178u;
label_1a9178:
    // 0x1a9178: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a917c:
    // 0x1a917c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9180:
    // 0x1a9180: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9180u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9184:
    // 0x1a9184: 0x0  nop
    ctx->pc = 0x1a9184u;
    // NOP
label_1a9188:
    // 0x1a9188: 0x0  nop
    ctx->pc = 0x1a9188u;
    // NOP
label_1a918c:
    // 0x1a918c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a918cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9190:
    // 0x1a9190: 0xc050bb4  jal         func_142ED0
label_1a9194:
    if (ctx->pc == 0x1A9194u) {
        ctx->pc = 0x1A9194u;
            // 0x1a9194: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9198u;
        goto label_1a9198;
    }
    ctx->pc = 0x1A9190u;
    SET_GPR_U32(ctx, 31, 0x1A9198u);
    ctx->pc = 0x1A9194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9190u;
            // 0x1a9194: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9198u; }
        if (ctx->pc != 0x1A9198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9198u; }
        if (ctx->pc != 0x1A9198u) { return; }
    }
    ctx->pc = 0x1A9198u;
label_1a9198:
    // 0x1a9198: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a919c:
    // 0x1a919c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a91a0:
    // 0x1a91a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a91a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a91a4:
    // 0x1a91a4: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1a91a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1a91a8:
    // 0x1a91a8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a91a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a91ac:
    // 0x1a91ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a91acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a91b0:
    // 0x1a91b0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a91b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a91b4:
    // 0x1a91b4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a91b4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a91b8:
    // 0x1a91b8: 0xc053740  jal         func_14DD00
label_1a91bc:
    if (ctx->pc == 0x1A91BCu) {
        ctx->pc = 0x1A91BCu;
            // 0x1a91bc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A91C0u;
        goto label_1a91c0;
    }
    ctx->pc = 0x1A91B8u;
    SET_GPR_U32(ctx, 31, 0x1A91C0u);
    ctx->pc = 0x1A91BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91B8u;
            // 0x1a91bc: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91C0u; }
        if (ctx->pc != 0x1A91C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91C0u; }
        if (ctx->pc != 0x1A91C0u) { return; }
    }
    ctx->pc = 0x1A91C0u;
label_1a91c0:
    // 0x1a91c0: 0xc050bb4  jal         func_142ED0
label_1a91c4:
    if (ctx->pc == 0x1A91C4u) {
        ctx->pc = 0x1A91C8u;
        goto label_1a91c8;
    }
    ctx->pc = 0x1A91C0u;
    SET_GPR_U32(ctx, 31, 0x1A91C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91C8u; }
        if (ctx->pc != 0x1A91C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91C8u; }
        if (ctx->pc != 0x1A91C8u) { return; }
    }
    ctx->pc = 0x1A91C8u;
label_1a91c8:
    // 0x1a91c8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a91c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a91cc:
    // 0x1a91cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a91d0:
    // 0x1a91d0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a91d0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a91d4:
    // 0x1a91d4: 0x0  nop
    ctx->pc = 0x1a91d4u;
    // NOP
label_1a91d8:
    // 0x1a91d8: 0x0  nop
    ctx->pc = 0x1a91d8u;
    // NOP
label_1a91dc:
    // 0x1a91dc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a91dcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a91e0:
    // 0x1a91e0: 0xc050bb4  jal         func_142ED0
label_1a91e4:
    if (ctx->pc == 0x1A91E4u) {
        ctx->pc = 0x1A91E4u;
            // 0x1a91e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A91E8u;
        goto label_1a91e8;
    }
    ctx->pc = 0x1A91E0u;
    SET_GPR_U32(ctx, 31, 0x1A91E8u);
    ctx->pc = 0x1A91E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A91E0u;
            // 0x1a91e4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E8u; }
        if (ctx->pc != 0x1A91E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A91E8u; }
        if (ctx->pc != 0x1A91E8u) { return; }
    }
    ctx->pc = 0x1A91E8u;
label_1a91e8:
    // 0x1a91e8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a91e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a91ec:
    // 0x1a91ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a91ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a91f0:
    // 0x1a91f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a91f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a91f4:
    // 0x1a91f4: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a91f8:
    // 0x1a91f8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a91fc:
    // 0x1a91fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a91fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9200:
    // 0x1a9200: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9200u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9204:
    // 0x1a9204: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a9204u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a9208:
    // 0x1a9208: 0xc053740  jal         func_14DD00
label_1a920c:
    if (ctx->pc == 0x1A920Cu) {
        ctx->pc = 0x1A920Cu;
            // 0x1a920c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9210u;
        goto label_1a9210;
    }
    ctx->pc = 0x1A9208u;
    SET_GPR_U32(ctx, 31, 0x1A9210u);
    ctx->pc = 0x1A920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9208u;
            // 0x1a920c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9210u; }
        if (ctx->pc != 0x1A9210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9210u; }
        if (ctx->pc != 0x1A9210u) { return; }
    }
    ctx->pc = 0x1A9210u;
label_1a9210:
    // 0x1a9210: 0xc050bb4  jal         func_142ED0
label_1a9214:
    if (ctx->pc == 0x1A9214u) {
        ctx->pc = 0x1A9218u;
        goto label_1a9218;
    }
    ctx->pc = 0x1A9210u;
    SET_GPR_U32(ctx, 31, 0x1A9218u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9218u; }
        if (ctx->pc != 0x1A9218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9218u; }
        if (ctx->pc != 0x1A9218u) { return; }
    }
    ctx->pc = 0x1A9218u;
label_1a9218:
    // 0x1a9218: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a921c:
    // 0x1a921c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9220:
    // 0x1a9220: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9220u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9224:
    // 0x1a9224: 0x0  nop
    ctx->pc = 0x1a9224u;
    // NOP
label_1a9228:
    // 0x1a9228: 0x0  nop
    ctx->pc = 0x1a9228u;
    // NOP
label_1a922c:
    // 0x1a922c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a922cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9230:
    // 0x1a9230: 0xc050bb4  jal         func_142ED0
label_1a9234:
    if (ctx->pc == 0x1A9234u) {
        ctx->pc = 0x1A9234u;
            // 0x1a9234: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9238u;
        goto label_1a9238;
    }
    ctx->pc = 0x1A9230u;
    SET_GPR_U32(ctx, 31, 0x1A9238u);
    ctx->pc = 0x1A9234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9230u;
            // 0x1a9234: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9238u; }
        if (ctx->pc != 0x1A9238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9238u; }
        if (ctx->pc != 0x1A9238u) { return; }
    }
    ctx->pc = 0x1A9238u;
label_1a9238:
    // 0x1a9238: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a923c:
    // 0x1a923c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a923cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9240:
    // 0x1a9240: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9240u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9244:
    // 0x1a9244: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a9244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a9248:
    // 0x1a9248: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a9248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a924c:
    // 0x1a924c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a924cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9250:
    // 0x1a9250: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9250u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9254:
    // 0x1a9254: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a9254u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a9258:
    // 0x1a9258: 0xc053740  jal         func_14DD00
label_1a925c:
    if (ctx->pc == 0x1A925Cu) {
        ctx->pc = 0x1A925Cu;
            // 0x1a925c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9260u;
        goto label_1a9260;
    }
    ctx->pc = 0x1A9258u;
    SET_GPR_U32(ctx, 31, 0x1A9260u);
    ctx->pc = 0x1A925Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9258u;
            // 0x1a925c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9260u; }
        if (ctx->pc != 0x1A9260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9260u; }
        if (ctx->pc != 0x1A9260u) { return; }
    }
    ctx->pc = 0x1A9260u;
label_1a9260:
    // 0x1a9260: 0xc050bb4  jal         func_142ED0
label_1a9264:
    if (ctx->pc == 0x1A9264u) {
        ctx->pc = 0x1A9268u;
        goto label_1a9268;
    }
    ctx->pc = 0x1A9260u;
    SET_GPR_U32(ctx, 31, 0x1A9268u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9268u; }
        if (ctx->pc != 0x1A9268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9268u; }
        if (ctx->pc != 0x1A9268u) { return; }
    }
    ctx->pc = 0x1A9268u;
label_1a9268:
    // 0x1a9268: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a926c:
    // 0x1a926c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a926cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9270:
    // 0x1a9270: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9270u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9274:
    // 0x1a9274: 0x0  nop
    ctx->pc = 0x1a9274u;
    // NOP
label_1a9278:
    // 0x1a9278: 0x0  nop
    ctx->pc = 0x1a9278u;
    // NOP
label_1a927c:
    // 0x1a927c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a927cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9280:
    // 0x1a9280: 0xc050bb4  jal         func_142ED0
label_1a9284:
    if (ctx->pc == 0x1A9284u) {
        ctx->pc = 0x1A9284u;
            // 0x1a9284: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9288u;
        goto label_1a9288;
    }
    ctx->pc = 0x1A9280u;
    SET_GPR_U32(ctx, 31, 0x1A9288u);
    ctx->pc = 0x1A9284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9280u;
            // 0x1a9284: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9288u; }
        if (ctx->pc != 0x1A9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9288u; }
        if (ctx->pc != 0x1A9288u) { return; }
    }
    ctx->pc = 0x1A9288u;
label_1a9288:
    // 0x1a9288: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a928c:
    // 0x1a928c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9290:
    // 0x1a9290: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9290u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9294:
    // 0x1a9294: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a9294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a9298:
    // 0x1a9298: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a9298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a929c:
    // 0x1a929c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a929cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a92a0:
    // 0x1a92a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1a92a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a92a4:
    // 0x1a92a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a92a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a92a8:
    // 0x1a92a8: 0xc053740  jal         func_14DD00
label_1a92ac:
    if (ctx->pc == 0x1A92ACu) {
        ctx->pc = 0x1A92ACu;
            // 0x1a92ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A92B0u;
        goto label_1a92b0;
    }
    ctx->pc = 0x1A92A8u;
    SET_GPR_U32(ctx, 31, 0x1A92B0u);
    ctx->pc = 0x1A92ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92A8u;
            // 0x1a92ac: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B0u; }
        if (ctx->pc != 0x1A92B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B0u; }
        if (ctx->pc != 0x1A92B0u) { return; }
    }
    ctx->pc = 0x1A92B0u;
label_1a92b0:
    // 0x1a92b0: 0xc050bb4  jal         func_142ED0
label_1a92b4:
    if (ctx->pc == 0x1A92B4u) {
        ctx->pc = 0x1A92B8u;
        goto label_1a92b8;
    }
    ctx->pc = 0x1A92B0u;
    SET_GPR_U32(ctx, 31, 0x1A92B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B8u; }
        if (ctx->pc != 0x1A92B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92B8u; }
        if (ctx->pc != 0x1A92B8u) { return; }
    }
    ctx->pc = 0x1A92B8u;
label_1a92b8:
    // 0x1a92b8: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a92b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a92bc:
    // 0x1a92bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a92c0:
    // 0x1a92c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a92c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a92c4:
    // 0x1a92c4: 0x0  nop
    ctx->pc = 0x1a92c4u;
    // NOP
label_1a92c8:
    // 0x1a92c8: 0x0  nop
    ctx->pc = 0x1a92c8u;
    // NOP
label_1a92cc:
    // 0x1a92cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1a92ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a92d0:
    // 0x1a92d0: 0xc050bb4  jal         func_142ED0
label_1a92d4:
    if (ctx->pc == 0x1A92D4u) {
        ctx->pc = 0x1A92D4u;
            // 0x1a92d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A92D8u;
        goto label_1a92d8;
    }
    ctx->pc = 0x1A92D0u;
    SET_GPR_U32(ctx, 31, 0x1A92D8u);
    ctx->pc = 0x1A92D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92D0u;
            // 0x1a92d4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92D8u; }
        if (ctx->pc != 0x1A92D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92D8u; }
        if (ctx->pc != 0x1A92D8u) { return; }
    }
    ctx->pc = 0x1A92D8u;
label_1a92d8:
    // 0x1a92d8: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a92dc:
    // 0x1a92dc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a92dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a92e0:
    // 0x1a92e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a92e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a92e4:
    // 0x1a92e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a92e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a92e8:
    // 0x1a92e8: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a92ec:
    // 0x1a92ec: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x1a92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_1a92f0:
    // 0x1a92f0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a92f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a92f4:
    // 0x1a92f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a92f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a92f8:
    // 0x1a92f8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a92f8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a92fc:
    // 0x1a92fc: 0xc053740  jal         func_14DD00
label_1a9300:
    if (ctx->pc == 0x1A9300u) {
        ctx->pc = 0x1A9300u;
            // 0x1a9300: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9304u;
        goto label_1a9304;
    }
    ctx->pc = 0x1A92FCu;
    SET_GPR_U32(ctx, 31, 0x1A9304u);
    ctx->pc = 0x1A9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92FCu;
            // 0x1a9300: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9304u; }
        if (ctx->pc != 0x1A9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9304u; }
        if (ctx->pc != 0x1A9304u) { return; }
    }
    ctx->pc = 0x1A9304u;
label_1a9304:
    // 0x1a9304: 0xc050bb4  jal         func_142ED0
label_1a9308:
    if (ctx->pc == 0x1A9308u) {
        ctx->pc = 0x1A930Cu;
        goto label_1a930c;
    }
    ctx->pc = 0x1A9304u;
    SET_GPR_U32(ctx, 31, 0x1A930Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A930Cu; }
        if (ctx->pc != 0x1A930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A930Cu; }
        if (ctx->pc != 0x1A930Cu) { return; }
    }
    ctx->pc = 0x1A930Cu;
label_1a930c:
    // 0x1a930c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9310:
    // 0x1a9310: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9314:
    // 0x1a9314: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9314u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9318:
    // 0x1a9318: 0x0  nop
    ctx->pc = 0x1a9318u;
    // NOP
label_1a931c:
    // 0x1a931c: 0x0  nop
    ctx->pc = 0x1a931cu;
    // NOP
label_1a9320:
    // 0x1a9320: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9320u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9324:
    // 0x1a9324: 0xc050bb4  jal         func_142ED0
label_1a9328:
    if (ctx->pc == 0x1A9328u) {
        ctx->pc = 0x1A9328u;
            // 0x1a9328: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A932Cu;
        goto label_1a932c;
    }
    ctx->pc = 0x1A9324u;
    SET_GPR_U32(ctx, 31, 0x1A932Cu);
    ctx->pc = 0x1A9328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9324u;
            // 0x1a9328: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A932Cu; }
        if (ctx->pc != 0x1A932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A932Cu; }
        if (ctx->pc != 0x1A932Cu) { return; }
    }
    ctx->pc = 0x1A932Cu;
label_1a932c:
    // 0x1a932c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a932cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a9330:
    // 0x1a9330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9334:
    // 0x1a9334: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9334u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9338:
    // 0x1a9338: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a9338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a933c:
    // 0x1a933c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a933cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9340:
    // 0x1a9340: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9344:
    // 0x1a9344: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9344u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9348:
    // 0x1a9348: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a9348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a934c:
    // 0x1a934c: 0xc053740  jal         func_14DD00
label_1a9350:
    if (ctx->pc == 0x1A9350u) {
        ctx->pc = 0x1A9350u;
            // 0x1a9350: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9354u;
        goto label_1a9354;
    }
    ctx->pc = 0x1A934Cu;
    SET_GPR_U32(ctx, 31, 0x1A9354u);
    ctx->pc = 0x1A9350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A934Cu;
            // 0x1a9350: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9354u; }
        if (ctx->pc != 0x1A9354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9354u; }
        if (ctx->pc != 0x1A9354u) { return; }
    }
    ctx->pc = 0x1A9354u;
label_1a9354:
    // 0x1a9354: 0xc050bb4  jal         func_142ED0
label_1a9358:
    if (ctx->pc == 0x1A9358u) {
        ctx->pc = 0x1A935Cu;
        goto label_1a935c;
    }
    ctx->pc = 0x1A9354u;
    SET_GPR_U32(ctx, 31, 0x1A935Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A935Cu; }
        if (ctx->pc != 0x1A935Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A935Cu; }
        if (ctx->pc != 0x1A935Cu) { return; }
    }
    ctx->pc = 0x1A935Cu;
label_1a935c:
    // 0x1a935c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9360:
    // 0x1a9360: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9364:
    // 0x1a9364: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9364u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9368:
    // 0x1a9368: 0x0  nop
    ctx->pc = 0x1a9368u;
    // NOP
label_1a936c:
    // 0x1a936c: 0x0  nop
    ctx->pc = 0x1a936cu;
    // NOP
label_1a9370:
    // 0x1a9370: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9370u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9374:
    // 0x1a9374: 0xc050bb4  jal         func_142ED0
label_1a9378:
    if (ctx->pc == 0x1A9378u) {
        ctx->pc = 0x1A9378u;
            // 0x1a9378: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A937Cu;
        goto label_1a937c;
    }
    ctx->pc = 0x1A9374u;
    SET_GPR_U32(ctx, 31, 0x1A937Cu);
    ctx->pc = 0x1A9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9374u;
            // 0x1a9378: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A937Cu; }
        if (ctx->pc != 0x1A937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A937Cu; }
        if (ctx->pc != 0x1A937Cu) { return; }
    }
    ctx->pc = 0x1A937Cu;
label_1a937c:
    // 0x1a937c: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a9380:
    // 0x1a9380: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9384:
    // 0x1a9384: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9384u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a9388:
    // 0x1a9388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a938c:
    // 0x1a938c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1a938cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1a9390:
    // 0x1a9390: 0x3c03c020  lui         $v1, 0xC020
    ctx->pc = 0x1a9390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49184 << 16));
label_1a9394:
    // 0x1a9394: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1a9394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a9398:
    // 0x1a9398: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1a9398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a939c:
    // 0x1a939c: 0x1010  mfhi        $v0
    ctx->pc = 0x1a939cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a93a0:
    // 0x1a93a0: 0xc053740  jal         func_14DD00
label_1a93a4:
    if (ctx->pc == 0x1A93A4u) {
        ctx->pc = 0x1A93A4u;
            // 0x1a93a4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A93A8u;
        goto label_1a93a8;
    }
    ctx->pc = 0x1A93A0u;
    SET_GPR_U32(ctx, 31, 0x1A93A8u);
    ctx->pc = 0x1A93A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93A0u;
            // 0x1a93a4: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A8u; }
        if (ctx->pc != 0x1A93A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93A8u; }
        if (ctx->pc != 0x1A93A8u) { return; }
    }
    ctx->pc = 0x1A93A8u;
label_1a93a8:
    // 0x1a93a8: 0xc050bb4  jal         func_142ED0
label_1a93ac:
    if (ctx->pc == 0x1A93ACu) {
        ctx->pc = 0x1A93B0u;
        goto label_1a93b0;
    }
    ctx->pc = 0x1A93A8u;
    SET_GPR_U32(ctx, 31, 0x1A93B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93B0u; }
        if (ctx->pc != 0x1A93B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93B0u; }
        if (ctx->pc != 0x1A93B0u) { return; }
    }
    ctx->pc = 0x1A93B0u;
label_1a93b0:
    // 0x1a93b0: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a93b4:
    // 0x1a93b4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a93b8:
    // 0x1a93b8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a93b8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a93bc:
    // 0x1a93bc: 0x0  nop
    ctx->pc = 0x1a93bcu;
    // NOP
label_1a93c0:
    // 0x1a93c0: 0x0  nop
    ctx->pc = 0x1a93c0u;
    // NOP
label_1a93c4:
    // 0x1a93c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1a93c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a93c8:
    // 0x1a93c8: 0xc050bb4  jal         func_142ED0
label_1a93cc:
    if (ctx->pc == 0x1A93CCu) {
        ctx->pc = 0x1A93CCu;
            // 0x1a93cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A93D0u;
        goto label_1a93d0;
    }
    ctx->pc = 0x1A93C8u;
    SET_GPR_U32(ctx, 31, 0x1A93D0u);
    ctx->pc = 0x1A93CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93C8u;
            // 0x1a93cc: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D0u; }
        if (ctx->pc != 0x1A93D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93D0u; }
        if (ctx->pc != 0x1A93D0u) { return; }
    }
    ctx->pc = 0x1A93D0u;
label_1a93d0:
    // 0x1a93d0: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a93d4:
    // 0x1a93d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a93d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a93d8:
    // 0x1a93d8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a93d8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a93dc:
    // 0x1a93dc: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a93e0:
    // 0x1a93e0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a93e4:
    // 0x1a93e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a93e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a93e8:
    // 0x1a93e8: 0x1010  mfhi        $v0
    ctx->pc = 0x1a93e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a93ec:
    // 0x1a93ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a93ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a93f0:
    // 0x1a93f0: 0xc053740  jal         func_14DD00
label_1a93f4:
    if (ctx->pc == 0x1A93F4u) {
        ctx->pc = 0x1A93F4u;
            // 0x1a93f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A93F8u;
        goto label_1a93f8;
    }
    ctx->pc = 0x1A93F0u;
    SET_GPR_U32(ctx, 31, 0x1A93F8u);
    ctx->pc = 0x1A93F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93F0u;
            // 0x1a93f4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93F8u; }
        if (ctx->pc != 0x1A93F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93F8u; }
        if (ctx->pc != 0x1A93F8u) { return; }
    }
    ctx->pc = 0x1A93F8u;
label_1a93f8:
    // 0x1a93f8: 0xc050bb4  jal         func_142ED0
label_1a93fc:
    if (ctx->pc == 0x1A93FCu) {
        ctx->pc = 0x1A9400u;
        goto label_1a9400;
    }
    ctx->pc = 0x1A93F8u;
    SET_GPR_U32(ctx, 31, 0x1A9400u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9400u; }
        if (ctx->pc != 0x1A9400u) { return; }
    }
    ctx->pc = 0x1A9400u;
label_1a9400:
    // 0x1a9400: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1a9400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9404:
    // 0x1a9404: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a9408:
    // 0x1a9408: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1a9408u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a940c:
    // 0x1a940c: 0x0  nop
    ctx->pc = 0x1a940cu;
    // NOP
label_1a9410:
    // 0x1a9410: 0x0  nop
    ctx->pc = 0x1a9410u;
    // NOP
label_1a9414:
    // 0x1a9414: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9414u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a9418:
    // 0x1a9418: 0xc050bb4  jal         func_142ED0
label_1a941c:
    if (ctx->pc == 0x1A941Cu) {
        ctx->pc = 0x1A941Cu;
            // 0x1a941c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9420u;
        goto label_1a9420;
    }
    ctx->pc = 0x1A9418u;
    SET_GPR_U32(ctx, 31, 0x1A9420u);
    ctx->pc = 0x1A941Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9418u;
            // 0x1a941c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9420u; }
        if (ctx->pc != 0x1A9420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9420u; }
        if (ctx->pc != 0x1A9420u) { return; }
    }
    ctx->pc = 0x1A9420u;
label_1a9420:
    // 0x1a9420: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x1a9420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_1a9424:
    // 0x1a9424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a9424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9428:
    // 0x1a9428: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1a9428u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a942c:
    // 0x1a942c: 0x3c02c020  lui         $v0, 0xC020
    ctx->pc = 0x1a942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49184 << 16));
label_1a9430:
    // 0x1a9430: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a9430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9434:
    // 0x1a9434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9438:
    // 0x1a9438: 0x1010  mfhi        $v0
    ctx->pc = 0x1a9438u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a943c:
    // 0x1a943c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a943cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1a9440:
    // 0x1a9440: 0xc053740  jal         func_14DD00
label_1a9444:
    if (ctx->pc == 0x1A9444u) {
        ctx->pc = 0x1A9444u;
            // 0x1a9444: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1A9448u;
        goto label_1a9448;
    }
    ctx->pc = 0x1A9440u;
    SET_GPR_U32(ctx, 31, 0x1A9448u);
    ctx->pc = 0x1A9444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9440u;
            // 0x1a9444: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9448u; }
        if (ctx->pc != 0x1A9448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9448u; }
        if (ctx->pc != 0x1A9448u) { return; }
    }
    ctx->pc = 0x1A9448u;
label_1a9448:
    // 0x1a9448: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a9448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a944c:
    // 0x1a944c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1a944cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9450:
    // 0x1a9450: 0xc07b0ac  jal         func_1EC2B0
label_1a9454:
    if (ctx->pc == 0x1A9454u) {
        ctx->pc = 0x1A9454u;
            // 0x1a9454: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A9458u;
        goto label_1a9458;
    }
    ctx->pc = 0x1A9450u;
    SET_GPR_U32(ctx, 31, 0x1A9458u);
    ctx->pc = 0x1A9454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9450u;
            // 0x1a9454: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9458u; }
        if (ctx->pc != 0x1A9458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9458u; }
        if (ctx->pc != 0x1A9458u) { return; }
    }
    ctx->pc = 0x1A9458u;
label_1a9458:
    // 0x1a9458: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a9458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a945c:
    // 0x1a945c: 0x40f809  jalr        $v0
label_1a9460:
    if (ctx->pc == 0x1A9460u) {
        ctx->pc = 0x1A9460u;
            // 0x1a9460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9464u;
        goto label_1a9464;
    }
    ctx->pc = 0x1A945Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9464u);
        ctx->pc = 0x1A9460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A945Cu;
            // 0x1a9460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8330u: goto label_1a8330;
            case 0x1A8334u: goto label_1a8334;
            case 0x1A8338u: goto label_1a8338;
            case 0x1A833Cu: goto label_1a833c;
            case 0x1A8340u: goto label_1a8340;
            case 0x1A8344u: goto label_1a8344;
            case 0x1A8348u: goto label_1a8348;
            case 0x1A834Cu: goto label_1a834c;
            case 0x1A8350u: goto label_1a8350;
            case 0x1A8354u: goto label_1a8354;
            case 0x1A8358u: goto label_1a8358;
            case 0x1A835Cu: goto label_1a835c;
            case 0x1A8360u: goto label_1a8360;
            case 0x1A8364u: goto label_1a8364;
            case 0x1A8368u: goto label_1a8368;
            case 0x1A836Cu: goto label_1a836c;
            case 0x1A8370u: goto label_1a8370;
            case 0x1A8374u: goto label_1a8374;
            case 0x1A8378u: goto label_1a8378;
            case 0x1A837Cu: goto label_1a837c;
            case 0x1A8380u: goto label_1a8380;
            case 0x1A8384u: goto label_1a8384;
            case 0x1A8388u: goto label_1a8388;
            case 0x1A838Cu: goto label_1a838c;
            case 0x1A8390u: goto label_1a8390;
            case 0x1A8394u: goto label_1a8394;
            case 0x1A8398u: goto label_1a8398;
            case 0x1A839Cu: goto label_1a839c;
            case 0x1A83A0u: goto label_1a83a0;
            case 0x1A83A4u: goto label_1a83a4;
            case 0x1A83A8u: goto label_1a83a8;
            case 0x1A83ACu: goto label_1a83ac;
            case 0x1A83B0u: goto label_1a83b0;
            case 0x1A83B4u: goto label_1a83b4;
            case 0x1A83B8u: goto label_1a83b8;
            case 0x1A83BCu: goto label_1a83bc;
            case 0x1A83C0u: goto label_1a83c0;
            case 0x1A83C4u: goto label_1a83c4;
            case 0x1A83C8u: goto label_1a83c8;
            case 0x1A83CCu: goto label_1a83cc;
            case 0x1A83D0u: goto label_1a83d0;
            case 0x1A83D4u: goto label_1a83d4;
            case 0x1A83D8u: goto label_1a83d8;
            case 0x1A83DCu: goto label_1a83dc;
            case 0x1A83E0u: goto label_1a83e0;
            case 0x1A83E4u: goto label_1a83e4;
            case 0x1A83E8u: goto label_1a83e8;
            case 0x1A83ECu: goto label_1a83ec;
            case 0x1A83F0u: goto label_1a83f0;
            case 0x1A83F4u: goto label_1a83f4;
            case 0x1A83F8u: goto label_1a83f8;
            case 0x1A83FCu: goto label_1a83fc;
            case 0x1A8400u: goto label_1a8400;
            case 0x1A8404u: goto label_1a8404;
            case 0x1A8408u: goto label_1a8408;
            case 0x1A840Cu: goto label_1a840c;
            case 0x1A8410u: goto label_1a8410;
            case 0x1A8414u: goto label_1a8414;
            case 0x1A8418u: goto label_1a8418;
            case 0x1A841Cu: goto label_1a841c;
            case 0x1A8420u: goto label_1a8420;
            case 0x1A8424u: goto label_1a8424;
            case 0x1A8428u: goto label_1a8428;
            case 0x1A842Cu: goto label_1a842c;
            case 0x1A8430u: goto label_1a8430;
            case 0x1A8434u: goto label_1a8434;
            case 0x1A8438u: goto label_1a8438;
            case 0x1A843Cu: goto label_1a843c;
            case 0x1A8440u: goto label_1a8440;
            case 0x1A8444u: goto label_1a8444;
            case 0x1A8448u: goto label_1a8448;
            case 0x1A844Cu: goto label_1a844c;
            case 0x1A8450u: goto label_1a8450;
            case 0x1A8454u: goto label_1a8454;
            case 0x1A8458u: goto label_1a8458;
            case 0x1A845Cu: goto label_1a845c;
            case 0x1A8460u: goto label_1a8460;
            case 0x1A8464u: goto label_1a8464;
            case 0x1A8468u: goto label_1a8468;
            case 0x1A846Cu: goto label_1a846c;
            case 0x1A8470u: goto label_1a8470;
            case 0x1A8474u: goto label_1a8474;
            case 0x1A8478u: goto label_1a8478;
            case 0x1A847Cu: goto label_1a847c;
            case 0x1A8480u: goto label_1a8480;
            case 0x1A8484u: goto label_1a8484;
            case 0x1A8488u: goto label_1a8488;
            case 0x1A848Cu: goto label_1a848c;
            case 0x1A8490u: goto label_1a8490;
            case 0x1A8494u: goto label_1a8494;
            case 0x1A8498u: goto label_1a8498;
            case 0x1A849Cu: goto label_1a849c;
            case 0x1A84A0u: goto label_1a84a0;
            case 0x1A84A4u: goto label_1a84a4;
            case 0x1A84A8u: goto label_1a84a8;
            case 0x1A84ACu: goto label_1a84ac;
            case 0x1A84B0u: goto label_1a84b0;
            case 0x1A84B4u: goto label_1a84b4;
            case 0x1A84B8u: goto label_1a84b8;
            case 0x1A84BCu: goto label_1a84bc;
            case 0x1A84C0u: goto label_1a84c0;
            case 0x1A84C4u: goto label_1a84c4;
            case 0x1A84C8u: goto label_1a84c8;
            case 0x1A84CCu: goto label_1a84cc;
            case 0x1A84D0u: goto label_1a84d0;
            case 0x1A84D4u: goto label_1a84d4;
            case 0x1A84D8u: goto label_1a84d8;
            case 0x1A84DCu: goto label_1a84dc;
            case 0x1A84E0u: goto label_1a84e0;
            case 0x1A84E4u: goto label_1a84e4;
            case 0x1A84E8u: goto label_1a84e8;
            case 0x1A84ECu: goto label_1a84ec;
            case 0x1A84F0u: goto label_1a84f0;
            case 0x1A84F4u: goto label_1a84f4;
            case 0x1A84F8u: goto label_1a84f8;
            case 0x1A84FCu: goto label_1a84fc;
            case 0x1A8500u: goto label_1a8500;
            case 0x1A8504u: goto label_1a8504;
            case 0x1A8508u: goto label_1a8508;
            case 0x1A850Cu: goto label_1a850c;
            case 0x1A8510u: goto label_1a8510;
            case 0x1A8514u: goto label_1a8514;
            case 0x1A8518u: goto label_1a8518;
            case 0x1A851Cu: goto label_1a851c;
            case 0x1A8520u: goto label_1a8520;
            case 0x1A8524u: goto label_1a8524;
            case 0x1A8528u: goto label_1a8528;
            case 0x1A852Cu: goto label_1a852c;
            case 0x1A8530u: goto label_1a8530;
            case 0x1A8534u: goto label_1a8534;
            case 0x1A8538u: goto label_1a8538;
            case 0x1A853Cu: goto label_1a853c;
            case 0x1A8540u: goto label_1a8540;
            case 0x1A8544u: goto label_1a8544;
            case 0x1A8548u: goto label_1a8548;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A855Cu: goto label_1a855c;
            case 0x1A8560u: goto label_1a8560;
            case 0x1A8564u: goto label_1a8564;
            case 0x1A8568u: goto label_1a8568;
            case 0x1A856Cu: goto label_1a856c;
            case 0x1A8570u: goto label_1a8570;
            case 0x1A8574u: goto label_1a8574;
            case 0x1A8578u: goto label_1a8578;
            case 0x1A857Cu: goto label_1a857c;
            case 0x1A8580u: goto label_1a8580;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8588u: goto label_1a8588;
            case 0x1A858Cu: goto label_1a858c;
            case 0x1A8590u: goto label_1a8590;
            case 0x1A8594u: goto label_1a8594;
            case 0x1A8598u: goto label_1a8598;
            case 0x1A859Cu: goto label_1a859c;
            case 0x1A85A0u: goto label_1a85a0;
            case 0x1A85A4u: goto label_1a85a4;
            case 0x1A85A8u: goto label_1a85a8;
            case 0x1A85ACu: goto label_1a85ac;
            case 0x1A85B0u: goto label_1a85b0;
            case 0x1A85B4u: goto label_1a85b4;
            case 0x1A85B8u: goto label_1a85b8;
            case 0x1A85BCu: goto label_1a85bc;
            case 0x1A85C0u: goto label_1a85c0;
            case 0x1A85C4u: goto label_1a85c4;
            case 0x1A85C8u: goto label_1a85c8;
            case 0x1A85CCu: goto label_1a85cc;
            case 0x1A85D0u: goto label_1a85d0;
            case 0x1A85D4u: goto label_1a85d4;
            case 0x1A85D8u: goto label_1a85d8;
            case 0x1A85DCu: goto label_1a85dc;
            case 0x1A85E0u: goto label_1a85e0;
            case 0x1A85E4u: goto label_1a85e4;
            case 0x1A85E8u: goto label_1a85e8;
            case 0x1A85ECu: goto label_1a85ec;
            case 0x1A85F0u: goto label_1a85f0;
            case 0x1A85F4u: goto label_1a85f4;
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A85FCu: goto label_1a85fc;
            case 0x1A8600u: goto label_1a8600;
            case 0x1A8604u: goto label_1a8604;
            case 0x1A8608u: goto label_1a8608;
            case 0x1A860Cu: goto label_1a860c;
            case 0x1A8610u: goto label_1a8610;
            case 0x1A8614u: goto label_1a8614;
            case 0x1A8618u: goto label_1a8618;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8624u: goto label_1a8624;
            case 0x1A8628u: goto label_1a8628;
            case 0x1A862Cu: goto label_1a862c;
            case 0x1A8630u: goto label_1a8630;
            case 0x1A8634u: goto label_1a8634;
            case 0x1A8638u: goto label_1a8638;
            case 0x1A863Cu: goto label_1a863c;
            case 0x1A8640u: goto label_1a8640;
            case 0x1A8644u: goto label_1a8644;
            case 0x1A8648u: goto label_1a8648;
            case 0x1A864Cu: goto label_1a864c;
            case 0x1A8650u: goto label_1a8650;
            case 0x1A8654u: goto label_1a8654;
            case 0x1A8658u: goto label_1a8658;
            case 0x1A865Cu: goto label_1a865c;
            case 0x1A8660u: goto label_1a8660;
            case 0x1A8664u: goto label_1a8664;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            case 0x1A8670u: goto label_1a8670;
            case 0x1A8674u: goto label_1a8674;
            case 0x1A8678u: goto label_1a8678;
            case 0x1A867Cu: goto label_1a867c;
            case 0x1A8680u: goto label_1a8680;
            case 0x1A8684u: goto label_1a8684;
            case 0x1A8688u: goto label_1a8688;
            case 0x1A868Cu: goto label_1a868c;
            case 0x1A8690u: goto label_1a8690;
            case 0x1A8694u: goto label_1a8694;
            case 0x1A8698u: goto label_1a8698;
            case 0x1A869Cu: goto label_1a869c;
            case 0x1A86A0u: goto label_1a86a0;
            case 0x1A86A4u: goto label_1a86a4;
            case 0x1A86A8u: goto label_1a86a8;
            case 0x1A86ACu: goto label_1a86ac;
            case 0x1A86B0u: goto label_1a86b0;
            case 0x1A86B4u: goto label_1a86b4;
            case 0x1A86B8u: goto label_1a86b8;
            case 0x1A86BCu: goto label_1a86bc;
            case 0x1A86C0u: goto label_1a86c0;
            case 0x1A86C4u: goto label_1a86c4;
            case 0x1A86C8u: goto label_1a86c8;
            case 0x1A86CCu: goto label_1a86cc;
            case 0x1A86D0u: goto label_1a86d0;
            case 0x1A86D4u: goto label_1a86d4;
            case 0x1A86D8u: goto label_1a86d8;
            case 0x1A86DCu: goto label_1a86dc;
            case 0x1A86E0u: goto label_1a86e0;
            case 0x1A86E4u: goto label_1a86e4;
            case 0x1A86E8u: goto label_1a86e8;
            case 0x1A86ECu: goto label_1a86ec;
            case 0x1A86F0u: goto label_1a86f0;
            case 0x1A86F4u: goto label_1a86f4;
            case 0x1A86F8u: goto label_1a86f8;
            case 0x1A86FCu: goto label_1a86fc;
            case 0x1A8700u: goto label_1a8700;
            case 0x1A8704u: goto label_1a8704;
            case 0x1A8708u: goto label_1a8708;
            case 0x1A870Cu: goto label_1a870c;
            case 0x1A8710u: goto label_1a8710;
            case 0x1A8714u: goto label_1a8714;
            case 0x1A8718u: goto label_1a8718;
            case 0x1A871Cu: goto label_1a871c;
            case 0x1A8720u: goto label_1a8720;
            case 0x1A8724u: goto label_1a8724;
            case 0x1A8728u: goto label_1a8728;
            case 0x1A872Cu: goto label_1a872c;
            case 0x1A8730u: goto label_1a8730;
            case 0x1A8734u: goto label_1a8734;
            case 0x1A8738u: goto label_1a8738;
            case 0x1A873Cu: goto label_1a873c;
            case 0x1A8740u: goto label_1a8740;
            case 0x1A8744u: goto label_1a8744;
            case 0x1A8748u: goto label_1a8748;
            case 0x1A874Cu: goto label_1a874c;
            case 0x1A8750u: goto label_1a8750;
            case 0x1A8754u: goto label_1a8754;
            case 0x1A8758u: goto label_1a8758;
            case 0x1A875Cu: goto label_1a875c;
            case 0x1A8760u: goto label_1a8760;
            case 0x1A8764u: goto label_1a8764;
            case 0x1A8768u: goto label_1a8768;
            case 0x1A876Cu: goto label_1a876c;
            case 0x1A8770u: goto label_1a8770;
            case 0x1A8774u: goto label_1a8774;
            case 0x1A8778u: goto label_1a8778;
            case 0x1A877Cu: goto label_1a877c;
            case 0x1A8780u: goto label_1a8780;
            case 0x1A8784u: goto label_1a8784;
            case 0x1A8788u: goto label_1a8788;
            case 0x1A878Cu: goto label_1a878c;
            case 0x1A8790u: goto label_1a8790;
            case 0x1A8794u: goto label_1a8794;
            case 0x1A8798u: goto label_1a8798;
            case 0x1A879Cu: goto label_1a879c;
            case 0x1A87A0u: goto label_1a87a0;
            case 0x1A87A4u: goto label_1a87a4;
            case 0x1A87A8u: goto label_1a87a8;
            case 0x1A87ACu: goto label_1a87ac;
            case 0x1A87B0u: goto label_1a87b0;
            case 0x1A87B4u: goto label_1a87b4;
            case 0x1A87B8u: goto label_1a87b8;
            case 0x1A87BCu: goto label_1a87bc;
            case 0x1A87C0u: goto label_1a87c0;
            case 0x1A87C4u: goto label_1a87c4;
            case 0x1A87C8u: goto label_1a87c8;
            case 0x1A87CCu: goto label_1a87cc;
            case 0x1A87D0u: goto label_1a87d0;
            case 0x1A87D4u: goto label_1a87d4;
            case 0x1A87D8u: goto label_1a87d8;
            case 0x1A87DCu: goto label_1a87dc;
            case 0x1A87E0u: goto label_1a87e0;
            case 0x1A87E4u: goto label_1a87e4;
            case 0x1A87E8u: goto label_1a87e8;
            case 0x1A87ECu: goto label_1a87ec;
            case 0x1A87F0u: goto label_1a87f0;
            case 0x1A87F4u: goto label_1a87f4;
            case 0x1A87F8u: goto label_1a87f8;
            case 0x1A87FCu: goto label_1a87fc;
            case 0x1A8800u: goto label_1a8800;
            case 0x1A8804u: goto label_1a8804;
            case 0x1A8808u: goto label_1a8808;
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8810u: goto label_1a8810;
            case 0x1A8814u: goto label_1a8814;
            case 0x1A8818u: goto label_1a8818;
            case 0x1A881Cu: goto label_1a881c;
            case 0x1A8820u: goto label_1a8820;
            case 0x1A8824u: goto label_1a8824;
            case 0x1A8828u: goto label_1a8828;
            case 0x1A882Cu: goto label_1a882c;
            case 0x1A8830u: goto label_1a8830;
            case 0x1A8834u: goto label_1a8834;
            case 0x1A8838u: goto label_1a8838;
            case 0x1A883Cu: goto label_1a883c;
            case 0x1A8840u: goto label_1a8840;
            case 0x1A8844u: goto label_1a8844;
            case 0x1A8848u: goto label_1a8848;
            case 0x1A884Cu: goto label_1a884c;
            case 0x1A8850u: goto label_1a8850;
            case 0x1A8854u: goto label_1a8854;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A885Cu: goto label_1a885c;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            case 0x1A8868u: goto label_1a8868;
            case 0x1A886Cu: goto label_1a886c;
            case 0x1A8870u: goto label_1a8870;
            case 0x1A8874u: goto label_1a8874;
            case 0x1A8878u: goto label_1a8878;
            case 0x1A887Cu: goto label_1a887c;
            case 0x1A8880u: goto label_1a8880;
            case 0x1A8884u: goto label_1a8884;
            case 0x1A8888u: goto label_1a8888;
            case 0x1A888Cu: goto label_1a888c;
            case 0x1A8890u: goto label_1a8890;
            case 0x1A8894u: goto label_1a8894;
            case 0x1A8898u: goto label_1a8898;
            case 0x1A889Cu: goto label_1a889c;
            case 0x1A88A0u: goto label_1a88a0;
            case 0x1A88A4u: goto label_1a88a4;
            case 0x1A88A8u: goto label_1a88a8;
            case 0x1A88ACu: goto label_1a88ac;
            case 0x1A88B0u: goto label_1a88b0;
            case 0x1A88B4u: goto label_1a88b4;
            case 0x1A88B8u: goto label_1a88b8;
            case 0x1A88BCu: goto label_1a88bc;
            case 0x1A88C0u: goto label_1a88c0;
            case 0x1A88C4u: goto label_1a88c4;
            case 0x1A88C8u: goto label_1a88c8;
            case 0x1A88CCu: goto label_1a88cc;
            case 0x1A88D0u: goto label_1a88d0;
            case 0x1A88D4u: goto label_1a88d4;
            case 0x1A88D8u: goto label_1a88d8;
            case 0x1A88DCu: goto label_1a88dc;
            case 0x1A88E0u: goto label_1a88e0;
            case 0x1A88E4u: goto label_1a88e4;
            case 0x1A88E8u: goto label_1a88e8;
            case 0x1A88ECu: goto label_1a88ec;
            case 0x1A88F0u: goto label_1a88f0;
            case 0x1A88F4u: goto label_1a88f4;
            case 0x1A88F8u: goto label_1a88f8;
            case 0x1A88FCu: goto label_1a88fc;
            case 0x1A8900u: goto label_1a8900;
            case 0x1A8904u: goto label_1a8904;
            case 0x1A8908u: goto label_1a8908;
            case 0x1A890Cu: goto label_1a890c;
            case 0x1A8910u: goto label_1a8910;
            case 0x1A8914u: goto label_1a8914;
            case 0x1A8918u: goto label_1a8918;
            case 0x1A891Cu: goto label_1a891c;
            case 0x1A8920u: goto label_1a8920;
            case 0x1A8924u: goto label_1a8924;
            case 0x1A8928u: goto label_1a8928;
            case 0x1A892Cu: goto label_1a892c;
            case 0x1A8930u: goto label_1a8930;
            case 0x1A8934u: goto label_1a8934;
            case 0x1A8938u: goto label_1a8938;
            case 0x1A893Cu: goto label_1a893c;
            case 0x1A8940u: goto label_1a8940;
            case 0x1A8944u: goto label_1a8944;
            case 0x1A8948u: goto label_1a8948;
            case 0x1A894Cu: goto label_1a894c;
            case 0x1A8950u: goto label_1a8950;
            case 0x1A8954u: goto label_1a8954;
            case 0x1A8958u: goto label_1a8958;
            case 0x1A895Cu: goto label_1a895c;
            case 0x1A8960u: goto label_1a8960;
            case 0x1A8964u: goto label_1a8964;
            case 0x1A8968u: goto label_1a8968;
            case 0x1A896Cu: goto label_1a896c;
            case 0x1A8970u: goto label_1a8970;
            case 0x1A8974u: goto label_1a8974;
            case 0x1A8978u: goto label_1a8978;
            case 0x1A897Cu: goto label_1a897c;
            case 0x1A8980u: goto label_1a8980;
            case 0x1A8984u: goto label_1a8984;
            case 0x1A8988u: goto label_1a8988;
            case 0x1A898Cu: goto label_1a898c;
            case 0x1A8990u: goto label_1a8990;
            case 0x1A8994u: goto label_1a8994;
            case 0x1A8998u: goto label_1a8998;
            case 0x1A899Cu: goto label_1a899c;
            case 0x1A89A0u: goto label_1a89a0;
            case 0x1A89A4u: goto label_1a89a4;
            case 0x1A89A8u: goto label_1a89a8;
            case 0x1A89ACu: goto label_1a89ac;
            case 0x1A89B0u: goto label_1a89b0;
            case 0x1A89B4u: goto label_1a89b4;
            case 0x1A89B8u: goto label_1a89b8;
            case 0x1A89BCu: goto label_1a89bc;
            case 0x1A89C0u: goto label_1a89c0;
            case 0x1A89C4u: goto label_1a89c4;
            case 0x1A89C8u: goto label_1a89c8;
            case 0x1A89CCu: goto label_1a89cc;
            case 0x1A89D0u: goto label_1a89d0;
            case 0x1A89D4u: goto label_1a89d4;
            case 0x1A89D8u: goto label_1a89d8;
            case 0x1A89DCu: goto label_1a89dc;
            case 0x1A89E0u: goto label_1a89e0;
            case 0x1A89E4u: goto label_1a89e4;
            case 0x1A89E8u: goto label_1a89e8;
            case 0x1A89ECu: goto label_1a89ec;
            case 0x1A89F0u: goto label_1a89f0;
            case 0x1A89F4u: goto label_1a89f4;
            case 0x1A89F8u: goto label_1a89f8;
            case 0x1A89FCu: goto label_1a89fc;
            case 0x1A8A00u: goto label_1a8a00;
            case 0x1A8A04u: goto label_1a8a04;
            case 0x1A8A08u: goto label_1a8a08;
            case 0x1A8A0Cu: goto label_1a8a0c;
            case 0x1A8A10u: goto label_1a8a10;
            case 0x1A8A14u: goto label_1a8a14;
            case 0x1A8A18u: goto label_1a8a18;
            case 0x1A8A1Cu: goto label_1a8a1c;
            case 0x1A8A20u: goto label_1a8a20;
            case 0x1A8A24u: goto label_1a8a24;
            case 0x1A8A28u: goto label_1a8a28;
            case 0x1A8A2Cu: goto label_1a8a2c;
            case 0x1A8A30u: goto label_1a8a30;
            case 0x1A8A34u: goto label_1a8a34;
            case 0x1A8A38u: goto label_1a8a38;
            case 0x1A8A3Cu: goto label_1a8a3c;
            case 0x1A8A40u: goto label_1a8a40;
            case 0x1A8A44u: goto label_1a8a44;
            case 0x1A8A48u: goto label_1a8a48;
            case 0x1A8A4Cu: goto label_1a8a4c;
            case 0x1A8A50u: goto label_1a8a50;
            case 0x1A8A54u: goto label_1a8a54;
            case 0x1A8A58u: goto label_1a8a58;
            case 0x1A8A5Cu: goto label_1a8a5c;
            case 0x1A8A60u: goto label_1a8a60;
            case 0x1A8A64u: goto label_1a8a64;
            case 0x1A8A68u: goto label_1a8a68;
            case 0x1A8A6Cu: goto label_1a8a6c;
            case 0x1A8A70u: goto label_1a8a70;
            case 0x1A8A74u: goto label_1a8a74;
            case 0x1A8A78u: goto label_1a8a78;
            case 0x1A8A7Cu: goto label_1a8a7c;
            case 0x1A8A80u: goto label_1a8a80;
            case 0x1A8A84u: goto label_1a8a84;
            case 0x1A8A88u: goto label_1a8a88;
            case 0x1A8A8Cu: goto label_1a8a8c;
            case 0x1A8A90u: goto label_1a8a90;
            case 0x1A8A94u: goto label_1a8a94;
            case 0x1A8A98u: goto label_1a8a98;
            case 0x1A8A9Cu: goto label_1a8a9c;
            case 0x1A8AA0u: goto label_1a8aa0;
            case 0x1A8AA4u: goto label_1a8aa4;
            case 0x1A8AA8u: goto label_1a8aa8;
            case 0x1A8AACu: goto label_1a8aac;
            case 0x1A8AB0u: goto label_1a8ab0;
            case 0x1A8AB4u: goto label_1a8ab4;
            case 0x1A8AB8u: goto label_1a8ab8;
            case 0x1A8ABCu: goto label_1a8abc;
            case 0x1A8AC0u: goto label_1a8ac0;
            case 0x1A8AC4u: goto label_1a8ac4;
            case 0x1A8AC8u: goto label_1a8ac8;
            case 0x1A8ACCu: goto label_1a8acc;
            case 0x1A8AD0u: goto label_1a8ad0;
            case 0x1A8AD4u: goto label_1a8ad4;
            case 0x1A8AD8u: goto label_1a8ad8;
            case 0x1A8ADCu: goto label_1a8adc;
            case 0x1A8AE0u: goto label_1a8ae0;
            case 0x1A8AE4u: goto label_1a8ae4;
            case 0x1A8AE8u: goto label_1a8ae8;
            case 0x1A8AECu: goto label_1a8aec;
            case 0x1A8AF0u: goto label_1a8af0;
            case 0x1A8AF4u: goto label_1a8af4;
            case 0x1A8AF8u: goto label_1a8af8;
            case 0x1A8AFCu: goto label_1a8afc;
            case 0x1A8B00u: goto label_1a8b00;
            case 0x1A8B04u: goto label_1a8b04;
            case 0x1A8B08u: goto label_1a8b08;
            case 0x1A8B0Cu: goto label_1a8b0c;
            case 0x1A8B10u: goto label_1a8b10;
            case 0x1A8B14u: goto label_1a8b14;
            case 0x1A8B18u: goto label_1a8b18;
            case 0x1A8B1Cu: goto label_1a8b1c;
            case 0x1A8B20u: goto label_1a8b20;
            case 0x1A8B24u: goto label_1a8b24;
            case 0x1A8B28u: goto label_1a8b28;
            case 0x1A8B2Cu: goto label_1a8b2c;
            case 0x1A8B30u: goto label_1a8b30;
            case 0x1A8B34u: goto label_1a8b34;
            case 0x1A8B38u: goto label_1a8b38;
            case 0x1A8B3Cu: goto label_1a8b3c;
            case 0x1A8B40u: goto label_1a8b40;
            case 0x1A8B44u: goto label_1a8b44;
            case 0x1A8B48u: goto label_1a8b48;
            case 0x1A8B4Cu: goto label_1a8b4c;
            case 0x1A8B50u: goto label_1a8b50;
            case 0x1A8B54u: goto label_1a8b54;
            case 0x1A8B58u: goto label_1a8b58;
            case 0x1A8B5Cu: goto label_1a8b5c;
            case 0x1A8B60u: goto label_1a8b60;
            case 0x1A8B64u: goto label_1a8b64;
            case 0x1A8B68u: goto label_1a8b68;
            case 0x1A8B6Cu: goto label_1a8b6c;
            case 0x1A8B70u: goto label_1a8b70;
            case 0x1A8B74u: goto label_1a8b74;
            case 0x1A8B78u: goto label_1a8b78;
            case 0x1A8B7Cu: goto label_1a8b7c;
            case 0x1A8B80u: goto label_1a8b80;
            case 0x1A8B84u: goto label_1a8b84;
            case 0x1A8B88u: goto label_1a8b88;
            case 0x1A8B8Cu: goto label_1a8b8c;
            case 0x1A8B90u: goto label_1a8b90;
            case 0x1A8B94u: goto label_1a8b94;
            case 0x1A8B98u: goto label_1a8b98;
            case 0x1A8B9Cu: goto label_1a8b9c;
            case 0x1A8BA0u: goto label_1a8ba0;
            case 0x1A8BA4u: goto label_1a8ba4;
            case 0x1A8BA8u: goto label_1a8ba8;
            case 0x1A8BACu: goto label_1a8bac;
            case 0x1A8BB0u: goto label_1a8bb0;
            case 0x1A8BB4u: goto label_1a8bb4;
            case 0x1A8BB8u: goto label_1a8bb8;
            case 0x1A8BBCu: goto label_1a8bbc;
            case 0x1A8BC0u: goto label_1a8bc0;
            case 0x1A8BC4u: goto label_1a8bc4;
            case 0x1A8BC8u: goto label_1a8bc8;
            case 0x1A8BCCu: goto label_1a8bcc;
            case 0x1A8BD0u: goto label_1a8bd0;
            case 0x1A8BD4u: goto label_1a8bd4;
            case 0x1A8BD8u: goto label_1a8bd8;
            case 0x1A8BDCu: goto label_1a8bdc;
            case 0x1A8BE0u: goto label_1a8be0;
            case 0x1A8BE4u: goto label_1a8be4;
            case 0x1A8BE8u: goto label_1a8be8;
            case 0x1A8BECu: goto label_1a8bec;
            case 0x1A8BF0u: goto label_1a8bf0;
            case 0x1A8BF4u: goto label_1a8bf4;
            case 0x1A8BF8u: goto label_1a8bf8;
            case 0x1A8BFCu: goto label_1a8bfc;
            case 0x1A8C00u: goto label_1a8c00;
            case 0x1A8C04u: goto label_1a8c04;
            case 0x1A8C08u: goto label_1a8c08;
            case 0x1A8C0Cu: goto label_1a8c0c;
            case 0x1A8C10u: goto label_1a8c10;
            case 0x1A8C14u: goto label_1a8c14;
            case 0x1A8C18u: goto label_1a8c18;
            case 0x1A8C1Cu: goto label_1a8c1c;
            case 0x1A8C20u: goto label_1a8c20;
            case 0x1A8C24u: goto label_1a8c24;
            case 0x1A8C28u: goto label_1a8c28;
            case 0x1A8C2Cu: goto label_1a8c2c;
            case 0x1A8C30u: goto label_1a8c30;
            case 0x1A8C34u: goto label_1a8c34;
            case 0x1A8C38u: goto label_1a8c38;
            case 0x1A8C3Cu: goto label_1a8c3c;
            case 0x1A8C40u: goto label_1a8c40;
            case 0x1A8C44u: goto label_1a8c44;
            case 0x1A8C48u: goto label_1a8c48;
            case 0x1A8C4Cu: goto label_1a8c4c;
            case 0x1A8C50u: goto label_1a8c50;
            case 0x1A8C54u: goto label_1a8c54;
            case 0x1A8C58u: goto label_1a8c58;
            case 0x1A8C5Cu: goto label_1a8c5c;
            case 0x1A8C60u: goto label_1a8c60;
            case 0x1A8C64u: goto label_1a8c64;
            case 0x1A8C68u: goto label_1a8c68;
            case 0x1A8C6Cu: goto label_1a8c6c;
            case 0x1A8C70u: goto label_1a8c70;
            case 0x1A8C74u: goto label_1a8c74;
            case 0x1A8C78u: goto label_1a8c78;
            case 0x1A8C7Cu: goto label_1a8c7c;
            case 0x1A8C80u: goto label_1a8c80;
            case 0x1A8C84u: goto label_1a8c84;
            case 0x1A8C88u: goto label_1a8c88;
            case 0x1A8C8Cu: goto label_1a8c8c;
            case 0x1A8C90u: goto label_1a8c90;
            case 0x1A8C94u: goto label_1a8c94;
            case 0x1A8C98u: goto label_1a8c98;
            case 0x1A8C9Cu: goto label_1a8c9c;
            case 0x1A8CA0u: goto label_1a8ca0;
            case 0x1A8CA4u: goto label_1a8ca4;
            case 0x1A8CA8u: goto label_1a8ca8;
            case 0x1A8CACu: goto label_1a8cac;
            case 0x1A8CB0u: goto label_1a8cb0;
            case 0x1A8CB4u: goto label_1a8cb4;
            case 0x1A8CB8u: goto label_1a8cb8;
            case 0x1A8CBCu: goto label_1a8cbc;
            case 0x1A8CC0u: goto label_1a8cc0;
            case 0x1A8CC4u: goto label_1a8cc4;
            case 0x1A8CC8u: goto label_1a8cc8;
            case 0x1A8CCCu: goto label_1a8ccc;
            case 0x1A8CD0u: goto label_1a8cd0;
            case 0x1A8CD4u: goto label_1a8cd4;
            case 0x1A8CD8u: goto label_1a8cd8;
            case 0x1A8CDCu: goto label_1a8cdc;
            case 0x1A8CE0u: goto label_1a8ce0;
            case 0x1A8CE4u: goto label_1a8ce4;
            case 0x1A8CE8u: goto label_1a8ce8;
            case 0x1A8CECu: goto label_1a8cec;
            case 0x1A8CF0u: goto label_1a8cf0;
            case 0x1A8CF4u: goto label_1a8cf4;
            case 0x1A8CF8u: goto label_1a8cf8;
            case 0x1A8CFCu: goto label_1a8cfc;
            case 0x1A8D00u: goto label_1a8d00;
            case 0x1A8D04u: goto label_1a8d04;
            case 0x1A8D08u: goto label_1a8d08;
            case 0x1A8D0Cu: goto label_1a8d0c;
            case 0x1A8D10u: goto label_1a8d10;
            case 0x1A8D14u: goto label_1a8d14;
            case 0x1A8D18u: goto label_1a8d18;
            case 0x1A8D1Cu: goto label_1a8d1c;
            case 0x1A8D20u: goto label_1a8d20;
            case 0x1A8D24u: goto label_1a8d24;
            case 0x1A8D28u: goto label_1a8d28;
            case 0x1A8D2Cu: goto label_1a8d2c;
            case 0x1A8D30u: goto label_1a8d30;
            case 0x1A8D34u: goto label_1a8d34;
            case 0x1A8D38u: goto label_1a8d38;
            case 0x1A8D3Cu: goto label_1a8d3c;
            case 0x1A8D40u: goto label_1a8d40;
            case 0x1A8D44u: goto label_1a8d44;
            case 0x1A8D48u: goto label_1a8d48;
            case 0x1A8D4Cu: goto label_1a8d4c;
            case 0x1A8D50u: goto label_1a8d50;
            case 0x1A8D54u: goto label_1a8d54;
            case 0x1A8D58u: goto label_1a8d58;
            case 0x1A8D5Cu: goto label_1a8d5c;
            case 0x1A8D60u: goto label_1a8d60;
            case 0x1A8D64u: goto label_1a8d64;
            case 0x1A8D68u: goto label_1a8d68;
            case 0x1A8D6Cu: goto label_1a8d6c;
            case 0x1A8D70u: goto label_1a8d70;
            case 0x1A8D74u: goto label_1a8d74;
            case 0x1A8D78u: goto label_1a8d78;
            case 0x1A8D7Cu: goto label_1a8d7c;
            case 0x1A8D80u: goto label_1a8d80;
            case 0x1A8D84u: goto label_1a8d84;
            case 0x1A8D88u: goto label_1a8d88;
            case 0x1A8D8Cu: goto label_1a8d8c;
            case 0x1A8D90u: goto label_1a8d90;
            case 0x1A8D94u: goto label_1a8d94;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8D9Cu: goto label_1a8d9c;
            case 0x1A8DA0u: goto label_1a8da0;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DACu: goto label_1a8dac;
            case 0x1A8DB0u: goto label_1a8db0;
            case 0x1A8DB4u: goto label_1a8db4;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8DBCu: goto label_1a8dbc;
            case 0x1A8DC0u: goto label_1a8dc0;
            case 0x1A8DC4u: goto label_1a8dc4;
            case 0x1A8DC8u: goto label_1a8dc8;
            case 0x1A8DCCu: goto label_1a8dcc;
            case 0x1A8DD0u: goto label_1a8dd0;
            case 0x1A8DD4u: goto label_1a8dd4;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DDCu: goto label_1a8ddc;
            case 0x1A8DE0u: goto label_1a8de0;
            case 0x1A8DE4u: goto label_1a8de4;
            case 0x1A8DE8u: goto label_1a8de8;
            case 0x1A8DECu: goto label_1a8dec;
            case 0x1A8DF0u: goto label_1a8df0;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8DF8u: goto label_1a8df8;
            case 0x1A8DFCu: goto label_1a8dfc;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E04u: goto label_1a8e04;
            case 0x1A8E08u: goto label_1a8e08;
            case 0x1A8E0Cu: goto label_1a8e0c;
            case 0x1A8E10u: goto label_1a8e10;
            case 0x1A8E14u: goto label_1a8e14;
            case 0x1A8E18u: goto label_1a8e18;
            case 0x1A8E1Cu: goto label_1a8e1c;
            case 0x1A8E20u: goto label_1a8e20;
            case 0x1A8E24u: goto label_1a8e24;
            case 0x1A8E28u: goto label_1a8e28;
            case 0x1A8E2Cu: goto label_1a8e2c;
            case 0x1A8E30u: goto label_1a8e30;
            case 0x1A8E34u: goto label_1a8e34;
            case 0x1A8E38u: goto label_1a8e38;
            case 0x1A8E3Cu: goto label_1a8e3c;
            case 0x1A8E40u: goto label_1a8e40;
            case 0x1A8E44u: goto label_1a8e44;
            case 0x1A8E48u: goto label_1a8e48;
            case 0x1A8E4Cu: goto label_1a8e4c;
            case 0x1A8E50u: goto label_1a8e50;
            case 0x1A8E54u: goto label_1a8e54;
            case 0x1A8E58u: goto label_1a8e58;
            case 0x1A8E5Cu: goto label_1a8e5c;
            case 0x1A8E60u: goto label_1a8e60;
            case 0x1A8E64u: goto label_1a8e64;
            case 0x1A8E68u: goto label_1a8e68;
            case 0x1A8E6Cu: goto label_1a8e6c;
            case 0x1A8E70u: goto label_1a8e70;
            case 0x1A8E74u: goto label_1a8e74;
            case 0x1A8E78u: goto label_1a8e78;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E80u: goto label_1a8e80;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8E88u: goto label_1a8e88;
            case 0x1A8E8Cu: goto label_1a8e8c;
            case 0x1A8E90u: goto label_1a8e90;
            case 0x1A8E94u: goto label_1a8e94;
            case 0x1A8E98u: goto label_1a8e98;
            case 0x1A8E9Cu: goto label_1a8e9c;
            case 0x1A8EA0u: goto label_1a8ea0;
            case 0x1A8EA4u: goto label_1a8ea4;
            case 0x1A8EA8u: goto label_1a8ea8;
            case 0x1A8EACu: goto label_1a8eac;
            case 0x1A8EB0u: goto label_1a8eb0;
            case 0x1A8EB4u: goto label_1a8eb4;
            case 0x1A8EB8u: goto label_1a8eb8;
            case 0x1A8EBCu: goto label_1a8ebc;
            case 0x1A8EC0u: goto label_1a8ec0;
            case 0x1A8EC4u: goto label_1a8ec4;
            case 0x1A8EC8u: goto label_1a8ec8;
            case 0x1A8ECCu: goto label_1a8ecc;
            case 0x1A8ED0u: goto label_1a8ed0;
            case 0x1A8ED4u: goto label_1a8ed4;
            case 0x1A8ED8u: goto label_1a8ed8;
            case 0x1A8EDCu: goto label_1a8edc;
            case 0x1A8EE0u: goto label_1a8ee0;
            case 0x1A8EE4u: goto label_1a8ee4;
            case 0x1A8EE8u: goto label_1a8ee8;
            case 0x1A8EECu: goto label_1a8eec;
            case 0x1A8EF0u: goto label_1a8ef0;
            case 0x1A8EF4u: goto label_1a8ef4;
            case 0x1A8EF8u: goto label_1a8ef8;
            case 0x1A8EFCu: goto label_1a8efc;
            case 0x1A8F00u: goto label_1a8f00;
            case 0x1A8F04u: goto label_1a8f04;
            case 0x1A8F08u: goto label_1a8f08;
            case 0x1A8F0Cu: goto label_1a8f0c;
            case 0x1A8F10u: goto label_1a8f10;
            case 0x1A8F14u: goto label_1a8f14;
            case 0x1A8F18u: goto label_1a8f18;
            case 0x1A8F1Cu: goto label_1a8f1c;
            case 0x1A8F20u: goto label_1a8f20;
            case 0x1A8F24u: goto label_1a8f24;
            case 0x1A8F28u: goto label_1a8f28;
            case 0x1A8F2Cu: goto label_1a8f2c;
            case 0x1A8F30u: goto label_1a8f30;
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F38u: goto label_1a8f38;
            case 0x1A8F3Cu: goto label_1a8f3c;
            case 0x1A8F40u: goto label_1a8f40;
            case 0x1A8F44u: goto label_1a8f44;
            case 0x1A8F48u: goto label_1a8f48;
            case 0x1A8F4Cu: goto label_1a8f4c;
            case 0x1A8F50u: goto label_1a8f50;
            case 0x1A8F54u: goto label_1a8f54;
            case 0x1A8F58u: goto label_1a8f58;
            case 0x1A8F5Cu: goto label_1a8f5c;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F64u: goto label_1a8f64;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8F6Cu: goto label_1a8f6c;
            case 0x1A8F70u: goto label_1a8f70;
            case 0x1A8F74u: goto label_1a8f74;
            case 0x1A8F78u: goto label_1a8f78;
            case 0x1A8F7Cu: goto label_1a8f7c;
            case 0x1A8F80u: goto label_1a8f80;
            case 0x1A8F84u: goto label_1a8f84;
            case 0x1A8F88u: goto label_1a8f88;
            case 0x1A8F8Cu: goto label_1a8f8c;
            case 0x1A8F90u: goto label_1a8f90;
            case 0x1A8F94u: goto label_1a8f94;
            case 0x1A8F98u: goto label_1a8f98;
            case 0x1A8F9Cu: goto label_1a8f9c;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FA8u: goto label_1a8fa8;
            case 0x1A8FACu: goto label_1a8fac;
            case 0x1A8FB0u: goto label_1a8fb0;
            case 0x1A8FB4u: goto label_1a8fb4;
            case 0x1A8FB8u: goto label_1a8fb8;
            case 0x1A8FBCu: goto label_1a8fbc;
            case 0x1A8FC0u: goto label_1a8fc0;
            case 0x1A8FC4u: goto label_1a8fc4;
            case 0x1A8FC8u: goto label_1a8fc8;
            case 0x1A8FCCu: goto label_1a8fcc;
            case 0x1A8FD0u: goto label_1a8fd0;
            case 0x1A8FD4u: goto label_1a8fd4;
            case 0x1A8FD8u: goto label_1a8fd8;
            case 0x1A8FDCu: goto label_1a8fdc;
            case 0x1A8FE0u: goto label_1a8fe0;
            case 0x1A8FE4u: goto label_1a8fe4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FECu: goto label_1a8fec;
            case 0x1A8FF0u: goto label_1a8ff0;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A8FF8u: goto label_1a8ff8;
            case 0x1A8FFCu: goto label_1a8ffc;
            case 0x1A9000u: goto label_1a9000;
            case 0x1A9004u: goto label_1a9004;
            case 0x1A9008u: goto label_1a9008;
            case 0x1A900Cu: goto label_1a900c;
            case 0x1A9010u: goto label_1a9010;
            case 0x1A9014u: goto label_1a9014;
            case 0x1A9018u: goto label_1a9018;
            case 0x1A901Cu: goto label_1a901c;
            case 0x1A9020u: goto label_1a9020;
            case 0x1A9024u: goto label_1a9024;
            case 0x1A9028u: goto label_1a9028;
            case 0x1A902Cu: goto label_1a902c;
            case 0x1A9030u: goto label_1a9030;
            case 0x1A9034u: goto label_1a9034;
            case 0x1A9038u: goto label_1a9038;
            case 0x1A903Cu: goto label_1a903c;
            case 0x1A9040u: goto label_1a9040;
            case 0x1A9044u: goto label_1a9044;
            case 0x1A9048u: goto label_1a9048;
            case 0x1A904Cu: goto label_1a904c;
            case 0x1A9050u: goto label_1a9050;
            case 0x1A9054u: goto label_1a9054;
            case 0x1A9058u: goto label_1a9058;
            case 0x1A905Cu: goto label_1a905c;
            case 0x1A9060u: goto label_1a9060;
            case 0x1A9064u: goto label_1a9064;
            case 0x1A9068u: goto label_1a9068;
            case 0x1A906Cu: goto label_1a906c;
            case 0x1A9070u: goto label_1a9070;
            case 0x1A9074u: goto label_1a9074;
            case 0x1A9078u: goto label_1a9078;
            case 0x1A907Cu: goto label_1a907c;
            case 0x1A9080u: goto label_1a9080;
            case 0x1A9084u: goto label_1a9084;
            case 0x1A9088u: goto label_1a9088;
            case 0x1A908Cu: goto label_1a908c;
            case 0x1A9090u: goto label_1a9090;
            case 0x1A9094u: goto label_1a9094;
            case 0x1A9098u: goto label_1a9098;
            case 0x1A909Cu: goto label_1a909c;
            case 0x1A90A0u: goto label_1a90a0;
            case 0x1A90A4u: goto label_1a90a4;
            case 0x1A90A8u: goto label_1a90a8;
            case 0x1A90ACu: goto label_1a90ac;
            case 0x1A90B0u: goto label_1a90b0;
            case 0x1A90B4u: goto label_1a90b4;
            case 0x1A90B8u: goto label_1a90b8;
            case 0x1A90BCu: goto label_1a90bc;
            case 0x1A90C0u: goto label_1a90c0;
            case 0x1A90C4u: goto label_1a90c4;
            case 0x1A90C8u: goto label_1a90c8;
            case 0x1A90CCu: goto label_1a90cc;
            case 0x1A90D0u: goto label_1a90d0;
            case 0x1A90D4u: goto label_1a90d4;
            case 0x1A90D8u: goto label_1a90d8;
            case 0x1A90DCu: goto label_1a90dc;
            case 0x1A90E0u: goto label_1a90e0;
            case 0x1A90E4u: goto label_1a90e4;
            case 0x1A90E8u: goto label_1a90e8;
            case 0x1A90ECu: goto label_1a90ec;
            case 0x1A90F0u: goto label_1a90f0;
            case 0x1A90F4u: goto label_1a90f4;
            case 0x1A90F8u: goto label_1a90f8;
            case 0x1A90FCu: goto label_1a90fc;
            case 0x1A9100u: goto label_1a9100;
            case 0x1A9104u: goto label_1a9104;
            case 0x1A9108u: goto label_1a9108;
            case 0x1A910Cu: goto label_1a910c;
            case 0x1A9110u: goto label_1a9110;
            case 0x1A9114u: goto label_1a9114;
            case 0x1A9118u: goto label_1a9118;
            case 0x1A911Cu: goto label_1a911c;
            case 0x1A9120u: goto label_1a9120;
            case 0x1A9124u: goto label_1a9124;
            case 0x1A9128u: goto label_1a9128;
            case 0x1A912Cu: goto label_1a912c;
            case 0x1A9130u: goto label_1a9130;
            case 0x1A9134u: goto label_1a9134;
            case 0x1A9138u: goto label_1a9138;
            case 0x1A913Cu: goto label_1a913c;
            case 0x1A9140u: goto label_1a9140;
            case 0x1A9144u: goto label_1a9144;
            case 0x1A9148u: goto label_1a9148;
            case 0x1A914Cu: goto label_1a914c;
            case 0x1A9150u: goto label_1a9150;
            case 0x1A9154u: goto label_1a9154;
            case 0x1A9158u: goto label_1a9158;
            case 0x1A915Cu: goto label_1a915c;
            case 0x1A9160u: goto label_1a9160;
            case 0x1A9164u: goto label_1a9164;
            case 0x1A9168u: goto label_1a9168;
            case 0x1A916Cu: goto label_1a916c;
            case 0x1A9170u: goto label_1a9170;
            case 0x1A9174u: goto label_1a9174;
            case 0x1A9178u: goto label_1a9178;
            case 0x1A917Cu: goto label_1a917c;
            case 0x1A9180u: goto label_1a9180;
            case 0x1A9184u: goto label_1a9184;
            case 0x1A9188u: goto label_1a9188;
            case 0x1A918Cu: goto label_1a918c;
            case 0x1A9190u: goto label_1a9190;
            case 0x1A9194u: goto label_1a9194;
            case 0x1A9198u: goto label_1a9198;
            case 0x1A919Cu: goto label_1a919c;
            case 0x1A91A0u: goto label_1a91a0;
            case 0x1A91A4u: goto label_1a91a4;
            case 0x1A91A8u: goto label_1a91a8;
            case 0x1A91ACu: goto label_1a91ac;
            case 0x1A91B0u: goto label_1a91b0;
            case 0x1A91B4u: goto label_1a91b4;
            case 0x1A91B8u: goto label_1a91b8;
            case 0x1A91BCu: goto label_1a91bc;
            case 0x1A91C0u: goto label_1a91c0;
            case 0x1A91C4u: goto label_1a91c4;
            case 0x1A91C8u: goto label_1a91c8;
            case 0x1A91CCu: goto label_1a91cc;
            case 0x1A91D0u: goto label_1a91d0;
            case 0x1A91D4u: goto label_1a91d4;
            case 0x1A91D8u: goto label_1a91d8;
            case 0x1A91DCu: goto label_1a91dc;
            case 0x1A91E0u: goto label_1a91e0;
            case 0x1A91E4u: goto label_1a91e4;
            case 0x1A91E8u: goto label_1a91e8;
            case 0x1A91ECu: goto label_1a91ec;
            case 0x1A91F0u: goto label_1a91f0;
            case 0x1A91F4u: goto label_1a91f4;
            case 0x1A91F8u: goto label_1a91f8;
            case 0x1A91FCu: goto label_1a91fc;
            case 0x1A9200u: goto label_1a9200;
            case 0x1A9204u: goto label_1a9204;
            case 0x1A9208u: goto label_1a9208;
            case 0x1A920Cu: goto label_1a920c;
            case 0x1A9210u: goto label_1a9210;
            case 0x1A9214u: goto label_1a9214;
            case 0x1A9218u: goto label_1a9218;
            case 0x1A921Cu: goto label_1a921c;
            case 0x1A9220u: goto label_1a9220;
            case 0x1A9224u: goto label_1a9224;
            case 0x1A9228u: goto label_1a9228;
            case 0x1A922Cu: goto label_1a922c;
            case 0x1A9230u: goto label_1a9230;
            case 0x1A9234u: goto label_1a9234;
            case 0x1A9238u: goto label_1a9238;
            case 0x1A923Cu: goto label_1a923c;
            case 0x1A9240u: goto label_1a9240;
            case 0x1A9244u: goto label_1a9244;
            case 0x1A9248u: goto label_1a9248;
            case 0x1A924Cu: goto label_1a924c;
            case 0x1A9250u: goto label_1a9250;
            case 0x1A9254u: goto label_1a9254;
            case 0x1A9258u: goto label_1a9258;
            case 0x1A925Cu: goto label_1a925c;
            case 0x1A9260u: goto label_1a9260;
            case 0x1A9264u: goto label_1a9264;
            case 0x1A9268u: goto label_1a9268;
            case 0x1A926Cu: goto label_1a926c;
            case 0x1A9270u: goto label_1a9270;
            case 0x1A9274u: goto label_1a9274;
            case 0x1A9278u: goto label_1a9278;
            case 0x1A927Cu: goto label_1a927c;
            case 0x1A9280u: goto label_1a9280;
            case 0x1A9284u: goto label_1a9284;
            case 0x1A9288u: goto label_1a9288;
            case 0x1A928Cu: goto label_1a928c;
            case 0x1A9290u: goto label_1a9290;
            case 0x1A9294u: goto label_1a9294;
            case 0x1A9298u: goto label_1a9298;
            case 0x1A929Cu: goto label_1a929c;
            case 0x1A92A0u: goto label_1a92a0;
            case 0x1A92A4u: goto label_1a92a4;
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92ACu: goto label_1a92ac;
            case 0x1A92B0u: goto label_1a92b0;
            case 0x1A92B4u: goto label_1a92b4;
            case 0x1A92B8u: goto label_1a92b8;
            case 0x1A92BCu: goto label_1a92bc;
            case 0x1A92C0u: goto label_1a92c0;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92C8u: goto label_1a92c8;
            case 0x1A92CCu: goto label_1a92cc;
            case 0x1A92D0u: goto label_1a92d0;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A92D8u: goto label_1a92d8;
            case 0x1A92DCu: goto label_1a92dc;
            case 0x1A92E0u: goto label_1a92e0;
            case 0x1A92E4u: goto label_1a92e4;
            case 0x1A92E8u: goto label_1a92e8;
            case 0x1A92ECu: goto label_1a92ec;
            case 0x1A92F0u: goto label_1a92f0;
            case 0x1A92F4u: goto label_1a92f4;
            case 0x1A92F8u: goto label_1a92f8;
            case 0x1A92FCu: goto label_1a92fc;
            case 0x1A9300u: goto label_1a9300;
            case 0x1A9304u: goto label_1a9304;
            case 0x1A9308u: goto label_1a9308;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9310u: goto label_1a9310;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A9318u: goto label_1a9318;
            case 0x1A931Cu: goto label_1a931c;
            case 0x1A9320u: goto label_1a9320;
            case 0x1A9324u: goto label_1a9324;
            case 0x1A9328u: goto label_1a9328;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9330u: goto label_1a9330;
            case 0x1A9334u: goto label_1a9334;
            case 0x1A9338u: goto label_1a9338;
            case 0x1A933Cu: goto label_1a933c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9344u: goto label_1a9344;
            case 0x1A9348u: goto label_1a9348;
            case 0x1A934Cu: goto label_1a934c;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9354u: goto label_1a9354;
            case 0x1A9358u: goto label_1a9358;
            case 0x1A935Cu: goto label_1a935c;
            case 0x1A9360u: goto label_1a9360;
            case 0x1A9364u: goto label_1a9364;
            case 0x1A9368u: goto label_1a9368;
            case 0x1A936Cu: goto label_1a936c;
            case 0x1A9370u: goto label_1a9370;
            case 0x1A9374u: goto label_1a9374;
            case 0x1A9378u: goto label_1a9378;
            case 0x1A937Cu: goto label_1a937c;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A9384u: goto label_1a9384;
            case 0x1A9388u: goto label_1a9388;
            case 0x1A938Cu: goto label_1a938c;
            case 0x1A9390u: goto label_1a9390;
            case 0x1A9394u: goto label_1a9394;
            case 0x1A9398u: goto label_1a9398;
            case 0x1A939Cu: goto label_1a939c;
            case 0x1A93A0u: goto label_1a93a0;
            case 0x1A93A4u: goto label_1a93a4;
            case 0x1A93A8u: goto label_1a93a8;
            case 0x1A93ACu: goto label_1a93ac;
            case 0x1A93B0u: goto label_1a93b0;
            case 0x1A93B4u: goto label_1a93b4;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93BCu: goto label_1a93bc;
            case 0x1A93C0u: goto label_1a93c0;
            case 0x1A93C4u: goto label_1a93c4;
            case 0x1A93C8u: goto label_1a93c8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93D0u: goto label_1a93d0;
            case 0x1A93D4u: goto label_1a93d4;
            case 0x1A93D8u: goto label_1a93d8;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93E4u: goto label_1a93e4;
            case 0x1A93E8u: goto label_1a93e8;
            case 0x1A93ECu: goto label_1a93ec;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A93F4u: goto label_1a93f4;
            case 0x1A93F8u: goto label_1a93f8;
            case 0x1A93FCu: goto label_1a93fc;
            case 0x1A9400u: goto label_1a9400;
            case 0x1A9404u: goto label_1a9404;
            case 0x1A9408u: goto label_1a9408;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9410u: goto label_1a9410;
            case 0x1A9414u: goto label_1a9414;
            case 0x1A9418u: goto label_1a9418;
            case 0x1A941Cu: goto label_1a941c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9424u: goto label_1a9424;
            case 0x1A9428u: goto label_1a9428;
            case 0x1A942Cu: goto label_1a942c;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9434u: goto label_1a9434;
            case 0x1A9438u: goto label_1a9438;
            case 0x1A943Cu: goto label_1a943c;
            case 0x1A9440u: goto label_1a9440;
            case 0x1A9444u: goto label_1a9444;
            case 0x1A9448u: goto label_1a9448;
            case 0x1A944Cu: goto label_1a944c;
            case 0x1A9450u: goto label_1a9450;
            case 0x1A9454u: goto label_1a9454;
            case 0x1A9458u: goto label_1a9458;
            case 0x1A945Cu: goto label_1a945c;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A9464u: goto label_1a9464;
            case 0x1A9468u: goto label_1a9468;
            case 0x1A946Cu: goto label_1a946c;
            case 0x1A9470u: goto label_1a9470;
            case 0x1A9474u: goto label_1a9474;
            case 0x1A9478u: goto label_1a9478;
            case 0x1A947Cu: goto label_1a947c;
            case 0x1A9480u: goto label_1a9480;
            case 0x1A9484u: goto label_1a9484;
            case 0x1A9488u: goto label_1a9488;
            case 0x1A948Cu: goto label_1a948c;
            case 0x1A9490u: goto label_1a9490;
            case 0x1A9494u: goto label_1a9494;
            case 0x1A9498u: goto label_1a9498;
            case 0x1A949Cu: goto label_1a949c;
            case 0x1A94A0u: goto label_1a94a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9464u; }
            if (ctx->pc != 0x1A9464u) { return; }
        }
    }
    ctx->pc = 0x1A9464u;
label_1a9464:
    // 0x1a9464: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a9468:
    if (ctx->pc == 0x1A9468u) {
        ctx->pc = 0x1A946Cu;
        goto label_1a946c;
    }
    ctx->pc = 0x1A9464u;
    {
        const bool branch_taken_0x1a9464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9464) {
            ctx->pc = 0x1A9490u;
            goto label_1a9490;
        }
    }
    ctx->pc = 0x1A946Cu;
label_1a946c:
    // 0x1a946c: 0x0  nop
    ctx->pc = 0x1a946cu;
    // NOP
label_1a9470:
    // 0x1a9470: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1a9470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1a9474:
    // 0x1a9474: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a9478:
    // 0x1a9478: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a9478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a947c:
    // 0x1a947c: 0x24c68070  addiu       $a2, $a2, -0x7F90
    ctx->pc = 0x1a947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934640));
label_1a9480:
    // 0x1a9480: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9484:
    // 0x1a9484: 0xc053ca4  jal         func_14F290
label_1a9488:
    if (ctx->pc == 0x1A9488u) {
        ctx->pc = 0x1A9488u;
            // 0x1a9488: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A948Cu;
        goto label_1a948c;
    }
    ctx->pc = 0x1A9484u;
    SET_GPR_U32(ctx, 31, 0x1A948Cu);
    ctx->pc = 0x1A9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9484u;
            // 0x1a9488: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A948Cu; }
        if (ctx->pc != 0x1A948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A948Cu; }
        if (ctx->pc != 0x1A948Cu) { return; }
    }
    ctx->pc = 0x1A948Cu;
label_1a948c:
    // 0x1a948c: 0x0  nop
    ctx->pc = 0x1a948cu;
    // NOP
label_1a9490:
    // 0x1a9490: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a9490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9494:
    // 0x1a9494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a9494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9498:
    // 0x1a9498: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a9498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a949c:
    // 0x1a949c: 0x3e00008  jr          $ra
label_1a94a0:
    if (ctx->pc == 0x1A94A0u) {
        ctx->pc = 0x1A94A0u;
            // 0x1a94a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1A94A4u;
        goto label_fallthrough_0x1a949c;
    }
    ctx->pc = 0x1A949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A949Cu;
            // 0x1a94a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8330u: goto label_1a8330;
            case 0x1A8334u: goto label_1a8334;
            case 0x1A8338u: goto label_1a8338;
            case 0x1A833Cu: goto label_1a833c;
            case 0x1A8340u: goto label_1a8340;
            case 0x1A8344u: goto label_1a8344;
            case 0x1A8348u: goto label_1a8348;
            case 0x1A834Cu: goto label_1a834c;
            case 0x1A8350u: goto label_1a8350;
            case 0x1A8354u: goto label_1a8354;
            case 0x1A8358u: goto label_1a8358;
            case 0x1A835Cu: goto label_1a835c;
            case 0x1A8360u: goto label_1a8360;
            case 0x1A8364u: goto label_1a8364;
            case 0x1A8368u: goto label_1a8368;
            case 0x1A836Cu: goto label_1a836c;
            case 0x1A8370u: goto label_1a8370;
            case 0x1A8374u: goto label_1a8374;
            case 0x1A8378u: goto label_1a8378;
            case 0x1A837Cu: goto label_1a837c;
            case 0x1A8380u: goto label_1a8380;
            case 0x1A8384u: goto label_1a8384;
            case 0x1A8388u: goto label_1a8388;
            case 0x1A838Cu: goto label_1a838c;
            case 0x1A8390u: goto label_1a8390;
            case 0x1A8394u: goto label_1a8394;
            case 0x1A8398u: goto label_1a8398;
            case 0x1A839Cu: goto label_1a839c;
            case 0x1A83A0u: goto label_1a83a0;
            case 0x1A83A4u: goto label_1a83a4;
            case 0x1A83A8u: goto label_1a83a8;
            case 0x1A83ACu: goto label_1a83ac;
            case 0x1A83B0u: goto label_1a83b0;
            case 0x1A83B4u: goto label_1a83b4;
            case 0x1A83B8u: goto label_1a83b8;
            case 0x1A83BCu: goto label_1a83bc;
            case 0x1A83C0u: goto label_1a83c0;
            case 0x1A83C4u: goto label_1a83c4;
            case 0x1A83C8u: goto label_1a83c8;
            case 0x1A83CCu: goto label_1a83cc;
            case 0x1A83D0u: goto label_1a83d0;
            case 0x1A83D4u: goto label_1a83d4;
            case 0x1A83D8u: goto label_1a83d8;
            case 0x1A83DCu: goto label_1a83dc;
            case 0x1A83E0u: goto label_1a83e0;
            case 0x1A83E4u: goto label_1a83e4;
            case 0x1A83E8u: goto label_1a83e8;
            case 0x1A83ECu: goto label_1a83ec;
            case 0x1A83F0u: goto label_1a83f0;
            case 0x1A83F4u: goto label_1a83f4;
            case 0x1A83F8u: goto label_1a83f8;
            case 0x1A83FCu: goto label_1a83fc;
            case 0x1A8400u: goto label_1a8400;
            case 0x1A8404u: goto label_1a8404;
            case 0x1A8408u: goto label_1a8408;
            case 0x1A840Cu: goto label_1a840c;
            case 0x1A8410u: goto label_1a8410;
            case 0x1A8414u: goto label_1a8414;
            case 0x1A8418u: goto label_1a8418;
            case 0x1A841Cu: goto label_1a841c;
            case 0x1A8420u: goto label_1a8420;
            case 0x1A8424u: goto label_1a8424;
            case 0x1A8428u: goto label_1a8428;
            case 0x1A842Cu: goto label_1a842c;
            case 0x1A8430u: goto label_1a8430;
            case 0x1A8434u: goto label_1a8434;
            case 0x1A8438u: goto label_1a8438;
            case 0x1A843Cu: goto label_1a843c;
            case 0x1A8440u: goto label_1a8440;
            case 0x1A8444u: goto label_1a8444;
            case 0x1A8448u: goto label_1a8448;
            case 0x1A844Cu: goto label_1a844c;
            case 0x1A8450u: goto label_1a8450;
            case 0x1A8454u: goto label_1a8454;
            case 0x1A8458u: goto label_1a8458;
            case 0x1A845Cu: goto label_1a845c;
            case 0x1A8460u: goto label_1a8460;
            case 0x1A8464u: goto label_1a8464;
            case 0x1A8468u: goto label_1a8468;
            case 0x1A846Cu: goto label_1a846c;
            case 0x1A8470u: goto label_1a8470;
            case 0x1A8474u: goto label_1a8474;
            case 0x1A8478u: goto label_1a8478;
            case 0x1A847Cu: goto label_1a847c;
            case 0x1A8480u: goto label_1a8480;
            case 0x1A8484u: goto label_1a8484;
            case 0x1A8488u: goto label_1a8488;
            case 0x1A848Cu: goto label_1a848c;
            case 0x1A8490u: goto label_1a8490;
            case 0x1A8494u: goto label_1a8494;
            case 0x1A8498u: goto label_1a8498;
            case 0x1A849Cu: goto label_1a849c;
            case 0x1A84A0u: goto label_1a84a0;
            case 0x1A84A4u: goto label_1a84a4;
            case 0x1A84A8u: goto label_1a84a8;
            case 0x1A84ACu: goto label_1a84ac;
            case 0x1A84B0u: goto label_1a84b0;
            case 0x1A84B4u: goto label_1a84b4;
            case 0x1A84B8u: goto label_1a84b8;
            case 0x1A84BCu: goto label_1a84bc;
            case 0x1A84C0u: goto label_1a84c0;
            case 0x1A84C4u: goto label_1a84c4;
            case 0x1A84C8u: goto label_1a84c8;
            case 0x1A84CCu: goto label_1a84cc;
            case 0x1A84D0u: goto label_1a84d0;
            case 0x1A84D4u: goto label_1a84d4;
            case 0x1A84D8u: goto label_1a84d8;
            case 0x1A84DCu: goto label_1a84dc;
            case 0x1A84E0u: goto label_1a84e0;
            case 0x1A84E4u: goto label_1a84e4;
            case 0x1A84E8u: goto label_1a84e8;
            case 0x1A84ECu: goto label_1a84ec;
            case 0x1A84F0u: goto label_1a84f0;
            case 0x1A84F4u: goto label_1a84f4;
            case 0x1A84F8u: goto label_1a84f8;
            case 0x1A84FCu: goto label_1a84fc;
            case 0x1A8500u: goto label_1a8500;
            case 0x1A8504u: goto label_1a8504;
            case 0x1A8508u: goto label_1a8508;
            case 0x1A850Cu: goto label_1a850c;
            case 0x1A8510u: goto label_1a8510;
            case 0x1A8514u: goto label_1a8514;
            case 0x1A8518u: goto label_1a8518;
            case 0x1A851Cu: goto label_1a851c;
            case 0x1A8520u: goto label_1a8520;
            case 0x1A8524u: goto label_1a8524;
            case 0x1A8528u: goto label_1a8528;
            case 0x1A852Cu: goto label_1a852c;
            case 0x1A8530u: goto label_1a8530;
            case 0x1A8534u: goto label_1a8534;
            case 0x1A8538u: goto label_1a8538;
            case 0x1A853Cu: goto label_1a853c;
            case 0x1A8540u: goto label_1a8540;
            case 0x1A8544u: goto label_1a8544;
            case 0x1A8548u: goto label_1a8548;
            case 0x1A854Cu: goto label_1a854c;
            case 0x1A8550u: goto label_1a8550;
            case 0x1A8554u: goto label_1a8554;
            case 0x1A8558u: goto label_1a8558;
            case 0x1A855Cu: goto label_1a855c;
            case 0x1A8560u: goto label_1a8560;
            case 0x1A8564u: goto label_1a8564;
            case 0x1A8568u: goto label_1a8568;
            case 0x1A856Cu: goto label_1a856c;
            case 0x1A8570u: goto label_1a8570;
            case 0x1A8574u: goto label_1a8574;
            case 0x1A8578u: goto label_1a8578;
            case 0x1A857Cu: goto label_1a857c;
            case 0x1A8580u: goto label_1a8580;
            case 0x1A8584u: goto label_1a8584;
            case 0x1A8588u: goto label_1a8588;
            case 0x1A858Cu: goto label_1a858c;
            case 0x1A8590u: goto label_1a8590;
            case 0x1A8594u: goto label_1a8594;
            case 0x1A8598u: goto label_1a8598;
            case 0x1A859Cu: goto label_1a859c;
            case 0x1A85A0u: goto label_1a85a0;
            case 0x1A85A4u: goto label_1a85a4;
            case 0x1A85A8u: goto label_1a85a8;
            case 0x1A85ACu: goto label_1a85ac;
            case 0x1A85B0u: goto label_1a85b0;
            case 0x1A85B4u: goto label_1a85b4;
            case 0x1A85B8u: goto label_1a85b8;
            case 0x1A85BCu: goto label_1a85bc;
            case 0x1A85C0u: goto label_1a85c0;
            case 0x1A85C4u: goto label_1a85c4;
            case 0x1A85C8u: goto label_1a85c8;
            case 0x1A85CCu: goto label_1a85cc;
            case 0x1A85D0u: goto label_1a85d0;
            case 0x1A85D4u: goto label_1a85d4;
            case 0x1A85D8u: goto label_1a85d8;
            case 0x1A85DCu: goto label_1a85dc;
            case 0x1A85E0u: goto label_1a85e0;
            case 0x1A85E4u: goto label_1a85e4;
            case 0x1A85E8u: goto label_1a85e8;
            case 0x1A85ECu: goto label_1a85ec;
            case 0x1A85F0u: goto label_1a85f0;
            case 0x1A85F4u: goto label_1a85f4;
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A85FCu: goto label_1a85fc;
            case 0x1A8600u: goto label_1a8600;
            case 0x1A8604u: goto label_1a8604;
            case 0x1A8608u: goto label_1a8608;
            case 0x1A860Cu: goto label_1a860c;
            case 0x1A8610u: goto label_1a8610;
            case 0x1A8614u: goto label_1a8614;
            case 0x1A8618u: goto label_1a8618;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8624u: goto label_1a8624;
            case 0x1A8628u: goto label_1a8628;
            case 0x1A862Cu: goto label_1a862c;
            case 0x1A8630u: goto label_1a8630;
            case 0x1A8634u: goto label_1a8634;
            case 0x1A8638u: goto label_1a8638;
            case 0x1A863Cu: goto label_1a863c;
            case 0x1A8640u: goto label_1a8640;
            case 0x1A8644u: goto label_1a8644;
            case 0x1A8648u: goto label_1a8648;
            case 0x1A864Cu: goto label_1a864c;
            case 0x1A8650u: goto label_1a8650;
            case 0x1A8654u: goto label_1a8654;
            case 0x1A8658u: goto label_1a8658;
            case 0x1A865Cu: goto label_1a865c;
            case 0x1A8660u: goto label_1a8660;
            case 0x1A8664u: goto label_1a8664;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            case 0x1A8670u: goto label_1a8670;
            case 0x1A8674u: goto label_1a8674;
            case 0x1A8678u: goto label_1a8678;
            case 0x1A867Cu: goto label_1a867c;
            case 0x1A8680u: goto label_1a8680;
            case 0x1A8684u: goto label_1a8684;
            case 0x1A8688u: goto label_1a8688;
            case 0x1A868Cu: goto label_1a868c;
            case 0x1A8690u: goto label_1a8690;
            case 0x1A8694u: goto label_1a8694;
            case 0x1A8698u: goto label_1a8698;
            case 0x1A869Cu: goto label_1a869c;
            case 0x1A86A0u: goto label_1a86a0;
            case 0x1A86A4u: goto label_1a86a4;
            case 0x1A86A8u: goto label_1a86a8;
            case 0x1A86ACu: goto label_1a86ac;
            case 0x1A86B0u: goto label_1a86b0;
            case 0x1A86B4u: goto label_1a86b4;
            case 0x1A86B8u: goto label_1a86b8;
            case 0x1A86BCu: goto label_1a86bc;
            case 0x1A86C0u: goto label_1a86c0;
            case 0x1A86C4u: goto label_1a86c4;
            case 0x1A86C8u: goto label_1a86c8;
            case 0x1A86CCu: goto label_1a86cc;
            case 0x1A86D0u: goto label_1a86d0;
            case 0x1A86D4u: goto label_1a86d4;
            case 0x1A86D8u: goto label_1a86d8;
            case 0x1A86DCu: goto label_1a86dc;
            case 0x1A86E0u: goto label_1a86e0;
            case 0x1A86E4u: goto label_1a86e4;
            case 0x1A86E8u: goto label_1a86e8;
            case 0x1A86ECu: goto label_1a86ec;
            case 0x1A86F0u: goto label_1a86f0;
            case 0x1A86F4u: goto label_1a86f4;
            case 0x1A86F8u: goto label_1a86f8;
            case 0x1A86FCu: goto label_1a86fc;
            case 0x1A8700u: goto label_1a8700;
            case 0x1A8704u: goto label_1a8704;
            case 0x1A8708u: goto label_1a8708;
            case 0x1A870Cu: goto label_1a870c;
            case 0x1A8710u: goto label_1a8710;
            case 0x1A8714u: goto label_1a8714;
            case 0x1A8718u: goto label_1a8718;
            case 0x1A871Cu: goto label_1a871c;
            case 0x1A8720u: goto label_1a8720;
            case 0x1A8724u: goto label_1a8724;
            case 0x1A8728u: goto label_1a8728;
            case 0x1A872Cu: goto label_1a872c;
            case 0x1A8730u: goto label_1a8730;
            case 0x1A8734u: goto label_1a8734;
            case 0x1A8738u: goto label_1a8738;
            case 0x1A873Cu: goto label_1a873c;
            case 0x1A8740u: goto label_1a8740;
            case 0x1A8744u: goto label_1a8744;
            case 0x1A8748u: goto label_1a8748;
            case 0x1A874Cu: goto label_1a874c;
            case 0x1A8750u: goto label_1a8750;
            case 0x1A8754u: goto label_1a8754;
            case 0x1A8758u: goto label_1a8758;
            case 0x1A875Cu: goto label_1a875c;
            case 0x1A8760u: goto label_1a8760;
            case 0x1A8764u: goto label_1a8764;
            case 0x1A8768u: goto label_1a8768;
            case 0x1A876Cu: goto label_1a876c;
            case 0x1A8770u: goto label_1a8770;
            case 0x1A8774u: goto label_1a8774;
            case 0x1A8778u: goto label_1a8778;
            case 0x1A877Cu: goto label_1a877c;
            case 0x1A8780u: goto label_1a8780;
            case 0x1A8784u: goto label_1a8784;
            case 0x1A8788u: goto label_1a8788;
            case 0x1A878Cu: goto label_1a878c;
            case 0x1A8790u: goto label_1a8790;
            case 0x1A8794u: goto label_1a8794;
            case 0x1A8798u: goto label_1a8798;
            case 0x1A879Cu: goto label_1a879c;
            case 0x1A87A0u: goto label_1a87a0;
            case 0x1A87A4u: goto label_1a87a4;
            case 0x1A87A8u: goto label_1a87a8;
            case 0x1A87ACu: goto label_1a87ac;
            case 0x1A87B0u: goto label_1a87b0;
            case 0x1A87B4u: goto label_1a87b4;
            case 0x1A87B8u: goto label_1a87b8;
            case 0x1A87BCu: goto label_1a87bc;
            case 0x1A87C0u: goto label_1a87c0;
            case 0x1A87C4u: goto label_1a87c4;
            case 0x1A87C8u: goto label_1a87c8;
            case 0x1A87CCu: goto label_1a87cc;
            case 0x1A87D0u: goto label_1a87d0;
            case 0x1A87D4u: goto label_1a87d4;
            case 0x1A87D8u: goto label_1a87d8;
            case 0x1A87DCu: goto label_1a87dc;
            case 0x1A87E0u: goto label_1a87e0;
            case 0x1A87E4u: goto label_1a87e4;
            case 0x1A87E8u: goto label_1a87e8;
            case 0x1A87ECu: goto label_1a87ec;
            case 0x1A87F0u: goto label_1a87f0;
            case 0x1A87F4u: goto label_1a87f4;
            case 0x1A87F8u: goto label_1a87f8;
            case 0x1A87FCu: goto label_1a87fc;
            case 0x1A8800u: goto label_1a8800;
            case 0x1A8804u: goto label_1a8804;
            case 0x1A8808u: goto label_1a8808;
            case 0x1A880Cu: goto label_1a880c;
            case 0x1A8810u: goto label_1a8810;
            case 0x1A8814u: goto label_1a8814;
            case 0x1A8818u: goto label_1a8818;
            case 0x1A881Cu: goto label_1a881c;
            case 0x1A8820u: goto label_1a8820;
            case 0x1A8824u: goto label_1a8824;
            case 0x1A8828u: goto label_1a8828;
            case 0x1A882Cu: goto label_1a882c;
            case 0x1A8830u: goto label_1a8830;
            case 0x1A8834u: goto label_1a8834;
            case 0x1A8838u: goto label_1a8838;
            case 0x1A883Cu: goto label_1a883c;
            case 0x1A8840u: goto label_1a8840;
            case 0x1A8844u: goto label_1a8844;
            case 0x1A8848u: goto label_1a8848;
            case 0x1A884Cu: goto label_1a884c;
            case 0x1A8850u: goto label_1a8850;
            case 0x1A8854u: goto label_1a8854;
            case 0x1A8858u: goto label_1a8858;
            case 0x1A885Cu: goto label_1a885c;
            case 0x1A8860u: goto label_1a8860;
            case 0x1A8864u: goto label_1a8864;
            case 0x1A8868u: goto label_1a8868;
            case 0x1A886Cu: goto label_1a886c;
            case 0x1A8870u: goto label_1a8870;
            case 0x1A8874u: goto label_1a8874;
            case 0x1A8878u: goto label_1a8878;
            case 0x1A887Cu: goto label_1a887c;
            case 0x1A8880u: goto label_1a8880;
            case 0x1A8884u: goto label_1a8884;
            case 0x1A8888u: goto label_1a8888;
            case 0x1A888Cu: goto label_1a888c;
            case 0x1A8890u: goto label_1a8890;
            case 0x1A8894u: goto label_1a8894;
            case 0x1A8898u: goto label_1a8898;
            case 0x1A889Cu: goto label_1a889c;
            case 0x1A88A0u: goto label_1a88a0;
            case 0x1A88A4u: goto label_1a88a4;
            case 0x1A88A8u: goto label_1a88a8;
            case 0x1A88ACu: goto label_1a88ac;
            case 0x1A88B0u: goto label_1a88b0;
            case 0x1A88B4u: goto label_1a88b4;
            case 0x1A88B8u: goto label_1a88b8;
            case 0x1A88BCu: goto label_1a88bc;
            case 0x1A88C0u: goto label_1a88c0;
            case 0x1A88C4u: goto label_1a88c4;
            case 0x1A88C8u: goto label_1a88c8;
            case 0x1A88CCu: goto label_1a88cc;
            case 0x1A88D0u: goto label_1a88d0;
            case 0x1A88D4u: goto label_1a88d4;
            case 0x1A88D8u: goto label_1a88d8;
            case 0x1A88DCu: goto label_1a88dc;
            case 0x1A88E0u: goto label_1a88e0;
            case 0x1A88E4u: goto label_1a88e4;
            case 0x1A88E8u: goto label_1a88e8;
            case 0x1A88ECu: goto label_1a88ec;
            case 0x1A88F0u: goto label_1a88f0;
            case 0x1A88F4u: goto label_1a88f4;
            case 0x1A88F8u: goto label_1a88f8;
            case 0x1A88FCu: goto label_1a88fc;
            case 0x1A8900u: goto label_1a8900;
            case 0x1A8904u: goto label_1a8904;
            case 0x1A8908u: goto label_1a8908;
            case 0x1A890Cu: goto label_1a890c;
            case 0x1A8910u: goto label_1a8910;
            case 0x1A8914u: goto label_1a8914;
            case 0x1A8918u: goto label_1a8918;
            case 0x1A891Cu: goto label_1a891c;
            case 0x1A8920u: goto label_1a8920;
            case 0x1A8924u: goto label_1a8924;
            case 0x1A8928u: goto label_1a8928;
            case 0x1A892Cu: goto label_1a892c;
            case 0x1A8930u: goto label_1a8930;
            case 0x1A8934u: goto label_1a8934;
            case 0x1A8938u: goto label_1a8938;
            case 0x1A893Cu: goto label_1a893c;
            case 0x1A8940u: goto label_1a8940;
            case 0x1A8944u: goto label_1a8944;
            case 0x1A8948u: goto label_1a8948;
            case 0x1A894Cu: goto label_1a894c;
            case 0x1A8950u: goto label_1a8950;
            case 0x1A8954u: goto label_1a8954;
            case 0x1A8958u: goto label_1a8958;
            case 0x1A895Cu: goto label_1a895c;
            case 0x1A8960u: goto label_1a8960;
            case 0x1A8964u: goto label_1a8964;
            case 0x1A8968u: goto label_1a8968;
            case 0x1A896Cu: goto label_1a896c;
            case 0x1A8970u: goto label_1a8970;
            case 0x1A8974u: goto label_1a8974;
            case 0x1A8978u: goto label_1a8978;
            case 0x1A897Cu: goto label_1a897c;
            case 0x1A8980u: goto label_1a8980;
            case 0x1A8984u: goto label_1a8984;
            case 0x1A8988u: goto label_1a8988;
            case 0x1A898Cu: goto label_1a898c;
            case 0x1A8990u: goto label_1a8990;
            case 0x1A8994u: goto label_1a8994;
            case 0x1A8998u: goto label_1a8998;
            case 0x1A899Cu: goto label_1a899c;
            case 0x1A89A0u: goto label_1a89a0;
            case 0x1A89A4u: goto label_1a89a4;
            case 0x1A89A8u: goto label_1a89a8;
            case 0x1A89ACu: goto label_1a89ac;
            case 0x1A89B0u: goto label_1a89b0;
            case 0x1A89B4u: goto label_1a89b4;
            case 0x1A89B8u: goto label_1a89b8;
            case 0x1A89BCu: goto label_1a89bc;
            case 0x1A89C0u: goto label_1a89c0;
            case 0x1A89C4u: goto label_1a89c4;
            case 0x1A89C8u: goto label_1a89c8;
            case 0x1A89CCu: goto label_1a89cc;
            case 0x1A89D0u: goto label_1a89d0;
            case 0x1A89D4u: goto label_1a89d4;
            case 0x1A89D8u: goto label_1a89d8;
            case 0x1A89DCu: goto label_1a89dc;
            case 0x1A89E0u: goto label_1a89e0;
            case 0x1A89E4u: goto label_1a89e4;
            case 0x1A89E8u: goto label_1a89e8;
            case 0x1A89ECu: goto label_1a89ec;
            case 0x1A89F0u: goto label_1a89f0;
            case 0x1A89F4u: goto label_1a89f4;
            case 0x1A89F8u: goto label_1a89f8;
            case 0x1A89FCu: goto label_1a89fc;
            case 0x1A8A00u: goto label_1a8a00;
            case 0x1A8A04u: goto label_1a8a04;
            case 0x1A8A08u: goto label_1a8a08;
            case 0x1A8A0Cu: goto label_1a8a0c;
            case 0x1A8A10u: goto label_1a8a10;
            case 0x1A8A14u: goto label_1a8a14;
            case 0x1A8A18u: goto label_1a8a18;
            case 0x1A8A1Cu: goto label_1a8a1c;
            case 0x1A8A20u: goto label_1a8a20;
            case 0x1A8A24u: goto label_1a8a24;
            case 0x1A8A28u: goto label_1a8a28;
            case 0x1A8A2Cu: goto label_1a8a2c;
            case 0x1A8A30u: goto label_1a8a30;
            case 0x1A8A34u: goto label_1a8a34;
            case 0x1A8A38u: goto label_1a8a38;
            case 0x1A8A3Cu: goto label_1a8a3c;
            case 0x1A8A40u: goto label_1a8a40;
            case 0x1A8A44u: goto label_1a8a44;
            case 0x1A8A48u: goto label_1a8a48;
            case 0x1A8A4Cu: goto label_1a8a4c;
            case 0x1A8A50u: goto label_1a8a50;
            case 0x1A8A54u: goto label_1a8a54;
            case 0x1A8A58u: goto label_1a8a58;
            case 0x1A8A5Cu: goto label_1a8a5c;
            case 0x1A8A60u: goto label_1a8a60;
            case 0x1A8A64u: goto label_1a8a64;
            case 0x1A8A68u: goto label_1a8a68;
            case 0x1A8A6Cu: goto label_1a8a6c;
            case 0x1A8A70u: goto label_1a8a70;
            case 0x1A8A74u: goto label_1a8a74;
            case 0x1A8A78u: goto label_1a8a78;
            case 0x1A8A7Cu: goto label_1a8a7c;
            case 0x1A8A80u: goto label_1a8a80;
            case 0x1A8A84u: goto label_1a8a84;
            case 0x1A8A88u: goto label_1a8a88;
            case 0x1A8A8Cu: goto label_1a8a8c;
            case 0x1A8A90u: goto label_1a8a90;
            case 0x1A8A94u: goto label_1a8a94;
            case 0x1A8A98u: goto label_1a8a98;
            case 0x1A8A9Cu: goto label_1a8a9c;
            case 0x1A8AA0u: goto label_1a8aa0;
            case 0x1A8AA4u: goto label_1a8aa4;
            case 0x1A8AA8u: goto label_1a8aa8;
            case 0x1A8AACu: goto label_1a8aac;
            case 0x1A8AB0u: goto label_1a8ab0;
            case 0x1A8AB4u: goto label_1a8ab4;
            case 0x1A8AB8u: goto label_1a8ab8;
            case 0x1A8ABCu: goto label_1a8abc;
            case 0x1A8AC0u: goto label_1a8ac0;
            case 0x1A8AC4u: goto label_1a8ac4;
            case 0x1A8AC8u: goto label_1a8ac8;
            case 0x1A8ACCu: goto label_1a8acc;
            case 0x1A8AD0u: goto label_1a8ad0;
            case 0x1A8AD4u: goto label_1a8ad4;
            case 0x1A8AD8u: goto label_1a8ad8;
            case 0x1A8ADCu: goto label_1a8adc;
            case 0x1A8AE0u: goto label_1a8ae0;
            case 0x1A8AE4u: goto label_1a8ae4;
            case 0x1A8AE8u: goto label_1a8ae8;
            case 0x1A8AECu: goto label_1a8aec;
            case 0x1A8AF0u: goto label_1a8af0;
            case 0x1A8AF4u: goto label_1a8af4;
            case 0x1A8AF8u: goto label_1a8af8;
            case 0x1A8AFCu: goto label_1a8afc;
            case 0x1A8B00u: goto label_1a8b00;
            case 0x1A8B04u: goto label_1a8b04;
            case 0x1A8B08u: goto label_1a8b08;
            case 0x1A8B0Cu: goto label_1a8b0c;
            case 0x1A8B10u: goto label_1a8b10;
            case 0x1A8B14u: goto label_1a8b14;
            case 0x1A8B18u: goto label_1a8b18;
            case 0x1A8B1Cu: goto label_1a8b1c;
            case 0x1A8B20u: goto label_1a8b20;
            case 0x1A8B24u: goto label_1a8b24;
            case 0x1A8B28u: goto label_1a8b28;
            case 0x1A8B2Cu: goto label_1a8b2c;
            case 0x1A8B30u: goto label_1a8b30;
            case 0x1A8B34u: goto label_1a8b34;
            case 0x1A8B38u: goto label_1a8b38;
            case 0x1A8B3Cu: goto label_1a8b3c;
            case 0x1A8B40u: goto label_1a8b40;
            case 0x1A8B44u: goto label_1a8b44;
            case 0x1A8B48u: goto label_1a8b48;
            case 0x1A8B4Cu: goto label_1a8b4c;
            case 0x1A8B50u: goto label_1a8b50;
            case 0x1A8B54u: goto label_1a8b54;
            case 0x1A8B58u: goto label_1a8b58;
            case 0x1A8B5Cu: goto label_1a8b5c;
            case 0x1A8B60u: goto label_1a8b60;
            case 0x1A8B64u: goto label_1a8b64;
            case 0x1A8B68u: goto label_1a8b68;
            case 0x1A8B6Cu: goto label_1a8b6c;
            case 0x1A8B70u: goto label_1a8b70;
            case 0x1A8B74u: goto label_1a8b74;
            case 0x1A8B78u: goto label_1a8b78;
            case 0x1A8B7Cu: goto label_1a8b7c;
            case 0x1A8B80u: goto label_1a8b80;
            case 0x1A8B84u: goto label_1a8b84;
            case 0x1A8B88u: goto label_1a8b88;
            case 0x1A8B8Cu: goto label_1a8b8c;
            case 0x1A8B90u: goto label_1a8b90;
            case 0x1A8B94u: goto label_1a8b94;
            case 0x1A8B98u: goto label_1a8b98;
            case 0x1A8B9Cu: goto label_1a8b9c;
            case 0x1A8BA0u: goto label_1a8ba0;
            case 0x1A8BA4u: goto label_1a8ba4;
            case 0x1A8BA8u: goto label_1a8ba8;
            case 0x1A8BACu: goto label_1a8bac;
            case 0x1A8BB0u: goto label_1a8bb0;
            case 0x1A8BB4u: goto label_1a8bb4;
            case 0x1A8BB8u: goto label_1a8bb8;
            case 0x1A8BBCu: goto label_1a8bbc;
            case 0x1A8BC0u: goto label_1a8bc0;
            case 0x1A8BC4u: goto label_1a8bc4;
            case 0x1A8BC8u: goto label_1a8bc8;
            case 0x1A8BCCu: goto label_1a8bcc;
            case 0x1A8BD0u: goto label_1a8bd0;
            case 0x1A8BD4u: goto label_1a8bd4;
            case 0x1A8BD8u: goto label_1a8bd8;
            case 0x1A8BDCu: goto label_1a8bdc;
            case 0x1A8BE0u: goto label_1a8be0;
            case 0x1A8BE4u: goto label_1a8be4;
            case 0x1A8BE8u: goto label_1a8be8;
            case 0x1A8BECu: goto label_1a8bec;
            case 0x1A8BF0u: goto label_1a8bf0;
            case 0x1A8BF4u: goto label_1a8bf4;
            case 0x1A8BF8u: goto label_1a8bf8;
            case 0x1A8BFCu: goto label_1a8bfc;
            case 0x1A8C00u: goto label_1a8c00;
            case 0x1A8C04u: goto label_1a8c04;
            case 0x1A8C08u: goto label_1a8c08;
            case 0x1A8C0Cu: goto label_1a8c0c;
            case 0x1A8C10u: goto label_1a8c10;
            case 0x1A8C14u: goto label_1a8c14;
            case 0x1A8C18u: goto label_1a8c18;
            case 0x1A8C1Cu: goto label_1a8c1c;
            case 0x1A8C20u: goto label_1a8c20;
            case 0x1A8C24u: goto label_1a8c24;
            case 0x1A8C28u: goto label_1a8c28;
            case 0x1A8C2Cu: goto label_1a8c2c;
            case 0x1A8C30u: goto label_1a8c30;
            case 0x1A8C34u: goto label_1a8c34;
            case 0x1A8C38u: goto label_1a8c38;
            case 0x1A8C3Cu: goto label_1a8c3c;
            case 0x1A8C40u: goto label_1a8c40;
            case 0x1A8C44u: goto label_1a8c44;
            case 0x1A8C48u: goto label_1a8c48;
            case 0x1A8C4Cu: goto label_1a8c4c;
            case 0x1A8C50u: goto label_1a8c50;
            case 0x1A8C54u: goto label_1a8c54;
            case 0x1A8C58u: goto label_1a8c58;
            case 0x1A8C5Cu: goto label_1a8c5c;
            case 0x1A8C60u: goto label_1a8c60;
            case 0x1A8C64u: goto label_1a8c64;
            case 0x1A8C68u: goto label_1a8c68;
            case 0x1A8C6Cu: goto label_1a8c6c;
            case 0x1A8C70u: goto label_1a8c70;
            case 0x1A8C74u: goto label_1a8c74;
            case 0x1A8C78u: goto label_1a8c78;
            case 0x1A8C7Cu: goto label_1a8c7c;
            case 0x1A8C80u: goto label_1a8c80;
            case 0x1A8C84u: goto label_1a8c84;
            case 0x1A8C88u: goto label_1a8c88;
            case 0x1A8C8Cu: goto label_1a8c8c;
            case 0x1A8C90u: goto label_1a8c90;
            case 0x1A8C94u: goto label_1a8c94;
            case 0x1A8C98u: goto label_1a8c98;
            case 0x1A8C9Cu: goto label_1a8c9c;
            case 0x1A8CA0u: goto label_1a8ca0;
            case 0x1A8CA4u: goto label_1a8ca4;
            case 0x1A8CA8u: goto label_1a8ca8;
            case 0x1A8CACu: goto label_1a8cac;
            case 0x1A8CB0u: goto label_1a8cb0;
            case 0x1A8CB4u: goto label_1a8cb4;
            case 0x1A8CB8u: goto label_1a8cb8;
            case 0x1A8CBCu: goto label_1a8cbc;
            case 0x1A8CC0u: goto label_1a8cc0;
            case 0x1A8CC4u: goto label_1a8cc4;
            case 0x1A8CC8u: goto label_1a8cc8;
            case 0x1A8CCCu: goto label_1a8ccc;
            case 0x1A8CD0u: goto label_1a8cd0;
            case 0x1A8CD4u: goto label_1a8cd4;
            case 0x1A8CD8u: goto label_1a8cd8;
            case 0x1A8CDCu: goto label_1a8cdc;
            case 0x1A8CE0u: goto label_1a8ce0;
            case 0x1A8CE4u: goto label_1a8ce4;
            case 0x1A8CE8u: goto label_1a8ce8;
            case 0x1A8CECu: goto label_1a8cec;
            case 0x1A8CF0u: goto label_1a8cf0;
            case 0x1A8CF4u: goto label_1a8cf4;
            case 0x1A8CF8u: goto label_1a8cf8;
            case 0x1A8CFCu: goto label_1a8cfc;
            case 0x1A8D00u: goto label_1a8d00;
            case 0x1A8D04u: goto label_1a8d04;
            case 0x1A8D08u: goto label_1a8d08;
            case 0x1A8D0Cu: goto label_1a8d0c;
            case 0x1A8D10u: goto label_1a8d10;
            case 0x1A8D14u: goto label_1a8d14;
            case 0x1A8D18u: goto label_1a8d18;
            case 0x1A8D1Cu: goto label_1a8d1c;
            case 0x1A8D20u: goto label_1a8d20;
            case 0x1A8D24u: goto label_1a8d24;
            case 0x1A8D28u: goto label_1a8d28;
            case 0x1A8D2Cu: goto label_1a8d2c;
            case 0x1A8D30u: goto label_1a8d30;
            case 0x1A8D34u: goto label_1a8d34;
            case 0x1A8D38u: goto label_1a8d38;
            case 0x1A8D3Cu: goto label_1a8d3c;
            case 0x1A8D40u: goto label_1a8d40;
            case 0x1A8D44u: goto label_1a8d44;
            case 0x1A8D48u: goto label_1a8d48;
            case 0x1A8D4Cu: goto label_1a8d4c;
            case 0x1A8D50u: goto label_1a8d50;
            case 0x1A8D54u: goto label_1a8d54;
            case 0x1A8D58u: goto label_1a8d58;
            case 0x1A8D5Cu: goto label_1a8d5c;
            case 0x1A8D60u: goto label_1a8d60;
            case 0x1A8D64u: goto label_1a8d64;
            case 0x1A8D68u: goto label_1a8d68;
            case 0x1A8D6Cu: goto label_1a8d6c;
            case 0x1A8D70u: goto label_1a8d70;
            case 0x1A8D74u: goto label_1a8d74;
            case 0x1A8D78u: goto label_1a8d78;
            case 0x1A8D7Cu: goto label_1a8d7c;
            case 0x1A8D80u: goto label_1a8d80;
            case 0x1A8D84u: goto label_1a8d84;
            case 0x1A8D88u: goto label_1a8d88;
            case 0x1A8D8Cu: goto label_1a8d8c;
            case 0x1A8D90u: goto label_1a8d90;
            case 0x1A8D94u: goto label_1a8d94;
            case 0x1A8D98u: goto label_1a8d98;
            case 0x1A8D9Cu: goto label_1a8d9c;
            case 0x1A8DA0u: goto label_1a8da0;
            case 0x1A8DA4u: goto label_1a8da4;
            case 0x1A8DA8u: goto label_1a8da8;
            case 0x1A8DACu: goto label_1a8dac;
            case 0x1A8DB0u: goto label_1a8db0;
            case 0x1A8DB4u: goto label_1a8db4;
            case 0x1A8DB8u: goto label_1a8db8;
            case 0x1A8DBCu: goto label_1a8dbc;
            case 0x1A8DC0u: goto label_1a8dc0;
            case 0x1A8DC4u: goto label_1a8dc4;
            case 0x1A8DC8u: goto label_1a8dc8;
            case 0x1A8DCCu: goto label_1a8dcc;
            case 0x1A8DD0u: goto label_1a8dd0;
            case 0x1A8DD4u: goto label_1a8dd4;
            case 0x1A8DD8u: goto label_1a8dd8;
            case 0x1A8DDCu: goto label_1a8ddc;
            case 0x1A8DE0u: goto label_1a8de0;
            case 0x1A8DE4u: goto label_1a8de4;
            case 0x1A8DE8u: goto label_1a8de8;
            case 0x1A8DECu: goto label_1a8dec;
            case 0x1A8DF0u: goto label_1a8df0;
            case 0x1A8DF4u: goto label_1a8df4;
            case 0x1A8DF8u: goto label_1a8df8;
            case 0x1A8DFCu: goto label_1a8dfc;
            case 0x1A8E00u: goto label_1a8e00;
            case 0x1A8E04u: goto label_1a8e04;
            case 0x1A8E08u: goto label_1a8e08;
            case 0x1A8E0Cu: goto label_1a8e0c;
            case 0x1A8E10u: goto label_1a8e10;
            case 0x1A8E14u: goto label_1a8e14;
            case 0x1A8E18u: goto label_1a8e18;
            case 0x1A8E1Cu: goto label_1a8e1c;
            case 0x1A8E20u: goto label_1a8e20;
            case 0x1A8E24u: goto label_1a8e24;
            case 0x1A8E28u: goto label_1a8e28;
            case 0x1A8E2Cu: goto label_1a8e2c;
            case 0x1A8E30u: goto label_1a8e30;
            case 0x1A8E34u: goto label_1a8e34;
            case 0x1A8E38u: goto label_1a8e38;
            case 0x1A8E3Cu: goto label_1a8e3c;
            case 0x1A8E40u: goto label_1a8e40;
            case 0x1A8E44u: goto label_1a8e44;
            case 0x1A8E48u: goto label_1a8e48;
            case 0x1A8E4Cu: goto label_1a8e4c;
            case 0x1A8E50u: goto label_1a8e50;
            case 0x1A8E54u: goto label_1a8e54;
            case 0x1A8E58u: goto label_1a8e58;
            case 0x1A8E5Cu: goto label_1a8e5c;
            case 0x1A8E60u: goto label_1a8e60;
            case 0x1A8E64u: goto label_1a8e64;
            case 0x1A8E68u: goto label_1a8e68;
            case 0x1A8E6Cu: goto label_1a8e6c;
            case 0x1A8E70u: goto label_1a8e70;
            case 0x1A8E74u: goto label_1a8e74;
            case 0x1A8E78u: goto label_1a8e78;
            case 0x1A8E7Cu: goto label_1a8e7c;
            case 0x1A8E80u: goto label_1a8e80;
            case 0x1A8E84u: goto label_1a8e84;
            case 0x1A8E88u: goto label_1a8e88;
            case 0x1A8E8Cu: goto label_1a8e8c;
            case 0x1A8E90u: goto label_1a8e90;
            case 0x1A8E94u: goto label_1a8e94;
            case 0x1A8E98u: goto label_1a8e98;
            case 0x1A8E9Cu: goto label_1a8e9c;
            case 0x1A8EA0u: goto label_1a8ea0;
            case 0x1A8EA4u: goto label_1a8ea4;
            case 0x1A8EA8u: goto label_1a8ea8;
            case 0x1A8EACu: goto label_1a8eac;
            case 0x1A8EB0u: goto label_1a8eb0;
            case 0x1A8EB4u: goto label_1a8eb4;
            case 0x1A8EB8u: goto label_1a8eb8;
            case 0x1A8EBCu: goto label_1a8ebc;
            case 0x1A8EC0u: goto label_1a8ec0;
            case 0x1A8EC4u: goto label_1a8ec4;
            case 0x1A8EC8u: goto label_1a8ec8;
            case 0x1A8ECCu: goto label_1a8ecc;
            case 0x1A8ED0u: goto label_1a8ed0;
            case 0x1A8ED4u: goto label_1a8ed4;
            case 0x1A8ED8u: goto label_1a8ed8;
            case 0x1A8EDCu: goto label_1a8edc;
            case 0x1A8EE0u: goto label_1a8ee0;
            case 0x1A8EE4u: goto label_1a8ee4;
            case 0x1A8EE8u: goto label_1a8ee8;
            case 0x1A8EECu: goto label_1a8eec;
            case 0x1A8EF0u: goto label_1a8ef0;
            case 0x1A8EF4u: goto label_1a8ef4;
            case 0x1A8EF8u: goto label_1a8ef8;
            case 0x1A8EFCu: goto label_1a8efc;
            case 0x1A8F00u: goto label_1a8f00;
            case 0x1A8F04u: goto label_1a8f04;
            case 0x1A8F08u: goto label_1a8f08;
            case 0x1A8F0Cu: goto label_1a8f0c;
            case 0x1A8F10u: goto label_1a8f10;
            case 0x1A8F14u: goto label_1a8f14;
            case 0x1A8F18u: goto label_1a8f18;
            case 0x1A8F1Cu: goto label_1a8f1c;
            case 0x1A8F20u: goto label_1a8f20;
            case 0x1A8F24u: goto label_1a8f24;
            case 0x1A8F28u: goto label_1a8f28;
            case 0x1A8F2Cu: goto label_1a8f2c;
            case 0x1A8F30u: goto label_1a8f30;
            case 0x1A8F34u: goto label_1a8f34;
            case 0x1A8F38u: goto label_1a8f38;
            case 0x1A8F3Cu: goto label_1a8f3c;
            case 0x1A8F40u: goto label_1a8f40;
            case 0x1A8F44u: goto label_1a8f44;
            case 0x1A8F48u: goto label_1a8f48;
            case 0x1A8F4Cu: goto label_1a8f4c;
            case 0x1A8F50u: goto label_1a8f50;
            case 0x1A8F54u: goto label_1a8f54;
            case 0x1A8F58u: goto label_1a8f58;
            case 0x1A8F5Cu: goto label_1a8f5c;
            case 0x1A8F60u: goto label_1a8f60;
            case 0x1A8F64u: goto label_1a8f64;
            case 0x1A8F68u: goto label_1a8f68;
            case 0x1A8F6Cu: goto label_1a8f6c;
            case 0x1A8F70u: goto label_1a8f70;
            case 0x1A8F74u: goto label_1a8f74;
            case 0x1A8F78u: goto label_1a8f78;
            case 0x1A8F7Cu: goto label_1a8f7c;
            case 0x1A8F80u: goto label_1a8f80;
            case 0x1A8F84u: goto label_1a8f84;
            case 0x1A8F88u: goto label_1a8f88;
            case 0x1A8F8Cu: goto label_1a8f8c;
            case 0x1A8F90u: goto label_1a8f90;
            case 0x1A8F94u: goto label_1a8f94;
            case 0x1A8F98u: goto label_1a8f98;
            case 0x1A8F9Cu: goto label_1a8f9c;
            case 0x1A8FA0u: goto label_1a8fa0;
            case 0x1A8FA4u: goto label_1a8fa4;
            case 0x1A8FA8u: goto label_1a8fa8;
            case 0x1A8FACu: goto label_1a8fac;
            case 0x1A8FB0u: goto label_1a8fb0;
            case 0x1A8FB4u: goto label_1a8fb4;
            case 0x1A8FB8u: goto label_1a8fb8;
            case 0x1A8FBCu: goto label_1a8fbc;
            case 0x1A8FC0u: goto label_1a8fc0;
            case 0x1A8FC4u: goto label_1a8fc4;
            case 0x1A8FC8u: goto label_1a8fc8;
            case 0x1A8FCCu: goto label_1a8fcc;
            case 0x1A8FD0u: goto label_1a8fd0;
            case 0x1A8FD4u: goto label_1a8fd4;
            case 0x1A8FD8u: goto label_1a8fd8;
            case 0x1A8FDCu: goto label_1a8fdc;
            case 0x1A8FE0u: goto label_1a8fe0;
            case 0x1A8FE4u: goto label_1a8fe4;
            case 0x1A8FE8u: goto label_1a8fe8;
            case 0x1A8FECu: goto label_1a8fec;
            case 0x1A8FF0u: goto label_1a8ff0;
            case 0x1A8FF4u: goto label_1a8ff4;
            case 0x1A8FF8u: goto label_1a8ff8;
            case 0x1A8FFCu: goto label_1a8ffc;
            case 0x1A9000u: goto label_1a9000;
            case 0x1A9004u: goto label_1a9004;
            case 0x1A9008u: goto label_1a9008;
            case 0x1A900Cu: goto label_1a900c;
            case 0x1A9010u: goto label_1a9010;
            case 0x1A9014u: goto label_1a9014;
            case 0x1A9018u: goto label_1a9018;
            case 0x1A901Cu: goto label_1a901c;
            case 0x1A9020u: goto label_1a9020;
            case 0x1A9024u: goto label_1a9024;
            case 0x1A9028u: goto label_1a9028;
            case 0x1A902Cu: goto label_1a902c;
            case 0x1A9030u: goto label_1a9030;
            case 0x1A9034u: goto label_1a9034;
            case 0x1A9038u: goto label_1a9038;
            case 0x1A903Cu: goto label_1a903c;
            case 0x1A9040u: goto label_1a9040;
            case 0x1A9044u: goto label_1a9044;
            case 0x1A9048u: goto label_1a9048;
            case 0x1A904Cu: goto label_1a904c;
            case 0x1A9050u: goto label_1a9050;
            case 0x1A9054u: goto label_1a9054;
            case 0x1A9058u: goto label_1a9058;
            case 0x1A905Cu: goto label_1a905c;
            case 0x1A9060u: goto label_1a9060;
            case 0x1A9064u: goto label_1a9064;
            case 0x1A9068u: goto label_1a9068;
            case 0x1A906Cu: goto label_1a906c;
            case 0x1A9070u: goto label_1a9070;
            case 0x1A9074u: goto label_1a9074;
            case 0x1A9078u: goto label_1a9078;
            case 0x1A907Cu: goto label_1a907c;
            case 0x1A9080u: goto label_1a9080;
            case 0x1A9084u: goto label_1a9084;
            case 0x1A9088u: goto label_1a9088;
            case 0x1A908Cu: goto label_1a908c;
            case 0x1A9090u: goto label_1a9090;
            case 0x1A9094u: goto label_1a9094;
            case 0x1A9098u: goto label_1a9098;
            case 0x1A909Cu: goto label_1a909c;
            case 0x1A90A0u: goto label_1a90a0;
            case 0x1A90A4u: goto label_1a90a4;
            case 0x1A90A8u: goto label_1a90a8;
            case 0x1A90ACu: goto label_1a90ac;
            case 0x1A90B0u: goto label_1a90b0;
            case 0x1A90B4u: goto label_1a90b4;
            case 0x1A90B8u: goto label_1a90b8;
            case 0x1A90BCu: goto label_1a90bc;
            case 0x1A90C0u: goto label_1a90c0;
            case 0x1A90C4u: goto label_1a90c4;
            case 0x1A90C8u: goto label_1a90c8;
            case 0x1A90CCu: goto label_1a90cc;
            case 0x1A90D0u: goto label_1a90d0;
            case 0x1A90D4u: goto label_1a90d4;
            case 0x1A90D8u: goto label_1a90d8;
            case 0x1A90DCu: goto label_1a90dc;
            case 0x1A90E0u: goto label_1a90e0;
            case 0x1A90E4u: goto label_1a90e4;
            case 0x1A90E8u: goto label_1a90e8;
            case 0x1A90ECu: goto label_1a90ec;
            case 0x1A90F0u: goto label_1a90f0;
            case 0x1A90F4u: goto label_1a90f4;
            case 0x1A90F8u: goto label_1a90f8;
            case 0x1A90FCu: goto label_1a90fc;
            case 0x1A9100u: goto label_1a9100;
            case 0x1A9104u: goto label_1a9104;
            case 0x1A9108u: goto label_1a9108;
            case 0x1A910Cu: goto label_1a910c;
            case 0x1A9110u: goto label_1a9110;
            case 0x1A9114u: goto label_1a9114;
            case 0x1A9118u: goto label_1a9118;
            case 0x1A911Cu: goto label_1a911c;
            case 0x1A9120u: goto label_1a9120;
            case 0x1A9124u: goto label_1a9124;
            case 0x1A9128u: goto label_1a9128;
            case 0x1A912Cu: goto label_1a912c;
            case 0x1A9130u: goto label_1a9130;
            case 0x1A9134u: goto label_1a9134;
            case 0x1A9138u: goto label_1a9138;
            case 0x1A913Cu: goto label_1a913c;
            case 0x1A9140u: goto label_1a9140;
            case 0x1A9144u: goto label_1a9144;
            case 0x1A9148u: goto label_1a9148;
            case 0x1A914Cu: goto label_1a914c;
            case 0x1A9150u: goto label_1a9150;
            case 0x1A9154u: goto label_1a9154;
            case 0x1A9158u: goto label_1a9158;
            case 0x1A915Cu: goto label_1a915c;
            case 0x1A9160u: goto label_1a9160;
            case 0x1A9164u: goto label_1a9164;
            case 0x1A9168u: goto label_1a9168;
            case 0x1A916Cu: goto label_1a916c;
            case 0x1A9170u: goto label_1a9170;
            case 0x1A9174u: goto label_1a9174;
            case 0x1A9178u: goto label_1a9178;
            case 0x1A917Cu: goto label_1a917c;
            case 0x1A9180u: goto label_1a9180;
            case 0x1A9184u: goto label_1a9184;
            case 0x1A9188u: goto label_1a9188;
            case 0x1A918Cu: goto label_1a918c;
            case 0x1A9190u: goto label_1a9190;
            case 0x1A9194u: goto label_1a9194;
            case 0x1A9198u: goto label_1a9198;
            case 0x1A919Cu: goto label_1a919c;
            case 0x1A91A0u: goto label_1a91a0;
            case 0x1A91A4u: goto label_1a91a4;
            case 0x1A91A8u: goto label_1a91a8;
            case 0x1A91ACu: goto label_1a91ac;
            case 0x1A91B0u: goto label_1a91b0;
            case 0x1A91B4u: goto label_1a91b4;
            case 0x1A91B8u: goto label_1a91b8;
            case 0x1A91BCu: goto label_1a91bc;
            case 0x1A91C0u: goto label_1a91c0;
            case 0x1A91C4u: goto label_1a91c4;
            case 0x1A91C8u: goto label_1a91c8;
            case 0x1A91CCu: goto label_1a91cc;
            case 0x1A91D0u: goto label_1a91d0;
            case 0x1A91D4u: goto label_1a91d4;
            case 0x1A91D8u: goto label_1a91d8;
            case 0x1A91DCu: goto label_1a91dc;
            case 0x1A91E0u: goto label_1a91e0;
            case 0x1A91E4u: goto label_1a91e4;
            case 0x1A91E8u: goto label_1a91e8;
            case 0x1A91ECu: goto label_1a91ec;
            case 0x1A91F0u: goto label_1a91f0;
            case 0x1A91F4u: goto label_1a91f4;
            case 0x1A91F8u: goto label_1a91f8;
            case 0x1A91FCu: goto label_1a91fc;
            case 0x1A9200u: goto label_1a9200;
            case 0x1A9204u: goto label_1a9204;
            case 0x1A9208u: goto label_1a9208;
            case 0x1A920Cu: goto label_1a920c;
            case 0x1A9210u: goto label_1a9210;
            case 0x1A9214u: goto label_1a9214;
            case 0x1A9218u: goto label_1a9218;
            case 0x1A921Cu: goto label_1a921c;
            case 0x1A9220u: goto label_1a9220;
            case 0x1A9224u: goto label_1a9224;
            case 0x1A9228u: goto label_1a9228;
            case 0x1A922Cu: goto label_1a922c;
            case 0x1A9230u: goto label_1a9230;
            case 0x1A9234u: goto label_1a9234;
            case 0x1A9238u: goto label_1a9238;
            case 0x1A923Cu: goto label_1a923c;
            case 0x1A9240u: goto label_1a9240;
            case 0x1A9244u: goto label_1a9244;
            case 0x1A9248u: goto label_1a9248;
            case 0x1A924Cu: goto label_1a924c;
            case 0x1A9250u: goto label_1a9250;
            case 0x1A9254u: goto label_1a9254;
            case 0x1A9258u: goto label_1a9258;
            case 0x1A925Cu: goto label_1a925c;
            case 0x1A9260u: goto label_1a9260;
            case 0x1A9264u: goto label_1a9264;
            case 0x1A9268u: goto label_1a9268;
            case 0x1A926Cu: goto label_1a926c;
            case 0x1A9270u: goto label_1a9270;
            case 0x1A9274u: goto label_1a9274;
            case 0x1A9278u: goto label_1a9278;
            case 0x1A927Cu: goto label_1a927c;
            case 0x1A9280u: goto label_1a9280;
            case 0x1A9284u: goto label_1a9284;
            case 0x1A9288u: goto label_1a9288;
            case 0x1A928Cu: goto label_1a928c;
            case 0x1A9290u: goto label_1a9290;
            case 0x1A9294u: goto label_1a9294;
            case 0x1A9298u: goto label_1a9298;
            case 0x1A929Cu: goto label_1a929c;
            case 0x1A92A0u: goto label_1a92a0;
            case 0x1A92A4u: goto label_1a92a4;
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92ACu: goto label_1a92ac;
            case 0x1A92B0u: goto label_1a92b0;
            case 0x1A92B4u: goto label_1a92b4;
            case 0x1A92B8u: goto label_1a92b8;
            case 0x1A92BCu: goto label_1a92bc;
            case 0x1A92C0u: goto label_1a92c0;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92C8u: goto label_1a92c8;
            case 0x1A92CCu: goto label_1a92cc;
            case 0x1A92D0u: goto label_1a92d0;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A92D8u: goto label_1a92d8;
            case 0x1A92DCu: goto label_1a92dc;
            case 0x1A92E0u: goto label_1a92e0;
            case 0x1A92E4u: goto label_1a92e4;
            case 0x1A92E8u: goto label_1a92e8;
            case 0x1A92ECu: goto label_1a92ec;
            case 0x1A92F0u: goto label_1a92f0;
            case 0x1A92F4u: goto label_1a92f4;
            case 0x1A92F8u: goto label_1a92f8;
            case 0x1A92FCu: goto label_1a92fc;
            case 0x1A9300u: goto label_1a9300;
            case 0x1A9304u: goto label_1a9304;
            case 0x1A9308u: goto label_1a9308;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9310u: goto label_1a9310;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A9318u: goto label_1a9318;
            case 0x1A931Cu: goto label_1a931c;
            case 0x1A9320u: goto label_1a9320;
            case 0x1A9324u: goto label_1a9324;
            case 0x1A9328u: goto label_1a9328;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9330u: goto label_1a9330;
            case 0x1A9334u: goto label_1a9334;
            case 0x1A9338u: goto label_1a9338;
            case 0x1A933Cu: goto label_1a933c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9344u: goto label_1a9344;
            case 0x1A9348u: goto label_1a9348;
            case 0x1A934Cu: goto label_1a934c;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9354u: goto label_1a9354;
            case 0x1A9358u: goto label_1a9358;
            case 0x1A935Cu: goto label_1a935c;
            case 0x1A9360u: goto label_1a9360;
            case 0x1A9364u: goto label_1a9364;
            case 0x1A9368u: goto label_1a9368;
            case 0x1A936Cu: goto label_1a936c;
            case 0x1A9370u: goto label_1a9370;
            case 0x1A9374u: goto label_1a9374;
            case 0x1A9378u: goto label_1a9378;
            case 0x1A937Cu: goto label_1a937c;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A9384u: goto label_1a9384;
            case 0x1A9388u: goto label_1a9388;
            case 0x1A938Cu: goto label_1a938c;
            case 0x1A9390u: goto label_1a9390;
            case 0x1A9394u: goto label_1a9394;
            case 0x1A9398u: goto label_1a9398;
            case 0x1A939Cu: goto label_1a939c;
            case 0x1A93A0u: goto label_1a93a0;
            case 0x1A93A4u: goto label_1a93a4;
            case 0x1A93A8u: goto label_1a93a8;
            case 0x1A93ACu: goto label_1a93ac;
            case 0x1A93B0u: goto label_1a93b0;
            case 0x1A93B4u: goto label_1a93b4;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93BCu: goto label_1a93bc;
            case 0x1A93C0u: goto label_1a93c0;
            case 0x1A93C4u: goto label_1a93c4;
            case 0x1A93C8u: goto label_1a93c8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93D0u: goto label_1a93d0;
            case 0x1A93D4u: goto label_1a93d4;
            case 0x1A93D8u: goto label_1a93d8;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93E4u: goto label_1a93e4;
            case 0x1A93E8u: goto label_1a93e8;
            case 0x1A93ECu: goto label_1a93ec;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A93F4u: goto label_1a93f4;
            case 0x1A93F8u: goto label_1a93f8;
            case 0x1A93FCu: goto label_1a93fc;
            case 0x1A9400u: goto label_1a9400;
            case 0x1A9404u: goto label_1a9404;
            case 0x1A9408u: goto label_1a9408;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9410u: goto label_1a9410;
            case 0x1A9414u: goto label_1a9414;
            case 0x1A9418u: goto label_1a9418;
            case 0x1A941Cu: goto label_1a941c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9424u: goto label_1a9424;
            case 0x1A9428u: goto label_1a9428;
            case 0x1A942Cu: goto label_1a942c;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9434u: goto label_1a9434;
            case 0x1A9438u: goto label_1a9438;
            case 0x1A943Cu: goto label_1a943c;
            case 0x1A9440u: goto label_1a9440;
            case 0x1A9444u: goto label_1a9444;
            case 0x1A9448u: goto label_1a9448;
            case 0x1A944Cu: goto label_1a944c;
            case 0x1A9450u: goto label_1a9450;
            case 0x1A9454u: goto label_1a9454;
            case 0x1A9458u: goto label_1a9458;
            case 0x1A945Cu: goto label_1a945c;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A9464u: goto label_1a9464;
            case 0x1A9468u: goto label_1a9468;
            case 0x1A946Cu: goto label_1a946c;
            case 0x1A9470u: goto label_1a9470;
            case 0x1A9474u: goto label_1a9474;
            case 0x1A9478u: goto label_1a9478;
            case 0x1A947Cu: goto label_1a947c;
            case 0x1A9480u: goto label_1a9480;
            case 0x1A9484u: goto label_1a9484;
            case 0x1A9488u: goto label_1a9488;
            case 0x1A948Cu: goto label_1a948c;
            case 0x1A9490u: goto label_1a9490;
            case 0x1A9494u: goto label_1a9494;
            case 0x1A9498u: goto label_1a9498;
            case 0x1A949Cu: goto label_1a949c;
            case 0x1A94A0u: goto label_1a94a0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a949c:
    ctx->pc = 0x1A94A4u;
}
