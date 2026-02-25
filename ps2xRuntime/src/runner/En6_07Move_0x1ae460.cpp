#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_07Move
// Address: 0x1ae460 - 0x1ae830
void En6_07Move_0x1ae460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_07Move_0x1ae460");
#endif

    ctx->pc = 0x1ae460u;

label_1ae460:
    // 0x1ae460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ae464:
    // 0x1ae464: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ae468:
    // 0x1ae468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ae46c:
    // 0x1ae46c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae46cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae470:
    // 0x1ae470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ae470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ae474:
    // 0x1ae474: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae478:
    // 0x1ae478: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ae478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae47c:
    // 0x1ae47c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1ae47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae480:
    // 0x1ae480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ae480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae484:
    // 0x1ae484: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1ae484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae488:
    // 0x1ae488: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ae488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ae48c:
    // 0x1ae48c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1ae48cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1ae490:
    // 0x1ae490: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae494:
    // 0x1ae494: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1ae494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae498:
    // 0x1ae498: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1ae498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae49c:
    // 0x1ae49c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ae49cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ae4a0:
    // 0x1ae4a0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1ae4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1ae4a4:
    // 0x1ae4a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae4a8:
    // 0x1ae4a8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1ae4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae4ac:
    // 0x1ae4ac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1ae4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae4b0:
    // 0x1ae4b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ae4b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ae4b4:
    // 0x1ae4b4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1ae4b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1ae4b8:
    // 0x1ae4b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae4bc:
    // 0x1ae4bc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1ae4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae4c0:
    // 0x1ae4c0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1ae4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae4c4:
    // 0x1ae4c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ae4c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ae4c8:
    // 0x1ae4c8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1ae4c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1ae4cc:
    // 0x1ae4cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae4d0:
    // 0x1ae4d0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1ae4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae4d4:
    // 0x1ae4d4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1ae4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae4d8:
    // 0x1ae4d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1ae4d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1ae4dc:
    // 0x1ae4dc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1ae4dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1ae4e0:
    // 0x1ae4e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ae4e4:
    // 0x1ae4e4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1ae4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae4e8:
    // 0x1ae4e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ae4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae4ec:
    // 0x1ae4ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1ae4f0:
    if (ctx->pc == 0x1AE4F0u) {
        ctx->pc = 0x1AE4F0u;
            // 0x1ae4f0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1AE4F4u;
        goto label_1ae4f4;
    }
    ctx->pc = 0x1AE4ECu;
    {
        const bool branch_taken_0x1ae4ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4ECu;
            // 0x1ae4f0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ec) {
            ctx->pc = 0x1AE510u;
            goto label_1ae510;
        }
    }
    ctx->pc = 0x1AE4F4u;
label_1ae4f4:
    // 0x1ae4f4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae4f8:
    // 0x1ae4f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae4f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae4fc:
    // 0x1ae4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae500:
    // 0x1ae500: 0x0  nop
    ctx->pc = 0x1ae500u;
    // NOP
label_1ae504:
    // 0x1ae504: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ae508:
    // 0x1ae508: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1ae508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1ae50c:
    // 0x1ae50c: 0x0  nop
    ctx->pc = 0x1ae50cu;
    // NOP
label_1ae510:
    // 0x1ae510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae514:
    // 0x1ae514: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ae514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ae518:
    // 0x1ae518: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae518u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae51c:
    // 0x1ae51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae520:
    // 0x1ae520: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1ae520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae524:
    // 0x1ae524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ae524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae528:
    // 0x1ae528: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ae52c:
    if (ctx->pc == 0x1AE52Cu) {
        ctx->pc = 0x1AE52Cu;
            // 0x1ae52c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1AE530u;
        goto label_1ae530;
    }
    ctx->pc = 0x1AE528u;
    {
        const bool branch_taken_0x1ae528 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE528u;
            // 0x1ae52c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae528) {
            ctx->pc = 0x1AE548u;
            goto label_1ae548;
        }
    }
    ctx->pc = 0x1AE530u;
label_1ae530:
    // 0x1ae530: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae534:
    // 0x1ae534: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae534u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae538:
    // 0x1ae538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae53c:
    // 0x1ae53c: 0x0  nop
    ctx->pc = 0x1ae53cu;
    // NOP
label_1ae540:
    // 0x1ae540: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae540u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ae544:
    // 0x1ae544: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ae544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ae548:
    // 0x1ae548: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae54c:
    // 0x1ae54c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ae550:
    // 0x1ae550: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae550u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae554:
    // 0x1ae554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae558:
    // 0x1ae558: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ae558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae55c:
    // 0x1ae55c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ae55cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae560:
    // 0x1ae560: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ae564:
    if (ctx->pc == 0x1AE564u) {
        ctx->pc = 0x1AE564u;
            // 0x1ae564: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AE568u;
        goto label_1ae568;
    }
    ctx->pc = 0x1AE560u;
    {
        const bool branch_taken_0x1ae560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE560u;
            // 0x1ae564: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae560) {
            ctx->pc = 0x1AE580u;
            goto label_1ae580;
        }
    }
    ctx->pc = 0x1AE568u;
label_1ae568:
    // 0x1ae568: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae56c:
    // 0x1ae56c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae56cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae570:
    // 0x1ae570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae574:
    // 0x1ae574: 0x0  nop
    ctx->pc = 0x1ae574u;
    // NOP
label_1ae578:
    // 0x1ae578: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ae57c:
    // 0x1ae57c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ae57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ae580:
    // 0x1ae580: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae584:
    // 0x1ae584: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ae588:
    // 0x1ae588: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae588u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae58c:
    // 0x1ae58c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae58cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae590:
    // 0x1ae590: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1ae590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae594:
    // 0x1ae594: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ae594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae598:
    // 0x1ae598: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ae59c:
    if (ctx->pc == 0x1AE59Cu) {
        ctx->pc = 0x1AE59Cu;
            // 0x1ae59c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AE5A0u;
        goto label_1ae5a0;
    }
    ctx->pc = 0x1AE598u;
    {
        const bool branch_taken_0x1ae598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE598u;
            // 0x1ae59c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae598) {
            ctx->pc = 0x1AE5B8u;
            goto label_1ae5b8;
        }
    }
    ctx->pc = 0x1AE5A0u;
label_1ae5a0:
    // 0x1ae5a0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae5a4:
    // 0x1ae5a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae5a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae5a8:
    // 0x1ae5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae5ac:
    // 0x1ae5ac: 0x0  nop
    ctx->pc = 0x1ae5acu;
    // NOP
label_1ae5b0:
    // 0x1ae5b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae5b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ae5b4:
    // 0x1ae5b4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ae5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ae5b8:
    // 0x1ae5b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae5bc:
    // 0x1ae5bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1ae5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1ae5c0:
    // 0x1ae5c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae5c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae5c4:
    // 0x1ae5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae5c8:
    // 0x1ae5c8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ae5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae5cc:
    // 0x1ae5cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ae5ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae5d0:
    // 0x1ae5d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ae5d4:
    if (ctx->pc == 0x1AE5D4u) {
        ctx->pc = 0x1AE5D4u;
            // 0x1ae5d4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AE5D8u;
        goto label_1ae5d8;
    }
    ctx->pc = 0x1AE5D0u;
    {
        const bool branch_taken_0x1ae5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5D0u;
            // 0x1ae5d4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5d0) {
            ctx->pc = 0x1AE5F0u;
            goto label_1ae5f0;
        }
    }
    ctx->pc = 0x1AE5D8u;
label_1ae5d8:
    // 0x1ae5d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae5dc:
    // 0x1ae5dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae5dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae5e0:
    // 0x1ae5e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae5e4:
    // 0x1ae5e4: 0x0  nop
    ctx->pc = 0x1ae5e4u;
    // NOP
label_1ae5e8:
    // 0x1ae5e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ae5e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1ae5ec:
    // 0x1ae5ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ae5ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ae5f0:
    // 0x1ae5f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae5f4:
    // 0x1ae5f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ae5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1ae5f8:
    // 0x1ae5f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae5f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae5fc:
    // 0x1ae5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae600:
    // 0x1ae600: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1ae600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ae604:
    // 0x1ae604: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ae604u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae608:
    // 0x1ae608: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1ae60c:
    if (ctx->pc == 0x1AE60Cu) {
        ctx->pc = 0x1AE60Cu;
            // 0x1ae60c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AE610u;
        goto label_1ae610;
    }
    ctx->pc = 0x1AE608u;
    {
        const bool branch_taken_0x1ae608 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE608u;
            // 0x1ae60c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae608) {
            ctx->pc = 0x1AE628u;
            goto label_1ae628;
        }
    }
    ctx->pc = 0x1AE610u;
