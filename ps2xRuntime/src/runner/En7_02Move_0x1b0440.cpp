#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_02Move
// Address: 0x1b0440 - 0x1b1330
void En7_02Move_0x1b0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_02Move_0x1b0440");
#endif

    ctx->pc = 0x1b0440u;

label_1b0440:
    // 0x1b0440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b0444:
    // 0x1b0444: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b0444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b0448:
    // 0x1b0448: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b0448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b044c:
    // 0x1b044c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b044cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b0450:
    // 0x1b0450: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b0450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b0454:
    // 0x1b0454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0458:
    // 0x1b0458: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b0458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b045c:
    // 0x1b045c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1b045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0460:
    // 0x1b0460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0464:
    // 0x1b0464: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1b0464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0468:
    // 0x1b0468: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b0468u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b046c:
    // 0x1b046c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1b046cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1b0470:
    // 0x1b0470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b0470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0474:
    // 0x1b0474: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1b0474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0478:
    // 0x1b0478: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b0478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b047c:
    // 0x1b047c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b047cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b0480:
    // 0x1b0480: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1b0480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1b0484:
    // 0x1b0484: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b0484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b0488:
    // 0x1b0488: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1b0488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b048c:
    // 0x1b048c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b048cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0490:
    // 0x1b0490: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b0490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b0494:
    // 0x1b0494: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1b0494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1b0498:
    // 0x1b0498: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b0498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b049c:
    // 0x1b049c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1b049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b04a0:
    // 0x1b04a0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b04a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b04a4:
    // 0x1b04a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b04a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b04a8:
    // 0x1b04a8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1b04a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1b04ac:
    // 0x1b04ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b04acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b04b0:
    // 0x1b04b0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1b04b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b04b4:
    // 0x1b04b4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1b04b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b04b8:
    // 0x1b04b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1b04b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1b04bc:
    // 0x1b04bc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1b04bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1b04c0:
    // 0x1b04c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b04c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1b04c4:
    // 0x1b04c4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1b04c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b04c8:
    // 0x1b04c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b04c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b04cc:
    // 0x1b04cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b04d0:
    if (ctx->pc == 0x1B04D0u) {
        ctx->pc = 0x1B04D0u;
            // 0x1b04d0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1B04D4u;
        goto label_1b04d4;
    }
    ctx->pc = 0x1B04CCu;
    {
        const bool branch_taken_0x1b04cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B04D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B04CCu;
            // 0x1b04d0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04cc) {
            ctx->pc = 0x1B04F0u;
            goto label_1b04f0;
        }
    }
    ctx->pc = 0x1B04D4u;
label_1b04d4:
    // 0x1b04d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b04d8:
    // 0x1b04d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b04d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b04dc:
    // 0x1b04dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b04dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b04e0:
    // 0x1b04e0: 0x0  nop
    ctx->pc = 0x1b04e0u;
    // NOP
label_1b04e4:
    // 0x1b04e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b04e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b04e8:
    // 0x1b04e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1b04e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1b04ec:
    // 0x1b04ec: 0x0  nop
    ctx->pc = 0x1b04ecu;
    // NOP
label_1b04f0:
    // 0x1b04f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b04f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b04f4:
    // 0x1b04f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b04f8:
    // 0x1b04f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b04f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b04fc:
    // 0x1b04fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b04fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0500:
    // 0x1b0500: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1b0500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0504:
    // 0x1b0504: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0504u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0508:
    // 0x1b0508: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b050c:
    if (ctx->pc == 0x1B050Cu) {
        ctx->pc = 0x1B050Cu;
            // 0x1b050c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1B0510u;
        goto label_1b0510;
    }
    ctx->pc = 0x1B0508u;
    {
        const bool branch_taken_0x1b0508 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0508u;
            // 0x1b050c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0508) {
            ctx->pc = 0x1B0528u;
            goto label_1b0528;
        }
    }
    ctx->pc = 0x1B0510u;
label_1b0510:
    // 0x1b0510: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b0510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b0514:
    // 0x1b0514: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b0514u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b0518:
    // 0x1b0518: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0518u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b051c:
    // 0x1b051c: 0x0  nop
    ctx->pc = 0x1b051cu;
    // NOP
label_1b0520:
    // 0x1b0520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0524:
    // 0x1b0524: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b0524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b0528:
    // 0x1b0528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b052c:
    // 0x1b052c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b052cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b0530:
    // 0x1b0530: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b0530u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b0534:
    // 0x1b0534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0538:
    // 0x1b0538: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b0538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b053c:
    // 0x1b053c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b053cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0540:
    // 0x1b0540: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b0544:
    if (ctx->pc == 0x1B0544u) {
        ctx->pc = 0x1B0544u;
            // 0x1b0544: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B0548u;
        goto label_1b0548;
    }
    ctx->pc = 0x1B0540u;
    {
        const bool branch_taken_0x1b0540 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B0544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0540u;
            // 0x1b0544: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0540) {
            ctx->pc = 0x1B0560u;
            goto label_1b0560;
        }
    }
    ctx->pc = 0x1B0548u;
label_1b0548:
    // 0x1b0548: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b0548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b054c:
    // 0x1b054c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b054cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b0550:
    // 0x1b0550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0554:
    // 0x1b0554: 0x0  nop
    ctx->pc = 0x1b0554u;
    // NOP
label_1b0558:
    // 0x1b0558: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b0558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b055c:
    // 0x1b055c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b0560:
    // 0x1b0560: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b0564:
    // 0x1b0564: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b0564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b0568:
    // 0x1b0568: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b0568u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b056c:
    // 0x1b056c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b056cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0570:
    // 0x1b0570: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1b0570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0574:
    // 0x1b0574: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b0574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b0578:
    // 0x1b0578: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b057c:
    if (ctx->pc == 0x1B057Cu) {
        ctx->pc = 0x1B057Cu;
            // 0x1b057c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1B0580u;
        goto label_1b0580;
    }
    ctx->pc = 0x1B0578u;
    {
        const bool branch_taken_0x1b0578 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B057Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0578u;
            // 0x1b057c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0578) {
            ctx->pc = 0x1B0598u;
            goto label_1b0598;
        }
    }
    ctx->pc = 0x1B0580u;
label_1b0580:
    // 0x1b0580: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b0580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b0584:
    // 0x1b0584: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b0584u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b0588:
    // 0x1b0588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b058c:
    // 0x1b058c: 0x0  nop
    ctx->pc = 0x1b058cu;
    // NOP
label_1b0590:
    // 0x1b0590: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0590u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0594:
    // 0x1b0594: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b0594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b0598:
    // 0x1b0598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b0598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b059c:
    // 0x1b059c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1b059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1b05a0:
    // 0x1b05a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b05a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b05a4:
    // 0x1b05a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b05a8:
    // 0x1b05a8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b05a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b05ac:
    // 0x1b05ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b05acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b05b0:
    // 0x1b05b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b05b4:
    if (ctx->pc == 0x1B05B4u) {
        ctx->pc = 0x1B05B4u;
            // 0x1b05b4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B05B8u;
        goto label_1b05b8;
    }
    ctx->pc = 0x1B05B0u;
    {
        const bool branch_taken_0x1b05b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B05B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05B0u;
            // 0x1b05b4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05b0) {
            ctx->pc = 0x1B05D0u;
            goto label_1b05d0;
        }
    }
    ctx->pc = 0x1B05B8u;
label_1b05b8:
    // 0x1b05b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b05b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b05bc:
    // 0x1b05bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b05bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b05c0:
    // 0x1b05c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b05c4:
    // 0x1b05c4: 0x0  nop
    ctx->pc = 0x1b05c4u;
    // NOP
label_1b05c8:
    // 0x1b05c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b05c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b05cc:
    // 0x1b05cc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b05ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b05d0:
    // 0x1b05d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b05d4:
    // 0x1b05d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1b05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1b05d8:
    // 0x1b05d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b05d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b05dc:
    // 0x1b05dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b05e0:
    // 0x1b05e0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1b05e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b05e4:
    // 0x1b05e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b05e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b05e8:
    // 0x1b05e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1b05ec:
    if (ctx->pc == 0x1B05ECu) {
        ctx->pc = 0x1B05ECu;
            // 0x1b05ec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1B05F0u;
        goto label_1b05f0;
    }
    ctx->pc = 0x1B05E8u;
    {
        const bool branch_taken_0x1b05e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B05ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B05E8u;
            // 0x1b05ec: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b05e8) {
            ctx->pc = 0x1B0608u;
            goto label_1b0608;
        }
    }
    ctx->pc = 0x1B05F0u;
label_1b05f0:
    // 0x1b05f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1b05f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1b05f4:
    // 0x1b05f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1b05f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1b05f8:
    // 0x1b05f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b05f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b05fc:
    // 0x1b05fc: 0x0  nop
    ctx->pc = 0x1b05fcu;
    // NOP
label_1b0600:
    // 0x1b0600: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0600u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0604:
    // 0x1b0604: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b0604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1b0608:
    // 0x1b0608: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b0608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b060c:
    // 0x1b060c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1b060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1b0610:
    // 0x1b0610: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1b0610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b0614:
    // 0x1b0614: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1b0614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1b0618:
    // 0x1b0618: 0xc06c4cc  jal         func_1B1330
label_1b061c:
    if (ctx->pc == 0x1B061Cu) {
        ctx->pc = 0x1B061Cu;
            // 0x1b061c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1B0620u;
        goto label_1b0620;
    }
    ctx->pc = 0x1B0618u;
    SET_GPR_U32(ctx, 31, 0x1B0620u);
    ctx->pc = 0x1B061Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0618u;
            // 0x1b061c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1330u;
    if (runtime->hasFunction(0x1B1330u)) {
        auto targetFn = runtime->lookupFunction(0x1B1330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0620u; }
        if (ctx->pc != 0x1B0620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1b1330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0620u; }
        if (ctx->pc != 0x1B0620u) { return; }
    }
    ctx->pc = 0x1B0620u;
label_1b0620:
    // 0x1b0620: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b0620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0624:
    // 0x1b0624: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1b0624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1b0628:
    // 0x1b0628: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b062c:
    // 0x1b062c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1b062cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1b0630:
    // 0x1b0630: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b0630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0634:
    // 0x1b0634: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x1b0634u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1b0638:
    // 0x1b0638: 0x1020029f  beqz        $at, . + 4 + (0x29F << 2)
label_1b063c:
    if (ctx->pc == 0x1B063Cu) {
        ctx->pc = 0x1B063Cu;
            // 0x1b063c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1B0640u;
        goto label_1b0640;
    }
    ctx->pc = 0x1B0638u;
    {
        const bool branch_taken_0x1b0638 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B063Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0638u;
            // 0x1b063c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0638) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0640u;
label_1b0640:
    // 0x1b0640: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b0640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1b0644:
    // 0x1b0644: 0x24632a20  addiu       $v1, $v1, 0x2A20
    ctx->pc = 0x1b0644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10784));
label_1b0648:
    // 0x1b0648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b064c:
    // 0x1b064c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b0650:
    // 0x1b0650: 0x400008  jr          $v0
label_1b0654:
    if (ctx->pc == 0x1B0654u) {
        ctx->pc = 0x1B0658u;
        goto label_1b0658;
    }
    ctx->pc = 0x1B0650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0658u: goto label_1b0658;
            case 0x1B0818u: goto label_1b0818;
            case 0x1B0AD8u: goto label_1b0ad8;
            case 0x1B0DD8u: goto label_1b0dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0658u;
label_1b0658:
    // 0x1b0658: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b065c:
    // 0x1b065c: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
label_1b0660:
    if (ctx->pc == 0x1B0660u) {
        ctx->pc = 0x1B0664u;
        goto label_1b0664;
    }
    ctx->pc = 0x1B065Cu;
    {
        const bool branch_taken_0x1b065c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b065c) {
            ctx->pc = 0x1B0718u;
            goto label_1b0718;
        }
    }
    ctx->pc = 0x1B0664u;
label_1b0664:
    // 0x1b0664: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0668:
    // 0x1b0668: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b0668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b066c:
    // 0x1b066c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b066cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0670:
    // 0x1b0670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0674:
    // 0x1b0674: 0x0  nop
    ctx->pc = 0x1b0674u;
    // NOP
label_1b0678:
    // 0x1b0678: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1b0678u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b067c:
    // 0x1b067c: 0xc040d72  jal         func_1035C8
label_1b0680:
    if (ctx->pc == 0x1B0680u) {
        ctx->pc = 0x1B0680u;
            // 0x1b0680: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B0684u;
        goto label_1b0684;
    }
    ctx->pc = 0x1B067Cu;
    SET_GPR_U32(ctx, 31, 0x1B0684u);
    ctx->pc = 0x1B0680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B067Cu;
            // 0x1b0680: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0684u; }
        if (ctx->pc != 0x1B0684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0684u; }
        if (ctx->pc != 0x1B0684u) { return; }
    }
    ctx->pc = 0x1B0684u;
label_1b0684:
    // 0x1b0684: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1b0684u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_1b0688:
    // 0x1b0688: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1b0688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_1b068c:
    // 0x1b068c: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1b068cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
label_1b0690:
    // 0x1b0690: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1b0690u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
label_1b0694:
    // 0x1b0694: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x1b0694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
label_1b0698:
    // 0x1b0698: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b069c:
    // 0x1b069c: 0xc040078  jal         func_1001E0
label_1b06a0:
    if (ctx->pc == 0x1B06A0u) {
        ctx->pc = 0x1B06A0u;
            // 0x1b06a0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->pc = 0x1B06A4u;
        goto label_1b06a4;
    }
    ctx->pc = 0x1B069Cu;
    SET_GPR_U32(ctx, 31, 0x1B06A4u);
    ctx->pc = 0x1B06A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B069Cu;
            // 0x1b06a0: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A4u; }
        if (ctx->pc != 0x1B06A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06A4u; }
        if (ctx->pc != 0x1B06A4u) { return; }
    }
    ctx->pc = 0x1B06A4u;
label_1b06a4:
    // 0x1b06a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b06a8:
    if (ctx->pc == 0x1B06A8u) {
        ctx->pc = 0x1B06ACu;
        goto label_1b06ac;
    }
    ctx->pc = 0x1B06A4u;
    {
        const bool branch_taken_0x1b06a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b06a4) {
            ctx->pc = 0x1B06D0u;
            goto label_1b06d0;
        }
    }
    ctx->pc = 0x1B06ACu;
label_1b06ac:
    // 0x1b06ac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b06acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b06b0:
    // 0x1b06b0: 0x3c023b23  lui         $v0, 0x3B23
    ctx->pc = 0x1b06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15139 << 16));
label_1b06b4:
    // 0x1b06b4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b06b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b06b8:
    // 0x1b06b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b06b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b06bc:
    // 0x1b06bc: 0x0  nop
    ctx->pc = 0x1b06bcu;
    // NOP
label_1b06c0:
    // 0x1b06c0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b06c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b06c4:
    // 0x1b06c4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b06c8:
    if (ctx->pc == 0x1B06C8u) {
        ctx->pc = 0x1B06C8u;
            // 0x1b06c8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B06CCu;
        goto label_1b06cc;
    }
    ctx->pc = 0x1B06C4u;
    {
        const bool branch_taken_0x1b06c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B06C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B06C4u;
            // 0x1b06c8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b06c4) {
            ctx->pc = 0x1B06E0u;
            goto label_1b06e0;
        }
    }
    ctx->pc = 0x1B06CCu;
label_1b06cc:
    // 0x1b06cc: 0x0  nop
    ctx->pc = 0x1b06ccu;
    // NOP
label_1b06d0:
    // 0x1b06d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b06d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b06d4:
    // 0x1b06d4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b06d8:
    // 0x1b06d8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b06d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b06dc:
    // 0x1b06dc: 0x0  nop
    ctx->pc = 0x1b06dcu;
    // NOP
label_1b06e0:
    // 0x1b06e0: 0xc065d00  jal         func_197400
label_1b06e4:
    if (ctx->pc == 0x1B06E4u) {
        ctx->pc = 0x1B06E8u;
        goto label_1b06e8;
    }
    ctx->pc = 0x1B06E0u;
    SET_GPR_U32(ctx, 31, 0x1B06E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B06E8u; }
        if (ctx->pc != 0x1B06E8u) { return; }
    }
    ctx->pc = 0x1B06E8u;
label_1b06e8:
    // 0x1b06e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b06e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b06ec:
    // 0x1b06ec: 0x14430272  bne         $v0, $v1, . + 4 + (0x272 << 2)
label_1b06f0:
    if (ctx->pc == 0x1B06F0u) {
        ctx->pc = 0x1B06F4u;
        goto label_1b06f4;
    }
    ctx->pc = 0x1B06ECu;
    {
        const bool branch_taken_0x1b06ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b06ec) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B06F4u;
label_1b06f4:
    // 0x1b06f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b06f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b06f8:
    // 0x1b06f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b06f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b06fc:
    // 0x1b06fc: 0x1462026e  bne         $v1, $v0, . + 4 + (0x26E << 2)
label_1b0700:
    if (ctx->pc == 0x1B0700u) {
        ctx->pc = 0x1B0704u;
        goto label_1b0704;
    }
    ctx->pc = 0x1B06FCu;
    {
        const bool branch_taken_0x1b06fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b06fc) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0704u;
label_1b0704:
    // 0x1b0704: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0708:
    // 0x1b0708: 0xc06560c  jal         func_195830
label_1b070c:
    if (ctx->pc == 0x1B070Cu) {
        ctx->pc = 0x1B070Cu;
            // 0x1b070c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0710u;
        goto label_1b0710;
    }
    ctx->pc = 0x1B0708u;
    SET_GPR_U32(ctx, 31, 0x1B0710u);
    ctx->pc = 0x1B070Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0708u;
            // 0x1b070c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0710u; }
        if (ctx->pc != 0x1B0710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0710u; }
        if (ctx->pc != 0x1B0710u) { return; }
    }
    ctx->pc = 0x1B0710u;
label_1b0710:
    // 0x1b0710: 0x10000269  b           . + 4 + (0x269 << 2)
label_1b0714:
    if (ctx->pc == 0x1B0714u) {
        ctx->pc = 0x1B0718u;
        goto label_1b0718;
    }
    ctx->pc = 0x1B0710u;
    {
        const bool branch_taken_0x1b0710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0710) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0718u;
label_1b0718:
    // 0x1b0718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b071c:
    // 0x1b071c: 0x14430266  bne         $v0, $v1, . + 4 + (0x266 << 2)
label_1b0720:
    if (ctx->pc == 0x1B0720u) {
        ctx->pc = 0x1B0724u;
        goto label_1b0724;
    }
    ctx->pc = 0x1B071Cu;
    {
        const bool branch_taken_0x1b071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b071c) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0724u;
label_1b0724:
    // 0x1b0724: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b0724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0728:
    // 0x1b0728: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1b072c:
    if (ctx->pc == 0x1B072Cu) {
        ctx->pc = 0x1B0730u;
        goto label_1b0730;
    }
    ctx->pc = 0x1B0728u;
    {
        const bool branch_taken_0x1b0728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0728) {
            ctx->pc = 0x1B0740u;
            goto label_1b0740;
        }
    }
    ctx->pc = 0x1B0730u;
label_1b0730:
    // 0x1b0730: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0734:
    // 0x1b0734: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0738:
    // 0x1b0738: 0xc0655b0  jal         func_1956C0
label_1b073c:
    if (ctx->pc == 0x1B073Cu) {
        ctx->pc = 0x1B073Cu;
            // 0x1b073c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0740u;
        goto label_1b0740;
    }
    ctx->pc = 0x1B0738u;
    SET_GPR_U32(ctx, 31, 0x1B0740u);
    ctx->pc = 0x1B073Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0738u;
            // 0x1b073c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0740u; }
        if (ctx->pc != 0x1B0740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0740u; }
        if (ctx->pc != 0x1B0740u) { return; }
    }
    ctx->pc = 0x1B0740u;
label_1b0740:
    // 0x1b0740: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0744:
    // 0x1b0744: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1b0744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b0748:
    // 0x1b0748: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_1b074c:
    if (ctx->pc == 0x1B074Cu) {
        ctx->pc = 0x1B0750u;
        goto label_1b0750;
    }
    ctx->pc = 0x1B0748u;
    {
        const bool branch_taken_0x1b0748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0748) {
            ctx->pc = 0x1B07C8u;
            goto label_1b07c8;
        }
    }
    ctx->pc = 0x1B0750u;
label_1b0750:
    // 0x1b0750: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0754:
    // 0x1b0754: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b0754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b0758:
    // 0x1b0758: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b075c:
    // 0x1b075c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b075cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0760:
    // 0x1b0760: 0xc0655b0  jal         func_1956C0
label_1b0764:
    if (ctx->pc == 0x1B0764u) {
        ctx->pc = 0x1B0764u;
            // 0x1b0764: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B0768u;
        goto label_1b0768;
    }
    ctx->pc = 0x1B0760u;
    SET_GPR_U32(ctx, 31, 0x1B0768u);
    ctx->pc = 0x1B0764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0760u;
            // 0x1b0764: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0768u; }
        if (ctx->pc != 0x1B0768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0768u; }
        if (ctx->pc != 0x1B0768u) { return; }
    }
    ctx->pc = 0x1B0768u;
label_1b0768:
    // 0x1b0768: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b076c:
    // 0x1b076c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1b076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1b0770:
    // 0x1b0770: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0774:
    // 0x1b0774: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0778:
    // 0x1b0778: 0xc0655b0  jal         func_1956C0
label_1b077c:
    if (ctx->pc == 0x1B077Cu) {
        ctx->pc = 0x1B077Cu;
            // 0x1b077c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0780u;
        goto label_1b0780;
    }
    ctx->pc = 0x1B0778u;
    SET_GPR_U32(ctx, 31, 0x1B0780u);
    ctx->pc = 0x1B077Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0778u;
            // 0x1b077c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0780u; }
        if (ctx->pc != 0x1B0780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0780u; }
        if (ctx->pc != 0x1B0780u) { return; }
    }
    ctx->pc = 0x1B0780u;
label_1b0780:
    // 0x1b0780: 0xc065d00  jal         func_197400
label_1b0784:
    if (ctx->pc == 0x1B0784u) {
        ctx->pc = 0x1B0788u;
        goto label_1b0788;
    }
    ctx->pc = 0x1B0780u;
    SET_GPR_U32(ctx, 31, 0x1B0788u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0788u; }
        if (ctx->pc != 0x1B0788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0788u; }
        if (ctx->pc != 0x1B0788u) { return; }
    }
    ctx->pc = 0x1B0788u;
label_1b0788:
    // 0x1b0788: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b078c:
    // 0x1b078c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1b0790:
    if (ctx->pc == 0x1B0790u) {
        ctx->pc = 0x1B0794u;
        goto label_1b0794;
    }
    ctx->pc = 0x1B078Cu;
    {
        const bool branch_taken_0x1b078c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b078c) {
            ctx->pc = 0x1B07C8u;
            goto label_1b07c8;
        }
    }
    ctx->pc = 0x1B0794u;
label_1b0794:
    // 0x1b0794: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0798:
    // 0x1b0798: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1b0798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1b079c:
    // 0x1b079c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b079cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b07a0:
    // 0x1b07a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b07a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b07a4:
    // 0x1b07a4: 0xc0655b0  jal         func_1956C0
label_1b07a8:
    if (ctx->pc == 0x1B07A8u) {
        ctx->pc = 0x1B07A8u;
            // 0x1b07a8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B07ACu;
        goto label_1b07ac;
    }
    ctx->pc = 0x1B07A4u;
    SET_GPR_U32(ctx, 31, 0x1B07ACu);
    ctx->pc = 0x1B07A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07A4u;
            // 0x1b07a8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07ACu; }
        if (ctx->pc != 0x1B07ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07ACu; }
        if (ctx->pc != 0x1B07ACu) { return; }
    }
    ctx->pc = 0x1B07ACu;
label_1b07ac:
    // 0x1b07ac: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b07acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b07b0:
    // 0x1b07b0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1b07b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1b07b4:
    // 0x1b07b4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b07b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b07b8:
    // 0x1b07b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b07b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b07bc:
    // 0x1b07bc: 0xc0655b0  jal         func_1956C0
label_1b07c0:
    if (ctx->pc == 0x1B07C0u) {
        ctx->pc = 0x1B07C0u;
            // 0x1b07c0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B07C4u;
        goto label_1b07c4;
    }
    ctx->pc = 0x1B07BCu;
    SET_GPR_U32(ctx, 31, 0x1B07C4u);
    ctx->pc = 0x1B07C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07BCu;
            // 0x1b07c0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C4u; }
        if (ctx->pc != 0x1B07C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07C4u; }
        if (ctx->pc != 0x1B07C4u) { return; }
    }
    ctx->pc = 0x1B07C4u;
label_1b07c4:
    // 0x1b07c4: 0x0  nop
    ctx->pc = 0x1b07c4u;
    // NOP
label_1b07c8:
    // 0x1b07c8: 0xc065d00  jal         func_197400
label_1b07cc:
    if (ctx->pc == 0x1B07CCu) {
        ctx->pc = 0x1B07D0u;
        goto label_1b07d0;
    }
    ctx->pc = 0x1B07C8u;
    SET_GPR_U32(ctx, 31, 0x1B07D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07D0u; }
        if (ctx->pc != 0x1B07D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07D0u; }
        if (ctx->pc != 0x1B07D0u) { return; }
    }
    ctx->pc = 0x1B07D0u;
label_1b07d0:
    // 0x1b07d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1b07d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b07d4:
    // 0x1b07d4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1b07d8:
    if (ctx->pc == 0x1B07D8u) {
        ctx->pc = 0x1B07DCu;
        goto label_1b07dc;
    }
    ctx->pc = 0x1B07D4u;
    {
        const bool branch_taken_0x1b07d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b07d4) {
            ctx->pc = 0x1B07F8u;
            goto label_1b07f8;
        }
    }
    ctx->pc = 0x1B07DCu;
label_1b07dc:
    // 0x1b07dc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b07e0:
    // 0x1b07e0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1b07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1b07e4:
    // 0x1b07e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b07e8:
    if (ctx->pc == 0x1B07E8u) {
        ctx->pc = 0x1B07ECu;
        goto label_1b07ec;
    }
    ctx->pc = 0x1B07E4u;
    {
        const bool branch_taken_0x1b07e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b07e4) {
            ctx->pc = 0x1B07F8u;
            goto label_1b07f8;
        }
    }
    ctx->pc = 0x1B07ECu;
label_1b07ec:
    // 0x1b07ec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b07f0:
    // 0x1b07f0: 0xc06560c  jal         func_195830
label_1b07f4:
    if (ctx->pc == 0x1B07F4u) {
        ctx->pc = 0x1B07F4u;
            // 0x1b07f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B07F8u;
        goto label_1b07f8;
    }
    ctx->pc = 0x1B07F0u;
    SET_GPR_U32(ctx, 31, 0x1B07F8u);
    ctx->pc = 0x1B07F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B07F0u;
            // 0x1b07f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07F8u; }
        if (ctx->pc != 0x1B07F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B07F8u; }
        if (ctx->pc != 0x1B07F8u) { return; }
    }
    ctx->pc = 0x1B07F8u;
label_1b07f8:
    // 0x1b07f8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b07f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b07fc:
    // 0x1b07fc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b07fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0800:
    // 0x1b0800: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0800u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0804:
    // 0x1b0804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0808:
    // 0x1b0808: 0x0  nop
    ctx->pc = 0x1b0808u;
    // NOP
label_1b080c:
    // 0x1b080c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b080cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b0810:
    // 0x1b0810: 0x10000229  b           . + 4 + (0x229 << 2)
label_1b0814:
    if (ctx->pc == 0x1B0814u) {
        ctx->pc = 0x1B0814u;
            // 0x1b0814: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B0818u;
        goto label_1b0818;
    }
    ctx->pc = 0x1B0810u;
    {
        const bool branch_taken_0x1b0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0810u;
            // 0x1b0814: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0810) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0818u;
label_1b0818:
    // 0x1b0818: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b081c:
    // 0x1b081c: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_1b0820:
    if (ctx->pc == 0x1B0820u) {
        ctx->pc = 0x1B0824u;
        goto label_1b0824;
    }
    ctx->pc = 0x1B081Cu;
    {
        const bool branch_taken_0x1b081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b081c) {
            ctx->pc = 0x1B0978u;
            goto label_1b0978;
        }
    }
    ctx->pc = 0x1B0824u;
label_1b0824:
    // 0x1b0824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0828:
    // 0x1b0828: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
label_1b082c:
    if (ctx->pc == 0x1B082Cu) {
        ctx->pc = 0x1B0830u;
        goto label_1b0830;
    }
    ctx->pc = 0x1B0828u;
    {
        const bool branch_taken_0x1b0828 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0828) {
            ctx->pc = 0x1B0880u;
            goto label_1b0880;
        }
    }
    ctx->pc = 0x1B0830u;
label_1b0830:
    // 0x1b0830: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0834:
    // 0x1b0834: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b0834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b0838:
    // 0x1b0838: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0838u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b083c:
    // 0x1b083c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b083cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0840:
    // 0x1b0840: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0844:
    // 0x1b0844: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0844u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0848:
    // 0x1b0848: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b084c:
    // 0x1b084c: 0x0  nop
    ctx->pc = 0x1b084cu;
    // NOP
label_1b0850:
    // 0x1b0850: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b0850u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b0854:
    // 0x1b0854: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0858:
    // 0x1b0858: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b085c:
    // 0x1b085c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b085cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b0860:
    // 0x1b0860: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0864:
    // 0x1b0864: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0868:
    // 0x1b0868: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b086c:
    // 0x1b086c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0870:
    // 0x1b0870: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0874:
    // 0x1b0874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0878:
    // 0x1b0878: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b087c:
    if (ctx->pc == 0x1B087Cu) {
        ctx->pc = 0x1B087Cu;
            // 0x1b087c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0880u;
        goto label_1b0880;
    }
    ctx->pc = 0x1B0878u;
    {
        const bool branch_taken_0x1b0878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0878u;
            // 0x1b087c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0878) {
            ctx->pc = 0x1B08D0u;
            goto label_1b08d0;
        }
    }
    ctx->pc = 0x1B0880u;
label_1b0880:
    // 0x1b0880: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1b0880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_1b0884:
    // 0x1b0884: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0888:
    // 0x1b0888: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1b0888u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1b088c:
    // 0x1b088c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b088cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0890:
    // 0x1b0890: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0894:
    // 0x1b0894: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0894u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0898:
    // 0x1b0898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b089c:
    // 0x1b089c: 0x0  nop
    ctx->pc = 0x1b089cu;
    // NOP
label_1b08a0:
    // 0x1b08a0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b08a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b08a4:
    // 0x1b08a4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b08a8:
    // 0x1b08a8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b08ac:
    // 0x1b08ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b08acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b08b0:
    // 0x1b08b0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b08b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b08b4:
    // 0x1b08b4: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b08b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b08b8:
    // 0x1b08b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b08b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b08bc:
    // 0x1b08bc: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b08bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b08c0:
    // 0x1b08c0: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b08c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b08c4:
    // 0x1b08c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b08c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b08c8:
    // 0x1b08c8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b08c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1b08cc:
    // 0x1b08cc: 0x0  nop
    ctx->pc = 0x1b08ccu;
    // NOP
label_1b08d0:
    // 0x1b08d0: 0xc040d72  jal         func_1035C8
label_1b08d4:
    if (ctx->pc == 0x1B08D4u) {
        ctx->pc = 0x1B08D4u;
            // 0x1b08d4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B08D8u;
        goto label_1b08d8;
    }
    ctx->pc = 0x1B08D0u;
    SET_GPR_U32(ctx, 31, 0x1B08D8u);
    ctx->pc = 0x1B08D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08D0u;
            // 0x1b08d4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08D8u; }
        if (ctx->pc != 0x1B08D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08D8u; }
        if (ctx->pc != 0x1B08D8u) { return; }
    }
    ctx->pc = 0x1B08D8u;
label_1b08d8:
    // 0x1b08d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b08d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b08dc:
    // 0x1b08dc: 0xc040078  jal         func_1001E0
label_1b08e0:
    if (ctx->pc == 0x1B08E0u) {
        ctx->pc = 0x1B08E0u;
            // 0x1b08e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B08E4u;
        goto label_1b08e4;
    }
    ctx->pc = 0x1B08DCu;
    SET_GPR_U32(ctx, 31, 0x1B08E4u);
    ctx->pc = 0x1B08E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B08DCu;
            // 0x1b08e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08E4u; }
        if (ctx->pc != 0x1B08E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B08E4u; }
        if (ctx->pc != 0x1B08E4u) { return; }
    }
    ctx->pc = 0x1B08E4u;
label_1b08e4:
    // 0x1b08e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b08e8:
    if (ctx->pc == 0x1B08E8u) {
        ctx->pc = 0x1B08ECu;
        goto label_1b08ec;
    }
    ctx->pc = 0x1B08E4u;
    {
        const bool branch_taken_0x1b08e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b08e4) {
            ctx->pc = 0x1B0910u;
            goto label_1b0910;
        }
    }
    ctx->pc = 0x1B08ECu;
label_1b08ec:
    // 0x1b08ec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b08ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b08f0:
    // 0x1b08f0: 0x3c023b23  lui         $v0, 0x3B23
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15139 << 16));
label_1b08f4:
    // 0x1b08f4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b08f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b08f8:
    // 0x1b08f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b08f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b08fc:
    // 0x1b08fc: 0x0  nop
    ctx->pc = 0x1b08fcu;
    // NOP
