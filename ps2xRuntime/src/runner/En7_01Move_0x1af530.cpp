#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En7_01Move
// Address: 0x1af530 - 0x1affc8
void En7_01Move_0x1af530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En7_01Move_0x1af530");
#endif

    ctx->pc = 0x1af530u;

label_1af530:
    // 0x1af530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1af530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1af534:
    // 0x1af534: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1af534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1af538:
    // 0x1af538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1af538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1af53c:
    // 0x1af53c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af53cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af540:
    // 0x1af540: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1af540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1af544:
    // 0x1af544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af548:
    // 0x1af548: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1af548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af54c:
    // 0x1af54c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1af54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af550:
    // 0x1af550: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1af554:
    // 0x1af554: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1af554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af558:
    // 0x1af558: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1af55c:
    // 0x1af55c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1af55cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1af560:
    // 0x1af560: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af564:
    // 0x1af564: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1af564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af568:
    // 0x1af568: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1af568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af56c:
    // 0x1af56c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af56cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1af570:
    // 0x1af570: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1af570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1af574:
    // 0x1af574: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af578:
    // 0x1af578: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1af578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af57c:
    // 0x1af57c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1af57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af580:
    // 0x1af580: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af580u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1af584:
    // 0x1af584: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1af584u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1af588:
    // 0x1af588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af58c:
    // 0x1af58c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1af58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af590:
    // 0x1af590: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1af590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af594:
    // 0x1af594: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af594u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1af598:
    // 0x1af598: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1af598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1af59c:
    // 0x1af59c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af5a0:
    // 0x1af5a0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1af5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af5a4:
    // 0x1af5a4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1af5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af5a8:
    // 0x1af5a8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1af5a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1af5ac:
    // 0x1af5ac: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1af5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1af5b0:
    // 0x1af5b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1af5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1af5b4:
    // 0x1af5b4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1af5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af5b8:
    // 0x1af5b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1af5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af5bc:
    // 0x1af5bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1af5c0:
    if (ctx->pc == 0x1AF5C0u) {
        ctx->pc = 0x1AF5C0u;
            // 0x1af5c0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1AF5C4u;
        goto label_1af5c4;
    }
    ctx->pc = 0x1AF5BCu;
    {
        const bool branch_taken_0x1af5bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5BCu;
            // 0x1af5c0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5bc) {
            ctx->pc = 0x1AF5E0u;
            goto label_1af5e0;
        }
    }
    ctx->pc = 0x1AF5C4u;
label_1af5c4:
    // 0x1af5c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af5c8:
    // 0x1af5c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af5c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af5cc:
    // 0x1af5cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af5ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af5d0:
    // 0x1af5d0: 0x0  nop
    ctx->pc = 0x1af5d0u;
    // NOP
label_1af5d4:
    // 0x1af5d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af5d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1af5d8:
    // 0x1af5d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1af5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1af5dc:
    // 0x1af5dc: 0x0  nop
    ctx->pc = 0x1af5dcu;
    // NOP
label_1af5e0:
    // 0x1af5e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af5e4:
    // 0x1af5e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1af5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1af5e8:
    // 0x1af5e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af5e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af5ec:
    // 0x1af5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af5f0:
    // 0x1af5f0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1af5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af5f4:
    // 0x1af5f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af5f8:
    // 0x1af5f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1af5fc:
    if (ctx->pc == 0x1AF5FCu) {
        ctx->pc = 0x1AF5FCu;
            // 0x1af5fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1AF600u;
        goto label_1af600;
    }
    ctx->pc = 0x1AF5F8u;
    {
        const bool branch_taken_0x1af5f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF5F8u;
            // 0x1af5fc: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af5f8) {
            ctx->pc = 0x1AF618u;
            goto label_1af618;
        }
    }
    ctx->pc = 0x1AF600u;
label_1af600:
    // 0x1af600: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af604:
    // 0x1af604: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af604u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af608:
    // 0x1af608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af60c:
    // 0x1af60c: 0x0  nop
    ctx->pc = 0x1af60cu;
    // NOP
label_1af610:
    // 0x1af610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af614:
    // 0x1af614: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1af614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af618:
    // 0x1af618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af61c:
    // 0x1af61c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1af61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1af620:
    // 0x1af620: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af620u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af624:
    // 0x1af624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af628:
    // 0x1af628: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1af628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af62c:
    // 0x1af62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1af62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af630:
    // 0x1af630: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1af634:
    if (ctx->pc == 0x1AF634u) {
        ctx->pc = 0x1AF634u;
            // 0x1af634: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AF638u;
        goto label_1af638;
    }
    ctx->pc = 0x1AF630u;
    {
        const bool branch_taken_0x1af630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF630u;
            // 0x1af634: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af630) {
            ctx->pc = 0x1AF650u;
            goto label_1af650;
        }
    }
    ctx->pc = 0x1AF638u;
label_1af638:
    // 0x1af638: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af63c:
    // 0x1af63c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af63cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af640:
    // 0x1af640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af644:
    // 0x1af644: 0x0  nop
    ctx->pc = 0x1af644u;
    // NOP
label_1af648:
    // 0x1af648: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1af64c:
    // 0x1af64c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1af64cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af650:
    // 0x1af650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af654:
    // 0x1af654: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1af654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1af658:
    // 0x1af658: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af658u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af65c:
    // 0x1af65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af660:
    // 0x1af660: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1af660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af664:
    // 0x1af664: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af668:
    // 0x1af668: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1af66c:
    if (ctx->pc == 0x1AF66Cu) {
        ctx->pc = 0x1AF66Cu;
            // 0x1af66c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1AF670u;
        goto label_1af670;
    }
    ctx->pc = 0x1AF668u;
    {
        const bool branch_taken_0x1af668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF668u;
            // 0x1af66c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af668) {
            ctx->pc = 0x1AF688u;
            goto label_1af688;
        }
    }
    ctx->pc = 0x1AF670u;
label_1af670:
    // 0x1af670: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af674:
    // 0x1af674: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af674u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af678:
    // 0x1af678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af67c:
    // 0x1af67c: 0x0  nop
    ctx->pc = 0x1af67cu;
    // NOP
label_1af680:
    // 0x1af680: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af680u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af684:
    // 0x1af684: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1af684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af688:
    // 0x1af688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af68c:
    // 0x1af68c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1af68cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1af690:
    // 0x1af690: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af694:
    // 0x1af694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af698:
    // 0x1af698: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1af698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af69c:
    // 0x1af69c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1af69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af6a0:
    // 0x1af6a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1af6a4:
    if (ctx->pc == 0x1AF6A4u) {
        ctx->pc = 0x1AF6A4u;
            // 0x1af6a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AF6A8u;
        goto label_1af6a8;
    }
    ctx->pc = 0x1AF6A0u;
    {
        const bool branch_taken_0x1af6a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6A0u;
            // 0x1af6a4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6a0) {
            ctx->pc = 0x1AF6C0u;
            goto label_1af6c0;
        }
    }
    ctx->pc = 0x1AF6A8u;
label_1af6a8:
    // 0x1af6a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af6ac:
    // 0x1af6ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af6acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af6b0:
    // 0x1af6b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af6b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af6b4:
    // 0x1af6b4: 0x0  nop
    ctx->pc = 0x1af6b4u;
    // NOP
label_1af6b8:
    // 0x1af6b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1af6bc:
    // 0x1af6bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1af6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af6c0:
    // 0x1af6c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1af6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af6c4:
    // 0x1af6c4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1af6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1af6c8:
    // 0x1af6c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af6c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af6cc:
    // 0x1af6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af6d0:
    // 0x1af6d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1af6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af6d4:
    // 0x1af6d4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1af6d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1af6d8:
    // 0x1af6d8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1af6dc:
    if (ctx->pc == 0x1AF6DCu) {
        ctx->pc = 0x1AF6DCu;
            // 0x1af6dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1AF6E0u;
        goto label_1af6e0;
    }
    ctx->pc = 0x1AF6D8u;
    {
        const bool branch_taken_0x1af6d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AF6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF6D8u;
            // 0x1af6dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6d8) {
            ctx->pc = 0x1AF6F8u;
            goto label_1af6f8;
        }
    }
    ctx->pc = 0x1AF6E0u;
label_1af6e0:
    // 0x1af6e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1af6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1af6e4:
    // 0x1af6e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1af6e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1af6e8:
    // 0x1af6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af6ec:
    // 0x1af6ec: 0x0  nop
    ctx->pc = 0x1af6ecu;
    // NOP
label_1af6f0:
    // 0x1af6f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af6f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af6f4:
    // 0x1af6f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1af6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1af6f8:
    // 0x1af6f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1af6fc:
    // 0x1af6fc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1af6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1af700:
    // 0x1af700: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1af700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1af704:
    // 0x1af704: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1af704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1af708:
    // 0x1af708: 0xc06bff4  jal         func_1AFFD0
label_1af70c:
    if (ctx->pc == 0x1AF70Cu) {
        ctx->pc = 0x1AF70Cu;
            // 0x1af70c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1AF710u;
        goto label_1af710;
    }
    ctx->pc = 0x1AF708u;
    SET_GPR_U32(ctx, 31, 0x1AF710u);
    ctx->pc = 0x1AF70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF708u;
            // 0x1af70c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AFFD0u;
    if (runtime->hasFunction(0x1AFFD0u)) {
        auto targetFn = runtime->lookupFunction(0x1AFFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF710u; }
        if (ctx->pc != 0x1AF710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1affd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF710u; }
        if (ctx->pc != 0x1AF710u) { return; }
    }
    ctx->pc = 0x1AF710u;
label_1af710:
    // 0x1af710: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1af710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1af714:
    // 0x1af714: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1af714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1af718:
    // 0x1af718: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1af718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1af71c:
    // 0x1af71c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af720:
    // 0x1af720: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1af720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1af724:
    // 0x1af724: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1af724u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1af728:
    // 0x1af728: 0x10c20115  beq         $a2, $v0, . + 4 + (0x115 << 2)
label_1af72c:
    if (ctx->pc == 0x1AF72Cu) {
        ctx->pc = 0x1AF72Cu;
            // 0x1af72c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AF730u;
        goto label_1af730;
    }
    ctx->pc = 0x1AF728u;
    {
        const bool branch_taken_0x1af728 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF728u;
            // 0x1af72c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af728) {
            ctx->pc = 0x1AFB80u;
            goto label_1afb80;
        }
    }
    ctx->pc = 0x1AF730u;
label_1af730:
    // 0x1af730: 0x10c30091  beq         $a2, $v1, . + 4 + (0x91 << 2)
label_1af734:
    if (ctx->pc == 0x1AF734u) {
        ctx->pc = 0x1AF734u;
            // 0x1af734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AF738u;
        goto label_1af738;
    }
    ctx->pc = 0x1AF730u;
    {
        const bool branch_taken_0x1af730 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AF734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF730u;
            // 0x1af734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af730) {
            ctx->pc = 0x1AF978u;
            goto label_1af978;
        }
    }
    ctx->pc = 0x1AF738u;
label_1af738:
    // 0x1af738: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_1af73c:
    if (ctx->pc == 0x1AF73Cu) {
        ctx->pc = 0x1AF740u;
        goto label_1af740;
    }
    ctx->pc = 0x1AF738u;
    {
        const bool branch_taken_0x1af738 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af738) {
            ctx->pc = 0x1AF750u;
            goto label_1af750;
        }
    }
    ctx->pc = 0x1AF740u;
label_1af740:
    // 0x1af740: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_1af744:
    if (ctx->pc == 0x1AF744u) {
        ctx->pc = 0x1AF748u;
        goto label_1af748;
    }
    ctx->pc = 0x1AF740u;
    {
        const bool branch_taken_0x1af740 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af740) {
            ctx->pc = 0x1AF750u;
            goto label_1af750;
        }
    }
    ctx->pc = 0x1AF748u;
label_1af748:
    // 0x1af748: 0x10000175  b           . + 4 + (0x175 << 2)
label_1af74c:
    if (ctx->pc == 0x1AF74Cu) {
        ctx->pc = 0x1AF750u;
        goto label_1af750;
    }
    ctx->pc = 0x1AF748u;
    {
        const bool branch_taken_0x1af748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af748) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF750u;
label_1af750:
    // 0x1af750: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1af750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1af754:
    // 0x1af754: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1af754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1af758:
    // 0x1af758: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_1af75c:
    if (ctx->pc == 0x1AF75Cu) {
        ctx->pc = 0x1AF75Cu;
            // 0x1af75c: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->pc = 0x1AF760u;
        goto label_1af760;
    }
    ctx->pc = 0x1AF758u;
    {
        const bool branch_taken_0x1af758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF758u;
            // 0x1af75c: 0x28610078  slti        $at, $v1, 0x78 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)120) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af758) {
            ctx->pc = 0x1AF840u;
            goto label_1af840;
        }
    }
    ctx->pc = 0x1AF760u;
label_1af760:
    // 0x1af760: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
label_1af764:
    if (ctx->pc == 0x1AF764u) {
        ctx->pc = 0x1AF768u;
        goto label_1af768;
    }
    ctx->pc = 0x1AF760u;
    {
        const bool branch_taken_0x1af760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af760) {
            ctx->pc = 0x1AF840u;
            goto label_1af840;
        }
    }
    ctx->pc = 0x1AF768u;
label_1af768:
    // 0x1af768: 0x14c0001b  bnez        $a2, . + 4 + (0x1B << 2)
label_1af76c:
    if (ctx->pc == 0x1AF76Cu) {
        ctx->pc = 0x1AF770u;
        goto label_1af770;
    }
    ctx->pc = 0x1AF768u;
    {
        const bool branch_taken_0x1af768 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af768) {
            ctx->pc = 0x1AF7D8u;
            goto label_1af7d8;
        }
    }
    ctx->pc = 0x1AF770u;
label_1af770:
    // 0x1af770: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1af770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af774:
    // 0x1af774: 0x3c023c13  lui         $v0, 0x3C13
    ctx->pc = 0x1af774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15379 << 16));
label_1af778:
    // 0x1af778: 0x344374bc  ori         $v1, $v0, 0x74BC
    ctx->pc = 0x1af778u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)29884u)));
label_1af77c:
    // 0x1af77c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1af77cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af780:
    // 0x1af780: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1af780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1af784:
    // 0x1af784: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1af784u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1af788:
    // 0x1af788: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af78c:
    // 0x1af78c: 0x0  nop
    ctx->pc = 0x1af78cu;
    // NOP
label_1af790:
    // 0x1af790: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1af790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1af794:
    // 0x1af794: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1af798:
    // 0x1af798: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x1af798u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1af79c:
    // 0x1af79c: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1af79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1af7a0:
    // 0x1af7a0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1af7a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1af7a4:
    // 0x1af7a4: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1af7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1af7a8:
    // 0x1af7a8: 0xc60300e4  lwc1        $f3, 0xE4($s0)
    ctx->pc = 0x1af7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af7ac:
    // 0x1af7ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1af7acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af7b0:
    // 0x1af7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af7b4:
    // 0x1af7b4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x1af7b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_1af7b8:
    // 0x1af7b8: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1af7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1af7bc:
    // 0x1af7bc: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1af7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af7c0:
    // 0x1af7c0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1af7c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1af7c4:
    // 0x1af7c4: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x1af7c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1af7c8:
    // 0x1af7c8: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1af7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af7cc:
    // 0x1af7cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af7ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af7d0:
    // 0x1af7d0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1af7d4:
    if (ctx->pc == 0x1AF7D4u) {
        ctx->pc = 0x1AF7D4u;
            // 0x1af7d4: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->pc = 0x1AF7D8u;
        goto label_1af7d8;
    }
    ctx->pc = 0x1AF7D0u;
    {
        const bool branch_taken_0x1af7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF7D0u;
            // 0x1af7d4: 0xe60000e8  swc1        $f0, 0xE8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7d0) {
            ctx->pc = 0x1AF840u;
            goto label_1af840;
        }
    }
    ctx->pc = 0x1AF7D8u;
label_1af7d8:
    // 0x1af7d8: 0x3c03bc13  lui         $v1, 0xBC13
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48147 << 16));
label_1af7dc:
    // 0x1af7dc: 0xc60300d0  lwc1        $f3, 0xD0($s0)
    ctx->pc = 0x1af7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af7e0:
    // 0x1af7e0: 0x346474bc  ori         $a0, $v1, 0x74BC
    ctx->pc = 0x1af7e0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)29884u)));
label_1af7e4:
    // 0x1af7e4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1af7e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af7e8:
    // 0x1af7e8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1af7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
label_1af7ec:
    // 0x1af7ec: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x1af7ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
label_1af7f0:
    // 0x1af7f0: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_1af7f4:
    // 0x1af7f4: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1af7f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1af7f8:
    // 0x1af7f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1af7fc:
    // 0x1af7fc: 0x0  nop
    ctx->pc = 0x1af7fcu;
    // NOP
label_1af800:
    // 0x1af800: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1af800u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_1af804:
    // 0x1af804: 0x3c023951  lui         $v0, 0x3951
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14673 << 16));
label_1af808:
    // 0x1af808: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x1af808u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)46871u)));
label_1af80c:
    // 0x1af80c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1af80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1af810:
    // 0x1af810: 0xc60300e4  lwc1        $f3, 0xE4($s0)
    ctx->pc = 0x1af810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1af814:
    // 0x1af814: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1af814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1af818:
    // 0x1af818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af81c:
    // 0x1af81c: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1af81cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1af820:
    // 0x1af820: 0xe60200e4  swc1        $f2, 0xE4($s0)
    ctx->pc = 0x1af820u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
label_1af824:
    // 0x1af824: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1af824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1af828:
    // 0x1af828: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1af828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1af82c:
    // 0x1af82c: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x1af82cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1af830:
    // 0x1af830: 0xc60100e8  lwc1        $f1, 0xE8($s0)
    ctx->pc = 0x1af830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af834:
    // 0x1af834: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1af834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1af838:
    // 0x1af838: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1af838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
label_1af83c:
    // 0x1af83c: 0x0  nop
    ctx->pc = 0x1af83cu;
    // NOP
label_1af840:
    // 0x1af840: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1af840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1af844:
    // 0x1af844: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1af848:
    // 0x1af848: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
label_1af84c:
    if (ctx->pc == 0x1AF84Cu) {
        ctx->pc = 0x1AF84Cu;
            // 0x1af84c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x1AF850u;
        goto label_1af850;
    }
    ctx->pc = 0x1AF848u;
    {
        const bool branch_taken_0x1af848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF848u;
            // 0x1af84c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af848) {
            ctx->pc = 0x1AF950u;
            goto label_1af950;
        }
    }
    ctx->pc = 0x1AF850u;
label_1af850:
    // 0x1af850: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_1af854:
    if (ctx->pc == 0x1AF854u) {
        ctx->pc = 0x1AF858u;
        goto label_1af858;
    }
    ctx->pc = 0x1AF850u;
    {
        const bool branch_taken_0x1af850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af850) {
            ctx->pc = 0x1AF928u;
            goto label_1af928;
        }
    }
    ctx->pc = 0x1AF858u;
label_1af858:
    // 0x1af858: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1af858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1af85c:
    // 0x1af85c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_1af860:
    if (ctx->pc == 0x1AF860u) {
        ctx->pc = 0x1AF860u;
            // 0x1af860: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x1AF864u;
        goto label_1af864;
    }
    ctx->pc = 0x1AF85Cu;
    {
        const bool branch_taken_0x1af85c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF85Cu;
            // 0x1af860: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af85c) {
            ctx->pc = 0x1AF900u;
            goto label_1af900;
        }
    }
    ctx->pc = 0x1AF864u;
label_1af864:
    // 0x1af864: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_1af868:
    if (ctx->pc == 0x1AF868u) {
        ctx->pc = 0x1AF86Cu;
        goto label_1af86c;
    }
    ctx->pc = 0x1AF864u;
    {
        const bool branch_taken_0x1af864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af864) {
            ctx->pc = 0x1AF8D8u;
            goto label_1af8d8;
        }
    }
    ctx->pc = 0x1AF86Cu;
label_1af86c:
    // 0x1af86c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1af86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1af870:
    // 0x1af870: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1af874:
    if (ctx->pc == 0x1AF874u) {
        ctx->pc = 0x1AF874u;
            // 0x1af874: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x1AF878u;
        goto label_1af878;
    }
    ctx->pc = 0x1AF870u;
    {
        const bool branch_taken_0x1af870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF870u;
            // 0x1af874: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af870) {
            ctx->pc = 0x1AF8B0u;
            goto label_1af8b0;
        }
    }
    ctx->pc = 0x1AF878u;
label_1af878:
    // 0x1af878: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1af87c:
    if (ctx->pc == 0x1AF87Cu) {
        ctx->pc = 0x1AF880u;
        goto label_1af880;
    }
    ctx->pc = 0x1AF878u;
    {
        const bool branch_taken_0x1af878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1af878) {
            ctx->pc = 0x1AF888u;
            goto label_1af888;
        }
    }
    ctx->pc = 0x1AF880u;
label_1af880:
    // 0x1af880: 0x10000127  b           . + 4 + (0x127 << 2)
label_1af884:
    if (ctx->pc == 0x1AF884u) {
        ctx->pc = 0x1AF888u;
        goto label_1af888;
    }
    ctx->pc = 0x1AF880u;
    {
        const bool branch_taken_0x1af880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af880) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF888u;
label_1af888:
    // 0x1af888: 0xc065d00  jal         func_197400
label_1af88c:
    if (ctx->pc == 0x1AF88Cu) {
        ctx->pc = 0x1AF890u;
        goto label_1af890;
    }
    ctx->pc = 0x1AF888u;
    SET_GPR_U32(ctx, 31, 0x1AF890u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF890u; }
        if (ctx->pc != 0x1AF890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF890u; }
        if (ctx->pc != 0x1AF890u) { return; }
    }
    ctx->pc = 0x1AF890u;
label_1af890:
    // 0x1af890: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af894:
    // 0x1af894: 0x14430122  bne         $v0, $v1, . + 4 + (0x122 << 2)
label_1af898:
    if (ctx->pc == 0x1AF898u) {
        ctx->pc = 0x1AF89Cu;
        goto label_1af89c;
    }
    ctx->pc = 0x1AF894u;
    {
        const bool branch_taken_0x1af894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af894) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF89Cu;
label_1af89c:
    // 0x1af89c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af8a0:
    // 0x1af8a0: 0xc06560c  jal         func_195830
label_1af8a4:
    if (ctx->pc == 0x1AF8A4u) {
        ctx->pc = 0x1AF8A4u;
            // 0x1af8a4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF8A8u;
        goto label_1af8a8;
    }
    ctx->pc = 0x1AF8A0u;
    SET_GPR_U32(ctx, 31, 0x1AF8A8u);
    ctx->pc = 0x1AF8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8A0u;
            // 0x1af8a4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8A8u; }
        if (ctx->pc != 0x1AF8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8A8u; }
        if (ctx->pc != 0x1AF8A8u) { return; }
    }
    ctx->pc = 0x1AF8A8u;
label_1af8a8:
    // 0x1af8a8: 0x1000011d  b           . + 4 + (0x11D << 2)
label_1af8ac:
    if (ctx->pc == 0x1AF8ACu) {
        ctx->pc = 0x1AF8B0u;
        goto label_1af8b0;
    }
    ctx->pc = 0x1AF8A8u;
    {
        const bool branch_taken_0x1af8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8a8) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF8B0u;
label_1af8b0:
    // 0x1af8b0: 0xc065d00  jal         func_197400
label_1af8b4:
    if (ctx->pc == 0x1AF8B4u) {
        ctx->pc = 0x1AF8B8u;
        goto label_1af8b8;
    }
    ctx->pc = 0x1AF8B0u;
    SET_GPR_U32(ctx, 31, 0x1AF8B8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8B8u; }
        if (ctx->pc != 0x1AF8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8B8u; }
        if (ctx->pc != 0x1AF8B8u) { return; }
    }
    ctx->pc = 0x1AF8B8u;
label_1af8b8:
    // 0x1af8b8: 0x18400119  blez        $v0, . + 4 + (0x119 << 2)
label_1af8bc:
    if (ctx->pc == 0x1AF8BCu) {
        ctx->pc = 0x1AF8C0u;
        goto label_1af8c0;
    }
    ctx->pc = 0x1AF8B8u;
    {
        const bool branch_taken_0x1af8b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af8b8) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF8C0u;