label_1ae610:
    // 0x1ae610: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1ae610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1ae614:
    // 0x1ae614: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ae614u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1ae618:
    // 0x1ae618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae61c:
    // 0x1ae61c: 0x0  nop
    ctx->pc = 0x1ae61cu;
    // NOP
label_1ae620:
    // 0x1ae620: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ae620u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1ae624:
    // 0x1ae624: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ae624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1ae628:
    // 0x1ae628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae62c:
    // 0x1ae62c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1ae62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1ae630:
    // 0x1ae630: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1ae630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae634:
    // 0x1ae634: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1ae634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ae638:
    // 0x1ae638: 0xc06ba0c  jal         func_1AE830
label_1ae63c:
    if (ctx->pc == 0x1AE63Cu) {
        ctx->pc = 0x1AE63Cu;
            // 0x1ae63c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1AE640u;
        goto label_1ae640;
    }
    ctx->pc = 0x1AE638u;
    SET_GPR_U32(ctx, 31, 0x1AE640u);
    ctx->pc = 0x1AE63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE638u;
            // 0x1ae63c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AE830u;
    if (runtime->hasFunction(0x1AE830u)) {
        auto targetFn = runtime->lookupFunction(0x1AE830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE640u; }
        if (ctx->pc != 0x1AE640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1ae830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE640u; }
        if (ctx->pc != 0x1AE640u) { return; }
    }
    ctx->pc = 0x1AE640u;
label_1ae640:
    // 0x1ae640: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ae644:
    // 0x1ae644: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1ae644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1ae648:
    // 0x1ae648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ae648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ae64c:
    // 0x1ae64c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1ae64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1ae650:
    // 0x1ae650: 0xc04b788  jal         func_12DE20
label_1ae654:
    if (ctx->pc == 0x1AE654u) {
        ctx->pc = 0x1AE654u;
            // 0x1ae654: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AE658u;
        goto label_1ae658;
    }
    ctx->pc = 0x1AE650u;
    SET_GPR_U32(ctx, 31, 0x1AE658u);
    ctx->pc = 0x1AE654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE650u;
            // 0x1ae654: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE658u; }
        if (ctx->pc != 0x1AE658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE658u; }
        if (ctx->pc != 0x1AE658u) { return; }
    }
    ctx->pc = 0x1AE658u;
label_1ae658:
    // 0x1ae658: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae65c:
    // 0x1ae65c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1ae65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae660:
    // 0x1ae660: 0xc04b7da  jal         func_12DF68
label_1ae664:
    if (ctx->pc == 0x1AE664u) {
        ctx->pc = 0x1AE664u;
            // 0x1ae664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE668u;
        goto label_1ae668;
    }
    ctx->pc = 0x1AE660u;
    SET_GPR_U32(ctx, 31, 0x1AE668u);
    ctx->pc = 0x1AE664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE660u;
            // 0x1ae664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE668u; }
        if (ctx->pc != 0x1AE668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE668u; }
        if (ctx->pc != 0x1AE668u) { return; }
    }
    ctx->pc = 0x1AE668u;
label_1ae668:
    // 0x1ae668: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae66c:
    // 0x1ae66c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1ae66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae670:
    // 0x1ae670: 0xc04b804  jal         func_12E010
label_1ae674:
    if (ctx->pc == 0x1AE674u) {
        ctx->pc = 0x1AE674u;
            // 0x1ae674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE678u;
        goto label_1ae678;
    }
    ctx->pc = 0x1AE670u;
    SET_GPR_U32(ctx, 31, 0x1AE678u);
    ctx->pc = 0x1AE674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE670u;
            // 0x1ae674: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE678u; }
        if (ctx->pc != 0x1AE678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE678u; }
        if (ctx->pc != 0x1AE678u) { return; }
    }
    ctx->pc = 0x1AE678u;
label_1ae678:
    // 0x1ae678: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae67c:
    // 0x1ae67c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1ae67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ae680:
    // 0x1ae680: 0xc04b7b0  jal         func_12DEC0
label_1ae684:
    if (ctx->pc == 0x1AE684u) {
        ctx->pc = 0x1AE684u;
            // 0x1ae684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE688u;
        goto label_1ae688;
    }
    ctx->pc = 0x1AE680u;
    SET_GPR_U32(ctx, 31, 0x1AE688u);
    ctx->pc = 0x1AE684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE680u;
            // 0x1ae684: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE688u; }
        if (ctx->pc != 0x1AE688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE688u; }
        if (ctx->pc != 0x1AE688u) { return; }
    }
    ctx->pc = 0x1AE688u;
label_1ae688:
    // 0x1ae688: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ae688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae68c:
    // 0x1ae68c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1ae68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ae690:
    // 0x1ae690: 0xc04b75e  jal         func_12DD78
label_1ae694:
    if (ctx->pc == 0x1AE694u) {
        ctx->pc = 0x1AE694u;
            // 0x1ae694: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AE698u;
        goto label_1ae698;
    }
    ctx->pc = 0x1AE690u;
    SET_GPR_U32(ctx, 31, 0x1AE698u);
    ctx->pc = 0x1AE694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE690u;
            // 0x1ae694: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE698u; }
        if (ctx->pc != 0x1AE698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE698u; }
        if (ctx->pc != 0x1AE698u) { return; }
    }
    ctx->pc = 0x1AE698u;
label_1ae698:
    // 0x1ae698: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ae69c:
    // 0x1ae69c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ae69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ae6a0:
    // 0x1ae6a0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1ae6a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ae6a4:
    // 0x1ae6a4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1ae6a8:
    if (ctx->pc == 0x1AE6A8u) {
        ctx->pc = 0x1AE6ACu;
        goto label_1ae6ac;
    }
    ctx->pc = 0x1AE6A4u;
    {
        const bool branch_taken_0x1ae6a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6a4) {
            ctx->pc = 0x1AE6F8u;
            goto label_1ae6f8;
        }
    }
    ctx->pc = 0x1AE6ACu;
label_1ae6ac:
    // 0x1ae6ac: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ae6b0:
    // 0x1ae6b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1ae6b4:
    if (ctx->pc == 0x1AE6B4u) {
        ctx->pc = 0x1AE6B8u;
        goto label_1ae6b8;
    }
    ctx->pc = 0x1AE6B0u;
    {
        const bool branch_taken_0x1ae6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6b0) {
            ctx->pc = 0x1AE6C8u;
            goto label_1ae6c8;
        }
    }
    ctx->pc = 0x1AE6B8u;
label_1ae6b8:
    // 0x1ae6b8: 0xc0604f0  jal         func_1813C0
label_1ae6bc:
    if (ctx->pc == 0x1AE6BCu) {
        ctx->pc = 0x1AE6BCu;
            // 0x1ae6bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AE6C0u;
        goto label_1ae6c0;
    }
    ctx->pc = 0x1AE6B8u;
    SET_GPR_U32(ctx, 31, 0x1AE6C0u);
    ctx->pc = 0x1AE6BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6B8u;
            // 0x1ae6bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6C0u; }
        if (ctx->pc != 0x1AE6C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6C0u; }
        if (ctx->pc != 0x1AE6C0u) { return; }
    }
    ctx->pc = 0x1AE6C0u;
label_1ae6c0:
    // 0x1ae6c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ae6c4:
    if (ctx->pc == 0x1AE6C4u) {
        ctx->pc = 0x1AE6C8u;
        goto label_1ae6c8;
    }
    ctx->pc = 0x1AE6C0u;
    {
        const bool branch_taken_0x1ae6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6c0) {
            ctx->pc = 0x1AE6D0u;
            goto label_1ae6d0;
        }
    }
    ctx->pc = 0x1AE6C8u;
label_1ae6c8:
    // 0x1ae6c8: 0xc0604dc  jal         func_181370
label_1ae6cc:
    if (ctx->pc == 0x1AE6CCu) {
        ctx->pc = 0x1AE6CCu;
            // 0x1ae6cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AE6D0u;
        goto label_1ae6d0;
    }
    ctx->pc = 0x1AE6C8u;
    SET_GPR_U32(ctx, 31, 0x1AE6D0u);
    ctx->pc = 0x1AE6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6C8u;
            // 0x1ae6cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6D0u; }
        if (ctx->pc != 0x1AE6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE6D0u; }
        if (ctx->pc != 0x1AE6D0u) { return; }
    }
    ctx->pc = 0x1AE6D0u;
label_1ae6d0:
    // 0x1ae6d0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1ae6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1ae6d4:
    // 0x1ae6d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ae6d8:
    if (ctx->pc == 0x1AE6D8u) {
        ctx->pc = 0x1AE6DCu;
        goto label_1ae6dc;
    }
    ctx->pc = 0x1AE6D4u;
    {
        const bool branch_taken_0x1ae6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae6d4) {
            ctx->pc = 0x1AE6E8u;
            goto label_1ae6e8;
        }
    }
    ctx->pc = 0x1AE6DCu;