label_1b0900:
    // 0x1b0900: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0900u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0904:
    // 0x1b0904: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0908:
    if (ctx->pc == 0x1B0908u) {
        ctx->pc = 0x1B0908u;
            // 0x1b0908: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B090Cu;
        goto label_1b090c;
    }
    ctx->pc = 0x1B0904u;
    {
        const bool branch_taken_0x1b0904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0904u;
            // 0x1b0908: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0904) {
            ctx->pc = 0x1B0920u;
            goto label_1b0920;
        }
    }
    ctx->pc = 0x1B090Cu;
label_1b090c:
    // 0x1b090c: 0x0  nop
    ctx->pc = 0x1b090cu;
    // NOP
label_1b0910:
    // 0x1b0910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0914:
    // 0x1b0914: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b0918:
    // 0x1b0918: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b0918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b091c:
    // 0x1b091c: 0x0  nop
    ctx->pc = 0x1b091cu;
    // NOP
label_1b0920:
    // 0x1b0920: 0xc065d00  jal         func_197400
label_1b0924:
    if (ctx->pc == 0x1B0924u) {
        ctx->pc = 0x1B0928u;
        goto label_1b0928;
    }
    ctx->pc = 0x1B0920u;
    SET_GPR_U32(ctx, 31, 0x1B0928u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0928u; }
        if (ctx->pc != 0x1B0928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0928u; }
        if (ctx->pc != 0x1B0928u) { return; }
    }
    ctx->pc = 0x1B0928u;
label_1b0928:
    // 0x1b0928: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b092c:
    // 0x1b092c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1b0930:
    if (ctx->pc == 0x1B0930u) {
        ctx->pc = 0x1B0934u;
        goto label_1b0934;
    }
    ctx->pc = 0x1B092Cu;
    {
        const bool branch_taken_0x1b092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b092c) {
            ctx->pc = 0x1B0950u;
            goto label_1b0950;
        }
    }
    ctx->pc = 0x1B0934u;
label_1b0934:
    // 0x1b0934: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0938:
    // 0x1b0938: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b0938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b093c:
    // 0x1b093c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b0940:
    if (ctx->pc == 0x1B0940u) {
        ctx->pc = 0x1B0944u;
        goto label_1b0944;
    }
    ctx->pc = 0x1B093Cu;
    {
        const bool branch_taken_0x1b093c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b093c) {
            ctx->pc = 0x1B0950u;
            goto label_1b0950;
        }
    }
    ctx->pc = 0x1B0944u;
label_1b0944:
    // 0x1b0944: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0948:
    // 0x1b0948: 0xc06560c  jal         func_195830
label_1b094c:
    if (ctx->pc == 0x1B094Cu) {
        ctx->pc = 0x1B094Cu;
            // 0x1b094c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0950u;
        goto label_1b0950;
    }
    ctx->pc = 0x1B0948u;
    SET_GPR_U32(ctx, 31, 0x1B0950u);
    ctx->pc = 0x1B094Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0948u;
            // 0x1b094c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0950u; }
        if (ctx->pc != 0x1B0950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0950u; }
        if (ctx->pc != 0x1B0950u) { return; }
    }
    ctx->pc = 0x1B0950u;
label_1b0950:
    // 0x1b0950: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0954:
    // 0x1b0954: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b0954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b0958:
    // 0x1b0958: 0x146201d7  bne         $v1, $v0, . + 4 + (0x1D7 << 2)
label_1b095c:
    if (ctx->pc == 0x1B095Cu) {
        ctx->pc = 0x1B0960u;
        goto label_1b0960;
    }
    ctx->pc = 0x1B0958u;
    {
        const bool branch_taken_0x1b0958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0958) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0960u;
label_1b0960:
    // 0x1b0960: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0964:
    // 0x1b0964: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0968:
    // 0x1b0968: 0xc0655b0  jal         func_1956C0
label_1b096c:
    if (ctx->pc == 0x1B096Cu) {
        ctx->pc = 0x1B096Cu;
            // 0x1b096c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0970u;
        goto label_1b0970;
    }
    ctx->pc = 0x1B0968u;
    SET_GPR_U32(ctx, 31, 0x1B0970u);
    ctx->pc = 0x1B096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0968u;
            // 0x1b096c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0970u; }
        if (ctx->pc != 0x1B0970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0970u; }
        if (ctx->pc != 0x1B0970u) { return; }
    }
    ctx->pc = 0x1B0970u;
label_1b0970:
    // 0x1b0970: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_1b0974:
    if (ctx->pc == 0x1B0974u) {
        ctx->pc = 0x1B0978u;
        goto label_1b0978;
    }
    ctx->pc = 0x1B0970u;
    {
        const bool branch_taken_0x1b0970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0970) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0978u;
label_1b0978:
    // 0x1b0978: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b097c:
    // 0x1b097c: 0x144301ce  bne         $v0, $v1, . + 4 + (0x1CE << 2)
label_1b0980:
    if (ctx->pc == 0x1B0980u) {
        ctx->pc = 0x1B0984u;
        goto label_1b0984;
    }
    ctx->pc = 0x1B097Cu;
    {
        const bool branch_taken_0x1b097c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b097c) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0984u;
label_1b0984:
    // 0x1b0984: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0988:
    // 0x1b0988: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1b098c:
    if (ctx->pc == 0x1B098Cu) {
        ctx->pc = 0x1B0990u;
        goto label_1b0990;
    }
    ctx->pc = 0x1B0988u;
    {
        const bool branch_taken_0x1b0988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0988) {
            ctx->pc = 0x1B0A08u;
            goto label_1b0a08;
        }
    }
    ctx->pc = 0x1B0990u;
label_1b0990:
    // 0x1b0990: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0994:
    // 0x1b0994: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b0994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b0998:
    // 0x1b0998: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b099c:
    // 0x1b099c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b099cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b09a0:
    // 0x1b09a0: 0xc0655b0  jal         func_1956C0
label_1b09a4:
    if (ctx->pc == 0x1B09A4u) {
        ctx->pc = 0x1B09A4u;
            // 0x1b09a4: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B09A8u;
        goto label_1b09a8;
    }
    ctx->pc = 0x1B09A0u;
    SET_GPR_U32(ctx, 31, 0x1B09A8u);
    ctx->pc = 0x1B09A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09A0u;
            // 0x1b09a4: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09A8u; }
        if (ctx->pc != 0x1B09A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09A8u; }
        if (ctx->pc != 0x1B09A8u) { return; }
    }
    ctx->pc = 0x1B09A8u;
label_1b09a8:
    // 0x1b09a8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b09ac:
    // 0x1b09ac: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1b09b0:
    // 0x1b09b0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b09b4:
    // 0x1b09b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b09b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b09b8:
    // 0x1b09b8: 0xc0655b0  jal         func_1956C0
label_1b09bc:
    if (ctx->pc == 0x1B09BCu) {
        ctx->pc = 0x1B09BCu;
            // 0x1b09bc: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B09C0u;
        goto label_1b09c0;
    }
    ctx->pc = 0x1B09B8u;
    SET_GPR_U32(ctx, 31, 0x1B09C0u);
    ctx->pc = 0x1B09BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09B8u;
            // 0x1b09bc: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09C0u; }
        if (ctx->pc != 0x1B09C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09C0u; }
        if (ctx->pc != 0x1B09C0u) { return; }
    }
    ctx->pc = 0x1B09C0u;
label_1b09c0:
    // 0x1b09c0: 0xc065d00  jal         func_197400
label_1b09c4:
    if (ctx->pc == 0x1B09C4u) {
        ctx->pc = 0x1B09C8u;
        goto label_1b09c8;
    }
    ctx->pc = 0x1B09C0u;
    SET_GPR_U32(ctx, 31, 0x1B09C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09C8u; }
        if (ctx->pc != 0x1B09C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09C8u; }
        if (ctx->pc != 0x1B09C8u) { return; }
    }
    ctx->pc = 0x1B09C8u;
label_1b09c8:
    // 0x1b09c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b09cc:
    // 0x1b09cc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1b09d0:
    if (ctx->pc == 0x1B09D0u) {
        ctx->pc = 0x1B09D4u;
        goto label_1b09d4;
    }
    ctx->pc = 0x1B09CCu;
    {
        const bool branch_taken_0x1b09cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b09cc) {
            ctx->pc = 0x1B0A08u;
            goto label_1b0a08;
        }
    }
    ctx->pc = 0x1B09D4u;
label_1b09d4:
    // 0x1b09d4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b09d8:
    // 0x1b09d8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1b09dc:
    // 0x1b09dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b09dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b09e0:
    // 0x1b09e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b09e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b09e4:
    // 0x1b09e4: 0xc0655b0  jal         func_1956C0
label_1b09e8:
    if (ctx->pc == 0x1B09E8u) {
        ctx->pc = 0x1B09E8u;
            // 0x1b09e8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B09ECu;
        goto label_1b09ec;
    }
    ctx->pc = 0x1B09E4u;
    SET_GPR_U32(ctx, 31, 0x1B09ECu);
    ctx->pc = 0x1B09E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09E4u;
            // 0x1b09e8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09ECu; }
        if (ctx->pc != 0x1B09ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B09ECu; }
        if (ctx->pc != 0x1B09ECu) { return; }
    }
    ctx->pc = 0x1B09ECu;
label_1b09ec:
    // 0x1b09ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b09f0:
    // 0x1b09f0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1b09f4:
    // 0x1b09f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b09f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b09f8:
    // 0x1b09f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b09f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b09fc:
    // 0x1b09fc: 0xc0655b0  jal         func_1956C0
label_1b0a00:
    if (ctx->pc == 0x1B0A00u) {
        ctx->pc = 0x1B0A00u;
            // 0x1b0a00: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0A04u;
        goto label_1b0a04;
    }
    ctx->pc = 0x1B09FCu;
    SET_GPR_U32(ctx, 31, 0x1B0A04u);
    ctx->pc = 0x1B0A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B09FCu;
            // 0x1b0a00: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A04u; }
        if (ctx->pc != 0x1B0A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0A04u; }
        if (ctx->pc != 0x1B0A04u) { return; }
    }
    ctx->pc = 0x1B0A04u;
label_1b0a04:
    // 0x1b0a04: 0x0  nop
    ctx->pc = 0x1b0a04u;
    // NOP
label_1b0a08:
    // 0x1b0a08: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b0a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0a0c:
    // 0x1b0a0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0a10:
    // 0x1b0a10: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
label_1b0a14:
    if (ctx->pc == 0x1B0A14u) {
        ctx->pc = 0x1B0A18u;
        goto label_1b0a18;
    }
    ctx->pc = 0x1B0A10u;
    {
        const bool branch_taken_0x1b0a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0a10) {
            ctx->pc = 0x1B0A78u;
            goto label_1b0a78;
        }
    }
    ctx->pc = 0x1B0A18u;
label_1b0a18:
    // 0x1b0a18: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b0a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0a1c:
    // 0x1b0a1c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b0a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1b0a20:
    // 0x1b0a20: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0a20u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0a24:
    // 0x1b0a24: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b0a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0a28:
    // 0x1b0a28: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b0a2c:
    // 0x1b0a2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0a2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0a30:
    // 0x1b0a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0a34:
    // 0x1b0a34: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b0a34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1b0a38:
    // 0x1b0a38: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_1b0a3c:
    // 0x1b0a3c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b0a3cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b0a40:
    // 0x1b0a40: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0a44:
    // 0x1b0a44: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0a48:
    // 0x1b0a48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0a4c:
    // 0x1b0a4c: 0x0  nop
    ctx->pc = 0x1b0a4cu;
    // NOP
label_1b0a50:
    // 0x1b0a50: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b0a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b0a54:
    // 0x1b0a54: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0a58:
    // 0x1b0a58: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0a5c:
    // 0x1b0a5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0a5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b0a60:
    // 0x1b0a60: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0a64:
    // 0x1b0a64: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0a68:
    // 0x1b0a68: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0a68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b0a6c:
    // 0x1b0a6c: 0x10000192  b           . + 4 + (0x192 << 2)
label_1b0a70:
    if (ctx->pc == 0x1B0A70u) {
        ctx->pc = 0x1B0A70u;
            // 0x1b0a70: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0A74u;
        goto label_1b0a74;
    }
    ctx->pc = 0x1B0A6Cu;
    {
        const bool branch_taken_0x1b0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0A6Cu;
            // 0x1b0a70: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0a6c) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0A74u;
label_1b0a74:
    // 0x1b0a74: 0x0  nop
    ctx->pc = 0x1b0a74u;
    // NOP
label_1b0a78:
    // 0x1b0a78: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1b0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_1b0a7c:
    // 0x1b0a7c: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b0a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0a80:
    // 0x1b0a80: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x1b0a80u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1b0a84:
    // 0x1b0a84: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b0a84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0a88:
    // 0x1b0a88: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b0a8c:
    // 0x1b0a8c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0a8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0a90:
    // 0x1b0a90: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1b0a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_1b0a94:
    // 0x1b0a94: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b0a94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b0a98:
    // 0x1b0a98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0a98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0a9c:
    // 0x1b0a9c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1b0a9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b0aa0:
    // 0x1b0aa0: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0aa4:
    // 0x1b0aa4: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0aa8:
    // 0x1b0aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0aac:
    // 0x1b0aac: 0x0  nop
    ctx->pc = 0x1b0aacu;
    // NOP
label_1b0ab0:
    // 0x1b0ab0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1b0ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b0ab4:
    // 0x1b0ab4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0ab8:
    // 0x1b0ab8: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0abc:
    // 0x1b0abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0ac0:
    // 0x1b0ac0: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0ac4:
    // 0x1b0ac4: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0ac8:
    // 0x1b0ac8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0acc:
    // 0x1b0acc: 0x1000017a  b           . + 4 + (0x17A << 2)
label_1b0ad0:
    if (ctx->pc == 0x1B0AD0u) {
        ctx->pc = 0x1B0AD0u;
            // 0x1b0ad0: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0AD4u;
        goto label_1b0ad4;
    }
    ctx->pc = 0x1B0ACCu;
    {
        const bool branch_taken_0x1b0acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ACCu;
            // 0x1b0ad0: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0acc) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0AD4u;
label_1b0ad4:
    // 0x1b0ad4: 0x0  nop
    ctx->pc = 0x1b0ad4u;
    // NOP
label_1b0ad8:
    // 0x1b0ad8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b0adc:
    // 0x1b0adc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_1b0ae0:
    if (ctx->pc == 0x1B0AE0u) {
        ctx->pc = 0x1B0AE4u;
        goto label_1b0ae4;
    }
    ctx->pc = 0x1B0ADCu;
    {
        const bool branch_taken_0x1b0adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0adc) {
            ctx->pc = 0x1B0C38u;
            goto label_1b0c38;
        }
    }
    ctx->pc = 0x1B0AE4u;
label_1b0ae4:
    // 0x1b0ae4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0ae8:
    // 0x1b0ae8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
label_1b0aec:
    if (ctx->pc == 0x1B0AECu) {
        ctx->pc = 0x1B0AF0u;
        goto label_1b0af0;
    }
    ctx->pc = 0x1B0AE8u;
    {
        const bool branch_taken_0x1b0ae8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0ae8) {
            ctx->pc = 0x1B0B40u;
            goto label_1b0b40;
        }
    }
    ctx->pc = 0x1B0AF0u;
label_1b0af0:
    // 0x1b0af0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0af4:
    // 0x1b0af4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b0af8:
    // 0x1b0af8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0af8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0afc:
    // 0x1b0afc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b0afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0b00:
    // 0x1b0b00: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0b04:
    // 0x1b0b04: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0b04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0b08:
    // 0x1b0b08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0b0c:
    // 0x1b0b0c: 0x0  nop
    ctx->pc = 0x1b0b0cu;
    // NOP
label_1b0b10:
    // 0x1b0b10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b0b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b0b14:
    // 0x1b0b14: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0b18:
    // 0x1b0b18: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b1c:
    // 0x1b0b1c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b0b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b0b20:
    // 0x1b0b20: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0b24:
    // 0x1b0b24: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b28:
    // 0x1b0b28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b0b2c:
    // 0x1b0b2c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0b30:
    // 0x1b0b30: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b34:
    // 0x1b0b34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b0b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1b0b38:
    // 0x1b0b38: 0x10000015  b           . + 4 + (0x15 << 2)
label_1b0b3c:
    if (ctx->pc == 0x1B0B3Cu) {
        ctx->pc = 0x1B0B3Cu;
            // 0x1b0b3c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0B40u;
        goto label_1b0b40;
    }
    ctx->pc = 0x1B0B38u;
    {
        const bool branch_taken_0x1b0b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B38u;
            // 0x1b0b3c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b38) {
            ctx->pc = 0x1B0B90u;
            goto label_1b0b90;
        }
    }
    ctx->pc = 0x1B0B40u;
label_1b0b40:
    // 0x1b0b40: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1b0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_1b0b44:
    // 0x1b0b44: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b48:
    // 0x1b0b48: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1b0b48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1b0b4c:
    // 0x1b0b4c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b0b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0b50:
    // 0x1b0b50: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0b54:
    // 0x1b0b54: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0b54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0b58:
    // 0x1b0b58: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0b5c:
    // 0x1b0b5c: 0x0  nop
    ctx->pc = 0x1b0b5cu;
    // NOP
label_1b0b60:
    // 0x1b0b60: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1b0b60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1b0b64:
    // 0x1b0b64: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b0b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0b68:
    // 0x1b0b68: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b6c:
    // 0x1b0b6c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1b0b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1b0b70:
    // 0x1b0b70: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0b74:
    // 0x1b0b74: 0xc60000e8  lwc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b78:
    // 0x1b0b78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0b7c:
    // 0x1b0b7c: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1b0b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0b80:
    // 0x1b0b80: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0b84:
    // 0x1b0b84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b0b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1b0b88:
    // 0x1b0b88: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1b0b8c:
    // 0x1b0b8c: 0x0  nop
    ctx->pc = 0x1b0b8cu;
    // NOP
label_1b0b90:
    // 0x1b0b90: 0xc040d72  jal         func_1035C8
label_1b0b94:
    if (ctx->pc == 0x1B0B94u) {
        ctx->pc = 0x1B0B94u;
            // 0x1b0b94: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B0B98u;
        goto label_1b0b98;
    }
    ctx->pc = 0x1B0B90u;
    SET_GPR_U32(ctx, 31, 0x1B0B98u);
    ctx->pc = 0x1B0B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B90u;
            // 0x1b0b94: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B98u; }
        if (ctx->pc != 0x1B0B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B98u; }
        if (ctx->pc != 0x1B0B98u) { return; }
    }
    ctx->pc = 0x1B0B98u;
label_1b0b98:
    // 0x1b0b98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b9c:
    // 0x1b0b9c: 0xc040078  jal         func_1001E0
label_1b0ba0:
    if (ctx->pc == 0x1B0BA0u) {
        ctx->pc = 0x1B0BA0u;
            // 0x1b0ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BA4u;
        goto label_1b0ba4;
    }
    ctx->pc = 0x1B0B9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0BA4u);
    ctx->pc = 0x1B0BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B9Cu;
            // 0x1b0ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA4u; }
        if (ctx->pc != 0x1B0BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA4u; }
        if (ctx->pc != 0x1B0BA4u) { return; }
    }
    ctx->pc = 0x1B0BA4u;
label_1b0ba4:
    // 0x1b0ba4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b0ba8:
    if (ctx->pc == 0x1B0BA8u) {
        ctx->pc = 0x1B0BACu;
        goto label_1b0bac;
    }
    ctx->pc = 0x1B0BA4u;
    {
        const bool branch_taken_0x1b0ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ba4) {
            ctx->pc = 0x1B0BD0u;
            goto label_1b0bd0;
        }
    }
    ctx->pc = 0x1B0BACu;
label_1b0bac:
    // 0x1b0bac: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b0bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0bb0:
    // 0x1b0bb0: 0x3c023b23  lui         $v0, 0x3B23
    ctx->pc = 0x1b0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15139 << 16));
label_1b0bb4:
    // 0x1b0bb4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0bb4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0bb8:
    // 0x1b0bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0bbc:
    // 0x1b0bbc: 0x0  nop
    ctx->pc = 0x1b0bbcu;
    // NOP
label_1b0bc0:
    // 0x1b0bc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0bc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0bc4:
    // 0x1b0bc4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0bc8:
    if (ctx->pc == 0x1B0BC8u) {
        ctx->pc = 0x1B0BC8u;
            // 0x1b0bc8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B0BCCu;
        goto label_1b0bcc;
    }
    ctx->pc = 0x1B0BC4u;
    {
        const bool branch_taken_0x1b0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BC4u;
            // 0x1b0bc8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bc4) {
            ctx->pc = 0x1B0BE0u;
            goto label_1b0be0;
        }
    }
    ctx->pc = 0x1B0BCCu;
label_1b0bcc:
    // 0x1b0bcc: 0x0  nop
    ctx->pc = 0x1b0bccu;
    // NOP
label_1b0bd0:
    // 0x1b0bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0bd4:
    // 0x1b0bd4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b0bd8:
    // 0x1b0bd8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b0bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b0bdc:
    // 0x1b0bdc: 0x0  nop
    ctx->pc = 0x1b0bdcu;
    // NOP
label_1b0be0:
    // 0x1b0be0: 0xc065d00  jal         func_197400
label_1b0be4:
    if (ctx->pc == 0x1B0BE4u) {
        ctx->pc = 0x1B0BE8u;
        goto label_1b0be8;
    }
    ctx->pc = 0x1B0BE0u;
    SET_GPR_U32(ctx, 31, 0x1B0BE8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BE8u; }
        if (ctx->pc != 0x1B0BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BE8u; }
        if (ctx->pc != 0x1B0BE8u) { return; }
    }
    ctx->pc = 0x1B0BE8u;
label_1b0be8:
    // 0x1b0be8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0bec:
    // 0x1b0bec: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1b0bf0:
    if (ctx->pc == 0x1B0BF0u) {
        ctx->pc = 0x1B0BF4u;
        goto label_1b0bf4;
    }
    ctx->pc = 0x1B0BECu;
    {
        const bool branch_taken_0x1b0bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0bec) {
            ctx->pc = 0x1B0C10u;
            goto label_1b0c10;
        }
    }
    ctx->pc = 0x1B0BF4u;
label_1b0bf4:
    // 0x1b0bf4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0bf8:
    // 0x1b0bf8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b0bfc:
    // 0x1b0bfc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b0c00:
    if (ctx->pc == 0x1B0C00u) {
        ctx->pc = 0x1B0C04u;
        goto label_1b0c04;
    }
    ctx->pc = 0x1B0BFCu;
    {
        const bool branch_taken_0x1b0bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0bfc) {
            ctx->pc = 0x1B0C10u;
            goto label_1b0c10;
        }
    }
    ctx->pc = 0x1B0C04u;
label_1b0c04:
    // 0x1b0c04: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0c08:
    // 0x1b0c08: 0xc06560c  jal         func_195830
label_1b0c0c:
    if (ctx->pc == 0x1B0C0Cu) {
        ctx->pc = 0x1B0C0Cu;
            // 0x1b0c0c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0C10u;
        goto label_1b0c10;
    }
    ctx->pc = 0x1B0C08u;
    SET_GPR_U32(ctx, 31, 0x1B0C10u);
    ctx->pc = 0x1B0C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C08u;
            // 0x1b0c0c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C10u; }
        if (ctx->pc != 0x1B0C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C10u; }
        if (ctx->pc != 0x1B0C10u) { return; }
    }
    ctx->pc = 0x1B0C10u;
label_1b0c10:
    // 0x1b0c10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0c14:
    // 0x1b0c14: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b0c18:
    // 0x1b0c18: 0x14620127  bne         $v1, $v0, . + 4 + (0x127 << 2)
label_1b0c1c:
    if (ctx->pc == 0x1B0C1Cu) {
        ctx->pc = 0x1B0C20u;
        goto label_1b0c20;
    }
    ctx->pc = 0x1B0C18u;
    {
        const bool branch_taken_0x1b0c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0c18) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0C20u;
label_1b0c20:
    // 0x1b0c20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0c24:
    // 0x1b0c24: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0c28:
    // 0x1b0c28: 0xc0655b0  jal         func_1956C0
label_1b0c2c:
    if (ctx->pc == 0x1B0C2Cu) {
        ctx->pc = 0x1B0C2Cu;
            // 0x1b0c2c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0C30u;
        goto label_1b0c30;
    }
    ctx->pc = 0x1B0C28u;
    SET_GPR_U32(ctx, 31, 0x1B0C30u);
    ctx->pc = 0x1B0C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C28u;
            // 0x1b0c2c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C30u; }
        if (ctx->pc != 0x1B0C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C30u; }
        if (ctx->pc != 0x1B0C30u) { return; }
    }
    ctx->pc = 0x1B0C30u;
label_1b0c30:
    // 0x1b0c30: 0x10000121  b           . + 4 + (0x121 << 2)
label_1b0c34:
    if (ctx->pc == 0x1B0C34u) {
        ctx->pc = 0x1B0C38u;
        goto label_1b0c38;
    }
    ctx->pc = 0x1B0C30u;
    {
        const bool branch_taken_0x1b0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c30) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0C38u;
label_1b0c38:
    // 0x1b0c38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0c3c:
    // 0x1b0c3c: 0x1443011e  bne         $v0, $v1, . + 4 + (0x11E << 2)
label_1b0c40:
    if (ctx->pc == 0x1B0C40u) {
        ctx->pc = 0x1B0C44u;
        goto label_1b0c44;
    }
    ctx->pc = 0x1B0C3Cu;
    {
        const bool branch_taken_0x1b0c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0c3c) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0C44u;
label_1b0c44:
    // 0x1b0c44: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0c48:
    // 0x1b0c48: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1b0c4c:
    if (ctx->pc == 0x1B0C4Cu) {
        ctx->pc = 0x1B0C50u;
        goto label_1b0c50;
    }
    ctx->pc = 0x1B0C48u;
    {
        const bool branch_taken_0x1b0c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0c48) {
            ctx->pc = 0x1B0CC8u;
            goto label_1b0cc8;
        }
    }
    ctx->pc = 0x1B0C50u;
label_1b0c50:
    // 0x1b0c50: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0c54:
    // 0x1b0c54: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b0c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b0c58:
    // 0x1b0c58: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0c5c:
    // 0x1b0c5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0c60:
    // 0x1b0c60: 0xc0655b0  jal         func_1956C0
label_1b0c64:
    if (ctx->pc == 0x1B0C64u) {
        ctx->pc = 0x1B0C64u;
            // 0x1b0c64: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B0C68u;
        goto label_1b0c68;
    }
    ctx->pc = 0x1B0C60u;
    SET_GPR_U32(ctx, 31, 0x1B0C68u);
    ctx->pc = 0x1B0C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C60u;
            // 0x1b0c64: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C68u; }
        if (ctx->pc != 0x1B0C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C68u; }
        if (ctx->pc != 0x1B0C68u) { return; }
    }
    ctx->pc = 0x1B0C68u;
label_1b0c68:
    // 0x1b0c68: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0c6c:
    // 0x1b0c6c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1b0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1b0c70:
    // 0x1b0c70: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0c74:
    // 0x1b0c74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0c78:
    // 0x1b0c78: 0xc0655b0  jal         func_1956C0
label_1b0c7c:
    if (ctx->pc == 0x1B0C7Cu) {
        ctx->pc = 0x1B0C7Cu;
            // 0x1b0c7c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0C80u;
        goto label_1b0c80;
    }
    ctx->pc = 0x1B0C78u;
    SET_GPR_U32(ctx, 31, 0x1B0C80u);
    ctx->pc = 0x1B0C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C78u;
            // 0x1b0c7c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C80u; }
        if (ctx->pc != 0x1B0C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C80u; }
        if (ctx->pc != 0x1B0C80u) { return; }
    }
    ctx->pc = 0x1B0C80u;
label_1b0c80:
    // 0x1b0c80: 0xc065d00  jal         func_197400
label_1b0c84:
    if (ctx->pc == 0x1B0C84u) {
        ctx->pc = 0x1B0C88u;
        goto label_1b0c88;
    }
    ctx->pc = 0x1B0C80u;
    SET_GPR_U32(ctx, 31, 0x1B0C88u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C88u; }
        if (ctx->pc != 0x1B0C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C88u; }
        if (ctx->pc != 0x1B0C88u) { return; }
    }
    ctx->pc = 0x1B0C88u;
label_1b0c88:
    // 0x1b0c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0c8c:
    // 0x1b0c8c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1b0c90:
    if (ctx->pc == 0x1B0C90u) {
        ctx->pc = 0x1B0C94u;
        goto label_1b0c94;
    }
    ctx->pc = 0x1B0C8Cu;
    {
        const bool branch_taken_0x1b0c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0c8c) {
            ctx->pc = 0x1B0CC8u;
            goto label_1b0cc8;
        }
    }
    ctx->pc = 0x1B0C94u;
label_1b0c94:
    // 0x1b0c94: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0c98:
    // 0x1b0c98: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1b0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1b0c9c:
    // 0x1b0c9c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0ca0:
    // 0x1b0ca0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0ca4:
    // 0x1b0ca4: 0xc0655b0  jal         func_1956C0
label_1b0ca8:
    if (ctx->pc == 0x1B0CA8u) {
        ctx->pc = 0x1B0CA8u;
            // 0x1b0ca8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B0CACu;
        goto label_1b0cac;
    }
    ctx->pc = 0x1B0CA4u;
    SET_GPR_U32(ctx, 31, 0x1B0CACu);
    ctx->pc = 0x1B0CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CA4u;
            // 0x1b0ca8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CACu; }
        if (ctx->pc != 0x1B0CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CACu; }
        if (ctx->pc != 0x1B0CACu) { return; }
    }
    ctx->pc = 0x1B0CACu;
label_1b0cac:
    // 0x1b0cac: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0cb0:
    // 0x1b0cb0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1b0cb4:
    // 0x1b0cb4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0cb8:
    // 0x1b0cb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0cbc:
    // 0x1b0cbc: 0xc0655b0  jal         func_1956C0
label_1b0cc0:
    if (ctx->pc == 0x1B0CC0u) {
        ctx->pc = 0x1B0CC0u;
            // 0x1b0cc0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0CC4u;
        goto label_1b0cc4;
    }
    ctx->pc = 0x1B0CBCu;
    SET_GPR_U32(ctx, 31, 0x1B0CC4u);
    ctx->pc = 0x1B0CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CBCu;
            // 0x1b0cc0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CC4u; }
        if (ctx->pc != 0x1B0CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CC4u; }
        if (ctx->pc != 0x1B0CC4u) { return; }
    }
    ctx->pc = 0x1B0CC4u;
label_1b0cc4:
    // 0x1b0cc4: 0x0  nop
    ctx->pc = 0x1b0cc4u;
    // NOP
label_1b0cc8:
    // 0x1b0cc8: 0xc065d00  jal         func_197400
label_1b0ccc:
    if (ctx->pc == 0x1B0CCCu) {
        ctx->pc = 0x1B0CD0u;
        goto label_1b0cd0;
    }
    ctx->pc = 0x1B0CC8u;
    SET_GPR_U32(ctx, 31, 0x1B0CD0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CD0u; }
        if (ctx->pc != 0x1B0CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CD0u; }
        if (ctx->pc != 0x1B0CD0u) { return; }
    }
    ctx->pc = 0x1B0CD0u;
label_1b0cd0:
    // 0x1b0cd0: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
label_1b0cd4:
    if (ctx->pc == 0x1B0CD4u) {
        ctx->pc = 0x1B0CD8u;
        goto label_1b0cd8;
    }
    ctx->pc = 0x1B0CD0u;
    {
        const bool branch_taken_0x1b0cd0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b0cd0) {
            ctx->pc = 0x1B0CF8u;
            goto label_1b0cf8;
        }
    }
    ctx->pc = 0x1B0CD8u;
label_1b0cd8:
    // 0x1b0cd8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0cdc:
    // 0x1b0cdc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b0ce0:
    // 0x1b0ce0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1b0ce4:
    if (ctx->pc == 0x1B0CE4u) {
        ctx->pc = 0x1B0CE8u;
        goto label_1b0ce8;
    }
    ctx->pc = 0x1B0CE0u;
    {
        const bool branch_taken_0x1b0ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0ce0) {
            ctx->pc = 0x1B0CF8u;
            goto label_1b0cf8;
        }
    }
    ctx->pc = 0x1B0CE8u;
label_1b0ce8:
    // 0x1b0ce8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0cec:
    // 0x1b0cec: 0xc06560c  jal         func_195830
label_1b0cf0:
    if (ctx->pc == 0x1B0CF0u) {
        ctx->pc = 0x1B0CF0u;
            // 0x1b0cf0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0CF4u;
        goto label_1b0cf4;
    }
    ctx->pc = 0x1B0CECu;
    SET_GPR_U32(ctx, 31, 0x1B0CF4u);
    ctx->pc = 0x1B0CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0CECu;
            // 0x1b0cf0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CF4u; }
        if (ctx->pc != 0x1B0CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0CF4u; }
        if (ctx->pc != 0x1B0CF4u) { return; }
    }
    ctx->pc = 0x1B0CF4u;