label_1af8c0:
    // 0x1af8c0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af8c4:
    // 0x1af8c4: 0xc06560c  jal         func_195830
label_1af8c8:
    if (ctx->pc == 0x1AF8C8u) {
        ctx->pc = 0x1AF8C8u;
            // 0x1af8c8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF8CCu;
        goto label_1af8cc;
    }
    ctx->pc = 0x1AF8C4u;
    SET_GPR_U32(ctx, 31, 0x1AF8CCu);
    ctx->pc = 0x1AF8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8C4u;
            // 0x1af8c8: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8CCu; }
        if (ctx->pc != 0x1AF8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8CCu; }
        if (ctx->pc != 0x1AF8CCu) { return; }
    }
    ctx->pc = 0x1AF8CCu;
label_1af8cc:
    // 0x1af8cc: 0x10000114  b           . + 4 + (0x114 << 2)
label_1af8d0:
    if (ctx->pc == 0x1AF8D0u) {
        ctx->pc = 0x1AF8D4u;
        goto label_1af8d4;
    }
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF8D4u;
label_1af8d4:
    // 0x1af8d4: 0x0  nop
    ctx->pc = 0x1af8d4u;
    // NOP
label_1af8d8:
    // 0x1af8d8: 0xc065d00  jal         func_197400
label_1af8dc:
    if (ctx->pc == 0x1AF8DCu) {
        ctx->pc = 0x1AF8E0u;
        goto label_1af8e0;
    }
    ctx->pc = 0x1AF8D8u;
    SET_GPR_U32(ctx, 31, 0x1AF8E0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8E0u; }
        if (ctx->pc != 0x1AF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8E0u; }
        if (ctx->pc != 0x1AF8E0u) { return; }
    }
    ctx->pc = 0x1AF8E0u;
label_1af8e0:
    // 0x1af8e0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1af8e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1af8e4:
    // 0x1af8e4: 0x1420010e  bnez        $at, . + 4 + (0x10E << 2)
label_1af8e8:
    if (ctx->pc == 0x1AF8E8u) {
        ctx->pc = 0x1AF8ECu;
        goto label_1af8ec;
    }
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF8ECu;
label_1af8ec:
    // 0x1af8ec: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af8f0:
    // 0x1af8f0: 0xc06560c  jal         func_195830
label_1af8f4:
    if (ctx->pc == 0x1AF8F4u) {
        ctx->pc = 0x1AF8F4u;
            // 0x1af8f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF8F8u;
        goto label_1af8f8;
    }
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF8F0u;
            // 0x1af8f4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8F8u; }
        if (ctx->pc != 0x1AF8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF8F8u; }
        if (ctx->pc != 0x1AF8F8u) { return; }
    }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x10000109  b           . + 4 + (0x109 << 2)
label_1af8fc:
    if (ctx->pc == 0x1AF8FCu) {
        ctx->pc = 0x1AF900u;
        goto label_1af900;
    }
    ctx->pc = 0x1AF8F8u;
    {
        const bool branch_taken_0x1af8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af8f8) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF900u;
label_1af900:
    // 0x1af900: 0xc065d00  jal         func_197400
label_1af904:
    if (ctx->pc == 0x1AF904u) {
        ctx->pc = 0x1AF908u;
        goto label_1af908;
    }
    ctx->pc = 0x1AF900u;
    SET_GPR_U32(ctx, 31, 0x1AF908u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF908u; }
        if (ctx->pc != 0x1AF908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF908u; }
        if (ctx->pc != 0x1AF908u) { return; }
    }
    ctx->pc = 0x1AF908u;
label_1af908:
    // 0x1af908: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af90c:
    // 0x1af90c: 0x14430104  bne         $v0, $v1, . + 4 + (0x104 << 2)
label_1af910:
    if (ctx->pc == 0x1AF910u) {
        ctx->pc = 0x1AF914u;
        goto label_1af914;
    }
    ctx->pc = 0x1AF90Cu;
    {
        const bool branch_taken_0x1af90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af90c) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF914u;
label_1af914:
    // 0x1af914: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af918:
    // 0x1af918: 0xc06560c  jal         func_195830
label_1af91c:
    if (ctx->pc == 0x1AF91Cu) {
        ctx->pc = 0x1AF91Cu;
            // 0x1af91c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF920u;
        goto label_1af920;
    }
    ctx->pc = 0x1AF918u;
    SET_GPR_U32(ctx, 31, 0x1AF920u);
    ctx->pc = 0x1AF91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF918u;
            // 0x1af91c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF920u; }
        if (ctx->pc != 0x1AF920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF920u; }
        if (ctx->pc != 0x1AF920u) { return; }
    }
    ctx->pc = 0x1AF920u;
label_1af920:
    // 0x1af920: 0x100000ff  b           . + 4 + (0xFF << 2)
label_1af924:
    if (ctx->pc == 0x1AF924u) {
        ctx->pc = 0x1AF928u;
        goto label_1af928;
    }
    ctx->pc = 0x1AF920u;
    {
        const bool branch_taken_0x1af920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af920) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0xc065d00  jal         func_197400
label_1af92c:
    if (ctx->pc == 0x1AF92Cu) {
        ctx->pc = 0x1AF930u;
        goto label_1af930;
    }
    ctx->pc = 0x1AF928u;
    SET_GPR_U32(ctx, 31, 0x1AF930u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF930u; }
        if (ctx->pc != 0x1AF930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF930u; }
        if (ctx->pc != 0x1AF930u) { return; }
    }
    ctx->pc = 0x1AF930u;
label_1af930:
    // 0x1af930: 0x184000fb  blez        $v0, . + 4 + (0xFB << 2)
label_1af934:
    if (ctx->pc == 0x1AF934u) {
        ctx->pc = 0x1AF938u;
        goto label_1af938;
    }
    ctx->pc = 0x1AF930u;
    {
        const bool branch_taken_0x1af930 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1af930) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF938u;
label_1af938:
    // 0x1af938: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af93c:
    // 0x1af93c: 0xc06560c  jal         func_195830
label_1af940:
    if (ctx->pc == 0x1AF940u) {
        ctx->pc = 0x1AF940u;
            // 0x1af940: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF944u;
        goto label_1af944;
    }
    ctx->pc = 0x1AF93Cu;
    SET_GPR_U32(ctx, 31, 0x1AF944u);
    ctx->pc = 0x1AF940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF93Cu;
            // 0x1af940: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF944u; }
        if (ctx->pc != 0x1AF944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF944u; }
        if (ctx->pc != 0x1AF944u) { return; }
    }
    ctx->pc = 0x1AF944u;
label_1af944:
    // 0x1af944: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_1af948:
    if (ctx->pc == 0x1AF948u) {
        ctx->pc = 0x1AF94Cu;
        goto label_1af94c;
    }
    ctx->pc = 0x1AF944u;
    {
        const bool branch_taken_0x1af944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af944) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF94Cu;
label_1af94c:
    // 0x1af94c: 0x0  nop
    ctx->pc = 0x1af94cu;
    // NOP
label_1af950:
    // 0x1af950: 0xc065d00  jal         func_197400
label_1af954:
    if (ctx->pc == 0x1AF954u) {
        ctx->pc = 0x1AF958u;
        goto label_1af958;
    }
    ctx->pc = 0x1AF950u;
    SET_GPR_U32(ctx, 31, 0x1AF958u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF958u; }
        if (ctx->pc != 0x1AF958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF958u; }
        if (ctx->pc != 0x1AF958u) { return; }
    }
    ctx->pc = 0x1AF958u;
label_1af958:
    // 0x1af958: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1af958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1af95c:
    // 0x1af95c: 0x142000f0  bnez        $at, . + 4 + (0xF0 << 2)
label_1af960:
    if (ctx->pc == 0x1AF960u) {
        ctx->pc = 0x1AF964u;
        goto label_1af964;
    }
    ctx->pc = 0x1AF95Cu;
    {
        const bool branch_taken_0x1af95c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af95c) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF964u;
label_1af964:
    // 0x1af964: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1af964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1af968:
    // 0x1af968: 0xc06560c  jal         func_195830
label_1af96c:
    if (ctx->pc == 0x1AF96Cu) {
        ctx->pc = 0x1AF96Cu;
            // 0x1af96c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AF970u;
        goto label_1af970;
    }
    ctx->pc = 0x1AF968u;
    SET_GPR_U32(ctx, 31, 0x1AF970u);
    ctx->pc = 0x1AF96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF968u;
            // 0x1af96c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF970u; }
        if (ctx->pc != 0x1AF970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF970u; }
        if (ctx->pc != 0x1AF970u) { return; }
    }
    ctx->pc = 0x1AF970u;
label_1af970:
    // 0x1af970: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1af974:
    if (ctx->pc == 0x1AF974u) {
        ctx->pc = 0x1AF978u;
        goto label_1af978;
    }
    ctx->pc = 0x1AF970u;
    {
        const bool branch_taken_0x1af970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af970) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF978u;
label_1af978:
    // 0x1af978: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1af978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1af97c:
    // 0x1af97c: 0x14c00028  bnez        $a2, . + 4 + (0x28 << 2)
label_1af980:
    if (ctx->pc == 0x1AF980u) {
        ctx->pc = 0x1AF984u;
        goto label_1af984;
    }
    ctx->pc = 0x1AF97Cu;
    {
        const bool branch_taken_0x1af97c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af97c) {
            ctx->pc = 0x1AFA20u;
            goto label_1afa20;
        }
    }
    ctx->pc = 0x1AF984u;
label_1af984:
    // 0x1af984: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1af984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af988:
    // 0x1af988: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1af988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1af98c:
    // 0x1af98c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1af98cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1af990:
    // 0x1af990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af994:
    // 0x1af994: 0x0  nop
    ctx->pc = 0x1af994u;
    // NOP
label_1af998:
    // 0x1af998: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1af998u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af99c:
    // 0x1af99c: 0xc040d72  jal         func_1035C8
label_1af9a0:
    if (ctx->pc == 0x1AF9A0u) {
        ctx->pc = 0x1AF9A0u;
            // 0x1af9a0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AF9A4u;
        goto label_1af9a4;
    }
    ctx->pc = 0x1AF99Cu;
    SET_GPR_U32(ctx, 31, 0x1AF9A4u);
    ctx->pc = 0x1AF9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF99Cu;
            // 0x1af9a0: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A4u; }
        if (ctx->pc != 0x1AF9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9A4u; }
        if (ctx->pc != 0x1AF9A4u) { return; }
    }
    ctx->pc = 0x1AF9A4u;
label_1af9a4:
    // 0x1af9a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1af9a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1af9a8:
    // 0x1af9a8: 0xc040078  jal         func_1001E0
label_1af9ac:
    if (ctx->pc == 0x1AF9ACu) {
        ctx->pc = 0x1AF9ACu;
            // 0x1af9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9B0u;
        goto label_1af9b0;
    }
    ctx->pc = 0x1AF9A8u;
    SET_GPR_U32(ctx, 31, 0x1AF9B0u);
    ctx->pc = 0x1AF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9A8u;
            // 0x1af9ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B0u; }
        if (ctx->pc != 0x1AF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9B0u; }
        if (ctx->pc != 0x1AF9B0u) { return; }
    }
    ctx->pc = 0x1AF9B0u;
label_1af9b0:
    // 0x1af9b0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1af9b4:
    if (ctx->pc == 0x1AF9B4u) {
        ctx->pc = 0x1AF9B8u;
        goto label_1af9b8;
    }
    ctx->pc = 0x1AF9B0u;
    {
        const bool branch_taken_0x1af9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af9b0) {
            ctx->pc = 0x1AF9D8u;
            goto label_1af9d8;
        }
    }
    ctx->pc = 0x1AF9B8u;
label_1af9b8:
    // 0x1af9b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1af9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1af9bc:
    // 0x1af9bc: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1af9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1af9c0:
    // 0x1af9c0: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1af9c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1af9c4:
    // 0x1af9c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1af9c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1af9c8:
    // 0x1af9c8: 0x0  nop
    ctx->pc = 0x1af9c8u;
    // NOP
label_1af9cc:
    // 0x1af9cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1af9ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1af9d0:
    // 0x1af9d0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1af9d4:
    if (ctx->pc == 0x1AF9D4u) {
        ctx->pc = 0x1AF9D4u;
            // 0x1af9d4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AF9D8u;
        goto label_1af9d8;
    }
    ctx->pc = 0x1AF9D0u;
    {
        const bool branch_taken_0x1af9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF9D0u;
            // 0x1af9d4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af9d0) {
            ctx->pc = 0x1AF9E8u;
            goto label_1af9e8;
        }
    }
    ctx->pc = 0x1AF9D8u;
label_1af9d8:
    // 0x1af9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1af9dc:
    // 0x1af9dc: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1af9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1af9e0:
    // 0x1af9e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1af9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1af9e4:
    // 0x1af9e4: 0x0  nop
    ctx->pc = 0x1af9e4u;
    // NOP
label_1af9e8:
    // 0x1af9e8: 0xc065d00  jal         func_197400
label_1af9ec:
    if (ctx->pc == 0x1AF9ECu) {
        ctx->pc = 0x1AF9F0u;
        goto label_1af9f0;
    }
    ctx->pc = 0x1AF9E8u;
    SET_GPR_U32(ctx, 31, 0x1AF9F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9F0u; }
        if (ctx->pc != 0x1AF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF9F0u; }
        if (ctx->pc != 0x1AF9F0u) { return; }
    }
    ctx->pc = 0x1AF9F0u;
label_1af9f0:
    // 0x1af9f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1af9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1af9f4:
    // 0x1af9f4: 0x144300ca  bne         $v0, $v1, . + 4 + (0xCA << 2)
label_1af9f8:
    if (ctx->pc == 0x1AF9F8u) {
        ctx->pc = 0x1AF9FCu;
        goto label_1af9fc;
    }
    ctx->pc = 0x1AF9F4u;
    {
        const bool branch_taken_0x1af9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af9f4) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AF9FCu;
label_1af9fc:
    // 0x1af9fc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1af9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afa00:
    // 0x1afa00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1afa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1afa04:
    // 0x1afa04: 0x146200c6  bne         $v1, $v0, . + 4 + (0xC6 << 2)
label_1afa08:
    if (ctx->pc == 0x1AFA08u) {
        ctx->pc = 0x1AFA0Cu;
        goto label_1afa0c;
    }
    ctx->pc = 0x1AFA04u;
    {
        const bool branch_taken_0x1afa04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa04) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFA0Cu;
label_1afa0c:
    // 0x1afa0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afa10:
    // 0x1afa10: 0xc06560c  jal         func_195830
label_1afa14:
    if (ctx->pc == 0x1AFA14u) {
        ctx->pc = 0x1AFA14u;
            // 0x1afa14: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFA18u;
        goto label_1afa18;
    }
    ctx->pc = 0x1AFA10u;
    SET_GPR_U32(ctx, 31, 0x1AFA18u);
    ctx->pc = 0x1AFA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA10u;
            // 0x1afa14: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA18u; }
        if (ctx->pc != 0x1AFA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA18u; }
        if (ctx->pc != 0x1AFA18u) { return; }
    }
    ctx->pc = 0x1AFA18u;
label_1afa18:
    // 0x1afa18: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1afa1c:
    if (ctx->pc == 0x1AFA1Cu) {
        ctx->pc = 0x1AFA20u;
        goto label_1afa20;
    }
    ctx->pc = 0x1AFA18u;
    {
        const bool branch_taken_0x1afa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afa18) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFA20u;
label_1afa20:
    // 0x1afa20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afa24:
    // 0x1afa24: 0x14c20040  bne         $a2, $v0, . + 4 + (0x40 << 2)
label_1afa28:
    if (ctx->pc == 0x1AFA28u) {
        ctx->pc = 0x1AFA2Cu;
        goto label_1afa2c;
    }
    ctx->pc = 0x1AFA24u;
    {
        const bool branch_taken_0x1afa24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa24) {
            ctx->pc = 0x1AFB28u;
            goto label_1afb28;
        }
    }
    ctx->pc = 0x1AFA2Cu;
label_1afa2c:
    // 0x1afa2c: 0xc065d00  jal         func_197400
label_1afa30:
    if (ctx->pc == 0x1AFA30u) {
        ctx->pc = 0x1AFA34u;
        goto label_1afa34;
    }
    ctx->pc = 0x1AFA2Cu;
    SET_GPR_U32(ctx, 31, 0x1AFA34u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA34u; }
        if (ctx->pc != 0x1AFA34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA34u; }
        if (ctx->pc != 0x1AFA34u) { return; }
    }
    ctx->pc = 0x1AFA34u;
label_1afa34:
    // 0x1afa34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1afa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afa38:
    // 0x1afa38: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1afa3c:
    if (ctx->pc == 0x1AFA3Cu) {
        ctx->pc = 0x1AFA40u;
        goto label_1afa40;
    }
    ctx->pc = 0x1AFA38u;
    {
        const bool branch_taken_0x1afa38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afa38) {
            ctx->pc = 0x1AFA60u;
            goto label_1afa60;
        }
    }
    ctx->pc = 0x1AFA40u;
label_1afa40:
    // 0x1afa40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afa44:
    // 0x1afa44: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1afa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1afa48:
    // 0x1afa48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1afa4c:
    if (ctx->pc == 0x1AFA4Cu) {
        ctx->pc = 0x1AFA50u;
        goto label_1afa50;
    }
    ctx->pc = 0x1AFA48u;
    {
        const bool branch_taken_0x1afa48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa48) {
            ctx->pc = 0x1AFA60u;
            goto label_1afa60;
        }
    }
    ctx->pc = 0x1AFA50u;
label_1afa50:
    // 0x1afa50: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afa50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afa54:
    // 0x1afa54: 0xc06560c  jal         func_195830
label_1afa58:
    if (ctx->pc == 0x1AFA58u) {
        ctx->pc = 0x1AFA58u;
            // 0x1afa58: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFA5Cu;
        goto label_1afa5c;
    }
    ctx->pc = 0x1AFA54u;
    SET_GPR_U32(ctx, 31, 0x1AFA5Cu);
    ctx->pc = 0x1AFA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA54u;
            // 0x1afa58: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA5Cu; }
        if (ctx->pc != 0x1AFA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA5Cu; }
        if (ctx->pc != 0x1AFA5Cu) { return; }
    }
    ctx->pc = 0x1AFA5Cu;
label_1afa5c:
    // 0x1afa5c: 0x0  nop
    ctx->pc = 0x1afa5cu;
    // NOP
label_1afa60:
    // 0x1afa60: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afa64:
    // 0x1afa64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1afa64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1afa68:
    // 0x1afa68: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_1afa6c:
    if (ctx->pc == 0x1AFA6Cu) {
        ctx->pc = 0x1AFA70u;
        goto label_1afa70;
    }
    ctx->pc = 0x1AFA68u;
    {
        const bool branch_taken_0x1afa68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afa68) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFA70u;
label_1afa70:
    // 0x1afa70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afa70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afa74:
    // 0x1afa74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afa78:
    // 0x1afa78: 0xc0655b0  jal         func_1956C0
label_1afa7c:
    if (ctx->pc == 0x1AFA7Cu) {
        ctx->pc = 0x1AFA7Cu;
            // 0x1afa7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFA80u;
        goto label_1afa80;
    }
    ctx->pc = 0x1AFA78u;
    SET_GPR_U32(ctx, 31, 0x1AFA80u);
    ctx->pc = 0x1AFA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA78u;
            // 0x1afa7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA80u; }
        if (ctx->pc != 0x1AFA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA80u; }
        if (ctx->pc != 0x1AFA80u) { return; }
    }
    ctx->pc = 0x1AFA80u;
label_1afa80:
    // 0x1afa80: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afa80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afa84:
    // 0x1afa84: 0xc06560c  jal         func_195830
label_1afa88:
    if (ctx->pc == 0x1AFA88u) {
        ctx->pc = 0x1AFA88u;
            // 0x1afa88: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFA8Cu;
        goto label_1afa8c;
    }
    ctx->pc = 0x1AFA84u;
    SET_GPR_U32(ctx, 31, 0x1AFA8Cu);
    ctx->pc = 0x1AFA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA84u;
            // 0x1afa88: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA8Cu; }
        if (ctx->pc != 0x1AFA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA8Cu; }
        if (ctx->pc != 0x1AFA8Cu) { return; }
    }
    ctx->pc = 0x1AFA8Cu;
label_1afa8c:
    // 0x1afa8c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afa90:
    // 0x1afa90: 0xc06560c  jal         func_195830
label_1afa94:
    if (ctx->pc == 0x1AFA94u) {
        ctx->pc = 0x1AFA94u;
            // 0x1afa94: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFA98u;
        goto label_1afa98;
    }
    ctx->pc = 0x1AFA90u;
    SET_GPR_U32(ctx, 31, 0x1AFA98u);
    ctx->pc = 0x1AFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFA90u;
            // 0x1afa94: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA98u; }
        if (ctx->pc != 0x1AFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFA98u; }
        if (ctx->pc != 0x1AFA98u) { return; }
    }
    ctx->pc = 0x1AFA98u;
label_1afa98:
    // 0x1afa98: 0xc065d00  jal         func_197400
label_1afa9c:
    if (ctx->pc == 0x1AFA9Cu) {
        ctx->pc = 0x1AFAA0u;
        goto label_1afaa0;
    }
    ctx->pc = 0x1AFA98u;
    SET_GPR_U32(ctx, 31, 0x1AFAA0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAA0u; }
        if (ctx->pc != 0x1AFAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAA0u; }
        if (ctx->pc != 0x1AFAA0u) { return; }
    }
    ctx->pc = 0x1AFAA0u;
label_1afaa0:
    // 0x1afaa0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1afaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afaa4:
    // 0x1afaa4: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1afaa8:
    if (ctx->pc == 0x1AFAA8u) {
        ctx->pc = 0x1AFAACu;
        goto label_1afaac;
    }
    ctx->pc = 0x1AFAA4u;
    {
        const bool branch_taken_0x1afaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afaa4) {
            ctx->pc = 0x1AFAD8u;
            goto label_1afad8;
        }
    }
    ctx->pc = 0x1AFAACu;
label_1afaac:
    // 0x1afaac: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1afaacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1afab0:
    // 0x1afab0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afab4:
    // 0x1afab4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afab8:
    // 0x1afab8: 0xc0655b0  jal         func_1956C0
label_1afabc:
    if (ctx->pc == 0x1AFABCu) {
        ctx->pc = 0x1AFABCu;
            // 0x1afabc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFAC0u;
        goto label_1afac0;
    }
    ctx->pc = 0x1AFAB8u;
    SET_GPR_U32(ctx, 31, 0x1AFAC0u);
    ctx->pc = 0x1AFABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFAB8u;
            // 0x1afabc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAC0u; }
        if (ctx->pc != 0x1AFAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAC0u; }
        if (ctx->pc != 0x1AFAC0u) { return; }
    }
    ctx->pc = 0x1AFAC0u;
label_1afac0:
    // 0x1afac0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1afac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1afac4:
    // 0x1afac4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afac8:
    // 0x1afac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afacc:
    // 0x1afacc: 0xc0655b0  jal         func_1956C0
label_1afad0:
    if (ctx->pc == 0x1AFAD0u) {
        ctx->pc = 0x1AFAD0u;
            // 0x1afad0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFAD4u;
        goto label_1afad4;
    }
    ctx->pc = 0x1AFACCu;
    SET_GPR_U32(ctx, 31, 0x1AFAD4u);
    ctx->pc = 0x1AFAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFACCu;
            // 0x1afad0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAD4u; }
        if (ctx->pc != 0x1AFAD4u) { return; }
    }
    ctx->pc = 0x1AFAD4u;
label_1afad4:
    // 0x1afad4: 0x0  nop
    ctx->pc = 0x1afad4u;
    // NOP
label_1afad8:
    // 0x1afad8: 0xc065d00  jal         func_197400
label_1afadc:
    if (ctx->pc == 0x1AFADCu) {
        ctx->pc = 0x1AFAE0u;
        goto label_1afae0;
    }
    ctx->pc = 0x1AFAD8u;
    SET_GPR_U32(ctx, 31, 0x1AFAE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE0u; }
        if (ctx->pc != 0x1AFAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFAE0u; }
        if (ctx->pc != 0x1AFAE0u) { return; }
    }
    ctx->pc = 0x1AFAE0u;