label_1ae6dc:
    // 0x1ae6dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ae6e0:
    if (ctx->pc == 0x1AE6E0u) {
        ctx->pc = 0x1AE6E0u;
            // 0x1ae6e0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AE6E4u;
        goto label_1ae6e4;
    }
    ctx->pc = 0x1AE6DCu;
    {
        const bool branch_taken_0x1ae6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6DCu;
            // 0x1ae6e0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6dc) {
            ctx->pc = 0x1AE708u;
            goto label_1ae708;
        }
    }
    ctx->pc = 0x1AE6E4u;
label_1ae6e4:
    // 0x1ae6e4: 0x0  nop
    ctx->pc = 0x1ae6e4u;
    // NOP
label_1ae6e8:
    // 0x1ae6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae6ec:
    // 0x1ae6ec: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ae6f0:
    if (ctx->pc == 0x1AE6F0u) {
        ctx->pc = 0x1AE6F0u;
            // 0x1ae6f0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AE6F4u;
        goto label_1ae6f4;
    }
    ctx->pc = 0x1AE6ECu;
    {
        const bool branch_taken_0x1ae6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6ECu;
            // 0x1ae6f0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6ec) {
            ctx->pc = 0x1AE708u;
            goto label_1ae708;
        }
    }
    ctx->pc = 0x1AE6F4u;
label_1ae6f4:
    // 0x1ae6f4: 0x0  nop
    ctx->pc = 0x1ae6f4u;
    // NOP
label_1ae6f8:
    // 0x1ae6f8: 0xc0604dc  jal         func_181370
label_1ae6fc:
    if (ctx->pc == 0x1AE6FCu) {
        ctx->pc = 0x1AE6FCu;
            // 0x1ae6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AE700u;
        goto label_1ae700;
    }
    ctx->pc = 0x1AE6F8u;
    SET_GPR_U32(ctx, 31, 0x1AE700u);
    ctx->pc = 0x1AE6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6F8u;
            // 0x1ae6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE700u; }
        if (ctx->pc != 0x1AE700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE700u; }
        if (ctx->pc != 0x1AE700u) { return; }
    }
    ctx->pc = 0x1AE700u;
label_1ae700:
    // 0x1ae700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae704:
    // 0x1ae704: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1ae704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1ae708:
    // 0x1ae708: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ae708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ae70c:
    // 0x1ae70c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ae70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ae710:
    // 0x1ae710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ae710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ae714:
    // 0x1ae714: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1ae714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1ae718:
    // 0x1ae718: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ae71c:
    // 0x1ae71c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1ae720:
    // 0x1ae720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae724:
    // 0x1ae724: 0x0  nop
    ctx->pc = 0x1ae724u;
    // NOP
label_1ae728:
    // 0x1ae728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae72c:
    // 0x1ae72c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1ae72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1ae730:
    // 0x1ae730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ae730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ae734:
    // 0x1ae734: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x1ae734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_1ae738:
    // 0x1ae738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae73c:
    // 0x1ae73c: 0x0  nop
    ctx->pc = 0x1ae73cu;
    // NOP
label_1ae740:
    // 0x1ae740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae744:
    // 0x1ae744: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1ae744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1ae748:
    // 0x1ae748: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ae748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1ae74c:
    // 0x1ae74c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x1ae74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_1ae750:
    // 0x1ae750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae754:
    // 0x1ae754: 0x0  nop
    ctx->pc = 0x1ae754u;
    // NOP
label_1ae758:
    // 0x1ae758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae75c:
    // 0x1ae75c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1ae75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1ae760:
    // 0x1ae760: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ae760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ae764:
    // 0x1ae764: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x1ae764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_1ae768:
    // 0x1ae768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae76c:
    // 0x1ae76c: 0x0  nop
    ctx->pc = 0x1ae76cu;
    // NOP
label_1ae770:
    // 0x1ae770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ae770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ae774:
    // 0x1ae774: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1ae774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1ae778:
    // 0x1ae778: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1ae778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1ae77c:
    // 0x1ae77c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ae77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ae780:
    // 0x1ae780: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1ae780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1ae784:
    // 0x1ae784: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ae784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ae788:
    // 0x1ae788: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x1ae788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae78c:
    // 0x1ae78c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ae78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae790:
    // 0x1ae790: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1ae794:
    if (ctx->pc == 0x1AE794u) {
        ctx->pc = 0x1AE794u;
            // 0x1ae794: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1AE798u;
        goto label_1ae798;
    }
    ctx->pc = 0x1AE790u;
    {
        const bool branch_taken_0x1ae790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AE794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE790u;
            // 0x1ae794: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae790) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE798u;
label_1ae798:
    // 0x1ae798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ae798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ae79c:
    // 0x1ae79c: 0x0  nop
    ctx->pc = 0x1ae79cu;
    // NOP
label_1ae7a0:
    // 0x1ae7a0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ae7a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae7a4:
    // 0x1ae7a4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1ae7a8:
    if (ctx->pc == 0x1AE7A8u) {
        ctx->pc = 0x1AE7ACu;
        goto label_1ae7ac;
    }
    ctx->pc = 0x1AE7A4u;
    {
        const bool branch_taken_0x1ae7a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae7a4) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE7ACu;
label_1ae7ac:
    // 0x1ae7ac: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1ae7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ae7b0:
    // 0x1ae7b0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1ae7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae7b4:
    // 0x1ae7b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ae7b8:
    if (ctx->pc == 0x1AE7B8u) {
        ctx->pc = 0x1AE7BCu;
        goto label_1ae7bc;
    }
    ctx->pc = 0x1AE7B4u;
    {
        const bool branch_taken_0x1ae7b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae7b4) {
            ctx->pc = 0x1AE7C8u;
            goto label_1ae7c8;
        }
    }
    ctx->pc = 0x1AE7BCu;
label_1ae7bc:
    // 0x1ae7bc: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ae7bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ae7c0:
    // 0x1ae7c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1ae7c4:
    if (ctx->pc == 0x1AE7C4u) {
        ctx->pc = 0x1AE7C8u;
        goto label_1ae7c8;
    }
    ctx->pc = 0x1AE7C0u;
    {
        const bool branch_taken_0x1ae7c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ae7c0) {
            ctx->pc = 0x1AE7E0u;
            goto label_1ae7e0;
        }
    }
    ctx->pc = 0x1AE7C8u;
label_1ae7c8:
    // 0x1ae7c8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ae7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ae7cc:
    // 0x1ae7cc: 0x40f809  jalr        $v0