label_1b0cf4:
    // 0x1b0cf4: 0x0  nop
    ctx->pc = 0x1b0cf4u;
    // NOP
label_1b0cf8:
    // 0x1b0cf8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0cfc:
    // 0x1b0cfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0d00:
    // 0x1b0d00: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1b0d04:
    if (ctx->pc == 0x1B0D04u) {
        ctx->pc = 0x1B0D08u;
        goto label_1b0d08;
    }
    ctx->pc = 0x1B0D00u;
    {
        const bool branch_taken_0x1b0d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0d00) {
            ctx->pc = 0x1B0D70u;
            goto label_1b0d70;
        }
    }
    ctx->pc = 0x1B0D08u;
label_1b0d08:
    // 0x1b0d08: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0d0c:
    // 0x1b0d0c: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x1b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
label_1b0d10:
    // 0x1b0d10: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0d10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0d14:
    // 0x1b0d14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0d18:
    // 0x1b0d18: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b0d1c:
    // 0x1b0d1c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0d1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0d20:
    // 0x1b0d20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b0d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0d24:
    // 0x1b0d24: 0x0  nop
    ctx->pc = 0x1b0d24u;
    // NOP
label_1b0d28:
    // 0x1b0d28: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1b0d28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1b0d2c:
    // 0x1b0d2c: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0d30:
    // 0x1b0d30: 0x34434952  ori         $v1, $v0, 0x4952
    ctx->pc = 0x1b0d30u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0d34:
    // 0x1b0d34: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_1b0d38:
    // 0x1b0d38: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b0d38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b0d3c:
    // 0x1b0d3c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0d40:
    // 0x1b0d40: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x1b0d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0d44:
    // 0x1b0d44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b0d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0d48:
    // 0x1b0d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0d4c:
    // 0x1b0d4c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b0d4cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1b0d50:
    // 0x1b0d50: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0d50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0d54:
    // 0x1b0d54: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0d58:
    // 0x1b0d58: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b0d58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b0d5c:
    // 0x1b0d5c: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b0d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0d60:
    // 0x1b0d60: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b0d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0d64:
    // 0x1b0d64: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0d64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0d68:
    // 0x1b0d68: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_1b0d6c:
    if (ctx->pc == 0x1B0D6Cu) {
        ctx->pc = 0x1B0D6Cu;
            // 0x1b0d6c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0D70u;
        goto label_1b0d70;
    }
    ctx->pc = 0x1B0D68u;
    {
        const bool branch_taken_0x1b0d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0D68u;
            // 0x1b0d6c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d68) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x3c033da3  lui         $v1, 0x3DA3
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15779 << 16));
label_1b0d74:
    // 0x1b0d74: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b0d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0d78:
    // 0x1b0d78: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x1b0d78u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1b0d7c:
    // 0x1b0d7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b0d7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0d80:
    // 0x1b0d80: 0x3c023d23  lui         $v0, 0x3D23
    ctx->pc = 0x1b0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15651 << 16));
label_1b0d84:
    // 0x1b0d84: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0d84u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0d88:
    // 0x1b0d88: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0d8c:
    // 0x1b0d8c: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0d8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0d90:
    // 0x1b0d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0d94:
    // 0x1b0d94: 0x0  nop
    ctx->pc = 0x1b0d94u;
    // NOP
label_1b0d98:
    // 0x1b0d98: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1b0d98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1b0d9c:
    // 0x1b0d9c: 0x3c023a03  lui         $v0, 0x3A03
    ctx->pc = 0x1b0d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14851 << 16));
label_1b0da0:
    // 0x1b0da0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b0da0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1b0da4:
    // 0x1b0da4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b0da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0da8:
    // 0x1b0da8: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x1b0da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0dac:
    // 0x1b0dac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b0dacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b0db0:
    // 0x1b0db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0db4:
    // 0x1b0db4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1b0db4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1b0db8:
    // 0x1b0db8: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0db8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0dbc:
    // 0x1b0dbc: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b0dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0dc0:
    // 0x1b0dc0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b0dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b0dc4:
    // 0x1b0dc4: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b0dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0dc8:
    // 0x1b0dc8: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b0dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0dcc:
    // 0x1b0dcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b0dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b0dd0:
    // 0x1b0dd0: 0x100000b9  b           . + 4 + (0xB9 << 2)
label_1b0dd4:
    if (ctx->pc == 0x1B0DD4u) {
        ctx->pc = 0x1B0DD4u;
            // 0x1b0dd4: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0DD8u;
        goto label_1b0dd8;
    }
    ctx->pc = 0x1B0DD0u;
    {
        const bool branch_taken_0x1b0dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0DD0u;
            // 0x1b0dd4: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dd0) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0DD8u;
label_1b0dd8:
    // 0x1b0dd8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1b0ddc:
    // 0x1b0ddc: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
label_1b0de0:
    if (ctx->pc == 0x1B0DE0u) {
        ctx->pc = 0x1B0DE4u;
        goto label_1b0de4;
    }
    ctx->pc = 0x1B0DDCu;
    {
        const bool branch_taken_0x1b0ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ddc) {
            ctx->pc = 0x1B0F48u;
            goto label_1b0f48;
        }
    }
    ctx->pc = 0x1B0DE4u;
label_1b0de4:
    // 0x1b0de4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b0de8:
    // 0x1b0de8: 0x14c20017  bne         $a2, $v0, . + 4 + (0x17 << 2)
label_1b0dec:
    if (ctx->pc == 0x1B0DECu) {
        ctx->pc = 0x1B0DF0u;
        goto label_1b0df0;
    }
    ctx->pc = 0x1B0DE8u;
    {
        const bool branch_taken_0x1b0de8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0de8) {
            ctx->pc = 0x1B0E48u;
            goto label_1b0e48;
        }
    }
    ctx->pc = 0x1B0DF0u;
label_1b0df0:
    // 0x1b0df0: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0df4:
    // 0x1b0df4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b0df8:
    // 0x1b0df8: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b0df8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0dfc:
    // 0x1b0dfc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1b0dfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b0e00:
    // 0x1b0e00: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1b0e04:
    // 0x1b0e04: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1b0e04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b0e08:
    // 0x1b0e08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b0e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0e0c:
    // 0x1b0e0c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b0e0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1b0e10:
    // 0x1b0e10: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0e14:
    // 0x1b0e14: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0e14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0e18:
    // 0x1b0e18: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0e18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0e1c:
    // 0x1b0e1c: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0e20:
    // 0x1b0e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0e24:
    // 0x1b0e24: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b0e24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1b0e28:
    // 0x1b0e28: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0e2c:
    // 0x1b0e2c: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b0e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0e30:
    // 0x1b0e30: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b0e30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b0e34:
    // 0x1b0e34: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b0e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0e38:
    // 0x1b0e38: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0e3c:
    // 0x1b0e3c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0e40:
    // 0x1b0e40: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b0e44:
    if (ctx->pc == 0x1B0E44u) {
        ctx->pc = 0x1B0E44u;
            // 0x1b0e44: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B0E48u;
        goto label_1b0e48;
    }
    ctx->pc = 0x1B0E40u;
    {
        const bool branch_taken_0x1b0e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0E40u;
            // 0x1b0e44: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e40) {
            ctx->pc = 0x1B0EA0u;
            goto label_1b0ea0;
        }
    }
    ctx->pc = 0x1B0E48u;
label_1b0e48:
    // 0x1b0e48: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x1b0e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_1b0e4c:
    // 0x1b0e4c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0e50:
    // 0x1b0e50: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x1b0e50u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1b0e54:
    // 0x1b0e54: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1b0e54u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1b0e58:
    // 0x1b0e58: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1b0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1b0e5c:
    // 0x1b0e5c: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x1b0e5cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b0e60:
    // 0x1b0e60: 0x3c02399d  lui         $v0, 0x399D
    ctx->pc = 0x1b0e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14749 << 16));
label_1b0e64:
    // 0x1b0e64: 0x34424952  ori         $v0, $v0, 0x4952
    ctx->pc = 0x1b0e64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18770u)));
label_1b0e68:
    // 0x1b0e68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b0e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b0e6c:
    // 0x1b0e6c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1b0e6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1b0e70:
    // 0x1b0e70: 0xe60200d0  swc1        $f2, 0xD0($s0)
    ctx->pc = 0x1b0e70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b0e74:
    // 0x1b0e74: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0e78:
    // 0x1b0e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0e7c:
    // 0x1b0e7c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1b0e7cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_1b0e80:
    // 0x1b0e80: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b0e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b0e84:
    // 0x1b0e84: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b0e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b0e88:
    // 0x1b0e88: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b0e88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b0e8c:
    // 0x1b0e8c: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b0e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b0e90:
    // 0x1b0e90: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b0e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0e94:
    // 0x1b0e94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b0e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b0e98:
    // 0x1b0e98: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b0e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1b0e9c:
    // 0x1b0e9c: 0x0  nop
    ctx->pc = 0x1b0e9cu;
    // NOP
label_1b0ea0:
    // 0x1b0ea0: 0xc040d72  jal         func_1035C8
label_1b0ea4:
    if (ctx->pc == 0x1B0EA4u) {
        ctx->pc = 0x1B0EA4u;
            // 0x1b0ea4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1B0EA8u;
        goto label_1b0ea8;
    }
    ctx->pc = 0x1B0EA0u;
    SET_GPR_U32(ctx, 31, 0x1B0EA8u);
    ctx->pc = 0x1B0EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EA0u;
            // 0x1b0ea4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EA8u; }
        if (ctx->pc != 0x1B0EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EA8u; }
        if (ctx->pc != 0x1B0EA8u) { return; }
    }
    ctx->pc = 0x1B0EA8u;
label_1b0ea8:
    // 0x1b0ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b0ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0eac:
    // 0x1b0eac: 0xc040078  jal         func_1001E0
label_1b0eb0:
    if (ctx->pc == 0x1B0EB0u) {
        ctx->pc = 0x1B0EB0u;
            // 0x1b0eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EB4u;
        goto label_1b0eb4;
    }
    ctx->pc = 0x1B0EACu;
    SET_GPR_U32(ctx, 31, 0x1B0EB4u);
    ctx->pc = 0x1B0EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0EACu;
            // 0x1b0eb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EB4u; }
        if (ctx->pc != 0x1B0EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EB4u; }
        if (ctx->pc != 0x1B0EB4u) { return; }
    }
    ctx->pc = 0x1B0EB4u;
label_1b0eb4:
    // 0x1b0eb4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1b0eb8:
    if (ctx->pc == 0x1B0EB8u) {
        ctx->pc = 0x1B0EBCu;
        goto label_1b0ebc;
    }
    ctx->pc = 0x1B0EB4u;
    {
        const bool branch_taken_0x1b0eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0eb4) {
            ctx->pc = 0x1B0EE0u;
            goto label_1b0ee0;
        }
    }
    ctx->pc = 0x1B0EBCu;
label_1b0ebc:
    // 0x1b0ebc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1b0ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b0ec0:
    // 0x1b0ec0: 0x3c023b23  lui         $v0, 0x3B23
    ctx->pc = 0x1b0ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15139 << 16));
label_1b0ec4:
    // 0x1b0ec4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0ec4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b0ec8:
    // 0x1b0ec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b0ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0ecc:
    // 0x1b0ecc: 0x0  nop
    ctx->pc = 0x1b0eccu;
    // NOP
label_1b0ed0:
    // 0x1b0ed0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b0ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b0ed4:
    // 0x1b0ed4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b0ed8:
    if (ctx->pc == 0x1B0ED8u) {
        ctx->pc = 0x1B0ED8u;
            // 0x1b0ed8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1B0EDCu;
        goto label_1b0edc;
    }
    ctx->pc = 0x1B0ED4u;
    {
        const bool branch_taken_0x1b0ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0ED4u;
            // 0x1b0ed8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ed4) {
            ctx->pc = 0x1B0EF0u;
            goto label_1b0ef0;
        }
    }
    ctx->pc = 0x1B0EDCu;
label_1b0edc:
    // 0x1b0edc: 0x0  nop
    ctx->pc = 0x1b0edcu;
    // NOP
label_1b0ee0:
    // 0x1b0ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0ee4:
    // 0x1b0ee4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1b0ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1b0ee8:
    // 0x1b0ee8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b0ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b0eec:
    // 0x1b0eec: 0x0  nop
    ctx->pc = 0x1b0eecu;
    // NOP
label_1b0ef0:
    // 0x1b0ef0: 0xc065d00  jal         func_197400
label_1b0ef4:
    if (ctx->pc == 0x1B0EF4u) {
        ctx->pc = 0x1B0EF8u;
        goto label_1b0ef8;
    }
    ctx->pc = 0x1B0EF0u;
    SET_GPR_U32(ctx, 31, 0x1B0EF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EF8u; }
        if (ctx->pc != 0x1B0EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0EF8u; }
        if (ctx->pc != 0x1B0EF8u) { return; }
    }
    ctx->pc = 0x1B0EF8u;
label_1b0ef8:
    // 0x1b0ef8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0efc:
    // 0x1b0efc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1b0f00:
    if (ctx->pc == 0x1B0F00u) {
        ctx->pc = 0x1B0F04u;
        goto label_1b0f04;
    }
    ctx->pc = 0x1B0EFCu;
    {
        const bool branch_taken_0x1b0efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0efc) {
            ctx->pc = 0x1B0F20u;
            goto label_1b0f20;
        }
    }
    ctx->pc = 0x1B0F04u;
label_1b0f04:
    // 0x1b0f04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0f08:
    // 0x1b0f08: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1b0f0c:
    // 0x1b0f0c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1b0f10:
    if (ctx->pc == 0x1B0F10u) {
        ctx->pc = 0x1B0F14u;
        goto label_1b0f14;
    }
    ctx->pc = 0x1B0F0Cu;
    {
        const bool branch_taken_0x1b0f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0f0c) {
            ctx->pc = 0x1B0F20u;
            goto label_1b0f20;
        }
    }
    ctx->pc = 0x1B0F14u;
label_1b0f14:
    // 0x1b0f14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0f18:
    // 0x1b0f18: 0xc06560c  jal         func_195830
label_1b0f1c:
    if (ctx->pc == 0x1B0F1Cu) {
        ctx->pc = 0x1B0F1Cu;
            // 0x1b0f1c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0F20u;
        goto label_1b0f20;
    }
    ctx->pc = 0x1B0F18u;
    SET_GPR_U32(ctx, 31, 0x1B0F20u);
    ctx->pc = 0x1B0F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F18u;
            // 0x1b0f1c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F20u; }
        if (ctx->pc != 0x1B0F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F20u; }
        if (ctx->pc != 0x1B0F20u) { return; }
    }
    ctx->pc = 0x1B0F20u;
label_1b0f20:
    // 0x1b0f20: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0f24:
    // 0x1b0f24: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1b0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b0f28:
    // 0x1b0f28: 0x14620063  bne         $v1, $v0, . + 4 + (0x63 << 2)
label_1b0f2c:
    if (ctx->pc == 0x1B0F2Cu) {
        ctx->pc = 0x1B0F30u;
        goto label_1b0f30;
    }
    ctx->pc = 0x1B0F28u;
    {
        const bool branch_taken_0x1b0f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0f28) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0F30u;
label_1b0f30:
    // 0x1b0f30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b0f30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0f34:
    // 0x1b0f34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0f38:
    // 0x1b0f38: 0xc0655b0  jal         func_1956C0
label_1b0f3c:
    if (ctx->pc == 0x1B0F3Cu) {
        ctx->pc = 0x1B0F3Cu;
            // 0x1b0f3c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1B0F40u;
        goto label_1b0f40;
    }
    ctx->pc = 0x1B0F38u;
    SET_GPR_U32(ctx, 31, 0x1B0F40u);
    ctx->pc = 0x1B0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F38u;
            // 0x1b0f3c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F40u; }
        if (ctx->pc != 0x1B0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F40u; }
        if (ctx->pc != 0x1B0F40u) { return; }
    }
    ctx->pc = 0x1B0F40u;
label_1b0f40:
    // 0x1b0f40: 0x1000005d  b           . + 4 + (0x5D << 2)
label_1b0f44:
    if (ctx->pc == 0x1B0F44u) {
        ctx->pc = 0x1B0F48u;
        goto label_1b0f48;
    }
    ctx->pc = 0x1B0F40u;
    {
        const bool branch_taken_0x1b0f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0f40) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0F48u;
label_1b0f48:
    // 0x1b0f48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0f4c:
    // 0x1b0f4c: 0x1443005a  bne         $v0, $v1, . + 4 + (0x5A << 2)
label_1b0f50:
    if (ctx->pc == 0x1B0F50u) {
        ctx->pc = 0x1B0F54u;
        goto label_1b0f54;
    }
    ctx->pc = 0x1B0F4Cu;
    {
        const bool branch_taken_0x1b0f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0f4c) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B0F54u;
label_1b0f54:
    // 0x1b0f54: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b0f58:
    // 0x1b0f58: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1b0f5c:
    if (ctx->pc == 0x1B0F5Cu) {
        ctx->pc = 0x1B0F60u;
        goto label_1b0f60;
    }
    ctx->pc = 0x1B0F58u;
    {
        const bool branch_taken_0x1b0f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0f58) {
            ctx->pc = 0x1B0FD8u;
            goto label_1b0fd8;
        }
    }
    ctx->pc = 0x1B0F60u;
label_1b0f60:
    // 0x1b0f60: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0f64:
    // 0x1b0f64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1b0f68:
    // 0x1b0f68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0f6c:
    // 0x1b0f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0f70:
    // 0x1b0f70: 0xc0655b0  jal         func_1956C0
label_1b0f74:
    if (ctx->pc == 0x1B0F74u) {
        ctx->pc = 0x1B0F74u;
            // 0x1b0f74: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B0F78u;
        goto label_1b0f78;
    }
    ctx->pc = 0x1B0F70u;
    SET_GPR_U32(ctx, 31, 0x1B0F78u);
    ctx->pc = 0x1B0F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F70u;
            // 0x1b0f74: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F78u; }
        if (ctx->pc != 0x1B0F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F78u; }
        if (ctx->pc != 0x1B0F78u) { return; }
    }
    ctx->pc = 0x1B0F78u;
label_1b0f78:
    // 0x1b0f78: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0f7c:
    // 0x1b0f7c: 0x3c02c248  lui         $v0, 0xC248
    ctx->pc = 0x1b0f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
label_1b0f80:
    // 0x1b0f80: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0f84:
    // 0x1b0f84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0f88:
    // 0x1b0f88: 0xc0655b0  jal         func_1956C0
label_1b0f8c:
    if (ctx->pc == 0x1B0F8Cu) {
        ctx->pc = 0x1B0F8Cu;
            // 0x1b0f8c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0F90u;
        goto label_1b0f90;
    }
    ctx->pc = 0x1B0F88u;
    SET_GPR_U32(ctx, 31, 0x1B0F90u);
    ctx->pc = 0x1B0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0F88u;
            // 0x1b0f8c: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F90u; }
        if (ctx->pc != 0x1B0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F90u; }
        if (ctx->pc != 0x1B0F90u) { return; }
    }
    ctx->pc = 0x1B0F90u;
label_1b0f90:
    // 0x1b0f90: 0xc065d00  jal         func_197400
label_1b0f94:
    if (ctx->pc == 0x1B0F94u) {
        ctx->pc = 0x1B0F98u;
        goto label_1b0f98;
    }
    ctx->pc = 0x1B0F90u;
    SET_GPR_U32(ctx, 31, 0x1B0F98u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F98u; }
        if (ctx->pc != 0x1B0F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0F98u; }
        if (ctx->pc != 0x1B0F98u) { return; }
    }
    ctx->pc = 0x1B0F98u;
label_1b0f98:
    // 0x1b0f98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b0f9c:
    // 0x1b0f9c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
label_1b0fa0:
    if (ctx->pc == 0x1B0FA0u) {
        ctx->pc = 0x1B0FA4u;
        goto label_1b0fa4;
    }
    ctx->pc = 0x1B0F9Cu;
    {
        const bool branch_taken_0x1b0f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0f9c) {
            ctx->pc = 0x1B0FD8u;
            goto label_1b0fd8;
        }
    }
    ctx->pc = 0x1B0FA4u;
label_1b0fa4:
    // 0x1b0fa4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0fa8:
    // 0x1b0fa8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1b0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1b0fac:
    // 0x1b0fac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0fb0:
    // 0x1b0fb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0fb4:
    // 0x1b0fb4: 0xc0655b0  jal         func_1956C0
label_1b0fb8:
    if (ctx->pc == 0x1B0FB8u) {
        ctx->pc = 0x1B0FB8u;
            // 0x1b0fb8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1B0FBCu;
        goto label_1b0fbc;
    }
    ctx->pc = 0x1B0FB4u;
    SET_GPR_U32(ctx, 31, 0x1B0FBCu);
    ctx->pc = 0x1B0FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FB4u;
            // 0x1b0fb8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FBCu; }
        if (ctx->pc != 0x1B0FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FBCu; }
        if (ctx->pc != 0x1B0FBCu) { return; }
    }
    ctx->pc = 0x1B0FBCu;
label_1b0fbc:
    // 0x1b0fbc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b0fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b0fc0:
    // 0x1b0fc0: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x1b0fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
label_1b0fc4:
    // 0x1b0fc4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1b0fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b0fc8:
    // 0x1b0fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1b0fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0fcc:
    // 0x1b0fcc: 0xc0655b0  jal         func_1956C0
label_1b0fd0:
    if (ctx->pc == 0x1B0FD0u) {
        ctx->pc = 0x1B0FD0u;
            // 0x1b0fd0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->pc = 0x1B0FD4u;
        goto label_1b0fd4;
    }
    ctx->pc = 0x1B0FCCu;
    SET_GPR_U32(ctx, 31, 0x1B0FD4u);
    ctx->pc = 0x1B0FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0FCCu;
            // 0x1b0fd0: 0x2464fffc  addiu       $a0, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FD4u; }
        if (ctx->pc != 0x1B0FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0FD4u; }
        if (ctx->pc != 0x1B0FD4u) { return; }
    }
    ctx->pc = 0x1B0FD4u;
label_1b0fd4:
    // 0x1b0fd4: 0x0  nop
    ctx->pc = 0x1b0fd4u;
    // NOP
label_1b0fd8:
    // 0x1b0fd8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1b0fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0fdc:
    // 0x1b0fdc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b0fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b0fe0:
    // 0x1b0fe0: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1b0fe4:
    if (ctx->pc == 0x1B0FE4u) {
        ctx->pc = 0x1B0FE8u;
        goto label_1b0fe8;
    }
    ctx->pc = 0x1B0FE0u;
    {
        const bool branch_taken_0x1b0fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b0fe0) {
            ctx->pc = 0x1B1050u;
            goto label_1b1050;
        }
    }
    ctx->pc = 0x1B0FE8u;
label_1b0fe8:
    // 0x1b0fe8: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b0fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b0fec:
    // 0x1b0fec: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x1b0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
label_1b0ff0:
    // 0x1b0ff0: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1b0ff0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1b0ff4:
    // 0x1b0ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b0ff8:
    // 0x1b0ff8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1b0ffc:
    // 0x1b0ffc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b0ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1000:
    // 0x1b1000: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b1000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1004:
    // 0x1b1004: 0x0  nop
    ctx->pc = 0x1b1004u;
    // NOP
label_1b1008:
    // 0x1b1008: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1b1008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1b100c:
    // 0x1b100c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1b1010:
    // 0x1b1010: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x1b1010u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b1014:
    // 0x1b1014: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1b1014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1b1018:
    // 0x1b1018: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1b1018u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b101c:
    // 0x1b101c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b1020:
    // 0x1b1020: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x1b1020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b1024:
    // 0x1b1024: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b1024u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1028:
    // 0x1b1028: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b102c:
    // 0x1b102c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1b102cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b1030:
    // 0x1b1030: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b1030u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b1034:
    // 0x1b1034: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b1034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b1038:
    // 0x1b1038: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1b1038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b103c:
    // 0x1b103c: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b103cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b1040:
    // 0x1b1040: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b1040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1044:
    // 0x1b1044: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1b1044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b1048:
    // 0x1b1048: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1b104c:
    if (ctx->pc == 0x1B104Cu) {
        ctx->pc = 0x1B104Cu;
            // 0x1b104c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1B1050u;
        goto label_1b1050;
    }
    ctx->pc = 0x1B1048u;
    {
        const bool branch_taken_0x1b1048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B104Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1048u;
            // 0x1b104c: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1048) {
            ctx->pc = 0x1B10B8u;
            goto label_1b10b8;
        }
    }
    ctx->pc = 0x1B1050u;
label_1b1050:
    // 0x1b1050: 0x3c033d75  lui         $v1, 0x3D75
    ctx->pc = 0x1b1050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15733 << 16));
label_1b1054:
    // 0x1b1054: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1b1054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b1058:
    // 0x1b1058: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x1b1058u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
label_1b105c:
    // 0x1b105c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1b105cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1060:
    // 0x1b1060: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1b1060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1b1064:
    // 0x1b1064: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1b1064u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1b1068:
    // 0x1b1068: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1b1068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1b106c:
    // 0x1b106c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1b106cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b1070:
    // 0x1b1070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b1074:
    // 0x1b1074: 0x0  nop
    ctx->pc = 0x1b1074u;
    // NOP
label_1b1078:
    // 0x1b1078: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1b1078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1b107c:
    // 0x1b107c: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1b107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1b1080:
    // 0x1b1080: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1b1080u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1b1084:
    // 0x1b1084: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1b1084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1b1088:
    // 0x1b1088: 0xc60300d4  lwc1        $f3, 0xD4($s0)
    ctx->pc = 0x1b1088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1b108c:
    // 0x1b108c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1b108cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b1090:
    // 0x1b1090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1094:
    // 0x1b1094: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1b1094u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1b1098:
    // 0x1b1098: 0xe60200d4  swc1        $f2, 0xD4($s0)
    ctx->pc = 0x1b1098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1b109c:
    // 0x1b109c: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1b109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b10a0:
    // 0x1b10a0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1b10a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1b10a4:
    // 0x1b10a4: 0xe60100e8  swc1        $f1, 0xE8($s0)
    ctx->pc = 0x1b10a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1b10a8:
    // 0x1b10a8: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1b10a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b10ac:
    // 0x1b10ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1b10acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1b10b0:
    // 0x1b10b0: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1b10b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1b10b4:
    // 0x1b10b4: 0x0  nop
    ctx->pc = 0x1b10b4u;
    // NOP
label_1b10b8:
    // 0x1b10b8: 0xc04b788  jal         func_12DE20
label_1b10bc:
    if (ctx->pc == 0x1B10BCu) {
        ctx->pc = 0x1B10BCu;
            // 0x1b10bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B10C0u;
        goto label_1b10c0;
    }
    ctx->pc = 0x1B10B8u;
    SET_GPR_U32(ctx, 31, 0x1B10C0u);
    ctx->pc = 0x1B10BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10B8u;
            // 0x1b10bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10C0u; }
        if (ctx->pc != 0x1B10C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10C0u; }
        if (ctx->pc != 0x1B10C0u) { return; }
    }
    ctx->pc = 0x1B10C0u;
label_1b10c0:
    // 0x1b10c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b10c4:
    // 0x1b10c4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1b10c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b10c8:
    // 0x1b10c8: 0xc04b7da  jal         func_12DF68
label_1b10cc:
    if (ctx->pc == 0x1B10CCu) {
        ctx->pc = 0x1B10CCu;
            // 0x1b10cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B10D0u;
        goto label_1b10d0;
    }
    ctx->pc = 0x1B10C8u;
    SET_GPR_U32(ctx, 31, 0x1B10D0u);
    ctx->pc = 0x1B10CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10C8u;
            // 0x1b10cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10D0u; }
        if (ctx->pc != 0x1B10D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10D0u; }
        if (ctx->pc != 0x1B10D0u) { return; }
    }
    ctx->pc = 0x1B10D0u;
label_1b10d0:
    // 0x1b10d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b10d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b10d4:
    // 0x1b10d4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1b10d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b10d8:
    // 0x1b10d8: 0xc04b804  jal         func_12E010
label_1b10dc:
    if (ctx->pc == 0x1B10DCu) {
        ctx->pc = 0x1B10DCu;
            // 0x1b10dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B10E0u;
        goto label_1b10e0;
    }
    ctx->pc = 0x1B10D8u;
    SET_GPR_U32(ctx, 31, 0x1B10E0u);
    ctx->pc = 0x1B10DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10D8u;
            // 0x1b10dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E0u; }
        if (ctx->pc != 0x1B10E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10E0u; }
        if (ctx->pc != 0x1B10E0u) { return; }
    }
    ctx->pc = 0x1B10E0u;
label_1b10e0:
    // 0x1b10e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b10e4:
    // 0x1b10e4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1b10e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b10e8:
    // 0x1b10e8: 0xc04b7b0  jal         func_12DEC0
label_1b10ec:
    if (ctx->pc == 0x1B10ECu) {
        ctx->pc = 0x1B10ECu;
            // 0x1b10ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B10F0u;
        goto label_1b10f0;
    }
    ctx->pc = 0x1B10E8u;
    SET_GPR_U32(ctx, 31, 0x1B10F0u);
    ctx->pc = 0x1B10ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10E8u;
            // 0x1b10ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10F0u; }
        if (ctx->pc != 0x1B10F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B10F0u; }
        if (ctx->pc != 0x1B10F0u) { return; }
    }
    ctx->pc = 0x1B10F0u;
label_1b10f0:
    // 0x1b10f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b10f4:
    // 0x1b10f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b10f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b10f8:
    // 0x1b10f8: 0xc04b75e  jal         func_12DD78
label_1b10fc:
    if (ctx->pc == 0x1B10FCu) {
        ctx->pc = 0x1B10FCu;
            // 0x1b10fc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1B1100u;
        goto label_1b1100;
    }
    ctx->pc = 0x1B10F8u;
    SET_GPR_U32(ctx, 31, 0x1B1100u);
    ctx->pc = 0x1B10FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B10F8u;
            // 0x1b10fc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1100u; }
        if (ctx->pc != 0x1B1100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1100u; }
        if (ctx->pc != 0x1B1100u) { return; }
    }
    ctx->pc = 0x1B1100u;
label_1b1100:
    // 0x1b1100: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b1104:
    // 0x1b1104: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b1108:
    // 0x1b1108: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1b110c:
    // 0x1b110c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1b1110:
    if (ctx->pc == 0x1B1110u) {
        ctx->pc = 0x1B1114u;
        goto label_1b1114;
    }
    ctx->pc = 0x1B110Cu;
    {
        const bool branch_taken_0x1b110c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b110c) {
            ctx->pc = 0x1B1160u;
            goto label_1b1160;
        }
    }
    ctx->pc = 0x1B1114u;
label_1b1114:
    // 0x1b1114: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b1114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b1118:
    // 0x1b1118: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b111c:
    if (ctx->pc == 0x1B111Cu) {
        ctx->pc = 0x1B1120u;
        goto label_1b1120;
    }
    ctx->pc = 0x1B1118u;
    {
        const bool branch_taken_0x1b1118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1118) {
            ctx->pc = 0x1B1130u;
            goto label_1b1130;
        }
    }
    ctx->pc = 0x1B1120u;
label_1b1120:
    // 0x1b1120: 0xc0604f0  jal         func_1813C0
label_1b1124:
    if (ctx->pc == 0x1B1124u) {
        ctx->pc = 0x1B1124u;
            // 0x1b1124: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B1128u;
        goto label_1b1128;
    }
    ctx->pc = 0x1B1120u;
    SET_GPR_U32(ctx, 31, 0x1B1128u);
    ctx->pc = 0x1B1124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1120u;
            // 0x1b1124: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1128u; }
        if (ctx->pc != 0x1B1128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1128u; }
        if (ctx->pc != 0x1B1128u) { return; }
    }
    ctx->pc = 0x1B1128u;
label_1b1128:
    // 0x1b1128: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b112c:
    if (ctx->pc == 0x1B112Cu) {
        ctx->pc = 0x1B1130u;
        goto label_1b1130;
    }
    ctx->pc = 0x1B1128u;
    {
        const bool branch_taken_0x1b1128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1128) {
            ctx->pc = 0x1B1138u;
            goto label_1b1138;
        }
    }
    ctx->pc = 0x1B1130u;
label_1b1130:
    // 0x1b1130: 0xc0604dc  jal         func_181370
label_1b1134:
    if (ctx->pc == 0x1B1134u) {
        ctx->pc = 0x1B1134u;
            // 0x1b1134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B1138u;
        goto label_1b1138;
    }
    ctx->pc = 0x1B1130u;
    SET_GPR_U32(ctx, 31, 0x1B1138u);
    ctx->pc = 0x1B1134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1130u;
            // 0x1b1134: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1138u; }
        if (ctx->pc != 0x1B1138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1138u; }
        if (ctx->pc != 0x1B1138u) { return; }
    }
    ctx->pc = 0x1B1138u;
label_1b1138:
    // 0x1b1138: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1b1138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1b113c:
    // 0x1b113c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1140:
    if (ctx->pc == 0x1B1140u) {
        ctx->pc = 0x1B1144u;
        goto label_1b1144;
    }
    ctx->pc = 0x1B113Cu;
    {
        const bool branch_taken_0x1b113c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b113c) {
            ctx->pc = 0x1B1150u;
            goto label_1b1150;
        }
    }
    ctx->pc = 0x1B1144u;