label_1afae0:
    // 0x1afae0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1afae0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1afae4:
    // 0x1afae4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1afae8:
    if (ctx->pc == 0x1AFAE8u) {
        ctx->pc = 0x1AFAECu;
        goto label_1afaec;
    }
    ctx->pc = 0x1AFAE4u;
    {
        const bool branch_taken_0x1afae4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afae4) {
            ctx->pc = 0x1AFB08u;
            goto label_1afb08;
        }
    }
    ctx->pc = 0x1AFAECu;
label_1afaec:
    // 0x1afaec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afaf0:
    // 0x1afaf0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1afaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1afaf4:
    // 0x1afaf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1afaf8:
    if (ctx->pc == 0x1AFAF8u) {
        ctx->pc = 0x1AFAFCu;
        goto label_1afafc;
    }
    ctx->pc = 0x1AFAF4u;
    {
        const bool branch_taken_0x1afaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afaf4) {
            ctx->pc = 0x1AFB08u;
            goto label_1afb08;
        }
    }
    ctx->pc = 0x1AFAFCu;
label_1afafc:
    // 0x1afafc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afb00:
    // 0x1afb00: 0xc06560c  jal         func_195830
label_1afb04:
    if (ctx->pc == 0x1AFB04u) {
        ctx->pc = 0x1AFB04u;
            // 0x1afb04: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFB08u;
        goto label_1afb08;
    }
    ctx->pc = 0x1AFB00u;
    SET_GPR_U32(ctx, 31, 0x1AFB08u);
    ctx->pc = 0x1AFB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB00u;
            // 0x1afb04: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB08u; }
        if (ctx->pc != 0x1AFB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB08u; }
        if (ctx->pc != 0x1AFB08u) { return; }
    }
    ctx->pc = 0x1AFB08u;
label_1afb08:
    // 0x1afb08: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1afb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afb0c:
    // 0x1afb0c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1afb0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1afb10:
    // 0x1afb10: 0x14200083  bnez        $at, . + 4 + (0x83 << 2)
label_1afb14:
    if (ctx->pc == 0x1AFB14u) {
        ctx->pc = 0x1AFB14u;
            // 0x1afb14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AFB18u;
        goto label_1afb18;
    }
    ctx->pc = 0x1AFB10u;
    {
        const bool branch_taken_0x1afb10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB10u;
            // 0x1afb14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb10) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB18u;
label_1afb18:
    // 0x1afb18: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1afb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1afb1c:
    // 0x1afb1c: 0x10000080  b           . + 4 + (0x80 << 2)
label_1afb20:
    if (ctx->pc == 0x1AFB20u) {
        ctx->pc = 0x1AFB20u;
            // 0x1afb20: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1AFB24u;
        goto label_1afb24;
    }
    ctx->pc = 0x1AFB1Cu;
    {
        const bool branch_taken_0x1afb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB1Cu;
            // 0x1afb20: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb1c) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB24u;
label_1afb24:
    // 0x1afb24: 0x0  nop
    ctx->pc = 0x1afb24u;
    // NOP
label_1afb28:
    // 0x1afb28: 0x14c3007d  bne         $a2, $v1, . + 4 + (0x7D << 2)
label_1afb2c:
    if (ctx->pc == 0x1AFB2Cu) {
        ctx->pc = 0x1AFB30u;
        goto label_1afb30;
    }
    ctx->pc = 0x1AFB28u;
    {
        const bool branch_taken_0x1afb28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afb28) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB30u;
label_1afb30:
    // 0x1afb30: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1afb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afb34:
    // 0x1afb34: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1afb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1afb38:
    // 0x1afb38: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1afb38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1afb3c:
    // 0x1afb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afb40:
    // 0x1afb40: 0x0  nop
    ctx->pc = 0x1afb40u;
    // NOP
label_1afb44:
    // 0x1afb44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1afb44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1afb48:
    // 0x1afb48: 0xc065d00  jal         func_197400
label_1afb4c:
    if (ctx->pc == 0x1AFB4Cu) {
        ctx->pc = 0x1AFB4Cu;
            // 0x1afb4c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AFB50u;
        goto label_1afb50;
    }
    ctx->pc = 0x1AFB48u;
    SET_GPR_U32(ctx, 31, 0x1AFB50u);
    ctx->pc = 0x1AFB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB48u;
            // 0x1afb4c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB50u; }
        if (ctx->pc != 0x1AFB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB50u; }
        if (ctx->pc != 0x1AFB50u) { return; }
    }
    ctx->pc = 0x1AFB50u;
label_1afb50:
    // 0x1afb50: 0x18400073  blez        $v0, . + 4 + (0x73 << 2)
label_1afb54:
    if (ctx->pc == 0x1AFB54u) {
        ctx->pc = 0x1AFB58u;
        goto label_1afb58;
    }
    ctx->pc = 0x1AFB50u;
    {
        const bool branch_taken_0x1afb50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1afb50) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB58u;
label_1afb58:
    // 0x1afb58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afb5c:
    // 0x1afb5c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1afb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1afb60:
    // 0x1afb60: 0x1462006f  bne         $v1, $v0, . + 4 + (0x6F << 2)
label_1afb64:
    if (ctx->pc == 0x1AFB64u) {
        ctx->pc = 0x1AFB68u;
        goto label_1afb68;
    }
    ctx->pc = 0x1AFB60u;
    {
        const bool branch_taken_0x1afb60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afb60) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB68u;
label_1afb68:
    // 0x1afb68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afb6c:
    // 0x1afb6c: 0xc06560c  jal         func_195830
label_1afb70:
    if (ctx->pc == 0x1AFB70u) {
        ctx->pc = 0x1AFB70u;
            // 0x1afb70: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFB74u;
        goto label_1afb74;
    }
    ctx->pc = 0x1AFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AFB74u);
    ctx->pc = 0x1AFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFB6Cu;
            // 0x1afb70: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB74u; }
        if (ctx->pc != 0x1AFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFB74u; }
        if (ctx->pc != 0x1AFB74u) { return; }
    }
    ctx->pc = 0x1AFB74u;
label_1afb74:
    // 0x1afb74: 0x1000006a  b           . + 4 + (0x6A << 2)
label_1afb78:
    if (ctx->pc == 0x1AFB78u) {
        ctx->pc = 0x1AFB7Cu;
        goto label_1afb7c;
    }
    ctx->pc = 0x1AFB74u;
    {
        const bool branch_taken_0x1afb74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afb74) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFB7Cu;
label_1afb7c:
    // 0x1afb7c: 0x0  nop
    ctx->pc = 0x1afb7cu;
    // NOP
label_1afb80:
    // 0x1afb80: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1afb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1afb84:
    // 0x1afb84: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1afb88:
    if (ctx->pc == 0x1AFB88u) {
        ctx->pc = 0x1AFB8Cu;
        goto label_1afb8c;
    }
    ctx->pc = 0x1AFB84u;
    {
        const bool branch_taken_0x1afb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb84) {
            ctx->pc = 0x1AFC28u;
            goto label_1afc28;
        }
    }
    ctx->pc = 0x1AFB8Cu;
label_1afb8c:
    // 0x1afb8c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1afb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afb90:
    // 0x1afb90: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1afb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1afb94:
    // 0x1afb94: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1afb94u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1afb98:
    // 0x1afb98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afb9c:
    // 0x1afb9c: 0x0  nop
    ctx->pc = 0x1afb9cu;
    // NOP
label_1afba0:
    // 0x1afba0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1afba0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1afba4:
    // 0x1afba4: 0xc040d72  jal         func_1035C8
label_1afba8:
    if (ctx->pc == 0x1AFBA8u) {
        ctx->pc = 0x1AFBA8u;
            // 0x1afba8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AFBACu;
        goto label_1afbac;
    }
    ctx->pc = 0x1AFBA4u;
    SET_GPR_U32(ctx, 31, 0x1AFBACu);
    ctx->pc = 0x1AFBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBA4u;
            // 0x1afba8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBACu; }
        if (ctx->pc != 0x1AFBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBACu; }
        if (ctx->pc != 0x1AFBACu) { return; }
    }
    ctx->pc = 0x1AFBACu;
label_1afbac:
    // 0x1afbac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1afbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1afbb0:
    // 0x1afbb0: 0xc040078  jal         func_1001E0
label_1afbb4:
    if (ctx->pc == 0x1AFBB4u) {
        ctx->pc = 0x1AFBB4u;
            // 0x1afbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBB8u;
        goto label_1afbb8;
    }
    ctx->pc = 0x1AFBB0u;
    SET_GPR_U32(ctx, 31, 0x1AFBB8u);
    ctx->pc = 0x1AFBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBB0u;
            // 0x1afbb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBB8u; }
        if (ctx->pc != 0x1AFBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBB8u; }
        if (ctx->pc != 0x1AFBB8u) { return; }
    }
    ctx->pc = 0x1AFBB8u;
label_1afbb8:
    // 0x1afbb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1afbbc:
    if (ctx->pc == 0x1AFBBCu) {
        ctx->pc = 0x1AFBC0u;
        goto label_1afbc0;
    }
    ctx->pc = 0x1AFBB8u;
    {
        const bool branch_taken_0x1afbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afbb8) {
            ctx->pc = 0x1AFBE0u;
            goto label_1afbe0;
        }
    }
    ctx->pc = 0x1AFBC0u;
label_1afbc0:
    // 0x1afbc0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1afbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afbc4:
    // 0x1afbc4: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1afbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1afbc8:
    // 0x1afbc8: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1afbc8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1afbcc:
    // 0x1afbcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afbccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afbd0:
    // 0x1afbd0: 0x0  nop
    ctx->pc = 0x1afbd0u;
    // NOP
label_1afbd4:
    // 0x1afbd4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1afbd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1afbd8:
    // 0x1afbd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1afbdc:
    if (ctx->pc == 0x1AFBDCu) {
        ctx->pc = 0x1AFBDCu;
            // 0x1afbdc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1AFBE0u;
        goto label_1afbe0;
    }
    ctx->pc = 0x1AFBD8u;
    {
        const bool branch_taken_0x1afbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFBD8u;
            // 0x1afbdc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afbd8) {
            ctx->pc = 0x1AFBF0u;
            goto label_1afbf0;
        }
    }
    ctx->pc = 0x1AFBE0u;
label_1afbe0:
    // 0x1afbe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afbe4:
    // 0x1afbe4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1afbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1afbe8:
    // 0x1afbe8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1afbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1afbec:
    // 0x1afbec: 0x0  nop
    ctx->pc = 0x1afbecu;
    // NOP
label_1afbf0:
    // 0x1afbf0: 0xc065d00  jal         func_197400
label_1afbf4:
    if (ctx->pc == 0x1AFBF4u) {
        ctx->pc = 0x1AFBF8u;
        goto label_1afbf8;
    }
    ctx->pc = 0x1AFBF0u;
    SET_GPR_U32(ctx, 31, 0x1AFBF8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBF8u; }
        if (ctx->pc != 0x1AFBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFBF8u; }
        if (ctx->pc != 0x1AFBF8u) { return; }
    }
    ctx->pc = 0x1AFBF8u;
label_1afbf8:
    // 0x1afbf8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1afbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afbfc:
    // 0x1afbfc: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_1afc00:
    if (ctx->pc == 0x1AFC00u) {
        ctx->pc = 0x1AFC04u;
        goto label_1afc04;
    }
    ctx->pc = 0x1AFBFCu;
    {
        const bool branch_taken_0x1afbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afbfc) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFC04u;
label_1afc04:
    // 0x1afc04: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afc08:
    // 0x1afc08: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1afc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1afc0c:
    // 0x1afc0c: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
label_1afc10:
    if (ctx->pc == 0x1AFC10u) {
        ctx->pc = 0x1AFC14u;
        goto label_1afc14;
    }
    ctx->pc = 0x1AFC0Cu;
    {
        const bool branch_taken_0x1afc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afc0c) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFC14u;
label_1afc14:
    // 0x1afc14: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afc14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afc18:
    // 0x1afc18: 0xc06560c  jal         func_195830
label_1afc1c:
    if (ctx->pc == 0x1AFC1Cu) {
        ctx->pc = 0x1AFC1Cu;
            // 0x1afc1c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFC20u;
        goto label_1afc20;
    }
    ctx->pc = 0x1AFC18u;
    SET_GPR_U32(ctx, 31, 0x1AFC20u);
    ctx->pc = 0x1AFC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC18u;
            // 0x1afc1c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC20u; }
        if (ctx->pc != 0x1AFC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC20u; }
        if (ctx->pc != 0x1AFC20u) { return; }
    }
    ctx->pc = 0x1AFC20u;
label_1afc20:
    // 0x1afc20: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1afc24:
    if (ctx->pc == 0x1AFC24u) {
        ctx->pc = 0x1AFC28u;
        goto label_1afc28;
    }
    ctx->pc = 0x1AFC20u;
    {
        const bool branch_taken_0x1afc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afc20) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFC28u;
label_1afc28:
    // 0x1afc28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1afc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afc2c:
    // 0x1afc2c: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
label_1afc30:
    if (ctx->pc == 0x1AFC30u) {
        ctx->pc = 0x1AFC34u;
        goto label_1afc34;
    }
    ctx->pc = 0x1AFC2Cu;
    {
        const bool branch_taken_0x1afc2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afc2c) {
            ctx->pc = 0x1AFD20u;
            goto label_1afd20;
        }
    }
    ctx->pc = 0x1AFC34u;
label_1afc34:
    // 0x1afc34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1afc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afc38:
    // 0x1afc38: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1afc3c:
    if (ctx->pc == 0x1AFC3Cu) {
        ctx->pc = 0x1AFC40u;
        goto label_1afc40;
    }
    ctx->pc = 0x1AFC38u;
    {
        const bool branch_taken_0x1afc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afc38) {
            ctx->pc = 0x1AFCB8u;
            goto label_1afcb8;
        }
    }
    ctx->pc = 0x1AFC40u;
label_1afc40:
    // 0x1afc40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afc40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afc44:
    // 0x1afc44: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afc48:
    // 0x1afc48: 0xc0655b0  jal         func_1956C0
label_1afc4c:
    if (ctx->pc == 0x1AFC4Cu) {
        ctx->pc = 0x1AFC4Cu;
            // 0x1afc4c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFC50u;
        goto label_1afc50;
    }
    ctx->pc = 0x1AFC48u;
    SET_GPR_U32(ctx, 31, 0x1AFC50u);
    ctx->pc = 0x1AFC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC48u;
            // 0x1afc4c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC50u; }
        if (ctx->pc != 0x1AFC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC50u; }
        if (ctx->pc != 0x1AFC50u) { return; }
    }
    ctx->pc = 0x1AFC50u;
label_1afc50:
    // 0x1afc50: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1afc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1afc54:
    // 0x1afc54: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afc54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afc58:
    // 0x1afc58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afc58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afc5c:
    // 0x1afc5c: 0xc0655b0  jal         func_1956C0
label_1afc60:
    if (ctx->pc == 0x1AFC60u) {
        ctx->pc = 0x1AFC60u;
            // 0x1afc60: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFC64u;
        goto label_1afc64;
    }
    ctx->pc = 0x1AFC5Cu;
    SET_GPR_U32(ctx, 31, 0x1AFC64u);
    ctx->pc = 0x1AFC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC5Cu;
            // 0x1afc60: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC64u; }
        if (ctx->pc != 0x1AFC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC64u; }
        if (ctx->pc != 0x1AFC64u) { return; }
    }
    ctx->pc = 0x1AFC64u;
label_1afc64:
    // 0x1afc64: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1afc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1afc68:
    // 0x1afc68: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afc68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afc6c:
    // 0x1afc6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afc6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afc70:
    // 0x1afc70: 0xc0655b0  jal         func_1956C0
label_1afc74:
    if (ctx->pc == 0x1AFC74u) {
        ctx->pc = 0x1AFC74u;
            // 0x1afc74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFC78u;
        goto label_1afc78;
    }
    ctx->pc = 0x1AFC70u;
    SET_GPR_U32(ctx, 31, 0x1AFC78u);
    ctx->pc = 0x1AFC74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC70u;
            // 0x1afc74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC78u; }
        if (ctx->pc != 0x1AFC78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC78u; }
        if (ctx->pc != 0x1AFC78u) { return; }
    }
    ctx->pc = 0x1AFC78u;
label_1afc78:
    // 0x1afc78: 0xc065d00  jal         func_197400
label_1afc7c:
    if (ctx->pc == 0x1AFC7Cu) {
        ctx->pc = 0x1AFC80u;
        goto label_1afc80;
    }
    ctx->pc = 0x1AFC78u;
    SET_GPR_U32(ctx, 31, 0x1AFC80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC80u; }
        if (ctx->pc != 0x1AFC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFC80u; }
        if (ctx->pc != 0x1AFC80u) { return; }
    }
    ctx->pc = 0x1AFC80u;
label_1afc80:
    // 0x1afc80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1afc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1afc84:
    // 0x1afc84: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_1afc88:
    if (ctx->pc == 0x1AFC88u) {
        ctx->pc = 0x1AFC8Cu;
        goto label_1afc8c;
    }
    ctx->pc = 0x1AFC84u;
    {
        const bool branch_taken_0x1afc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1afc84) {
            ctx->pc = 0x1AFCB8u;
            goto label_1afcb8;
        }
    }
    ctx->pc = 0x1AFC8Cu;
label_1afc8c:
    // 0x1afc8c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1afc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_1afc90:
    // 0x1afc90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afc94:
    // 0x1afc94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afc94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afc98:
    // 0x1afc98: 0xc0655b0  jal         func_1956C0
label_1afc9c:
    if (ctx->pc == 0x1AFC9Cu) {
        ctx->pc = 0x1AFC9Cu;
            // 0x1afc9c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFCA0u;
        goto label_1afca0;
    }
    ctx->pc = 0x1AFC98u;
    SET_GPR_U32(ctx, 31, 0x1AFCA0u);
    ctx->pc = 0x1AFC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFC98u;
            // 0x1afc9c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCA0u; }
        if (ctx->pc != 0x1AFCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCA0u; }
        if (ctx->pc != 0x1AFCA0u) { return; }
    }
    ctx->pc = 0x1AFCA0u;
label_1afca0:
    // 0x1afca0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1afca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
label_1afca4:
    // 0x1afca4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afca8:
    // 0x1afca8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1afca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1afcac:
    // 0x1afcac: 0xc0655b0  jal         func_1956C0
label_1afcb0:
    if (ctx->pc == 0x1AFCB0u) {
        ctx->pc = 0x1AFCB0u;
            // 0x1afcb0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFCB4u;
        goto label_1afcb4;
    }
    ctx->pc = 0x1AFCACu;
    SET_GPR_U32(ctx, 31, 0x1AFCB4u);
    ctx->pc = 0x1AFCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCACu;
            // 0x1afcb0: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCB4u; }
        if (ctx->pc != 0x1AFCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCB4u; }
        if (ctx->pc != 0x1AFCB4u) { return; }
    }
    ctx->pc = 0x1AFCB4u;
label_1afcb4:
    // 0x1afcb4: 0x0  nop
    ctx->pc = 0x1afcb4u;
    // NOP
label_1afcb8:
    // 0x1afcb8: 0xc065d00  jal         func_197400
label_1afcbc:
    if (ctx->pc == 0x1AFCBCu) {
        ctx->pc = 0x1AFCC0u;
        goto label_1afcc0;
    }
    ctx->pc = 0x1AFCB8u;
    SET_GPR_U32(ctx, 31, 0x1AFCC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCC0u; }
        if (ctx->pc != 0x1AFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCC0u; }
        if (ctx->pc != 0x1AFCC0u) { return; }
    }
    ctx->pc = 0x1AFCC0u;
label_1afcc0:
    // 0x1afcc0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1afcc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1afcc4:
    // 0x1afcc4: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1afcc8:
    if (ctx->pc == 0x1AFCC8u) {
        ctx->pc = 0x1AFCCCu;
        goto label_1afccc;
    }
    ctx->pc = 0x1AFCC4u;
    {
        const bool branch_taken_0x1afcc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afcc4) {
            ctx->pc = 0x1AFCE8u;
            goto label_1afce8;
        }
    }
    ctx->pc = 0x1AFCCCu;
label_1afccc:
    // 0x1afccc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1afcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afcd0:
    // 0x1afcd0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1afcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1afcd4:
    // 0x1afcd4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1afcd8:
    if (ctx->pc == 0x1AFCD8u) {
        ctx->pc = 0x1AFCDCu;
        goto label_1afcdc;
    }
    ctx->pc = 0x1AFCD4u;
    {
        const bool branch_taken_0x1afcd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1afcd4) {
            ctx->pc = 0x1AFCE8u;
            goto label_1afce8;
        }
    }
    ctx->pc = 0x1AFCDCu;
label_1afcdc:
    // 0x1afcdc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1afcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afce0:
    // 0x1afce0: 0xc06560c  jal         func_195830
label_1afce4:
    if (ctx->pc == 0x1AFCE4u) {
        ctx->pc = 0x1AFCE4u;
            // 0x1afce4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1AFCE8u;
        goto label_1afce8;
    }
    ctx->pc = 0x1AFCE0u;
    SET_GPR_U32(ctx, 31, 0x1AFCE8u);
    ctx->pc = 0x1AFCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFCE0u;
            // 0x1afce4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCE8u; }
        if (ctx->pc != 0x1AFCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFCE8u; }
        if (ctx->pc != 0x1AFCE8u) { return; }
    }
    ctx->pc = 0x1AFCE8u;
label_1afce8:
    // 0x1afce8: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1afce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
label_1afcec:
    // 0x1afcec: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1afcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1afcf0:
    // 0x1afcf0: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x1afcf0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_1afcf4:
    // 0x1afcf4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1afcf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afcf8:
    // 0x1afcf8: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1afcfc:
    // 0x1afcfc: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1afcfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1afd00:
    // 0x1afd00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afd04:
    // 0x1afd04: 0x0  nop
    ctx->pc = 0x1afd04u;
    // NOP
label_1afd08:
    // 0x1afd08: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1afd08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1afd0c:
    // 0x1afd0c: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1afd0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1afd10:
    // 0x1afd10: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1afd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afd14:
    // 0x1afd14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1afd14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1afd18:
    // 0x1afd18: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1afd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1afd1c:
    // 0x1afd1c: 0x0  nop
    ctx->pc = 0x1afd1cu;
    // NOP
label_1afd20:
    // 0x1afd20: 0xc04b788  jal         func_12DE20
label_1afd24:
    if (ctx->pc == 0x1AFD24u) {
        ctx->pc = 0x1AFD24u;
            // 0x1afd24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AFD28u;
        goto label_1afd28;
    }
    ctx->pc = 0x1AFD20u;
    SET_GPR_U32(ctx, 31, 0x1AFD28u);
    ctx->pc = 0x1AFD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD20u;
            // 0x1afd24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD28u; }
        if (ctx->pc != 0x1AFD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD28u; }
        if (ctx->pc != 0x1AFD28u) { return; }
    }
    ctx->pc = 0x1AFD28u;
label_1afd28:
    // 0x1afd28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1afd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd2c:
    // 0x1afd2c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1afd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1afd30:
    // 0x1afd30: 0xc04b7da  jal         func_12DF68
label_1afd34:
    if (ctx->pc == 0x1AFD34u) {
        ctx->pc = 0x1AFD34u;
            // 0x1afd34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD38u;
        goto label_1afd38;
    }
    ctx->pc = 0x1AFD30u;
    SET_GPR_U32(ctx, 31, 0x1AFD38u);
    ctx->pc = 0x1AFD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD30u;
            // 0x1afd34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD38u; }
        if (ctx->pc != 0x1AFD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD38u; }
        if (ctx->pc != 0x1AFD38u) { return; }
    }
    ctx->pc = 0x1AFD38u;
label_1afd38:
    // 0x1afd38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1afd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd3c:
    // 0x1afd3c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1afd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1afd40:
    // 0x1afd40: 0xc04b804  jal         func_12E010