label_1ae7d0:
    if (ctx->pc == 0x1AE7D0u) {
        ctx->pc = 0x1AE7D0u;
            // 0x1ae7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7D4u;
        goto label_1ae7d4;
    }
    ctx->pc = 0x1AE7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE7D4u);
        ctx->pc = 0x1AE7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7CCu;
            // 0x1ae7d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE460u: goto label_1ae460;
            case 0x1AE464u: goto label_1ae464;
            case 0x1AE468u: goto label_1ae468;
            case 0x1AE46Cu: goto label_1ae46c;
            case 0x1AE470u: goto label_1ae470;
            case 0x1AE474u: goto label_1ae474;
            case 0x1AE478u: goto label_1ae478;
            case 0x1AE47Cu: goto label_1ae47c;
            case 0x1AE480u: goto label_1ae480;
            case 0x1AE484u: goto label_1ae484;
            case 0x1AE488u: goto label_1ae488;
            case 0x1AE48Cu: goto label_1ae48c;
            case 0x1AE490u: goto label_1ae490;
            case 0x1AE494u: goto label_1ae494;
            case 0x1AE498u: goto label_1ae498;
            case 0x1AE49Cu: goto label_1ae49c;
            case 0x1AE4A0u: goto label_1ae4a0;
            case 0x1AE4A4u: goto label_1ae4a4;
            case 0x1AE4A8u: goto label_1ae4a8;
            case 0x1AE4ACu: goto label_1ae4ac;
            case 0x1AE4B0u: goto label_1ae4b0;
            case 0x1AE4B4u: goto label_1ae4b4;
            case 0x1AE4B8u: goto label_1ae4b8;
            case 0x1AE4BCu: goto label_1ae4bc;
            case 0x1AE4C0u: goto label_1ae4c0;
            case 0x1AE4C4u: goto label_1ae4c4;
            case 0x1AE4C8u: goto label_1ae4c8;
            case 0x1AE4CCu: goto label_1ae4cc;
            case 0x1AE4D0u: goto label_1ae4d0;
            case 0x1AE4D4u: goto label_1ae4d4;
            case 0x1AE4D8u: goto label_1ae4d8;
            case 0x1AE4DCu: goto label_1ae4dc;
            case 0x1AE4E0u: goto label_1ae4e0;
            case 0x1AE4E4u: goto label_1ae4e4;
            case 0x1AE4E8u: goto label_1ae4e8;
            case 0x1AE4ECu: goto label_1ae4ec;
            case 0x1AE4F0u: goto label_1ae4f0;
            case 0x1AE4F4u: goto label_1ae4f4;
            case 0x1AE4F8u: goto label_1ae4f8;
            case 0x1AE4FCu: goto label_1ae4fc;
            case 0x1AE500u: goto label_1ae500;
            case 0x1AE504u: goto label_1ae504;
            case 0x1AE508u: goto label_1ae508;
            case 0x1AE50Cu: goto label_1ae50c;
            case 0x1AE510u: goto label_1ae510;
            case 0x1AE514u: goto label_1ae514;
            case 0x1AE518u: goto label_1ae518;
            case 0x1AE51Cu: goto label_1ae51c;
            case 0x1AE520u: goto label_1ae520;
            case 0x1AE524u: goto label_1ae524;
            case 0x1AE528u: goto label_1ae528;
            case 0x1AE52Cu: goto label_1ae52c;
            case 0x1AE530u: goto label_1ae530;
            case 0x1AE534u: goto label_1ae534;
            case 0x1AE538u: goto label_1ae538;
            case 0x1AE53Cu: goto label_1ae53c;
            case 0x1AE540u: goto label_1ae540;
            case 0x1AE544u: goto label_1ae544;
            case 0x1AE548u: goto label_1ae548;
            case 0x1AE54Cu: goto label_1ae54c;
            case 0x1AE550u: goto label_1ae550;
            case 0x1AE554u: goto label_1ae554;
            case 0x1AE558u: goto label_1ae558;
            case 0x1AE55Cu: goto label_1ae55c;
            case 0x1AE560u: goto label_1ae560;
            case 0x1AE564u: goto label_1ae564;
            case 0x1AE568u: goto label_1ae568;
            case 0x1AE56Cu: goto label_1ae56c;
            case 0x1AE570u: goto label_1ae570;
            case 0x1AE574u: goto label_1ae574;
            case 0x1AE578u: goto label_1ae578;
            case 0x1AE57Cu: goto label_1ae57c;
            case 0x1AE580u: goto label_1ae580;
            case 0x1AE584u: goto label_1ae584;
            case 0x1AE588u: goto label_1ae588;
            case 0x1AE58Cu: goto label_1ae58c;
            case 0x1AE590u: goto label_1ae590;
            case 0x1AE594u: goto label_1ae594;
            case 0x1AE598u: goto label_1ae598;
            case 0x1AE59Cu: goto label_1ae59c;
            case 0x1AE5A0u: goto label_1ae5a0;
            case 0x1AE5A4u: goto label_1ae5a4;
            case 0x1AE5A8u: goto label_1ae5a8;
            case 0x1AE5ACu: goto label_1ae5ac;
            case 0x1AE5B0u: goto label_1ae5b0;
            case 0x1AE5B4u: goto label_1ae5b4;
            case 0x1AE5B8u: goto label_1ae5b8;
            case 0x1AE5BCu: goto label_1ae5bc;
            case 0x1AE5C0u: goto label_1ae5c0;
            case 0x1AE5C4u: goto label_1ae5c4;
            case 0x1AE5C8u: goto label_1ae5c8;
            case 0x1AE5CCu: goto label_1ae5cc;
            case 0x1AE5D0u: goto label_1ae5d0;
            case 0x1AE5D4u: goto label_1ae5d4;
            case 0x1AE5D8u: goto label_1ae5d8;
            case 0x1AE5DCu: goto label_1ae5dc;
            case 0x1AE5E0u: goto label_1ae5e0;
            case 0x1AE5E4u: goto label_1ae5e4;
            case 0x1AE5E8u: goto label_1ae5e8;
            case 0x1AE5ECu: goto label_1ae5ec;
            case 0x1AE5F0u: goto label_1ae5f0;
            case 0x1AE5F4u: goto label_1ae5f4;
            case 0x1AE5F8u: goto label_1ae5f8;
            case 0x1AE5FCu: goto label_1ae5fc;
            case 0x1AE600u: goto label_1ae600;
            case 0x1AE604u: goto label_1ae604;
            case 0x1AE608u: goto label_1ae608;
            case 0x1AE60Cu: goto label_1ae60c;
            case 0x1AE610u: goto label_1ae610;
            case 0x1AE614u: goto label_1ae614;
            case 0x1AE618u: goto label_1ae618;
            case 0x1AE61Cu: goto label_1ae61c;
            case 0x1AE620u: goto label_1ae620;
            case 0x1AE624u: goto label_1ae624;
            case 0x1AE628u: goto label_1ae628;
            case 0x1AE62Cu: goto label_1ae62c;
            case 0x1AE630u: goto label_1ae630;
            case 0x1AE634u: goto label_1ae634;
            case 0x1AE638u: goto label_1ae638;
            case 0x1AE63Cu: goto label_1ae63c;
            case 0x1AE640u: goto label_1ae640;
            case 0x1AE644u: goto label_1ae644;
            case 0x1AE648u: goto label_1ae648;
            case 0x1AE64Cu: goto label_1ae64c;
            case 0x1AE650u: goto label_1ae650;
            case 0x1AE654u: goto label_1ae654;
            case 0x1AE658u: goto label_1ae658;
            case 0x1AE65Cu: goto label_1ae65c;
            case 0x1AE660u: goto label_1ae660;
            case 0x1AE664u: goto label_1ae664;
            case 0x1AE668u: goto label_1ae668;
            case 0x1AE66Cu: goto label_1ae66c;
            case 0x1AE670u: goto label_1ae670;
            case 0x1AE674u: goto label_1ae674;
            case 0x1AE678u: goto label_1ae678;
            case 0x1AE67Cu: goto label_1ae67c;
            case 0x1AE680u: goto label_1ae680;
            case 0x1AE684u: goto label_1ae684;
            case 0x1AE688u: goto label_1ae688;
            case 0x1AE68Cu: goto label_1ae68c;
            case 0x1AE690u: goto label_1ae690;
            case 0x1AE694u: goto label_1ae694;
            case 0x1AE698u: goto label_1ae698;
            case 0x1AE69Cu: goto label_1ae69c;
            case 0x1AE6A0u: goto label_1ae6a0;
            case 0x1AE6A4u: goto label_1ae6a4;
            case 0x1AE6A8u: goto label_1ae6a8;
            case 0x1AE6ACu: goto label_1ae6ac;
            case 0x1AE6B0u: goto label_1ae6b0;
            case 0x1AE6B4u: goto label_1ae6b4;
            case 0x1AE6B8u: goto label_1ae6b8;
            case 0x1AE6BCu: goto label_1ae6bc;
            case 0x1AE6C0u: goto label_1ae6c0;
            case 0x1AE6C4u: goto label_1ae6c4;
            case 0x1AE6C8u: goto label_1ae6c8;
            case 0x1AE6CCu: goto label_1ae6cc;
            case 0x1AE6D0u: goto label_1ae6d0;
            case 0x1AE6D4u: goto label_1ae6d4;
            case 0x1AE6D8u: goto label_1ae6d8;
            case 0x1AE6DCu: goto label_1ae6dc;
            case 0x1AE6E0u: goto label_1ae6e0;
            case 0x1AE6E4u: goto label_1ae6e4;
            case 0x1AE6E8u: goto label_1ae6e8;
            case 0x1AE6ECu: goto label_1ae6ec;
            case 0x1AE6F0u: goto label_1ae6f0;
            case 0x1AE6F4u: goto label_1ae6f4;
            case 0x1AE6F8u: goto label_1ae6f8;
            case 0x1AE6FCu: goto label_1ae6fc;
            case 0x1AE700u: goto label_1ae700;
            case 0x1AE704u: goto label_1ae704;
            case 0x1AE708u: goto label_1ae708;
            case 0x1AE70Cu: goto label_1ae70c;
            case 0x1AE710u: goto label_1ae710;
            case 0x1AE714u: goto label_1ae714;
            case 0x1AE718u: goto label_1ae718;
            case 0x1AE71Cu: goto label_1ae71c;
            case 0x1AE720u: goto label_1ae720;
            case 0x1AE724u: goto label_1ae724;
            case 0x1AE728u: goto label_1ae728;
            case 0x1AE72Cu: goto label_1ae72c;
            case 0x1AE730u: goto label_1ae730;
            case 0x1AE734u: goto label_1ae734;
            case 0x1AE738u: goto label_1ae738;
            case 0x1AE73Cu: goto label_1ae73c;
            case 0x1AE740u: goto label_1ae740;
            case 0x1AE744u: goto label_1ae744;
            case 0x1AE748u: goto label_1ae748;
            case 0x1AE74Cu: goto label_1ae74c;
            case 0x1AE750u: goto label_1ae750;
            case 0x1AE754u: goto label_1ae754;
            case 0x1AE758u: goto label_1ae758;
            case 0x1AE75Cu: goto label_1ae75c;
            case 0x1AE760u: goto label_1ae760;
            case 0x1AE764u: goto label_1ae764;
            case 0x1AE768u: goto label_1ae768;
            case 0x1AE76Cu: goto label_1ae76c;
            case 0x1AE770u: goto label_1ae770;
            case 0x1AE774u: goto label_1ae774;
            case 0x1AE778u: goto label_1ae778;
            case 0x1AE77Cu: goto label_1ae77c;
            case 0x1AE780u: goto label_1ae780;
            case 0x1AE784u: goto label_1ae784;
            case 0x1AE788u: goto label_1ae788;
            case 0x1AE78Cu: goto label_1ae78c;
            case 0x1AE790u: goto label_1ae790;
            case 0x1AE794u: goto label_1ae794;
            case 0x1AE798u: goto label_1ae798;
            case 0x1AE79Cu: goto label_1ae79c;
            case 0x1AE7A0u: goto label_1ae7a0;
            case 0x1AE7A4u: goto label_1ae7a4;
            case 0x1AE7A8u: goto label_1ae7a8;
            case 0x1AE7ACu: goto label_1ae7ac;
            case 0x1AE7B0u: goto label_1ae7b0;
            case 0x1AE7B4u: goto label_1ae7b4;
            case 0x1AE7B8u: goto label_1ae7b8;
            case 0x1AE7BCu: goto label_1ae7bc;
            case 0x1AE7C0u: goto label_1ae7c0;
            case 0x1AE7C4u: goto label_1ae7c4;
            case 0x1AE7C8u: goto label_1ae7c8;
            case 0x1AE7CCu: goto label_1ae7cc;
            case 0x1AE7D0u: goto label_1ae7d0;
            case 0x1AE7D4u: goto label_1ae7d4;
            case 0x1AE7D8u: goto label_1ae7d8;
            case 0x1AE7DCu: goto label_1ae7dc;
            case 0x1AE7E0u: goto label_1ae7e0;
            case 0x1AE7E4u: goto label_1ae7e4;
            case 0x1AE7E8u: goto label_1ae7e8;
            case 0x1AE7ECu: goto label_1ae7ec;
            case 0x1AE7F0u: goto label_1ae7f0;
            case 0x1AE7F4u: goto label_1ae7f4;
            case 0x1AE7F8u: goto label_1ae7f8;
            case 0x1AE7FCu: goto label_1ae7fc;
            case 0x1AE800u: goto label_1ae800;
            case 0x1AE804u: goto label_1ae804;
            case 0x1AE808u: goto label_1ae808;
            case 0x1AE80Cu: goto label_1ae80c;
            case 0x1AE810u: goto label_1ae810;
            case 0x1AE814u: goto label_1ae814;
            case 0x1AE818u: goto label_1ae818;
            case 0x1AE81Cu: goto label_1ae81c;
            case 0x1AE820u: goto label_1ae820;
            case 0x1AE824u: goto label_1ae824;
            case 0x1AE828u: goto label_1ae828;
            case 0x1AE82Cu: goto label_1ae82c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7D4u; }
            if (ctx->pc != 0x1AE7D4u) { return; }
        }
    }
    ctx->pc = 0x1AE7D4u;