label_1b1144:
    // 0x1b1144: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b1148:
    if (ctx->pc == 0x1B1148u) {
        ctx->pc = 0x1B1148u;
            // 0x1b1148: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1B114Cu;
        goto label_1b114c;
    }
    ctx->pc = 0x1B1144u;
    {
        const bool branch_taken_0x1b1144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1144u;
            // 0x1b1148: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1144) {
            ctx->pc = 0x1B1170u;
            goto label_1b1170;
        }
    }
    ctx->pc = 0x1B114Cu;
label_1b114c:
    // 0x1b114c: 0x0  nop
    ctx->pc = 0x1b114cu;
    // NOP
label_1b1150:
    // 0x1b1150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b1154:
    // 0x1b1154: 0x10000006  b           . + 4 + (0x6 << 2)
label_1b1158:
    if (ctx->pc == 0x1B1158u) {
        ctx->pc = 0x1B1158u;
            // 0x1b1158: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1B115Cu;
        goto label_1b115c;
    }
    ctx->pc = 0x1B1154u;
    {
        const bool branch_taken_0x1b1154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1154u;
            // 0x1b1158: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1154) {
            ctx->pc = 0x1B1170u;
            goto label_1b1170;
        }
    }
    ctx->pc = 0x1B115Cu;
label_1b115c:
    // 0x1b115c: 0x0  nop
    ctx->pc = 0x1b115cu;
    // NOP
label_1b1160:
    // 0x1b1160: 0xc0604dc  jal         func_181370
label_1b1164:
    if (ctx->pc == 0x1B1164u) {
        ctx->pc = 0x1B1164u;
            // 0x1b1164: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1B1168u;
        goto label_1b1168;
    }
    ctx->pc = 0x1B1160u;
    SET_GPR_U32(ctx, 31, 0x1B1168u);
    ctx->pc = 0x1B1164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1160u;
            // 0x1b1164: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1168u; }
        if (ctx->pc != 0x1B1168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1168u; }
        if (ctx->pc != 0x1B1168u) { return; }
    }
    ctx->pc = 0x1B1168u;
label_1b1168:
    // 0x1b1168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b116c:
    // 0x1b116c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1b116cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1b1170:
    // 0x1b1170: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1b1170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b1174:
    // 0x1b1174: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1b1178:
    // 0x1b1178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b117c:
    // 0x1b117c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1b117cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1b1180:
    // 0x1b1180: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b1184:
    // 0x1b1184: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1b1184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1b1188:
    // 0x1b1188: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b1188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b118c:
    // 0x1b118c: 0x0  nop
    ctx->pc = 0x1b118cu;
    // NOP
label_1b1190:
    // 0x1b1190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b1190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b1194:
    // 0x1b1194: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1b1194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1b1198:
    // 0x1b1198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b119c:
    // 0x1b119c: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
label_1b11a0:
    // 0x1b11a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b11a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b11a4:
    // 0x1b11a4: 0x0  nop
    ctx->pc = 0x1b11a4u;
    // NOP
label_1b11a8:
    // 0x1b11a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b11a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b11ac:
    // 0x1b11ac: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1b11acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1b11b0:
    // 0x1b11b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1b11b4:
    // 0x1b11b4: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1b11b8:
    // 0x1b11b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b11b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b11bc:
    // 0x1b11bc: 0x0  nop
    ctx->pc = 0x1b11bcu;
    // NOP
label_1b11c0:
    // 0x1b11c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b11c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b11c4:
    // 0x1b11c4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1b11c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1b11c8:
    // 0x1b11c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b11c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b11cc:
    // 0x1b11cc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1b11d0:
    // 0x1b11d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b11d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1b11d4:
    // 0x1b11d4: 0x0  nop
    ctx->pc = 0x1b11d4u;
    // NOP
label_1b11d8:
    // 0x1b11d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b11d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1b11dc:
    // 0x1b11dc: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1b11dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1b11e0:
    // 0x1b11e0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1b11e4:
    // 0x1b11e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b11e8:
    // 0x1b11e8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1b11e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1b11ec:
    // 0x1b11ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b11ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b11f0:
    // 0x1b11f0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1b11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b11f4:
    // 0x1b11f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b11f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b11f8:
    // 0x1b11f8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1b11fc:
    if (ctx->pc == 0x1B11FCu) {
        ctx->pc = 0x1B11FCu;
            // 0x1b11fc: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1B1200u;
        goto label_1b1200;
    }
    ctx->pc = 0x1B11F8u;
    {
        const bool branch_taken_0x1b11f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B11FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11F8u;
            // 0x1b11fc: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11f8) {
            ctx->pc = 0x1B1218u;
            goto label_1b1218;
        }
    }
    ctx->pc = 0x1B1200u;
label_1b1200:
    // 0x1b1200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b1204:
    // 0x1b1204: 0x0  nop
    ctx->pc = 0x1b1204u;
    // NOP
label_1b1208:
    // 0x1b1208: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b1208u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b120c:
    // 0x1b120c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1b1210:
    if (ctx->pc == 0x1B1210u) {
        ctx->pc = 0x1B1214u;
        goto label_1b1214;
    }
    ctx->pc = 0x1B120Cu;
    {
        const bool branch_taken_0x1b120c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b120c) {
            ctx->pc = 0x1B1230u;
            goto label_1b1230;
        }
    }
    ctx->pc = 0x1B1214u;
label_1b1214:
    // 0x1b1214: 0x0  nop
    ctx->pc = 0x1b1214u;
    // NOP
label_1b1218:
    // 0x1b1218: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b121c:
    // 0x1b121c: 0x40f809  jalr        $v0
label_1b1220:
    if (ctx->pc == 0x1B1220u) {
        ctx->pc = 0x1B1220u;
            // 0x1b1220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B1224u;
        goto label_1b1224;
    }
    ctx->pc = 0x1B121Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1224u);
        ctx->pc = 0x1B1220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B121Cu;
            // 0x1b1220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0440u: goto label_1b0440;
            case 0x1B0444u: goto label_1b0444;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B044Cu: goto label_1b044c;
            case 0x1B0450u: goto label_1b0450;
            case 0x1B0454u: goto label_1b0454;
            case 0x1B0458u: goto label_1b0458;
            case 0x1B045Cu: goto label_1b045c;
            case 0x1B0460u: goto label_1b0460;
            case 0x1B0464u: goto label_1b0464;
            case 0x1B0468u: goto label_1b0468;
            case 0x1B046Cu: goto label_1b046c;
            case 0x1B0470u: goto label_1b0470;
            case 0x1B0474u: goto label_1b0474;
            case 0x1B0478u: goto label_1b0478;
            case 0x1B047Cu: goto label_1b047c;
            case 0x1B0480u: goto label_1b0480;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B048Cu: goto label_1b048c;
            case 0x1B0490u: goto label_1b0490;
            case 0x1B0494u: goto label_1b0494;
            case 0x1B0498u: goto label_1b0498;
            case 0x1B049Cu: goto label_1b049c;
            case 0x1B04A0u: goto label_1b04a0;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04A8u: goto label_1b04a8;
            case 0x1B04ACu: goto label_1b04ac;
            case 0x1B04B0u: goto label_1b04b0;
            case 0x1B04B4u: goto label_1b04b4;
            case 0x1B04B8u: goto label_1b04b8;
            case 0x1B04BCu: goto label_1b04bc;
            case 0x1B04C0u: goto label_1b04c0;
            case 0x1B04C4u: goto label_1b04c4;
            case 0x1B04C8u: goto label_1b04c8;
            case 0x1B04CCu: goto label_1b04cc;
            case 0x1B04D0u: goto label_1b04d0;
            case 0x1B04D4u: goto label_1b04d4;
            case 0x1B04D8u: goto label_1b04d8;
            case 0x1B04DCu: goto label_1b04dc;
            case 0x1B04E0u: goto label_1b04e0;
            case 0x1B04E4u: goto label_1b04e4;
            case 0x1B04E8u: goto label_1b04e8;
            case 0x1B04ECu: goto label_1b04ec;
            case 0x1B04F0u: goto label_1b04f0;
            case 0x1B04F4u: goto label_1b04f4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0500u: goto label_1b0500;
            case 0x1B0504u: goto label_1b0504;
            case 0x1B0508u: goto label_1b0508;
            case 0x1B050Cu: goto label_1b050c;
            case 0x1B0510u: goto label_1b0510;
            case 0x1B0514u: goto label_1b0514;
            case 0x1B0518u: goto label_1b0518;
            case 0x1B051Cu: goto label_1b051c;
            case 0x1B0520u: goto label_1b0520;
            case 0x1B0524u: goto label_1b0524;
            case 0x1B0528u: goto label_1b0528;
            case 0x1B052Cu: goto label_1b052c;
            case 0x1B0530u: goto label_1b0530;
            case 0x1B0534u: goto label_1b0534;
            case 0x1B0538u: goto label_1b0538;
            case 0x1B053Cu: goto label_1b053c;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B0544u: goto label_1b0544;
            case 0x1B0548u: goto label_1b0548;
            case 0x1B054Cu: goto label_1b054c;
            case 0x1B0550u: goto label_1b0550;
            case 0x1B0554u: goto label_1b0554;
            case 0x1B0558u: goto label_1b0558;
            case 0x1B055Cu: goto label_1b055c;
            case 0x1B0560u: goto label_1b0560;
            case 0x1B0564u: goto label_1b0564;
            case 0x1B0568u: goto label_1b0568;
            case 0x1B056Cu: goto label_1b056c;
            case 0x1B0570u: goto label_1b0570;
            case 0x1B0574u: goto label_1b0574;
            case 0x1B0578u: goto label_1b0578;
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0580u: goto label_1b0580;
            case 0x1B0584u: goto label_1b0584;
            case 0x1B0588u: goto label_1b0588;
            case 0x1B058Cu: goto label_1b058c;
            case 0x1B0590u: goto label_1b0590;
            case 0x1B0594u: goto label_1b0594;
            case 0x1B0598u: goto label_1b0598;
            case 0x1B059Cu: goto label_1b059c;
            case 0x1B05A0u: goto label_1b05a0;
            case 0x1B05A4u: goto label_1b05a4;
            case 0x1B05A8u: goto label_1b05a8;
            case 0x1B05ACu: goto label_1b05ac;
            case 0x1B05B0u: goto label_1b05b0;
            case 0x1B05B4u: goto label_1b05b4;
            case 0x1B05B8u: goto label_1b05b8;
            case 0x1B05BCu: goto label_1b05bc;
            case 0x1B05C0u: goto label_1b05c0;
            case 0x1B05C4u: goto label_1b05c4;
            case 0x1B05C8u: goto label_1b05c8;
            case 0x1B05CCu: goto label_1b05cc;
            case 0x1B05D0u: goto label_1b05d0;
            case 0x1B05D4u: goto label_1b05d4;
            case 0x1B05D8u: goto label_1b05d8;
            case 0x1B05DCu: goto label_1b05dc;
            case 0x1B05E0u: goto label_1b05e0;
            case 0x1B05E4u: goto label_1b05e4;
            case 0x1B05E8u: goto label_1b05e8;
            case 0x1B05ECu: goto label_1b05ec;
            case 0x1B05F0u: goto label_1b05f0;
            case 0x1B05F4u: goto label_1b05f4;
            case 0x1B05F8u: goto label_1b05f8;
            case 0x1B05FCu: goto label_1b05fc;
            case 0x1B0600u: goto label_1b0600;
            case 0x1B0604u: goto label_1b0604;
            case 0x1B0608u: goto label_1b0608;
            case 0x1B060Cu: goto label_1b060c;
            case 0x1B0610u: goto label_1b0610;
            case 0x1B0614u: goto label_1b0614;
            case 0x1B0618u: goto label_1b0618;
            case 0x1B061Cu: goto label_1b061c;
            case 0x1B0620u: goto label_1b0620;
            case 0x1B0624u: goto label_1b0624;
            case 0x1B0628u: goto label_1b0628;
            case 0x1B062Cu: goto label_1b062c;
            case 0x1B0630u: goto label_1b0630;
            case 0x1B0634u: goto label_1b0634;
            case 0x1B0638u: goto label_1b0638;
            case 0x1B063Cu: goto label_1b063c;
            case 0x1B0640u: goto label_1b0640;
            case 0x1B0644u: goto label_1b0644;
            case 0x1B0648u: goto label_1b0648;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0650u: goto label_1b0650;
            case 0x1B0654u: goto label_1b0654;
            case 0x1B0658u: goto label_1b0658;
            case 0x1B065Cu: goto label_1b065c;
            case 0x1B0660u: goto label_1b0660;
            case 0x1B0664u: goto label_1b0664;
            case 0x1B0668u: goto label_1b0668;
            case 0x1B066Cu: goto label_1b066c;
            case 0x1B0670u: goto label_1b0670;
            case 0x1B0674u: goto label_1b0674;
            case 0x1B0678u: goto label_1b0678;
            case 0x1B067Cu: goto label_1b067c;
            case 0x1B0680u: goto label_1b0680;
            case 0x1B0684u: goto label_1b0684;
            case 0x1B0688u: goto label_1b0688;
            case 0x1B068Cu: goto label_1b068c;
            case 0x1B0690u: goto label_1b0690;
            case 0x1B0694u: goto label_1b0694;
            case 0x1B0698u: goto label_1b0698;
            case 0x1B069Cu: goto label_1b069c;
            case 0x1B06A0u: goto label_1b06a0;
            case 0x1B06A4u: goto label_1b06a4;
            case 0x1B06A8u: goto label_1b06a8;
            case 0x1B06ACu: goto label_1b06ac;
            case 0x1B06B0u: goto label_1b06b0;
            case 0x1B06B4u: goto label_1b06b4;
            case 0x1B06B8u: goto label_1b06b8;
            case 0x1B06BCu: goto label_1b06bc;
            case 0x1B06C0u: goto label_1b06c0;
            case 0x1B06C4u: goto label_1b06c4;
            case 0x1B06C8u: goto label_1b06c8;
            case 0x1B06CCu: goto label_1b06cc;
            case 0x1B06D0u: goto label_1b06d0;
            case 0x1B06D4u: goto label_1b06d4;
            case 0x1B06D8u: goto label_1b06d8;
            case 0x1B06DCu: goto label_1b06dc;
            case 0x1B06E0u: goto label_1b06e0;
            case 0x1B06E4u: goto label_1b06e4;
            case 0x1B06E8u: goto label_1b06e8;
            case 0x1B06ECu: goto label_1b06ec;
            case 0x1B06F0u: goto label_1b06f0;
            case 0x1B06F4u: goto label_1b06f4;
            case 0x1B06F8u: goto label_1b06f8;
            case 0x1B06FCu: goto label_1b06fc;
            case 0x1B0700u: goto label_1b0700;
            case 0x1B0704u: goto label_1b0704;
            case 0x1B0708u: goto label_1b0708;
            case 0x1B070Cu: goto label_1b070c;
            case 0x1B0710u: goto label_1b0710;
            case 0x1B0714u: goto label_1b0714;
            case 0x1B0718u: goto label_1b0718;
            case 0x1B071Cu: goto label_1b071c;
            case 0x1B0720u: goto label_1b0720;
            case 0x1B0724u: goto label_1b0724;
            case 0x1B0728u: goto label_1b0728;
            case 0x1B072Cu: goto label_1b072c;
            case 0x1B0730u: goto label_1b0730;
            case 0x1B0734u: goto label_1b0734;
            case 0x1B0738u: goto label_1b0738;
            case 0x1B073Cu: goto label_1b073c;
            case 0x1B0740u: goto label_1b0740;
            case 0x1B0744u: goto label_1b0744;
            case 0x1B0748u: goto label_1b0748;
            case 0x1B074Cu: goto label_1b074c;
            case 0x1B0750u: goto label_1b0750;
            case 0x1B0754u: goto label_1b0754;
            case 0x1B0758u: goto label_1b0758;
            case 0x1B075Cu: goto label_1b075c;
            case 0x1B0760u: goto label_1b0760;
            case 0x1B0764u: goto label_1b0764;
            case 0x1B0768u: goto label_1b0768;
            case 0x1B076Cu: goto label_1b076c;
            case 0x1B0770u: goto label_1b0770;
            case 0x1B0774u: goto label_1b0774;
            case 0x1B0778u: goto label_1b0778;
            case 0x1B077Cu: goto label_1b077c;
            case 0x1B0780u: goto label_1b0780;
            case 0x1B0784u: goto label_1b0784;
            case 0x1B0788u: goto label_1b0788;
            case 0x1B078Cu: goto label_1b078c;
            case 0x1B0790u: goto label_1b0790;
            case 0x1B0794u: goto label_1b0794;
            case 0x1B0798u: goto label_1b0798;
            case 0x1B079Cu: goto label_1b079c;
            case 0x1B07A0u: goto label_1b07a0;
            case 0x1B07A4u: goto label_1b07a4;
            case 0x1B07A8u: goto label_1b07a8;
            case 0x1B07ACu: goto label_1b07ac;
            case 0x1B07B0u: goto label_1b07b0;
            case 0x1B07B4u: goto label_1b07b4;
            case 0x1B07B8u: goto label_1b07b8;
            case 0x1B07BCu: goto label_1b07bc;
            case 0x1B07C0u: goto label_1b07c0;
            case 0x1B07C4u: goto label_1b07c4;
            case 0x1B07C8u: goto label_1b07c8;
            case 0x1B07CCu: goto label_1b07cc;
            case 0x1B07D0u: goto label_1b07d0;
            case 0x1B07D4u: goto label_1b07d4;
            case 0x1B07D8u: goto label_1b07d8;
            case 0x1B07DCu: goto label_1b07dc;
            case 0x1B07E0u: goto label_1b07e0;
            case 0x1B07E4u: goto label_1b07e4;
            case 0x1B07E8u: goto label_1b07e8;
            case 0x1B07ECu: goto label_1b07ec;
            case 0x1B07F0u: goto label_1b07f0;
            case 0x1B07F4u: goto label_1b07f4;
            case 0x1B07F8u: goto label_1b07f8;
            case 0x1B07FCu: goto label_1b07fc;
            case 0x1B0800u: goto label_1b0800;
            case 0x1B0804u: goto label_1b0804;
            case 0x1B0808u: goto label_1b0808;
            case 0x1B080Cu: goto label_1b080c;
            case 0x1B0810u: goto label_1b0810;
            case 0x1B0814u: goto label_1b0814;
            case 0x1B0818u: goto label_1b0818;
            case 0x1B081Cu: goto label_1b081c;
            case 0x1B0820u: goto label_1b0820;
            case 0x1B0824u: goto label_1b0824;
            case 0x1B0828u: goto label_1b0828;
            case 0x1B082Cu: goto label_1b082c;
            case 0x1B0830u: goto label_1b0830;
            case 0x1B0834u: goto label_1b0834;
            case 0x1B0838u: goto label_1b0838;
            case 0x1B083Cu: goto label_1b083c;
            case 0x1B0840u: goto label_1b0840;
            case 0x1B0844u: goto label_1b0844;
            case 0x1B0848u: goto label_1b0848;
            case 0x1B084Cu: goto label_1b084c;
            case 0x1B0850u: goto label_1b0850;
            case 0x1B0854u: goto label_1b0854;
            case 0x1B0858u: goto label_1b0858;
            case 0x1B085Cu: goto label_1b085c;
            case 0x1B0860u: goto label_1b0860;
            case 0x1B0864u: goto label_1b0864;
            case 0x1B0868u: goto label_1b0868;
            case 0x1B086Cu: goto label_1b086c;
            case 0x1B0870u: goto label_1b0870;
            case 0x1B0874u: goto label_1b0874;
            case 0x1B0878u: goto label_1b0878;
            case 0x1B087Cu: goto label_1b087c;
            case 0x1B0880u: goto label_1b0880;
            case 0x1B0884u: goto label_1b0884;
            case 0x1B0888u: goto label_1b0888;
            case 0x1B088Cu: goto label_1b088c;
            case 0x1B0890u: goto label_1b0890;
            case 0x1B0894u: goto label_1b0894;
            case 0x1B0898u: goto label_1b0898;
            case 0x1B089Cu: goto label_1b089c;
            case 0x1B08A0u: goto label_1b08a0;
            case 0x1B08A4u: goto label_1b08a4;
            case 0x1B08A8u: goto label_1b08a8;
            case 0x1B08ACu: goto label_1b08ac;
            case 0x1B08B0u: goto label_1b08b0;
            case 0x1B08B4u: goto label_1b08b4;
            case 0x1B08B8u: goto label_1b08b8;
            case 0x1B08BCu: goto label_1b08bc;
            case 0x1B08C0u: goto label_1b08c0;
            case 0x1B08C4u: goto label_1b08c4;
            case 0x1B08C8u: goto label_1b08c8;
            case 0x1B08CCu: goto label_1b08cc;
            case 0x1B08D0u: goto label_1b08d0;
            case 0x1B08D4u: goto label_1b08d4;
            case 0x1B08D8u: goto label_1b08d8;
            case 0x1B08DCu: goto label_1b08dc;
            case 0x1B08E0u: goto label_1b08e0;
            case 0x1B08E4u: goto label_1b08e4;
            case 0x1B08E8u: goto label_1b08e8;
            case 0x1B08ECu: goto label_1b08ec;
            case 0x1B08F0u: goto label_1b08f0;
            case 0x1B08F4u: goto label_1b08f4;
            case 0x1B08F8u: goto label_1b08f8;
            case 0x1B08FCu: goto label_1b08fc;
            case 0x1B0900u: goto label_1b0900;
            case 0x1B0904u: goto label_1b0904;
            case 0x1B0908u: goto label_1b0908;
            case 0x1B090Cu: goto label_1b090c;
            case 0x1B0910u: goto label_1b0910;
            case 0x1B0914u: goto label_1b0914;
            case 0x1B0918u: goto label_1b0918;
            case 0x1B091Cu: goto label_1b091c;
            case 0x1B0920u: goto label_1b0920;
            case 0x1B0924u: goto label_1b0924;
            case 0x1B0928u: goto label_1b0928;
            case 0x1B092Cu: goto label_1b092c;
            case 0x1B0930u: goto label_1b0930;
            case 0x1B0934u: goto label_1b0934;
            case 0x1B0938u: goto label_1b0938;
            case 0x1B093Cu: goto label_1b093c;
            case 0x1B0940u: goto label_1b0940;
            case 0x1B0944u: goto label_1b0944;
            case 0x1B0948u: goto label_1b0948;
            case 0x1B094Cu: goto label_1b094c;
            case 0x1B0950u: goto label_1b0950;
            case 0x1B0954u: goto label_1b0954;
            case 0x1B0958u: goto label_1b0958;
            case 0x1B095Cu: goto label_1b095c;
            case 0x1B0960u: goto label_1b0960;
            case 0x1B0964u: goto label_1b0964;
            case 0x1B0968u: goto label_1b0968;
            case 0x1B096Cu: goto label_1b096c;
            case 0x1B0970u: goto label_1b0970;
            case 0x1B0974u: goto label_1b0974;
            case 0x1B0978u: goto label_1b0978;
            case 0x1B097Cu: goto label_1b097c;
            case 0x1B0980u: goto label_1b0980;
            case 0x1B0984u: goto label_1b0984;
            case 0x1B0988u: goto label_1b0988;
            case 0x1B098Cu: goto label_1b098c;
            case 0x1B0990u: goto label_1b0990;
            case 0x1B0994u: goto label_1b0994;
            case 0x1B0998u: goto label_1b0998;
            case 0x1B099Cu: goto label_1b099c;
            case 0x1B09A0u: goto label_1b09a0;
            case 0x1B09A4u: goto label_1b09a4;
            case 0x1B09A8u: goto label_1b09a8;
            case 0x1B09ACu: goto label_1b09ac;
            case 0x1B09B0u: goto label_1b09b0;
            case 0x1B09B4u: goto label_1b09b4;
            case 0x1B09B8u: goto label_1b09b8;
            case 0x1B09BCu: goto label_1b09bc;
            case 0x1B09C0u: goto label_1b09c0;
            case 0x1B09C4u: goto label_1b09c4;
            case 0x1B09C8u: goto label_1b09c8;
            case 0x1B09CCu: goto label_1b09cc;
            case 0x1B09D0u: goto label_1b09d0;
            case 0x1B09D4u: goto label_1b09d4;
            case 0x1B09D8u: goto label_1b09d8;
            case 0x1B09DCu: goto label_1b09dc;
            case 0x1B09E0u: goto label_1b09e0;
            case 0x1B09E4u: goto label_1b09e4;
            case 0x1B09E8u: goto label_1b09e8;
            case 0x1B09ECu: goto label_1b09ec;
            case 0x1B09F0u: goto label_1b09f0;
            case 0x1B09F4u: goto label_1b09f4;
            case 0x1B09F8u: goto label_1b09f8;
            case 0x1B09FCu: goto label_1b09fc;
            case 0x1B0A00u: goto label_1b0a00;
            case 0x1B0A04u: goto label_1b0a04;
            case 0x1B0A08u: goto label_1b0a08;
            case 0x1B0A0Cu: goto label_1b0a0c;
            case 0x1B0A10u: goto label_1b0a10;
            case 0x1B0A14u: goto label_1b0a14;
            case 0x1B0A18u: goto label_1b0a18;
            case 0x1B0A1Cu: goto label_1b0a1c;
            case 0x1B0A20u: goto label_1b0a20;
            case 0x1B0A24u: goto label_1b0a24;
            case 0x1B0A28u: goto label_1b0a28;
            case 0x1B0A2Cu: goto label_1b0a2c;
            case 0x1B0A30u: goto label_1b0a30;
            case 0x1B0A34u: goto label_1b0a34;
            case 0x1B0A38u: goto label_1b0a38;
            case 0x1B0A3Cu: goto label_1b0a3c;
            case 0x1B0A40u: goto label_1b0a40;
            case 0x1B0A44u: goto label_1b0a44;
            case 0x1B0A48u: goto label_1b0a48;
            case 0x1B0A4Cu: goto label_1b0a4c;
            case 0x1B0A50u: goto label_1b0a50;
            case 0x1B0A54u: goto label_1b0a54;
            case 0x1B0A58u: goto label_1b0a58;
            case 0x1B0A5Cu: goto label_1b0a5c;
            case 0x1B0A60u: goto label_1b0a60;
            case 0x1B0A64u: goto label_1b0a64;
            case 0x1B0A68u: goto label_1b0a68;
            case 0x1B0A6Cu: goto label_1b0a6c;
            case 0x1B0A70u: goto label_1b0a70;
            case 0x1B0A74u: goto label_1b0a74;
            case 0x1B0A78u: goto label_1b0a78;
            case 0x1B0A7Cu: goto label_1b0a7c;
            case 0x1B0A80u: goto label_1b0a80;
            case 0x1B0A84u: goto label_1b0a84;
            case 0x1B0A88u: goto label_1b0a88;
            case 0x1B0A8Cu: goto label_1b0a8c;
            case 0x1B0A90u: goto label_1b0a90;
            case 0x1B0A94u: goto label_1b0a94;
            case 0x1B0A98u: goto label_1b0a98;
            case 0x1B0A9Cu: goto label_1b0a9c;
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0AA4u: goto label_1b0aa4;
            case 0x1B0AA8u: goto label_1b0aa8;
            case 0x1B0AACu: goto label_1b0aac;
            case 0x1B0AB0u: goto label_1b0ab0;
            case 0x1B0AB4u: goto label_1b0ab4;
            case 0x1B0AB8u: goto label_1b0ab8;
            case 0x1B0ABCu: goto label_1b0abc;
            case 0x1B0AC0u: goto label_1b0ac0;
            case 0x1B0AC4u: goto label_1b0ac4;
            case 0x1B0AC8u: goto label_1b0ac8;
            case 0x1B0ACCu: goto label_1b0acc;
            case 0x1B0AD0u: goto label_1b0ad0;
            case 0x1B0AD4u: goto label_1b0ad4;
            case 0x1B0AD8u: goto label_1b0ad8;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0AE0u: goto label_1b0ae0;
            case 0x1B0AE4u: goto label_1b0ae4;
            case 0x1B0AE8u: goto label_1b0ae8;
            case 0x1B0AECu: goto label_1b0aec;
            case 0x1B0AF0u: goto label_1b0af0;
            case 0x1B0AF4u: goto label_1b0af4;
            case 0x1B0AF8u: goto label_1b0af8;
            case 0x1B0AFCu: goto label_1b0afc;
            case 0x1B0B00u: goto label_1b0b00;
            case 0x1B0B04u: goto label_1b0b04;
            case 0x1B0B08u: goto label_1b0b08;
            case 0x1B0B0Cu: goto label_1b0b0c;
            case 0x1B0B10u: goto label_1b0b10;
            case 0x1B0B14u: goto label_1b0b14;
            case 0x1B0B18u: goto label_1b0b18;
            case 0x1B0B1Cu: goto label_1b0b1c;
            case 0x1B0B20u: goto label_1b0b20;
            case 0x1B0B24u: goto label_1b0b24;
            case 0x1B0B28u: goto label_1b0b28;
            case 0x1B0B2Cu: goto label_1b0b2c;
            case 0x1B0B30u: goto label_1b0b30;
            case 0x1B0B34u: goto label_1b0b34;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B40u: goto label_1b0b40;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0B48u: goto label_1b0b48;
            case 0x1B0B4Cu: goto label_1b0b4c;
            case 0x1B0B50u: goto label_1b0b50;
            case 0x1B0B54u: goto label_1b0b54;
            case 0x1B0B58u: goto label_1b0b58;
            case 0x1B0B5Cu: goto label_1b0b5c;
            case 0x1B0B60u: goto label_1b0b60;
            case 0x1B0B64u: goto label_1b0b64;
            case 0x1B0B68u: goto label_1b0b68;
            case 0x1B0B6Cu: goto label_1b0b6c;
            case 0x1B0B70u: goto label_1b0b70;
            case 0x1B0B74u: goto label_1b0b74;
            case 0x1B0B78u: goto label_1b0b78;
            case 0x1B0B7Cu: goto label_1b0b7c;
            case 0x1B0B80u: goto label_1b0b80;
            case 0x1B0B84u: goto label_1b0b84;
            case 0x1B0B88u: goto label_1b0b88;
            case 0x1B0B8Cu: goto label_1b0b8c;
            case 0x1B0B90u: goto label_1b0b90;
            case 0x1B0B94u: goto label_1b0b94;
            case 0x1B0B98u: goto label_1b0b98;
            case 0x1B0B9Cu: goto label_1b0b9c;
            case 0x1B0BA0u: goto label_1b0ba0;
            case 0x1B0BA4u: goto label_1b0ba4;
            case 0x1B0BA8u: goto label_1b0ba8;
            case 0x1B0BACu: goto label_1b0bac;
            case 0x1B0BB0u: goto label_1b0bb0;
            case 0x1B0BB4u: goto label_1b0bb4;
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BBCu: goto label_1b0bbc;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BC4u: goto label_1b0bc4;
            case 0x1B0BC8u: goto label_1b0bc8;
            case 0x1B0BCCu: goto label_1b0bcc;
            case 0x1B0BD0u: goto label_1b0bd0;
            case 0x1B0BD4u: goto label_1b0bd4;
            case 0x1B0BD8u: goto label_1b0bd8;
            case 0x1B0BDCu: goto label_1b0bdc;
            case 0x1B0BE0u: goto label_1b0be0;
            case 0x1B0BE4u: goto label_1b0be4;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BECu: goto label_1b0bec;
            case 0x1B0BF0u: goto label_1b0bf0;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C00u: goto label_1b0c00;
            case 0x1B0C04u: goto label_1b0c04;
            case 0x1B0C08u: goto label_1b0c08;
            case 0x1B0C0Cu: goto label_1b0c0c;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C14u: goto label_1b0c14;
            case 0x1B0C18u: goto label_1b0c18;
            case 0x1B0C1Cu: goto label_1b0c1c;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C24u: goto label_1b0c24;
            case 0x1B0C28u: goto label_1b0c28;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C30u: goto label_1b0c30;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            case 0x1B0C44u: goto label_1b0c44;
            case 0x1B0C48u: goto label_1b0c48;
            case 0x1B0C4Cu: goto label_1b0c4c;
            case 0x1B0C50u: goto label_1b0c50;
            case 0x1B0C54u: goto label_1b0c54;
            case 0x1B0C58u: goto label_1b0c58;
            case 0x1B0C5Cu: goto label_1b0c5c;
            case 0x1B0C60u: goto label_1b0c60;
            case 0x1B0C64u: goto label_1b0c64;
            case 0x1B0C68u: goto label_1b0c68;
            case 0x1B0C6Cu: goto label_1b0c6c;
            case 0x1B0C70u: goto label_1b0c70;
            case 0x1B0C74u: goto label_1b0c74;
            case 0x1B0C78u: goto label_1b0c78;
            case 0x1B0C7Cu: goto label_1b0c7c;
            case 0x1B0C80u: goto label_1b0c80;
            case 0x1B0C84u: goto label_1b0c84;
            case 0x1B0C88u: goto label_1b0c88;
            case 0x1B0C8Cu: goto label_1b0c8c;
            case 0x1B0C90u: goto label_1b0c90;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0C98u: goto label_1b0c98;
            case 0x1B0C9Cu: goto label_1b0c9c;
            case 0x1B0CA0u: goto label_1b0ca0;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CA8u: goto label_1b0ca8;
            case 0x1B0CACu: goto label_1b0cac;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0CB4u: goto label_1b0cb4;
            case 0x1B0CB8u: goto label_1b0cb8;
            case 0x1B0CBCu: goto label_1b0cbc;
            case 0x1B0CC0u: goto label_1b0cc0;
            case 0x1B0CC4u: goto label_1b0cc4;
            case 0x1B0CC8u: goto label_1b0cc8;
            case 0x1B0CCCu: goto label_1b0ccc;
            case 0x1B0CD0u: goto label_1b0cd0;
            case 0x1B0CD4u: goto label_1b0cd4;
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0CDCu: goto label_1b0cdc;
            case 0x1B0CE0u: goto label_1b0ce0;
            case 0x1B0CE4u: goto label_1b0ce4;
            case 0x1B0CE8u: goto label_1b0ce8;
            case 0x1B0CECu: goto label_1b0cec;
            case 0x1B0CF0u: goto label_1b0cf0;
            case 0x1B0CF4u: goto label_1b0cf4;
            case 0x1B0CF8u: goto label_1b0cf8;
            case 0x1B0CFCu: goto label_1b0cfc;
            case 0x1B0D00u: goto label_1b0d00;
            case 0x1B0D04u: goto label_1b0d04;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D0Cu: goto label_1b0d0c;
            case 0x1B0D10u: goto label_1b0d10;
            case 0x1B0D14u: goto label_1b0d14;
            case 0x1B0D18u: goto label_1b0d18;
            case 0x1B0D1Cu: goto label_1b0d1c;
            case 0x1B0D20u: goto label_1b0d20;
            case 0x1B0D24u: goto label_1b0d24;
            case 0x1B0D28u: goto label_1b0d28;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D30u: goto label_1b0d30;
            case 0x1B0D34u: goto label_1b0d34;
            case 0x1B0D38u: goto label_1b0d38;
            case 0x1B0D3Cu: goto label_1b0d3c;
            case 0x1B0D40u: goto label_1b0d40;
            case 0x1B0D44u: goto label_1b0d44;
            case 0x1B0D48u: goto label_1b0d48;
            case 0x1B0D4Cu: goto label_1b0d4c;
            case 0x1B0D50u: goto label_1b0d50;
            case 0x1B0D54u: goto label_1b0d54;
            case 0x1B0D58u: goto label_1b0d58;
            case 0x1B0D5Cu: goto label_1b0d5c;
            case 0x1B0D60u: goto label_1b0d60;
            case 0x1B0D64u: goto label_1b0d64;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0D6Cu: goto label_1b0d6c;
            case 0x1B0D70u: goto label_1b0d70;
            case 0x1B0D74u: goto label_1b0d74;
            case 0x1B0D78u: goto label_1b0d78;
            case 0x1B0D7Cu: goto label_1b0d7c;
            case 0x1B0D80u: goto label_1b0d80;
            case 0x1B0D84u: goto label_1b0d84;
            case 0x1B0D88u: goto label_1b0d88;
            case 0x1B0D8Cu: goto label_1b0d8c;
            case 0x1B0D90u: goto label_1b0d90;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            case 0x1B0D9Cu: goto label_1b0d9c;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DA8u: goto label_1b0da8;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            case 0x1B0DB4u: goto label_1b0db4;
            case 0x1B0DB8u: goto label_1b0db8;
            case 0x1B0DBCu: goto label_1b0dbc;
            case 0x1B0DC0u: goto label_1b0dc0;
            case 0x1B0DC4u: goto label_1b0dc4;
            case 0x1B0DC8u: goto label_1b0dc8;
            case 0x1B0DCCu: goto label_1b0dcc;
            case 0x1B0DD0u: goto label_1b0dd0;
            case 0x1B0DD4u: goto label_1b0dd4;
            case 0x1B0DD8u: goto label_1b0dd8;
            case 0x1B0DDCu: goto label_1b0ddc;
            case 0x1B0DE0u: goto label_1b0de0;
            case 0x1B0DE4u: goto label_1b0de4;
            case 0x1B0DE8u: goto label_1b0de8;
            case 0x1B0DECu: goto label_1b0dec;
            case 0x1B0DF0u: goto label_1b0df0;
            case 0x1B0DF4u: goto label_1b0df4;
            case 0x1B0DF8u: goto label_1b0df8;
            case 0x1B0DFCu: goto label_1b0dfc;
            case 0x1B0E00u: goto label_1b0e00;
            case 0x1B0E04u: goto label_1b0e04;
            case 0x1B0E08u: goto label_1b0e08;
            case 0x1B0E0Cu: goto label_1b0e0c;
            case 0x1B0E10u: goto label_1b0e10;
            case 0x1B0E14u: goto label_1b0e14;
            case 0x1B0E18u: goto label_1b0e18;
            case 0x1B0E1Cu: goto label_1b0e1c;
            case 0x1B0E20u: goto label_1b0e20;
            case 0x1B0E24u: goto label_1b0e24;
            case 0x1B0E28u: goto label_1b0e28;
            case 0x1B0E2Cu: goto label_1b0e2c;
            case 0x1B0E30u: goto label_1b0e30;
            case 0x1B0E34u: goto label_1b0e34;
            case 0x1B0E38u: goto label_1b0e38;
            case 0x1B0E3Cu: goto label_1b0e3c;
            case 0x1B0E40u: goto label_1b0e40;
            case 0x1B0E44u: goto label_1b0e44;
            case 0x1B0E48u: goto label_1b0e48;
            case 0x1B0E4Cu: goto label_1b0e4c;
            case 0x1B0E50u: goto label_1b0e50;
            case 0x1B0E54u: goto label_1b0e54;
            case 0x1B0E58u: goto label_1b0e58;
            case 0x1B0E5Cu: goto label_1b0e5c;
            case 0x1B0E60u: goto label_1b0e60;
            case 0x1B0E64u: goto label_1b0e64;
            case 0x1B0E68u: goto label_1b0e68;
            case 0x1B0E6Cu: goto label_1b0e6c;
            case 0x1B0E70u: goto label_1b0e70;
            case 0x1B0E74u: goto label_1b0e74;
            case 0x1B0E78u: goto label_1b0e78;
            case 0x1B0E7Cu: goto label_1b0e7c;
            case 0x1B0E80u: goto label_1b0e80;
            case 0x1B0E84u: goto label_1b0e84;
            case 0x1B0E88u: goto label_1b0e88;
            case 0x1B0E8Cu: goto label_1b0e8c;
            case 0x1B0E90u: goto label_1b0e90;
            case 0x1B0E94u: goto label_1b0e94;
            case 0x1B0E98u: goto label_1b0e98;
            case 0x1B0E9Cu: goto label_1b0e9c;
            case 0x1B0EA0u: goto label_1b0ea0;
            case 0x1B0EA4u: goto label_1b0ea4;
            case 0x1B0EA8u: goto label_1b0ea8;
            case 0x1B0EACu: goto label_1b0eac;
            case 0x1B0EB0u: goto label_1b0eb0;
            case 0x1B0EB4u: goto label_1b0eb4;
            case 0x1B0EB8u: goto label_1b0eb8;
            case 0x1B0EBCu: goto label_1b0ebc;
            case 0x1B0EC0u: goto label_1b0ec0;
            case 0x1B0EC4u: goto label_1b0ec4;
            case 0x1B0EC8u: goto label_1b0ec8;
            case 0x1B0ECCu: goto label_1b0ecc;
            case 0x1B0ED0u: goto label_1b0ed0;
            case 0x1B0ED4u: goto label_1b0ed4;
            case 0x1B0ED8u: goto label_1b0ed8;
            case 0x1B0EDCu: goto label_1b0edc;
            case 0x1B0EE0u: goto label_1b0ee0;
            case 0x1B0EE4u: goto label_1b0ee4;
            case 0x1B0EE8u: goto label_1b0ee8;
            case 0x1B0EECu: goto label_1b0eec;
            case 0x1B0EF0u: goto label_1b0ef0;
            case 0x1B0EF4u: goto label_1b0ef4;
            case 0x1B0EF8u: goto label_1b0ef8;
            case 0x1B0EFCu: goto label_1b0efc;
            case 0x1B0F00u: goto label_1b0f00;
            case 0x1B0F04u: goto label_1b0f04;
            case 0x1B0F08u: goto label_1b0f08;
            case 0x1B0F0Cu: goto label_1b0f0c;
            case 0x1B0F10u: goto label_1b0f10;
            case 0x1B0F14u: goto label_1b0f14;
            case 0x1B0F18u: goto label_1b0f18;
            case 0x1B0F1Cu: goto label_1b0f1c;
            case 0x1B0F20u: goto label_1b0f20;
            case 0x1B0F24u: goto label_1b0f24;
            case 0x1B0F28u: goto label_1b0f28;
            case 0x1B0F2Cu: goto label_1b0f2c;
            case 0x1B0F30u: goto label_1b0f30;
            case 0x1B0F34u: goto label_1b0f34;
            case 0x1B0F38u: goto label_1b0f38;
            case 0x1B0F3Cu: goto label_1b0f3c;
            case 0x1B0F40u: goto label_1b0f40;
            case 0x1B0F44u: goto label_1b0f44;
            case 0x1B0F48u: goto label_1b0f48;
            case 0x1B0F4Cu: goto label_1b0f4c;
            case 0x1B0F50u: goto label_1b0f50;
            case 0x1B0F54u: goto label_1b0f54;
            case 0x1B0F58u: goto label_1b0f58;
            case 0x1B0F5Cu: goto label_1b0f5c;
            case 0x1B0F60u: goto label_1b0f60;
            case 0x1B0F64u: goto label_1b0f64;
            case 0x1B0F68u: goto label_1b0f68;
            case 0x1B0F6Cu: goto label_1b0f6c;
            case 0x1B0F70u: goto label_1b0f70;
            case 0x1B0F74u: goto label_1b0f74;
            case 0x1B0F78u: goto label_1b0f78;
            case 0x1B0F7Cu: goto label_1b0f7c;
            case 0x1B0F80u: goto label_1b0f80;
            case 0x1B0F84u: goto label_1b0f84;
            case 0x1B0F88u: goto label_1b0f88;
            case 0x1B0F8Cu: goto label_1b0f8c;
            case 0x1B0F90u: goto label_1b0f90;
            case 0x1B0F94u: goto label_1b0f94;
            case 0x1B0F98u: goto label_1b0f98;
            case 0x1B0F9Cu: goto label_1b0f9c;
            case 0x1B0FA0u: goto label_1b0fa0;
            case 0x1B0FA4u: goto label_1b0fa4;
            case 0x1B0FA8u: goto label_1b0fa8;
            case 0x1B0FACu: goto label_1b0fac;
            case 0x1B0FB0u: goto label_1b0fb0;
            case 0x1B0FB4u: goto label_1b0fb4;
            case 0x1B0FB8u: goto label_1b0fb8;
            case 0x1B0FBCu: goto label_1b0fbc;
            case 0x1B0FC0u: goto label_1b0fc0;
            case 0x1B0FC4u: goto label_1b0fc4;
            case 0x1B0FC8u: goto label_1b0fc8;
            case 0x1B0FCCu: goto label_1b0fcc;
            case 0x1B0FD0u: goto label_1b0fd0;
            case 0x1B0FD4u: goto label_1b0fd4;
            case 0x1B0FD8u: goto label_1b0fd8;
            case 0x1B0FDCu: goto label_1b0fdc;
            case 0x1B0FE0u: goto label_1b0fe0;
            case 0x1B0FE4u: goto label_1b0fe4;
            case 0x1B0FE8u: goto label_1b0fe8;
            case 0x1B0FECu: goto label_1b0fec;
            case 0x1B0FF0u: goto label_1b0ff0;
            case 0x1B0FF4u: goto label_1b0ff4;
            case 0x1B0FF8u: goto label_1b0ff8;
            case 0x1B0FFCu: goto label_1b0ffc;
            case 0x1B1000u: goto label_1b1000;
            case 0x1B1004u: goto label_1b1004;
            case 0x1B1008u: goto label_1b1008;
            case 0x1B100Cu: goto label_1b100c;
            case 0x1B1010u: goto label_1b1010;
            case 0x1B1014u: goto label_1b1014;
            case 0x1B1018u: goto label_1b1018;
            case 0x1B101Cu: goto label_1b101c;
            case 0x1B1020u: goto label_1b1020;
            case 0x1B1024u: goto label_1b1024;
            case 0x1B1028u: goto label_1b1028;
            case 0x1B102Cu: goto label_1b102c;
            case 0x1B1030u: goto label_1b1030;
            case 0x1B1034u: goto label_1b1034;
            case 0x1B1038u: goto label_1b1038;
            case 0x1B103Cu: goto label_1b103c;
            case 0x1B1040u: goto label_1b1040;
            case 0x1B1044u: goto label_1b1044;
            case 0x1B1048u: goto label_1b1048;
            case 0x1B104Cu: goto label_1b104c;
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1054u: goto label_1b1054;
            case 0x1B1058u: goto label_1b1058;
            case 0x1B105Cu: goto label_1b105c;
            case 0x1B1060u: goto label_1b1060;
            case 0x1B1064u: goto label_1b1064;
            case 0x1B1068u: goto label_1b1068;
            case 0x1B106Cu: goto label_1b106c;
            case 0x1B1070u: goto label_1b1070;
            case 0x1B1074u: goto label_1b1074;
            case 0x1B1078u: goto label_1b1078;
            case 0x1B107Cu: goto label_1b107c;
            case 0x1B1080u: goto label_1b1080;
            case 0x1B1084u: goto label_1b1084;
            case 0x1B1088u: goto label_1b1088;
            case 0x1B108Cu: goto label_1b108c;
            case 0x1B1090u: goto label_1b1090;
            case 0x1B1094u: goto label_1b1094;
            case 0x1B1098u: goto label_1b1098;
            case 0x1B109Cu: goto label_1b109c;
            case 0x1B10A0u: goto label_1b10a0;
            case 0x1B10A4u: goto label_1b10a4;
            case 0x1B10A8u: goto label_1b10a8;
            case 0x1B10ACu: goto label_1b10ac;
            case 0x1B10B0u: goto label_1b10b0;
            case 0x1B10B4u: goto label_1b10b4;
            case 0x1B10B8u: goto label_1b10b8;
            case 0x1B10BCu: goto label_1b10bc;
            case 0x1B10C0u: goto label_1b10c0;
            case 0x1B10C4u: goto label_1b10c4;
            case 0x1B10C8u: goto label_1b10c8;
            case 0x1B10CCu: goto label_1b10cc;
            case 0x1B10D0u: goto label_1b10d0;
            case 0x1B10D4u: goto label_1b10d4;
            case 0x1B10D8u: goto label_1b10d8;
            case 0x1B10DCu: goto label_1b10dc;
            case 0x1B10E0u: goto label_1b10e0;
            case 0x1B10E4u: goto label_1b10e4;
            case 0x1B10E8u: goto label_1b10e8;
            case 0x1B10ECu: goto label_1b10ec;
            case 0x1B10F0u: goto label_1b10f0;
            case 0x1B10F4u: goto label_1b10f4;
            case 0x1B10F8u: goto label_1b10f8;
            case 0x1B10FCu: goto label_1b10fc;
            case 0x1B1100u: goto label_1b1100;
            case 0x1B1104u: goto label_1b1104;
            case 0x1B1108u: goto label_1b1108;
            case 0x1B110Cu: goto label_1b110c;
            case 0x1B1110u: goto label_1b1110;
            case 0x1B1114u: goto label_1b1114;
            case 0x1B1118u: goto label_1b1118;
            case 0x1B111Cu: goto label_1b111c;
            case 0x1B1120u: goto label_1b1120;
            case 0x1B1124u: goto label_1b1124;
            case 0x1B1128u: goto label_1b1128;
            case 0x1B112Cu: goto label_1b112c;
            case 0x1B1130u: goto label_1b1130;
            case 0x1B1134u: goto label_1b1134;
            case 0x1B1138u: goto label_1b1138;
            case 0x1B113Cu: goto label_1b113c;
            case 0x1B1140u: goto label_1b1140;
            case 0x1B1144u: goto label_1b1144;
            case 0x1B1148u: goto label_1b1148;
            case 0x1B114Cu: goto label_1b114c;
            case 0x1B1150u: goto label_1b1150;
            case 0x1B1154u: goto label_1b1154;
            case 0x1B1158u: goto label_1b1158;
            case 0x1B115Cu: goto label_1b115c;
            case 0x1B1160u: goto label_1b1160;
            case 0x1B1164u: goto label_1b1164;
            case 0x1B1168u: goto label_1b1168;
            case 0x1B116Cu: goto label_1b116c;
            case 0x1B1170u: goto label_1b1170;
            case 0x1B1174u: goto label_1b1174;
            case 0x1B1178u: goto label_1b1178;
            case 0x1B117Cu: goto label_1b117c;
            case 0x1B1180u: goto label_1b1180;
            case 0x1B1184u: goto label_1b1184;
            case 0x1B1188u: goto label_1b1188;
            case 0x1B118Cu: goto label_1b118c;
            case 0x1B1190u: goto label_1b1190;
            case 0x1B1194u: goto label_1b1194;
            case 0x1B1198u: goto label_1b1198;
            case 0x1B119Cu: goto label_1b119c;
            case 0x1B11A0u: goto label_1b11a0;
            case 0x1B11A4u: goto label_1b11a4;
            case 0x1B11A8u: goto label_1b11a8;
            case 0x1B11ACu: goto label_1b11ac;
            case 0x1B11B0u: goto label_1b11b0;
            case 0x1B11B4u: goto label_1b11b4;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11C0u: goto label_1b11c0;
            case 0x1B11C4u: goto label_1b11c4;
            case 0x1B11C8u: goto label_1b11c8;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11D0u: goto label_1b11d0;
            case 0x1B11D4u: goto label_1b11d4;
            case 0x1B11D8u: goto label_1b11d8;
            case 0x1B11DCu: goto label_1b11dc;
            case 0x1B11E0u: goto label_1b11e0;
            case 0x1B11E4u: goto label_1b11e4;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B11ECu: goto label_1b11ec;
            case 0x1B11F0u: goto label_1b11f0;
            case 0x1B11F4u: goto label_1b11f4;
            case 0x1B11F8u: goto label_1b11f8;
            case 0x1B11FCu: goto label_1b11fc;
            case 0x1B1200u: goto label_1b1200;
            case 0x1B1204u: goto label_1b1204;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B120Cu: goto label_1b120c;
            case 0x1B1210u: goto label_1b1210;
            case 0x1B1214u: goto label_1b1214;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B121Cu: goto label_1b121c;
            case 0x1B1220u: goto label_1b1220;
            case 0x1B1224u: goto label_1b1224;
            case 0x1B1228u: goto label_1b1228;
            case 0x1B122Cu: goto label_1b122c;
            case 0x1B1230u: goto label_1b1230;
            case 0x1B1234u: goto label_1b1234;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B123Cu: goto label_1b123c;
            case 0x1B1240u: goto label_1b1240;
            case 0x1B1244u: goto label_1b1244;
            case 0x1B1248u: goto label_1b1248;
            case 0x1B124Cu: goto label_1b124c;
            case 0x1B1250u: goto label_1b1250;
            case 0x1B1254u: goto label_1b1254;
            case 0x1B1258u: goto label_1b1258;
            case 0x1B125Cu: goto label_1b125c;
            case 0x1B1260u: goto label_1b1260;
            case 0x1B1264u: goto label_1b1264;
            case 0x1B1268u: goto label_1b1268;
            case 0x1B126Cu: goto label_1b126c;
            case 0x1B1270u: goto label_1b1270;
            case 0x1B1274u: goto label_1b1274;
            case 0x1B1278u: goto label_1b1278;
            case 0x1B127Cu: goto label_1b127c;
            case 0x1B1280u: goto label_1b1280;
            case 0x1B1284u: goto label_1b1284;
            case 0x1B1288u: goto label_1b1288;
            case 0x1B128Cu: goto label_1b128c;
            case 0x1B1290u: goto label_1b1290;
            case 0x1B1294u: goto label_1b1294;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12A0u: goto label_1b12a0;
            case 0x1B12A4u: goto label_1b12a4;
            case 0x1B12A8u: goto label_1b12a8;
            case 0x1B12ACu: goto label_1b12ac;
            case 0x1B12B0u: goto label_1b12b0;
            case 0x1B12B4u: goto label_1b12b4;
            case 0x1B12B8u: goto label_1b12b8;
            case 0x1B12BCu: goto label_1b12bc;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12C4u: goto label_1b12c4;
            case 0x1B12C8u: goto label_1b12c8;
            case 0x1B12CCu: goto label_1b12cc;
            case 0x1B12D0u: goto label_1b12d0;
            case 0x1B12D4u: goto label_1b12d4;
            case 0x1B12D8u: goto label_1b12d8;
            case 0x1B12DCu: goto label_1b12dc;
            case 0x1B12E0u: goto label_1b12e0;
            case 0x1B12E4u: goto label_1b12e4;
            case 0x1B12E8u: goto label_1b12e8;
            case 0x1B12ECu: goto label_1b12ec;
            case 0x1B12F0u: goto label_1b12f0;
            case 0x1B12F4u: goto label_1b12f4;
            case 0x1B12F8u: goto label_1b12f8;
            case 0x1B12FCu: goto label_1b12fc;
            case 0x1B1300u: goto label_1b1300;
            case 0x1B1304u: goto label_1b1304;
            case 0x1B1308u: goto label_1b1308;
            case 0x1B130Cu: goto label_1b130c;
            case 0x1B1310u: goto label_1b1310;
            case 0x1B1314u: goto label_1b1314;
            case 0x1B1318u: goto label_1b1318;
            case 0x1B131Cu: goto label_1b131c;
            case 0x1B1320u: goto label_1b1320;
            case 0x1B1324u: goto label_1b1324;
            case 0x1B1328u: goto label_1b1328;
            case 0x1B132Cu: goto label_1b132c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1224u; }
            if (ctx->pc != 0x1B1224u) { return; }
        }
    }
    ctx->pc = 0x1B1224u;