label_1afd44:
    if (ctx->pc == 0x1AFD44u) {
        ctx->pc = 0x1AFD44u;
            // 0x1afd44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD48u;
        goto label_1afd48;
    }
    ctx->pc = 0x1AFD40u;
    SET_GPR_U32(ctx, 31, 0x1AFD48u);
    ctx->pc = 0x1AFD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD40u;
            // 0x1afd44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD48u; }
        if (ctx->pc != 0x1AFD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD48u; }
        if (ctx->pc != 0x1AFD48u) { return; }
    }
    ctx->pc = 0x1AFD48u;
label_1afd48:
    // 0x1afd48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1afd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd4c:
    // 0x1afd4c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1afd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1afd50:
    // 0x1afd50: 0xc04b7b0  jal         func_12DEC0
label_1afd54:
    if (ctx->pc == 0x1AFD54u) {
        ctx->pc = 0x1AFD54u;
            // 0x1afd54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFD58u;
        goto label_1afd58;
    }
    ctx->pc = 0x1AFD50u;
    SET_GPR_U32(ctx, 31, 0x1AFD58u);
    ctx->pc = 0x1AFD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD50u;
            // 0x1afd54: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD58u; }
        if (ctx->pc != 0x1AFD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD58u; }
        if (ctx->pc != 0x1AFD58u) { return; }
    }
    ctx->pc = 0x1AFD58u;
label_1afd58:
    // 0x1afd58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1afd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afd5c:
    // 0x1afd5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1afd5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1afd60:
    // 0x1afd60: 0xc04b75e  jal         func_12DD78
label_1afd64:
    if (ctx->pc == 0x1AFD64u) {
        ctx->pc = 0x1AFD64u;
            // 0x1afd64: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1AFD68u;
        goto label_1afd68;
    }
    ctx->pc = 0x1AFD60u;
    SET_GPR_U32(ctx, 31, 0x1AFD68u);
    ctx->pc = 0x1AFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD60u;
            // 0x1afd64: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD68u; }
        if (ctx->pc != 0x1AFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD68u; }
        if (ctx->pc != 0x1AFD68u) { return; }
    }
    ctx->pc = 0x1AFD68u;
label_1afd68:
    // 0x1afd68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1afd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1afd6c:
    // 0x1afd6c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1afd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1afd70:
    // 0x1afd70: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1afd70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1afd74:
    // 0x1afd74: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1afd78:
    if (ctx->pc == 0x1AFD78u) {
        ctx->pc = 0x1AFD7Cu;
        goto label_1afd7c;
    }
    ctx->pc = 0x1AFD74u;
    {
        const bool branch_taken_0x1afd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd74) {
            ctx->pc = 0x1AFDC8u;
            goto label_1afdc8;
        }
    }
    ctx->pc = 0x1AFD7Cu;
label_1afd7c:
    // 0x1afd7c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1afd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1afd80:
    // 0x1afd80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1afd84:
    if (ctx->pc == 0x1AFD84u) {
        ctx->pc = 0x1AFD88u;
        goto label_1afd88;
    }
    ctx->pc = 0x1AFD80u;
    {
        const bool branch_taken_0x1afd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd80) {
            ctx->pc = 0x1AFD98u;
            goto label_1afd98;
        }
    }
    ctx->pc = 0x1AFD88u;
label_1afd88:
    // 0x1afd88: 0xc0604f0  jal         func_1813C0
label_1afd8c:
    if (ctx->pc == 0x1AFD8Cu) {
        ctx->pc = 0x1AFD8Cu;
            // 0x1afd8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AFD90u;
        goto label_1afd90;
    }
    ctx->pc = 0x1AFD88u;
    SET_GPR_U32(ctx, 31, 0x1AFD90u);
    ctx->pc = 0x1AFD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD88u;
            // 0x1afd8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD90u; }
        if (ctx->pc != 0x1AFD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFD90u; }
        if (ctx->pc != 0x1AFD90u) { return; }
    }
    ctx->pc = 0x1AFD90u;
label_1afd90:
    // 0x1afd90: 0x10000003  b           . + 4 + (0x3 << 2)
label_1afd94:
    if (ctx->pc == 0x1AFD94u) {
        ctx->pc = 0x1AFD98u;
        goto label_1afd98;
    }
    ctx->pc = 0x1AFD90u;
    {
        const bool branch_taken_0x1afd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afd90) {
            ctx->pc = 0x1AFDA0u;
            goto label_1afda0;
        }
    }
    ctx->pc = 0x1AFD98u;
label_1afd98:
    // 0x1afd98: 0xc0604dc  jal         func_181370
label_1afd9c:
    if (ctx->pc == 0x1AFD9Cu) {
        ctx->pc = 0x1AFD9Cu;
            // 0x1afd9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AFDA0u;
        goto label_1afda0;
    }
    ctx->pc = 0x1AFD98u;
    SET_GPR_U32(ctx, 31, 0x1AFDA0u);
    ctx->pc = 0x1AFD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFD98u;
            // 0x1afd9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA0u; }
        if (ctx->pc != 0x1AFDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDA0u; }
        if (ctx->pc != 0x1AFDA0u) { return; }
    }
    ctx->pc = 0x1AFDA0u;
label_1afda0:
    // 0x1afda0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1afda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1afda4:
    // 0x1afda4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1afda8:
    if (ctx->pc == 0x1AFDA8u) {
        ctx->pc = 0x1AFDACu;
        goto label_1afdac;
    }
    ctx->pc = 0x1AFDA4u;
    {
        const bool branch_taken_0x1afda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afda4) {
            ctx->pc = 0x1AFDB8u;
            goto label_1afdb8;
        }
    }
    ctx->pc = 0x1AFDACu;
label_1afdac:
    // 0x1afdac: 0x1000000a  b           . + 4 + (0xA << 2)
label_1afdb0:
    if (ctx->pc == 0x1AFDB0u) {
        ctx->pc = 0x1AFDB0u;
            // 0x1afdb0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1AFDB4u;
        goto label_1afdb4;
    }
    ctx->pc = 0x1AFDACu;
    {
        const bool branch_taken_0x1afdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDACu;
            // 0x1afdb0: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdac) {
            ctx->pc = 0x1AFDD8u;
            goto label_1afdd8;
        }
    }
    ctx->pc = 0x1AFDB4u;
label_1afdb4:
    // 0x1afdb4: 0x0  nop
    ctx->pc = 0x1afdb4u;
    // NOP
label_1afdb8:
    // 0x1afdb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afdbc:
    // 0x1afdbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1afdc0:
    if (ctx->pc == 0x1AFDC0u) {
        ctx->pc = 0x1AFDC0u;
            // 0x1afdc0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1AFDC4u;
        goto label_1afdc4;
    }
    ctx->pc = 0x1AFDBCu;
    {
        const bool branch_taken_0x1afdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDBCu;
            // 0x1afdc0: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afdbc) {
            ctx->pc = 0x1AFDD8u;
            goto label_1afdd8;
        }
    }
    ctx->pc = 0x1AFDC4u;
label_1afdc4:
    // 0x1afdc4: 0x0  nop
    ctx->pc = 0x1afdc4u;
    // NOP
label_1afdc8:
    // 0x1afdc8: 0xc0604dc  jal         func_181370
label_1afdcc:
    if (ctx->pc == 0x1AFDCCu) {
        ctx->pc = 0x1AFDCCu;
            // 0x1afdcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1AFDD0u;
        goto label_1afdd0;
    }
    ctx->pc = 0x1AFDC8u;
    SET_GPR_U32(ctx, 31, 0x1AFDD0u);
    ctx->pc = 0x1AFDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFDC8u;
            // 0x1afdcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDD0u; }
        if (ctx->pc != 0x1AFDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFDD0u; }
        if (ctx->pc != 0x1AFDD0u) { return; }
    }
    ctx->pc = 0x1AFDD0u;
label_1afdd0:
    // 0x1afdd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afdd4:
    // 0x1afdd4: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1afdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1afdd8:
    // 0x1afdd8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1afdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1afddc:
    // 0x1afddc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1afddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1afde0:
    // 0x1afde0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afde0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afde4:
    // 0x1afde4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1afde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1afde8:
    // 0x1afde8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1afde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1afdec:
    // 0x1afdec: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1afdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1afdf0:
    // 0x1afdf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1afdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afdf4:
    // 0x1afdf4: 0x0  nop
    ctx->pc = 0x1afdf4u;
    // NOP
label_1afdf8:
    // 0x1afdf8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1afdf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1afdfc:
    // 0x1afdfc: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1afdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1afe00:
    // 0x1afe00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1afe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afe04:
    // 0x1afe04: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1afe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1afe08:
    // 0x1afe08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1afe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afe0c:
    // 0x1afe0c: 0x0  nop
    ctx->pc = 0x1afe0cu;
    // NOP
label_1afe10:
    // 0x1afe10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1afe10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1afe14:
    // 0x1afe14: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1afe14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1afe18:
    // 0x1afe18: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1afe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1afe1c:
    // 0x1afe1c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1afe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1afe20:
    // 0x1afe20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1afe20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afe24:
    // 0x1afe24: 0x0  nop
    ctx->pc = 0x1afe24u;
    // NOP
label_1afe28:
    // 0x1afe28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1afe28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1afe2c:
    // 0x1afe2c: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1afe2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1afe30:
    // 0x1afe30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1afe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1afe34:
    // 0x1afe34: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1afe38:
    // 0x1afe38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1afe38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1afe3c:
    // 0x1afe3c: 0x0  nop
    ctx->pc = 0x1afe3cu;
    // NOP
label_1afe40:
    // 0x1afe40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1afe40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1afe44:
    // 0x1afe44: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1afe44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1afe48:
    // 0x1afe48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1afe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1afe4c:
    // 0x1afe4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1afe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1afe50:
    // 0x1afe50: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1afe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1afe54:
    // 0x1afe54: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1afe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1afe58:
    // 0x1afe58: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1afe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afe5c:
    // 0x1afe5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1afe5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1afe60:
    // 0x1afe60: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1afe64:
    if (ctx->pc == 0x1AFE64u) {
        ctx->pc = 0x1AFE64u;
            // 0x1afe64: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1AFE68u;
        goto label_1afe68;
    }
    ctx->pc = 0x1AFE60u;
    {
        const bool branch_taken_0x1afe60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AFE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE60u;
            // 0x1afe64: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe60) {
            ctx->pc = 0x1AFEB0u;
            goto label_1afeb0;
        }
    }
    ctx->pc = 0x1AFE68u;
label_1afe68:
    // 0x1afe68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afe68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afe6c:
    // 0x1afe6c: 0x0  nop
    ctx->pc = 0x1afe6cu;
    // NOP
label_1afe70:
    // 0x1afe70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1afe70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1afe74:
    // 0x1afe74: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1afe78:
    if (ctx->pc == 0x1AFE78u) {
        ctx->pc = 0x1AFE7Cu;
        goto label_1afe7c;
    }
    ctx->pc = 0x1AFE74u;
    {
        const bool branch_taken_0x1afe74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1afe74) {
            ctx->pc = 0x1AFEB0u;
            goto label_1afeb0;
        }
    }
    ctx->pc = 0x1AFE7Cu;
label_1afe7c:
    // 0x1afe7c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1afe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afe80:
    // 0x1afe80: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1afe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1afe84:
    // 0x1afe84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afe84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afe88:
    // 0x1afe88: 0x0  nop
    ctx->pc = 0x1afe88u;
    // NOP
label_1afe8c:
    // 0x1afe8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1afe8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1afe90:
    // 0x1afe90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1afe94:
    if (ctx->pc == 0x1AFE94u) {
        ctx->pc = 0x1AFE94u;
            // 0x1afe94: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1AFE98u;
        goto label_1afe98;
    }
    ctx->pc = 0x1AFE90u;
    {
        const bool branch_taken_0x1afe90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AFE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFE90u;
            // 0x1afe94: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afe90) {
            ctx->pc = 0x1AFEB0u;
            goto label_1afeb0;
        }
    }
    ctx->pc = 0x1AFE98u;
label_1afe98:
    // 0x1afe98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1afe98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1afe9c:
    // 0x1afe9c: 0x0  nop
    ctx->pc = 0x1afe9cu;
    // NOP
label_1afea0:
    // 0x1afea0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1afea0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1afea4:
    // 0x1afea4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1afea8:
    if (ctx->pc == 0x1AFEA8u) {
        ctx->pc = 0x1AFEACu;
        goto label_1afeac;
    }
    ctx->pc = 0x1AFEA4u;
    {
        const bool branch_taken_0x1afea4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1afea4) {
            ctx->pc = 0x1AFEC8u;
            goto label_1afec8;
        }
    }
    ctx->pc = 0x1AFEACu;
label_1afeac:
    // 0x1afeac: 0x0  nop
    ctx->pc = 0x1afeacu;
    // NOP
label_1afeb0:
    // 0x1afeb0: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1afeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1afeb4:
    // 0x1afeb4: 0x40f809  jalr        $v0