label_1ae7d4:
    // 0x1ae7d4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ae7d8:
    if (ctx->pc == 0x1AE7D8u) {
        ctx->pc = 0x1AE7DCu;
        goto label_1ae7dc;
    }
    ctx->pc = 0x1AE7D4u;
    {
        const bool branch_taken_0x1ae7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7d4) {
            ctx->pc = 0x1AE820u;
            goto label_1ae820;
        }
    }
    ctx->pc = 0x1AE7DCu;
label_1ae7dc:
    // 0x1ae7dc: 0x0  nop
    ctx->pc = 0x1ae7dcu;
    // NOP
label_1ae7e0:
    // 0x1ae7e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ae7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ae7e4:
    // 0x1ae7e4: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_1ae7e8:
    if (ctx->pc == 0x1AE7E8u) {
        ctx->pc = 0x1AE7ECu;
        goto label_1ae7ec;
    }
    ctx->pc = 0x1AE7E4u;
    {
        const bool branch_taken_0x1ae7e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1ae7e4) {
            ctx->pc = 0x1AE800u;
            goto label_1ae800;
        }
    }
    ctx->pc = 0x1AE7ECu;
label_1ae7ec:
    // 0x1ae7ec: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1ae7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1ae7f0:
    // 0x1ae7f0: 0x40f809  jalr        $v0