label_1b1224:
    // 0x1b1224: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1b1228:
    if (ctx->pc == 0x1B1228u) {
        ctx->pc = 0x1B122Cu;
        goto label_1b122c;
    }
    ctx->pc = 0x1B1224u;
    {
        const bool branch_taken_0x1b1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1224) {
            ctx->pc = 0x1B1320u;
            goto label_1b1320;
        }
    }
    ctx->pc = 0x1B122Cu;
label_1b122c:
    // 0x1b122c: 0x0  nop
    ctx->pc = 0x1b122cu;
    // NOP
label_1b1230:
    // 0x1b1230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1b1234:
    // 0x1b1234: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1b1238:
    if (ctx->pc == 0x1B1238u) {
        ctx->pc = 0x1B123Cu;
        goto label_1b123c;
    }
    ctx->pc = 0x1B1234u;
    {
        const bool branch_taken_0x1b1234 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1b1234) {
            ctx->pc = 0x1B1300u;
            goto label_1b1300;
        }
    }
    ctx->pc = 0x1B123Cu;
label_1b123c:
    // 0x1b123c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1240:
    // 0x1b1240: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1b1244:
    // 0x1b1244: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b1244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1248:
    // 0x1b1248: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b1248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b124c:
    // 0x1b124c: 0xc05d080  jal         func_174200
label_1b1250:
    if (ctx->pc == 0x1B1250u) {
        ctx->pc = 0x1B1250u;
            // 0x1b1250: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B1254u;
        goto label_1b1254;
    }
    ctx->pc = 0x1B124Cu;
    SET_GPR_U32(ctx, 31, 0x1B1254u);
    ctx->pc = 0x1B1250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B124Cu;
            // 0x1b1250: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1254u; }
        if (ctx->pc != 0x1B1254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1254u; }
        if (ctx->pc != 0x1B1254u) { return; }
    }
    ctx->pc = 0x1B1254u;
label_1b1254:
    // 0x1b1254: 0xc050bb4  jal         func_142ED0
label_1b1258:
    if (ctx->pc == 0x1B1258u) {
        ctx->pc = 0x1B125Cu;
        goto label_1b125c;
    }
    ctx->pc = 0x1B1254u;
    SET_GPR_U32(ctx, 31, 0x1B125Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B125Cu; }
        if (ctx->pc != 0x1B125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B125Cu; }
        if (ctx->pc != 0x1B125Cu) { return; }
    }
    ctx->pc = 0x1B125Cu;
label_1b125c:
    // 0x1b125c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b125cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b1260:
    // 0x1b1260: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b1264:
    if (ctx->pc == 0x1B1264u) {
        ctx->pc = 0x1B1268u;
        goto label_1b1268;
    }
    ctx->pc = 0x1B1260u;
    {
        const bool branch_taken_0x1b1260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1260) {
            ctx->pc = 0x1B1280u;
            goto label_1b1280;
        }
    }
    ctx->pc = 0x1B1268u;
label_1b1268:
    // 0x1b1268: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b1268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b126c:
    // 0x1b126c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1b126cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1b1270:
    // 0x1b1270: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b1270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1274:
    // 0x1b1274: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b1274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b1278:
    // 0x1b1278: 0xc05d080  jal         func_174200
label_1b127c:
    if (ctx->pc == 0x1B127Cu) {
        ctx->pc = 0x1B127Cu;
            // 0x1b127c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B1280u;
        goto label_1b1280;
    }
    ctx->pc = 0x1B1278u;
    SET_GPR_U32(ctx, 31, 0x1B1280u);
    ctx->pc = 0x1B127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1278u;
            // 0x1b127c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1280u; }
        if (ctx->pc != 0x1B1280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1280u; }
        if (ctx->pc != 0x1B1280u) { return; }
    }
    ctx->pc = 0x1B1280u;
label_1b1280:
    // 0x1b1280: 0xc050bb4  jal         func_142ED0
label_1b1284:
    if (ctx->pc == 0x1B1284u) {
        ctx->pc = 0x1B1288u;
        goto label_1b1288;
    }
    ctx->pc = 0x1B1280u;
    SET_GPR_U32(ctx, 31, 0x1B1288u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1288u; }
        if (ctx->pc != 0x1B1288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1288u; }
        if (ctx->pc != 0x1B1288u) { return; }
    }
    ctx->pc = 0x1B1288u;
label_1b1288:
    // 0x1b1288: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1288u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1b128c:
    // 0x1b128c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1b1290:
    if (ctx->pc == 0x1B1290u) {
        ctx->pc = 0x1B1294u;
        goto label_1b1294;
    }
    ctx->pc = 0x1B128Cu;
    {
        const bool branch_taken_0x1b128c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b128c) {
            ctx->pc = 0x1B12B0u;
            goto label_1b12b0;
        }
    }
    ctx->pc = 0x1B1294u;
label_1b1294:
    // 0x1b1294: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1b1294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b1298:
    // 0x1b1298: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1b1298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1b129c:
    // 0x1b129c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1b129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b12a0:
    // 0x1b12a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1b12a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1b12a4:
    // 0x1b12a4: 0xc05d080  jal         func_174200
label_1b12a8:
    if (ctx->pc == 0x1B12A8u) {
        ctx->pc = 0x1B12A8u;
            // 0x1b12a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1B12ACu;
        goto label_1b12ac;
    }
    ctx->pc = 0x1B12A4u;
    SET_GPR_U32(ctx, 31, 0x1B12ACu);
    ctx->pc = 0x1B12A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12A4u;
            // 0x1b12a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12ACu; }
        if (ctx->pc != 0x1B12ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12ACu; }
        if (ctx->pc != 0x1B12ACu) { return; }
    }
    ctx->pc = 0x1B12ACu;
label_1b12ac:
    // 0x1b12ac: 0x0  nop
    ctx->pc = 0x1b12acu;
    // NOP
label_1b12b0:
    // 0x1b12b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1b12b4:
    // 0x1b12b4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1b12b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b12b8:
    // 0x1b12b8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1b12b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b12bc:
    // 0x1b12bc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1b12bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b12c0:
    // 0x1b12c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b12c4:
    // 0x1b12c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b12c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1b12c8:
    // 0x1b12c8: 0x0  nop
    ctx->pc = 0x1b12c8u;
    // NOP
label_1b12cc:
    // 0x1b12cc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1b12ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1b12d0:
    // 0x1b12d0: 0xc053740  jal         func_14DD00
label_1b12d4:
    if (ctx->pc == 0x1B12D4u) {
        ctx->pc = 0x1B12D4u;
            // 0x1b12d4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1B12D8u;
        goto label_1b12d8;
    }
    ctx->pc = 0x1B12D0u;
    SET_GPR_U32(ctx, 31, 0x1B12D8u);
    ctx->pc = 0x1B12D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12D0u;
            // 0x1b12d4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12D8u; }
        if (ctx->pc != 0x1B12D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12D8u; }
        if (ctx->pc != 0x1B12D8u) { return; }
    }
    ctx->pc = 0x1B12D8u;
label_1b12d8:
    // 0x1b12d8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1b12d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b12dc:
    // 0x1b12dc: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b12e0:
    // 0x1b12e0: 0xc07b0fc  jal         func_1EC3F0
label_1b12e4:
    if (ctx->pc == 0x1B12E4u) {
        ctx->pc = 0x1B12E4u;
            // 0x1b12e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1B12E8u;
        goto label_1b12e8;
    }
    ctx->pc = 0x1B12E0u;
    SET_GPR_U32(ctx, 31, 0x1B12E8u);
    ctx->pc = 0x1B12E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12E0u;
            // 0x1b12e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12E8u; }
        if (ctx->pc != 0x1B12E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12E8u; }
        if (ctx->pc != 0x1B12E8u) { return; }
    }
    ctx->pc = 0x1B12E8u;
label_1b12e8:
    // 0x1b12e8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1b12ec:
    // 0x1b12ec: 0x40f809  jalr        $v0