label_1afeb8:
    if (ctx->pc == 0x1AFEB8u) {
        ctx->pc = 0x1AFEB8u;
            // 0x1afeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEBCu;
        goto label_1afebc;
    }
    ctx->pc = 0x1AFEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AFEBCu);
        ctx->pc = 0x1AFEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEB4u;
            // 0x1afeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF530u: goto label_1af530;
            case 0x1AF534u: goto label_1af534;
            case 0x1AF538u: goto label_1af538;
            case 0x1AF53Cu: goto label_1af53c;
            case 0x1AF540u: goto label_1af540;
            case 0x1AF544u: goto label_1af544;
            case 0x1AF548u: goto label_1af548;
            case 0x1AF54Cu: goto label_1af54c;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF558u: goto label_1af558;
            case 0x1AF55Cu: goto label_1af55c;
            case 0x1AF560u: goto label_1af560;
            case 0x1AF564u: goto label_1af564;
            case 0x1AF568u: goto label_1af568;
            case 0x1AF56Cu: goto label_1af56c;
            case 0x1AF570u: goto label_1af570;
            case 0x1AF574u: goto label_1af574;
            case 0x1AF578u: goto label_1af578;
            case 0x1AF57Cu: goto label_1af57c;
            case 0x1AF580u: goto label_1af580;
            case 0x1AF584u: goto label_1af584;
            case 0x1AF588u: goto label_1af588;
            case 0x1AF58Cu: goto label_1af58c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF594u: goto label_1af594;
            case 0x1AF598u: goto label_1af598;
            case 0x1AF59Cu: goto label_1af59c;
            case 0x1AF5A0u: goto label_1af5a0;
            case 0x1AF5A4u: goto label_1af5a4;
            case 0x1AF5A8u: goto label_1af5a8;
            case 0x1AF5ACu: goto label_1af5ac;
            case 0x1AF5B0u: goto label_1af5b0;
            case 0x1AF5B4u: goto label_1af5b4;
            case 0x1AF5B8u: goto label_1af5b8;
            case 0x1AF5BCu: goto label_1af5bc;
            case 0x1AF5C0u: goto label_1af5c0;
            case 0x1AF5C4u: goto label_1af5c4;
            case 0x1AF5C8u: goto label_1af5c8;
            case 0x1AF5CCu: goto label_1af5cc;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF5D4u: goto label_1af5d4;
            case 0x1AF5D8u: goto label_1af5d8;
            case 0x1AF5DCu: goto label_1af5dc;
            case 0x1AF5E0u: goto label_1af5e0;
            case 0x1AF5E4u: goto label_1af5e4;
            case 0x1AF5E8u: goto label_1af5e8;
            case 0x1AF5ECu: goto label_1af5ec;
            case 0x1AF5F0u: goto label_1af5f0;
            case 0x1AF5F4u: goto label_1af5f4;
            case 0x1AF5F8u: goto label_1af5f8;
            case 0x1AF5FCu: goto label_1af5fc;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF604u: goto label_1af604;
            case 0x1AF608u: goto label_1af608;
            case 0x1AF60Cu: goto label_1af60c;
            case 0x1AF610u: goto label_1af610;
            case 0x1AF614u: goto label_1af614;
            case 0x1AF618u: goto label_1af618;
            case 0x1AF61Cu: goto label_1af61c;
            case 0x1AF620u: goto label_1af620;
            case 0x1AF624u: goto label_1af624;
            case 0x1AF628u: goto label_1af628;
            case 0x1AF62Cu: goto label_1af62c;
            case 0x1AF630u: goto label_1af630;
            case 0x1AF634u: goto label_1af634;
            case 0x1AF638u: goto label_1af638;
            case 0x1AF63Cu: goto label_1af63c;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF644u: goto label_1af644;
            case 0x1AF648u: goto label_1af648;
            case 0x1AF64Cu: goto label_1af64c;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF654u: goto label_1af654;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF65Cu: goto label_1af65c;
            case 0x1AF660u: goto label_1af660;
            case 0x1AF664u: goto label_1af664;
            case 0x1AF668u: goto label_1af668;
            case 0x1AF66Cu: goto label_1af66c;
            case 0x1AF670u: goto label_1af670;
            case 0x1AF674u: goto label_1af674;
            case 0x1AF678u: goto label_1af678;
            case 0x1AF67Cu: goto label_1af67c;
            case 0x1AF680u: goto label_1af680;
            case 0x1AF684u: goto label_1af684;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            case 0x1AF690u: goto label_1af690;
            case 0x1AF694u: goto label_1af694;
            case 0x1AF698u: goto label_1af698;
            case 0x1AF69Cu: goto label_1af69c;
            case 0x1AF6A0u: goto label_1af6a0;
            case 0x1AF6A4u: goto label_1af6a4;
            case 0x1AF6A8u: goto label_1af6a8;
            case 0x1AF6ACu: goto label_1af6ac;
            case 0x1AF6B0u: goto label_1af6b0;
            case 0x1AF6B4u: goto label_1af6b4;
            case 0x1AF6B8u: goto label_1af6b8;
            case 0x1AF6BCu: goto label_1af6bc;
            case 0x1AF6C0u: goto label_1af6c0;
            case 0x1AF6C4u: goto label_1af6c4;
            case 0x1AF6C8u: goto label_1af6c8;
            case 0x1AF6CCu: goto label_1af6cc;
            case 0x1AF6D0u: goto label_1af6d0;
            case 0x1AF6D4u: goto label_1af6d4;
            case 0x1AF6D8u: goto label_1af6d8;
            case 0x1AF6DCu: goto label_1af6dc;
            case 0x1AF6E0u: goto label_1af6e0;
            case 0x1AF6E4u: goto label_1af6e4;
            case 0x1AF6E8u: goto label_1af6e8;
            case 0x1AF6ECu: goto label_1af6ec;
            case 0x1AF6F0u: goto label_1af6f0;
            case 0x1AF6F4u: goto label_1af6f4;
            case 0x1AF6F8u: goto label_1af6f8;
            case 0x1AF6FCu: goto label_1af6fc;
            case 0x1AF700u: goto label_1af700;
            case 0x1AF704u: goto label_1af704;
            case 0x1AF708u: goto label_1af708;
            case 0x1AF70Cu: goto label_1af70c;
            case 0x1AF710u: goto label_1af710;
            case 0x1AF714u: goto label_1af714;
            case 0x1AF718u: goto label_1af718;
            case 0x1AF71Cu: goto label_1af71c;
            case 0x1AF720u: goto label_1af720;
            case 0x1AF724u: goto label_1af724;
            case 0x1AF728u: goto label_1af728;
            case 0x1AF72Cu: goto label_1af72c;
            case 0x1AF730u: goto label_1af730;
            case 0x1AF734u: goto label_1af734;
            case 0x1AF738u: goto label_1af738;
            case 0x1AF73Cu: goto label_1af73c;
            case 0x1AF740u: goto label_1af740;
            case 0x1AF744u: goto label_1af744;
            case 0x1AF748u: goto label_1af748;
            case 0x1AF74Cu: goto label_1af74c;
            case 0x1AF750u: goto label_1af750;
            case 0x1AF754u: goto label_1af754;
            case 0x1AF758u: goto label_1af758;
            case 0x1AF75Cu: goto label_1af75c;
            case 0x1AF760u: goto label_1af760;
            case 0x1AF764u: goto label_1af764;
            case 0x1AF768u: goto label_1af768;
            case 0x1AF76Cu: goto label_1af76c;
            case 0x1AF770u: goto label_1af770;
            case 0x1AF774u: goto label_1af774;
            case 0x1AF778u: goto label_1af778;
            case 0x1AF77Cu: goto label_1af77c;
            case 0x1AF780u: goto label_1af780;
            case 0x1AF784u: goto label_1af784;
            case 0x1AF788u: goto label_1af788;
            case 0x1AF78Cu: goto label_1af78c;
            case 0x1AF790u: goto label_1af790;
            case 0x1AF794u: goto label_1af794;
            case 0x1AF798u: goto label_1af798;
            case 0x1AF79Cu: goto label_1af79c;
            case 0x1AF7A0u: goto label_1af7a0;
            case 0x1AF7A4u: goto label_1af7a4;
            case 0x1AF7A8u: goto label_1af7a8;
            case 0x1AF7ACu: goto label_1af7ac;
            case 0x1AF7B0u: goto label_1af7b0;
            case 0x1AF7B4u: goto label_1af7b4;
            case 0x1AF7B8u: goto label_1af7b8;
            case 0x1AF7BCu: goto label_1af7bc;
            case 0x1AF7C0u: goto label_1af7c0;
            case 0x1AF7C4u: goto label_1af7c4;
            case 0x1AF7C8u: goto label_1af7c8;
            case 0x1AF7CCu: goto label_1af7cc;
            case 0x1AF7D0u: goto label_1af7d0;
            case 0x1AF7D4u: goto label_1af7d4;
            case 0x1AF7D8u: goto label_1af7d8;
            case 0x1AF7DCu: goto label_1af7dc;
            case 0x1AF7E0u: goto label_1af7e0;
            case 0x1AF7E4u: goto label_1af7e4;
            case 0x1AF7E8u: goto label_1af7e8;
            case 0x1AF7ECu: goto label_1af7ec;
            case 0x1AF7F0u: goto label_1af7f0;
            case 0x1AF7F4u: goto label_1af7f4;
            case 0x1AF7F8u: goto label_1af7f8;
            case 0x1AF7FCu: goto label_1af7fc;
            case 0x1AF800u: goto label_1af800;
            case 0x1AF804u: goto label_1af804;
            case 0x1AF808u: goto label_1af808;
            case 0x1AF80Cu: goto label_1af80c;
            case 0x1AF810u: goto label_1af810;
            case 0x1AF814u: goto label_1af814;
            case 0x1AF818u: goto label_1af818;
            case 0x1AF81Cu: goto label_1af81c;
            case 0x1AF820u: goto label_1af820;
            case 0x1AF824u: goto label_1af824;
            case 0x1AF828u: goto label_1af828;
            case 0x1AF82Cu: goto label_1af82c;
            case 0x1AF830u: goto label_1af830;
            case 0x1AF834u: goto label_1af834;
            case 0x1AF838u: goto label_1af838;
            case 0x1AF83Cu: goto label_1af83c;
            case 0x1AF840u: goto label_1af840;
            case 0x1AF844u: goto label_1af844;
            case 0x1AF848u: goto label_1af848;
            case 0x1AF84Cu: goto label_1af84c;
            case 0x1AF850u: goto label_1af850;
            case 0x1AF854u: goto label_1af854;
            case 0x1AF858u: goto label_1af858;
            case 0x1AF85Cu: goto label_1af85c;
            case 0x1AF860u: goto label_1af860;
            case 0x1AF864u: goto label_1af864;
            case 0x1AF868u: goto label_1af868;
            case 0x1AF86Cu: goto label_1af86c;
            case 0x1AF870u: goto label_1af870;
            case 0x1AF874u: goto label_1af874;
            case 0x1AF878u: goto label_1af878;
            case 0x1AF87Cu: goto label_1af87c;
            case 0x1AF880u: goto label_1af880;
            case 0x1AF884u: goto label_1af884;
            case 0x1AF888u: goto label_1af888;
            case 0x1AF88Cu: goto label_1af88c;
            case 0x1AF890u: goto label_1af890;
            case 0x1AF894u: goto label_1af894;
            case 0x1AF898u: goto label_1af898;
            case 0x1AF89Cu: goto label_1af89c;
            case 0x1AF8A0u: goto label_1af8a0;
            case 0x1AF8A4u: goto label_1af8a4;
            case 0x1AF8A8u: goto label_1af8a8;
            case 0x1AF8ACu: goto label_1af8ac;
            case 0x1AF8B0u: goto label_1af8b0;
            case 0x1AF8B4u: goto label_1af8b4;
            case 0x1AF8B8u: goto label_1af8b8;
            case 0x1AF8BCu: goto label_1af8bc;
            case 0x1AF8C0u: goto label_1af8c0;
            case 0x1AF8C4u: goto label_1af8c4;
            case 0x1AF8C8u: goto label_1af8c8;
            case 0x1AF8CCu: goto label_1af8cc;
            case 0x1AF8D0u: goto label_1af8d0;
            case 0x1AF8D4u: goto label_1af8d4;
            case 0x1AF8D8u: goto label_1af8d8;
            case 0x1AF8DCu: goto label_1af8dc;
            case 0x1AF8E0u: goto label_1af8e0;
            case 0x1AF8E4u: goto label_1af8e4;
            case 0x1AF8E8u: goto label_1af8e8;
            case 0x1AF8ECu: goto label_1af8ec;
            case 0x1AF8F0u: goto label_1af8f0;
            case 0x1AF8F4u: goto label_1af8f4;
            case 0x1AF8F8u: goto label_1af8f8;
            case 0x1AF8FCu: goto label_1af8fc;
            case 0x1AF900u: goto label_1af900;
            case 0x1AF904u: goto label_1af904;
            case 0x1AF908u: goto label_1af908;
            case 0x1AF90Cu: goto label_1af90c;
            case 0x1AF910u: goto label_1af910;
            case 0x1AF914u: goto label_1af914;
            case 0x1AF918u: goto label_1af918;
            case 0x1AF91Cu: goto label_1af91c;
            case 0x1AF920u: goto label_1af920;
            case 0x1AF924u: goto label_1af924;
            case 0x1AF928u: goto label_1af928;
            case 0x1AF92Cu: goto label_1af92c;
            case 0x1AF930u: goto label_1af930;
            case 0x1AF934u: goto label_1af934;
            case 0x1AF938u: goto label_1af938;
            case 0x1AF93Cu: goto label_1af93c;
            case 0x1AF940u: goto label_1af940;
            case 0x1AF944u: goto label_1af944;
            case 0x1AF948u: goto label_1af948;
            case 0x1AF94Cu: goto label_1af94c;
            case 0x1AF950u: goto label_1af950;
            case 0x1AF954u: goto label_1af954;
            case 0x1AF958u: goto label_1af958;
            case 0x1AF95Cu: goto label_1af95c;
            case 0x1AF960u: goto label_1af960;
            case 0x1AF964u: goto label_1af964;
            case 0x1AF968u: goto label_1af968;
            case 0x1AF96Cu: goto label_1af96c;
            case 0x1AF970u: goto label_1af970;
            case 0x1AF974u: goto label_1af974;
            case 0x1AF978u: goto label_1af978;
            case 0x1AF97Cu: goto label_1af97c;
            case 0x1AF980u: goto label_1af980;
            case 0x1AF984u: goto label_1af984;
            case 0x1AF988u: goto label_1af988;
            case 0x1AF98Cu: goto label_1af98c;
            case 0x1AF990u: goto label_1af990;
            case 0x1AF994u: goto label_1af994;
            case 0x1AF998u: goto label_1af998;
            case 0x1AF99Cu: goto label_1af99c;
            case 0x1AF9A0u: goto label_1af9a0;
            case 0x1AF9A4u: goto label_1af9a4;
            case 0x1AF9A8u: goto label_1af9a8;
            case 0x1AF9ACu: goto label_1af9ac;
            case 0x1AF9B0u: goto label_1af9b0;
            case 0x1AF9B4u: goto label_1af9b4;
            case 0x1AF9B8u: goto label_1af9b8;
            case 0x1AF9BCu: goto label_1af9bc;
            case 0x1AF9C0u: goto label_1af9c0;
            case 0x1AF9C4u: goto label_1af9c4;
            case 0x1AF9C8u: goto label_1af9c8;
            case 0x1AF9CCu: goto label_1af9cc;
            case 0x1AF9D0u: goto label_1af9d0;
            case 0x1AF9D4u: goto label_1af9d4;
            case 0x1AF9D8u: goto label_1af9d8;
            case 0x1AF9DCu: goto label_1af9dc;
            case 0x1AF9E0u: goto label_1af9e0;
            case 0x1AF9E4u: goto label_1af9e4;
            case 0x1AF9E8u: goto label_1af9e8;
            case 0x1AF9ECu: goto label_1af9ec;
            case 0x1AF9F0u: goto label_1af9f0;
            case 0x1AF9F4u: goto label_1af9f4;
            case 0x1AF9F8u: goto label_1af9f8;
            case 0x1AF9FCu: goto label_1af9fc;
            case 0x1AFA00u: goto label_1afa00;
            case 0x1AFA04u: goto label_1afa04;
            case 0x1AFA08u: goto label_1afa08;
            case 0x1AFA0Cu: goto label_1afa0c;
            case 0x1AFA10u: goto label_1afa10;
            case 0x1AFA14u: goto label_1afa14;
            case 0x1AFA18u: goto label_1afa18;
            case 0x1AFA1Cu: goto label_1afa1c;
            case 0x1AFA20u: goto label_1afa20;
            case 0x1AFA24u: goto label_1afa24;
            case 0x1AFA28u: goto label_1afa28;
            case 0x1AFA2Cu: goto label_1afa2c;
            case 0x1AFA30u: goto label_1afa30;
            case 0x1AFA34u: goto label_1afa34;
            case 0x1AFA38u: goto label_1afa38;
            case 0x1AFA3Cu: goto label_1afa3c;
            case 0x1AFA40u: goto label_1afa40;
            case 0x1AFA44u: goto label_1afa44;
            case 0x1AFA48u: goto label_1afa48;
            case 0x1AFA4Cu: goto label_1afa4c;
            case 0x1AFA50u: goto label_1afa50;
            case 0x1AFA54u: goto label_1afa54;
            case 0x1AFA58u: goto label_1afa58;
            case 0x1AFA5Cu: goto label_1afa5c;
            case 0x1AFA60u: goto label_1afa60;
            case 0x1AFA64u: goto label_1afa64;
            case 0x1AFA68u: goto label_1afa68;
            case 0x1AFA6Cu: goto label_1afa6c;
            case 0x1AFA70u: goto label_1afa70;
            case 0x1AFA74u: goto label_1afa74;
            case 0x1AFA78u: goto label_1afa78;
            case 0x1AFA7Cu: goto label_1afa7c;
            case 0x1AFA80u: goto label_1afa80;
            case 0x1AFA84u: goto label_1afa84;
            case 0x1AFA88u: goto label_1afa88;
            case 0x1AFA8Cu: goto label_1afa8c;
            case 0x1AFA90u: goto label_1afa90;
            case 0x1AFA94u: goto label_1afa94;
            case 0x1AFA98u: goto label_1afa98;
            case 0x1AFA9Cu: goto label_1afa9c;
            case 0x1AFAA0u: goto label_1afaa0;
            case 0x1AFAA4u: goto label_1afaa4;
            case 0x1AFAA8u: goto label_1afaa8;
            case 0x1AFAACu: goto label_1afaac;
            case 0x1AFAB0u: goto label_1afab0;
            case 0x1AFAB4u: goto label_1afab4;
            case 0x1AFAB8u: goto label_1afab8;
            case 0x1AFABCu: goto label_1afabc;
            case 0x1AFAC0u: goto label_1afac0;
            case 0x1AFAC4u: goto label_1afac4;
            case 0x1AFAC8u: goto label_1afac8;
            case 0x1AFACCu: goto label_1afacc;
            case 0x1AFAD0u: goto label_1afad0;
            case 0x1AFAD4u: goto label_1afad4;
            case 0x1AFAD8u: goto label_1afad8;
            case 0x1AFADCu: goto label_1afadc;
            case 0x1AFAE0u: goto label_1afae0;
            case 0x1AFAE4u: goto label_1afae4;
            case 0x1AFAE8u: goto label_1afae8;
            case 0x1AFAECu: goto label_1afaec;
            case 0x1AFAF0u: goto label_1afaf0;
            case 0x1AFAF4u: goto label_1afaf4;
            case 0x1AFAF8u: goto label_1afaf8;
            case 0x1AFAFCu: goto label_1afafc;
            case 0x1AFB00u: goto label_1afb00;
            case 0x1AFB04u: goto label_1afb04;
            case 0x1AFB08u: goto label_1afb08;
            case 0x1AFB0Cu: goto label_1afb0c;
            case 0x1AFB10u: goto label_1afb10;
            case 0x1AFB14u: goto label_1afb14;
            case 0x1AFB18u: goto label_1afb18;
            case 0x1AFB1Cu: goto label_1afb1c;
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            case 0x1AFCE0u: goto label_1afce0;
            case 0x1AFCE4u: goto label_1afce4;
            case 0x1AFCE8u: goto label_1afce8;
            case 0x1AFCECu: goto label_1afcec;
            case 0x1AFCF0u: goto label_1afcf0;
            case 0x1AFCF4u: goto label_1afcf4;
            case 0x1AFCF8u: goto label_1afcf8;
            case 0x1AFCFCu: goto label_1afcfc;
            case 0x1AFD00u: goto label_1afd00;
            case 0x1AFD04u: goto label_1afd04;
            case 0x1AFD08u: goto label_1afd08;
            case 0x1AFD0Cu: goto label_1afd0c;
            case 0x1AFD10u: goto label_1afd10;
            case 0x1AFD14u: goto label_1afd14;
            case 0x1AFD18u: goto label_1afd18;
            case 0x1AFD1Cu: goto label_1afd1c;
            case 0x1AFD20u: goto label_1afd20;
            case 0x1AFD24u: goto label_1afd24;
            case 0x1AFD28u: goto label_1afd28;
            case 0x1AFD2Cu: goto label_1afd2c;
            case 0x1AFD30u: goto label_1afd30;
            case 0x1AFD34u: goto label_1afd34;
            case 0x1AFD38u: goto label_1afd38;
            case 0x1AFD3Cu: goto label_1afd3c;
            case 0x1AFD40u: goto label_1afd40;
            case 0x1AFD44u: goto label_1afd44;
            case 0x1AFD48u: goto label_1afd48;
            case 0x1AFD4Cu: goto label_1afd4c;
            case 0x1AFD50u: goto label_1afd50;
            case 0x1AFD54u: goto label_1afd54;
            case 0x1AFD58u: goto label_1afd58;
            case 0x1AFD5Cu: goto label_1afd5c;
            case 0x1AFD60u: goto label_1afd60;
            case 0x1AFD64u: goto label_1afd64;
            case 0x1AFD68u: goto label_1afd68;
            case 0x1AFD6Cu: goto label_1afd6c;
            case 0x1AFD70u: goto label_1afd70;
            case 0x1AFD74u: goto label_1afd74;
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFD7Cu: goto label_1afd7c;
            case 0x1AFD80u: goto label_1afd80;
            case 0x1AFD84u: goto label_1afd84;
            case 0x1AFD88u: goto label_1afd88;
            case 0x1AFD8Cu: goto label_1afd8c;
            case 0x1AFD90u: goto label_1afd90;
            case 0x1AFD94u: goto label_1afd94;
            case 0x1AFD98u: goto label_1afd98;
            case 0x1AFD9Cu: goto label_1afd9c;
            case 0x1AFDA0u: goto label_1afda0;
            case 0x1AFDA4u: goto label_1afda4;
            case 0x1AFDA8u: goto label_1afda8;
            case 0x1AFDACu: goto label_1afdac;
            case 0x1AFDB0u: goto label_1afdb0;
            case 0x1AFDB4u: goto label_1afdb4;
            case 0x1AFDB8u: goto label_1afdb8;
            case 0x1AFDBCu: goto label_1afdbc;
            case 0x1AFDC0u: goto label_1afdc0;
            case 0x1AFDC4u: goto label_1afdc4;
            case 0x1AFDC8u: goto label_1afdc8;
            case 0x1AFDCCu: goto label_1afdcc;
            case 0x1AFDD0u: goto label_1afdd0;
            case 0x1AFDD4u: goto label_1afdd4;
            case 0x1AFDD8u: goto label_1afdd8;
            case 0x1AFDDCu: goto label_1afddc;
            case 0x1AFDE0u: goto label_1afde0;
            case 0x1AFDE4u: goto label_1afde4;
            case 0x1AFDE8u: goto label_1afde8;
            case 0x1AFDECu: goto label_1afdec;
            case 0x1AFDF0u: goto label_1afdf0;
            case 0x1AFDF4u: goto label_1afdf4;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFDFCu: goto label_1afdfc;
            case 0x1AFE00u: goto label_1afe00;
            case 0x1AFE04u: goto label_1afe04;
            case 0x1AFE08u: goto label_1afe08;
            case 0x1AFE0Cu: goto label_1afe0c;
            case 0x1AFE10u: goto label_1afe10;
            case 0x1AFE14u: goto label_1afe14;
            case 0x1AFE18u: goto label_1afe18;
            case 0x1AFE1Cu: goto label_1afe1c;
            case 0x1AFE20u: goto label_1afe20;
            case 0x1AFE24u: goto label_1afe24;
            case 0x1AFE28u: goto label_1afe28;
            case 0x1AFE2Cu: goto label_1afe2c;
            case 0x1AFE30u: goto label_1afe30;
            case 0x1AFE34u: goto label_1afe34;
            case 0x1AFE38u: goto label_1afe38;
            case 0x1AFE3Cu: goto label_1afe3c;
            case 0x1AFE40u: goto label_1afe40;
            case 0x1AFE44u: goto label_1afe44;
            case 0x1AFE48u: goto label_1afe48;
            case 0x1AFE4Cu: goto label_1afe4c;
            case 0x1AFE50u: goto label_1afe50;
            case 0x1AFE54u: goto label_1afe54;
            case 0x1AFE58u: goto label_1afe58;
            case 0x1AFE5Cu: goto label_1afe5c;
            case 0x1AFE60u: goto label_1afe60;
            case 0x1AFE64u: goto label_1afe64;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFE6Cu: goto label_1afe6c;
            case 0x1AFE70u: goto label_1afe70;
            case 0x1AFE74u: goto label_1afe74;
            case 0x1AFE78u: goto label_1afe78;
            case 0x1AFE7Cu: goto label_1afe7c;
            case 0x1AFE80u: goto label_1afe80;
            case 0x1AFE84u: goto label_1afe84;
            case 0x1AFE88u: goto label_1afe88;
            case 0x1AFE8Cu: goto label_1afe8c;
            case 0x1AFE90u: goto label_1afe90;
            case 0x1AFE94u: goto label_1afe94;
            case 0x1AFE98u: goto label_1afe98;
            case 0x1AFE9Cu: goto label_1afe9c;
            case 0x1AFEA0u: goto label_1afea0;
            case 0x1AFEA4u: goto label_1afea4;
            case 0x1AFEA8u: goto label_1afea8;
            case 0x1AFEACu: goto label_1afeac;
            case 0x1AFEB0u: goto label_1afeb0;
            case 0x1AFEB4u: goto label_1afeb4;
            case 0x1AFEB8u: goto label_1afeb8;
            case 0x1AFEBCu: goto label_1afebc;
            case 0x1AFEC0u: goto label_1afec0;
            case 0x1AFEC4u: goto label_1afec4;
            case 0x1AFEC8u: goto label_1afec8;
            case 0x1AFECCu: goto label_1afecc;
            case 0x1AFED0u: goto label_1afed0;
            case 0x1AFED4u: goto label_1afed4;
            case 0x1AFED8u: goto label_1afed8;
            case 0x1AFEDCu: goto label_1afedc;
            case 0x1AFEE0u: goto label_1afee0;
            case 0x1AFEE4u: goto label_1afee4;
            case 0x1AFEE8u: goto label_1afee8;
            case 0x1AFEECu: goto label_1afeec;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFEF4u: goto label_1afef4;
            case 0x1AFEF8u: goto label_1afef8;
            case 0x1AFEFCu: goto label_1afefc;
            case 0x1AFF00u: goto label_1aff00;
            case 0x1AFF04u: goto label_1aff04;
            case 0x1AFF08u: goto label_1aff08;
            case 0x1AFF0Cu: goto label_1aff0c;
            case 0x1AFF10u: goto label_1aff10;
            case 0x1AFF14u: goto label_1aff14;
            case 0x1AFF18u: goto label_1aff18;
            case 0x1AFF1Cu: goto label_1aff1c;
            case 0x1AFF20u: goto label_1aff20;
            case 0x1AFF24u: goto label_1aff24;
            case 0x1AFF28u: goto label_1aff28;
            case 0x1AFF2Cu: goto label_1aff2c;
            case 0x1AFF30u: goto label_1aff30;
            case 0x1AFF34u: goto label_1aff34;
            case 0x1AFF38u: goto label_1aff38;
            case 0x1AFF3Cu: goto label_1aff3c;
            case 0x1AFF40u: goto label_1aff40;
            case 0x1AFF44u: goto label_1aff44;
            case 0x1AFF48u: goto label_1aff48;
            case 0x1AFF4Cu: goto label_1aff4c;
            case 0x1AFF50u: goto label_1aff50;
            case 0x1AFF54u: goto label_1aff54;
            case 0x1AFF58u: goto label_1aff58;
            case 0x1AFF5Cu: goto label_1aff5c;
            case 0x1AFF60u: goto label_1aff60;
            case 0x1AFF64u: goto label_1aff64;
            case 0x1AFF68u: goto label_1aff68;
            case 0x1AFF6Cu: goto label_1aff6c;
            case 0x1AFF70u: goto label_1aff70;
            case 0x1AFF74u: goto label_1aff74;
            case 0x1AFF78u: goto label_1aff78;
            case 0x1AFF7Cu: goto label_1aff7c;
            case 0x1AFF80u: goto label_1aff80;
            case 0x1AFF84u: goto label_1aff84;
            case 0x1AFF88u: goto label_1aff88;
            case 0x1AFF8Cu: goto label_1aff8c;
            case 0x1AFF90u: goto label_1aff90;
            case 0x1AFF94u: goto label_1aff94;
            case 0x1AFF98u: goto label_1aff98;
            case 0x1AFF9Cu: goto label_1aff9c;
            case 0x1AFFA0u: goto label_1affa0;
            case 0x1AFFA4u: goto label_1affa4;
            case 0x1AFFA8u: goto label_1affa8;
            case 0x1AFFACu: goto label_1affac;
            case 0x1AFFB0u: goto label_1affb0;
            case 0x1AFFB4u: goto label_1affb4;
            case 0x1AFFB8u: goto label_1affb8;
            case 0x1AFFBCu: goto label_1affbc;
            case 0x1AFFC0u: goto label_1affc0;
            case 0x1AFFC4u: goto label_1affc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEBCu; }
            if (ctx->pc != 0x1AFEBCu) { return; }
        }
    }
    ctx->pc = 0x1AFEBCu;
label_1afebc:
    // 0x1afebc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1afec0:
    if (ctx->pc == 0x1AFEC0u) {
        ctx->pc = 0x1AFEC4u;
        goto label_1afec4;
    }
    ctx->pc = 0x1AFEBCu;
    {
        const bool branch_taken_0x1afebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afebc) {
            ctx->pc = 0x1AFFB8u;
            goto label_1affb8;
        }
    }
    ctx->pc = 0x1AFEC4u;
label_1afec4:
    // 0x1afec4: 0x0  nop
    ctx->pc = 0x1afec4u;
    // NOP
label_1afec8:
    // 0x1afec8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1afec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1afecc:
    // 0x1afecc: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1afed0:
    if (ctx->pc == 0x1AFED0u) {
        ctx->pc = 0x1AFED4u;
        goto label_1afed4;
    }
    ctx->pc = 0x1AFECCu;
    {
        const bool branch_taken_0x1afecc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1afecc) {
            ctx->pc = 0x1AFF98u;
            goto label_1aff98;
        }
    }
    ctx->pc = 0x1AFED4u;
label_1afed4:
    // 0x1afed4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1afed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1afed8:
    // 0x1afed8: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1afed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1afedc:
    // 0x1afedc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1afedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1afee0:
    // 0x1afee0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1afee0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1afee4:
    // 0x1afee4: 0xc05d080  jal         func_174200
label_1afee8:
    if (ctx->pc == 0x1AFEE8u) {
        ctx->pc = 0x1AFEE8u;
            // 0x1afee8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AFEECu;
        goto label_1afeec;
    }
    ctx->pc = 0x1AFEE4u;
    SET_GPR_U32(ctx, 31, 0x1AFEECu);
    ctx->pc = 0x1AFEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFEE4u;
            // 0x1afee8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEECu; }
        if (ctx->pc != 0x1AFEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEECu; }
        if (ctx->pc != 0x1AFEECu) { return; }
    }
    ctx->pc = 0x1AFEECu;
label_1afeec:
    // 0x1afeec: 0xc050bb4  jal         func_142ED0
label_1afef0:
    if (ctx->pc == 0x1AFEF0u) {
        ctx->pc = 0x1AFEF4u;
        goto label_1afef4;
    }
    ctx->pc = 0x1AFEECu;
    SET_GPR_U32(ctx, 31, 0x1AFEF4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEF4u; }
        if (ctx->pc != 0x1AFEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFEF4u; }
        if (ctx->pc != 0x1AFEF4u) { return; }
    }
    ctx->pc = 0x1AFEF4u;
label_1afef4:
    // 0x1afef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1afef4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1afef8:
    // 0x1afef8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1afefc:
    if (ctx->pc == 0x1AFEFCu) {
        ctx->pc = 0x1AFF00u;
        goto label_1aff00;
    }
    ctx->pc = 0x1AFEF8u;
    {
        const bool branch_taken_0x1afef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afef8) {
            ctx->pc = 0x1AFF18u;
            goto label_1aff18;
        }
    }
    ctx->pc = 0x1AFF00u;
label_1aff00:
    // 0x1aff00: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1aff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aff04:
    // 0x1aff04: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1aff04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1aff08:
    // 0x1aff08: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1aff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aff0c:
    // 0x1aff0c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1aff0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1aff10:
    // 0x1aff10: 0xc05d080  jal         func_174200
label_1aff14:
    if (ctx->pc == 0x1AFF14u) {
        ctx->pc = 0x1AFF14u;
            // 0x1aff14: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AFF18u;
        goto label_1aff18;
    }
    ctx->pc = 0x1AFF10u;
    SET_GPR_U32(ctx, 31, 0x1AFF18u);
    ctx->pc = 0x1AFF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF10u;
            // 0x1aff14: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF18u; }
        if (ctx->pc != 0x1AFF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF18u; }
        if (ctx->pc != 0x1AFF18u) { return; }
    }
    ctx->pc = 0x1AFF18u;
label_1aff18:
    // 0x1aff18: 0xc050bb4  jal         func_142ED0
label_1aff1c:
    if (ctx->pc == 0x1AFF1Cu) {
        ctx->pc = 0x1AFF20u;
        goto label_1aff20;
    }
    ctx->pc = 0x1AFF18u;
    SET_GPR_U32(ctx, 31, 0x1AFF20u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF20u; }
        if (ctx->pc != 0x1AFF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF20u; }
        if (ctx->pc != 0x1AFF20u) { return; }
    }
    ctx->pc = 0x1AFF20u;
label_1aff20:
    // 0x1aff20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aff20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1aff24:
    // 0x1aff24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1aff28:
    if (ctx->pc == 0x1AFF28u) {
        ctx->pc = 0x1AFF2Cu;
        goto label_1aff2c;
    }
    ctx->pc = 0x1AFF24u;
    {
        const bool branch_taken_0x1aff24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff24) {
            ctx->pc = 0x1AFF48u;
            goto label_1aff48;
        }
    }
    ctx->pc = 0x1AFF2Cu;
label_1aff2c:
    // 0x1aff2c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1aff2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aff30:
    // 0x1aff30: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1aff30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1aff34:
    // 0x1aff34: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1aff34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aff38:
    // 0x1aff38: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1aff38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1aff3c:
    // 0x1aff3c: 0xc05d080  jal         func_174200