label_1ae7f4:
    if (ctx->pc == 0x1AE7F4u) {
        ctx->pc = 0x1AE7F4u;
            // 0x1ae7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7F8u;
        goto label_1ae7f8;
    }
    ctx->pc = 0x1AE7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AE7F8u);
        ctx->pc = 0x1AE7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE7F0u;
            // 0x1ae7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE460u: goto label_1ae460;
            case 0x1AE464u: goto label_1ae464;
            case 0x1AE468u: goto label_1ae468;
            case 0x1AE46Cu: goto label_1ae46c;
            case 0x1AE470u: goto label_1ae470;
            case 0x1AE474u: goto label_1ae474;
            case 0x1AE478u: goto label_1ae478;
            case 0x1AE47Cu: goto label_1ae47c;
            case 0x1AE480u: goto label_1ae480;
            case 0x1AE484u: goto label_1ae484;
            case 0x1AE488u: goto label_1ae488;
            case 0x1AE48Cu: goto label_1ae48c;
            case 0x1AE490u: goto label_1ae490;
            case 0x1AE494u: goto label_1ae494;
            case 0x1AE498u: goto label_1ae498;
            case 0x1AE49Cu: goto label_1ae49c;
            case 0x1AE4A0u: goto label_1ae4a0;
            case 0x1AE4A4u: goto label_1ae4a4;
            case 0x1AE4A8u: goto label_1ae4a8;
            case 0x1AE4ACu: goto label_1ae4ac;
            case 0x1AE4B0u: goto label_1ae4b0;
            case 0x1AE4B4u: goto label_1ae4b4;
            case 0x1AE4B8u: goto label_1ae4b8;
            case 0x1AE4BCu: goto label_1ae4bc;
            case 0x1AE4C0u: goto label_1ae4c0;
            case 0x1AE4C4u: goto label_1ae4c4;
            case 0x1AE4C8u: goto label_1ae4c8;
            case 0x1AE4CCu: goto label_1ae4cc;
            case 0x1AE4D0u: goto label_1ae4d0;
            case 0x1AE4D4u: goto label_1ae4d4;
            case 0x1AE4D8u: goto label_1ae4d8;
            case 0x1AE4DCu: goto label_1ae4dc;
            case 0x1AE4E0u: goto label_1ae4e0;
            case 0x1AE4E4u: goto label_1ae4e4;
            case 0x1AE4E8u: goto label_1ae4e8;
            case 0x1AE4ECu: goto label_1ae4ec;
            case 0x1AE4F0u: goto label_1ae4f0;
            case 0x1AE4F4u: goto label_1ae4f4;
            case 0x1AE4F8u: goto label_1ae4f8;
            case 0x1AE4FCu: goto label_1ae4fc;
            case 0x1AE500u: goto label_1ae500;
            case 0x1AE504u: goto label_1ae504;
            case 0x1AE508u: goto label_1ae508;
            case 0x1AE50Cu: goto label_1ae50c;
            case 0x1AE510u: goto label_1ae510;
            case 0x1AE514u: goto label_1ae514;
            case 0x1AE518u: goto label_1ae518;
            case 0x1AE51Cu: goto label_1ae51c;
            case 0x1AE520u: goto label_1ae520;
            case 0x1AE524u: goto label_1ae524;
            case 0x1AE528u: goto label_1ae528;
            case 0x1AE52Cu: goto label_1ae52c;
            case 0x1AE530u: goto label_1ae530;
            case 0x1AE534u: goto label_1ae534;
            case 0x1AE538u: goto label_1ae538;
            case 0x1AE53Cu: goto label_1ae53c;
            case 0x1AE540u: goto label_1ae540;
            case 0x1AE544u: goto label_1ae544;
            case 0x1AE548u: goto label_1ae548;
            case 0x1AE54Cu: goto label_1ae54c;
            case 0x1AE550u: goto label_1ae550;
            case 0x1AE554u: goto label_1ae554;
            case 0x1AE558u: goto label_1ae558;
            case 0x1AE55Cu: goto label_1ae55c;
            case 0x1AE560u: goto label_1ae560;
            case 0x1AE564u: goto label_1ae564;
            case 0x1AE568u: goto label_1ae568;
            case 0x1AE56Cu: goto label_1ae56c;
            case 0x1AE570u: goto label_1ae570;
            case 0x1AE574u: goto label_1ae574;
            case 0x1AE578u: goto label_1ae578;
            case 0x1AE57Cu: goto label_1ae57c;
            case 0x1AE580u: goto label_1ae580;
            case 0x1AE584u: goto label_1ae584;
            case 0x1AE588u: goto label_1ae588;
            case 0x1AE58Cu: goto label_1ae58c;
            case 0x1AE590u: goto label_1ae590;
            case 0x1AE594u: goto label_1ae594;
            case 0x1AE598u: goto label_1ae598;
            case 0x1AE59Cu: goto label_1ae59c;
            case 0x1AE5A0u: goto label_1ae5a0;
            case 0x1AE5A4u: goto label_1ae5a4;
            case 0x1AE5A8u: goto label_1ae5a8;
            case 0x1AE5ACu: goto label_1ae5ac;
            case 0x1AE5B0u: goto label_1ae5b0;
            case 0x1AE5B4u: goto label_1ae5b4;
            case 0x1AE5B8u: goto label_1ae5b8;
            case 0x1AE5BCu: goto label_1ae5bc;
            case 0x1AE5C0u: goto label_1ae5c0;
            case 0x1AE5C4u: goto label_1ae5c4;
            case 0x1AE5C8u: goto label_1ae5c8;
            case 0x1AE5CCu: goto label_1ae5cc;
            case 0x1AE5D0u: goto label_1ae5d0;
            case 0x1AE5D4u: goto label_1ae5d4;
            case 0x1AE5D8u: goto label_1ae5d8;
            case 0x1AE5DCu: goto label_1ae5dc;
            case 0x1AE5E0u: goto label_1ae5e0;
            case 0x1AE5E4u: goto label_1ae5e4;
            case 0x1AE5E8u: goto label_1ae5e8;
            case 0x1AE5ECu: goto label_1ae5ec;
            case 0x1AE5F0u: goto label_1ae5f0;
            case 0x1AE5F4u: goto label_1ae5f4;
            case 0x1AE5F8u: goto label_1ae5f8;
            case 0x1AE5FCu: goto label_1ae5fc;
            case 0x1AE600u: goto label_1ae600;
            case 0x1AE604u: goto label_1ae604;
            case 0x1AE608u: goto label_1ae608;
            case 0x1AE60Cu: goto label_1ae60c;
            case 0x1AE610u: goto label_1ae610;
            case 0x1AE614u: goto label_1ae614;
            case 0x1AE618u: goto label_1ae618;
            case 0x1AE61Cu: goto label_1ae61c;
            case 0x1AE620u: goto label_1ae620;
            case 0x1AE624u: goto label_1ae624;
            case 0x1AE628u: goto label_1ae628;
            case 0x1AE62Cu: goto label_1ae62c;
            case 0x1AE630u: goto label_1ae630;
            case 0x1AE634u: goto label_1ae634;
            case 0x1AE638u: goto label_1ae638;
            case 0x1AE63Cu: goto label_1ae63c;
            case 0x1AE640u: goto label_1ae640;
            case 0x1AE644u: goto label_1ae644;
            case 0x1AE648u: goto label_1ae648;
            case 0x1AE64Cu: goto label_1ae64c;
            case 0x1AE650u: goto label_1ae650;
            case 0x1AE654u: goto label_1ae654;
            case 0x1AE658u: goto label_1ae658;
            case 0x1AE65Cu: goto label_1ae65c;
            case 0x1AE660u: goto label_1ae660;
            case 0x1AE664u: goto label_1ae664;
            case 0x1AE668u: goto label_1ae668;
            case 0x1AE66Cu: goto label_1ae66c;
            case 0x1AE670u: goto label_1ae670;
            case 0x1AE674u: goto label_1ae674;
            case 0x1AE678u: goto label_1ae678;
            case 0x1AE67Cu: goto label_1ae67c;
            case 0x1AE680u: goto label_1ae680;
            case 0x1AE684u: goto label_1ae684;
            case 0x1AE688u: goto label_1ae688;
            case 0x1AE68Cu: goto label_1ae68c;
            case 0x1AE690u: goto label_1ae690;
            case 0x1AE694u: goto label_1ae694;
            case 0x1AE698u: goto label_1ae698;
            case 0x1AE69Cu: goto label_1ae69c;
            case 0x1AE6A0u: goto label_1ae6a0;
            case 0x1AE6A4u: goto label_1ae6a4;
            case 0x1AE6A8u: goto label_1ae6a8;
            case 0x1AE6ACu: goto label_1ae6ac;
            case 0x1AE6B0u: goto label_1ae6b0;
            case 0x1AE6B4u: goto label_1ae6b4;
            case 0x1AE6B8u: goto label_1ae6b8;
            case 0x1AE6BCu: goto label_1ae6bc;
            case 0x1AE6C0u: goto label_1ae6c0;
            case 0x1AE6C4u: goto label_1ae6c4;
            case 0x1AE6C8u: goto label_1ae6c8;
            case 0x1AE6CCu: goto label_1ae6cc;
            case 0x1AE6D0u: goto label_1ae6d0;
            case 0x1AE6D4u: goto label_1ae6d4;
            case 0x1AE6D8u: goto label_1ae6d8;
            case 0x1AE6DCu: goto label_1ae6dc;
            case 0x1AE6E0u: goto label_1ae6e0;
            case 0x1AE6E4u: goto label_1ae6e4;
            case 0x1AE6E8u: goto label_1ae6e8;
            case 0x1AE6ECu: goto label_1ae6ec;
            case 0x1AE6F0u: goto label_1ae6f0;
            case 0x1AE6F4u: goto label_1ae6f4;
            case 0x1AE6F8u: goto label_1ae6f8;
            case 0x1AE6FCu: goto label_1ae6fc;
            case 0x1AE700u: goto label_1ae700;
            case 0x1AE704u: goto label_1ae704;
            case 0x1AE708u: goto label_1ae708;
            case 0x1AE70Cu: goto label_1ae70c;
            case 0x1AE710u: goto label_1ae710;
            case 0x1AE714u: goto label_1ae714;
            case 0x1AE718u: goto label_1ae718;
            case 0x1AE71Cu: goto label_1ae71c;
            case 0x1AE720u: goto label_1ae720;
            case 0x1AE724u: goto label_1ae724;
            case 0x1AE728u: goto label_1ae728;
            case 0x1AE72Cu: goto label_1ae72c;
            case 0x1AE730u: goto label_1ae730;
            case 0x1AE734u: goto label_1ae734;
            case 0x1AE738u: goto label_1ae738;
            case 0x1AE73Cu: goto label_1ae73c;
            case 0x1AE740u: goto label_1ae740;
            case 0x1AE744u: goto label_1ae744;
            case 0x1AE748u: goto label_1ae748;
            case 0x1AE74Cu: goto label_1ae74c;
            case 0x1AE750u: goto label_1ae750;
            case 0x1AE754u: goto label_1ae754;
            case 0x1AE758u: goto label_1ae758;
            case 0x1AE75Cu: goto label_1ae75c;
            case 0x1AE760u: goto label_1ae760;
            case 0x1AE764u: goto label_1ae764;
            case 0x1AE768u: goto label_1ae768;
            case 0x1AE76Cu: goto label_1ae76c;
            case 0x1AE770u: goto label_1ae770;
            case 0x1AE774u: goto label_1ae774;
            case 0x1AE778u: goto label_1ae778;
            case 0x1AE77Cu: goto label_1ae77c;
            case 0x1AE780u: goto label_1ae780;
            case 0x1AE784u: goto label_1ae784;
            case 0x1AE788u: goto label_1ae788;
            case 0x1AE78Cu: goto label_1ae78c;
            case 0x1AE790u: goto label_1ae790;
            case 0x1AE794u: goto label_1ae794;
            case 0x1AE798u: goto label_1ae798;
            case 0x1AE79Cu: goto label_1ae79c;
            case 0x1AE7A0u: goto label_1ae7a0;
            case 0x1AE7A4u: goto label_1ae7a4;
            case 0x1AE7A8u: goto label_1ae7a8;
            case 0x1AE7ACu: goto label_1ae7ac;
            case 0x1AE7B0u: goto label_1ae7b0;
            case 0x1AE7B4u: goto label_1ae7b4;
            case 0x1AE7B8u: goto label_1ae7b8;
            case 0x1AE7BCu: goto label_1ae7bc;
            case 0x1AE7C0u: goto label_1ae7c0;
            case 0x1AE7C4u: goto label_1ae7c4;
            case 0x1AE7C8u: goto label_1ae7c8;
            case 0x1AE7CCu: goto label_1ae7cc;
            case 0x1AE7D0u: goto label_1ae7d0;
            case 0x1AE7D4u: goto label_1ae7d4;
            case 0x1AE7D8u: goto label_1ae7d8;
            case 0x1AE7DCu: goto label_1ae7dc;
            case 0x1AE7E0u: goto label_1ae7e0;
            case 0x1AE7E4u: goto label_1ae7e4;
            case 0x1AE7E8u: goto label_1ae7e8;
            case 0x1AE7ECu: goto label_1ae7ec;
            case 0x1AE7F0u: goto label_1ae7f0;
            case 0x1AE7F4u: goto label_1ae7f4;
            case 0x1AE7F8u: goto label_1ae7f8;
            case 0x1AE7FCu: goto label_1ae7fc;
            case 0x1AE800u: goto label_1ae800;
            case 0x1AE804u: goto label_1ae804;
            case 0x1AE808u: goto label_1ae808;
            case 0x1AE80Cu: goto label_1ae80c;
            case 0x1AE810u: goto label_1ae810;
            case 0x1AE814u: goto label_1ae814;
            case 0x1AE818u: goto label_1ae818;
            case 0x1AE81Cu: goto label_1ae81c;
            case 0x1AE820u: goto label_1ae820;
            case 0x1AE824u: goto label_1ae824;
            case 0x1AE828u: goto label_1ae828;
            case 0x1AE82Cu: goto label_1ae82c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AE7F8u; }
            if (ctx->pc != 0x1AE7F8u) { return; }
        }
    }
    ctx->pc = 0x1AE7F8u;