label_1b12f0:
    if (ctx->pc == 0x1B12F0u) {
        ctx->pc = 0x1B12F0u;
            // 0x1b12f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B12F4u;
        goto label_1b12f4;
    }
    ctx->pc = 0x1B12ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B12F4u);
        ctx->pc = 0x1B12F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12ECu;
            // 0x1b12f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0440u: goto label_1b0440;
            case 0x1B0444u: goto label_1b0444;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B044Cu: goto label_1b044c;
            case 0x1B0450u: goto label_1b0450;
            case 0x1B0454u: goto label_1b0454;
            case 0x1B0458u: goto label_1b0458;
            case 0x1B045Cu: goto label_1b045c;
            case 0x1B0460u: goto label_1b0460;
            case 0x1B0464u: goto label_1b0464;
            case 0x1B0468u: goto label_1b0468;
            case 0x1B046Cu: goto label_1b046c;
            case 0x1B0470u: goto label_1b0470;
            case 0x1B0474u: goto label_1b0474;
            case 0x1B0478u: goto label_1b0478;
            case 0x1B047Cu: goto label_1b047c;
            case 0x1B0480u: goto label_1b0480;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B048Cu: goto label_1b048c;
            case 0x1B0490u: goto label_1b0490;
            case 0x1B0494u: goto label_1b0494;
            case 0x1B0498u: goto label_1b0498;
            case 0x1B049Cu: goto label_1b049c;
            case 0x1B04A0u: goto label_1b04a0;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04A8u: goto label_1b04a8;
            case 0x1B04ACu: goto label_1b04ac;
            case 0x1B04B0u: goto label_1b04b0;
            case 0x1B04B4u: goto label_1b04b4;
            case 0x1B04B8u: goto label_1b04b8;
            case 0x1B04BCu: goto label_1b04bc;
            case 0x1B04C0u: goto label_1b04c0;
            case 0x1B04C4u: goto label_1b04c4;
            case 0x1B04C8u: goto label_1b04c8;
            case 0x1B04CCu: goto label_1b04cc;
            case 0x1B04D0u: goto label_1b04d0;
            case 0x1B04D4u: goto label_1b04d4;
            case 0x1B04D8u: goto label_1b04d8;
            case 0x1B04DCu: goto label_1b04dc;
            case 0x1B04E0u: goto label_1b04e0;
            case 0x1B04E4u: goto label_1b04e4;
            case 0x1B04E8u: goto label_1b04e8;
            case 0x1B04ECu: goto label_1b04ec;
            case 0x1B04F0u: goto label_1b04f0;
            case 0x1B04F4u: goto label_1b04f4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0500u: goto label_1b0500;
            case 0x1B0504u: goto label_1b0504;
            case 0x1B0508u: goto label_1b0508;
            case 0x1B050Cu: goto label_1b050c;
            case 0x1B0510u: goto label_1b0510;
            case 0x1B0514u: goto label_1b0514;
            case 0x1B0518u: goto label_1b0518;
            case 0x1B051Cu: goto label_1b051c;
            case 0x1B0520u: goto label_1b0520;
            case 0x1B0524u: goto label_1b0524;
            case 0x1B0528u: goto label_1b0528;
            case 0x1B052Cu: goto label_1b052c;
            case 0x1B0530u: goto label_1b0530;
            case 0x1B0534u: goto label_1b0534;
            case 0x1B0538u: goto label_1b0538;
            case 0x1B053Cu: goto label_1b053c;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B0544u: goto label_1b0544;
            case 0x1B0548u: goto label_1b0548;
            case 0x1B054Cu: goto label_1b054c;
            case 0x1B0550u: goto label_1b0550;
            case 0x1B0554u: goto label_1b0554;
            case 0x1B0558u: goto label_1b0558;
            case 0x1B055Cu: goto label_1b055c;
            case 0x1B0560u: goto label_1b0560;
            case 0x1B0564u: goto label_1b0564;
            case 0x1B0568u: goto label_1b0568;
            case 0x1B056Cu: goto label_1b056c;
            case 0x1B0570u: goto label_1b0570;
            case 0x1B0574u: goto label_1b0574;
            case 0x1B0578u: goto label_1b0578;
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0580u: goto label_1b0580;
            case 0x1B0584u: goto label_1b0584;
            case 0x1B0588u: goto label_1b0588;
            case 0x1B058Cu: goto label_1b058c;
            case 0x1B0590u: goto label_1b0590;
            case 0x1B0594u: goto label_1b0594;
            case 0x1B0598u: goto label_1b0598;
            case 0x1B059Cu: goto label_1b059c;
            case 0x1B05A0u: goto label_1b05a0;
            case 0x1B05A4u: goto label_1b05a4;
            case 0x1B05A8u: goto label_1b05a8;
            case 0x1B05ACu: goto label_1b05ac;
            case 0x1B05B0u: goto label_1b05b0;
            case 0x1B05B4u: goto label_1b05b4;
            case 0x1B05B8u: goto label_1b05b8;
            case 0x1B05BCu: goto label_1b05bc;
            case 0x1B05C0u: goto label_1b05c0;
            case 0x1B05C4u: goto label_1b05c4;
            case 0x1B05C8u: goto label_1b05c8;
            case 0x1B05CCu: goto label_1b05cc;
            case 0x1B05D0u: goto label_1b05d0;
            case 0x1B05D4u: goto label_1b05d4;
            case 0x1B05D8u: goto label_1b05d8;
            case 0x1B05DCu: goto label_1b05dc;
            case 0x1B05E0u: goto label_1b05e0;
            case 0x1B05E4u: goto label_1b05e4;
            case 0x1B05E8u: goto label_1b05e8;
            case 0x1B05ECu: goto label_1b05ec;
            case 0x1B05F0u: goto label_1b05f0;
            case 0x1B05F4u: goto label_1b05f4;
            case 0x1B05F8u: goto label_1b05f8;
            case 0x1B05FCu: goto label_1b05fc;
            case 0x1B0600u: goto label_1b0600;
            case 0x1B0604u: goto label_1b0604;
            case 0x1B0608u: goto label_1b0608;
            case 0x1B060Cu: goto label_1b060c;
            case 0x1B0610u: goto label_1b0610;
            case 0x1B0614u: goto label_1b0614;
            case 0x1B0618u: goto label_1b0618;
            case 0x1B061Cu: goto label_1b061c;
            case 0x1B0620u: goto label_1b0620;
            case 0x1B0624u: goto label_1b0624;
            case 0x1B0628u: goto label_1b0628;
            case 0x1B062Cu: goto label_1b062c;
            case 0x1B0630u: goto label_1b0630;
            case 0x1B0634u: goto label_1b0634;
            case 0x1B0638u: goto label_1b0638;
            case 0x1B063Cu: goto label_1b063c;
            case 0x1B0640u: goto label_1b0640;
            case 0x1B0644u: goto label_1b0644;
            case 0x1B0648u: goto label_1b0648;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0650u: goto label_1b0650;
            case 0x1B0654u: goto label_1b0654;
            case 0x1B0658u: goto label_1b0658;
            case 0x1B065Cu: goto label_1b065c;
            case 0x1B0660u: goto label_1b0660;
            case 0x1B0664u: goto label_1b0664;
            case 0x1B0668u: goto label_1b0668;
            case 0x1B066Cu: goto label_1b066c;
            case 0x1B0670u: goto label_1b0670;
            case 0x1B0674u: goto label_1b0674;
            case 0x1B0678u: goto label_1b0678;
            case 0x1B067Cu: goto label_1b067c;
            case 0x1B0680u: goto label_1b0680;
            case 0x1B0684u: goto label_1b0684;
            case 0x1B0688u: goto label_1b0688;
            case 0x1B068Cu: goto label_1b068c;
            case 0x1B0690u: goto label_1b0690;
            case 0x1B0694u: goto label_1b0694;
            case 0x1B0698u: goto label_1b0698;
            case 0x1B069Cu: goto label_1b069c;
            case 0x1B06A0u: goto label_1b06a0;
            case 0x1B06A4u: goto label_1b06a4;
            case 0x1B06A8u: goto label_1b06a8;
            case 0x1B06ACu: goto label_1b06ac;
            case 0x1B06B0u: goto label_1b06b0;
            case 0x1B06B4u: goto label_1b06b4;
            case 0x1B06B8u: goto label_1b06b8;
            case 0x1B06BCu: goto label_1b06bc;
            case 0x1B06C0u: goto label_1b06c0;
            case 0x1B06C4u: goto label_1b06c4;
            case 0x1B06C8u: goto label_1b06c8;
            case 0x1B06CCu: goto label_1b06cc;
            case 0x1B06D0u: goto label_1b06d0;
            case 0x1B06D4u: goto label_1b06d4;
            case 0x1B06D8u: goto label_1b06d8;
            case 0x1B06DCu: goto label_1b06dc;
            case 0x1B06E0u: goto label_1b06e0;
            case 0x1B06E4u: goto label_1b06e4;
            case 0x1B06E8u: goto label_1b06e8;
            case 0x1B06ECu: goto label_1b06ec;
            case 0x1B06F0u: goto label_1b06f0;
            case 0x1B06F4u: goto label_1b06f4;
            case 0x1B06F8u: goto label_1b06f8;
            case 0x1B06FCu: goto label_1b06fc;
            case 0x1B0700u: goto label_1b0700;
            case 0x1B0704u: goto label_1b0704;
            case 0x1B0708u: goto label_1b0708;
            case 0x1B070Cu: goto label_1b070c;
            case 0x1B0710u: goto label_1b0710;
            case 0x1B0714u: goto label_1b0714;
            case 0x1B0718u: goto label_1b0718;
            case 0x1B071Cu: goto label_1b071c;
            case 0x1B0720u: goto label_1b0720;
            case 0x1B0724u: goto label_1b0724;
            case 0x1B0728u: goto label_1b0728;
            case 0x1B072Cu: goto label_1b072c;
            case 0x1B0730u: goto label_1b0730;
            case 0x1B0734u: goto label_1b0734;
            case 0x1B0738u: goto label_1b0738;
            case 0x1B073Cu: goto label_1b073c;
            case 0x1B0740u: goto label_1b0740;
            case 0x1B0744u: goto label_1b0744;
            case 0x1B0748u: goto label_1b0748;
            case 0x1B074Cu: goto label_1b074c;
            case 0x1B0750u: goto label_1b0750;
            case 0x1B0754u: goto label_1b0754;
            case 0x1B0758u: goto label_1b0758;
            case 0x1B075Cu: goto label_1b075c;
            case 0x1B0760u: goto label_1b0760;
            case 0x1B0764u: goto label_1b0764;
            case 0x1B0768u: goto label_1b0768;
            case 0x1B076Cu: goto label_1b076c;
            case 0x1B0770u: goto label_1b0770;
            case 0x1B0774u: goto label_1b0774;
            case 0x1B0778u: goto label_1b0778;
            case 0x1B077Cu: goto label_1b077c;
            case 0x1B0780u: goto label_1b0780;
            case 0x1B0784u: goto label_1b0784;
            case 0x1B0788u: goto label_1b0788;
            case 0x1B078Cu: goto label_1b078c;
            case 0x1B0790u: goto label_1b0790;
            case 0x1B0794u: goto label_1b0794;
            case 0x1B0798u: goto label_1b0798;
            case 0x1B079Cu: goto label_1b079c;
            case 0x1B07A0u: goto label_1b07a0;
            case 0x1B07A4u: goto label_1b07a4;
            case 0x1B07A8u: goto label_1b07a8;
            case 0x1B07ACu: goto label_1b07ac;
            case 0x1B07B0u: goto label_1b07b0;
            case 0x1B07B4u: goto label_1b07b4;
            case 0x1B07B8u: goto label_1b07b8;
            case 0x1B07BCu: goto label_1b07bc;
            case 0x1B07C0u: goto label_1b07c0;
            case 0x1B07C4u: goto label_1b07c4;
            case 0x1B07C8u: goto label_1b07c8;
            case 0x1B07CCu: goto label_1b07cc;
            case 0x1B07D0u: goto label_1b07d0;
            case 0x1B07D4u: goto label_1b07d4;
            case 0x1B07D8u: goto label_1b07d8;
            case 0x1B07DCu: goto label_1b07dc;
            case 0x1B07E0u: goto label_1b07e0;
            case 0x1B07E4u: goto label_1b07e4;
            case 0x1B07E8u: goto label_1b07e8;
            case 0x1B07ECu: goto label_1b07ec;
            case 0x1B07F0u: goto label_1b07f0;
            case 0x1B07F4u: goto label_1b07f4;
            case 0x1B07F8u: goto label_1b07f8;
            case 0x1B07FCu: goto label_1b07fc;
            case 0x1B0800u: goto label_1b0800;
            case 0x1B0804u: goto label_1b0804;
            case 0x1B0808u: goto label_1b0808;
            case 0x1B080Cu: goto label_1b080c;
            case 0x1B0810u: goto label_1b0810;
            case 0x1B0814u: goto label_1b0814;
            case 0x1B0818u: goto label_1b0818;
            case 0x1B081Cu: goto label_1b081c;
            case 0x1B0820u: goto label_1b0820;
            case 0x1B0824u: goto label_1b0824;
            case 0x1B0828u: goto label_1b0828;
            case 0x1B082Cu: goto label_1b082c;
            case 0x1B0830u: goto label_1b0830;
            case 0x1B0834u: goto label_1b0834;
            case 0x1B0838u: goto label_1b0838;
            case 0x1B083Cu: goto label_1b083c;
            case 0x1B0840u: goto label_1b0840;
            case 0x1B0844u: goto label_1b0844;
            case 0x1B0848u: goto label_1b0848;
            case 0x1B084Cu: goto label_1b084c;
            case 0x1B0850u: goto label_1b0850;
            case 0x1B0854u: goto label_1b0854;
            case 0x1B0858u: goto label_1b0858;
            case 0x1B085Cu: goto label_1b085c;
            case 0x1B0860u: goto label_1b0860;
            case 0x1B0864u: goto label_1b0864;
            case 0x1B0868u: goto label_1b0868;
            case 0x1B086Cu: goto label_1b086c;
            case 0x1B0870u: goto label_1b0870;
            case 0x1B0874u: goto label_1b0874;
            case 0x1B0878u: goto label_1b0878;
            case 0x1B087Cu: goto label_1b087c;
            case 0x1B0880u: goto label_1b0880;
            case 0x1B0884u: goto label_1b0884;
            case 0x1B0888u: goto label_1b0888;
            case 0x1B088Cu: goto label_1b088c;
            case 0x1B0890u: goto label_1b0890;
            case 0x1B0894u: goto label_1b0894;
            case 0x1B0898u: goto label_1b0898;
            case 0x1B089Cu: goto label_1b089c;
            case 0x1B08A0u: goto label_1b08a0;
            case 0x1B08A4u: goto label_1b08a4;
            case 0x1B08A8u: goto label_1b08a8;
            case 0x1B08ACu: goto label_1b08ac;
            case 0x1B08B0u: goto label_1b08b0;
            case 0x1B08B4u: goto label_1b08b4;
            case 0x1B08B8u: goto label_1b08b8;
            case 0x1B08BCu: goto label_1b08bc;
            case 0x1B08C0u: goto label_1b08c0;
            case 0x1B08C4u: goto label_1b08c4;
            case 0x1B08C8u: goto label_1b08c8;
            case 0x1B08CCu: goto label_1b08cc;
            case 0x1B08D0u: goto label_1b08d0;
            case 0x1B08D4u: goto label_1b08d4;
            case 0x1B08D8u: goto label_1b08d8;
            case 0x1B08DCu: goto label_1b08dc;
            case 0x1B08E0u: goto label_1b08e0;
            case 0x1B08E4u: goto label_1b08e4;
            case 0x1B08E8u: goto label_1b08e8;
            case 0x1B08ECu: goto label_1b08ec;
            case 0x1B08F0u: goto label_1b08f0;
            case 0x1B08F4u: goto label_1b08f4;
            case 0x1B08F8u: goto label_1b08f8;
            case 0x1B08FCu: goto label_1b08fc;
            case 0x1B0900u: goto label_1b0900;
            case 0x1B0904u: goto label_1b0904;
            case 0x1B0908u: goto label_1b0908;
            case 0x1B090Cu: goto label_1b090c;
            case 0x1B0910u: goto label_1b0910;
            case 0x1B0914u: goto label_1b0914;
            case 0x1B0918u: goto label_1b0918;
            case 0x1B091Cu: goto label_1b091c;
            case 0x1B0920u: goto label_1b0920;
            case 0x1B0924u: goto label_1b0924;
            case 0x1B0928u: goto label_1b0928;
            case 0x1B092Cu: goto label_1b092c;
            case 0x1B0930u: goto label_1b0930;
            case 0x1B0934u: goto label_1b0934;
            case 0x1B0938u: goto label_1b0938;
            case 0x1B093Cu: goto label_1b093c;
            case 0x1B0940u: goto label_1b0940;
            case 0x1B0944u: goto label_1b0944;
            case 0x1B0948u: goto label_1b0948;
            case 0x1B094Cu: goto label_1b094c;
            case 0x1B0950u: goto label_1b0950;
            case 0x1B0954u: goto label_1b0954;
            case 0x1B0958u: goto label_1b0958;
            case 0x1B095Cu: goto label_1b095c;
            case 0x1B0960u: goto label_1b0960;
            case 0x1B0964u: goto label_1b0964;
            case 0x1B0968u: goto label_1b0968;
            case 0x1B096Cu: goto label_1b096c;
            case 0x1B0970u: goto label_1b0970;
            case 0x1B0974u: goto label_1b0974;
            case 0x1B0978u: goto label_1b0978;
            case 0x1B097Cu: goto label_1b097c;
            case 0x1B0980u: goto label_1b0980;
            case 0x1B0984u: goto label_1b0984;
            case 0x1B0988u: goto label_1b0988;
            case 0x1B098Cu: goto label_1b098c;
            case 0x1B0990u: goto label_1b0990;
            case 0x1B0994u: goto label_1b0994;
            case 0x1B0998u: goto label_1b0998;
            case 0x1B099Cu: goto label_1b099c;
            case 0x1B09A0u: goto label_1b09a0;
            case 0x1B09A4u: goto label_1b09a4;
            case 0x1B09A8u: goto label_1b09a8;
            case 0x1B09ACu: goto label_1b09ac;
            case 0x1B09B0u: goto label_1b09b0;
            case 0x1B09B4u: goto label_1b09b4;
            case 0x1B09B8u: goto label_1b09b8;
            case 0x1B09BCu: goto label_1b09bc;
            case 0x1B09C0u: goto label_1b09c0;
            case 0x1B09C4u: goto label_1b09c4;
            case 0x1B09C8u: goto label_1b09c8;
            case 0x1B09CCu: goto label_1b09cc;
            case 0x1B09D0u: goto label_1b09d0;
            case 0x1B09D4u: goto label_1b09d4;
            case 0x1B09D8u: goto label_1b09d8;
            case 0x1B09DCu: goto label_1b09dc;
            case 0x1B09E0u: goto label_1b09e0;
            case 0x1B09E4u: goto label_1b09e4;
            case 0x1B09E8u: goto label_1b09e8;
            case 0x1B09ECu: goto label_1b09ec;
            case 0x1B09F0u: goto label_1b09f0;
            case 0x1B09F4u: goto label_1b09f4;
            case 0x1B09F8u: goto label_1b09f8;
            case 0x1B09FCu: goto label_1b09fc;
            case 0x1B0A00u: goto label_1b0a00;
            case 0x1B0A04u: goto label_1b0a04;
            case 0x1B0A08u: goto label_1b0a08;
            case 0x1B0A0Cu: goto label_1b0a0c;
            case 0x1B0A10u: goto label_1b0a10;
            case 0x1B0A14u: goto label_1b0a14;
            case 0x1B0A18u: goto label_1b0a18;
            case 0x1B0A1Cu: goto label_1b0a1c;
            case 0x1B0A20u: goto label_1b0a20;
            case 0x1B0A24u: goto label_1b0a24;
            case 0x1B0A28u: goto label_1b0a28;
            case 0x1B0A2Cu: goto label_1b0a2c;
            case 0x1B0A30u: goto label_1b0a30;
            case 0x1B0A34u: goto label_1b0a34;
            case 0x1B0A38u: goto label_1b0a38;
            case 0x1B0A3Cu: goto label_1b0a3c;
            case 0x1B0A40u: goto label_1b0a40;
            case 0x1B0A44u: goto label_1b0a44;
            case 0x1B0A48u: goto label_1b0a48;
            case 0x1B0A4Cu: goto label_1b0a4c;
            case 0x1B0A50u: goto label_1b0a50;
            case 0x1B0A54u: goto label_1b0a54;
            case 0x1B0A58u: goto label_1b0a58;
            case 0x1B0A5Cu: goto label_1b0a5c;
            case 0x1B0A60u: goto label_1b0a60;
            case 0x1B0A64u: goto label_1b0a64;
            case 0x1B0A68u: goto label_1b0a68;
            case 0x1B0A6Cu: goto label_1b0a6c;
            case 0x1B0A70u: goto label_1b0a70;
            case 0x1B0A74u: goto label_1b0a74;
            case 0x1B0A78u: goto label_1b0a78;
            case 0x1B0A7Cu: goto label_1b0a7c;
            case 0x1B0A80u: goto label_1b0a80;
            case 0x1B0A84u: goto label_1b0a84;
            case 0x1B0A88u: goto label_1b0a88;
            case 0x1B0A8Cu: goto label_1b0a8c;
            case 0x1B0A90u: goto label_1b0a90;
            case 0x1B0A94u: goto label_1b0a94;
            case 0x1B0A98u: goto label_1b0a98;
            case 0x1B0A9Cu: goto label_1b0a9c;
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0AA4u: goto label_1b0aa4;
            case 0x1B0AA8u: goto label_1b0aa8;
            case 0x1B0AACu: goto label_1b0aac;
            case 0x1B0AB0u: goto label_1b0ab0;
            case 0x1B0AB4u: goto label_1b0ab4;
            case 0x1B0AB8u: goto label_1b0ab8;
            case 0x1B0ABCu: goto label_1b0abc;
            case 0x1B0AC0u: goto label_1b0ac0;
            case 0x1B0AC4u: goto label_1b0ac4;
            case 0x1B0AC8u: goto label_1b0ac8;
            case 0x1B0ACCu: goto label_1b0acc;
            case 0x1B0AD0u: goto label_1b0ad0;
            case 0x1B0AD4u: goto label_1b0ad4;
            case 0x1B0AD8u: goto label_1b0ad8;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0AE0u: goto label_1b0ae0;
            case 0x1B0AE4u: goto label_1b0ae4;
            case 0x1B0AE8u: goto label_1b0ae8;
            case 0x1B0AECu: goto label_1b0aec;
            case 0x1B0AF0u: goto label_1b0af0;
            case 0x1B0AF4u: goto label_1b0af4;
            case 0x1B0AF8u: goto label_1b0af8;
            case 0x1B0AFCu: goto label_1b0afc;
            case 0x1B0B00u: goto label_1b0b00;
            case 0x1B0B04u: goto label_1b0b04;
            case 0x1B0B08u: goto label_1b0b08;
            case 0x1B0B0Cu: goto label_1b0b0c;
            case 0x1B0B10u: goto label_1b0b10;
            case 0x1B0B14u: goto label_1b0b14;
            case 0x1B0B18u: goto label_1b0b18;
            case 0x1B0B1Cu: goto label_1b0b1c;
            case 0x1B0B20u: goto label_1b0b20;
            case 0x1B0B24u: goto label_1b0b24;
            case 0x1B0B28u: goto label_1b0b28;
            case 0x1B0B2Cu: goto label_1b0b2c;
            case 0x1B0B30u: goto label_1b0b30;
            case 0x1B0B34u: goto label_1b0b34;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B40u: goto label_1b0b40;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0B48u: goto label_1b0b48;
            case 0x1B0B4Cu: goto label_1b0b4c;
            case 0x1B0B50u: goto label_1b0b50;
            case 0x1B0B54u: goto label_1b0b54;
            case 0x1B0B58u: goto label_1b0b58;
            case 0x1B0B5Cu: goto label_1b0b5c;
            case 0x1B0B60u: goto label_1b0b60;
            case 0x1B0B64u: goto label_1b0b64;
            case 0x1B0B68u: goto label_1b0b68;
            case 0x1B0B6Cu: goto label_1b0b6c;
            case 0x1B0B70u: goto label_1b0b70;
            case 0x1B0B74u: goto label_1b0b74;
            case 0x1B0B78u: goto label_1b0b78;
            case 0x1B0B7Cu: goto label_1b0b7c;
            case 0x1B0B80u: goto label_1b0b80;
            case 0x1B0B84u: goto label_1b0b84;
            case 0x1B0B88u: goto label_1b0b88;
            case 0x1B0B8Cu: goto label_1b0b8c;
            case 0x1B0B90u: goto label_1b0b90;
            case 0x1B0B94u: goto label_1b0b94;
            case 0x1B0B98u: goto label_1b0b98;
            case 0x1B0B9Cu: goto label_1b0b9c;
            case 0x1B0BA0u: goto label_1b0ba0;
            case 0x1B0BA4u: goto label_1b0ba4;
            case 0x1B0BA8u: goto label_1b0ba8;
            case 0x1B0BACu: goto label_1b0bac;
            case 0x1B0BB0u: goto label_1b0bb0;
            case 0x1B0BB4u: goto label_1b0bb4;
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BBCu: goto label_1b0bbc;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BC4u: goto label_1b0bc4;
            case 0x1B0BC8u: goto label_1b0bc8;
            case 0x1B0BCCu: goto label_1b0bcc;
            case 0x1B0BD0u: goto label_1b0bd0;
            case 0x1B0BD4u: goto label_1b0bd4;
            case 0x1B0BD8u: goto label_1b0bd8;
            case 0x1B0BDCu: goto label_1b0bdc;
            case 0x1B0BE0u: goto label_1b0be0;
            case 0x1B0BE4u: goto label_1b0be4;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BECu: goto label_1b0bec;
            case 0x1B0BF0u: goto label_1b0bf0;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C00u: goto label_1b0c00;
            case 0x1B0C04u: goto label_1b0c04;
            case 0x1B0C08u: goto label_1b0c08;
            case 0x1B0C0Cu: goto label_1b0c0c;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C14u: goto label_1b0c14;
            case 0x1B0C18u: goto label_1b0c18;
            case 0x1B0C1Cu: goto label_1b0c1c;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C24u: goto label_1b0c24;
            case 0x1B0C28u: goto label_1b0c28;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C30u: goto label_1b0c30;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            case 0x1B0C44u: goto label_1b0c44;
            case 0x1B0C48u: goto label_1b0c48;
            case 0x1B0C4Cu: goto label_1b0c4c;
            case 0x1B0C50u: goto label_1b0c50;
            case 0x1B0C54u: goto label_1b0c54;
            case 0x1B0C58u: goto label_1b0c58;
            case 0x1B0C5Cu: goto label_1b0c5c;
            case 0x1B0C60u: goto label_1b0c60;
            case 0x1B0C64u: goto label_1b0c64;
            case 0x1B0C68u: goto label_1b0c68;
            case 0x1B0C6Cu: goto label_1b0c6c;
            case 0x1B0C70u: goto label_1b0c70;
            case 0x1B0C74u: goto label_1b0c74;
            case 0x1B0C78u: goto label_1b0c78;
            case 0x1B0C7Cu: goto label_1b0c7c;
            case 0x1B0C80u: goto label_1b0c80;
            case 0x1B0C84u: goto label_1b0c84;
            case 0x1B0C88u: goto label_1b0c88;
            case 0x1B0C8Cu: goto label_1b0c8c;
            case 0x1B0C90u: goto label_1b0c90;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0C98u: goto label_1b0c98;
            case 0x1B0C9Cu: goto label_1b0c9c;
            case 0x1B0CA0u: goto label_1b0ca0;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CA8u: goto label_1b0ca8;
            case 0x1B0CACu: goto label_1b0cac;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0CB4u: goto label_1b0cb4;
            case 0x1B0CB8u: goto label_1b0cb8;
            case 0x1B0CBCu: goto label_1b0cbc;
            case 0x1B0CC0u: goto label_1b0cc0;
            case 0x1B0CC4u: goto label_1b0cc4;
            case 0x1B0CC8u: goto label_1b0cc8;
            case 0x1B0CCCu: goto label_1b0ccc;
            case 0x1B0CD0u: goto label_1b0cd0;
            case 0x1B0CD4u: goto label_1b0cd4;
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0CDCu: goto label_1b0cdc;
            case 0x1B0CE0u: goto label_1b0ce0;
            case 0x1B0CE4u: goto label_1b0ce4;
            case 0x1B0CE8u: goto label_1b0ce8;
            case 0x1B0CECu: goto label_1b0cec;
            case 0x1B0CF0u: goto label_1b0cf0;
            case 0x1B0CF4u: goto label_1b0cf4;
            case 0x1B0CF8u: goto label_1b0cf8;
            case 0x1B0CFCu: goto label_1b0cfc;
            case 0x1B0D00u: goto label_1b0d00;
            case 0x1B0D04u: goto label_1b0d04;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D0Cu: goto label_1b0d0c;
            case 0x1B0D10u: goto label_1b0d10;
            case 0x1B0D14u: goto label_1b0d14;
            case 0x1B0D18u: goto label_1b0d18;
            case 0x1B0D1Cu: goto label_1b0d1c;
            case 0x1B0D20u: goto label_1b0d20;
            case 0x1B0D24u: goto label_1b0d24;
            case 0x1B0D28u: goto label_1b0d28;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D30u: goto label_1b0d30;
            case 0x1B0D34u: goto label_1b0d34;
            case 0x1B0D38u: goto label_1b0d38;
            case 0x1B0D3Cu: goto label_1b0d3c;
            case 0x1B0D40u: goto label_1b0d40;
            case 0x1B0D44u: goto label_1b0d44;
            case 0x1B0D48u: goto label_1b0d48;
            case 0x1B0D4Cu: goto label_1b0d4c;
            case 0x1B0D50u: goto label_1b0d50;
            case 0x1B0D54u: goto label_1b0d54;
            case 0x1B0D58u: goto label_1b0d58;
            case 0x1B0D5Cu: goto label_1b0d5c;
            case 0x1B0D60u: goto label_1b0d60;
            case 0x1B0D64u: goto label_1b0d64;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0D6Cu: goto label_1b0d6c;
            case 0x1B0D70u: goto label_1b0d70;
            case 0x1B0D74u: goto label_1b0d74;
            case 0x1B0D78u: goto label_1b0d78;
            case 0x1B0D7Cu: goto label_1b0d7c;
            case 0x1B0D80u: goto label_1b0d80;
            case 0x1B0D84u: goto label_1b0d84;
            case 0x1B0D88u: goto label_1b0d88;
            case 0x1B0D8Cu: goto label_1b0d8c;
            case 0x1B0D90u: goto label_1b0d90;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            case 0x1B0D9Cu: goto label_1b0d9c;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DA8u: goto label_1b0da8;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            case 0x1B0DB4u: goto label_1b0db4;
            case 0x1B0DB8u: goto label_1b0db8;
            case 0x1B0DBCu: goto label_1b0dbc;
            case 0x1B0DC0u: goto label_1b0dc0;
            case 0x1B0DC4u: goto label_1b0dc4;
            case 0x1B0DC8u: goto label_1b0dc8;
            case 0x1B0DCCu: goto label_1b0dcc;
            case 0x1B0DD0u: goto label_1b0dd0;
            case 0x1B0DD4u: goto label_1b0dd4;
            case 0x1B0DD8u: goto label_1b0dd8;
            case 0x1B0DDCu: goto label_1b0ddc;
            case 0x1B0DE0u: goto label_1b0de0;
            case 0x1B0DE4u: goto label_1b0de4;
            case 0x1B0DE8u: goto label_1b0de8;
            case 0x1B0DECu: goto label_1b0dec;
            case 0x1B0DF0u: goto label_1b0df0;
            case 0x1B0DF4u: goto label_1b0df4;
            case 0x1B0DF8u: goto label_1b0df8;
            case 0x1B0DFCu: goto label_1b0dfc;
            case 0x1B0E00u: goto label_1b0e00;
            case 0x1B0E04u: goto label_1b0e04;
            case 0x1B0E08u: goto label_1b0e08;
            case 0x1B0E0Cu: goto label_1b0e0c;
            case 0x1B0E10u: goto label_1b0e10;
            case 0x1B0E14u: goto label_1b0e14;
            case 0x1B0E18u: goto label_1b0e18;
            case 0x1B0E1Cu: goto label_1b0e1c;
            case 0x1B0E20u: goto label_1b0e20;
            case 0x1B0E24u: goto label_1b0e24;
            case 0x1B0E28u: goto label_1b0e28;
            case 0x1B0E2Cu: goto label_1b0e2c;
            case 0x1B0E30u: goto label_1b0e30;
            case 0x1B0E34u: goto label_1b0e34;
            case 0x1B0E38u: goto label_1b0e38;
            case 0x1B0E3Cu: goto label_1b0e3c;
            case 0x1B0E40u: goto label_1b0e40;
            case 0x1B0E44u: goto label_1b0e44;
            case 0x1B0E48u: goto label_1b0e48;
            case 0x1B0E4Cu: goto label_1b0e4c;
            case 0x1B0E50u: goto label_1b0e50;
            case 0x1B0E54u: goto label_1b0e54;
            case 0x1B0E58u: goto label_1b0e58;
            case 0x1B0E5Cu: goto label_1b0e5c;
            case 0x1B0E60u: goto label_1b0e60;
            case 0x1B0E64u: goto label_1b0e64;
            case 0x1B0E68u: goto label_1b0e68;
            case 0x1B0E6Cu: goto label_1b0e6c;
            case 0x1B0E70u: goto label_1b0e70;
            case 0x1B0E74u: goto label_1b0e74;
            case 0x1B0E78u: goto label_1b0e78;
            case 0x1B0E7Cu: goto label_1b0e7c;
            case 0x1B0E80u: goto label_1b0e80;
            case 0x1B0E84u: goto label_1b0e84;
            case 0x1B0E88u: goto label_1b0e88;
            case 0x1B0E8Cu: goto label_1b0e8c;
            case 0x1B0E90u: goto label_1b0e90;
            case 0x1B0E94u: goto label_1b0e94;
            case 0x1B0E98u: goto label_1b0e98;
            case 0x1B0E9Cu: goto label_1b0e9c;
            case 0x1B0EA0u: goto label_1b0ea0;
            case 0x1B0EA4u: goto label_1b0ea4;
            case 0x1B0EA8u: goto label_1b0ea8;
            case 0x1B0EACu: goto label_1b0eac;
            case 0x1B0EB0u: goto label_1b0eb0;
            case 0x1B0EB4u: goto label_1b0eb4;
            case 0x1B0EB8u: goto label_1b0eb8;
            case 0x1B0EBCu: goto label_1b0ebc;
            case 0x1B0EC0u: goto label_1b0ec0;
            case 0x1B0EC4u: goto label_1b0ec4;
            case 0x1B0EC8u: goto label_1b0ec8;
            case 0x1B0ECCu: goto label_1b0ecc;
            case 0x1B0ED0u: goto label_1b0ed0;
            case 0x1B0ED4u: goto label_1b0ed4;
            case 0x1B0ED8u: goto label_1b0ed8;
            case 0x1B0EDCu: goto label_1b0edc;
            case 0x1B0EE0u: goto label_1b0ee0;
            case 0x1B0EE4u: goto label_1b0ee4;
            case 0x1B0EE8u: goto label_1b0ee8;
            case 0x1B0EECu: goto label_1b0eec;
            case 0x1B0EF0u: goto label_1b0ef0;
            case 0x1B0EF4u: goto label_1b0ef4;
            case 0x1B0EF8u: goto label_1b0ef8;
            case 0x1B0EFCu: goto label_1b0efc;
            case 0x1B0F00u: goto label_1b0f00;
            case 0x1B0F04u: goto label_1b0f04;
            case 0x1B0F08u: goto label_1b0f08;
            case 0x1B0F0Cu: goto label_1b0f0c;
            case 0x1B0F10u: goto label_1b0f10;
            case 0x1B0F14u: goto label_1b0f14;
            case 0x1B0F18u: goto label_1b0f18;
            case 0x1B0F1Cu: goto label_1b0f1c;
            case 0x1B0F20u: goto label_1b0f20;
            case 0x1B0F24u: goto label_1b0f24;
            case 0x1B0F28u: goto label_1b0f28;
            case 0x1B0F2Cu: goto label_1b0f2c;
            case 0x1B0F30u: goto label_1b0f30;
            case 0x1B0F34u: goto label_1b0f34;
            case 0x1B0F38u: goto label_1b0f38;
            case 0x1B0F3Cu: goto label_1b0f3c;
            case 0x1B0F40u: goto label_1b0f40;
            case 0x1B0F44u: goto label_1b0f44;
            case 0x1B0F48u: goto label_1b0f48;
            case 0x1B0F4Cu: goto label_1b0f4c;
            case 0x1B0F50u: goto label_1b0f50;
            case 0x1B0F54u: goto label_1b0f54;
            case 0x1B0F58u: goto label_1b0f58;
            case 0x1B0F5Cu: goto label_1b0f5c;
            case 0x1B0F60u: goto label_1b0f60;
            case 0x1B0F64u: goto label_1b0f64;
            case 0x1B0F68u: goto label_1b0f68;
            case 0x1B0F6Cu: goto label_1b0f6c;
            case 0x1B0F70u: goto label_1b0f70;
            case 0x1B0F74u: goto label_1b0f74;
            case 0x1B0F78u: goto label_1b0f78;
            case 0x1B0F7Cu: goto label_1b0f7c;
            case 0x1B0F80u: goto label_1b0f80;
            case 0x1B0F84u: goto label_1b0f84;
            case 0x1B0F88u: goto label_1b0f88;
            case 0x1B0F8Cu: goto label_1b0f8c;
            case 0x1B0F90u: goto label_1b0f90;
            case 0x1B0F94u: goto label_1b0f94;
            case 0x1B0F98u: goto label_1b0f98;
            case 0x1B0F9Cu: goto label_1b0f9c;
            case 0x1B0FA0u: goto label_1b0fa0;
            case 0x1B0FA4u: goto label_1b0fa4;
            case 0x1B0FA8u: goto label_1b0fa8;
            case 0x1B0FACu: goto label_1b0fac;
            case 0x1B0FB0u: goto label_1b0fb0;
            case 0x1B0FB4u: goto label_1b0fb4;
            case 0x1B0FB8u: goto label_1b0fb8;
            case 0x1B0FBCu: goto label_1b0fbc;
            case 0x1B0FC0u: goto label_1b0fc0;
            case 0x1B0FC4u: goto label_1b0fc4;
            case 0x1B0FC8u: goto label_1b0fc8;
            case 0x1B0FCCu: goto label_1b0fcc;
            case 0x1B0FD0u: goto label_1b0fd0;
            case 0x1B0FD4u: goto label_1b0fd4;
            case 0x1B0FD8u: goto label_1b0fd8;
            case 0x1B0FDCu: goto label_1b0fdc;
            case 0x1B0FE0u: goto label_1b0fe0;
            case 0x1B0FE4u: goto label_1b0fe4;
            case 0x1B0FE8u: goto label_1b0fe8;
            case 0x1B0FECu: goto label_1b0fec;
            case 0x1B0FF0u: goto label_1b0ff0;
            case 0x1B0FF4u: goto label_1b0ff4;
            case 0x1B0FF8u: goto label_1b0ff8;
            case 0x1B0FFCu: goto label_1b0ffc;
            case 0x1B1000u: goto label_1b1000;
            case 0x1B1004u: goto label_1b1004;
            case 0x1B1008u: goto label_1b1008;
            case 0x1B100Cu: goto label_1b100c;
            case 0x1B1010u: goto label_1b1010;
            case 0x1B1014u: goto label_1b1014;
            case 0x1B1018u: goto label_1b1018;
            case 0x1B101Cu: goto label_1b101c;
            case 0x1B1020u: goto label_1b1020;
            case 0x1B1024u: goto label_1b1024;
            case 0x1B1028u: goto label_1b1028;
            case 0x1B102Cu: goto label_1b102c;
            case 0x1B1030u: goto label_1b1030;
            case 0x1B1034u: goto label_1b1034;
            case 0x1B1038u: goto label_1b1038;
            case 0x1B103Cu: goto label_1b103c;
            case 0x1B1040u: goto label_1b1040;
            case 0x1B1044u: goto label_1b1044;
            case 0x1B1048u: goto label_1b1048;
            case 0x1B104Cu: goto label_1b104c;
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1054u: goto label_1b1054;
            case 0x1B1058u: goto label_1b1058;
            case 0x1B105Cu: goto label_1b105c;
            case 0x1B1060u: goto label_1b1060;
            case 0x1B1064u: goto label_1b1064;
            case 0x1B1068u: goto label_1b1068;
            case 0x1B106Cu: goto label_1b106c;
            case 0x1B1070u: goto label_1b1070;
            case 0x1B1074u: goto label_1b1074;
            case 0x1B1078u: goto label_1b1078;
            case 0x1B107Cu: goto label_1b107c;
            case 0x1B1080u: goto label_1b1080;
            case 0x1B1084u: goto label_1b1084;
            case 0x1B1088u: goto label_1b1088;
            case 0x1B108Cu: goto label_1b108c;
            case 0x1B1090u: goto label_1b1090;
            case 0x1B1094u: goto label_1b1094;
            case 0x1B1098u: goto label_1b1098;
            case 0x1B109Cu: goto label_1b109c;
            case 0x1B10A0u: goto label_1b10a0;
            case 0x1B10A4u: goto label_1b10a4;
            case 0x1B10A8u: goto label_1b10a8;
            case 0x1B10ACu: goto label_1b10ac;
            case 0x1B10B0u: goto label_1b10b0;
            case 0x1B10B4u: goto label_1b10b4;
            case 0x1B10B8u: goto label_1b10b8;
            case 0x1B10BCu: goto label_1b10bc;
            case 0x1B10C0u: goto label_1b10c0;
            case 0x1B10C4u: goto label_1b10c4;
            case 0x1B10C8u: goto label_1b10c8;
            case 0x1B10CCu: goto label_1b10cc;
            case 0x1B10D0u: goto label_1b10d0;
            case 0x1B10D4u: goto label_1b10d4;
            case 0x1B10D8u: goto label_1b10d8;
            case 0x1B10DCu: goto label_1b10dc;
            case 0x1B10E0u: goto label_1b10e0;
            case 0x1B10E4u: goto label_1b10e4;
            case 0x1B10E8u: goto label_1b10e8;
            case 0x1B10ECu: goto label_1b10ec;
            case 0x1B10F0u: goto label_1b10f0;
            case 0x1B10F4u: goto label_1b10f4;
            case 0x1B10F8u: goto label_1b10f8;
            case 0x1B10FCu: goto label_1b10fc;
            case 0x1B1100u: goto label_1b1100;
            case 0x1B1104u: goto label_1b1104;
            case 0x1B1108u: goto label_1b1108;
            case 0x1B110Cu: goto label_1b110c;
            case 0x1B1110u: goto label_1b1110;
            case 0x1B1114u: goto label_1b1114;
            case 0x1B1118u: goto label_1b1118;
            case 0x1B111Cu: goto label_1b111c;
            case 0x1B1120u: goto label_1b1120;
            case 0x1B1124u: goto label_1b1124;
            case 0x1B1128u: goto label_1b1128;
            case 0x1B112Cu: goto label_1b112c;
            case 0x1B1130u: goto label_1b1130;
            case 0x1B1134u: goto label_1b1134;
            case 0x1B1138u: goto label_1b1138;
            case 0x1B113Cu: goto label_1b113c;
            case 0x1B1140u: goto label_1b1140;
            case 0x1B1144u: goto label_1b1144;
            case 0x1B1148u: goto label_1b1148;
            case 0x1B114Cu: goto label_1b114c;
            case 0x1B1150u: goto label_1b1150;
            case 0x1B1154u: goto label_1b1154;
            case 0x1B1158u: goto label_1b1158;
            case 0x1B115Cu: goto label_1b115c;
            case 0x1B1160u: goto label_1b1160;
            case 0x1B1164u: goto label_1b1164;
            case 0x1B1168u: goto label_1b1168;
            case 0x1B116Cu: goto label_1b116c;
            case 0x1B1170u: goto label_1b1170;
            case 0x1B1174u: goto label_1b1174;
            case 0x1B1178u: goto label_1b1178;
            case 0x1B117Cu: goto label_1b117c;
            case 0x1B1180u: goto label_1b1180;
            case 0x1B1184u: goto label_1b1184;
            case 0x1B1188u: goto label_1b1188;
            case 0x1B118Cu: goto label_1b118c;
            case 0x1B1190u: goto label_1b1190;
            case 0x1B1194u: goto label_1b1194;
            case 0x1B1198u: goto label_1b1198;
            case 0x1B119Cu: goto label_1b119c;
            case 0x1B11A0u: goto label_1b11a0;
            case 0x1B11A4u: goto label_1b11a4;
            case 0x1B11A8u: goto label_1b11a8;
            case 0x1B11ACu: goto label_1b11ac;
            case 0x1B11B0u: goto label_1b11b0;
            case 0x1B11B4u: goto label_1b11b4;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11C0u: goto label_1b11c0;
            case 0x1B11C4u: goto label_1b11c4;
            case 0x1B11C8u: goto label_1b11c8;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11D0u: goto label_1b11d0;
            case 0x1B11D4u: goto label_1b11d4;
            case 0x1B11D8u: goto label_1b11d8;
            case 0x1B11DCu: goto label_1b11dc;
            case 0x1B11E0u: goto label_1b11e0;
            case 0x1B11E4u: goto label_1b11e4;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B11ECu: goto label_1b11ec;
            case 0x1B11F0u: goto label_1b11f0;
            case 0x1B11F4u: goto label_1b11f4;
            case 0x1B11F8u: goto label_1b11f8;
            case 0x1B11FCu: goto label_1b11fc;
            case 0x1B1200u: goto label_1b1200;
            case 0x1B1204u: goto label_1b1204;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B120Cu: goto label_1b120c;
            case 0x1B1210u: goto label_1b1210;
            case 0x1B1214u: goto label_1b1214;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B121Cu: goto label_1b121c;
            case 0x1B1220u: goto label_1b1220;
            case 0x1B1224u: goto label_1b1224;
            case 0x1B1228u: goto label_1b1228;
            case 0x1B122Cu: goto label_1b122c;
            case 0x1B1230u: goto label_1b1230;
            case 0x1B1234u: goto label_1b1234;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B123Cu: goto label_1b123c;
            case 0x1B1240u: goto label_1b1240;
            case 0x1B1244u: goto label_1b1244;
            case 0x1B1248u: goto label_1b1248;
            case 0x1B124Cu: goto label_1b124c;
            case 0x1B1250u: goto label_1b1250;
            case 0x1B1254u: goto label_1b1254;
            case 0x1B1258u: goto label_1b1258;
            case 0x1B125Cu: goto label_1b125c;
            case 0x1B1260u: goto label_1b1260;
            case 0x1B1264u: goto label_1b1264;
            case 0x1B1268u: goto label_1b1268;
            case 0x1B126Cu: goto label_1b126c;
            case 0x1B1270u: goto label_1b1270;
            case 0x1B1274u: goto label_1b1274;
            case 0x1B1278u: goto label_1b1278;
            case 0x1B127Cu: goto label_1b127c;
            case 0x1B1280u: goto label_1b1280;
            case 0x1B1284u: goto label_1b1284;
            case 0x1B1288u: goto label_1b1288;
            case 0x1B128Cu: goto label_1b128c;
            case 0x1B1290u: goto label_1b1290;
            case 0x1B1294u: goto label_1b1294;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12A0u: goto label_1b12a0;
            case 0x1B12A4u: goto label_1b12a4;
            case 0x1B12A8u: goto label_1b12a8;
            case 0x1B12ACu: goto label_1b12ac;
            case 0x1B12B0u: goto label_1b12b0;
            case 0x1B12B4u: goto label_1b12b4;
            case 0x1B12B8u: goto label_1b12b8;
            case 0x1B12BCu: goto label_1b12bc;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12C4u: goto label_1b12c4;
            case 0x1B12C8u: goto label_1b12c8;
            case 0x1B12CCu: goto label_1b12cc;
            case 0x1B12D0u: goto label_1b12d0;
            case 0x1B12D4u: goto label_1b12d4;
            case 0x1B12D8u: goto label_1b12d8;
            case 0x1B12DCu: goto label_1b12dc;
            case 0x1B12E0u: goto label_1b12e0;
            case 0x1B12E4u: goto label_1b12e4;
            case 0x1B12E8u: goto label_1b12e8;
            case 0x1B12ECu: goto label_1b12ec;
            case 0x1B12F0u: goto label_1b12f0;
            case 0x1B12F4u: goto label_1b12f4;
            case 0x1B12F8u: goto label_1b12f8;
            case 0x1B12FCu: goto label_1b12fc;
            case 0x1B1300u: goto label_1b1300;
            case 0x1B1304u: goto label_1b1304;
            case 0x1B1308u: goto label_1b1308;
            case 0x1B130Cu: goto label_1b130c;
            case 0x1B1310u: goto label_1b1310;
            case 0x1B1314u: goto label_1b1314;
            case 0x1B1318u: goto label_1b1318;
            case 0x1B131Cu: goto label_1b131c;
            case 0x1B1320u: goto label_1b1320;
            case 0x1B1324u: goto label_1b1324;
            case 0x1B1328u: goto label_1b1328;
            case 0x1B132Cu: goto label_1b132c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B12F4u; }
            if (ctx->pc != 0x1B12F4u) { return; }
        }
    }
    ctx->pc = 0x1B12F4u;