label_1aff40:
    if (ctx->pc == 0x1AFF40u) {
        ctx->pc = 0x1AFF40u;
            // 0x1aff40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1AFF44u;
        goto label_1aff44;
    }
    ctx->pc = 0x1AFF3Cu;
    SET_GPR_U32(ctx, 31, 0x1AFF44u);
    ctx->pc = 0x1AFF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF3Cu;
            // 0x1aff40: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF44u; }
        if (ctx->pc != 0x1AFF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF44u; }
        if (ctx->pc != 0x1AFF44u) { return; }
    }
    ctx->pc = 0x1AFF44u;
label_1aff44:
    // 0x1aff44: 0x0  nop
    ctx->pc = 0x1aff44u;
    // NOP
label_1aff48:
    // 0x1aff48: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1aff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1aff4c:
    // 0x1aff4c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1aff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aff50:
    // 0x1aff50: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1aff50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aff54:
    // 0x1aff54: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1aff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aff58:
    // 0x1aff58: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1aff58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aff5c:
    // 0x1aff5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aff60:
    // 0x1aff60: 0x0  nop
    ctx->pc = 0x1aff60u;
    // NOP
label_1aff64:
    // 0x1aff64: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1aff64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1aff68:
    // 0x1aff68: 0xc053740  jal         func_14DD00
label_1aff6c:
    if (ctx->pc == 0x1AFF6Cu) {
        ctx->pc = 0x1AFF6Cu;
            // 0x1aff6c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1AFF70u;
        goto label_1aff70;
    }
    ctx->pc = 0x1AFF68u;
    SET_GPR_U32(ctx, 31, 0x1AFF70u);
    ctx->pc = 0x1AFF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF68u;
            // 0x1aff6c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF70u; }
        if (ctx->pc != 0x1AFF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF70u; }
        if (ctx->pc != 0x1AFF70u) { return; }
    }
    ctx->pc = 0x1AFF70u;
label_1aff70:
    // 0x1aff70: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aff70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aff74:
    // 0x1aff74: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1aff74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aff78:
    // 0x1aff78: 0xc07b0fc  jal         func_1EC3F0
label_1aff7c:
    if (ctx->pc == 0x1AFF7Cu) {
        ctx->pc = 0x1AFF7Cu;
            // 0x1aff7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF80u;
        goto label_1aff80;
    }
    ctx->pc = 0x1AFF78u;
    SET_GPR_U32(ctx, 31, 0x1AFF80u);
    ctx->pc = 0x1AFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF78u;
            // 0x1aff7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF80u; }
        if (ctx->pc != 0x1AFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF80u; }
        if (ctx->pc != 0x1AFF80u) { return; }
    }
    ctx->pc = 0x1AFF80u;
label_1aff80:
    // 0x1aff80: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1aff80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1aff84:
    // 0x1aff84: 0x40f809  jalr        $v0
label_1aff88:
    if (ctx->pc == 0x1AFF88u) {
        ctx->pc = 0x1AFF88u;
            // 0x1aff88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFF8Cu;
        goto label_1aff8c;
    }
    ctx->pc = 0x1AFF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AFF8Cu);
        ctx->pc = 0x1AFF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFF84u;
            // 0x1aff88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF530u: goto label_1af530;
            case 0x1AF534u: goto label_1af534;
            case 0x1AF538u: goto label_1af538;
            case 0x1AF53Cu: goto label_1af53c;
            case 0x1AF540u: goto label_1af540;
            case 0x1AF544u: goto label_1af544;
            case 0x1AF548u: goto label_1af548;
            case 0x1AF54Cu: goto label_1af54c;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF558u: goto label_1af558;
            case 0x1AF55Cu: goto label_1af55c;
            case 0x1AF560u: goto label_1af560;
            case 0x1AF564u: goto label_1af564;
            case 0x1AF568u: goto label_1af568;
            case 0x1AF56Cu: goto label_1af56c;
            case 0x1AF570u: goto label_1af570;
            case 0x1AF574u: goto label_1af574;
            case 0x1AF578u: goto label_1af578;
            case 0x1AF57Cu: goto label_1af57c;
            case 0x1AF580u: goto label_1af580;
            case 0x1AF584u: goto label_1af584;
            case 0x1AF588u: goto label_1af588;
            case 0x1AF58Cu: goto label_1af58c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF594u: goto label_1af594;
            case 0x1AF598u: goto label_1af598;
            case 0x1AF59Cu: goto label_1af59c;
            case 0x1AF5A0u: goto label_1af5a0;
            case 0x1AF5A4u: goto label_1af5a4;
            case 0x1AF5A8u: goto label_1af5a8;
            case 0x1AF5ACu: goto label_1af5ac;
            case 0x1AF5B0u: goto label_1af5b0;
            case 0x1AF5B4u: goto label_1af5b4;
            case 0x1AF5B8u: goto label_1af5b8;
            case 0x1AF5BCu: goto label_1af5bc;
            case 0x1AF5C0u: goto label_1af5c0;
            case 0x1AF5C4u: goto label_1af5c4;
            case 0x1AF5C8u: goto label_1af5c8;
            case 0x1AF5CCu: goto label_1af5cc;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF5D4u: goto label_1af5d4;
            case 0x1AF5D8u: goto label_1af5d8;
            case 0x1AF5DCu: goto label_1af5dc;
            case 0x1AF5E0u: goto label_1af5e0;
            case 0x1AF5E4u: goto label_1af5e4;
            case 0x1AF5E8u: goto label_1af5e8;
            case 0x1AF5ECu: goto label_1af5ec;
            case 0x1AF5F0u: goto label_1af5f0;
            case 0x1AF5F4u: goto label_1af5f4;
            case 0x1AF5F8u: goto label_1af5f8;
            case 0x1AF5FCu: goto label_1af5fc;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF604u: goto label_1af604;
            case 0x1AF608u: goto label_1af608;
            case 0x1AF60Cu: goto label_1af60c;
            case 0x1AF610u: goto label_1af610;
            case 0x1AF614u: goto label_1af614;
            case 0x1AF618u: goto label_1af618;
            case 0x1AF61Cu: goto label_1af61c;
            case 0x1AF620u: goto label_1af620;
            case 0x1AF624u: goto label_1af624;
            case 0x1AF628u: goto label_1af628;
            case 0x1AF62Cu: goto label_1af62c;
            case 0x1AF630u: goto label_1af630;
            case 0x1AF634u: goto label_1af634;
            case 0x1AF638u: goto label_1af638;
            case 0x1AF63Cu: goto label_1af63c;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF644u: goto label_1af644;
            case 0x1AF648u: goto label_1af648;
            case 0x1AF64Cu: goto label_1af64c;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF654u: goto label_1af654;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF65Cu: goto label_1af65c;
            case 0x1AF660u: goto label_1af660;
            case 0x1AF664u: goto label_1af664;
            case 0x1AF668u: goto label_1af668;
            case 0x1AF66Cu: goto label_1af66c;
            case 0x1AF670u: goto label_1af670;
            case 0x1AF674u: goto label_1af674;
            case 0x1AF678u: goto label_1af678;
            case 0x1AF67Cu: goto label_1af67c;
            case 0x1AF680u: goto label_1af680;
            case 0x1AF684u: goto label_1af684;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            case 0x1AF690u: goto label_1af690;
            case 0x1AF694u: goto label_1af694;
            case 0x1AF698u: goto label_1af698;
            case 0x1AF69Cu: goto label_1af69c;
            case 0x1AF6A0u: goto label_1af6a0;
            case 0x1AF6A4u: goto label_1af6a4;
            case 0x1AF6A8u: goto label_1af6a8;
            case 0x1AF6ACu: goto label_1af6ac;
            case 0x1AF6B0u: goto label_1af6b0;
            case 0x1AF6B4u: goto label_1af6b4;
            case 0x1AF6B8u: goto label_1af6b8;
            case 0x1AF6BCu: goto label_1af6bc;
            case 0x1AF6C0u: goto label_1af6c0;
            case 0x1AF6C4u: goto label_1af6c4;
            case 0x1AF6C8u: goto label_1af6c8;
            case 0x1AF6CCu: goto label_1af6cc;
            case 0x1AF6D0u: goto label_1af6d0;
            case 0x1AF6D4u: goto label_1af6d4;
            case 0x1AF6D8u: goto label_1af6d8;
            case 0x1AF6DCu: goto label_1af6dc;
            case 0x1AF6E0u: goto label_1af6e0;
            case 0x1AF6E4u: goto label_1af6e4;
            case 0x1AF6E8u: goto label_1af6e8;
            case 0x1AF6ECu: goto label_1af6ec;
            case 0x1AF6F0u: goto label_1af6f0;
            case 0x1AF6F4u: goto label_1af6f4;
            case 0x1AF6F8u: goto label_1af6f8;
            case 0x1AF6FCu: goto label_1af6fc;
            case 0x1AF700u: goto label_1af700;
            case 0x1AF704u: goto label_1af704;
            case 0x1AF708u: goto label_1af708;
            case 0x1AF70Cu: goto label_1af70c;
            case 0x1AF710u: goto label_1af710;
            case 0x1AF714u: goto label_1af714;
            case 0x1AF718u: goto label_1af718;
            case 0x1AF71Cu: goto label_1af71c;
            case 0x1AF720u: goto label_1af720;
            case 0x1AF724u: goto label_1af724;
            case 0x1AF728u: goto label_1af728;
            case 0x1AF72Cu: goto label_1af72c;
            case 0x1AF730u: goto label_1af730;
            case 0x1AF734u: goto label_1af734;
            case 0x1AF738u: goto label_1af738;
            case 0x1AF73Cu: goto label_1af73c;
            case 0x1AF740u: goto label_1af740;
            case 0x1AF744u: goto label_1af744;
            case 0x1AF748u: goto label_1af748;
            case 0x1AF74Cu: goto label_1af74c;
            case 0x1AF750u: goto label_1af750;
            case 0x1AF754u: goto label_1af754;
            case 0x1AF758u: goto label_1af758;
            case 0x1AF75Cu: goto label_1af75c;
            case 0x1AF760u: goto label_1af760;
            case 0x1AF764u: goto label_1af764;
            case 0x1AF768u: goto label_1af768;
            case 0x1AF76Cu: goto label_1af76c;
            case 0x1AF770u: goto label_1af770;
            case 0x1AF774u: goto label_1af774;
            case 0x1AF778u: goto label_1af778;
            case 0x1AF77Cu: goto label_1af77c;
            case 0x1AF780u: goto label_1af780;
            case 0x1AF784u: goto label_1af784;
            case 0x1AF788u: goto label_1af788;
            case 0x1AF78Cu: goto label_1af78c;
            case 0x1AF790u: goto label_1af790;
            case 0x1AF794u: goto label_1af794;
            case 0x1AF798u: goto label_1af798;
            case 0x1AF79Cu: goto label_1af79c;
            case 0x1AF7A0u: goto label_1af7a0;
            case 0x1AF7A4u: goto label_1af7a4;
            case 0x1AF7A8u: goto label_1af7a8;
            case 0x1AF7ACu: goto label_1af7ac;
            case 0x1AF7B0u: goto label_1af7b0;
            case 0x1AF7B4u: goto label_1af7b4;
            case 0x1AF7B8u: goto label_1af7b8;
            case 0x1AF7BCu: goto label_1af7bc;
            case 0x1AF7C0u: goto label_1af7c0;
            case 0x1AF7C4u: goto label_1af7c4;
            case 0x1AF7C8u: goto label_1af7c8;
            case 0x1AF7CCu: goto label_1af7cc;
            case 0x1AF7D0u: goto label_1af7d0;
            case 0x1AF7D4u: goto label_1af7d4;
            case 0x1AF7D8u: goto label_1af7d8;
            case 0x1AF7DCu: goto label_1af7dc;
            case 0x1AF7E0u: goto label_1af7e0;
            case 0x1AF7E4u: goto label_1af7e4;
            case 0x1AF7E8u: goto label_1af7e8;
            case 0x1AF7ECu: goto label_1af7ec;
            case 0x1AF7F0u: goto label_1af7f0;
            case 0x1AF7F4u: goto label_1af7f4;
            case 0x1AF7F8u: goto label_1af7f8;
            case 0x1AF7FCu: goto label_1af7fc;
            case 0x1AF800u: goto label_1af800;
            case 0x1AF804u: goto label_1af804;
            case 0x1AF808u: goto label_1af808;
            case 0x1AF80Cu: goto label_1af80c;
            case 0x1AF810u: goto label_1af810;
            case 0x1AF814u: goto label_1af814;
            case 0x1AF818u: goto label_1af818;
            case 0x1AF81Cu: goto label_1af81c;
            case 0x1AF820u: goto label_1af820;
            case 0x1AF824u: goto label_1af824;
            case 0x1AF828u: goto label_1af828;
            case 0x1AF82Cu: goto label_1af82c;
            case 0x1AF830u: goto label_1af830;
            case 0x1AF834u: goto label_1af834;
            case 0x1AF838u: goto label_1af838;
            case 0x1AF83Cu: goto label_1af83c;
            case 0x1AF840u: goto label_1af840;
            case 0x1AF844u: goto label_1af844;
            case 0x1AF848u: goto label_1af848;
            case 0x1AF84Cu: goto label_1af84c;
            case 0x1AF850u: goto label_1af850;
            case 0x1AF854u: goto label_1af854;
            case 0x1AF858u: goto label_1af858;
            case 0x1AF85Cu: goto label_1af85c;
            case 0x1AF860u: goto label_1af860;
            case 0x1AF864u: goto label_1af864;
            case 0x1AF868u: goto label_1af868;
            case 0x1AF86Cu: goto label_1af86c;
            case 0x1AF870u: goto label_1af870;
            case 0x1AF874u: goto label_1af874;
            case 0x1AF878u: goto label_1af878;
            case 0x1AF87Cu: goto label_1af87c;
            case 0x1AF880u: goto label_1af880;
            case 0x1AF884u: goto label_1af884;
            case 0x1AF888u: goto label_1af888;
            case 0x1AF88Cu: goto label_1af88c;
            case 0x1AF890u: goto label_1af890;
            case 0x1AF894u: goto label_1af894;
            case 0x1AF898u: goto label_1af898;
            case 0x1AF89Cu: goto label_1af89c;
            case 0x1AF8A0u: goto label_1af8a0;
            case 0x1AF8A4u: goto label_1af8a4;
            case 0x1AF8A8u: goto label_1af8a8;
            case 0x1AF8ACu: goto label_1af8ac;
            case 0x1AF8B0u: goto label_1af8b0;
            case 0x1AF8B4u: goto label_1af8b4;
            case 0x1AF8B8u: goto label_1af8b8;
            case 0x1AF8BCu: goto label_1af8bc;
            case 0x1AF8C0u: goto label_1af8c0;
            case 0x1AF8C4u: goto label_1af8c4;
            case 0x1AF8C8u: goto label_1af8c8;
            case 0x1AF8CCu: goto label_1af8cc;
            case 0x1AF8D0u: goto label_1af8d0;
            case 0x1AF8D4u: goto label_1af8d4;
            case 0x1AF8D8u: goto label_1af8d8;
            case 0x1AF8DCu: goto label_1af8dc;
            case 0x1AF8E0u: goto label_1af8e0;
            case 0x1AF8E4u: goto label_1af8e4;
            case 0x1AF8E8u: goto label_1af8e8;
            case 0x1AF8ECu: goto label_1af8ec;
            case 0x1AF8F0u: goto label_1af8f0;
            case 0x1AF8F4u: goto label_1af8f4;
            case 0x1AF8F8u: goto label_1af8f8;
            case 0x1AF8FCu: goto label_1af8fc;
            case 0x1AF900u: goto label_1af900;
            case 0x1AF904u: goto label_1af904;
            case 0x1AF908u: goto label_1af908;
            case 0x1AF90Cu: goto label_1af90c;
            case 0x1AF910u: goto label_1af910;
            case 0x1AF914u: goto label_1af914;
            case 0x1AF918u: goto label_1af918;
            case 0x1AF91Cu: goto label_1af91c;
            case 0x1AF920u: goto label_1af920;
            case 0x1AF924u: goto label_1af924;
            case 0x1AF928u: goto label_1af928;
            case 0x1AF92Cu: goto label_1af92c;
            case 0x1AF930u: goto label_1af930;
            case 0x1AF934u: goto label_1af934;
            case 0x1AF938u: goto label_1af938;
            case 0x1AF93Cu: goto label_1af93c;
            case 0x1AF940u: goto label_1af940;
            case 0x1AF944u: goto label_1af944;
            case 0x1AF948u: goto label_1af948;
            case 0x1AF94Cu: goto label_1af94c;
            case 0x1AF950u: goto label_1af950;
            case 0x1AF954u: goto label_1af954;
            case 0x1AF958u: goto label_1af958;
            case 0x1AF95Cu: goto label_1af95c;
            case 0x1AF960u: goto label_1af960;
            case 0x1AF964u: goto label_1af964;
            case 0x1AF968u: goto label_1af968;
            case 0x1AF96Cu: goto label_1af96c;
            case 0x1AF970u: goto label_1af970;
            case 0x1AF974u: goto label_1af974;
            case 0x1AF978u: goto label_1af978;
            case 0x1AF97Cu: goto label_1af97c;
            case 0x1AF980u: goto label_1af980;
            case 0x1AF984u: goto label_1af984;
            case 0x1AF988u: goto label_1af988;
            case 0x1AF98Cu: goto label_1af98c;
            case 0x1AF990u: goto label_1af990;
            case 0x1AF994u: goto label_1af994;
            case 0x1AF998u: goto label_1af998;
            case 0x1AF99Cu: goto label_1af99c;
            case 0x1AF9A0u: goto label_1af9a0;
            case 0x1AF9A4u: goto label_1af9a4;
            case 0x1AF9A8u: goto label_1af9a8;
            case 0x1AF9ACu: goto label_1af9ac;
            case 0x1AF9B0u: goto label_1af9b0;
            case 0x1AF9B4u: goto label_1af9b4;
            case 0x1AF9B8u: goto label_1af9b8;
            case 0x1AF9BCu: goto label_1af9bc;
            case 0x1AF9C0u: goto label_1af9c0;
            case 0x1AF9C4u: goto label_1af9c4;
            case 0x1AF9C8u: goto label_1af9c8;
            case 0x1AF9CCu: goto label_1af9cc;
            case 0x1AF9D0u: goto label_1af9d0;
            case 0x1AF9D4u: goto label_1af9d4;
            case 0x1AF9D8u: goto label_1af9d8;
            case 0x1AF9DCu: goto label_1af9dc;
            case 0x1AF9E0u: goto label_1af9e0;
            case 0x1AF9E4u: goto label_1af9e4;
            case 0x1AF9E8u: goto label_1af9e8;
            case 0x1AF9ECu: goto label_1af9ec;
            case 0x1AF9F0u: goto label_1af9f0;
            case 0x1AF9F4u: goto label_1af9f4;
            case 0x1AF9F8u: goto label_1af9f8;
            case 0x1AF9FCu: goto label_1af9fc;
            case 0x1AFA00u: goto label_1afa00;
            case 0x1AFA04u: goto label_1afa04;
            case 0x1AFA08u: goto label_1afa08;
            case 0x1AFA0Cu: goto label_1afa0c;
            case 0x1AFA10u: goto label_1afa10;
            case 0x1AFA14u: goto label_1afa14;
            case 0x1AFA18u: goto label_1afa18;
            case 0x1AFA1Cu: goto label_1afa1c;
            case 0x1AFA20u: goto label_1afa20;
            case 0x1AFA24u: goto label_1afa24;
            case 0x1AFA28u: goto label_1afa28;
            case 0x1AFA2Cu: goto label_1afa2c;
            case 0x1AFA30u: goto label_1afa30;
            case 0x1AFA34u: goto label_1afa34;
            case 0x1AFA38u: goto label_1afa38;
            case 0x1AFA3Cu: goto label_1afa3c;
            case 0x1AFA40u: goto label_1afa40;
            case 0x1AFA44u: goto label_1afa44;
            case 0x1AFA48u: goto label_1afa48;
            case 0x1AFA4Cu: goto label_1afa4c;
            case 0x1AFA50u: goto label_1afa50;
            case 0x1AFA54u: goto label_1afa54;
            case 0x1AFA58u: goto label_1afa58;
            case 0x1AFA5Cu: goto label_1afa5c;
            case 0x1AFA60u: goto label_1afa60;
            case 0x1AFA64u: goto label_1afa64;
            case 0x1AFA68u: goto label_1afa68;
            case 0x1AFA6Cu: goto label_1afa6c;
            case 0x1AFA70u: goto label_1afa70;
            case 0x1AFA74u: goto label_1afa74;
            case 0x1AFA78u: goto label_1afa78;
            case 0x1AFA7Cu: goto label_1afa7c;
            case 0x1AFA80u: goto label_1afa80;
            case 0x1AFA84u: goto label_1afa84;
            case 0x1AFA88u: goto label_1afa88;
            case 0x1AFA8Cu: goto label_1afa8c;
            case 0x1AFA90u: goto label_1afa90;
            case 0x1AFA94u: goto label_1afa94;
            case 0x1AFA98u: goto label_1afa98;
            case 0x1AFA9Cu: goto label_1afa9c;
            case 0x1AFAA0u: goto label_1afaa0;
            case 0x1AFAA4u: goto label_1afaa4;
            case 0x1AFAA8u: goto label_1afaa8;
            case 0x1AFAACu: goto label_1afaac;
            case 0x1AFAB0u: goto label_1afab0;
            case 0x1AFAB4u: goto label_1afab4;
            case 0x1AFAB8u: goto label_1afab8;
            case 0x1AFABCu: goto label_1afabc;
            case 0x1AFAC0u: goto label_1afac0;
            case 0x1AFAC4u: goto label_1afac4;
            case 0x1AFAC8u: goto label_1afac8;
            case 0x1AFACCu: goto label_1afacc;
            case 0x1AFAD0u: goto label_1afad0;
            case 0x1AFAD4u: goto label_1afad4;
            case 0x1AFAD8u: goto label_1afad8;
            case 0x1AFADCu: goto label_1afadc;
            case 0x1AFAE0u: goto label_1afae0;
            case 0x1AFAE4u: goto label_1afae4;
            case 0x1AFAE8u: goto label_1afae8;
            case 0x1AFAECu: goto label_1afaec;
            case 0x1AFAF0u: goto label_1afaf0;
            case 0x1AFAF4u: goto label_1afaf4;
            case 0x1AFAF8u: goto label_1afaf8;
            case 0x1AFAFCu: goto label_1afafc;
            case 0x1AFB00u: goto label_1afb00;
            case 0x1AFB04u: goto label_1afb04;
            case 0x1AFB08u: goto label_1afb08;
            case 0x1AFB0Cu: goto label_1afb0c;
            case 0x1AFB10u: goto label_1afb10;
            case 0x1AFB14u: goto label_1afb14;
            case 0x1AFB18u: goto label_1afb18;
            case 0x1AFB1Cu: goto label_1afb1c;
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            case 0x1AFCE0u: goto label_1afce0;
            case 0x1AFCE4u: goto label_1afce4;
            case 0x1AFCE8u: goto label_1afce8;
            case 0x1AFCECu: goto label_1afcec;
            case 0x1AFCF0u: goto label_1afcf0;
            case 0x1AFCF4u: goto label_1afcf4;
            case 0x1AFCF8u: goto label_1afcf8;
            case 0x1AFCFCu: goto label_1afcfc;
            case 0x1AFD00u: goto label_1afd00;
            case 0x1AFD04u: goto label_1afd04;
            case 0x1AFD08u: goto label_1afd08;
            case 0x1AFD0Cu: goto label_1afd0c;
            case 0x1AFD10u: goto label_1afd10;
            case 0x1AFD14u: goto label_1afd14;
            case 0x1AFD18u: goto label_1afd18;
            case 0x1AFD1Cu: goto label_1afd1c;
            case 0x1AFD20u: goto label_1afd20;
            case 0x1AFD24u: goto label_1afd24;
            case 0x1AFD28u: goto label_1afd28;
            case 0x1AFD2Cu: goto label_1afd2c;
            case 0x1AFD30u: goto label_1afd30;
            case 0x1AFD34u: goto label_1afd34;
            case 0x1AFD38u: goto label_1afd38;
            case 0x1AFD3Cu: goto label_1afd3c;
            case 0x1AFD40u: goto label_1afd40;
            case 0x1AFD44u: goto label_1afd44;
            case 0x1AFD48u: goto label_1afd48;
            case 0x1AFD4Cu: goto label_1afd4c;
            case 0x1AFD50u: goto label_1afd50;
            case 0x1AFD54u: goto label_1afd54;
            case 0x1AFD58u: goto label_1afd58;
            case 0x1AFD5Cu: goto label_1afd5c;
            case 0x1AFD60u: goto label_1afd60;
            case 0x1AFD64u: goto label_1afd64;
            case 0x1AFD68u: goto label_1afd68;
            case 0x1AFD6Cu: goto label_1afd6c;
            case 0x1AFD70u: goto label_1afd70;
            case 0x1AFD74u: goto label_1afd74;
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFD7Cu: goto label_1afd7c;
            case 0x1AFD80u: goto label_1afd80;
            case 0x1AFD84u: goto label_1afd84;
            case 0x1AFD88u: goto label_1afd88;
            case 0x1AFD8Cu: goto label_1afd8c;
            case 0x1AFD90u: goto label_1afd90;
            case 0x1AFD94u: goto label_1afd94;
            case 0x1AFD98u: goto label_1afd98;
            case 0x1AFD9Cu: goto label_1afd9c;
            case 0x1AFDA0u: goto label_1afda0;
            case 0x1AFDA4u: goto label_1afda4;
            case 0x1AFDA8u: goto label_1afda8;
            case 0x1AFDACu: goto label_1afdac;
            case 0x1AFDB0u: goto label_1afdb0;
            case 0x1AFDB4u: goto label_1afdb4;
            case 0x1AFDB8u: goto label_1afdb8;
            case 0x1AFDBCu: goto label_1afdbc;
            case 0x1AFDC0u: goto label_1afdc0;
            case 0x1AFDC4u: goto label_1afdc4;
            case 0x1AFDC8u: goto label_1afdc8;
            case 0x1AFDCCu: goto label_1afdcc;
            case 0x1AFDD0u: goto label_1afdd0;
            case 0x1AFDD4u: goto label_1afdd4;
            case 0x1AFDD8u: goto label_1afdd8;
            case 0x1AFDDCu: goto label_1afddc;
            case 0x1AFDE0u: goto label_1afde0;
            case 0x1AFDE4u: goto label_1afde4;
            case 0x1AFDE8u: goto label_1afde8;
            case 0x1AFDECu: goto label_1afdec;
            case 0x1AFDF0u: goto label_1afdf0;
            case 0x1AFDF4u: goto label_1afdf4;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFDFCu: goto label_1afdfc;
            case 0x1AFE00u: goto label_1afe00;
            case 0x1AFE04u: goto label_1afe04;
            case 0x1AFE08u: goto label_1afe08;
            case 0x1AFE0Cu: goto label_1afe0c;
            case 0x1AFE10u: goto label_1afe10;
            case 0x1AFE14u: goto label_1afe14;
            case 0x1AFE18u: goto label_1afe18;
            case 0x1AFE1Cu: goto label_1afe1c;
            case 0x1AFE20u: goto label_1afe20;
            case 0x1AFE24u: goto label_1afe24;
            case 0x1AFE28u: goto label_1afe28;
            case 0x1AFE2Cu: goto label_1afe2c;
            case 0x1AFE30u: goto label_1afe30;
            case 0x1AFE34u: goto label_1afe34;
            case 0x1AFE38u: goto label_1afe38;
            case 0x1AFE3Cu: goto label_1afe3c;
            case 0x1AFE40u: goto label_1afe40;
            case 0x1AFE44u: goto label_1afe44;
            case 0x1AFE48u: goto label_1afe48;
            case 0x1AFE4Cu: goto label_1afe4c;
            case 0x1AFE50u: goto label_1afe50;
            case 0x1AFE54u: goto label_1afe54;
            case 0x1AFE58u: goto label_1afe58;
            case 0x1AFE5Cu: goto label_1afe5c;
            case 0x1AFE60u: goto label_1afe60;
            case 0x1AFE64u: goto label_1afe64;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFE6Cu: goto label_1afe6c;
            case 0x1AFE70u: goto label_1afe70;
            case 0x1AFE74u: goto label_1afe74;
            case 0x1AFE78u: goto label_1afe78;
            case 0x1AFE7Cu: goto label_1afe7c;
            case 0x1AFE80u: goto label_1afe80;
            case 0x1AFE84u: goto label_1afe84;
            case 0x1AFE88u: goto label_1afe88;
            case 0x1AFE8Cu: goto label_1afe8c;
            case 0x1AFE90u: goto label_1afe90;
            case 0x1AFE94u: goto label_1afe94;
            case 0x1AFE98u: goto label_1afe98;
            case 0x1AFE9Cu: goto label_1afe9c;
            case 0x1AFEA0u: goto label_1afea0;
            case 0x1AFEA4u: goto label_1afea4;
            case 0x1AFEA8u: goto label_1afea8;
            case 0x1AFEACu: goto label_1afeac;
            case 0x1AFEB0u: goto label_1afeb0;
            case 0x1AFEB4u: goto label_1afeb4;
            case 0x1AFEB8u: goto label_1afeb8;
            case 0x1AFEBCu: goto label_1afebc;
            case 0x1AFEC0u: goto label_1afec0;
            case 0x1AFEC4u: goto label_1afec4;
            case 0x1AFEC8u: goto label_1afec8;
            case 0x1AFECCu: goto label_1afecc;
            case 0x1AFED0u: goto label_1afed0;
            case 0x1AFED4u: goto label_1afed4;
            case 0x1AFED8u: goto label_1afed8;
            case 0x1AFEDCu: goto label_1afedc;
            case 0x1AFEE0u: goto label_1afee0;
            case 0x1AFEE4u: goto label_1afee4;
            case 0x1AFEE8u: goto label_1afee8;
            case 0x1AFEECu: goto label_1afeec;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFEF4u: goto label_1afef4;
            case 0x1AFEF8u: goto label_1afef8;
            case 0x1AFEFCu: goto label_1afefc;
            case 0x1AFF00u: goto label_1aff00;
            case 0x1AFF04u: goto label_1aff04;
            case 0x1AFF08u: goto label_1aff08;
            case 0x1AFF0Cu: goto label_1aff0c;
            case 0x1AFF10u: goto label_1aff10;
            case 0x1AFF14u: goto label_1aff14;
            case 0x1AFF18u: goto label_1aff18;
            case 0x1AFF1Cu: goto label_1aff1c;
            case 0x1AFF20u: goto label_1aff20;
            case 0x1AFF24u: goto label_1aff24;
            case 0x1AFF28u: goto label_1aff28;
            case 0x1AFF2Cu: goto label_1aff2c;
            case 0x1AFF30u: goto label_1aff30;
            case 0x1AFF34u: goto label_1aff34;
            case 0x1AFF38u: goto label_1aff38;
            case 0x1AFF3Cu: goto label_1aff3c;
            case 0x1AFF40u: goto label_1aff40;
            case 0x1AFF44u: goto label_1aff44;
            case 0x1AFF48u: goto label_1aff48;
            case 0x1AFF4Cu: goto label_1aff4c;
            case 0x1AFF50u: goto label_1aff50;
            case 0x1AFF54u: goto label_1aff54;
            case 0x1AFF58u: goto label_1aff58;
            case 0x1AFF5Cu: goto label_1aff5c;
            case 0x1AFF60u: goto label_1aff60;
            case 0x1AFF64u: goto label_1aff64;
            case 0x1AFF68u: goto label_1aff68;
            case 0x1AFF6Cu: goto label_1aff6c;
            case 0x1AFF70u: goto label_1aff70;
            case 0x1AFF74u: goto label_1aff74;
            case 0x1AFF78u: goto label_1aff78;
            case 0x1AFF7Cu: goto label_1aff7c;
            case 0x1AFF80u: goto label_1aff80;
            case 0x1AFF84u: goto label_1aff84;
            case 0x1AFF88u: goto label_1aff88;
            case 0x1AFF8Cu: goto label_1aff8c;
            case 0x1AFF90u: goto label_1aff90;
            case 0x1AFF94u: goto label_1aff94;
            case 0x1AFF98u: goto label_1aff98;
            case 0x1AFF9Cu: goto label_1aff9c;
            case 0x1AFFA0u: goto label_1affa0;
            case 0x1AFFA4u: goto label_1affa4;
            case 0x1AFFA8u: goto label_1affa8;
            case 0x1AFFACu: goto label_1affac;
            case 0x1AFFB0u: goto label_1affb0;
            case 0x1AFFB4u: goto label_1affb4;
            case 0x1AFFB8u: goto label_1affb8;
            case 0x1AFFBCu: goto label_1affbc;
            case 0x1AFFC0u: goto label_1affc0;
            case 0x1AFFC4u: goto label_1affc4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AFF8Cu; }
            if (ctx->pc != 0x1AFF8Cu) { return; }
        }
    }
    ctx->pc = 0x1AFF8Cu;