label_1ae7f8:
    // 0x1ae7f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_1ae7fc:
    if (ctx->pc == 0x1AE7FCu) {
        ctx->pc = 0x1AE800u;
        goto label_1ae800;
    }
    ctx->pc = 0x1AE7F8u;
    {
        const bool branch_taken_0x1ae7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae7f8) {
            ctx->pc = 0x1AE820u;
            goto label_1ae820;
        }
    }
    ctx->pc = 0x1AE800u;
label_1ae800:
    // 0x1ae800: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1ae800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1ae804:
    // 0x1ae804: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ae804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ae808:
    // 0x1ae808: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1ae808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1ae80c:
    // 0x1ae80c: 0x24c6e260  addiu       $a2, $a2, -0x1DA0
    ctx->pc = 0x1ae80cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959712));
label_1ae810:
    // 0x1ae810: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1ae810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ae814:
    // 0x1ae814: 0xc053ca4  jal         func_14F290
label_1ae818:
    if (ctx->pc == 0x1AE818u) {
        ctx->pc = 0x1AE818u;
            // 0x1ae818: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AE81Cu;
        goto label_1ae81c;
    }
    ctx->pc = 0x1AE814u;
    SET_GPR_U32(ctx, 31, 0x1AE81Cu);
    ctx->pc = 0x1AE818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE814u;
            // 0x1ae818: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE81Cu; }
        if (ctx->pc != 0x1AE81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AE81Cu; }
        if (ctx->pc != 0x1AE81Cu) { return; }
    }
    ctx->pc = 0x1AE81Cu;
label_1ae81c:
    // 0x1ae81c: 0x0  nop
    ctx->pc = 0x1ae81cu;
    // NOP
label_1ae820:
    // 0x1ae820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ae824:
    // 0x1ae824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ae824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae828:
    // 0x1ae828: 0x3e00008  jr          $ra