label_1b12f4:
    // 0x1b12f4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1b12f8:
    if (ctx->pc == 0x1B12F8u) {
        ctx->pc = 0x1B12FCu;
        goto label_1b12fc;
    }
    ctx->pc = 0x1B12F4u;
    {
        const bool branch_taken_0x1b12f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f4) {
            ctx->pc = 0x1B1320u;
            goto label_1b1320;
        }
    }
    ctx->pc = 0x1B12FCu;
label_1b12fc:
    // 0x1b12fc: 0x0  nop
    ctx->pc = 0x1b12fcu;
    // NOP
label_1b1300:
    // 0x1b1300: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1b1304:
    // 0x1b1304: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b1308:
    // 0x1b1308: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1b1308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1b130c:
    // 0x1b130c: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x1b130cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
label_1b1310:
    // 0x1b1310: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b1310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1314:
    // 0x1b1314: 0xc053ca4  jal         func_14F290
label_1b1318:
    if (ctx->pc == 0x1B1318u) {
        ctx->pc = 0x1B1318u;
            // 0x1b1318: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B131Cu;
        goto label_1b131c;
    }
    ctx->pc = 0x1B1314u;
    SET_GPR_U32(ctx, 31, 0x1B131Cu);
    ctx->pc = 0x1B1318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1314u;
            // 0x1b1318: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B131Cu; }
        if (ctx->pc != 0x1B131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B131Cu; }
        if (ctx->pc != 0x1B131Cu) { return; }
    }
    ctx->pc = 0x1B131Cu;
label_1b131c:
    // 0x1b131c: 0x0  nop
    ctx->pc = 0x1b131cu;
    // NOP
label_1b1320:
    // 0x1b1320: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1324:
    // 0x1b1324: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b1328:
    // 0x1b1328: 0x3e00008  jr          $ra