label_1aff8c:
    // 0x1aff8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aff90:
    if (ctx->pc == 0x1AFF90u) {
        ctx->pc = 0x1AFF94u;
        goto label_1aff94;
    }
    ctx->pc = 0x1AFF8Cu;
    {
        const bool branch_taken_0x1aff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aff8c) {
            ctx->pc = 0x1AFFB8u;
            goto label_1affb8;
        }
    }
    ctx->pc = 0x1AFF94u;
label_1aff94:
    // 0x1aff94: 0x0  nop
    ctx->pc = 0x1aff94u;
    // NOP
label_1aff98:
    // 0x1aff98: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aff98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1aff9c:
    // 0x1aff9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1aff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1affa0:
    // 0x1affa0: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1affa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1affa4:
    // 0x1affa4: 0x24c6f2d0  addiu       $a2, $a2, -0xD30
    ctx->pc = 0x1affa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963920));
label_1affa8:
    // 0x1affa8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1affa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1affac:
    // 0x1affac: 0xc053ca4  jal         func_14F290
label_1affb0:
    if (ctx->pc == 0x1AFFB0u) {
        ctx->pc = 0x1AFFB0u;
            // 0x1affb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFB4u;
        goto label_1affb4;
    }
    ctx->pc = 0x1AFFACu;
    SET_GPR_U32(ctx, 31, 0x1AFFB4u);
    ctx->pc = 0x1AFFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFACu;
            // 0x1affb0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFB4u; }
        if (ctx->pc != 0x1AFFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AFFB4u; }
        if (ctx->pc != 0x1AFFB4u) { return; }
    }
    ctx->pc = 0x1AFFB4u;
label_1affb4:
    // 0x1affb4: 0x0  nop
    ctx->pc = 0x1affb4u;
    // NOP
label_1affb8:
    // 0x1affb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1affb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1affbc:
    // 0x1affbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1affbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1affc0:
    // 0x1affc0: 0x3e00008  jr          $ra