label_1ae82c:
    if (ctx->pc == 0x1AE82Cu) {
        ctx->pc = 0x1AE82Cu;
            // 0x1ae82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AE830u;
        goto label_fallthrough_0x1ae828;
    }
    ctx->pc = 0x1AE828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE828u;
            // 0x1ae82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AE460u: goto label_1ae460;
            case 0x1AE464u: goto label_1ae464;
            case 0x1AE468u: goto label_1ae468;
            case 0x1AE46Cu: goto label_1ae46c;
            case 0x1AE470u: goto label_1ae470;
            case 0x1AE474u: goto label_1ae474;
            case 0x1AE478u: goto label_1ae478;
            case 0x1AE47Cu: goto label_1ae47c;
            case 0x1AE480u: goto label_1ae480;
            case 0x1AE484u: goto label_1ae484;
            case 0x1AE488u: goto label_1ae488;
            case 0x1AE48Cu: goto label_1ae48c;
            case 0x1AE490u: goto label_1ae490;
            case 0x1AE494u: goto label_1ae494;
            case 0x1AE498u: goto label_1ae498;
            case 0x1AE49Cu: goto label_1ae49c;
            case 0x1AE4A0u: goto label_1ae4a0;
            case 0x1AE4A4u: goto label_1ae4a4;
            case 0x1AE4A8u: goto label_1ae4a8;
            case 0x1AE4ACu: goto label_1ae4ac;
            case 0x1AE4B0u: goto label_1ae4b0;
            case 0x1AE4B4u: goto label_1ae4b4;
            case 0x1AE4B8u: goto label_1ae4b8;
            case 0x1AE4BCu: goto label_1ae4bc;
            case 0x1AE4C0u: goto label_1ae4c0;
            case 0x1AE4C4u: goto label_1ae4c4;
            case 0x1AE4C8u: goto label_1ae4c8;
            case 0x1AE4CCu: goto label_1ae4cc;
            case 0x1AE4D0u: goto label_1ae4d0;
            case 0x1AE4D4u: goto label_1ae4d4;
            case 0x1AE4D8u: goto label_1ae4d8;
            case 0x1AE4DCu: goto label_1ae4dc;
            case 0x1AE4E0u: goto label_1ae4e0;
            case 0x1AE4E4u: goto label_1ae4e4;
            case 0x1AE4E8u: goto label_1ae4e8;
            case 0x1AE4ECu: goto label_1ae4ec;
            case 0x1AE4F0u: goto label_1ae4f0;
            case 0x1AE4F4u: goto label_1ae4f4;
            case 0x1AE4F8u: goto label_1ae4f8;
            case 0x1AE4FCu: goto label_1ae4fc;
            case 0x1AE500u: goto label_1ae500;
            case 0x1AE504u: goto label_1ae504;
            case 0x1AE508u: goto label_1ae508;
            case 0x1AE50Cu: goto label_1ae50c;
            case 0x1AE510u: goto label_1ae510;
            case 0x1AE514u: goto label_1ae514;
            case 0x1AE518u: goto label_1ae518;
            case 0x1AE51Cu: goto label_1ae51c;
            case 0x1AE520u: goto label_1ae520;
            case 0x1AE524u: goto label_1ae524;
            case 0x1AE528u: goto label_1ae528;
            case 0x1AE52Cu: goto label_1ae52c;
            case 0x1AE530u: goto label_1ae530;
            case 0x1AE534u: goto label_1ae534;
            case 0x1AE538u: goto label_1ae538;
            case 0x1AE53Cu: goto label_1ae53c;
            case 0x1AE540u: goto label_1ae540;
            case 0x1AE544u: goto label_1ae544;
            case 0x1AE548u: goto label_1ae548;
            case 0x1AE54Cu: goto label_1ae54c;
            case 0x1AE550u: goto label_1ae550;
            case 0x1AE554u: goto label_1ae554;
            case 0x1AE558u: goto label_1ae558;
            case 0x1AE55Cu: goto label_1ae55c;
            case 0x1AE560u: goto label_1ae560;
            case 0x1AE564u: goto label_1ae564;
            case 0x1AE568u: goto label_1ae568;
            case 0x1AE56Cu: goto label_1ae56c;
            case 0x1AE570u: goto label_1ae570;
            case 0x1AE574u: goto label_1ae574;
            case 0x1AE578u: goto label_1ae578;
            case 0x1AE57Cu: goto label_1ae57c;
            case 0x1AE580u: goto label_1ae580;
            case 0x1AE584u: goto label_1ae584;
            case 0x1AE588u: goto label_1ae588;
            case 0x1AE58Cu: goto label_1ae58c;
            case 0x1AE590u: goto label_1ae590;
            case 0x1AE594u: goto label_1ae594;
            case 0x1AE598u: goto label_1ae598;
            case 0x1AE59Cu: goto label_1ae59c;
            case 0x1AE5A0u: goto label_1ae5a0;
            case 0x1AE5A4u: goto label_1ae5a4;
            case 0x1AE5A8u: goto label_1ae5a8;
            case 0x1AE5ACu: goto label_1ae5ac;
            case 0x1AE5B0u: goto label_1ae5b0;
            case 0x1AE5B4u: goto label_1ae5b4;
            case 0x1AE5B8u: goto label_1ae5b8;
            case 0x1AE5BCu: goto label_1ae5bc;
            case 0x1AE5C0u: goto label_1ae5c0;
            case 0x1AE5C4u: goto label_1ae5c4;
            case 0x1AE5C8u: goto label_1ae5c8;
            case 0x1AE5CCu: goto label_1ae5cc;
            case 0x1AE5D0u: goto label_1ae5d0;
            case 0x1AE5D4u: goto label_1ae5d4;
            case 0x1AE5D8u: goto label_1ae5d8;
            case 0x1AE5DCu: goto label_1ae5dc;
            case 0x1AE5E0u: goto label_1ae5e0;
            case 0x1AE5E4u: goto label_1ae5e4;
            case 0x1AE5E8u: goto label_1ae5e8;
            case 0x1AE5ECu: goto label_1ae5ec;
            case 0x1AE5F0u: goto label_1ae5f0;
            case 0x1AE5F4u: goto label_1ae5f4;
            case 0x1AE5F8u: goto label_1ae5f8;
            case 0x1AE5FCu: goto label_1ae5fc;
            case 0x1AE600u: goto label_1ae600;
            case 0x1AE604u: goto label_1ae604;
            case 0x1AE608u: goto label_1ae608;
            case 0x1AE60Cu: goto label_1ae60c;
            case 0x1AE610u: goto label_1ae610;
            case 0x1AE614u: goto label_1ae614;
            case 0x1AE618u: goto label_1ae618;
            case 0x1AE61Cu: goto label_1ae61c;
            case 0x1AE620u: goto label_1ae620;
            case 0x1AE624u: goto label_1ae624;
            case 0x1AE628u: goto label_1ae628;
            case 0x1AE62Cu: goto label_1ae62c;
            case 0x1AE630u: goto label_1ae630;
            case 0x1AE634u: goto label_1ae634;
            case 0x1AE638u: goto label_1ae638;
            case 0x1AE63Cu: goto label_1ae63c;
            case 0x1AE640u: goto label_1ae640;
            case 0x1AE644u: goto label_1ae644;
            case 0x1AE648u: goto label_1ae648;
            case 0x1AE64Cu: goto label_1ae64c;
            case 0x1AE650u: goto label_1ae650;
            case 0x1AE654u: goto label_1ae654;
            case 0x1AE658u: goto label_1ae658;
            case 0x1AE65Cu: goto label_1ae65c;
            case 0x1AE660u: goto label_1ae660;
            case 0x1AE664u: goto label_1ae664;
            case 0x1AE668u: goto label_1ae668;
            case 0x1AE66Cu: goto label_1ae66c;
            case 0x1AE670u: goto label_1ae670;
            case 0x1AE674u: goto label_1ae674;
            case 0x1AE678u: goto label_1ae678;
            case 0x1AE67Cu: goto label_1ae67c;
            case 0x1AE680u: goto label_1ae680;
            case 0x1AE684u: goto label_1ae684;
            case 0x1AE688u: goto label_1ae688;
            case 0x1AE68Cu: goto label_1ae68c;
            case 0x1AE690u: goto label_1ae690;
            case 0x1AE694u: goto label_1ae694;
            case 0x1AE698u: goto label_1ae698;
            case 0x1AE69Cu: goto label_1ae69c;
            case 0x1AE6A0u: goto label_1ae6a0;
            case 0x1AE6A4u: goto label_1ae6a4;
            case 0x1AE6A8u: goto label_1ae6a8;
            case 0x1AE6ACu: goto label_1ae6ac;
            case 0x1AE6B0u: goto label_1ae6b0;
            case 0x1AE6B4u: goto label_1ae6b4;
            case 0x1AE6B8u: goto label_1ae6b8;
            case 0x1AE6BCu: goto label_1ae6bc;
            case 0x1AE6C0u: goto label_1ae6c0;
            case 0x1AE6C4u: goto label_1ae6c4;
            case 0x1AE6C8u: goto label_1ae6c8;
            case 0x1AE6CCu: goto label_1ae6cc;
            case 0x1AE6D0u: goto label_1ae6d0;
            case 0x1AE6D4u: goto label_1ae6d4;
            case 0x1AE6D8u: goto label_1ae6d8;
            case 0x1AE6DCu: goto label_1ae6dc;
            case 0x1AE6E0u: goto label_1ae6e0;
            case 0x1AE6E4u: goto label_1ae6e4;
            case 0x1AE6E8u: goto label_1ae6e8;
            case 0x1AE6ECu: goto label_1ae6ec;
            case 0x1AE6F0u: goto label_1ae6f0;
            case 0x1AE6F4u: goto label_1ae6f4;
            case 0x1AE6F8u: goto label_1ae6f8;
            case 0x1AE6FCu: goto label_1ae6fc;
            case 0x1AE700u: goto label_1ae700;
            case 0x1AE704u: goto label_1ae704;
            case 0x1AE708u: goto label_1ae708;
            case 0x1AE70Cu: goto label_1ae70c;
            case 0x1AE710u: goto label_1ae710;
            case 0x1AE714u: goto label_1ae714;
            case 0x1AE718u: goto label_1ae718;
            case 0x1AE71Cu: goto label_1ae71c;
            case 0x1AE720u: goto label_1ae720;
            case 0x1AE724u: goto label_1ae724;
            case 0x1AE728u: goto label_1ae728;
            case 0x1AE72Cu: goto label_1ae72c;
            case 0x1AE730u: goto label_1ae730;
            case 0x1AE734u: goto label_1ae734;
            case 0x1AE738u: goto label_1ae738;
            case 0x1AE73Cu: goto label_1ae73c;
            case 0x1AE740u: goto label_1ae740;
            case 0x1AE744u: goto label_1ae744;
            case 0x1AE748u: goto label_1ae748;
            case 0x1AE74Cu: goto label_1ae74c;
            case 0x1AE750u: goto label_1ae750;
            case 0x1AE754u: goto label_1ae754;
            case 0x1AE758u: goto label_1ae758;
            case 0x1AE75Cu: goto label_1ae75c;
            case 0x1AE760u: goto label_1ae760;
            case 0x1AE764u: goto label_1ae764;
            case 0x1AE768u: goto label_1ae768;
            case 0x1AE76Cu: goto label_1ae76c;
            case 0x1AE770u: goto label_1ae770;
            case 0x1AE774u: goto label_1ae774;
            case 0x1AE778u: goto label_1ae778;
            case 0x1AE77Cu: goto label_1ae77c;
            case 0x1AE780u: goto label_1ae780;
            case 0x1AE784u: goto label_1ae784;
            case 0x1AE788u: goto label_1ae788;
            case 0x1AE78Cu: goto label_1ae78c;
            case 0x1AE790u: goto label_1ae790;
            case 0x1AE794u: goto label_1ae794;
            case 0x1AE798u: goto label_1ae798;
            case 0x1AE79Cu: goto label_1ae79c;
            case 0x1AE7A0u: goto label_1ae7a0;
            case 0x1AE7A4u: goto label_1ae7a4;
            case 0x1AE7A8u: goto label_1ae7a8;
            case 0x1AE7ACu: goto label_1ae7ac;
            case 0x1AE7B0u: goto label_1ae7b0;
            case 0x1AE7B4u: goto label_1ae7b4;
            case 0x1AE7B8u: goto label_1ae7b8;
            case 0x1AE7BCu: goto label_1ae7bc;
            case 0x1AE7C0u: goto label_1ae7c0;
            case 0x1AE7C4u: goto label_1ae7c4;
            case 0x1AE7C8u: goto label_1ae7c8;
            case 0x1AE7CCu: goto label_1ae7cc;
            case 0x1AE7D0u: goto label_1ae7d0;
            case 0x1AE7D4u: goto label_1ae7d4;
            case 0x1AE7D8u: goto label_1ae7d8;
            case 0x1AE7DCu: goto label_1ae7dc;
            case 0x1AE7E0u: goto label_1ae7e0;
            case 0x1AE7E4u: goto label_1ae7e4;
            case 0x1AE7E8u: goto label_1ae7e8;
            case 0x1AE7ECu: goto label_1ae7ec;
            case 0x1AE7F0u: goto label_1ae7f0;
            case 0x1AE7F4u: goto label_1ae7f4;
            case 0x1AE7F8u: goto label_1ae7f8;
            case 0x1AE7FCu: goto label_1ae7fc;
            case 0x1AE800u: goto label_1ae800;
            case 0x1AE804u: goto label_1ae804;
            case 0x1AE808u: goto label_1ae808;
            case 0x1AE80Cu: goto label_1ae80c;
            case 0x1AE810u: goto label_1ae810;
            case 0x1AE814u: goto label_1ae814;
            case 0x1AE818u: goto label_1ae818;
            case 0x1AE81Cu: goto label_1ae81c;
            case 0x1AE820u: goto label_1ae820;
            case 0x1AE824u: goto label_1ae824;
            case 0x1AE828u: goto label_1ae828;
            case 0x1AE82Cu: goto label_1ae82c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1ae828:
    ctx->pc = 0x1AE830u;
}