label_1b132c:
    if (ctx->pc == 0x1B132Cu) {
        ctx->pc = 0x1B132Cu;
            // 0x1b132c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1B1330u;
        goto label_fallthrough_0x1b1328;
    }
    ctx->pc = 0x1B1328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1328u;
            // 0x1b132c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0440u: goto label_1b0440;
            case 0x1B0444u: goto label_1b0444;
            case 0x1B0448u: goto label_1b0448;
            case 0x1B044Cu: goto label_1b044c;
            case 0x1B0450u: goto label_1b0450;
            case 0x1B0454u: goto label_1b0454;
            case 0x1B0458u: goto label_1b0458;
            case 0x1B045Cu: goto label_1b045c;
            case 0x1B0460u: goto label_1b0460;
            case 0x1B0464u: goto label_1b0464;
            case 0x1B0468u: goto label_1b0468;
            case 0x1B046Cu: goto label_1b046c;
            case 0x1B0470u: goto label_1b0470;
            case 0x1B0474u: goto label_1b0474;
            case 0x1B0478u: goto label_1b0478;
            case 0x1B047Cu: goto label_1b047c;
            case 0x1B0480u: goto label_1b0480;
            case 0x1B0484u: goto label_1b0484;
            case 0x1B0488u: goto label_1b0488;
            case 0x1B048Cu: goto label_1b048c;
            case 0x1B0490u: goto label_1b0490;
            case 0x1B0494u: goto label_1b0494;
            case 0x1B0498u: goto label_1b0498;
            case 0x1B049Cu: goto label_1b049c;
            case 0x1B04A0u: goto label_1b04a0;
            case 0x1B04A4u: goto label_1b04a4;
            case 0x1B04A8u: goto label_1b04a8;
            case 0x1B04ACu: goto label_1b04ac;
            case 0x1B04B0u: goto label_1b04b0;
            case 0x1B04B4u: goto label_1b04b4;
            case 0x1B04B8u: goto label_1b04b8;
            case 0x1B04BCu: goto label_1b04bc;
            case 0x1B04C0u: goto label_1b04c0;
            case 0x1B04C4u: goto label_1b04c4;
            case 0x1B04C8u: goto label_1b04c8;
            case 0x1B04CCu: goto label_1b04cc;
            case 0x1B04D0u: goto label_1b04d0;
            case 0x1B04D4u: goto label_1b04d4;
            case 0x1B04D8u: goto label_1b04d8;
            case 0x1B04DCu: goto label_1b04dc;
            case 0x1B04E0u: goto label_1b04e0;
            case 0x1B04E4u: goto label_1b04e4;
            case 0x1B04E8u: goto label_1b04e8;
            case 0x1B04ECu: goto label_1b04ec;
            case 0x1B04F0u: goto label_1b04f0;
            case 0x1B04F4u: goto label_1b04f4;
            case 0x1B04F8u: goto label_1b04f8;
            case 0x1B04FCu: goto label_1b04fc;
            case 0x1B0500u: goto label_1b0500;
            case 0x1B0504u: goto label_1b0504;
            case 0x1B0508u: goto label_1b0508;
            case 0x1B050Cu: goto label_1b050c;
            case 0x1B0510u: goto label_1b0510;
            case 0x1B0514u: goto label_1b0514;
            case 0x1B0518u: goto label_1b0518;
            case 0x1B051Cu: goto label_1b051c;
            case 0x1B0520u: goto label_1b0520;
            case 0x1B0524u: goto label_1b0524;
            case 0x1B0528u: goto label_1b0528;
            case 0x1B052Cu: goto label_1b052c;
            case 0x1B0530u: goto label_1b0530;
            case 0x1B0534u: goto label_1b0534;
            case 0x1B0538u: goto label_1b0538;
            case 0x1B053Cu: goto label_1b053c;
            case 0x1B0540u: goto label_1b0540;
            case 0x1B0544u: goto label_1b0544;
            case 0x1B0548u: goto label_1b0548;
            case 0x1B054Cu: goto label_1b054c;
            case 0x1B0550u: goto label_1b0550;
            case 0x1B0554u: goto label_1b0554;
            case 0x1B0558u: goto label_1b0558;
            case 0x1B055Cu: goto label_1b055c;
            case 0x1B0560u: goto label_1b0560;
            case 0x1B0564u: goto label_1b0564;
            case 0x1B0568u: goto label_1b0568;
            case 0x1B056Cu: goto label_1b056c;
            case 0x1B0570u: goto label_1b0570;
            case 0x1B0574u: goto label_1b0574;
            case 0x1B0578u: goto label_1b0578;
            case 0x1B057Cu: goto label_1b057c;
            case 0x1B0580u: goto label_1b0580;
            case 0x1B0584u: goto label_1b0584;
            case 0x1B0588u: goto label_1b0588;
            case 0x1B058Cu: goto label_1b058c;
            case 0x1B0590u: goto label_1b0590;
            case 0x1B0594u: goto label_1b0594;
            case 0x1B0598u: goto label_1b0598;
            case 0x1B059Cu: goto label_1b059c;
            case 0x1B05A0u: goto label_1b05a0;
            case 0x1B05A4u: goto label_1b05a4;
            case 0x1B05A8u: goto label_1b05a8;
            case 0x1B05ACu: goto label_1b05ac;
            case 0x1B05B0u: goto label_1b05b0;
            case 0x1B05B4u: goto label_1b05b4;
            case 0x1B05B8u: goto label_1b05b8;
            case 0x1B05BCu: goto label_1b05bc;
            case 0x1B05C0u: goto label_1b05c0;
            case 0x1B05C4u: goto label_1b05c4;
            case 0x1B05C8u: goto label_1b05c8;
            case 0x1B05CCu: goto label_1b05cc;
            case 0x1B05D0u: goto label_1b05d0;
            case 0x1B05D4u: goto label_1b05d4;
            case 0x1B05D8u: goto label_1b05d8;
            case 0x1B05DCu: goto label_1b05dc;
            case 0x1B05E0u: goto label_1b05e0;
            case 0x1B05E4u: goto label_1b05e4;
            case 0x1B05E8u: goto label_1b05e8;
            case 0x1B05ECu: goto label_1b05ec;
            case 0x1B05F0u: goto label_1b05f0;
            case 0x1B05F4u: goto label_1b05f4;
            case 0x1B05F8u: goto label_1b05f8;
            case 0x1B05FCu: goto label_1b05fc;
            case 0x1B0600u: goto label_1b0600;
            case 0x1B0604u: goto label_1b0604;
            case 0x1B0608u: goto label_1b0608;
            case 0x1B060Cu: goto label_1b060c;
            case 0x1B0610u: goto label_1b0610;
            case 0x1B0614u: goto label_1b0614;
            case 0x1B0618u: goto label_1b0618;
            case 0x1B061Cu: goto label_1b061c;
            case 0x1B0620u: goto label_1b0620;
            case 0x1B0624u: goto label_1b0624;
            case 0x1B0628u: goto label_1b0628;
            case 0x1B062Cu: goto label_1b062c;
            case 0x1B0630u: goto label_1b0630;
            case 0x1B0634u: goto label_1b0634;
            case 0x1B0638u: goto label_1b0638;
            case 0x1B063Cu: goto label_1b063c;
            case 0x1B0640u: goto label_1b0640;
            case 0x1B0644u: goto label_1b0644;
            case 0x1B0648u: goto label_1b0648;
            case 0x1B064Cu: goto label_1b064c;
            case 0x1B0650u: goto label_1b0650;
            case 0x1B0654u: goto label_1b0654;
            case 0x1B0658u: goto label_1b0658;
            case 0x1B065Cu: goto label_1b065c;
            case 0x1B0660u: goto label_1b0660;
            case 0x1B0664u: goto label_1b0664;
            case 0x1B0668u: goto label_1b0668;
            case 0x1B066Cu: goto label_1b066c;
            case 0x1B0670u: goto label_1b0670;
            case 0x1B0674u: goto label_1b0674;
            case 0x1B0678u: goto label_1b0678;
            case 0x1B067Cu: goto label_1b067c;
            case 0x1B0680u: goto label_1b0680;
            case 0x1B0684u: goto label_1b0684;
            case 0x1B0688u: goto label_1b0688;
            case 0x1B068Cu: goto label_1b068c;
            case 0x1B0690u: goto label_1b0690;
            case 0x1B0694u: goto label_1b0694;
            case 0x1B0698u: goto label_1b0698;
            case 0x1B069Cu: goto label_1b069c;
            case 0x1B06A0u: goto label_1b06a0;
            case 0x1B06A4u: goto label_1b06a4;
            case 0x1B06A8u: goto label_1b06a8;
            case 0x1B06ACu: goto label_1b06ac;
            case 0x1B06B0u: goto label_1b06b0;
            case 0x1B06B4u: goto label_1b06b4;
            case 0x1B06B8u: goto label_1b06b8;
            case 0x1B06BCu: goto label_1b06bc;
            case 0x1B06C0u: goto label_1b06c0;
            case 0x1B06C4u: goto label_1b06c4;
            case 0x1B06C8u: goto label_1b06c8;
            case 0x1B06CCu: goto label_1b06cc;
            case 0x1B06D0u: goto label_1b06d0;
            case 0x1B06D4u: goto label_1b06d4;
            case 0x1B06D8u: goto label_1b06d8;
            case 0x1B06DCu: goto label_1b06dc;
            case 0x1B06E0u: goto label_1b06e0;
            case 0x1B06E4u: goto label_1b06e4;
            case 0x1B06E8u: goto label_1b06e8;
            case 0x1B06ECu: goto label_1b06ec;
            case 0x1B06F0u: goto label_1b06f0;
            case 0x1B06F4u: goto label_1b06f4;
            case 0x1B06F8u: goto label_1b06f8;
            case 0x1B06FCu: goto label_1b06fc;
            case 0x1B0700u: goto label_1b0700;
            case 0x1B0704u: goto label_1b0704;
            case 0x1B0708u: goto label_1b0708;
            case 0x1B070Cu: goto label_1b070c;
            case 0x1B0710u: goto label_1b0710;
            case 0x1B0714u: goto label_1b0714;
            case 0x1B0718u: goto label_1b0718;
            case 0x1B071Cu: goto label_1b071c;
            case 0x1B0720u: goto label_1b0720;
            case 0x1B0724u: goto label_1b0724;
            case 0x1B0728u: goto label_1b0728;
            case 0x1B072Cu: goto label_1b072c;
            case 0x1B0730u: goto label_1b0730;
            case 0x1B0734u: goto label_1b0734;
            case 0x1B0738u: goto label_1b0738;
            case 0x1B073Cu: goto label_1b073c;
            case 0x1B0740u: goto label_1b0740;
            case 0x1B0744u: goto label_1b0744;
            case 0x1B0748u: goto label_1b0748;
            case 0x1B074Cu: goto label_1b074c;
            case 0x1B0750u: goto label_1b0750;
            case 0x1B0754u: goto label_1b0754;
            case 0x1B0758u: goto label_1b0758;
            case 0x1B075Cu: goto label_1b075c;
            case 0x1B0760u: goto label_1b0760;
            case 0x1B0764u: goto label_1b0764;
            case 0x1B0768u: goto label_1b0768;
            case 0x1B076Cu: goto label_1b076c;
            case 0x1B0770u: goto label_1b0770;
            case 0x1B0774u: goto label_1b0774;
            case 0x1B0778u: goto label_1b0778;
            case 0x1B077Cu: goto label_1b077c;
            case 0x1B0780u: goto label_1b0780;
            case 0x1B0784u: goto label_1b0784;
            case 0x1B0788u: goto label_1b0788;
            case 0x1B078Cu: goto label_1b078c;
            case 0x1B0790u: goto label_1b0790;
            case 0x1B0794u: goto label_1b0794;
            case 0x1B0798u: goto label_1b0798;
            case 0x1B079Cu: goto label_1b079c;
            case 0x1B07A0u: goto label_1b07a0;
            case 0x1B07A4u: goto label_1b07a4;
            case 0x1B07A8u: goto label_1b07a8;
            case 0x1B07ACu: goto label_1b07ac;
            case 0x1B07B0u: goto label_1b07b0;
            case 0x1B07B4u: goto label_1b07b4;
            case 0x1B07B8u: goto label_1b07b8;
            case 0x1B07BCu: goto label_1b07bc;
            case 0x1B07C0u: goto label_1b07c0;
            case 0x1B07C4u: goto label_1b07c4;
            case 0x1B07C8u: goto label_1b07c8;
            case 0x1B07CCu: goto label_1b07cc;
            case 0x1B07D0u: goto label_1b07d0;
            case 0x1B07D4u: goto label_1b07d4;
            case 0x1B07D8u: goto label_1b07d8;
            case 0x1B07DCu: goto label_1b07dc;
            case 0x1B07E0u: goto label_1b07e0;
            case 0x1B07E4u: goto label_1b07e4;
            case 0x1B07E8u: goto label_1b07e8;
            case 0x1B07ECu: goto label_1b07ec;
            case 0x1B07F0u: goto label_1b07f0;
            case 0x1B07F4u: goto label_1b07f4;
            case 0x1B07F8u: goto label_1b07f8;
            case 0x1B07FCu: goto label_1b07fc;
            case 0x1B0800u: goto label_1b0800;
            case 0x1B0804u: goto label_1b0804;
            case 0x1B0808u: goto label_1b0808;
            case 0x1B080Cu: goto label_1b080c;
            case 0x1B0810u: goto label_1b0810;
            case 0x1B0814u: goto label_1b0814;
            case 0x1B0818u: goto label_1b0818;
            case 0x1B081Cu: goto label_1b081c;
            case 0x1B0820u: goto label_1b0820;
            case 0x1B0824u: goto label_1b0824;
            case 0x1B0828u: goto label_1b0828;
            case 0x1B082Cu: goto label_1b082c;
            case 0x1B0830u: goto label_1b0830;
            case 0x1B0834u: goto label_1b0834;
            case 0x1B0838u: goto label_1b0838;
            case 0x1B083Cu: goto label_1b083c;
            case 0x1B0840u: goto label_1b0840;
            case 0x1B0844u: goto label_1b0844;
            case 0x1B0848u: goto label_1b0848;
            case 0x1B084Cu: goto label_1b084c;
            case 0x1B0850u: goto label_1b0850;
            case 0x1B0854u: goto label_1b0854;
            case 0x1B0858u: goto label_1b0858;
            case 0x1B085Cu: goto label_1b085c;
            case 0x1B0860u: goto label_1b0860;
            case 0x1B0864u: goto label_1b0864;
            case 0x1B0868u: goto label_1b0868;
            case 0x1B086Cu: goto label_1b086c;
            case 0x1B0870u: goto label_1b0870;
            case 0x1B0874u: goto label_1b0874;
            case 0x1B0878u: goto label_1b0878;
            case 0x1B087Cu: goto label_1b087c;
            case 0x1B0880u: goto label_1b0880;
            case 0x1B0884u: goto label_1b0884;
            case 0x1B0888u: goto label_1b0888;
            case 0x1B088Cu: goto label_1b088c;
            case 0x1B0890u: goto label_1b0890;
            case 0x1B0894u: goto label_1b0894;
            case 0x1B0898u: goto label_1b0898;
            case 0x1B089Cu: goto label_1b089c;
            case 0x1B08A0u: goto label_1b08a0;
            case 0x1B08A4u: goto label_1b08a4;
            case 0x1B08A8u: goto label_1b08a8;
            case 0x1B08ACu: goto label_1b08ac;
            case 0x1B08B0u: goto label_1b08b0;
            case 0x1B08B4u: goto label_1b08b4;
            case 0x1B08B8u: goto label_1b08b8;
            case 0x1B08BCu: goto label_1b08bc;
            case 0x1B08C0u: goto label_1b08c0;
            case 0x1B08C4u: goto label_1b08c4;
            case 0x1B08C8u: goto label_1b08c8;
            case 0x1B08CCu: goto label_1b08cc;
            case 0x1B08D0u: goto label_1b08d0;
            case 0x1B08D4u: goto label_1b08d4;
            case 0x1B08D8u: goto label_1b08d8;
            case 0x1B08DCu: goto label_1b08dc;
            case 0x1B08E0u: goto label_1b08e0;
            case 0x1B08E4u: goto label_1b08e4;
            case 0x1B08E8u: goto label_1b08e8;
            case 0x1B08ECu: goto label_1b08ec;
            case 0x1B08F0u: goto label_1b08f0;
            case 0x1B08F4u: goto label_1b08f4;
            case 0x1B08F8u: goto label_1b08f8;
            case 0x1B08FCu: goto label_1b08fc;
            case 0x1B0900u: goto label_1b0900;
            case 0x1B0904u: goto label_1b0904;
            case 0x1B0908u: goto label_1b0908;
            case 0x1B090Cu: goto label_1b090c;
            case 0x1B0910u: goto label_1b0910;
            case 0x1B0914u: goto label_1b0914;
            case 0x1B0918u: goto label_1b0918;
            case 0x1B091Cu: goto label_1b091c;
            case 0x1B0920u: goto label_1b0920;
            case 0x1B0924u: goto label_1b0924;
            case 0x1B0928u: goto label_1b0928;
            case 0x1B092Cu: goto label_1b092c;
            case 0x1B0930u: goto label_1b0930;
            case 0x1B0934u: goto label_1b0934;
            case 0x1B0938u: goto label_1b0938;
            case 0x1B093Cu: goto label_1b093c;
            case 0x1B0940u: goto label_1b0940;
            case 0x1B0944u: goto label_1b0944;
            case 0x1B0948u: goto label_1b0948;
            case 0x1B094Cu: goto label_1b094c;
            case 0x1B0950u: goto label_1b0950;
            case 0x1B0954u: goto label_1b0954;
            case 0x1B0958u: goto label_1b0958;
            case 0x1B095Cu: goto label_1b095c;
            case 0x1B0960u: goto label_1b0960;
            case 0x1B0964u: goto label_1b0964;
            case 0x1B0968u: goto label_1b0968;
            case 0x1B096Cu: goto label_1b096c;
            case 0x1B0970u: goto label_1b0970;
            case 0x1B0974u: goto label_1b0974;
            case 0x1B0978u: goto label_1b0978;
            case 0x1B097Cu: goto label_1b097c;
            case 0x1B0980u: goto label_1b0980;
            case 0x1B0984u: goto label_1b0984;
            case 0x1B0988u: goto label_1b0988;
            case 0x1B098Cu: goto label_1b098c;
            case 0x1B0990u: goto label_1b0990;
            case 0x1B0994u: goto label_1b0994;
            case 0x1B0998u: goto label_1b0998;
            case 0x1B099Cu: goto label_1b099c;
            case 0x1B09A0u: goto label_1b09a0;
            case 0x1B09A4u: goto label_1b09a4;
            case 0x1B09A8u: goto label_1b09a8;
            case 0x1B09ACu: goto label_1b09ac;
            case 0x1B09B0u: goto label_1b09b0;
            case 0x1B09B4u: goto label_1b09b4;
            case 0x1B09B8u: goto label_1b09b8;
            case 0x1B09BCu: goto label_1b09bc;
            case 0x1B09C0u: goto label_1b09c0;
            case 0x1B09C4u: goto label_1b09c4;
            case 0x1B09C8u: goto label_1b09c8;
            case 0x1B09CCu: goto label_1b09cc;
            case 0x1B09D0u: goto label_1b09d0;
            case 0x1B09D4u: goto label_1b09d4;
            case 0x1B09D8u: goto label_1b09d8;
            case 0x1B09DCu: goto label_1b09dc;
            case 0x1B09E0u: goto label_1b09e0;
            case 0x1B09E4u: goto label_1b09e4;
            case 0x1B09E8u: goto label_1b09e8;
            case 0x1B09ECu: goto label_1b09ec;
            case 0x1B09F0u: goto label_1b09f0;
            case 0x1B09F4u: goto label_1b09f4;
            case 0x1B09F8u: goto label_1b09f8;
            case 0x1B09FCu: goto label_1b09fc;
            case 0x1B0A00u: goto label_1b0a00;
            case 0x1B0A04u: goto label_1b0a04;
            case 0x1B0A08u: goto label_1b0a08;
            case 0x1B0A0Cu: goto label_1b0a0c;
            case 0x1B0A10u: goto label_1b0a10;
            case 0x1B0A14u: goto label_1b0a14;
            case 0x1B0A18u: goto label_1b0a18;
            case 0x1B0A1Cu: goto label_1b0a1c;
            case 0x1B0A20u: goto label_1b0a20;
            case 0x1B0A24u: goto label_1b0a24;
            case 0x1B0A28u: goto label_1b0a28;
            case 0x1B0A2Cu: goto label_1b0a2c;
            case 0x1B0A30u: goto label_1b0a30;
            case 0x1B0A34u: goto label_1b0a34;
            case 0x1B0A38u: goto label_1b0a38;
            case 0x1B0A3Cu: goto label_1b0a3c;
            case 0x1B0A40u: goto label_1b0a40;
            case 0x1B0A44u: goto label_1b0a44;
            case 0x1B0A48u: goto label_1b0a48;
            case 0x1B0A4Cu: goto label_1b0a4c;
            case 0x1B0A50u: goto label_1b0a50;
            case 0x1B0A54u: goto label_1b0a54;
            case 0x1B0A58u: goto label_1b0a58;
            case 0x1B0A5Cu: goto label_1b0a5c;
            case 0x1B0A60u: goto label_1b0a60;
            case 0x1B0A64u: goto label_1b0a64;
            case 0x1B0A68u: goto label_1b0a68;
            case 0x1B0A6Cu: goto label_1b0a6c;
            case 0x1B0A70u: goto label_1b0a70;
            case 0x1B0A74u: goto label_1b0a74;
            case 0x1B0A78u: goto label_1b0a78;
            case 0x1B0A7Cu: goto label_1b0a7c;
            case 0x1B0A80u: goto label_1b0a80;
            case 0x1B0A84u: goto label_1b0a84;
            case 0x1B0A88u: goto label_1b0a88;
            case 0x1B0A8Cu: goto label_1b0a8c;
            case 0x1B0A90u: goto label_1b0a90;
            case 0x1B0A94u: goto label_1b0a94;
            case 0x1B0A98u: goto label_1b0a98;
            case 0x1B0A9Cu: goto label_1b0a9c;
            case 0x1B0AA0u: goto label_1b0aa0;
            case 0x1B0AA4u: goto label_1b0aa4;
            case 0x1B0AA8u: goto label_1b0aa8;
            case 0x1B0AACu: goto label_1b0aac;
            case 0x1B0AB0u: goto label_1b0ab0;
            case 0x1B0AB4u: goto label_1b0ab4;
            case 0x1B0AB8u: goto label_1b0ab8;
            case 0x1B0ABCu: goto label_1b0abc;
            case 0x1B0AC0u: goto label_1b0ac0;
            case 0x1B0AC4u: goto label_1b0ac4;
            case 0x1B0AC8u: goto label_1b0ac8;
            case 0x1B0ACCu: goto label_1b0acc;
            case 0x1B0AD0u: goto label_1b0ad0;
            case 0x1B0AD4u: goto label_1b0ad4;
            case 0x1B0AD8u: goto label_1b0ad8;
            case 0x1B0ADCu: goto label_1b0adc;
            case 0x1B0AE0u: goto label_1b0ae0;
            case 0x1B0AE4u: goto label_1b0ae4;
            case 0x1B0AE8u: goto label_1b0ae8;
            case 0x1B0AECu: goto label_1b0aec;
            case 0x1B0AF0u: goto label_1b0af0;
            case 0x1B0AF4u: goto label_1b0af4;
            case 0x1B0AF8u: goto label_1b0af8;
            case 0x1B0AFCu: goto label_1b0afc;
            case 0x1B0B00u: goto label_1b0b00;
            case 0x1B0B04u: goto label_1b0b04;
            case 0x1B0B08u: goto label_1b0b08;
            case 0x1B0B0Cu: goto label_1b0b0c;
            case 0x1B0B10u: goto label_1b0b10;
            case 0x1B0B14u: goto label_1b0b14;
            case 0x1B0B18u: goto label_1b0b18;
            case 0x1B0B1Cu: goto label_1b0b1c;
            case 0x1B0B20u: goto label_1b0b20;
            case 0x1B0B24u: goto label_1b0b24;
            case 0x1B0B28u: goto label_1b0b28;
            case 0x1B0B2Cu: goto label_1b0b2c;
            case 0x1B0B30u: goto label_1b0b30;
            case 0x1B0B34u: goto label_1b0b34;
            case 0x1B0B38u: goto label_1b0b38;
            case 0x1B0B3Cu: goto label_1b0b3c;
            case 0x1B0B40u: goto label_1b0b40;
            case 0x1B0B44u: goto label_1b0b44;
            case 0x1B0B48u: goto label_1b0b48;
            case 0x1B0B4Cu: goto label_1b0b4c;
            case 0x1B0B50u: goto label_1b0b50;
            case 0x1B0B54u: goto label_1b0b54;
            case 0x1B0B58u: goto label_1b0b58;
            case 0x1B0B5Cu: goto label_1b0b5c;
            case 0x1B0B60u: goto label_1b0b60;
            case 0x1B0B64u: goto label_1b0b64;
            case 0x1B0B68u: goto label_1b0b68;
            case 0x1B0B6Cu: goto label_1b0b6c;
            case 0x1B0B70u: goto label_1b0b70;
            case 0x1B0B74u: goto label_1b0b74;
            case 0x1B0B78u: goto label_1b0b78;
            case 0x1B0B7Cu: goto label_1b0b7c;
            case 0x1B0B80u: goto label_1b0b80;
            case 0x1B0B84u: goto label_1b0b84;
            case 0x1B0B88u: goto label_1b0b88;
            case 0x1B0B8Cu: goto label_1b0b8c;
            case 0x1B0B90u: goto label_1b0b90;
            case 0x1B0B94u: goto label_1b0b94;
            case 0x1B0B98u: goto label_1b0b98;
            case 0x1B0B9Cu: goto label_1b0b9c;
            case 0x1B0BA0u: goto label_1b0ba0;
            case 0x1B0BA4u: goto label_1b0ba4;
            case 0x1B0BA8u: goto label_1b0ba8;
            case 0x1B0BACu: goto label_1b0bac;
            case 0x1B0BB0u: goto label_1b0bb0;
            case 0x1B0BB4u: goto label_1b0bb4;
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BBCu: goto label_1b0bbc;
            case 0x1B0BC0u: goto label_1b0bc0;
            case 0x1B0BC4u: goto label_1b0bc4;
            case 0x1B0BC8u: goto label_1b0bc8;
            case 0x1B0BCCu: goto label_1b0bcc;
            case 0x1B0BD0u: goto label_1b0bd0;
            case 0x1B0BD4u: goto label_1b0bd4;
            case 0x1B0BD8u: goto label_1b0bd8;
            case 0x1B0BDCu: goto label_1b0bdc;
            case 0x1B0BE0u: goto label_1b0be0;
            case 0x1B0BE4u: goto label_1b0be4;
            case 0x1B0BE8u: goto label_1b0be8;
            case 0x1B0BECu: goto label_1b0bec;
            case 0x1B0BF0u: goto label_1b0bf0;
            case 0x1B0BF4u: goto label_1b0bf4;
            case 0x1B0BF8u: goto label_1b0bf8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C00u: goto label_1b0c00;
            case 0x1B0C04u: goto label_1b0c04;
            case 0x1B0C08u: goto label_1b0c08;
            case 0x1B0C0Cu: goto label_1b0c0c;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C14u: goto label_1b0c14;
            case 0x1B0C18u: goto label_1b0c18;
            case 0x1B0C1Cu: goto label_1b0c1c;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C24u: goto label_1b0c24;
            case 0x1B0C28u: goto label_1b0c28;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C30u: goto label_1b0c30;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            case 0x1B0C44u: goto label_1b0c44;
            case 0x1B0C48u: goto label_1b0c48;
            case 0x1B0C4Cu: goto label_1b0c4c;
            case 0x1B0C50u: goto label_1b0c50;
            case 0x1B0C54u: goto label_1b0c54;
            case 0x1B0C58u: goto label_1b0c58;
            case 0x1B0C5Cu: goto label_1b0c5c;
            case 0x1B0C60u: goto label_1b0c60;
            case 0x1B0C64u: goto label_1b0c64;
            case 0x1B0C68u: goto label_1b0c68;
            case 0x1B0C6Cu: goto label_1b0c6c;
            case 0x1B0C70u: goto label_1b0c70;
            case 0x1B0C74u: goto label_1b0c74;
            case 0x1B0C78u: goto label_1b0c78;
            case 0x1B0C7Cu: goto label_1b0c7c;
            case 0x1B0C80u: goto label_1b0c80;
            case 0x1B0C84u: goto label_1b0c84;
            case 0x1B0C88u: goto label_1b0c88;
            case 0x1B0C8Cu: goto label_1b0c8c;
            case 0x1B0C90u: goto label_1b0c90;
            case 0x1B0C94u: goto label_1b0c94;
            case 0x1B0C98u: goto label_1b0c98;
            case 0x1B0C9Cu: goto label_1b0c9c;
            case 0x1B0CA0u: goto label_1b0ca0;
            case 0x1B0CA4u: goto label_1b0ca4;
            case 0x1B0CA8u: goto label_1b0ca8;
            case 0x1B0CACu: goto label_1b0cac;
            case 0x1B0CB0u: goto label_1b0cb0;
            case 0x1B0CB4u: goto label_1b0cb4;
            case 0x1B0CB8u: goto label_1b0cb8;
            case 0x1B0CBCu: goto label_1b0cbc;
            case 0x1B0CC0u: goto label_1b0cc0;
            case 0x1B0CC4u: goto label_1b0cc4;
            case 0x1B0CC8u: goto label_1b0cc8;
            case 0x1B0CCCu: goto label_1b0ccc;
            case 0x1B0CD0u: goto label_1b0cd0;
            case 0x1B0CD4u: goto label_1b0cd4;
            case 0x1B0CD8u: goto label_1b0cd8;
            case 0x1B0CDCu: goto label_1b0cdc;
            case 0x1B0CE0u: goto label_1b0ce0;
            case 0x1B0CE4u: goto label_1b0ce4;
            case 0x1B0CE8u: goto label_1b0ce8;
            case 0x1B0CECu: goto label_1b0cec;
            case 0x1B0CF0u: goto label_1b0cf0;
            case 0x1B0CF4u: goto label_1b0cf4;
            case 0x1B0CF8u: goto label_1b0cf8;
            case 0x1B0CFCu: goto label_1b0cfc;
            case 0x1B0D00u: goto label_1b0d00;
            case 0x1B0D04u: goto label_1b0d04;
            case 0x1B0D08u: goto label_1b0d08;
            case 0x1B0D0Cu: goto label_1b0d0c;
            case 0x1B0D10u: goto label_1b0d10;
            case 0x1B0D14u: goto label_1b0d14;
            case 0x1B0D18u: goto label_1b0d18;
            case 0x1B0D1Cu: goto label_1b0d1c;
            case 0x1B0D20u: goto label_1b0d20;
            case 0x1B0D24u: goto label_1b0d24;
            case 0x1B0D28u: goto label_1b0d28;
            case 0x1B0D2Cu: goto label_1b0d2c;
            case 0x1B0D30u: goto label_1b0d30;
            case 0x1B0D34u: goto label_1b0d34;
            case 0x1B0D38u: goto label_1b0d38;
            case 0x1B0D3Cu: goto label_1b0d3c;
            case 0x1B0D40u: goto label_1b0d40;
            case 0x1B0D44u: goto label_1b0d44;
            case 0x1B0D48u: goto label_1b0d48;
            case 0x1B0D4Cu: goto label_1b0d4c;
            case 0x1B0D50u: goto label_1b0d50;
            case 0x1B0D54u: goto label_1b0d54;
            case 0x1B0D58u: goto label_1b0d58;
            case 0x1B0D5Cu: goto label_1b0d5c;
            case 0x1B0D60u: goto label_1b0d60;
            case 0x1B0D64u: goto label_1b0d64;
            case 0x1B0D68u: goto label_1b0d68;
            case 0x1B0D6Cu: goto label_1b0d6c;
            case 0x1B0D70u: goto label_1b0d70;
            case 0x1B0D74u: goto label_1b0d74;
            case 0x1B0D78u: goto label_1b0d78;
            case 0x1B0D7Cu: goto label_1b0d7c;
            case 0x1B0D80u: goto label_1b0d80;
            case 0x1B0D84u: goto label_1b0d84;
            case 0x1B0D88u: goto label_1b0d88;
            case 0x1B0D8Cu: goto label_1b0d8c;
            case 0x1B0D90u: goto label_1b0d90;
            case 0x1B0D94u: goto label_1b0d94;
            case 0x1B0D98u: goto label_1b0d98;
            case 0x1B0D9Cu: goto label_1b0d9c;
            case 0x1B0DA0u: goto label_1b0da0;
            case 0x1B0DA4u: goto label_1b0da4;
            case 0x1B0DA8u: goto label_1b0da8;
            case 0x1B0DACu: goto label_1b0dac;
            case 0x1B0DB0u: goto label_1b0db0;
            case 0x1B0DB4u: goto label_1b0db4;
            case 0x1B0DB8u: goto label_1b0db8;
            case 0x1B0DBCu: goto label_1b0dbc;
            case 0x1B0DC0u: goto label_1b0dc0;
            case 0x1B0DC4u: goto label_1b0dc4;
            case 0x1B0DC8u: goto label_1b0dc8;
            case 0x1B0DCCu: goto label_1b0dcc;
            case 0x1B0DD0u: goto label_1b0dd0;
            case 0x1B0DD4u: goto label_1b0dd4;
            case 0x1B0DD8u: goto label_1b0dd8;
            case 0x1B0DDCu: goto label_1b0ddc;
            case 0x1B0DE0u: goto label_1b0de0;
            case 0x1B0DE4u: goto label_1b0de4;
            case 0x1B0DE8u: goto label_1b0de8;
            case 0x1B0DECu: goto label_1b0dec;
            case 0x1B0DF0u: goto label_1b0df0;
            case 0x1B0DF4u: goto label_1b0df4;
            case 0x1B0DF8u: goto label_1b0df8;
            case 0x1B0DFCu: goto label_1b0dfc;
            case 0x1B0E00u: goto label_1b0e00;
            case 0x1B0E04u: goto label_1b0e04;
            case 0x1B0E08u: goto label_1b0e08;
            case 0x1B0E0Cu: goto label_1b0e0c;
            case 0x1B0E10u: goto label_1b0e10;
            case 0x1B0E14u: goto label_1b0e14;
            case 0x1B0E18u: goto label_1b0e18;
            case 0x1B0E1Cu: goto label_1b0e1c;
            case 0x1B0E20u: goto label_1b0e20;
            case 0x1B0E24u: goto label_1b0e24;
            case 0x1B0E28u: goto label_1b0e28;
            case 0x1B0E2Cu: goto label_1b0e2c;
            case 0x1B0E30u: goto label_1b0e30;
            case 0x1B0E34u: goto label_1b0e34;
            case 0x1B0E38u: goto label_1b0e38;
            case 0x1B0E3Cu: goto label_1b0e3c;
            case 0x1B0E40u: goto label_1b0e40;
            case 0x1B0E44u: goto label_1b0e44;
            case 0x1B0E48u: goto label_1b0e48;
            case 0x1B0E4Cu: goto label_1b0e4c;
            case 0x1B0E50u: goto label_1b0e50;
            case 0x1B0E54u: goto label_1b0e54;
            case 0x1B0E58u: goto label_1b0e58;
            case 0x1B0E5Cu: goto label_1b0e5c;
            case 0x1B0E60u: goto label_1b0e60;
            case 0x1B0E64u: goto label_1b0e64;
            case 0x1B0E68u: goto label_1b0e68;
            case 0x1B0E6Cu: goto label_1b0e6c;
            case 0x1B0E70u: goto label_1b0e70;
            case 0x1B0E74u: goto label_1b0e74;
            case 0x1B0E78u: goto label_1b0e78;
            case 0x1B0E7Cu: goto label_1b0e7c;
            case 0x1B0E80u: goto label_1b0e80;
            case 0x1B0E84u: goto label_1b0e84;
            case 0x1B0E88u: goto label_1b0e88;
            case 0x1B0E8Cu: goto label_1b0e8c;
            case 0x1B0E90u: goto label_1b0e90;
            case 0x1B0E94u: goto label_1b0e94;
            case 0x1B0E98u: goto label_1b0e98;
            case 0x1B0E9Cu: goto label_1b0e9c;
            case 0x1B0EA0u: goto label_1b0ea0;
            case 0x1B0EA4u: goto label_1b0ea4;
            case 0x1B0EA8u: goto label_1b0ea8;
            case 0x1B0EACu: goto label_1b0eac;
            case 0x1B0EB0u: goto label_1b0eb0;
            case 0x1B0EB4u: goto label_1b0eb4;
            case 0x1B0EB8u: goto label_1b0eb8;
            case 0x1B0EBCu: goto label_1b0ebc;
            case 0x1B0EC0u: goto label_1b0ec0;
            case 0x1B0EC4u: goto label_1b0ec4;
            case 0x1B0EC8u: goto label_1b0ec8;
            case 0x1B0ECCu: goto label_1b0ecc;
            case 0x1B0ED0u: goto label_1b0ed0;
            case 0x1B0ED4u: goto label_1b0ed4;
            case 0x1B0ED8u: goto label_1b0ed8;
            case 0x1B0EDCu: goto label_1b0edc;
            case 0x1B0EE0u: goto label_1b0ee0;
            case 0x1B0EE4u: goto label_1b0ee4;
            case 0x1B0EE8u: goto label_1b0ee8;
            case 0x1B0EECu: goto label_1b0eec;
            case 0x1B0EF0u: goto label_1b0ef0;
            case 0x1B0EF4u: goto label_1b0ef4;
            case 0x1B0EF8u: goto label_1b0ef8;
            case 0x1B0EFCu: goto label_1b0efc;
            case 0x1B0F00u: goto label_1b0f00;
            case 0x1B0F04u: goto label_1b0f04;
            case 0x1B0F08u: goto label_1b0f08;
            case 0x1B0F0Cu: goto label_1b0f0c;
            case 0x1B0F10u: goto label_1b0f10;
            case 0x1B0F14u: goto label_1b0f14;
            case 0x1B0F18u: goto label_1b0f18;
            case 0x1B0F1Cu: goto label_1b0f1c;
            case 0x1B0F20u: goto label_1b0f20;
            case 0x1B0F24u: goto label_1b0f24;
            case 0x1B0F28u: goto label_1b0f28;
            case 0x1B0F2Cu: goto label_1b0f2c;
            case 0x1B0F30u: goto label_1b0f30;
            case 0x1B0F34u: goto label_1b0f34;
            case 0x1B0F38u: goto label_1b0f38;
            case 0x1B0F3Cu: goto label_1b0f3c;
            case 0x1B0F40u: goto label_1b0f40;
            case 0x1B0F44u: goto label_1b0f44;
            case 0x1B0F48u: goto label_1b0f48;
            case 0x1B0F4Cu: goto label_1b0f4c;
            case 0x1B0F50u: goto label_1b0f50;
            case 0x1B0F54u: goto label_1b0f54;
            case 0x1B0F58u: goto label_1b0f58;
            case 0x1B0F5Cu: goto label_1b0f5c;
            case 0x1B0F60u: goto label_1b0f60;
            case 0x1B0F64u: goto label_1b0f64;
            case 0x1B0F68u: goto label_1b0f68;
            case 0x1B0F6Cu: goto label_1b0f6c;
            case 0x1B0F70u: goto label_1b0f70;
            case 0x1B0F74u: goto label_1b0f74;
            case 0x1B0F78u: goto label_1b0f78;
            case 0x1B0F7Cu: goto label_1b0f7c;
            case 0x1B0F80u: goto label_1b0f80;
            case 0x1B0F84u: goto label_1b0f84;
            case 0x1B0F88u: goto label_1b0f88;
            case 0x1B0F8Cu: goto label_1b0f8c;
            case 0x1B0F90u: goto label_1b0f90;
            case 0x1B0F94u: goto label_1b0f94;
            case 0x1B0F98u: goto label_1b0f98;
            case 0x1B0F9Cu: goto label_1b0f9c;
            case 0x1B0FA0u: goto label_1b0fa0;
            case 0x1B0FA4u: goto label_1b0fa4;
            case 0x1B0FA8u: goto label_1b0fa8;
            case 0x1B0FACu: goto label_1b0fac;
            case 0x1B0FB0u: goto label_1b0fb0;
            case 0x1B0FB4u: goto label_1b0fb4;
            case 0x1B0FB8u: goto label_1b0fb8;
            case 0x1B0FBCu: goto label_1b0fbc;
            case 0x1B0FC0u: goto label_1b0fc0;
            case 0x1B0FC4u: goto label_1b0fc4;
            case 0x1B0FC8u: goto label_1b0fc8;
            case 0x1B0FCCu: goto label_1b0fcc;
            case 0x1B0FD0u: goto label_1b0fd0;
            case 0x1B0FD4u: goto label_1b0fd4;
            case 0x1B0FD8u: goto label_1b0fd8;
            case 0x1B0FDCu: goto label_1b0fdc;
            case 0x1B0FE0u: goto label_1b0fe0;
            case 0x1B0FE4u: goto label_1b0fe4;
            case 0x1B0FE8u: goto label_1b0fe8;
            case 0x1B0FECu: goto label_1b0fec;
            case 0x1B0FF0u: goto label_1b0ff0;
            case 0x1B0FF4u: goto label_1b0ff4;
            case 0x1B0FF8u: goto label_1b0ff8;
            case 0x1B0FFCu: goto label_1b0ffc;
            case 0x1B1000u: goto label_1b1000;
            case 0x1B1004u: goto label_1b1004;
            case 0x1B1008u: goto label_1b1008;
            case 0x1B100Cu: goto label_1b100c;
            case 0x1B1010u: goto label_1b1010;
            case 0x1B1014u: goto label_1b1014;
            case 0x1B1018u: goto label_1b1018;
            case 0x1B101Cu: goto label_1b101c;
            case 0x1B1020u: goto label_1b1020;
            case 0x1B1024u: goto label_1b1024;
            case 0x1B1028u: goto label_1b1028;
            case 0x1B102Cu: goto label_1b102c;
            case 0x1B1030u: goto label_1b1030;
            case 0x1B1034u: goto label_1b1034;
            case 0x1B1038u: goto label_1b1038;
            case 0x1B103Cu: goto label_1b103c;
            case 0x1B1040u: goto label_1b1040;
            case 0x1B1044u: goto label_1b1044;
            case 0x1B1048u: goto label_1b1048;
            case 0x1B104Cu: goto label_1b104c;
            case 0x1B1050u: goto label_1b1050;
            case 0x1B1054u: goto label_1b1054;
            case 0x1B1058u: goto label_1b1058;
            case 0x1B105Cu: goto label_1b105c;
            case 0x1B1060u: goto label_1b1060;
            case 0x1B1064u: goto label_1b1064;
            case 0x1B1068u: goto label_1b1068;
            case 0x1B106Cu: goto label_1b106c;
            case 0x1B1070u: goto label_1b1070;
            case 0x1B1074u: goto label_1b1074;
            case 0x1B1078u: goto label_1b1078;
            case 0x1B107Cu: goto label_1b107c;
            case 0x1B1080u: goto label_1b1080;
            case 0x1B1084u: goto label_1b1084;
            case 0x1B1088u: goto label_1b1088;
            case 0x1B108Cu: goto label_1b108c;
            case 0x1B1090u: goto label_1b1090;
            case 0x1B1094u: goto label_1b1094;
            case 0x1B1098u: goto label_1b1098;
            case 0x1B109Cu: goto label_1b109c;
            case 0x1B10A0u: goto label_1b10a0;
            case 0x1B10A4u: goto label_1b10a4;
            case 0x1B10A8u: goto label_1b10a8;
            case 0x1B10ACu: goto label_1b10ac;
            case 0x1B10B0u: goto label_1b10b0;
            case 0x1B10B4u: goto label_1b10b4;
            case 0x1B10B8u: goto label_1b10b8;
            case 0x1B10BCu: goto label_1b10bc;
            case 0x1B10C0u: goto label_1b10c0;
            case 0x1B10C4u: goto label_1b10c4;
            case 0x1B10C8u: goto label_1b10c8;
            case 0x1B10CCu: goto label_1b10cc;
            case 0x1B10D0u: goto label_1b10d0;
            case 0x1B10D4u: goto label_1b10d4;
            case 0x1B10D8u: goto label_1b10d8;
            case 0x1B10DCu: goto label_1b10dc;
            case 0x1B10E0u: goto label_1b10e0;
            case 0x1B10E4u: goto label_1b10e4;
            case 0x1B10E8u: goto label_1b10e8;
            case 0x1B10ECu: goto label_1b10ec;
            case 0x1B10F0u: goto label_1b10f0;
            case 0x1B10F4u: goto label_1b10f4;
            case 0x1B10F8u: goto label_1b10f8;
            case 0x1B10FCu: goto label_1b10fc;
            case 0x1B1100u: goto label_1b1100;
            case 0x1B1104u: goto label_1b1104;
            case 0x1B1108u: goto label_1b1108;
            case 0x1B110Cu: goto label_1b110c;
            case 0x1B1110u: goto label_1b1110;
            case 0x1B1114u: goto label_1b1114;
            case 0x1B1118u: goto label_1b1118;
            case 0x1B111Cu: goto label_1b111c;
            case 0x1B1120u: goto label_1b1120;
            case 0x1B1124u: goto label_1b1124;
            case 0x1B1128u: goto label_1b1128;
            case 0x1B112Cu: goto label_1b112c;
            case 0x1B1130u: goto label_1b1130;
            case 0x1B1134u: goto label_1b1134;
            case 0x1B1138u: goto label_1b1138;
            case 0x1B113Cu: goto label_1b113c;
            case 0x1B1140u: goto label_1b1140;
            case 0x1B1144u: goto label_1b1144;
            case 0x1B1148u: goto label_1b1148;
            case 0x1B114Cu: goto label_1b114c;
            case 0x1B1150u: goto label_1b1150;
            case 0x1B1154u: goto label_1b1154;
            case 0x1B1158u: goto label_1b1158;
            case 0x1B115Cu: goto label_1b115c;
            case 0x1B1160u: goto label_1b1160;
            case 0x1B1164u: goto label_1b1164;
            case 0x1B1168u: goto label_1b1168;
            case 0x1B116Cu: goto label_1b116c;
            case 0x1B1170u: goto label_1b1170;
            case 0x1B1174u: goto label_1b1174;
            case 0x1B1178u: goto label_1b1178;
            case 0x1B117Cu: goto label_1b117c;
            case 0x1B1180u: goto label_1b1180;
            case 0x1B1184u: goto label_1b1184;
            case 0x1B1188u: goto label_1b1188;
            case 0x1B118Cu: goto label_1b118c;
            case 0x1B1190u: goto label_1b1190;
            case 0x1B1194u: goto label_1b1194;
            case 0x1B1198u: goto label_1b1198;
            case 0x1B119Cu: goto label_1b119c;
            case 0x1B11A0u: goto label_1b11a0;
            case 0x1B11A4u: goto label_1b11a4;
            case 0x1B11A8u: goto label_1b11a8;
            case 0x1B11ACu: goto label_1b11ac;
            case 0x1B11B0u: goto label_1b11b0;
            case 0x1B11B4u: goto label_1b11b4;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11C0u: goto label_1b11c0;
            case 0x1B11C4u: goto label_1b11c4;
            case 0x1B11C8u: goto label_1b11c8;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11D0u: goto label_1b11d0;
            case 0x1B11D4u: goto label_1b11d4;
            case 0x1B11D8u: goto label_1b11d8;
            case 0x1B11DCu: goto label_1b11dc;
            case 0x1B11E0u: goto label_1b11e0;
            case 0x1B11E4u: goto label_1b11e4;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B11ECu: goto label_1b11ec;
            case 0x1B11F0u: goto label_1b11f0;
            case 0x1B11F4u: goto label_1b11f4;
            case 0x1B11F8u: goto label_1b11f8;
            case 0x1B11FCu: goto label_1b11fc;
            case 0x1B1200u: goto label_1b1200;
            case 0x1B1204u: goto label_1b1204;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B120Cu: goto label_1b120c;
            case 0x1B1210u: goto label_1b1210;
            case 0x1B1214u: goto label_1b1214;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B121Cu: goto label_1b121c;
            case 0x1B1220u: goto label_1b1220;
            case 0x1B1224u: goto label_1b1224;
            case 0x1B1228u: goto label_1b1228;
            case 0x1B122Cu: goto label_1b122c;
            case 0x1B1230u: goto label_1b1230;
            case 0x1B1234u: goto label_1b1234;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B123Cu: goto label_1b123c;
            case 0x1B1240u: goto label_1b1240;
            case 0x1B1244u: goto label_1b1244;
            case 0x1B1248u: goto label_1b1248;
            case 0x1B124Cu: goto label_1b124c;
            case 0x1B1250u: goto label_1b1250;
            case 0x1B1254u: goto label_1b1254;
            case 0x1B1258u: goto label_1b1258;
            case 0x1B125Cu: goto label_1b125c;
            case 0x1B1260u: goto label_1b1260;
            case 0x1B1264u: goto label_1b1264;
            case 0x1B1268u: goto label_1b1268;
            case 0x1B126Cu: goto label_1b126c;
            case 0x1B1270u: goto label_1b1270;
            case 0x1B1274u: goto label_1b1274;
            case 0x1B1278u: goto label_1b1278;
            case 0x1B127Cu: goto label_1b127c;
            case 0x1B1280u: goto label_1b1280;
            case 0x1B1284u: goto label_1b1284;
            case 0x1B1288u: goto label_1b1288;
            case 0x1B128Cu: goto label_1b128c;
            case 0x1B1290u: goto label_1b1290;
            case 0x1B1294u: goto label_1b1294;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12A0u: goto label_1b12a0;
            case 0x1B12A4u: goto label_1b12a4;
            case 0x1B12A8u: goto label_1b12a8;
            case 0x1B12ACu: goto label_1b12ac;
            case 0x1B12B0u: goto label_1b12b0;
            case 0x1B12B4u: goto label_1b12b4;
            case 0x1B12B8u: goto label_1b12b8;
            case 0x1B12BCu: goto label_1b12bc;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12C4u: goto label_1b12c4;
            case 0x1B12C8u: goto label_1b12c8;
            case 0x1B12CCu: goto label_1b12cc;
            case 0x1B12D0u: goto label_1b12d0;
            case 0x1B12D4u: goto label_1b12d4;
            case 0x1B12D8u: goto label_1b12d8;
            case 0x1B12DCu: goto label_1b12dc;
            case 0x1B12E0u: goto label_1b12e0;
            case 0x1B12E4u: goto label_1b12e4;
            case 0x1B12E8u: goto label_1b12e8;
            case 0x1B12ECu: goto label_1b12ec;
            case 0x1B12F0u: goto label_1b12f0;
            case 0x1B12F4u: goto label_1b12f4;
            case 0x1B12F8u: goto label_1b12f8;
            case 0x1B12FCu: goto label_1b12fc;
            case 0x1B1300u: goto label_1b1300;
            case 0x1B1304u: goto label_1b1304;
            case 0x1B1308u: goto label_1b1308;
            case 0x1B130Cu: goto label_1b130c;
            case 0x1B1310u: goto label_1b1310;
            case 0x1B1314u: goto label_1b1314;
            case 0x1B1318u: goto label_1b1318;
            case 0x1B131Cu: goto label_1b131c;
            case 0x1B1320u: goto label_1b1320;
            case 0x1B1324u: goto label_1b1324;
            case 0x1B1328u: goto label_1b1328;
            case 0x1B132Cu: goto label_1b132c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1b1328:
    ctx->pc = 0x1B1330u;
}