label_1affc4:
    if (ctx->pc == 0x1AFFC4u) {
        ctx->pc = 0x1AFFC4u;
            // 0x1affc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AFFC8u;
        goto label_fallthrough_0x1affc0;
    }
    ctx->pc = 0x1AFFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AFFC0u;
            // 0x1affc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF530u: goto label_1af530;
            case 0x1AF534u: goto label_1af534;
            case 0x1AF538u: goto label_1af538;
            case 0x1AF53Cu: goto label_1af53c;
            case 0x1AF540u: goto label_1af540;
            case 0x1AF544u: goto label_1af544;
            case 0x1AF548u: goto label_1af548;
            case 0x1AF54Cu: goto label_1af54c;
            case 0x1AF550u: goto label_1af550;
            case 0x1AF554u: goto label_1af554;
            case 0x1AF558u: goto label_1af558;
            case 0x1AF55Cu: goto label_1af55c;
            case 0x1AF560u: goto label_1af560;
            case 0x1AF564u: goto label_1af564;
            case 0x1AF568u: goto label_1af568;
            case 0x1AF56Cu: goto label_1af56c;
            case 0x1AF570u: goto label_1af570;
            case 0x1AF574u: goto label_1af574;
            case 0x1AF578u: goto label_1af578;
            case 0x1AF57Cu: goto label_1af57c;
            case 0x1AF580u: goto label_1af580;
            case 0x1AF584u: goto label_1af584;
            case 0x1AF588u: goto label_1af588;
            case 0x1AF58Cu: goto label_1af58c;
            case 0x1AF590u: goto label_1af590;
            case 0x1AF594u: goto label_1af594;
            case 0x1AF598u: goto label_1af598;
            case 0x1AF59Cu: goto label_1af59c;
            case 0x1AF5A0u: goto label_1af5a0;
            case 0x1AF5A4u: goto label_1af5a4;
            case 0x1AF5A8u: goto label_1af5a8;
            case 0x1AF5ACu: goto label_1af5ac;
            case 0x1AF5B0u: goto label_1af5b0;
            case 0x1AF5B4u: goto label_1af5b4;
            case 0x1AF5B8u: goto label_1af5b8;
            case 0x1AF5BCu: goto label_1af5bc;
            case 0x1AF5C0u: goto label_1af5c0;
            case 0x1AF5C4u: goto label_1af5c4;
            case 0x1AF5C8u: goto label_1af5c8;
            case 0x1AF5CCu: goto label_1af5cc;
            case 0x1AF5D0u: goto label_1af5d0;
            case 0x1AF5D4u: goto label_1af5d4;
            case 0x1AF5D8u: goto label_1af5d8;
            case 0x1AF5DCu: goto label_1af5dc;
            case 0x1AF5E0u: goto label_1af5e0;
            case 0x1AF5E4u: goto label_1af5e4;
            case 0x1AF5E8u: goto label_1af5e8;
            case 0x1AF5ECu: goto label_1af5ec;
            case 0x1AF5F0u: goto label_1af5f0;
            case 0x1AF5F4u: goto label_1af5f4;
            case 0x1AF5F8u: goto label_1af5f8;
            case 0x1AF5FCu: goto label_1af5fc;
            case 0x1AF600u: goto label_1af600;
            case 0x1AF604u: goto label_1af604;
            case 0x1AF608u: goto label_1af608;
            case 0x1AF60Cu: goto label_1af60c;
            case 0x1AF610u: goto label_1af610;
            case 0x1AF614u: goto label_1af614;
            case 0x1AF618u: goto label_1af618;
            case 0x1AF61Cu: goto label_1af61c;
            case 0x1AF620u: goto label_1af620;
            case 0x1AF624u: goto label_1af624;
            case 0x1AF628u: goto label_1af628;
            case 0x1AF62Cu: goto label_1af62c;
            case 0x1AF630u: goto label_1af630;
            case 0x1AF634u: goto label_1af634;
            case 0x1AF638u: goto label_1af638;
            case 0x1AF63Cu: goto label_1af63c;
            case 0x1AF640u: goto label_1af640;
            case 0x1AF644u: goto label_1af644;
            case 0x1AF648u: goto label_1af648;
            case 0x1AF64Cu: goto label_1af64c;
            case 0x1AF650u: goto label_1af650;
            case 0x1AF654u: goto label_1af654;
            case 0x1AF658u: goto label_1af658;
            case 0x1AF65Cu: goto label_1af65c;
            case 0x1AF660u: goto label_1af660;
            case 0x1AF664u: goto label_1af664;
            case 0x1AF668u: goto label_1af668;
            case 0x1AF66Cu: goto label_1af66c;
            case 0x1AF670u: goto label_1af670;
            case 0x1AF674u: goto label_1af674;
            case 0x1AF678u: goto label_1af678;
            case 0x1AF67Cu: goto label_1af67c;
            case 0x1AF680u: goto label_1af680;
            case 0x1AF684u: goto label_1af684;
            case 0x1AF688u: goto label_1af688;
            case 0x1AF68Cu: goto label_1af68c;
            case 0x1AF690u: goto label_1af690;
            case 0x1AF694u: goto label_1af694;
            case 0x1AF698u: goto label_1af698;
            case 0x1AF69Cu: goto label_1af69c;
            case 0x1AF6A0u: goto label_1af6a0;
            case 0x1AF6A4u: goto label_1af6a4;
            case 0x1AF6A8u: goto label_1af6a8;
            case 0x1AF6ACu: goto label_1af6ac;
            case 0x1AF6B0u: goto label_1af6b0;
            case 0x1AF6B4u: goto label_1af6b4;
            case 0x1AF6B8u: goto label_1af6b8;
            case 0x1AF6BCu: goto label_1af6bc;
            case 0x1AF6C0u: goto label_1af6c0;
            case 0x1AF6C4u: goto label_1af6c4;
            case 0x1AF6C8u: goto label_1af6c8;
            case 0x1AF6CCu: goto label_1af6cc;
            case 0x1AF6D0u: goto label_1af6d0;
            case 0x1AF6D4u: goto label_1af6d4;
            case 0x1AF6D8u: goto label_1af6d8;
            case 0x1AF6DCu: goto label_1af6dc;
            case 0x1AF6E0u: goto label_1af6e0;
            case 0x1AF6E4u: goto label_1af6e4;
            case 0x1AF6E8u: goto label_1af6e8;
            case 0x1AF6ECu: goto label_1af6ec;
            case 0x1AF6F0u: goto label_1af6f0;
            case 0x1AF6F4u: goto label_1af6f4;
            case 0x1AF6F8u: goto label_1af6f8;
            case 0x1AF6FCu: goto label_1af6fc;
            case 0x1AF700u: goto label_1af700;
            case 0x1AF704u: goto label_1af704;
            case 0x1AF708u: goto label_1af708;
            case 0x1AF70Cu: goto label_1af70c;
            case 0x1AF710u: goto label_1af710;
            case 0x1AF714u: goto label_1af714;
            case 0x1AF718u: goto label_1af718;
            case 0x1AF71Cu: goto label_1af71c;
            case 0x1AF720u: goto label_1af720;
            case 0x1AF724u: goto label_1af724;
            case 0x1AF728u: goto label_1af728;
            case 0x1AF72Cu: goto label_1af72c;
            case 0x1AF730u: goto label_1af730;
            case 0x1AF734u: goto label_1af734;
            case 0x1AF738u: goto label_1af738;
            case 0x1AF73Cu: goto label_1af73c;
            case 0x1AF740u: goto label_1af740;
            case 0x1AF744u: goto label_1af744;
            case 0x1AF748u: goto label_1af748;
            case 0x1AF74Cu: goto label_1af74c;
            case 0x1AF750u: goto label_1af750;
            case 0x1AF754u: goto label_1af754;
            case 0x1AF758u: goto label_1af758;
            case 0x1AF75Cu: goto label_1af75c;
            case 0x1AF760u: goto label_1af760;
            case 0x1AF764u: goto label_1af764;
            case 0x1AF768u: goto label_1af768;
            case 0x1AF76Cu: goto label_1af76c;
            case 0x1AF770u: goto label_1af770;
            case 0x1AF774u: goto label_1af774;
            case 0x1AF778u: goto label_1af778;
            case 0x1AF77Cu: goto label_1af77c;
            case 0x1AF780u: goto label_1af780;
            case 0x1AF784u: goto label_1af784;
            case 0x1AF788u: goto label_1af788;
            case 0x1AF78Cu: goto label_1af78c;
            case 0x1AF790u: goto label_1af790;
            case 0x1AF794u: goto label_1af794;
            case 0x1AF798u: goto label_1af798;
            case 0x1AF79Cu: goto label_1af79c;
            case 0x1AF7A0u: goto label_1af7a0;
            case 0x1AF7A4u: goto label_1af7a4;
            case 0x1AF7A8u: goto label_1af7a8;
            case 0x1AF7ACu: goto label_1af7ac;
            case 0x1AF7B0u: goto label_1af7b0;
            case 0x1AF7B4u: goto label_1af7b4;
            case 0x1AF7B8u: goto label_1af7b8;
            case 0x1AF7BCu: goto label_1af7bc;
            case 0x1AF7C0u: goto label_1af7c0;
            case 0x1AF7C4u: goto label_1af7c4;
            case 0x1AF7C8u: goto label_1af7c8;
            case 0x1AF7CCu: goto label_1af7cc;
            case 0x1AF7D0u: goto label_1af7d0;
            case 0x1AF7D4u: goto label_1af7d4;
            case 0x1AF7D8u: goto label_1af7d8;
            case 0x1AF7DCu: goto label_1af7dc;
            case 0x1AF7E0u: goto label_1af7e0;
            case 0x1AF7E4u: goto label_1af7e4;
            case 0x1AF7E8u: goto label_1af7e8;
            case 0x1AF7ECu: goto label_1af7ec;
            case 0x1AF7F0u: goto label_1af7f0;
            case 0x1AF7F4u: goto label_1af7f4;
            case 0x1AF7F8u: goto label_1af7f8;
            case 0x1AF7FCu: goto label_1af7fc;
            case 0x1AF800u: goto label_1af800;
            case 0x1AF804u: goto label_1af804;
            case 0x1AF808u: goto label_1af808;
            case 0x1AF80Cu: goto label_1af80c;
            case 0x1AF810u: goto label_1af810;
            case 0x1AF814u: goto label_1af814;
            case 0x1AF818u: goto label_1af818;
            case 0x1AF81Cu: goto label_1af81c;
            case 0x1AF820u: goto label_1af820;
            case 0x1AF824u: goto label_1af824;
            case 0x1AF828u: goto label_1af828;
            case 0x1AF82Cu: goto label_1af82c;
            case 0x1AF830u: goto label_1af830;
            case 0x1AF834u: goto label_1af834;
            case 0x1AF838u: goto label_1af838;
            case 0x1AF83Cu: goto label_1af83c;
            case 0x1AF840u: goto label_1af840;
            case 0x1AF844u: goto label_1af844;
            case 0x1AF848u: goto label_1af848;
            case 0x1AF84Cu: goto label_1af84c;
            case 0x1AF850u: goto label_1af850;
            case 0x1AF854u: goto label_1af854;
            case 0x1AF858u: goto label_1af858;
            case 0x1AF85Cu: goto label_1af85c;
            case 0x1AF860u: goto label_1af860;
            case 0x1AF864u: goto label_1af864;
            case 0x1AF868u: goto label_1af868;
            case 0x1AF86Cu: goto label_1af86c;
            case 0x1AF870u: goto label_1af870;
            case 0x1AF874u: goto label_1af874;
            case 0x1AF878u: goto label_1af878;
            case 0x1AF87Cu: goto label_1af87c;
            case 0x1AF880u: goto label_1af880;
            case 0x1AF884u: goto label_1af884;
            case 0x1AF888u: goto label_1af888;
            case 0x1AF88Cu: goto label_1af88c;
            case 0x1AF890u: goto label_1af890;
            case 0x1AF894u: goto label_1af894;
            case 0x1AF898u: goto label_1af898;
            case 0x1AF89Cu: goto label_1af89c;
            case 0x1AF8A0u: goto label_1af8a0;
            case 0x1AF8A4u: goto label_1af8a4;
            case 0x1AF8A8u: goto label_1af8a8;
            case 0x1AF8ACu: goto label_1af8ac;
            case 0x1AF8B0u: goto label_1af8b0;
            case 0x1AF8B4u: goto label_1af8b4;
            case 0x1AF8B8u: goto label_1af8b8;
            case 0x1AF8BCu: goto label_1af8bc;
            case 0x1AF8C0u: goto label_1af8c0;
            case 0x1AF8C4u: goto label_1af8c4;
            case 0x1AF8C8u: goto label_1af8c8;
            case 0x1AF8CCu: goto label_1af8cc;
            case 0x1AF8D0u: goto label_1af8d0;
            case 0x1AF8D4u: goto label_1af8d4;
            case 0x1AF8D8u: goto label_1af8d8;
            case 0x1AF8DCu: goto label_1af8dc;
            case 0x1AF8E0u: goto label_1af8e0;
            case 0x1AF8E4u: goto label_1af8e4;
            case 0x1AF8E8u: goto label_1af8e8;
            case 0x1AF8ECu: goto label_1af8ec;
            case 0x1AF8F0u: goto label_1af8f0;
            case 0x1AF8F4u: goto label_1af8f4;
            case 0x1AF8F8u: goto label_1af8f8;
            case 0x1AF8FCu: goto label_1af8fc;
            case 0x1AF900u: goto label_1af900;
            case 0x1AF904u: goto label_1af904;
            case 0x1AF908u: goto label_1af908;
            case 0x1AF90Cu: goto label_1af90c;
            case 0x1AF910u: goto label_1af910;
            case 0x1AF914u: goto label_1af914;
            case 0x1AF918u: goto label_1af918;
            case 0x1AF91Cu: goto label_1af91c;
            case 0x1AF920u: goto label_1af920;
            case 0x1AF924u: goto label_1af924;
            case 0x1AF928u: goto label_1af928;
            case 0x1AF92Cu: goto label_1af92c;
            case 0x1AF930u: goto label_1af930;
            case 0x1AF934u: goto label_1af934;
            case 0x1AF938u: goto label_1af938;
            case 0x1AF93Cu: goto label_1af93c;
            case 0x1AF940u: goto label_1af940;
            case 0x1AF944u: goto label_1af944;
            case 0x1AF948u: goto label_1af948;
            case 0x1AF94Cu: goto label_1af94c;
            case 0x1AF950u: goto label_1af950;
            case 0x1AF954u: goto label_1af954;
            case 0x1AF958u: goto label_1af958;
            case 0x1AF95Cu: goto label_1af95c;
            case 0x1AF960u: goto label_1af960;
            case 0x1AF964u: goto label_1af964;
            case 0x1AF968u: goto label_1af968;
            case 0x1AF96Cu: goto label_1af96c;
            case 0x1AF970u: goto label_1af970;
            case 0x1AF974u: goto label_1af974;
            case 0x1AF978u: goto label_1af978;
            case 0x1AF97Cu: goto label_1af97c;
            case 0x1AF980u: goto label_1af980;
            case 0x1AF984u: goto label_1af984;
            case 0x1AF988u: goto label_1af988;
            case 0x1AF98Cu: goto label_1af98c;
            case 0x1AF990u: goto label_1af990;
            case 0x1AF994u: goto label_1af994;
            case 0x1AF998u: goto label_1af998;
            case 0x1AF99Cu: goto label_1af99c;
            case 0x1AF9A0u: goto label_1af9a0;
            case 0x1AF9A4u: goto label_1af9a4;
            case 0x1AF9A8u: goto label_1af9a8;
            case 0x1AF9ACu: goto label_1af9ac;
            case 0x1AF9B0u: goto label_1af9b0;
            case 0x1AF9B4u: goto label_1af9b4;
            case 0x1AF9B8u: goto label_1af9b8;
            case 0x1AF9BCu: goto label_1af9bc;
            case 0x1AF9C0u: goto label_1af9c0;
            case 0x1AF9C4u: goto label_1af9c4;
            case 0x1AF9C8u: goto label_1af9c8;
            case 0x1AF9CCu: goto label_1af9cc;
            case 0x1AF9D0u: goto label_1af9d0;
            case 0x1AF9D4u: goto label_1af9d4;
            case 0x1AF9D8u: goto label_1af9d8;
            case 0x1AF9DCu: goto label_1af9dc;
            case 0x1AF9E0u: goto label_1af9e0;
            case 0x1AF9E4u: goto label_1af9e4;
            case 0x1AF9E8u: goto label_1af9e8;
            case 0x1AF9ECu: goto label_1af9ec;
            case 0x1AF9F0u: goto label_1af9f0;
            case 0x1AF9F4u: goto label_1af9f4;
            case 0x1AF9F8u: goto label_1af9f8;
            case 0x1AF9FCu: goto label_1af9fc;
            case 0x1AFA00u: goto label_1afa00;
            case 0x1AFA04u: goto label_1afa04;
            case 0x1AFA08u: goto label_1afa08;
            case 0x1AFA0Cu: goto label_1afa0c;
            case 0x1AFA10u: goto label_1afa10;
            case 0x1AFA14u: goto label_1afa14;
            case 0x1AFA18u: goto label_1afa18;
            case 0x1AFA1Cu: goto label_1afa1c;
            case 0x1AFA20u: goto label_1afa20;
            case 0x1AFA24u: goto label_1afa24;
            case 0x1AFA28u: goto label_1afa28;
            case 0x1AFA2Cu: goto label_1afa2c;
            case 0x1AFA30u: goto label_1afa30;
            case 0x1AFA34u: goto label_1afa34;
            case 0x1AFA38u: goto label_1afa38;
            case 0x1AFA3Cu: goto label_1afa3c;
            case 0x1AFA40u: goto label_1afa40;
            case 0x1AFA44u: goto label_1afa44;
            case 0x1AFA48u: goto label_1afa48;
            case 0x1AFA4Cu: goto label_1afa4c;
            case 0x1AFA50u: goto label_1afa50;
            case 0x1AFA54u: goto label_1afa54;
            case 0x1AFA58u: goto label_1afa58;
            case 0x1AFA5Cu: goto label_1afa5c;
            case 0x1AFA60u: goto label_1afa60;
            case 0x1AFA64u: goto label_1afa64;
            case 0x1AFA68u: goto label_1afa68;
            case 0x1AFA6Cu: goto label_1afa6c;
            case 0x1AFA70u: goto label_1afa70;
            case 0x1AFA74u: goto label_1afa74;
            case 0x1AFA78u: goto label_1afa78;
            case 0x1AFA7Cu: goto label_1afa7c;
            case 0x1AFA80u: goto label_1afa80;
            case 0x1AFA84u: goto label_1afa84;
            case 0x1AFA88u: goto label_1afa88;
            case 0x1AFA8Cu: goto label_1afa8c;
            case 0x1AFA90u: goto label_1afa90;
            case 0x1AFA94u: goto label_1afa94;
            case 0x1AFA98u: goto label_1afa98;
            case 0x1AFA9Cu: goto label_1afa9c;
            case 0x1AFAA0u: goto label_1afaa0;
            case 0x1AFAA4u: goto label_1afaa4;
            case 0x1AFAA8u: goto label_1afaa8;
            case 0x1AFAACu: goto label_1afaac;
            case 0x1AFAB0u: goto label_1afab0;
            case 0x1AFAB4u: goto label_1afab4;
            case 0x1AFAB8u: goto label_1afab8;
            case 0x1AFABCu: goto label_1afabc;
            case 0x1AFAC0u: goto label_1afac0;
            case 0x1AFAC4u: goto label_1afac4;
            case 0x1AFAC8u: goto label_1afac8;
            case 0x1AFACCu: goto label_1afacc;
            case 0x1AFAD0u: goto label_1afad0;
            case 0x1AFAD4u: goto label_1afad4;
            case 0x1AFAD8u: goto label_1afad8;
            case 0x1AFADCu: goto label_1afadc;
            case 0x1AFAE0u: goto label_1afae0;
            case 0x1AFAE4u: goto label_1afae4;
            case 0x1AFAE8u: goto label_1afae8;
            case 0x1AFAECu: goto label_1afaec;
            case 0x1AFAF0u: goto label_1afaf0;
            case 0x1AFAF4u: goto label_1afaf4;
            case 0x1AFAF8u: goto label_1afaf8;
            case 0x1AFAFCu: goto label_1afafc;
            case 0x1AFB00u: goto label_1afb00;
            case 0x1AFB04u: goto label_1afb04;
            case 0x1AFB08u: goto label_1afb08;
            case 0x1AFB0Cu: goto label_1afb0c;
            case 0x1AFB10u: goto label_1afb10;
            case 0x1AFB14u: goto label_1afb14;
            case 0x1AFB18u: goto label_1afb18;
            case 0x1AFB1Cu: goto label_1afb1c;
            case 0x1AFB20u: goto label_1afb20;
            case 0x1AFB24u: goto label_1afb24;
            case 0x1AFB28u: goto label_1afb28;
            case 0x1AFB2Cu: goto label_1afb2c;
            case 0x1AFB30u: goto label_1afb30;
            case 0x1AFB34u: goto label_1afb34;
            case 0x1AFB38u: goto label_1afb38;
            case 0x1AFB3Cu: goto label_1afb3c;
            case 0x1AFB40u: goto label_1afb40;
            case 0x1AFB44u: goto label_1afb44;
            case 0x1AFB48u: goto label_1afb48;
            case 0x1AFB4Cu: goto label_1afb4c;
            case 0x1AFB50u: goto label_1afb50;
            case 0x1AFB54u: goto label_1afb54;
            case 0x1AFB58u: goto label_1afb58;
            case 0x1AFB5Cu: goto label_1afb5c;
            case 0x1AFB60u: goto label_1afb60;
            case 0x1AFB64u: goto label_1afb64;
            case 0x1AFB68u: goto label_1afb68;
            case 0x1AFB6Cu: goto label_1afb6c;
            case 0x1AFB70u: goto label_1afb70;
            case 0x1AFB74u: goto label_1afb74;
            case 0x1AFB78u: goto label_1afb78;
            case 0x1AFB7Cu: goto label_1afb7c;
            case 0x1AFB80u: goto label_1afb80;
            case 0x1AFB84u: goto label_1afb84;
            case 0x1AFB88u: goto label_1afb88;
            case 0x1AFB8Cu: goto label_1afb8c;
            case 0x1AFB90u: goto label_1afb90;
            case 0x1AFB94u: goto label_1afb94;
            case 0x1AFB98u: goto label_1afb98;
            case 0x1AFB9Cu: goto label_1afb9c;
            case 0x1AFBA0u: goto label_1afba0;
            case 0x1AFBA4u: goto label_1afba4;
            case 0x1AFBA8u: goto label_1afba8;
            case 0x1AFBACu: goto label_1afbac;
            case 0x1AFBB0u: goto label_1afbb0;
            case 0x1AFBB4u: goto label_1afbb4;
            case 0x1AFBB8u: goto label_1afbb8;
            case 0x1AFBBCu: goto label_1afbbc;
            case 0x1AFBC0u: goto label_1afbc0;
            case 0x1AFBC4u: goto label_1afbc4;
            case 0x1AFBC8u: goto label_1afbc8;
            case 0x1AFBCCu: goto label_1afbcc;
            case 0x1AFBD0u: goto label_1afbd0;
            case 0x1AFBD4u: goto label_1afbd4;
            case 0x1AFBD8u: goto label_1afbd8;
            case 0x1AFBDCu: goto label_1afbdc;
            case 0x1AFBE0u: goto label_1afbe0;
            case 0x1AFBE4u: goto label_1afbe4;
            case 0x1AFBE8u: goto label_1afbe8;
            case 0x1AFBECu: goto label_1afbec;
            case 0x1AFBF0u: goto label_1afbf0;
            case 0x1AFBF4u: goto label_1afbf4;
            case 0x1AFBF8u: goto label_1afbf8;
            case 0x1AFBFCu: goto label_1afbfc;
            case 0x1AFC00u: goto label_1afc00;
            case 0x1AFC04u: goto label_1afc04;
            case 0x1AFC08u: goto label_1afc08;
            case 0x1AFC0Cu: goto label_1afc0c;
            case 0x1AFC10u: goto label_1afc10;
            case 0x1AFC14u: goto label_1afc14;
            case 0x1AFC18u: goto label_1afc18;
            case 0x1AFC1Cu: goto label_1afc1c;
            case 0x1AFC20u: goto label_1afc20;
            case 0x1AFC24u: goto label_1afc24;
            case 0x1AFC28u: goto label_1afc28;
            case 0x1AFC2Cu: goto label_1afc2c;
            case 0x1AFC30u: goto label_1afc30;
            case 0x1AFC34u: goto label_1afc34;
            case 0x1AFC38u: goto label_1afc38;
            case 0x1AFC3Cu: goto label_1afc3c;
            case 0x1AFC40u: goto label_1afc40;
            case 0x1AFC44u: goto label_1afc44;
            case 0x1AFC48u: goto label_1afc48;
            case 0x1AFC4Cu: goto label_1afc4c;
            case 0x1AFC50u: goto label_1afc50;
            case 0x1AFC54u: goto label_1afc54;
            case 0x1AFC58u: goto label_1afc58;
            case 0x1AFC5Cu: goto label_1afc5c;
            case 0x1AFC60u: goto label_1afc60;
            case 0x1AFC64u: goto label_1afc64;
            case 0x1AFC68u: goto label_1afc68;
            case 0x1AFC6Cu: goto label_1afc6c;
            case 0x1AFC70u: goto label_1afc70;
            case 0x1AFC74u: goto label_1afc74;
            case 0x1AFC78u: goto label_1afc78;
            case 0x1AFC7Cu: goto label_1afc7c;
            case 0x1AFC80u: goto label_1afc80;
            case 0x1AFC84u: goto label_1afc84;
            case 0x1AFC88u: goto label_1afc88;
            case 0x1AFC8Cu: goto label_1afc8c;
            case 0x1AFC90u: goto label_1afc90;
            case 0x1AFC94u: goto label_1afc94;
            case 0x1AFC98u: goto label_1afc98;
            case 0x1AFC9Cu: goto label_1afc9c;
            case 0x1AFCA0u: goto label_1afca0;
            case 0x1AFCA4u: goto label_1afca4;
            case 0x1AFCA8u: goto label_1afca8;
            case 0x1AFCACu: goto label_1afcac;
            case 0x1AFCB0u: goto label_1afcb0;
            case 0x1AFCB4u: goto label_1afcb4;
            case 0x1AFCB8u: goto label_1afcb8;
            case 0x1AFCBCu: goto label_1afcbc;
            case 0x1AFCC0u: goto label_1afcc0;
            case 0x1AFCC4u: goto label_1afcc4;
            case 0x1AFCC8u: goto label_1afcc8;
            case 0x1AFCCCu: goto label_1afccc;
            case 0x1AFCD0u: goto label_1afcd0;
            case 0x1AFCD4u: goto label_1afcd4;
            case 0x1AFCD8u: goto label_1afcd8;
            case 0x1AFCDCu: goto label_1afcdc;
            case 0x1AFCE0u: goto label_1afce0;
            case 0x1AFCE4u: goto label_1afce4;
            case 0x1AFCE8u: goto label_1afce8;
            case 0x1AFCECu: goto label_1afcec;
            case 0x1AFCF0u: goto label_1afcf0;
            case 0x1AFCF4u: goto label_1afcf4;
            case 0x1AFCF8u: goto label_1afcf8;
            case 0x1AFCFCu: goto label_1afcfc;
            case 0x1AFD00u: goto label_1afd00;
            case 0x1AFD04u: goto label_1afd04;
            case 0x1AFD08u: goto label_1afd08;
            case 0x1AFD0Cu: goto label_1afd0c;
            case 0x1AFD10u: goto label_1afd10;
            case 0x1AFD14u: goto label_1afd14;
            case 0x1AFD18u: goto label_1afd18;
            case 0x1AFD1Cu: goto label_1afd1c;
            case 0x1AFD20u: goto label_1afd20;
            case 0x1AFD24u: goto label_1afd24;
            case 0x1AFD28u: goto label_1afd28;
            case 0x1AFD2Cu: goto label_1afd2c;
            case 0x1AFD30u: goto label_1afd30;
            case 0x1AFD34u: goto label_1afd34;
            case 0x1AFD38u: goto label_1afd38;
            case 0x1AFD3Cu: goto label_1afd3c;
            case 0x1AFD40u: goto label_1afd40;
            case 0x1AFD44u: goto label_1afd44;
            case 0x1AFD48u: goto label_1afd48;
            case 0x1AFD4Cu: goto label_1afd4c;
            case 0x1AFD50u: goto label_1afd50;
            case 0x1AFD54u: goto label_1afd54;
            case 0x1AFD58u: goto label_1afd58;
            case 0x1AFD5Cu: goto label_1afd5c;
            case 0x1AFD60u: goto label_1afd60;
            case 0x1AFD64u: goto label_1afd64;
            case 0x1AFD68u: goto label_1afd68;
            case 0x1AFD6Cu: goto label_1afd6c;
            case 0x1AFD70u: goto label_1afd70;
            case 0x1AFD74u: goto label_1afd74;
            case 0x1AFD78u: goto label_1afd78;
            case 0x1AFD7Cu: goto label_1afd7c;
            case 0x1AFD80u: goto label_1afd80;
            case 0x1AFD84u: goto label_1afd84;
            case 0x1AFD88u: goto label_1afd88;
            case 0x1AFD8Cu: goto label_1afd8c;
            case 0x1AFD90u: goto label_1afd90;
            case 0x1AFD94u: goto label_1afd94;
            case 0x1AFD98u: goto label_1afd98;
            case 0x1AFD9Cu: goto label_1afd9c;
            case 0x1AFDA0u: goto label_1afda0;
            case 0x1AFDA4u: goto label_1afda4;
            case 0x1AFDA8u: goto label_1afda8;
            case 0x1AFDACu: goto label_1afdac;
            case 0x1AFDB0u: goto label_1afdb0;
            case 0x1AFDB4u: goto label_1afdb4;
            case 0x1AFDB8u: goto label_1afdb8;
            case 0x1AFDBCu: goto label_1afdbc;
            case 0x1AFDC0u: goto label_1afdc0;
            case 0x1AFDC4u: goto label_1afdc4;
            case 0x1AFDC8u: goto label_1afdc8;
            case 0x1AFDCCu: goto label_1afdcc;
            case 0x1AFDD0u: goto label_1afdd0;
            case 0x1AFDD4u: goto label_1afdd4;
            case 0x1AFDD8u: goto label_1afdd8;
            case 0x1AFDDCu: goto label_1afddc;
            case 0x1AFDE0u: goto label_1afde0;
            case 0x1AFDE4u: goto label_1afde4;
            case 0x1AFDE8u: goto label_1afde8;
            case 0x1AFDECu: goto label_1afdec;
            case 0x1AFDF0u: goto label_1afdf0;
            case 0x1AFDF4u: goto label_1afdf4;
            case 0x1AFDF8u: goto label_1afdf8;
            case 0x1AFDFCu: goto label_1afdfc;
            case 0x1AFE00u: goto label_1afe00;
            case 0x1AFE04u: goto label_1afe04;
            case 0x1AFE08u: goto label_1afe08;
            case 0x1AFE0Cu: goto label_1afe0c;
            case 0x1AFE10u: goto label_1afe10;
            case 0x1AFE14u: goto label_1afe14;
            case 0x1AFE18u: goto label_1afe18;
            case 0x1AFE1Cu: goto label_1afe1c;
            case 0x1AFE20u: goto label_1afe20;
            case 0x1AFE24u: goto label_1afe24;
            case 0x1AFE28u: goto label_1afe28;
            case 0x1AFE2Cu: goto label_1afe2c;
            case 0x1AFE30u: goto label_1afe30;
            case 0x1AFE34u: goto label_1afe34;
            case 0x1AFE38u: goto label_1afe38;
            case 0x1AFE3Cu: goto label_1afe3c;
            case 0x1AFE40u: goto label_1afe40;
            case 0x1AFE44u: goto label_1afe44;
            case 0x1AFE48u: goto label_1afe48;
            case 0x1AFE4Cu: goto label_1afe4c;
            case 0x1AFE50u: goto label_1afe50;
            case 0x1AFE54u: goto label_1afe54;
            case 0x1AFE58u: goto label_1afe58;
            case 0x1AFE5Cu: goto label_1afe5c;
            case 0x1AFE60u: goto label_1afe60;
            case 0x1AFE64u: goto label_1afe64;
            case 0x1AFE68u: goto label_1afe68;
            case 0x1AFE6Cu: goto label_1afe6c;
            case 0x1AFE70u: goto label_1afe70;
            case 0x1AFE74u: goto label_1afe74;
            case 0x1AFE78u: goto label_1afe78;
            case 0x1AFE7Cu: goto label_1afe7c;
            case 0x1AFE80u: goto label_1afe80;
            case 0x1AFE84u: goto label_1afe84;
            case 0x1AFE88u: goto label_1afe88;
            case 0x1AFE8Cu: goto label_1afe8c;
            case 0x1AFE90u: goto label_1afe90;
            case 0x1AFE94u: goto label_1afe94;
            case 0x1AFE98u: goto label_1afe98;
            case 0x1AFE9Cu: goto label_1afe9c;
            case 0x1AFEA0u: goto label_1afea0;
            case 0x1AFEA4u: goto label_1afea4;
            case 0x1AFEA8u: goto label_1afea8;
            case 0x1AFEACu: goto label_1afeac;
            case 0x1AFEB0u: goto label_1afeb0;
            case 0x1AFEB4u: goto label_1afeb4;
            case 0x1AFEB8u: goto label_1afeb8;
            case 0x1AFEBCu: goto label_1afebc;
            case 0x1AFEC0u: goto label_1afec0;
            case 0x1AFEC4u: goto label_1afec4;
            case 0x1AFEC8u: goto label_1afec8;
            case 0x1AFECCu: goto label_1afecc;
            case 0x1AFED0u: goto label_1afed0;
            case 0x1AFED4u: goto label_1afed4;
            case 0x1AFED8u: goto label_1afed8;
            case 0x1AFEDCu: goto label_1afedc;
            case 0x1AFEE0u: goto label_1afee0;
            case 0x1AFEE4u: goto label_1afee4;
            case 0x1AFEE8u: goto label_1afee8;
            case 0x1AFEECu: goto label_1afeec;
            case 0x1AFEF0u: goto label_1afef0;
            case 0x1AFEF4u: goto label_1afef4;
            case 0x1AFEF8u: goto label_1afef8;
            case 0x1AFEFCu: goto label_1afefc;
            case 0x1AFF00u: goto label_1aff00;
            case 0x1AFF04u: goto label_1aff04;
            case 0x1AFF08u: goto label_1aff08;
            case 0x1AFF0Cu: goto label_1aff0c;
            case 0x1AFF10u: goto label_1aff10;
            case 0x1AFF14u: goto label_1aff14;
            case 0x1AFF18u: goto label_1aff18;
            case 0x1AFF1Cu: goto label_1aff1c;
            case 0x1AFF20u: goto label_1aff20;
            case 0x1AFF24u: goto label_1aff24;
            case 0x1AFF28u: goto label_1aff28;
            case 0x1AFF2Cu: goto label_1aff2c;
            case 0x1AFF30u: goto label_1aff30;
            case 0x1AFF34u: goto label_1aff34;
            case 0x1AFF38u: goto label_1aff38;
            case 0x1AFF3Cu: goto label_1aff3c;
            case 0x1AFF40u: goto label_1aff40;
            case 0x1AFF44u: goto label_1aff44;
            case 0x1AFF48u: goto label_1aff48;
            case 0x1AFF4Cu: goto label_1aff4c;
            case 0x1AFF50u: goto label_1aff50;
            case 0x1AFF54u: goto label_1aff54;
            case 0x1AFF58u: goto label_1aff58;
            case 0x1AFF5Cu: goto label_1aff5c;
            case 0x1AFF60u: goto label_1aff60;
            case 0x1AFF64u: goto label_1aff64;
            case 0x1AFF68u: goto label_1aff68;
            case 0x1AFF6Cu: goto label_1aff6c;
            case 0x1AFF70u: goto label_1aff70;
            case 0x1AFF74u: goto label_1aff74;
            case 0x1AFF78u: goto label_1aff78;
            case 0x1AFF7Cu: goto label_1aff7c;
            case 0x1AFF80u: goto label_1aff80;
            case 0x1AFF84u: goto label_1aff84;
            case 0x1AFF88u: goto label_1aff88;
            case 0x1AFF8Cu: goto label_1aff8c;
            case 0x1AFF90u: goto label_1aff90;
            case 0x1AFF94u: goto label_1aff94;
            case 0x1AFF98u: goto label_1aff98;
            case 0x1AFF9Cu: goto label_1aff9c;
            case 0x1AFFA0u: goto label_1affa0;
            case 0x1AFFA4u: goto label_1affa4;
            case 0x1AFFA8u: goto label_1affa8;
            case 0x1AFFACu: goto label_1affac;
            case 0x1AFFB0u: goto label_1affb0;
            case 0x1AFFB4u: goto label_1affb4;
            case 0x1AFFB8u: goto label_1affb8;
            case 0x1AFFBCu: goto label_1affbc;
            case 0x1AFFC0u: goto label_1affc0;
            case 0x1AFFC4u: goto label_1affc4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1affc0:
    ctx->pc = 0x1AFFC8u;
}
