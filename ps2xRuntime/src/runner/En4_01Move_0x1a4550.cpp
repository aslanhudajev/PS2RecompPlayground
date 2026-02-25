#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En4_01Move
// Address: 0x1a4550 - 0x1a57e4
void En4_01Move_0x1a4550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En4_01Move_0x1a4550");
#endif

    ctx->pc = 0x1a4550u;

label_1a4550:
    // 0x1a4550: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a4550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a4554:
    // 0x1a4554: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a4558:
    // 0x1a4558: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a4558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a455c:
    // 0x1a455c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a455cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4560:
    // 0x1a4560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a4560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a4564:
    // 0x1a4564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4568:
    // 0x1a4568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a4568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a456c:
    // 0x1a456c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4570:
    // 0x1a4570: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a4570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4574:
    // 0x1a4574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4578:
    // 0x1a4578: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a4578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a457c:
    // 0x1a457c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a457cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a4580:
    // 0x1a4580: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a4580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1a4584:
    // 0x1a4584: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a4588:
    // 0x1a4588: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a4588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a458c:
    // 0x1a458c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4590:
    // 0x1a4590: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a4590u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a4594:
    // 0x1a4594: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a4594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a4598:
    // 0x1a4598: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a459c:
    // 0x1a459c: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1a459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45a0:
    // 0x1a45a0: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1a45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45a4:
    // 0x1a45a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a45a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a45a8:
    // 0x1a45a8: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1a45a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1a45ac:
    // 0x1a45ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a45b0:
    // 0x1a45b0: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a45b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45b4:
    // 0x1a45b4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a45b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45b8:
    // 0x1a45b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a45b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a45bc:
    // 0x1a45bc: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a45bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a45c0:
    // 0x1a45c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a45c4:
    // 0x1a45c4: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a45c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45c8:
    // 0x1a45c8: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a45c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45cc:
    // 0x1a45cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a45ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a45d0:
    // 0x1a45d0: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a45d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1a45d4:
    // 0x1a45d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a45d8:
    // 0x1a45d8: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1a45d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a45dc:
    // 0x1a45dc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a45dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45e0:
    // 0x1a45e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a45e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a45e4:
    // 0x1a45e4: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1a45e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1a45e8:
    // 0x1a45e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a45ec:
    // 0x1a45ec: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a45ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a45f0:
    // 0x1a45f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a45f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a45f4:
    // 0x1a45f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a45f8:
    if (ctx->pc == 0x1A45F8u) {
        ctx->pc = 0x1A45F8u;
            // 0x1a45f8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1A45FCu;
        goto label_1a45fc;
    }
    ctx->pc = 0x1A45F4u;
    {
        const bool branch_taken_0x1a45f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A45F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A45F4u;
            // 0x1a45f8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45f4) {
            ctx->pc = 0x1A4618u;
            goto label_1a4618;
        }
    }
    ctx->pc = 0x1A45FCu;
label_1a45fc:
    // 0x1a45fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a45fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a4600:
    // 0x1a4600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4600u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4604:
    // 0x1a4604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4608:
    // 0x1a4608: 0x0  nop
    ctx->pc = 0x1a4608u;
    // NOP
label_1a460c:
    // 0x1a460c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a460cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4610:
    // 0x1a4610: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a4610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a4614:
    // 0x1a4614: 0x0  nop
    ctx->pc = 0x1a4614u;
    // NOP
label_1a4618:
    // 0x1a4618: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a4618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a461c:
    // 0x1a461c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a4620:
    // 0x1a4620: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4620u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4624:
    // 0x1a4624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4628:
    // 0x1a4628: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a4628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a462c:
    // 0x1a462c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a462cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4630:
    // 0x1a4630: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a4634:
    if (ctx->pc == 0x1A4634u) {
        ctx->pc = 0x1A4634u;
            // 0x1a4634: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1A4638u;
        goto label_1a4638;
    }
    ctx->pc = 0x1A4630u;
    {
        const bool branch_taken_0x1a4630 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4630u;
            // 0x1a4634: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4630) {
            ctx->pc = 0x1A4650u;
            goto label_1a4650;
        }
    }
    ctx->pc = 0x1A4638u;
label_1a4638:
    // 0x1a4638: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a463c:
    // 0x1a463c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a463cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4640:
    // 0x1a4640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4644:
    // 0x1a4644: 0x0  nop
    ctx->pc = 0x1a4644u;
    // NOP
label_1a4648:
    // 0x1a4648: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4648u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a464c:
    // 0x1a464c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a464cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a4650:
    // 0x1a4650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4654:
    // 0x1a4654: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a4654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a4658:
    // 0x1a4658: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4658u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a465c:
    // 0x1a465c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a465cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4660:
    // 0x1a4660: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4664:
    // 0x1a4664: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4668:
    // 0x1a4668: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a466c:
    if (ctx->pc == 0x1A466Cu) {
        ctx->pc = 0x1A466Cu;
            // 0x1a466c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A4670u;
        goto label_1a4670;
    }
    ctx->pc = 0x1A4668u;
    {
        const bool branch_taken_0x1a4668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4668u;
            // 0x1a466c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4668) {
            ctx->pc = 0x1A4688u;
            goto label_1a4688;
        }
    }
    ctx->pc = 0x1A4670u;
label_1a4670:
    // 0x1a4670: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a4670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a4674:
    // 0x1a4674: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4674u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4678:
    // 0x1a4678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a467c:
    // 0x1a467c: 0x0  nop
    ctx->pc = 0x1a467cu;
    // NOP
label_1a4680:
    // 0x1a4680: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4684:
    // 0x1a4684: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a4684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a4688:
    // 0x1a4688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a4688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a468c:
    // 0x1a468c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a468cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a4690:
    // 0x1a4690: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4690u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4694:
    // 0x1a4694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4698:
    // 0x1a4698: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a469c:
    // 0x1a469c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a469cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a46a0:
    // 0x1a46a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a46a4:
    if (ctx->pc == 0x1A46A4u) {
        ctx->pc = 0x1A46A4u;
            // 0x1a46a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A46A8u;
        goto label_1a46a8;
    }
    ctx->pc = 0x1A46A0u;
    {
        const bool branch_taken_0x1a46a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A46A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46A0u;
            // 0x1a46a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46a0) {
            ctx->pc = 0x1A46C0u;
            goto label_1a46c0;
        }
    }
    ctx->pc = 0x1A46A8u;
label_1a46a8:
    // 0x1a46a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a46ac:
    // 0x1a46ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a46acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a46b0:
    // 0x1a46b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a46b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a46b4:
    // 0x1a46b4: 0x0  nop
    ctx->pc = 0x1a46b4u;
    // NOP
label_1a46b8:
    // 0x1a46b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a46b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a46bc:
    // 0x1a46bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a46bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a46c0:
    // 0x1a46c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a46c4:
    // 0x1a46c4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a46c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a46c8:
    // 0x1a46c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a46c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a46cc:
    // 0x1a46cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a46ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a46d0:
    // 0x1a46d0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a46d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a46d4:
    // 0x1a46d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a46d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a46d8:
    // 0x1a46d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a46dc:
    if (ctx->pc == 0x1A46DCu) {
        ctx->pc = 0x1A46DCu;
            // 0x1a46dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A46E0u;
        goto label_1a46e0;
    }
    ctx->pc = 0x1A46D8u;
    {
        const bool branch_taken_0x1a46d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A46DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46D8u;
            // 0x1a46dc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a46d8) {
            ctx->pc = 0x1A46F8u;
            goto label_1a46f8;
        }
    }
    ctx->pc = 0x1A46E0u;
label_1a46e0:
    // 0x1a46e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a46e4:
    // 0x1a46e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a46e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a46e8:
    // 0x1a46e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a46e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a46ec:
    // 0x1a46ec: 0x0  nop
    ctx->pc = 0x1a46ecu;
    // NOP
label_1a46f0:
    // 0x1a46f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a46f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a46f4:
    // 0x1a46f4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a46f8:
    // 0x1a46f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a46fc:
    // 0x1a46fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a4700:
    // 0x1a4700: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a4700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4704:
    // 0x1a4704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4708:
    // 0x1a4708: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a4708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a470c:
    // 0x1a470c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a470cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4710:
    // 0x1a4710: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a4714:
    if (ctx->pc == 0x1A4714u) {
        ctx->pc = 0x1A4714u;
            // 0x1a4714: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A4718u;
        goto label_1a4718;
    }
    ctx->pc = 0x1A4710u;
    {
        const bool branch_taken_0x1a4710 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4710u;
            // 0x1a4714: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4710) {
            ctx->pc = 0x1A4730u;
            goto label_1a4730;
        }
    }
    ctx->pc = 0x1A4718u;
label_1a4718:
    // 0x1a4718: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a4718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a471c:
    // 0x1a471c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a471cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a4720:
    // 0x1a4720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4724:
    // 0x1a4724: 0x0  nop
    ctx->pc = 0x1a4724u;
    // NOP
label_1a4728:
    // 0x1a4728: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4728u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a472c:
    // 0x1a472c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a472cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a4730:
    // 0x1a4730: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4734:
    // 0x1a4734: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1a4734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1a4738:
    // 0x1a4738: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a473c:
    // 0x1a473c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a4740:
    // 0x1a4740: 0xc0695fc  jal         func_1A57F0
label_1a4744:
    if (ctx->pc == 0x1A4744u) {
        ctx->pc = 0x1A4744u;
            // 0x1a4744: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->pc = 0x1A4748u;
        goto label_1a4748;
    }
    ctx->pc = 0x1A4740u;
    SET_GPR_U32(ctx, 31, 0x1A4748u);
    ctx->pc = 0x1A4744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4740u;
            // 0x1a4744: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A57F0u;
    if (runtime->hasFunction(0x1A57F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A57F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4748u; }
        if (ctx->pc != 0x1A4748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1a57f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4748u; }
        if (ctx->pc != 0x1A4748u) { return; }
    }
    ctx->pc = 0x1A4748u;
label_1a4748:
    // 0x1a4748: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a474c:
    // 0x1a474c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1a474cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1a4750:
    // 0x1a4750: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4754:
    // 0x1a4754: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1a4754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1a4758:
    // 0x1a4758: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a4758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a475c:
    // 0x1a475c: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1a475cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1a4760:
    // 0x1a4760: 0x10200375  beqz        $at, . + 4 + (0x375 << 2)
label_1a4764:
    if (ctx->pc == 0x1A4764u) {
        ctx->pc = 0x1A4764u;
            // 0x1a4764: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1A4768u;
        goto label_1a4768;
    }
    ctx->pc = 0x1A4760u;
    {
        const bool branch_taken_0x1a4760 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4760u;
            // 0x1a4764: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4760) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4768u;
label_1a4768:
    // 0x1a4768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a476c:
    // 0x1a476c: 0x24632940  addiu       $v1, $v1, 0x2940
    ctx->pc = 0x1a476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10560));
label_1a4770:
    // 0x1a4770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4774:
    // 0x1a4774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a4774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a4778:
    // 0x1a4778: 0x400008  jr          $v0
label_1a477c:
    if (ctx->pc == 0x1A477Cu) {
        ctx->pc = 0x1A4780u;
        goto label_1a4780;
    }
    ctx->pc = 0x1A4778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4780u: goto label_1a4780;
            case 0x1A4A18u: goto label_1a4a18;
            case 0x1A4E70u: goto label_1a4e70;
            case 0x1A5370u: goto label_1a5370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A4780u;
label_1a4780:
    // 0x1a4780: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1a4780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a4784:
    // 0x1a4784: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1a4788:
    if (ctx->pc == 0x1A4788u) {
        ctx->pc = 0x1A478Cu;
        goto label_1a478c;
    }
    ctx->pc = 0x1A4784u;
    {
        const bool branch_taken_0x1a4784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4784) {
            ctx->pc = 0x1A4828u;
            goto label_1a4828;
        }
    }
    ctx->pc = 0x1A478Cu;
label_1a478c:
    // 0x1a478c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4790:
    // 0x1a4790: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4794:
    // 0x1a4794: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4794u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4798:
    // 0x1a4798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a479c:
    // 0x1a479c: 0x0  nop
    ctx->pc = 0x1a479cu;
    // NOP
label_1a47a0:
    // 0x1a47a0: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1a47a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a47a4:
    // 0x1a47a4: 0xc040d72  jal         func_1035C8
label_1a47a8:
    if (ctx->pc == 0x1A47A8u) {
        ctx->pc = 0x1A47A8u;
            // 0x1a47a8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A47ACu;
        goto label_1a47ac;
    }
    ctx->pc = 0x1A47A4u;
    SET_GPR_U32(ctx, 31, 0x1A47ACu);
    ctx->pc = 0x1A47A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47A4u;
            // 0x1a47a8: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47ACu; }
        if (ctx->pc != 0x1A47ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47ACu; }
        if (ctx->pc != 0x1A47ACu) { return; }
    }
    ctx->pc = 0x1A47ACu;
label_1a47ac:
    // 0x1a47ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a47acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a47b0:
    // 0x1a47b0: 0xc040078  jal         func_1001E0
label_1a47b4:
    if (ctx->pc == 0x1A47B4u) {
        ctx->pc = 0x1A47B4u;
            // 0x1a47b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A47B8u;
        goto label_1a47b8;
    }
    ctx->pc = 0x1A47B0u;
    SET_GPR_U32(ctx, 31, 0x1A47B8u);
    ctx->pc = 0x1A47B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47B0u;
            // 0x1a47b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47B8u; }
        if (ctx->pc != 0x1A47B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47B8u; }
        if (ctx->pc != 0x1A47B8u) { return; }
    }
    ctx->pc = 0x1A47B8u;
label_1a47b8:
    // 0x1a47b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a47bc:
    if (ctx->pc == 0x1A47BCu) {
        ctx->pc = 0x1A47C0u;
        goto label_1a47c0;
    }
    ctx->pc = 0x1A47B8u;
    {
        const bool branch_taken_0x1a47b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a47b8) {
            ctx->pc = 0x1A47E0u;
            goto label_1a47e0;
        }
    }
    ctx->pc = 0x1A47C0u;
label_1a47c0:
    // 0x1a47c0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a47c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a47c4:
    // 0x1a47c4: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1a47c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1a47c8:
    // 0x1a47c8: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1a47c8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1a47cc:
    // 0x1a47cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a47ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a47d0:
    // 0x1a47d0: 0x0  nop
    ctx->pc = 0x1a47d0u;
    // NOP
label_1a47d4:
    // 0x1a47d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a47d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a47d8:
    // 0x1a47d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a47dc:
    if (ctx->pc == 0x1A47DCu) {
        ctx->pc = 0x1A47DCu;
            // 0x1a47dc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A47E0u;
        goto label_1a47e0;
    }
    ctx->pc = 0x1A47D8u;
    {
        const bool branch_taken_0x1a47d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A47DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A47D8u;
            // 0x1a47dc: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a47d8) {
            ctx->pc = 0x1A47F0u;
            goto label_1a47f0;
        }
    }
    ctx->pc = 0x1A47E0u;
label_1a47e0:
    // 0x1a47e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a47e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a47e4:
    // 0x1a47e4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a47e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a47e8:
    // 0x1a47e8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a47ec:
    // 0x1a47ec: 0x0  nop
    ctx->pc = 0x1a47ecu;
    // NOP
label_1a47f0:
    // 0x1a47f0: 0xc065d00  jal         func_197400
label_1a47f4:
    if (ctx->pc == 0x1A47F4u) {
        ctx->pc = 0x1A47F8u;
        goto label_1a47f8;
    }
    ctx->pc = 0x1A47F0u;
    SET_GPR_U32(ctx, 31, 0x1A47F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47F8u; }
        if (ctx->pc != 0x1A47F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A47F8u; }
        if (ctx->pc != 0x1A47F8u) { return; }
    }
    ctx->pc = 0x1A47F8u;
label_1a47f8:
    // 0x1a47f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a47f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a47fc:
    // 0x1a47fc: 0x1443034e  bne         $v0, $v1, . + 4 + (0x34E << 2)
label_1a4800:
    if (ctx->pc == 0x1A4800u) {
        ctx->pc = 0x1A4804u;
        goto label_1a4804;
    }
    ctx->pc = 0x1A47FCu;
    {
        const bool branch_taken_0x1a47fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a47fc) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4804u;
label_1a4804:
    // 0x1a4804: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4808:
    // 0x1a4808: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a480c:
    // 0x1a480c: 0x1462034a  bne         $v1, $v0, . + 4 + (0x34A << 2)
label_1a4810:
    if (ctx->pc == 0x1A4810u) {
        ctx->pc = 0x1A4814u;
        goto label_1a4814;
    }
    ctx->pc = 0x1A480Cu;
    {
        const bool branch_taken_0x1a480c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a480c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4814u;
label_1a4814:
    // 0x1a4814: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4818:
    // 0x1a4818: 0xc06560c  jal         func_195830
label_1a481c:
    if (ctx->pc == 0x1A481Cu) {
        ctx->pc = 0x1A481Cu;
            // 0x1a481c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4820u;
        goto label_1a4820;
    }
    ctx->pc = 0x1A4818u;
    SET_GPR_U32(ctx, 31, 0x1A4820u);
    ctx->pc = 0x1A481Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4818u;
            // 0x1a481c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4820u; }
        if (ctx->pc != 0x1A4820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4820u; }
        if (ctx->pc != 0x1A4820u) { return; }
    }
    ctx->pc = 0x1A4820u;
label_1a4820:
    // 0x1a4820: 0x10000345  b           . + 4 + (0x345 << 2)
label_1a4824:
    if (ctx->pc == 0x1A4824u) {
        ctx->pc = 0x1A4828u;
        goto label_1a4828;
    }
    ctx->pc = 0x1A4820u;
    {
        const bool branch_taken_0x1a4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4820) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4828u;
label_1a4828:
    // 0x1a4828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a482c:
    // 0x1a482c: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
label_1a4830:
    if (ctx->pc == 0x1A4830u) {
        ctx->pc = 0x1A4830u;
            // 0x1a4830: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1A4834u;
        goto label_1a4834;
    }
    ctx->pc = 0x1A482Cu;
    {
        const bool branch_taken_0x1a482c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A482Cu;
            // 0x1a4830: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a482c) {
            ctx->pc = 0x1A4978u;
            goto label_1a4978;
        }
    }
    ctx->pc = 0x1A4834u;
label_1a4834:
    // 0x1a4834: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a4834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a4838:
    // 0x1a4838: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a4838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a483c:
    // 0x1a483c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a4840:
    // 0x1a4840: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a4840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4844:
    // 0x1a4844: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a4844u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a4848:
    // 0x1a4848: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a484c:
    // 0x1a484c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a484cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4850:
    // 0x1a4850: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a4850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a4854:
    // 0x1a4854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4858:
    // 0x1a4858: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a4858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a485c:
    // 0x1a485c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a4860:
    // 0x1a4860: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a4860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4864:
    // 0x1a4864: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a4864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a4868:
    // 0x1a4868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a486c:
    // 0x1a486c: 0x0  nop
    ctx->pc = 0x1a486cu;
    // NOP
label_1a4870:
    // 0x1a4870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4874:
    // 0x1a4874: 0xc04b6ee  jal         func_12DBB8
label_1a4878:
    if (ctx->pc == 0x1A4878u) {
        ctx->pc = 0x1A4878u;
            // 0x1a4878: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A487Cu;
        goto label_1a487c;
    }
    ctx->pc = 0x1A4874u;
    SET_GPR_U32(ctx, 31, 0x1A487Cu);
    ctx->pc = 0x1A4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4874u;
            // 0x1a4878: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A487Cu; }
        if (ctx->pc != 0x1A487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A487Cu; }
        if (ctx->pc != 0x1A487Cu) { return; }
    }
    ctx->pc = 0x1A487Cu;
label_1a487c:
    // 0x1a487c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4880:
    // 0x1a4880: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4884:
    // 0x1a4884: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4888:
    // 0x1a4888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a488c:
    // 0x1a488c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a488cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4890:
    // 0x1a4890: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a4894:
    if (ctx->pc == 0x1A4894u) {
        ctx->pc = 0x1A4894u;
            // 0x1a4894: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1A4898u;
        goto label_1a4898;
    }
    ctx->pc = 0x1A4890u;
    {
        const bool branch_taken_0x1a4890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4890u;
            // 0x1a4894: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4890) {
            ctx->pc = 0x1A48A0u;
            goto label_1a48a0;
        }
    }
    ctx->pc = 0x1A4898u;
label_1a4898:
    // 0x1a4898: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4898u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a489c:
    // 0x1a489c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a489cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a48a0:
    // 0x1a48a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a48a4:
    // 0x1a48a4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a48a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a48a8:
    // 0x1a48a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a48ac:
    // 0x1a48ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a48acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a48b0:
    // 0x1a48b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a48b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a48b4:
    // 0x1a48b4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a48b8:
    if (ctx->pc == 0x1A48B8u) {
        ctx->pc = 0x1A48B8u;
            // 0x1a48b8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1A48BCu;
        goto label_1a48bc;
    }
    ctx->pc = 0x1A48B4u;
    {
        const bool branch_taken_0x1a48b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A48B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48B4u;
            // 0x1a48b8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48b4) {
            ctx->pc = 0x1A48C8u;
            goto label_1a48c8;
        }
    }
    ctx->pc = 0x1A48BCu;
label_1a48bc:
    // 0x1a48bc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a48bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a48c0:
    // 0x1a48c0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a48c4:
    // 0x1a48c4: 0x0  nop
    ctx->pc = 0x1a48c4u;
    // NOP
label_1a48c8:
    // 0x1a48c8: 0xc065d00  jal         func_197400
label_1a48cc:
    if (ctx->pc == 0x1A48CCu) {
        ctx->pc = 0x1A48D0u;
        goto label_1a48d0;
    }
    ctx->pc = 0x1A48C8u;
    SET_GPR_U32(ctx, 31, 0x1A48D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48D0u; }
        if (ctx->pc != 0x1A48D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48D0u; }
        if (ctx->pc != 0x1A48D0u) { return; }
    }
    ctx->pc = 0x1A48D0u;
label_1a48d0:
    // 0x1a48d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a48d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a48d4:
    // 0x1a48d4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a48d8:
    if (ctx->pc == 0x1A48D8u) {
        ctx->pc = 0x1A48DCu;
        goto label_1a48dc;
    }
    ctx->pc = 0x1A48D4u;
    {
        const bool branch_taken_0x1a48d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a48d4) {
            ctx->pc = 0x1A48F8u;
            goto label_1a48f8;
        }
    }
    ctx->pc = 0x1A48DCu;
label_1a48dc:
    // 0x1a48dc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a48e0:
    // 0x1a48e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a48e4:
    // 0x1a48e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a48e8:
    if (ctx->pc == 0x1A48E8u) {
        ctx->pc = 0x1A48ECu;
        goto label_1a48ec;
    }
    ctx->pc = 0x1A48E4u;
    {
        const bool branch_taken_0x1a48e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a48e4) {
            ctx->pc = 0x1A48F8u;
            goto label_1a48f8;
        }
    }
    ctx->pc = 0x1A48ECu;
label_1a48ec:
    // 0x1a48ec: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a48ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a48f0:
    // 0x1a48f0: 0xc06560c  jal         func_195830
label_1a48f4:
    if (ctx->pc == 0x1A48F4u) {
        ctx->pc = 0x1A48F4u;
            // 0x1a48f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A48F8u;
        goto label_1a48f8;
    }
    ctx->pc = 0x1A48F0u;
    SET_GPR_U32(ctx, 31, 0x1A48F8u);
    ctx->pc = 0x1A48F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A48F0u;
            // 0x1a48f4: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48F8u; }
        if (ctx->pc != 0x1A48F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A48F8u; }
        if (ctx->pc != 0x1A48F8u) { return; }
    }
    ctx->pc = 0x1A48F8u;
label_1a48f8:
    // 0x1a48f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a48f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a48fc:
    // 0x1a48fc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a4900:
    // 0x1a4900: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a4904:
    if (ctx->pc == 0x1A4904u) {
        ctx->pc = 0x1A4908u;
        goto label_1a4908;
    }
    ctx->pc = 0x1A4900u;
    {
        const bool branch_taken_0x1a4900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4900) {
            ctx->pc = 0x1A4918u;
            goto label_1a4918;
        }
    }
    ctx->pc = 0x1A4908u;
label_1a4908:
    // 0x1a4908: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a4908u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a490c:
    // 0x1a490c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a490cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4910:
    // 0x1a4910: 0xc0655b0  jal         func_1956C0
label_1a4914:
    if (ctx->pc == 0x1A4914u) {
        ctx->pc = 0x1A4914u;
            // 0x1a4914: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4918u;
        goto label_1a4918;
    }
    ctx->pc = 0x1A4910u;
    SET_GPR_U32(ctx, 31, 0x1A4918u);
    ctx->pc = 0x1A4914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4910u;
            // 0x1a4914: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4918u; }
        if (ctx->pc != 0x1A4918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4918u; }
        if (ctx->pc != 0x1A4918u) { return; }
    }
    ctx->pc = 0x1A4918u;
label_1a4918:
    // 0x1a4918: 0xc065d00  jal         func_197400
label_1a491c:
    if (ctx->pc == 0x1A491Cu) {
        ctx->pc = 0x1A4920u;
        goto label_1a4920;
    }
    ctx->pc = 0x1A4918u;
    SET_GPR_U32(ctx, 31, 0x1A4920u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4920u; }
        if (ctx->pc != 0x1A4920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4920u; }
        if (ctx->pc != 0x1A4920u) { return; }
    }
    ctx->pc = 0x1A4920u;
label_1a4920:
    // 0x1a4920: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a4924:
    // 0x1a4924: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1a4928:
    if (ctx->pc == 0x1A4928u) {
        ctx->pc = 0x1A492Cu;
        goto label_1a492c;
    }
    ctx->pc = 0x1A4924u;
    {
        const bool branch_taken_0x1a4924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4924) {
            ctx->pc = 0x1A4948u;
            goto label_1a4948;
        }
    }
    ctx->pc = 0x1A492Cu;
label_1a492c:
    // 0x1a492c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a492cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4930:
    // 0x1a4930: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a4934:
    // 0x1a4934: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a4938:
    if (ctx->pc == 0x1A4938u) {
        ctx->pc = 0x1A493Cu;
        goto label_1a493c;
    }
    ctx->pc = 0x1A4934u;
    {
        const bool branch_taken_0x1a4934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4934) {
            ctx->pc = 0x1A4948u;
            goto label_1a4948;
        }
    }
    ctx->pc = 0x1A493Cu;
label_1a493c:
    // 0x1a493c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a493cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4940:
    // 0x1a4940: 0xc06560c  jal         func_195830
label_1a4944:
    if (ctx->pc == 0x1A4944u) {
        ctx->pc = 0x1A4944u;
            // 0x1a4944: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4948u;
        goto label_1a4948;
    }
    ctx->pc = 0x1A4940u;
    SET_GPR_U32(ctx, 31, 0x1A4948u);
    ctx->pc = 0x1A4944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4940u;
            // 0x1a4944: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4948u; }
        if (ctx->pc != 0x1A4948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4948u; }
        if (ctx->pc != 0x1A4948u) { return; }
    }
    ctx->pc = 0x1A4948u;
label_1a4948:
    // 0x1a4948: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a494c:
    // 0x1a494c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1a494cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1a4950:
    // 0x1a4950: 0x142002f9  bnez        $at, . + 4 + (0x2F9 << 2)
label_1a4954:
    if (ctx->pc == 0x1A4954u) {
        ctx->pc = 0x1A4958u;
        goto label_1a4958;
    }
    ctx->pc = 0x1A4950u;
    {
        const bool branch_taken_0x1a4950 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4950) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4958u;
label_1a4958:
    // 0x1a4958: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a495c:
    // 0x1a495c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a495cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a4960:
    // 0x1a4960: 0xc065598  jal         func_195660
label_1a4964:
    if (ctx->pc == 0x1A4964u) {
        ctx->pc = 0x1A4964u;
            // 0x1a4964: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1A4968u;
        goto label_1a4968;
    }
    ctx->pc = 0x1A4960u;
    SET_GPR_U32(ctx, 31, 0x1A4968u);
    ctx->pc = 0x1A4964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4960u;
            // 0x1a4964: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4968u; }
        if (ctx->pc != 0x1A4968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4968u; }
        if (ctx->pc != 0x1A4968u) { return; }
    }
    ctx->pc = 0x1A4968u;
label_1a4968:
    // 0x1a4968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a496c:
    // 0x1a496c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a496cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a4970:
    // 0x1a4970: 0x100002f1  b           . + 4 + (0x2F1 << 2)
label_1a4974:
    if (ctx->pc == 0x1A4974u) {
        ctx->pc = 0x1A4974u;
            // 0x1a4974: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1A4978u;
        goto label_1a4978;
    }
    ctx->pc = 0x1A4970u;
    {
        const bool branch_taken_0x1a4970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4970u;
            // 0x1a4974: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4970) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4978u;
label_1a4978:
    // 0x1a4978: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a497c:
    // 0x1a497c: 0x146202ee  bne         $v1, $v0, . + 4 + (0x2EE << 2)
label_1a4980:
    if (ctx->pc == 0x1A4980u) {
        ctx->pc = 0x1A4984u;
        goto label_1a4984;
    }
    ctx->pc = 0x1A497Cu;
    {
        const bool branch_taken_0x1a497c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a497c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4984u;
label_1a4984:
    // 0x1a4984: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1a4984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4988:
    // 0x1a4988: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1a4988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_1a498c:
    // 0x1a498c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a498cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4990:
    // 0x1a4990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4994:
    // 0x1a4994: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4994u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4998:
    // 0x1a4998: 0x0  nop
    ctx->pc = 0x1a4998u;
    // NOP
label_1a499c:
    // 0x1a499c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a499cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a49a0:
    // 0x1a49a0: 0xe60100d4  swc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a49a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a49a4:
    // 0x1a49a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a49a8:
    // 0x1a49a8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a49a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a49ac:
    // 0x1a49ac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a49acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a49b0:
    // 0x1a49b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1a49b4:
    if (ctx->pc == 0x1A49B4u) {
        ctx->pc = 0x1A49B4u;
            // 0x1a49b4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1A49B8u;
        goto label_1a49b8;
    }
    ctx->pc = 0x1A49B0u;
    {
        const bool branch_taken_0x1a49b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A49B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49B0u;
            // 0x1a49b4: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49b0) {
            ctx->pc = 0x1A49C8u;
            goto label_1a49c8;
        }
    }
    ctx->pc = 0x1A49B8u;
label_1a49b8:
    // 0x1a49b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a49b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a49bc:
    // 0x1a49bc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a49c0:
    if (ctx->pc == 0x1A49C0u) {
        ctx->pc = 0x1A49C0u;
            // 0x1a49c0: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1A49C4u;
        goto label_1a49c4;
    }
    ctx->pc = 0x1A49BCu;
    {
        const bool branch_taken_0x1a49bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A49C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49BCu;
            // 0x1a49c0: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49bc) {
            ctx->pc = 0x1A49E0u;
            goto label_1a49e0;
        }
    }
    ctx->pc = 0x1A49C4u;
label_1a49c4:
    // 0x1a49c4: 0x0  nop
    ctx->pc = 0x1a49c4u;
    // NOP
label_1a49c8:
    // 0x1a49c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a49c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a49cc:
    // 0x1a49cc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a49d0:
    if (ctx->pc == 0x1A49D0u) {
        ctx->pc = 0x1A49D0u;
            // 0x1a49d0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A49D4u;
        goto label_1a49d4;
    }
    ctx->pc = 0x1A49CCu;
    {
        const bool branch_taken_0x1a49cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A49D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A49CCu;
            // 0x1a49d0: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a49cc) {
            ctx->pc = 0x1A49E0u;
            goto label_1a49e0;
        }
    }
    ctx->pc = 0x1A49D4u;
label_1a49d4:
    // 0x1a49d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a49d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a49d8:
    // 0x1a49d8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a49dc:
    // 0x1a49dc: 0x0  nop
    ctx->pc = 0x1a49dcu;
    // NOP
label_1a49e0:
    // 0x1a49e0: 0xc065d00  jal         func_197400
label_1a49e4:
    if (ctx->pc == 0x1A49E4u) {
        ctx->pc = 0x1A49E8u;
        goto label_1a49e8;
    }
    ctx->pc = 0x1A49E0u;
    SET_GPR_U32(ctx, 31, 0x1A49E8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49E8u; }
        if (ctx->pc != 0x1A49E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A49E8u; }
        if (ctx->pc != 0x1A49E8u) { return; }
    }
    ctx->pc = 0x1A49E8u;
label_1a49e8:
    // 0x1a49e8: 0x184002d3  blez        $v0, . + 4 + (0x2D3 << 2)
label_1a49ec:
    if (ctx->pc == 0x1A49ECu) {
        ctx->pc = 0x1A49F0u;
        goto label_1a49f0;
    }
    ctx->pc = 0x1A49E8u;
    {
        const bool branch_taken_0x1a49e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a49e8) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A49F0u;
label_1a49f0:
    // 0x1a49f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a49f4:
    // 0x1a49f4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a49f8:
    // 0x1a49f8: 0x146202cf  bne         $v1, $v0, . + 4 + (0x2CF << 2)
label_1a49fc:
    if (ctx->pc == 0x1A49FCu) {
        ctx->pc = 0x1A4A00u;
        goto label_1a4a00;
    }
    ctx->pc = 0x1A49F8u;
    {
        const bool branch_taken_0x1a49f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a49f8) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4A00u;
label_1a4a00:
    // 0x1a4a00: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4a04:
    // 0x1a4a04: 0xc06560c  jal         func_195830
label_1a4a08:
    if (ctx->pc == 0x1A4A08u) {
        ctx->pc = 0x1A4A08u;
            // 0x1a4a08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4A0Cu;
        goto label_1a4a0c;
    }
    ctx->pc = 0x1A4A04u;
    SET_GPR_U32(ctx, 31, 0x1A4A0Cu);
    ctx->pc = 0x1A4A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A04u;
            // 0x1a4a08: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A0Cu; }
        if (ctx->pc != 0x1A4A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A0Cu; }
        if (ctx->pc != 0x1A4A0Cu) { return; }
    }
    ctx->pc = 0x1A4A0Cu;
label_1a4a0c:
    // 0x1a4a0c: 0x100002ca  b           . + 4 + (0x2CA << 2)
label_1a4a10:
    if (ctx->pc == 0x1A4A10u) {
        ctx->pc = 0x1A4A14u;
        goto label_1a4a14;
    }
    ctx->pc = 0x1A4A0Cu;
    {
        const bool branch_taken_0x1a4a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a0c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4A14u;
label_1a4a14:
    // 0x1a4a14: 0x0  nop
    ctx->pc = 0x1a4a14u;
    // NOP
label_1a4a18:
    // 0x1a4a18: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1a4a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a4a1c:
    // 0x1a4a1c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
label_1a4a20:
    if (ctx->pc == 0x1A4A20u) {
        ctx->pc = 0x1A4A24u;
        goto label_1a4a24;
    }
    ctx->pc = 0x1A4A1Cu;
    {
        const bool branch_taken_0x1a4a1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a1c) {
            ctx->pc = 0x1A4B38u;
            goto label_1a4b38;
        }
    }
    ctx->pc = 0x1A4A24u;
label_1a4a24:
    // 0x1a4a24: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4a28:
    // 0x1a4a28: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4a2c:
    // 0x1a4a2c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4a2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4a30:
    // 0x1a4a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4a34:
    // 0x1a4a34: 0x0  nop
    ctx->pc = 0x1a4a34u;
    // NOP
label_1a4a38:
    // 0x1a4a38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4a38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4a3c:
    // 0x1a4a3c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a4a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a4a40:
    // 0x1a4a40: 0xc040d72  jal         func_1035C8
label_1a4a44:
    if (ctx->pc == 0x1A4A44u) {
        ctx->pc = 0x1A4A44u;
            // 0x1a4a44: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4A48u;
        goto label_1a4a48;
    }
    ctx->pc = 0x1A4A40u;
    SET_GPR_U32(ctx, 31, 0x1A4A48u);
    ctx->pc = 0x1A4A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A40u;
            // 0x1a4a44: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A48u; }
        if (ctx->pc != 0x1A4A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A48u; }
        if (ctx->pc != 0x1A4A48u) { return; }
    }
    ctx->pc = 0x1A4A48u;
label_1a4a48:
    // 0x1a4a48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a4c:
    // 0x1a4a4c: 0xc040078  jal         func_1001E0
label_1a4a50:
    if (ctx->pc == 0x1A4A50u) {
        ctx->pc = 0x1A4A50u;
            // 0x1a4a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A54u;
        goto label_1a4a54;
    }
    ctx->pc = 0x1A4A4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4A54u);
    ctx->pc = 0x1A4A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A4Cu;
            // 0x1a4a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A54u; }
        if (ctx->pc != 0x1A4A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A54u; }
        if (ctx->pc != 0x1A4A54u) { return; }
    }
    ctx->pc = 0x1A4A54u;
label_1a4a54:
    // 0x1a4a54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4a58:
    if (ctx->pc == 0x1A4A58u) {
        ctx->pc = 0x1A4A5Cu;
        goto label_1a4a5c;
    }
    ctx->pc = 0x1A4A54u;
    {
        const bool branch_taken_0x1a4a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a54) {
            ctx->pc = 0x1A4A78u;
            goto label_1a4a78;
        }
    }
    ctx->pc = 0x1A4A5Cu;
label_1a4a5c:
    // 0x1a4a5c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a4a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4a60:
    // 0x1a4a60: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1a4a64:
    // 0x1a4a64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4a64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4a68:
    // 0x1a4a68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4a6c:
    // 0x1a4a6c: 0x0  nop
    ctx->pc = 0x1a4a6cu;
    // NOP
label_1a4a70:
    // 0x1a4a70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4a70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4a74:
    // 0x1a4a74: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a4a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a4a78:
    // 0x1a4a78: 0xc040d72  jal         func_1035C8
label_1a4a7c:
    if (ctx->pc == 0x1A4A7Cu) {
        ctx->pc = 0x1A4A7Cu;
            // 0x1a4a7c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4A80u;
        goto label_1a4a80;
    }
    ctx->pc = 0x1A4A78u;
    SET_GPR_U32(ctx, 31, 0x1A4A80u);
    ctx->pc = 0x1A4A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A78u;
            // 0x1a4a7c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A80u; }
        if (ctx->pc != 0x1A4A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A80u; }
        if (ctx->pc != 0x1A4A80u) { return; }
    }
    ctx->pc = 0x1A4A80u;
label_1a4a80:
    // 0x1a4a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a84:
    // 0x1a4a84: 0xc04008c  jal         func_100230
label_1a4a88:
    if (ctx->pc == 0x1A4A88u) {
        ctx->pc = 0x1A4A88u;
            // 0x1a4a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A8Cu;
        goto label_1a4a8c;
    }
    ctx->pc = 0x1A4A84u;
    SET_GPR_U32(ctx, 31, 0x1A4A8Cu);
    ctx->pc = 0x1A4A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A84u;
            // 0x1a4a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A8Cu; }
        if (ctx->pc != 0x1A4A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A8Cu; }
        if (ctx->pc != 0x1A4A8Cu) { return; }
    }
    ctx->pc = 0x1A4A8Cu;
label_1a4a8c:
    // 0x1a4a8c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4a90:
    if (ctx->pc == 0x1A4A90u) {
        ctx->pc = 0x1A4A94u;
        goto label_1a4a94;
    }
    ctx->pc = 0x1A4A8Cu;
    {
        const bool branch_taken_0x1a4a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4a8c) {
            ctx->pc = 0x1A4AB0u;
            goto label_1a4ab0;
        }
    }
    ctx->pc = 0x1A4A94u;
label_1a4a94:
    // 0x1a4a94: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a4a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4a98:
    // 0x1a4a98: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1a4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
label_1a4a9c:
    // 0x1a4a9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4a9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4aa0:
    // 0x1a4aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4aa4:
    // 0x1a4aa4: 0x0  nop
    ctx->pc = 0x1a4aa4u;
    // NOP
label_1a4aa8:
    // 0x1a4aa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4aac:
    // 0x1a4aac: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a4aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a4ab0:
    // 0x1a4ab0: 0xc040d72  jal         func_1035C8
label_1a4ab4:
    if (ctx->pc == 0x1A4AB4u) {
        ctx->pc = 0x1A4AB4u;
            // 0x1a4ab4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4AB8u;
        goto label_1a4ab8;
    }
    ctx->pc = 0x1A4AB0u;
    SET_GPR_U32(ctx, 31, 0x1A4AB8u);
    ctx->pc = 0x1A4AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AB0u;
            // 0x1a4ab4: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AB8u; }
        if (ctx->pc != 0x1A4AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AB8u; }
        if (ctx->pc != 0x1A4AB8u) { return; }
    }
    ctx->pc = 0x1A4AB8u;
label_1a4ab8:
    // 0x1a4ab8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4abc:
    // 0x1a4abc: 0xc040078  jal         func_1001E0
label_1a4ac0:
    if (ctx->pc == 0x1A4AC0u) {
        ctx->pc = 0x1A4AC0u;
            // 0x1a4ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AC4u;
        goto label_1a4ac4;
    }
    ctx->pc = 0x1A4ABCu;
    SET_GPR_U32(ctx, 31, 0x1A4AC4u);
    ctx->pc = 0x1A4AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ABCu;
            // 0x1a4ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AC4u; }
        if (ctx->pc != 0x1A4AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4AC4u; }
        if (ctx->pc != 0x1A4AC4u) { return; }
    }
    ctx->pc = 0x1A4AC4u;
label_1a4ac4:
    // 0x1a4ac4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a4ac8:
    if (ctx->pc == 0x1A4AC8u) {
        ctx->pc = 0x1A4ACCu;
        goto label_1a4acc;
    }
    ctx->pc = 0x1A4AC4u;
    {
        const bool branch_taken_0x1a4ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ac4) {
            ctx->pc = 0x1A4AF0u;
            goto label_1a4af0;
        }
    }
    ctx->pc = 0x1A4ACCu;
label_1a4acc:
    // 0x1a4acc: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4ad0:
    // 0x1a4ad0: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1a4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1a4ad4:
    // 0x1a4ad4: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1a4ad4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1a4ad8:
    // 0x1a4ad8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4ad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4adc:
    // 0x1a4adc: 0x0  nop
    ctx->pc = 0x1a4adcu;
    // NOP
label_1a4ae0:
    // 0x1a4ae0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4ae0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4ae4:
    // 0x1a4ae4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4ae8:
    if (ctx->pc == 0x1A4AE8u) {
        ctx->pc = 0x1A4AE8u;
            // 0x1a4ae8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A4AECu;
        goto label_1a4aec;
    }
    ctx->pc = 0x1A4AE4u;
    {
        const bool branch_taken_0x1a4ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4AE4u;
            // 0x1a4ae8: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ae4) {
            ctx->pc = 0x1A4B00u;
            goto label_1a4b00;
        }
    }
    ctx->pc = 0x1A4AECu;
label_1a4aec:
    // 0x1a4aec: 0x0  nop
    ctx->pc = 0x1a4aecu;
    // NOP
label_1a4af0:
    // 0x1a4af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4af4:
    // 0x1a4af4: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a4af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a4af8:
    // 0x1a4af8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a4afc:
    // 0x1a4afc: 0x0  nop
    ctx->pc = 0x1a4afcu;
    // NOP
label_1a4b00:
    // 0x1a4b00: 0xc065d00  jal         func_197400
label_1a4b04:
    if (ctx->pc == 0x1A4B04u) {
        ctx->pc = 0x1A4B08u;
        goto label_1a4b08;
    }
    ctx->pc = 0x1A4B00u;
    SET_GPR_U32(ctx, 31, 0x1A4B08u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B08u; }
        if (ctx->pc != 0x1A4B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B08u; }
        if (ctx->pc != 0x1A4B08u) { return; }
    }
    ctx->pc = 0x1A4B08u;
label_1a4b08:
    // 0x1a4b08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4b0c:
    // 0x1a4b0c: 0x1443028a  bne         $v0, $v1, . + 4 + (0x28A << 2)
label_1a4b10:
    if (ctx->pc == 0x1A4B10u) {
        ctx->pc = 0x1A4B14u;
        goto label_1a4b14;
    }
    ctx->pc = 0x1A4B0Cu;
    {
        const bool branch_taken_0x1a4b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4b0c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4B14u;
label_1a4b14:
    // 0x1a4b14: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4b18:
    // 0x1a4b18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a4b1c:
    // 0x1a4b1c: 0x14620286  bne         $v1, $v0, . + 4 + (0x286 << 2)
label_1a4b20:
    if (ctx->pc == 0x1A4B20u) {
        ctx->pc = 0x1A4B24u;
        goto label_1a4b24;
    }
    ctx->pc = 0x1A4B1Cu;
    {
        const bool branch_taken_0x1a4b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4b1c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4B24u;
label_1a4b24:
    // 0x1a4b24: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4b28:
    // 0x1a4b28: 0xc06560c  jal         func_195830
label_1a4b2c:
    if (ctx->pc == 0x1A4B2Cu) {
        ctx->pc = 0x1A4B2Cu;
            // 0x1a4b2c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4B30u;
        goto label_1a4b30;
    }
    ctx->pc = 0x1A4B28u;
    SET_GPR_U32(ctx, 31, 0x1A4B30u);
    ctx->pc = 0x1A4B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B28u;
            // 0x1a4b2c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B30u; }
        if (ctx->pc != 0x1A4B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B30u; }
        if (ctx->pc != 0x1A4B30u) { return; }
    }
    ctx->pc = 0x1A4B30u;
label_1a4b30:
    // 0x1a4b30: 0x10000281  b           . + 4 + (0x281 << 2)
label_1a4b34:
    if (ctx->pc == 0x1A4B34u) {
        ctx->pc = 0x1A4B38u;
        goto label_1a4b38;
    }
    ctx->pc = 0x1A4B30u;
    {
        const bool branch_taken_0x1a4b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b30) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4B38u;
label_1a4b38:
    // 0x1a4b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4b3c:
    // 0x1a4b3c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
label_1a4b40:
    if (ctx->pc == 0x1A4B40u) {
        ctx->pc = 0x1A4B40u;
            // 0x1a4b40: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1A4B44u;
        goto label_1a4b44;
    }
    ctx->pc = 0x1A4B3Cu;
    {
        const bool branch_taken_0x1a4b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B3Cu;
            // 0x1a4b40: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b3c) {
            ctx->pc = 0x1A4CA0u;
            goto label_1a4ca0;
        }
    }
    ctx->pc = 0x1A4B44u;
label_1a4b44:
    // 0x1a4b44: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a4b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a4b48:
    // 0x1a4b48: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a4b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a4b4c:
    // 0x1a4b4c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a4b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a4b50:
    // 0x1a4b50: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a4b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4b54:
    // 0x1a4b54: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a4b54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a4b58:
    // 0x1a4b58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a4b5c:
    // 0x1a4b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4b60:
    // 0x1a4b60: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a4b64:
    // 0x1a4b64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4b68:
    // 0x1a4b68: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a4b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a4b6c:
    // 0x1a4b6c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a4b70:
    // 0x1a4b70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4b74:
    // 0x1a4b74: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a4b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a4b78:
    // 0x1a4b78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4b7c:
    // 0x1a4b7c: 0x0  nop
    ctx->pc = 0x1a4b7cu;
    // NOP
label_1a4b80:
    // 0x1a4b80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4b80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4b84:
    // 0x1a4b84: 0xc04b6ee  jal         func_12DBB8
label_1a4b88:
    if (ctx->pc == 0x1A4B88u) {
        ctx->pc = 0x1A4B88u;
            // 0x1a4b88: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A4B8Cu;
        goto label_1a4b8c;
    }
    ctx->pc = 0x1A4B84u;
    SET_GPR_U32(ctx, 31, 0x1A4B8Cu);
    ctx->pc = 0x1A4B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4B84u;
            // 0x1a4b88: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B8Cu; }
        if (ctx->pc != 0x1A4B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4B8Cu; }
        if (ctx->pc != 0x1A4B8Cu) { return; }
    }
    ctx->pc = 0x1A4B8Cu;
label_1a4b8c:
    // 0x1a4b8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4b90:
    // 0x1a4b90: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4b94:
    // 0x1a4b94: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4b98:
    // 0x1a4b98: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4b98u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4b9c:
    // 0x1a4b9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4b9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4ba0:
    // 0x1a4ba0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a4ba4:
    if (ctx->pc == 0x1A4BA4u) {
        ctx->pc = 0x1A4BA4u;
            // 0x1a4ba4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1A4BA8u;
        goto label_1a4ba8;
    }
    ctx->pc = 0x1A4BA0u;
    {
        const bool branch_taken_0x1a4ba0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BA0u;
            // 0x1a4ba4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ba0) {
            ctx->pc = 0x1A4BB0u;
            goto label_1a4bb0;
        }
    }
    ctx->pc = 0x1A4BA8u;
label_1a4ba8:
    // 0x1a4ba8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4ba8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4bac:
    // 0x1a4bac: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4bb0:
    // 0x1a4bb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4bb4:
    // 0x1a4bb4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4bb8:
    // 0x1a4bb8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4bbc:
    // 0x1a4bbc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4bbcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4bc0:
    // 0x1a4bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4bc4:
    // 0x1a4bc4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a4bc8:
    if (ctx->pc == 0x1A4BC8u) {
        ctx->pc = 0x1A4BC8u;
            // 0x1a4bc8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1A4BCCu;
        goto label_1a4bcc;
    }
    ctx->pc = 0x1A4BC4u;
    {
        const bool branch_taken_0x1a4bc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BC4u;
            // 0x1a4bc8: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4bc4) {
            ctx->pc = 0x1A4BD8u;
            goto label_1a4bd8;
        }
    }
    ctx->pc = 0x1A4BCCu;
label_1a4bcc:
    // 0x1a4bcc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4bccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4bd0:
    // 0x1a4bd0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4bd4:
    // 0x1a4bd4: 0x0  nop
    ctx->pc = 0x1a4bd4u;
    // NOP
label_1a4bd8:
    // 0x1a4bd8: 0xc065d00  jal         func_197400
label_1a4bdc:
    if (ctx->pc == 0x1A4BDCu) {
        ctx->pc = 0x1A4BE0u;
        goto label_1a4be0;
    }
    ctx->pc = 0x1A4BD8u;
    SET_GPR_U32(ctx, 31, 0x1A4BE0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BE0u; }
        if (ctx->pc != 0x1A4BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4BE0u; }
        if (ctx->pc != 0x1A4BE0u) { return; }
    }
    ctx->pc = 0x1A4BE0u;
label_1a4be0:
    // 0x1a4be0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4be4:
    // 0x1a4be4: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a4be8:
    if (ctx->pc == 0x1A4BE8u) {
        ctx->pc = 0x1A4BECu;
        goto label_1a4bec;
    }
    ctx->pc = 0x1A4BE4u;
    {
        const bool branch_taken_0x1a4be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a4be4) {
            ctx->pc = 0x1A4C08u;
            goto label_1a4c08;
        }
    }
    ctx->pc = 0x1A4BECu;
label_1a4bec:
    // 0x1a4bec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4bf0:
    // 0x1a4bf0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a4bf4:
    // 0x1a4bf4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a4bf8:
    if (ctx->pc == 0x1A4BF8u) {
        ctx->pc = 0x1A4BFCu;
        goto label_1a4bfc;
    }
    ctx->pc = 0x1A4BF4u;
    {
        const bool branch_taken_0x1a4bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4bf4) {
            ctx->pc = 0x1A4C08u;
            goto label_1a4c08;
        }
    }
    ctx->pc = 0x1A4BFCu;
label_1a4bfc:
    // 0x1a4bfc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4c00:
    // 0x1a4c00: 0xc06560c  jal         func_195830
label_1a4c04:
    if (ctx->pc == 0x1A4C04u) {
        ctx->pc = 0x1A4C04u;
            // 0x1a4c04: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4C08u;
        goto label_1a4c08;
    }
    ctx->pc = 0x1A4C00u;
    SET_GPR_U32(ctx, 31, 0x1A4C08u);
    ctx->pc = 0x1A4C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C00u;
            // 0x1a4c04: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C08u; }
        if (ctx->pc != 0x1A4C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C08u; }
        if (ctx->pc != 0x1A4C08u) { return; }
    }
    ctx->pc = 0x1A4C08u;
label_1a4c08:
    // 0x1a4c08: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4c0c:
    // 0x1a4c0c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a4c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a4c10:
    // 0x1a4c10: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1a4c14:
    if (ctx->pc == 0x1A4C14u) {
        ctx->pc = 0x1A4C18u;
        goto label_1a4c18;
    }
    ctx->pc = 0x1A4C10u;
    {
        const bool branch_taken_0x1a4c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4c10) {
            ctx->pc = 0x1A4C40u;
            goto label_1a4c40;
        }
    }
    ctx->pc = 0x1A4C18u;
label_1a4c18:
    // 0x1a4c18: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1a4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1a4c1c:
    // 0x1a4c1c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4c20:
    // 0x1a4c20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a4c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4c24:
    // 0x1a4c24: 0xc0655b0  jal         func_1956C0
label_1a4c28:
    if (ctx->pc == 0x1A4C28u) {
        ctx->pc = 0x1A4C28u;
            // 0x1a4c28: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4C2Cu;
        goto label_1a4c2c;
    }
    ctx->pc = 0x1A4C24u;
    SET_GPR_U32(ctx, 31, 0x1A4C2Cu);
    ctx->pc = 0x1A4C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C24u;
            // 0x1a4c28: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C2Cu; }
        if (ctx->pc != 0x1A4C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C2Cu; }
        if (ctx->pc != 0x1A4C2Cu) { return; }
    }
    ctx->pc = 0x1A4C2Cu;
label_1a4c2c:
    // 0x1a4c2c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1a4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_1a4c30:
    // 0x1a4c30: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4c34:
    // 0x1a4c34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a4c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4c38:
    // 0x1a4c38: 0xc0655b0  jal         func_1956C0
label_1a4c3c:
    if (ctx->pc == 0x1A4C3Cu) {
        ctx->pc = 0x1A4C3Cu;
            // 0x1a4c3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4C40u;
        goto label_1a4c40;
    }
    ctx->pc = 0x1A4C38u;
    SET_GPR_U32(ctx, 31, 0x1A4C40u);
    ctx->pc = 0x1A4C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C38u;
            // 0x1a4c3c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C40u; }
        if (ctx->pc != 0x1A4C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C40u; }
        if (ctx->pc != 0x1A4C40u) { return; }
    }
    ctx->pc = 0x1A4C40u;
label_1a4c40:
    // 0x1a4c40: 0xc065d00  jal         func_197400
label_1a4c44:
    if (ctx->pc == 0x1A4C44u) {
        ctx->pc = 0x1A4C48u;
        goto label_1a4c48;
    }
    ctx->pc = 0x1A4C40u;
    SET_GPR_U32(ctx, 31, 0x1A4C48u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C48u; }
        if (ctx->pc != 0x1A4C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C48u; }
        if (ctx->pc != 0x1A4C48u) { return; }
    }
    ctx->pc = 0x1A4C48u;
label_1a4c48:
    // 0x1a4c48: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a4c48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a4c4c:
    // 0x1a4c4c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1a4c50:
    if (ctx->pc == 0x1A4C50u) {
        ctx->pc = 0x1A4C54u;
        goto label_1a4c54;
    }
    ctx->pc = 0x1A4C4Cu;
    {
        const bool branch_taken_0x1a4c4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c4c) {
            ctx->pc = 0x1A4C70u;
            goto label_1a4c70;
        }
    }
    ctx->pc = 0x1A4C54u;
label_1a4c54:
    // 0x1a4c54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4c58:
    // 0x1a4c58: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a4c5c:
    // 0x1a4c5c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a4c60:
    if (ctx->pc == 0x1A4C60u) {
        ctx->pc = 0x1A4C64u;
        goto label_1a4c64;
    }
    ctx->pc = 0x1A4C5Cu;
    {
        const bool branch_taken_0x1a4c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4c5c) {
            ctx->pc = 0x1A4C70u;
            goto label_1a4c70;
        }
    }
    ctx->pc = 0x1A4C64u;
label_1a4c64:
    // 0x1a4c64: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4c68:
    // 0x1a4c68: 0xc06560c  jal         func_195830
label_1a4c6c:
    if (ctx->pc == 0x1A4C6Cu) {
        ctx->pc = 0x1A4C6Cu;
            // 0x1a4c6c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4C70u;
        goto label_1a4c70;
    }
    ctx->pc = 0x1A4C68u;
    SET_GPR_U32(ctx, 31, 0x1A4C70u);
    ctx->pc = 0x1A4C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C68u;
            // 0x1a4c6c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C70u; }
        if (ctx->pc != 0x1A4C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C70u; }
        if (ctx->pc != 0x1A4C70u) { return; }
    }
    ctx->pc = 0x1A4C70u;
label_1a4c70:
    // 0x1a4c70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a4c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4c74:
    // 0x1a4c74: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1a4c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1a4c78:
    // 0x1a4c78: 0x1420022f  bnez        $at, . + 4 + (0x22F << 2)
label_1a4c7c:
    if (ctx->pc == 0x1A4C7Cu) {
        ctx->pc = 0x1A4C80u;
        goto label_1a4c80;
    }
    ctx->pc = 0x1A4C78u;
    {
        const bool branch_taken_0x1a4c78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4c78) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4C80u;
label_1a4c80:
    // 0x1a4c80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4c84:
    // 0x1a4c84: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a4c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a4c88:
    // 0x1a4c88: 0xc065598  jal         func_195660
label_1a4c8c:
    if (ctx->pc == 0x1A4C8Cu) {
        ctx->pc = 0x1A4C8Cu;
            // 0x1a4c8c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1A4C90u;
        goto label_1a4c90;
    }
    ctx->pc = 0x1A4C88u;
    SET_GPR_U32(ctx, 31, 0x1A4C90u);
    ctx->pc = 0x1A4C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C88u;
            // 0x1a4c8c: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C90u; }
        if (ctx->pc != 0x1A4C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4C90u; }
        if (ctx->pc != 0x1A4C90u) { return; }
    }
    ctx->pc = 0x1A4C90u;
label_1a4c90:
    // 0x1a4c90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4c94:
    // 0x1a4c94: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a4c94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a4c98:
    // 0x1a4c98: 0x10000227  b           . + 4 + (0x227 << 2)
label_1a4c9c:
    if (ctx->pc == 0x1A4C9Cu) {
        ctx->pc = 0x1A4C9Cu;
            // 0x1a4c9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1A4CA0u;
        goto label_1a4ca0;
    }
    ctx->pc = 0x1A4C98u;
    {
        const bool branch_taken_0x1a4c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C98u;
            // 0x1a4c9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c98) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4CA0u;
label_1a4ca0:
    // 0x1a4ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a4ca4:
    // 0x1a4ca4: 0x14620224  bne         $v1, $v0, . + 4 + (0x224 << 2)
label_1a4ca8:
    if (ctx->pc == 0x1A4CA8u) {
        ctx->pc = 0x1A4CA8u;
            // 0x1a4ca8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1A4CACu;
        goto label_1a4cac;
    }
    ctx->pc = 0x1A4CA4u;
    {
        const bool branch_taken_0x1a4ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CA4u;
            // 0x1a4ca8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ca4) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4CACu;
label_1a4cac:
    // 0x1a4cac: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a4cb0:
    // 0x1a4cb0: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a4cb4:
    // 0x1a4cb4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a4cb8:
    // 0x1a4cb8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4cbc:
    // 0x1a4cbc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a4cc0:
    // 0x1a4cc0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a4cc4:
    // 0x1a4cc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4cc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4cc8:
    // 0x1a4cc8: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a4ccc:
    // 0x1a4ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4cd0:
    // 0x1a4cd0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a4cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a4cd4:
    // 0x1a4cd4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a4cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a4cd8:
    // 0x1a4cd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4cdc:
    // 0x1a4cdc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a4cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a4ce0:
    // 0x1a4ce0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4ce4:
    // 0x1a4ce4: 0x0  nop
    ctx->pc = 0x1a4ce4u;
    // NOP
label_1a4ce8:
    // 0x1a4ce8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4cec:
    // 0x1a4cec: 0xc04b6ee  jal         func_12DBB8
label_1a4cf0:
    if (ctx->pc == 0x1A4CF0u) {
        ctx->pc = 0x1A4CF0u;
            // 0x1a4cf0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A4CF4u;
        goto label_1a4cf4;
    }
    ctx->pc = 0x1A4CECu;
    SET_GPR_U32(ctx, 31, 0x1A4CF4u);
    ctx->pc = 0x1A4CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CECu;
            // 0x1a4cf0: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CF4u; }
        if (ctx->pc != 0x1A4CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CF4u; }
        if (ctx->pc != 0x1A4CF4u) { return; }
    }
    ctx->pc = 0x1A4CF4u;
label_1a4cf4:
    // 0x1a4cf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4cf8:
    // 0x1a4cf8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4cfc:
    // 0x1a4cfc: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4d00:
    // 0x1a4d00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4d00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4d04:
    // 0x1a4d04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4d04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4d08:
    // 0x1a4d08: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a4d0c:
    if (ctx->pc == 0x1A4D0Cu) {
        ctx->pc = 0x1A4D0Cu;
            // 0x1a4d0c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1A4D10u;
        goto label_1a4d10;
    }
    ctx->pc = 0x1A4D08u;
    {
        const bool branch_taken_0x1a4d08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D08u;
            // 0x1a4d0c: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d08) {
            ctx->pc = 0x1A4D18u;
            goto label_1a4d18;
        }
    }
    ctx->pc = 0x1A4D10u;
label_1a4d10:
    // 0x1a4d10: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4d10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4d14:
    // 0x1a4d14: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4d18:
    // 0x1a4d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4d1c:
    // 0x1a4d1c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4d20:
    // 0x1a4d20: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4d24:
    // 0x1a4d24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4d24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4d28:
    // 0x1a4d28: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4d2c:
    // 0x1a4d2c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a4d30:
    if (ctx->pc == 0x1A4D30u) {
        ctx->pc = 0x1A4D30u;
            // 0x1a4d30: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A4D34u;
        goto label_1a4d34;
    }
    ctx->pc = 0x1A4D2Cu;
    {
        const bool branch_taken_0x1a4d2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D2Cu;
            // 0x1a4d30: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d2c) {
            ctx->pc = 0x1A4D40u;
            goto label_1a4d40;
        }
    }
    ctx->pc = 0x1A4D34u;
label_1a4d34:
    // 0x1a4d34: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4d34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4d38:
    // 0x1a4d38: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4d3c:
    // 0x1a4d3c: 0x0  nop
    ctx->pc = 0x1a4d3cu;
    // NOP
label_1a4d40:
    // 0x1a4d40: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1a4d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1a4d44:
    // 0x1a4d44: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1a4d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4d48:
    // 0x1a4d48: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1a4d48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1a4d4c:
    // 0x1a4d4c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1a4d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1a4d50:
    // 0x1a4d50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a4d50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a4d54:
    // 0x1a4d54: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1a4d54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1a4d58:
    // 0x1a4d58: 0xc040d72  jal         func_1035C8
label_1a4d5c:
    if (ctx->pc == 0x1A4D5Cu) {
        ctx->pc = 0x1A4D5Cu;
            // 0x1a4d5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A4D60u;
        goto label_1a4d60;
    }
    ctx->pc = 0x1A4D58u;
    SET_GPR_U32(ctx, 31, 0x1A4D60u);
    ctx->pc = 0x1A4D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D58u;
            // 0x1a4d5c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D60u; }
        if (ctx->pc != 0x1A4D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D60u; }
        if (ctx->pc != 0x1A4D60u) { return; }
    }
    ctx->pc = 0x1A4D60u;
label_1a4d60:
    // 0x1a4d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4d64:
    // 0x1a4d64: 0xc040880  jal         func_102200
label_1a4d68:
    if (ctx->pc == 0x1A4D68u) {
        ctx->pc = 0x1A4D68u;
            // 0x1a4d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D6Cu;
        goto label_1a4d6c;
    }
    ctx->pc = 0x1A4D64u;
    SET_GPR_U32(ctx, 31, 0x1A4D6Cu);
    ctx->pc = 0x1A4D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D64u;
            // 0x1a4d68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D6Cu; }
        if (ctx->pc != 0x1A4D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D6Cu; }
        if (ctx->pc != 0x1A4D6Cu) { return; }
    }
    ctx->pc = 0x1A4D6Cu;
label_1a4d6c:
    // 0x1a4d6c: 0xc040a74  jal         func_1029D0
label_1a4d70:
    if (ctx->pc == 0x1A4D70u) {
        ctx->pc = 0x1A4D70u;
            // 0x1a4d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D74u;
        goto label_1a4d74;
    }
    ctx->pc = 0x1A4D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D74u);
    ctx->pc = 0x1A4D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D6Cu;
            // 0x1a4d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D74u; }
        if (ctx->pc != 0x1A4D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D74u; }
        if (ctx->pc != 0x1A4D74u) { return; }
    }
    ctx->pc = 0x1A4D74u;
label_1a4d74:
    // 0x1a4d74: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a4d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4d78:
    // 0x1a4d78: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4d7c:
    // 0x1a4d7c: 0x0  nop
    ctx->pc = 0x1a4d7cu;
    // NOP
label_1a4d80:
    // 0x1a4d80: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a4d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a4d84:
    // 0x1a4d84: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a4d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a4d88:
    // 0x1a4d88: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1a4d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a4d8c:
    // 0x1a4d8c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1a4d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4d90:
    // 0x1a4d90: 0x45010011  bc1t        . + 4 + (0x11 << 2)
label_1a4d94:
    if (ctx->pc == 0x1A4D94u) {
        ctx->pc = 0x1A4D94u;
            // 0x1a4d94: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->pc = 0x1A4D98u;
        goto label_1a4d98;
    }
    ctx->pc = 0x1A4D90u;
    {
        const bool branch_taken_0x1a4d90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D90u;
            // 0x1a4d94: 0x3c033f84  lui         $v1, 0x3F84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d90) {
            ctx->pc = 0x1A4DD8u;
            goto label_1a4dd8;
        }
    }
    ctx->pc = 0x1A4D98u;
label_1a4d98:
    // 0x1a4d98: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1a4d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1a4d9c:
    // 0x1a4d9c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1a4d9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1a4da0:
    // 0x1a4da0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1a4da0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1a4da4:
    // 0x1a4da4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a4da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a4da8:
    // 0x1a4da8: 0xc040d72  jal         func_1035C8
label_1a4dac:
    if (ctx->pc == 0x1A4DACu) {
        ctx->pc = 0x1A4DACu;
            // 0x1a4dac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A4DB0u;
        goto label_1a4db0;
    }
    ctx->pc = 0x1A4DA8u;
    SET_GPR_U32(ctx, 31, 0x1A4DB0u);
    ctx->pc = 0x1A4DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DA8u;
            // 0x1a4dac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DB0u; }
        if (ctx->pc != 0x1A4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DB0u; }
        if (ctx->pc != 0x1A4DB0u) { return; }
    }
    ctx->pc = 0x1A4DB0u;
label_1a4db0:
    // 0x1a4db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a4db4:
    // 0x1a4db4: 0xc040880  jal         func_102200
label_1a4db8:
    if (ctx->pc == 0x1A4DB8u) {
        ctx->pc = 0x1A4DB8u;
            // 0x1a4db8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DBCu;
        goto label_1a4dbc;
    }
    ctx->pc = 0x1A4DB4u;
    SET_GPR_U32(ctx, 31, 0x1A4DBCu);
    ctx->pc = 0x1A4DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DB4u;
            // 0x1a4db8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DBCu; }
        if (ctx->pc != 0x1A4DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DBCu; }
        if (ctx->pc != 0x1A4DBCu) { return; }
    }
    ctx->pc = 0x1A4DBCu;
label_1a4dbc:
    // 0x1a4dbc: 0xc040a74  jal         func_1029D0
label_1a4dc0:
    if (ctx->pc == 0x1A4DC0u) {
        ctx->pc = 0x1A4DC0u;
            // 0x1a4dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DC4u;
        goto label_1a4dc4;
    }
    ctx->pc = 0x1A4DBCu;
    SET_GPR_U32(ctx, 31, 0x1A4DC4u);
    ctx->pc = 0x1A4DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DBCu;
            // 0x1a4dc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC4u; }
        if (ctx->pc != 0x1A4DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DC4u; }
        if (ctx->pc != 0x1A4DC4u) { return; }
    }
    ctx->pc = 0x1A4DC4u;
label_1a4dc4:
    // 0x1a4dc4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4dc8:
    // 0x1a4dc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4dcc:
    // 0x1a4dcc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a4dd0:
    if (ctx->pc == 0x1A4DD0u) {
        ctx->pc = 0x1A4DD0u;
            // 0x1a4dd0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A4DD4u;
        goto label_1a4dd4;
    }
    ctx->pc = 0x1A4DCCu;
    {
        const bool branch_taken_0x1a4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DCCu;
            // 0x1a4dd0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dcc) {
            ctx->pc = 0x1A4E18u;
            goto label_1a4e18;
        }
    }
    ctx->pc = 0x1A4DD4u;
label_1a4dd4:
    // 0x1a4dd4: 0x0  nop
    ctx->pc = 0x1a4dd4u;
    // NOP
label_1a4dd8:
    // 0x1a4dd8: 0xc040d72  jal         func_1035C8
label_1a4ddc:
    if (ctx->pc == 0x1A4DDCu) {
        ctx->pc = 0x1A4DDCu;
            // 0x1a4ddc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1A4DE0u;
        goto label_1a4de0;
    }
    ctx->pc = 0x1A4DD8u;
    SET_GPR_U32(ctx, 31, 0x1A4DE0u);
    ctx->pc = 0x1A4DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DD8u;
            // 0x1a4ddc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DE0u; }
        if (ctx->pc != 0x1A4DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DE0u; }
        if (ctx->pc != 0x1A4DE0u) { return; }
    }
    ctx->pc = 0x1A4DE0u;
label_1a4de0:
    // 0x1a4de0: 0x3c043f84  lui         $a0, 0x3F84
    ctx->pc = 0x1a4de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16260 << 16));
label_1a4de4:
    // 0x1a4de4: 0x3c0347ae  lui         $v1, 0x47AE
    ctx->pc = 0x1a4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18350 << 16));
label_1a4de8:
    // 0x1a4de8: 0x34847ae1  ori         $a0, $a0, 0x7AE1
    ctx->pc = 0x1a4de8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)31457u)));
label_1a4dec:
    // 0x1a4dec: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x1a4decu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)5243u)));
label_1a4df0:
    // 0x1a4df0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a4df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a4df4:
    // 0x1a4df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a4df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4df8:
    // 0x1a4df8: 0xc040880  jal         func_102200
label_1a4dfc:
    if (ctx->pc == 0x1A4DFCu) {
        ctx->pc = 0x1A4DFCu;
            // 0x1a4dfc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->pc = 0x1A4E00u;
        goto label_1a4e00;
    }
    ctx->pc = 0x1A4DF8u;
    SET_GPR_U32(ctx, 31, 0x1A4E00u);
    ctx->pc = 0x1A4DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DF8u;
            // 0x1a4dfc: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E00u; }
        if (ctx->pc != 0x1A4E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E00u; }
        if (ctx->pc != 0x1A4E00u) { return; }
    }
    ctx->pc = 0x1A4E00u;
label_1a4e00:
    // 0x1a4e00: 0xc040a74  jal         func_1029D0
label_1a4e04:
    if (ctx->pc == 0x1A4E04u) {
        ctx->pc = 0x1A4E04u;
            // 0x1a4e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E08u;
        goto label_1a4e08;
    }
    ctx->pc = 0x1A4E00u;
    SET_GPR_U32(ctx, 31, 0x1A4E08u);
    ctx->pc = 0x1A4E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E00u;
            // 0x1a4e04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E08u; }
        if (ctx->pc != 0x1A4E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E08u; }
        if (ctx->pc != 0x1A4E08u) { return; }
    }
    ctx->pc = 0x1A4E08u;
label_1a4e08:
    // 0x1a4e08: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4e0c:
    // 0x1a4e0c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4e10:
    // 0x1a4e10: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a4e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a4e14:
    // 0x1a4e14: 0x0  nop
    ctx->pc = 0x1a4e14u;
    // NOP
label_1a4e18:
    // 0x1a4e18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4e1c:
    // 0x1a4e1c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a4e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4e20:
    // 0x1a4e20: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1a4e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4e24:
    // 0x1a4e24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a4e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a4e28:
    // 0x1a4e28: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1a4e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1a4e2c:
    // 0x1a4e2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4e30:
    // 0x1a4e30: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4e34:
    // 0x1a4e34: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1a4e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4e38:
    // 0x1a4e38: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a4e38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a4e3c:
    // 0x1a4e3c: 0xc065d00  jal         func_197400
label_1a4e40:
    if (ctx->pc == 0x1A4E40u) {
        ctx->pc = 0x1A4E40u;
            // 0x1a4e40: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1A4E44u;
        goto label_1a4e44;
    }
    ctx->pc = 0x1A4E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E44u);
    ctx->pc = 0x1A4E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E3Cu;
            // 0x1a4e40: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E44u; }
        if (ctx->pc != 0x1A4E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E44u; }
        if (ctx->pc != 0x1A4E44u) { return; }
    }
    ctx->pc = 0x1A4E44u;
label_1a4e44:
    // 0x1a4e44: 0x184001bc  blez        $v0, . + 4 + (0x1BC << 2)
label_1a4e48:
    if (ctx->pc == 0x1A4E48u) {
        ctx->pc = 0x1A4E4Cu;
        goto label_1a4e4c;
    }
    ctx->pc = 0x1A4E44u;
    {
        const bool branch_taken_0x1a4e44 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a4e44) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4E4Cu;
label_1a4e4c:
    // 0x1a4e4c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a4e50:
    // 0x1a4e50: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a4e54:
    // 0x1a4e54: 0x146201b8  bne         $v1, $v0, . + 4 + (0x1B8 << 2)
label_1a4e58:
    if (ctx->pc == 0x1A4E58u) {
        ctx->pc = 0x1A4E5Cu;
        goto label_1a4e5c;
    }
    ctx->pc = 0x1A4E54u;
    {
        const bool branch_taken_0x1a4e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a4e54) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4E5Cu;
label_1a4e5c:
    // 0x1a4e5c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a4e60:
    // 0x1a4e60: 0xc06560c  jal         func_195830
label_1a4e64:
    if (ctx->pc == 0x1A4E64u) {
        ctx->pc = 0x1A4E64u;
            // 0x1a4e64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A4E68u;
        goto label_1a4e68;
    }
    ctx->pc = 0x1A4E60u;
    SET_GPR_U32(ctx, 31, 0x1A4E68u);
    ctx->pc = 0x1A4E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E60u;
            // 0x1a4e64: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E68u; }
        if (ctx->pc != 0x1A4E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E68u; }
        if (ctx->pc != 0x1A4E68u) { return; }
    }
    ctx->pc = 0x1A4E68u;
label_1a4e68:
    // 0x1a4e68: 0x100001b3  b           . + 4 + (0x1B3 << 2)
label_1a4e6c:
    if (ctx->pc == 0x1A4E6Cu) {
        ctx->pc = 0x1A4E70u;
        goto label_1a4e70;
    }
    ctx->pc = 0x1A4E68u;
    {
        const bool branch_taken_0x1a4e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e68) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A4E70u;
label_1a4e70:
    // 0x1a4e70: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1a4e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a4e74:
    // 0x1a4e74: 0x1460006e  bnez        $v1, . + 4 + (0x6E << 2)
label_1a4e78:
    if (ctx->pc == 0x1A4E78u) {
        ctx->pc = 0x1A4E7Cu;
        goto label_1a4e7c;
    }
    ctx->pc = 0x1A4E74u;
    {
        const bool branch_taken_0x1a4e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e74) {
            ctx->pc = 0x1A5030u;
            goto label_1a5030;
        }
    }
    ctx->pc = 0x1A4E7Cu;
label_1a4e7c:
    // 0x1a4e7c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4e80:
    // 0x1a4e80: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4e84:
    // 0x1a4e84: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4e84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4e88:
    // 0x1a4e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4e8c:
    // 0x1a4e8c: 0x0  nop
    ctx->pc = 0x1a4e8cu;
    // NOP
label_1a4e90:
    // 0x1a4e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4e94:
    // 0x1a4e94: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a4e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a4e98:
    // 0x1a4e98: 0xc040d72  jal         func_1035C8
label_1a4e9c:
    if (ctx->pc == 0x1A4E9Cu) {
        ctx->pc = 0x1A4E9Cu;
            // 0x1a4e9c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4EA0u;
        goto label_1a4ea0;
    }
    ctx->pc = 0x1A4E98u;
    SET_GPR_U32(ctx, 31, 0x1A4EA0u);
    ctx->pc = 0x1A4E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E98u;
            // 0x1a4e9c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EA0u; }
        if (ctx->pc != 0x1A4EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EA0u; }
        if (ctx->pc != 0x1A4EA0u) { return; }
    }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ea4:
    // 0x1a4ea4: 0xc040078  jal         func_1001E0
label_1a4ea8:
    if (ctx->pc == 0x1A4EA8u) {
        ctx->pc = 0x1A4EA8u;
            // 0x1a4ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EACu;
        goto label_1a4eac;
    }
    ctx->pc = 0x1A4EA4u;
    SET_GPR_U32(ctx, 31, 0x1A4EACu);
    ctx->pc = 0x1A4EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EA4u;
            // 0x1a4ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EACu; }
        if (ctx->pc != 0x1A4EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EACu; }
        if (ctx->pc != 0x1A4EACu) { return; }
    }
    ctx->pc = 0x1A4EACu;
label_1a4eac:
    // 0x1a4eac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4eb0:
    if (ctx->pc == 0x1A4EB0u) {
        ctx->pc = 0x1A4EB4u;
        goto label_1a4eb4;
    }
    ctx->pc = 0x1A4EACu;
    {
        const bool branch_taken_0x1a4eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4eac) {
            ctx->pc = 0x1A4ED0u;
            goto label_1a4ed0;
        }
    }
    ctx->pc = 0x1A4EB4u;
label_1a4eb4:
    // 0x1a4eb4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a4eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4eb8:
    // 0x1a4eb8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4ebc:
    // 0x1a4ebc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4ebcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4ec0:
    // 0x1a4ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4ec4:
    // 0x1a4ec4: 0x0  nop
    ctx->pc = 0x1a4ec4u;
    // NOP
label_1a4ec8:
    // 0x1a4ec8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4ec8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4ecc:
    // 0x1a4ecc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a4eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a4ed0:
    // 0x1a4ed0: 0xc040d72  jal         func_1035C8
label_1a4ed4:
    if (ctx->pc == 0x1A4ED4u) {
        ctx->pc = 0x1A4ED4u;
            // 0x1a4ed4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4ED8u;
        goto label_1a4ed8;
    }
    ctx->pc = 0x1A4ED0u;
    SET_GPR_U32(ctx, 31, 0x1A4ED8u);
    ctx->pc = 0x1A4ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ED0u;
            // 0x1a4ed4: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4ED8u; }
        if (ctx->pc != 0x1A4ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4ED8u; }
        if (ctx->pc != 0x1A4ED8u) { return; }
    }
    ctx->pc = 0x1A4ED8u;
label_1a4ed8:
    // 0x1a4ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4edc:
    // 0x1a4edc: 0xc04008c  jal         func_100230
label_1a4ee0:
    if (ctx->pc == 0x1A4EE0u) {
        ctx->pc = 0x1A4EE0u;
            // 0x1a4ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4EE4u;
        goto label_1a4ee4;
    }
    ctx->pc = 0x1A4EDCu;
    SET_GPR_U32(ctx, 31, 0x1A4EE4u);
    ctx->pc = 0x1A4EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EDCu;
            // 0x1a4ee0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EE4u; }
        if (ctx->pc != 0x1A4EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfle_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4EE4u; }
        if (ctx->pc != 0x1A4EE4u) { return; }
    }
    ctx->pc = 0x1A4EE4u;
label_1a4ee4:
    // 0x1a4ee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a4ee8:
    if (ctx->pc == 0x1A4EE8u) {
        ctx->pc = 0x1A4EECu;
        goto label_1a4eec;
    }
    ctx->pc = 0x1A4EE4u;
    {
        const bool branch_taken_0x1a4ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ee4) {
            ctx->pc = 0x1A4F08u;
            goto label_1a4f08;
        }
    }
    ctx->pc = 0x1A4EECu;
label_1a4eec:
    // 0x1a4eec: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a4eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4ef0:
    // 0x1a4ef0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a4ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a4ef4:
    // 0x1a4ef4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4ef4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4ef8:
    // 0x1a4ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4efc:
    // 0x1a4efc: 0x0  nop
    ctx->pc = 0x1a4efcu;
    // NOP
label_1a4f00:
    // 0x1a4f00: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a4f00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a4f04:
    // 0x1a4f04: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a4f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a4f08:
    // 0x1a4f08: 0xc040d72  jal         func_1035C8
label_1a4f0c:
    if (ctx->pc == 0x1A4F0Cu) {
        ctx->pc = 0x1A4F0Cu;
            // 0x1a4f0c: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1A4F10u;
        goto label_1a4f10;
    }
    ctx->pc = 0x1A4F08u;
    SET_GPR_U32(ctx, 31, 0x1A4F10u);
    ctx->pc = 0x1A4F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F08u;
            // 0x1a4f0c: 0xc60c00d4  lwc1        $f12, 0xD4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F10u; }
        if (ctx->pc != 0x1A4F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F10u; }
        if (ctx->pc != 0x1A4F10u) { return; }
    }
    ctx->pc = 0x1A4F10u;
label_1a4f10:
    // 0x1a4f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f14:
    // 0x1a4f14: 0xc040078  jal         func_1001E0
label_1a4f18:
    if (ctx->pc == 0x1A4F18u) {
        ctx->pc = 0x1A4F18u;
            // 0x1a4f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F1Cu;
        goto label_1a4f1c;
    }
    ctx->pc = 0x1A4F14u;
    SET_GPR_U32(ctx, 31, 0x1A4F1Cu);
    ctx->pc = 0x1A4F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F14u;
            // 0x1a4f18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F1Cu; }
        if (ctx->pc != 0x1A4F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F1Cu; }
        if (ctx->pc != 0x1A4F1Cu) { return; }
    }
    ctx->pc = 0x1A4F1Cu;
label_1a4f1c:
    // 0x1a4f1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1a4f20:
    if (ctx->pc == 0x1A4F20u) {
        ctx->pc = 0x1A4F24u;
        goto label_1a4f24;
    }
    ctx->pc = 0x1A4F1Cu;
    {
        const bool branch_taken_0x1a4f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4f1c) {
            ctx->pc = 0x1A4F48u;
            goto label_1a4f48;
        }
    }
    ctx->pc = 0x1A4F24u;
label_1a4f24:
    // 0x1a4f24: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a4f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4f28:
    // 0x1a4f28: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1a4f2c:
    // 0x1a4f2c: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1a4f2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1a4f30:
    // 0x1a4f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4f34:
    // 0x1a4f34: 0x0  nop
    ctx->pc = 0x1a4f34u;
    // NOP
label_1a4f38:
    // 0x1a4f38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a4f38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a4f3c:
    // 0x1a4f3c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4f40:
    if (ctx->pc == 0x1A4F40u) {
        ctx->pc = 0x1A4F40u;
            // 0x1a4f40: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A4F44u;
        goto label_1a4f44;
    }
    ctx->pc = 0x1A4F3Cu;
    {
        const bool branch_taken_0x1a4f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F3Cu;
            // 0x1a4f40: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f3c) {
            ctx->pc = 0x1A4F58u;
            goto label_1a4f58;
        }
    }
    ctx->pc = 0x1A4F44u;
label_1a4f44:
    // 0x1a4f44: 0x0  nop
    ctx->pc = 0x1a4f44u;
    // NOP
label_1a4f48:
    // 0x1a4f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f4c:
    // 0x1a4f4c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a4f50:
    // 0x1a4f50: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a4f50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a4f54:
    // 0x1a4f54: 0x0  nop
    ctx->pc = 0x1a4f54u;
    // NOP
label_1a4f58:
    // 0x1a4f58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a4f5c:
    // 0x1a4f5c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a4f60:
    // 0x1a4f60: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a4f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a4f64:
    // 0x1a4f64: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a4f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a4f68:
    // 0x1a4f68: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a4f6c:
    // 0x1a4f6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a4f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a4f70:
    // 0x1a4f70: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a4f74:
    // 0x1a4f74: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a4f78:
    // 0x1a4f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a4f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4f7c:
    // 0x1a4f7c: 0x0  nop
    ctx->pc = 0x1a4f7cu;
    // NOP
label_1a4f80:
    // 0x1a4f80: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4f80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4f84:
    // 0x1a4f84: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a4f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a4f88:
    // 0x1a4f88: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a4f8c:
    // 0x1a4f8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4f90:
    // 0x1a4f90: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a4f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a4f94:
    // 0x1a4f94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4f98:
    // 0x1a4f98: 0x0  nop
    ctx->pc = 0x1a4f98u;
    // NOP
label_1a4f9c:
    // 0x1a4f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4fa0:
    // 0x1a4fa0: 0xc04b6ee  jal         func_12DBB8
label_1a4fa4:
    if (ctx->pc == 0x1A4FA4u) {
        ctx->pc = 0x1A4FA4u;
            // 0x1a4fa4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A4FA8u;
        goto label_1a4fa8;
    }
    ctx->pc = 0x1A4FA0u;
    SET_GPR_U32(ctx, 31, 0x1A4FA8u);
    ctx->pc = 0x1A4FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FA0u;
            // 0x1a4fa4: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA8u; }
        if (ctx->pc != 0x1A4FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FA8u; }
        if (ctx->pc != 0x1A4FA8u) { return; }
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4fac:
    // 0x1a4fac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4fb0:
    // 0x1a4fb0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4fb4:
    // 0x1a4fb4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4fb4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4fb8:
    // 0x1a4fb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a4fb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4fbc:
    // 0x1a4fbc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a4fc0:
    if (ctx->pc == 0x1A4FC0u) {
        ctx->pc = 0x1A4FC0u;
            // 0x1a4fc0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1A4FC4u;
        goto label_1a4fc4;
    }
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FBCu;
            // 0x1a4fc0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FD0u;
            goto label_1a4fd0;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4fc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4fc8:
    // 0x1a4fc8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4fcc:
    // 0x1a4fcc: 0x0  nop
    ctx->pc = 0x1a4fccu;
    // NOP
label_1a4fd0:
    // 0x1a4fd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4fd4:
    // 0x1a4fd4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a4fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4fd8:
    // 0x1a4fd8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4fdc:
    // 0x1a4fdc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a4fdcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a4fe0:
    // 0x1a4fe0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a4fe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4fe4:
    // 0x1a4fe4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a4fe8:
    if (ctx->pc == 0x1A4FE8u) {
        ctx->pc = 0x1A4FE8u;
            // 0x1a4fe8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A4FECu;
        goto label_1a4fec;
    }
    ctx->pc = 0x1A4FE4u;
    {
        const bool branch_taken_0x1a4fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FE4u;
            // 0x1a4fe8: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fe4) {
            ctx->pc = 0x1A4FF8u;
            goto label_1a4ff8;
        }
    }
    ctx->pc = 0x1A4FECu;
label_1a4fec:
    // 0x1a4fec: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a4fecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a4ff0:
    // 0x1a4ff0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a4ff4:
    // 0x1a4ff4: 0x0  nop
    ctx->pc = 0x1a4ff4u;
    // NOP
label_1a4ff8:
    // 0x1a4ff8: 0xc065d00  jal         func_197400
label_1a4ffc:
    if (ctx->pc == 0x1A4FFCu) {
        ctx->pc = 0x1A5000u;
        goto label_1a5000;
    }
    ctx->pc = 0x1A4FF8u;
    SET_GPR_U32(ctx, 31, 0x1A5000u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5000u; }
        if (ctx->pc != 0x1A5000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5000u; }
        if (ctx->pc != 0x1A5000u) { return; }
    }
    ctx->pc = 0x1A5000u;
label_1a5000:
    // 0x1a5000: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a5000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5004:
    // 0x1a5004: 0x1443014c  bne         $v0, $v1, . + 4 + (0x14C << 2)
label_1a5008:
    if (ctx->pc == 0x1A5008u) {
        ctx->pc = 0x1A500Cu;
        goto label_1a500c;
    }
    ctx->pc = 0x1A5004u;
    {
        const bool branch_taken_0x1a5004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a5004) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A500Cu;
label_1a500c:
    // 0x1a500c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5010:
    // 0x1a5010: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a5014:
    // 0x1a5014: 0x14620148  bne         $v1, $v0, . + 4 + (0x148 << 2)
label_1a5018:
    if (ctx->pc == 0x1A5018u) {
        ctx->pc = 0x1A501Cu;
        goto label_1a501c;
    }
    ctx->pc = 0x1A5014u;
    {
        const bool branch_taken_0x1a5014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5014) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A501Cu;
label_1a501c:
    // 0x1a501c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5020:
    // 0x1a5020: 0xc06560c  jal         func_195830
label_1a5024:
    if (ctx->pc == 0x1A5024u) {
        ctx->pc = 0x1A5024u;
            // 0x1a5024: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5028u;
        goto label_1a5028;
    }
    ctx->pc = 0x1A5020u;
    SET_GPR_U32(ctx, 31, 0x1A5028u);
    ctx->pc = 0x1A5024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5020u;
            // 0x1a5024: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5028u; }
        if (ctx->pc != 0x1A5028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5028u; }
        if (ctx->pc != 0x1A5028u) { return; }
    }
    ctx->pc = 0x1A5028u;
label_1a5028:
    // 0x1a5028: 0x10000143  b           . + 4 + (0x143 << 2)
label_1a502c:
    if (ctx->pc == 0x1A502Cu) {
        ctx->pc = 0x1A5030u;
        goto label_1a5030;
    }
    ctx->pc = 0x1A5028u;
    {
        const bool branch_taken_0x1a5028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5028) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A5030u;
label_1a5030:
    // 0x1a5030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a5034:
    // 0x1a5034: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
label_1a5038:
    if (ctx->pc == 0x1A5038u) {
        ctx->pc = 0x1A5038u;
            // 0x1a5038: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1A503Cu;
        goto label_1a503c;
    }
    ctx->pc = 0x1A5034u;
    {
        const bool branch_taken_0x1a5034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5034u;
            // 0x1a5038: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5034) {
            ctx->pc = 0x1A5198u;
            goto label_1a5198;
        }
    }
    ctx->pc = 0x1A503Cu;
label_1a503c:
    // 0x1a503c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a503cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a5040:
    // 0x1a5040: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a5040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a5044:
    // 0x1a5044: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a5048:
    // 0x1a5048: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a5048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a504c:
    // 0x1a504c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a5050:
    // 0x1a5050: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a5050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a5054:
    // 0x1a5054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5058:
    // 0x1a5058: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a505c:
    // 0x1a505c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a505cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a5060:
    // 0x1a5060: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a5060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a5064:
    // 0x1a5064: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a5064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5068:
    // 0x1a5068: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a5068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a506c:
    // 0x1a506c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a506cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a5070:
    // 0x1a5070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5074:
    // 0x1a5074: 0x0  nop
    ctx->pc = 0x1a5074u;
    // NOP
label_1a5078:
    // 0x1a5078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a507c:
    // 0x1a507c: 0xc04b6ee  jal         func_12DBB8
label_1a5080:
    if (ctx->pc == 0x1A5080u) {
        ctx->pc = 0x1A5080u;
            // 0x1a5080: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A5084u;
        goto label_1a5084;
    }
    ctx->pc = 0x1A507Cu;
    SET_GPR_U32(ctx, 31, 0x1A5084u);
    ctx->pc = 0x1A5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A507Cu;
            // 0x1a5080: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5084u; }
        if (ctx->pc != 0x1A5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5084u; }
        if (ctx->pc != 0x1A5084u) { return; }
    }
    ctx->pc = 0x1A5084u;
label_1a5084:
    // 0x1a5084: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5088:
    // 0x1a5088: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a508c:
    // 0x1a508c: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5090:
    // 0x1a5090: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a5090u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a5094:
    // 0x1a5094: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5094u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5098:
    // 0x1a5098: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a509c:
    if (ctx->pc == 0x1A509Cu) {
        ctx->pc = 0x1A509Cu;
            // 0x1a509c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1A50A0u;
        goto label_1a50a0;
    }
    ctx->pc = 0x1A5098u;
    {
        const bool branch_taken_0x1a5098 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5098u;
            // 0x1a509c: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5098) {
            ctx->pc = 0x1A50A8u;
            goto label_1a50a8;
        }
    }
    ctx->pc = 0x1A50A0u;
label_1a50a0:
    // 0x1a50a0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a50a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a50a4:
    // 0x1a50a4: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a50a8:
    // 0x1a50a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a50ac:
    // 0x1a50ac: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a50b0:
    // 0x1a50b0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a50b4:
    // 0x1a50b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a50b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a50b8:
    // 0x1a50b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a50b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a50bc:
    // 0x1a50bc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a50c0:
    if (ctx->pc == 0x1A50C0u) {
        ctx->pc = 0x1A50C0u;
            // 0x1a50c0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1A50C4u;
        goto label_1a50c4;
    }
    ctx->pc = 0x1A50BCu;
    {
        const bool branch_taken_0x1a50bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A50C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A50BCu;
            // 0x1a50c0: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a50bc) {
            ctx->pc = 0x1A50D0u;
            goto label_1a50d0;
        }
    }
    ctx->pc = 0x1A50C4u;
label_1a50c4:
    // 0x1a50c4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a50c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a50c8:
    // 0x1a50c8: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a50c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a50cc:
    // 0x1a50cc: 0x0  nop
    ctx->pc = 0x1a50ccu;
    // NOP
label_1a50d0:
    // 0x1a50d0: 0xc065d00  jal         func_197400
label_1a50d4:
    if (ctx->pc == 0x1A50D4u) {
        ctx->pc = 0x1A50D8u;
        goto label_1a50d8;
    }
    ctx->pc = 0x1A50D0u;
    SET_GPR_U32(ctx, 31, 0x1A50D8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50D8u; }
        if (ctx->pc != 0x1A50D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A50D8u; }
        if (ctx->pc != 0x1A50D8u) { return; }
    }
    ctx->pc = 0x1A50D8u;
label_1a50d8:
    // 0x1a50d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a50d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a50dc:
    // 0x1a50dc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a50e0:
    if (ctx->pc == 0x1A50E0u) {
        ctx->pc = 0x1A50E4u;
        goto label_1a50e4;
    }
    ctx->pc = 0x1A50DCu;
    {
        const bool branch_taken_0x1a50dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a50dc) {
            ctx->pc = 0x1A5100u;
            goto label_1a5100;
        }
    }
    ctx->pc = 0x1A50E4u;
label_1a50e4:
    // 0x1a50e4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a50e8:
    // 0x1a50e8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a50ec:
    // 0x1a50ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a50f0:
    if (ctx->pc == 0x1A50F0u) {
        ctx->pc = 0x1A50F4u;
        goto label_1a50f4;
    }
    ctx->pc = 0x1A50ECu;
    {
        const bool branch_taken_0x1a50ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a50ec) {
            ctx->pc = 0x1A5100u;
            goto label_1a5100;
        }
    }
    ctx->pc = 0x1A50F4u;
label_1a50f4:
    // 0x1a50f4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a50f8:
    // 0x1a50f8: 0xc06560c  jal         func_195830
label_1a50fc:
    if (ctx->pc == 0x1A50FCu) {
        ctx->pc = 0x1A50FCu;
            // 0x1a50fc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5100u;
        goto label_1a5100;
    }
    ctx->pc = 0x1A50F8u;
    SET_GPR_U32(ctx, 31, 0x1A5100u);
    ctx->pc = 0x1A50FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A50F8u;
            // 0x1a50fc: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5100u; }
        if (ctx->pc != 0x1A5100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5100u; }
        if (ctx->pc != 0x1A5100u) { return; }
    }
    ctx->pc = 0x1A5100u;
label_1a5100:
    // 0x1a5100: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5104:
    // 0x1a5104: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a5104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a5108:
    // 0x1a5108: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_1a510c:
    if (ctx->pc == 0x1A510Cu) {
        ctx->pc = 0x1A5110u;
        goto label_1a5110;
    }
    ctx->pc = 0x1A5108u;
    {
        const bool branch_taken_0x1a5108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5108) {
            ctx->pc = 0x1A5138u;
            goto label_1a5138;
        }
    }
    ctx->pc = 0x1A5110u;
label_1a5110:
    // 0x1a5110: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1a5110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1a5114:
    // 0x1a5114: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a5114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5118:
    // 0x1a5118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a5118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a511c:
    // 0x1a511c: 0xc0655b0  jal         func_1956C0
label_1a5120:
    if (ctx->pc == 0x1A5120u) {
        ctx->pc = 0x1A5120u;
            // 0x1a5120: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5124u;
        goto label_1a5124;
    }
    ctx->pc = 0x1A511Cu;
    SET_GPR_U32(ctx, 31, 0x1A5124u);
    ctx->pc = 0x1A5120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A511Cu;
            // 0x1a5120: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5124u; }
        if (ctx->pc != 0x1A5124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5124u; }
        if (ctx->pc != 0x1A5124u) { return; }
    }
    ctx->pc = 0x1A5124u;
label_1a5124:
    // 0x1a5124: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1a5124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1a5128:
    // 0x1a5128: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a5128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a512c:
    // 0x1a512c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a512cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a5130:
    // 0x1a5130: 0xc0655b0  jal         func_1956C0
label_1a5134:
    if (ctx->pc == 0x1A5134u) {
        ctx->pc = 0x1A5134u;
            // 0x1a5134: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5138u;
        goto label_1a5138;
    }
    ctx->pc = 0x1A5130u;
    SET_GPR_U32(ctx, 31, 0x1A5138u);
    ctx->pc = 0x1A5134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5130u;
            // 0x1a5134: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5138u; }
        if (ctx->pc != 0x1A5138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5138u; }
        if (ctx->pc != 0x1A5138u) { return; }
    }
    ctx->pc = 0x1A5138u;
label_1a5138:
    // 0x1a5138: 0xc065d00  jal         func_197400
label_1a513c:
    if (ctx->pc == 0x1A513Cu) {
        ctx->pc = 0x1A5140u;
        goto label_1a5140;
    }
    ctx->pc = 0x1A5138u;
    SET_GPR_U32(ctx, 31, 0x1A5140u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5140u; }
        if (ctx->pc != 0x1A5140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5140u; }
        if (ctx->pc != 0x1A5140u) { return; }
    }
    ctx->pc = 0x1A5140u;
label_1a5140:
    // 0x1a5140: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a5140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a5144:
    // 0x1a5144: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1a5148:
    if (ctx->pc == 0x1A5148u) {
        ctx->pc = 0x1A514Cu;
        goto label_1a514c;
    }
    ctx->pc = 0x1A5144u;
    {
        const bool branch_taken_0x1a5144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5144) {
            ctx->pc = 0x1A5168u;
            goto label_1a5168;
        }
    }
    ctx->pc = 0x1A514Cu;
label_1a514c:
    // 0x1a514c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a514cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5150:
    // 0x1a5150: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1a5150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a5154:
    // 0x1a5154: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a5158:
    if (ctx->pc == 0x1A5158u) {
        ctx->pc = 0x1A515Cu;
        goto label_1a515c;
    }
    ctx->pc = 0x1A5154u;
    {
        const bool branch_taken_0x1a5154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5154) {
            ctx->pc = 0x1A5168u;
            goto label_1a5168;
        }
    }
    ctx->pc = 0x1A515Cu;
label_1a515c:
    // 0x1a515c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a515cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5160:
    // 0x1a5160: 0xc06560c  jal         func_195830
label_1a5164:
    if (ctx->pc == 0x1A5164u) {
        ctx->pc = 0x1A5164u;
            // 0x1a5164: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5168u;
        goto label_1a5168;
    }
    ctx->pc = 0x1A5160u;
    SET_GPR_U32(ctx, 31, 0x1A5168u);
    ctx->pc = 0x1A5164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5160u;
            // 0x1a5164: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5168u; }
        if (ctx->pc != 0x1A5168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5168u; }
        if (ctx->pc != 0x1A5168u) { return; }
    }
    ctx->pc = 0x1A5168u;
label_1a5168:
    // 0x1a5168: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a5168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a516c:
    // 0x1a516c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1a516cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1a5170:
    // 0x1a5170: 0x142000f1  bnez        $at, . + 4 + (0xF1 << 2)
label_1a5174:
    if (ctx->pc == 0x1A5174u) {
        ctx->pc = 0x1A5178u;
        goto label_1a5178;
    }
    ctx->pc = 0x1A5170u;
    {
        const bool branch_taken_0x1a5170 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5170) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A5178u;
label_1a5178:
    // 0x1a5178: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a517c:
    // 0x1a517c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1a517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a5180:
    // 0x1a5180: 0xc065598  jal         func_195660
label_1a5184:
    if (ctx->pc == 0x1A5184u) {
        ctx->pc = 0x1A5184u;
            // 0x1a5184: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->pc = 0x1A5188u;
        goto label_1a5188;
    }
    ctx->pc = 0x1A5180u;
    SET_GPR_U32(ctx, 31, 0x1A5188u);
    ctx->pc = 0x1A5184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5180u;
            // 0x1a5184: 0x2445fffb  addiu       $a1, $v0, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5188u; }
        if (ctx->pc != 0x1A5188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5188u; }
        if (ctx->pc != 0x1A5188u) { return; }
    }
    ctx->pc = 0x1A5188u;
label_1a5188:
    // 0x1a5188: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a518c:
    // 0x1a518c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a518cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a5190:
    // 0x1a5190: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_1a5194:
    if (ctx->pc == 0x1A5194u) {
        ctx->pc = 0x1A5194u;
            // 0x1a5194: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x1A5198u;
        goto label_1a5198;
    }
    ctx->pc = 0x1A5190u;
    {
        const bool branch_taken_0x1a5190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5190u;
            // 0x1a5194: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5190) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A5198u;
label_1a5198:
    // 0x1a5198: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a5198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a519c:
    // 0x1a519c: 0x146200e6  bne         $v1, $v0, . + 4 + (0xE6 << 2)
label_1a51a0:
    if (ctx->pc == 0x1A51A0u) {
        ctx->pc = 0x1A51A0u;
            // 0x1a51a0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1A51A4u;
        goto label_1a51a4;
    }
    ctx->pc = 0x1A519Cu;
    {
        const bool branch_taken_0x1a519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A51A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A519Cu;
            // 0x1a51a0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a519c) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A51A4u;
label_1a51a4:
    // 0x1a51a4: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a51a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a51a8:
    // 0x1a51a8: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a51a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a51ac:
    // 0x1a51ac: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a51acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a51b0:
    // 0x1a51b0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a51b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a51b4:
    // 0x1a51b4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a51b8:
    // 0x1a51b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a51b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a51bc:
    // 0x1a51bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a51bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a51c0:
    // 0x1a51c0: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a51c4:
    // 0x1a51c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a51c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a51c8:
    // 0x1a51c8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a51c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a51cc:
    // 0x1a51cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a51ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a51d0:
    // 0x1a51d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a51d4:
    // 0x1a51d4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a51d8:
    // 0x1a51d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a51d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a51dc:
    // 0x1a51dc: 0x0  nop
    ctx->pc = 0x1a51dcu;
    // NOP
label_1a51e0:
    // 0x1a51e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a51e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a51e4:
    // 0x1a51e4: 0xc04b6ee  jal         func_12DBB8
label_1a51e8:
    if (ctx->pc == 0x1A51E8u) {
        ctx->pc = 0x1A51E8u;
            // 0x1a51e8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A51ECu;
        goto label_1a51ec;
    }
    ctx->pc = 0x1A51E4u;
    SET_GPR_U32(ctx, 31, 0x1A51ECu);
    ctx->pc = 0x1A51E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A51E4u;
            // 0x1a51e8: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51ECu; }
        if (ctx->pc != 0x1A51ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A51ECu; }
        if (ctx->pc != 0x1A51ECu) { return; }
    }
    ctx->pc = 0x1A51ECu;
label_1a51ec:
    // 0x1a51ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a51f0:
    // 0x1a51f0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a51f4:
    // 0x1a51f4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a51f8:
    // 0x1a51f8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a51f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a51fc:
    // 0x1a51fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a51fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5200:
    // 0x1a5200: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1a5204:
    if (ctx->pc == 0x1A5204u) {
        ctx->pc = 0x1A5204u;
            // 0x1a5204: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1A5208u;
        goto label_1a5208;
    }
    ctx->pc = 0x1A5200u;
    {
        const bool branch_taken_0x1a5200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5200u;
            // 0x1a5204: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5200) {
            ctx->pc = 0x1A5210u;
            goto label_1a5210;
        }
    }
    ctx->pc = 0x1A5208u;
label_1a5208:
    // 0x1a5208: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a5208u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a520c:
    // 0x1a520c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a520cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a5210:
    // 0x1a5210: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5214:
    // 0x1a5214: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a5214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5218:
    // 0x1a5218: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a5218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a521c:
    // 0x1a521c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a521cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a5220:
    // 0x1a5220: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5224:
    // 0x1a5224: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a5228:
    if (ctx->pc == 0x1A5228u) {
        ctx->pc = 0x1A5228u;
            // 0x1a5228: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A522Cu;
        goto label_1a522c;
    }
    ctx->pc = 0x1A5224u;
    {
        const bool branch_taken_0x1a5224 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5224u;
            // 0x1a5228: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5224) {
            ctx->pc = 0x1A5238u;
            goto label_1a5238;
        }
    }
    ctx->pc = 0x1A522Cu;
label_1a522c:
    // 0x1a522c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a522cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a5230:
    // 0x1a5230: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a5230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a5234:
    // 0x1a5234: 0x0  nop
    ctx->pc = 0x1a5234u;
    // NOP
label_1a5238:
    // 0x1a5238: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1a5238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1a523c:
    // 0x1a523c: 0x34439374  ori         $v1, $v0, 0x9374
    ctx->pc = 0x1a523cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)37748u)));
label_1a5240:
    // 0x1a5240: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1a5240u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1a5244:
    // 0x1a5244: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a5248:
    // 0x1a5248: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1a524c:
    // 0x1a524c: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1a524cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1a5250:
    // 0x1a5250: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1a5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5254:
    // 0x1a5254: 0xc040d72  jal         func_1035C8
label_1a5258:
    if (ctx->pc == 0x1A5258u) {
        ctx->pc = 0x1A5258u;
            // 0x1a5258: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A525Cu;
        goto label_1a525c;
    }
    ctx->pc = 0x1A5254u;
    SET_GPR_U32(ctx, 31, 0x1A525Cu);
    ctx->pc = 0x1A5258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5254u;
            // 0x1a5258: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A525Cu; }
        if (ctx->pc != 0x1A525Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A525Cu; }
        if (ctx->pc != 0x1A525Cu) { return; }
    }
    ctx->pc = 0x1A525Cu;
label_1a525c:
    // 0x1a525c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a525cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5260:
    // 0x1a5260: 0xc040880  jal         func_102200
label_1a5264:
    if (ctx->pc == 0x1A5264u) {
        ctx->pc = 0x1A5264u;
            // 0x1a5264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5268u;
        goto label_1a5268;
    }
    ctx->pc = 0x1A5260u;
    SET_GPR_U32(ctx, 31, 0x1A5268u);
    ctx->pc = 0x1A5264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5260u;
            // 0x1a5264: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5268u; }
        if (ctx->pc != 0x1A5268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5268u; }
        if (ctx->pc != 0x1A5268u) { return; }
    }
    ctx->pc = 0x1A5268u;
label_1a5268:
    // 0x1a5268: 0xc040a74  jal         func_1029D0
label_1a526c:
    if (ctx->pc == 0x1A526Cu) {
        ctx->pc = 0x1A526Cu;
            // 0x1a526c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5270u;
        goto label_1a5270;
    }
    ctx->pc = 0x1A5268u;
    SET_GPR_U32(ctx, 31, 0x1A5270u);
    ctx->pc = 0x1A526Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5268u;
            // 0x1a526c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5270u; }
        if (ctx->pc != 0x1A5270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5270u; }
        if (ctx->pc != 0x1A5270u) { return; }
    }
    ctx->pc = 0x1A5270u;
label_1a5270:
    // 0x1a5270: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5274:
    // 0x1a5274: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a5274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5278:
    // 0x1a5278: 0x0  nop
    ctx->pc = 0x1a5278u;
    // NOP
label_1a527c:
    // 0x1a527c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a527cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a5280:
    // 0x1a5280: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a5280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a5284:
    // 0x1a5284: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1a5284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5288:
    // 0x1a5288: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1a5288u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a528c:
    // 0x1a528c: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1a5290:
    if (ctx->pc == 0x1A5290u) {
        ctx->pc = 0x1A5290u;
            // 0x1a5290: 0x3c033f68  lui         $v1, 0x3F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
        ctx->pc = 0x1A5294u;
        goto label_1a5294;
    }
    ctx->pc = 0x1A528Cu;
    {
        const bool branch_taken_0x1a528c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A528Cu;
            // 0x1a5290: 0x3c033f68  lui         $v1, 0x3F68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16232 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a528c) {
            ctx->pc = 0x1A52D8u;
            goto label_1a52d8;
        }
    }
    ctx->pc = 0x1A5294u;
label_1a5294:
    // 0x1a5294: 0x3402bc6a  ori         $v0, $zero, 0xBC6A
    ctx->pc = 0x1a5294u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1a5298:
    // 0x1a5298: 0x34639374  ori         $v1, $v1, 0x9374
    ctx->pc = 0x1a5298u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)37748u)));
label_1a529c:
    // 0x1a529c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1a529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_1a52a0:
    // 0x1a52a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a52a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a52a4:
    // 0x1a52a4: 0x34427efa  ori         $v0, $v0, 0x7EFA
    ctx->pc = 0x1a52a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32506u)));
label_1a52a8:
    // 0x1a52a8: 0xc040d72  jal         func_1035C8
label_1a52ac:
    if (ctx->pc == 0x1A52ACu) {
        ctx->pc = 0x1A52ACu;
            // 0x1a52ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A52B0u;
        goto label_1a52b0;
    }
    ctx->pc = 0x1A52A8u;
    SET_GPR_U32(ctx, 31, 0x1A52B0u);
    ctx->pc = 0x1A52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52A8u;
            // 0x1a52ac: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52B0u; }
        if (ctx->pc != 0x1A52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52B0u; }
        if (ctx->pc != 0x1A52B0u) { return; }
    }
    ctx->pc = 0x1A52B0u;
label_1a52b0:
    // 0x1a52b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a52b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a52b4:
    // 0x1a52b4: 0xc040880  jal         func_102200
label_1a52b8:
    if (ctx->pc == 0x1A52B8u) {
        ctx->pc = 0x1A52B8u;
            // 0x1a52b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A52BCu;
        goto label_1a52bc;
    }
    ctx->pc = 0x1A52B4u;
    SET_GPR_U32(ctx, 31, 0x1A52BCu);
    ctx->pc = 0x1A52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52B4u;
            // 0x1a52b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52BCu; }
        if (ctx->pc != 0x1A52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52BCu; }
        if (ctx->pc != 0x1A52BCu) { return; }
    }
    ctx->pc = 0x1A52BCu;
label_1a52bc:
    // 0x1a52bc: 0xc040a74  jal         func_1029D0
label_1a52c0:
    if (ctx->pc == 0x1A52C0u) {
        ctx->pc = 0x1A52C0u;
            // 0x1a52c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A52C4u;
        goto label_1a52c4;
    }
    ctx->pc = 0x1A52BCu;
    SET_GPR_U32(ctx, 31, 0x1A52C4u);
    ctx->pc = 0x1A52C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52BCu;
            // 0x1a52c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52C4u; }
        if (ctx->pc != 0x1A52C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52C4u; }
        if (ctx->pc != 0x1A52C4u) { return; }
    }
    ctx->pc = 0x1A52C4u;
label_1a52c4:
    // 0x1a52c4: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a52c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a52c8:
    // 0x1a52c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a52c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a52cc:
    // 0x1a52cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1a52d0:
    if (ctx->pc == 0x1A52D0u) {
        ctx->pc = 0x1A52D0u;
            // 0x1a52d0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A52D4u;
        goto label_1a52d4;
    }
    ctx->pc = 0x1A52CCu;
    {
        const bool branch_taken_0x1a52cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A52D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52CCu;
            // 0x1a52d0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a52cc) {
            ctx->pc = 0x1A5318u;
            goto label_1a5318;
        }
    }
    ctx->pc = 0x1A52D4u;
label_1a52d4:
    // 0x1a52d4: 0x0  nop
    ctx->pc = 0x1a52d4u;
    // NOP
label_1a52d8:
    // 0x1a52d8: 0xc040d72  jal         func_1035C8
label_1a52dc:
    if (ctx->pc == 0x1A52DCu) {
        ctx->pc = 0x1A52DCu;
            // 0x1a52dc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->pc = 0x1A52E0u;
        goto label_1a52e0;
    }
    ctx->pc = 0x1A52D8u;
    SET_GPR_U32(ctx, 31, 0x1A52E0u);
    ctx->pc = 0x1A52DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52D8u;
            // 0x1a52dc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52E0u; }
        if (ctx->pc != 0x1A52E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A52E0u; }
        if (ctx->pc != 0x1A52E0u) { return; }
    }
    ctx->pc = 0x1A52E0u;
label_1a52e0:
    // 0x1a52e0: 0x3c043f68  lui         $a0, 0x3F68
    ctx->pc = 0x1a52e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16232 << 16));
label_1a52e4:
    // 0x1a52e4: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1a52e4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1a52e8:
    // 0x1a52e8: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1a52e8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1a52ec:
    // 0x1a52ec: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1a52ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1a52f0:
    // 0x1a52f0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1a52f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1a52f4:
    // 0x1a52f4: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1a52f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1a52f8:
    // 0x1a52f8: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1a52f8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1a52fc:
    // 0x1a52fc: 0xc040880  jal         func_102200
label_1a5300:
    if (ctx->pc == 0x1A5300u) {
        ctx->pc = 0x1A5300u;
            // 0x1a5300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5304u;
        goto label_1a5304;
    }
    ctx->pc = 0x1A52FCu;
    SET_GPR_U32(ctx, 31, 0x1A5304u);
    ctx->pc = 0x1A5300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A52FCu;
            // 0x1a5300: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5304u; }
        if (ctx->pc != 0x1A5304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5304u; }
        if (ctx->pc != 0x1A5304u) { return; }
    }
    ctx->pc = 0x1A5304u;
label_1a5304:
    // 0x1a5304: 0xc040a74  jal         func_1029D0
label_1a5308:
    if (ctx->pc == 0x1A5308u) {
        ctx->pc = 0x1A5308u;
            // 0x1a5308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A530Cu;
        goto label_1a530c;
    }
    ctx->pc = 0x1A5304u;
    SET_GPR_U32(ctx, 31, 0x1A530Cu);
    ctx->pc = 0x1A5308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5304u;
            // 0x1a5308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A530Cu; }
        if (ctx->pc != 0x1A530Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A530Cu; }
        if (ctx->pc != 0x1A530Cu) { return; }
    }
    ctx->pc = 0x1A530Cu;
label_1a530c:
    // 0x1a530c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a530cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5310:
    // 0x1a5310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a5314:
    // 0x1a5314: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a5314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a5318:
    // 0x1a5318: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a531c:
    // 0x1a531c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5320:
    // 0x1a5320: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1a5320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5324:
    // 0x1a5324: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a5328:
    // 0x1a5328: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1a5328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1a532c:
    // 0x1a532c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a532cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5330:
    // 0x1a5330: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a5330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5334:
    // 0x1a5334: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1a5334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5338:
    // 0x1a5338: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a5338u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a533c:
    // 0x1a533c: 0xc065d00  jal         func_197400
label_1a5340:
    if (ctx->pc == 0x1A5340u) {
        ctx->pc = 0x1A5340u;
            // 0x1a5340: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->pc = 0x1A5344u;
        goto label_1a5344;
    }
    ctx->pc = 0x1A533Cu;
    SET_GPR_U32(ctx, 31, 0x1A5344u);
    ctx->pc = 0x1A5340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A533Cu;
            // 0x1a5340: 0xe4400124  swc1        $f0, 0x124($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5344u; }
        if (ctx->pc != 0x1A5344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5344u; }
        if (ctx->pc != 0x1A5344u) { return; }
    }
    ctx->pc = 0x1A5344u;
label_1a5344:
    // 0x1a5344: 0x1840007c  blez        $v0, . + 4 + (0x7C << 2)
label_1a5348:
    if (ctx->pc == 0x1A5348u) {
        ctx->pc = 0x1A534Cu;
        goto label_1a534c;
    }
    ctx->pc = 0x1A5344u;
    {
        const bool branch_taken_0x1a5344 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a5344) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A534Cu;
label_1a534c:
    // 0x1a534c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5350:
    // 0x1a5350: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a5354:
    // 0x1a5354: 0x14620078  bne         $v1, $v0, . + 4 + (0x78 << 2)
label_1a5358:
    if (ctx->pc == 0x1A5358u) {
        ctx->pc = 0x1A535Cu;
        goto label_1a535c;
    }
    ctx->pc = 0x1A5354u;
    {
        const bool branch_taken_0x1a5354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5354) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A535Cu;
label_1a535c:
    // 0x1a535c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a535cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5360:
    // 0x1a5360: 0xc06560c  jal         func_195830
label_1a5364:
    if (ctx->pc == 0x1A5364u) {
        ctx->pc = 0x1A5364u;
            // 0x1a5364: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5368u;
        goto label_1a5368;
    }
    ctx->pc = 0x1A5360u;
    SET_GPR_U32(ctx, 31, 0x1A5368u);
    ctx->pc = 0x1A5364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5360u;
            // 0x1a5364: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5368u; }
        if (ctx->pc != 0x1A5368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5368u; }
        if (ctx->pc != 0x1A5368u) { return; }
    }
    ctx->pc = 0x1A5368u;
label_1a5368:
    // 0x1a5368: 0x10000073  b           . + 4 + (0x73 << 2)
label_1a536c:
    if (ctx->pc == 0x1A536Cu) {
        ctx->pc = 0x1A5370u;
        goto label_1a5370;
    }
    ctx->pc = 0x1A5368u;
    {
        const bool branch_taken_0x1a5368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5368) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A5370u;
label_1a5370:
    // 0x1a5370: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a5370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a5374:
    // 0x1a5374: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1a5374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1a5378:
    // 0x1a5378: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a5378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1a537c:
    // 0x1a537c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1a537cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a5380:
    // 0x1a5380: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a5380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a5384:
    // 0x1a5384: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1a5384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1a5388:
    // 0x1a5388: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1a5388u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1a538c:
    // 0x1a538c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1a5390:
    // 0x1a5390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1a5390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5394:
    // 0x1a5394: 0x0  nop
    ctx->pc = 0x1a5394u;
    // NOP
label_1a5398:
    // 0x1a5398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a5398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a539c:
    // 0x1a539c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a539cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1a53a0:
    // 0x1a53a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1a53a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a53a4:
    // 0x1a53a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1a53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a53a8:
    // 0x1a53a8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1a53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_1a53ac:
    // 0x1a53ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a53acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a53b0:
    // 0x1a53b0: 0x0  nop
    ctx->pc = 0x1a53b0u;
    // NOP
label_1a53b4:
    // 0x1a53b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a53b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a53b8:
    // 0x1a53b8: 0xc04b6ee  jal         func_12DBB8
label_1a53bc:
    if (ctx->pc == 0x1A53BCu) {
        ctx->pc = 0x1A53BCu;
            // 0x1a53bc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->pc = 0x1A53C0u;
        goto label_1a53c0;
    }
    ctx->pc = 0x1A53B8u;
    SET_GPR_U32(ctx, 31, 0x1A53C0u);
    ctx->pc = 0x1A53BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53B8u;
            // 0x1a53bc: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53C0u; }
        if (ctx->pc != 0x1A53C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53C0u; }
        if (ctx->pc != 0x1A53C0u) { return; }
    }
    ctx->pc = 0x1A53C0u;
label_1a53c0:
    // 0x1a53c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a53c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a53c4:
    // 0x1a53c4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a53c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a53c8:
    // 0x1a53c8: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a53c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a53cc:
    // 0x1a53cc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a53ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a53d0:
    // 0x1a53d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a53d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a53d4:
    // 0x1a53d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1a53d8:
    if (ctx->pc == 0x1A53D8u) {
        ctx->pc = 0x1A53D8u;
            // 0x1a53d8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1A53DCu;
        goto label_1a53dc;
    }
    ctx->pc = 0x1A53D4u;
    {
        const bool branch_taken_0x1a53d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A53D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53D4u;
            // 0x1a53d8: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53d4) {
            ctx->pc = 0x1A53E8u;
            goto label_1a53e8;
        }
    }
    ctx->pc = 0x1A53DCu;
label_1a53dc:
    // 0x1a53dc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a53dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a53e0:
    // 0x1a53e0: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a53e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a53e4:
    // 0x1a53e4: 0x0  nop
    ctx->pc = 0x1a53e4u;
    // NOP
label_1a53e8:
    // 0x1a53e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a53ec:
    // 0x1a53ec: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a53ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a53f0:
    // 0x1a53f0: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a53f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a53f4:
    // 0x1a53f4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a53f4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a53f8:
    // 0x1a53f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a53f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a53fc:
    // 0x1a53fc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1a5400:
    if (ctx->pc == 0x1A5400u) {
        ctx->pc = 0x1A5400u;
            // 0x1a5400: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->pc = 0x1A5404u;
        goto label_1a5404;
    }
    ctx->pc = 0x1A53FCu;
    {
        const bool branch_taken_0x1a53fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53FCu;
            // 0x1a5400: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a53fc) {
            ctx->pc = 0x1A5410u;
            goto label_1a5410;
        }
    }
    ctx->pc = 0x1A5404u;
label_1a5404:
    // 0x1a5404: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a5404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a5408:
    // 0x1a5408: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1a5408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1a540c:
    // 0x1a540c: 0x0  nop
    ctx->pc = 0x1a540cu;
    // NOP
label_1a5410:
    // 0x1a5410: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x1a5410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_1a5414:
    // 0x1a5414: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1a5414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5418:
    // 0x1a5418: 0x34437ae1  ori         $v1, $v0, 0x7AE1
    ctx->pc = 0x1a5418u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)31457u)));
label_1a541c:
    // 0x1a541c: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1a541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1a5420:
    // 0x1a5420: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a5424:
    // 0x1a5424: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1a5424u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1a5428:
    // 0x1a5428: 0xc040d72  jal         func_1035C8
label_1a542c:
    if (ctx->pc == 0x1A542Cu) {
        ctx->pc = 0x1A542Cu;
            // 0x1a542c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A5430u;
        goto label_1a5430;
    }
    ctx->pc = 0x1A5428u;
    SET_GPR_U32(ctx, 31, 0x1A5430u);
    ctx->pc = 0x1A542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5428u;
            // 0x1a542c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5430u; }
        if (ctx->pc != 0x1A5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5430u; }
        if (ctx->pc != 0x1A5430u) { return; }
    }
    ctx->pc = 0x1A5430u;
label_1a5430:
    // 0x1a5430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5434:
    // 0x1a5434: 0xc040880  jal         func_102200
label_1a5438:
    if (ctx->pc == 0x1A5438u) {
        ctx->pc = 0x1A5438u;
            // 0x1a5438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A543Cu;
        goto label_1a543c;
    }
    ctx->pc = 0x1A5434u;
    SET_GPR_U32(ctx, 31, 0x1A543Cu);
    ctx->pc = 0x1A5438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5434u;
            // 0x1a5438: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A543Cu; }
        if (ctx->pc != 0x1A543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A543Cu; }
        if (ctx->pc != 0x1A543Cu) { return; }
    }
    ctx->pc = 0x1A543Cu;
label_1a543c:
    // 0x1a543c: 0xc040a74  jal         func_1029D0
label_1a5440:
    if (ctx->pc == 0x1A5440u) {
        ctx->pc = 0x1A5440u;
            // 0x1a5440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5444u;
        goto label_1a5444;
    }
    ctx->pc = 0x1A543Cu;
    SET_GPR_U32(ctx, 31, 0x1A5444u);
    ctx->pc = 0x1A5440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A543Cu;
            // 0x1a5440: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5444u; }
        if (ctx->pc != 0x1A5444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5444u; }
        if (ctx->pc != 0x1A5444u) { return; }
    }
    ctx->pc = 0x1A5444u;
label_1a5444:
    // 0x1a5444: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1a5444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a5448:
    // 0x1a5448: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a5448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a544c:
    // 0x1a544c: 0x0  nop
    ctx->pc = 0x1a544cu;
    // NOP
label_1a5450:
    // 0x1a5450: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1a5450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1a5454:
    // 0x1a5454: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a5454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a5458:
    // 0x1a5458: 0xc7ac0044  lwc1        $f12, 0x44($sp)
    ctx->pc = 0x1a5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a545c:
    // 0x1a545c: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1a545cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5460:
    // 0x1a5460: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1a5464:
    if (ctx->pc == 0x1A5464u) {
        ctx->pc = 0x1A5464u;
            // 0x1a5464: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->pc = 0x1A5468u;
        goto label_1a5468;
    }
    ctx->pc = 0x1A5460u;
    {
        const bool branch_taken_0x1a5460 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A5464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5460u;
            // 0x1a5464: 0x3c033f94  lui         $v1, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5460) {
            ctx->pc = 0x1A54A0u;
            goto label_1a54a0;
        }
    }
    ctx->pc = 0x1A5468u;
label_1a5468:
    // 0x1a5468: 0x3c0247ae  lui         $v0, 0x47AE
    ctx->pc = 0x1a5468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18350 << 16));
label_1a546c:
    // 0x1a546c: 0x34637ae1  ori         $v1, $v1, 0x7AE1
    ctx->pc = 0x1a546cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)31457u)));
label_1a5470:
    // 0x1a5470: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1a5470u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
label_1a5474:
    // 0x1a5474: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a5474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1a5478:
    // 0x1a5478: 0xc040d72  jal         func_1035C8
label_1a547c:
    if (ctx->pc == 0x1A547Cu) {
        ctx->pc = 0x1A547Cu;
            // 0x1a547c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1A5480u;
        goto label_1a5480;
    }
    ctx->pc = 0x1A5478u;
    SET_GPR_U32(ctx, 31, 0x1A5480u);
    ctx->pc = 0x1A547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5478u;
            // 0x1a547c: 0x438825  or          $s1, $v0, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5480u; }
        if (ctx->pc != 0x1A5480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5480u; }
        if (ctx->pc != 0x1A5480u) { return; }
    }
    ctx->pc = 0x1A5480u;
label_1a5480:
    // 0x1a5480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a5480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5484:
    // 0x1a5484: 0xc040880  jal         func_102200
label_1a5488:
    if (ctx->pc == 0x1A5488u) {
        ctx->pc = 0x1A5488u;
            // 0x1a5488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A548Cu;
        goto label_1a548c;
    }
    ctx->pc = 0x1A5484u;
    SET_GPR_U32(ctx, 31, 0x1A548Cu);
    ctx->pc = 0x1A5488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5484u;
            // 0x1a5488: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A548Cu; }
        if (ctx->pc != 0x1A548Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A548Cu; }
        if (ctx->pc != 0x1A548Cu) { return; }
    }
    ctx->pc = 0x1A548Cu;
label_1a548c:
    // 0x1a548c: 0xc040a74  jal         func_1029D0
label_1a5490:
    if (ctx->pc == 0x1A5490u) {
        ctx->pc = 0x1A5490u;
            // 0x1a5490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5494u;
        goto label_1a5494;
    }
    ctx->pc = 0x1A548Cu;
    SET_GPR_U32(ctx, 31, 0x1A5494u);
    ctx->pc = 0x1A5490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A548Cu;
            // 0x1a5490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5494u; }
        if (ctx->pc != 0x1A5494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5494u; }
        if (ctx->pc != 0x1A5494u) { return; }
    }
    ctx->pc = 0x1A5494u;
label_1a5494:
    // 0x1a5494: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a5494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5498:
    // 0x1a5498: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a5498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a549c:
    // 0x1a549c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1a54a0:
    // 0x1a54a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a54a4:
    // 0x1a54a4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a54a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a54a8:
    // 0x1a54a8: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1a54a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a54ac:
    // 0x1a54ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a54acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a54b0:
    // 0x1a54b0: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x1a54b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
label_1a54b4:
    // 0x1a54b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a54b8:
    // 0x1a54b8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a54b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a54bc:
    // 0x1a54bc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1a54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a54c0:
    // 0x1a54c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a54c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a54c4:
    // 0x1a54c4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1a54c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a54c8:
    // 0x1a54c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a54cc:
    // 0x1a54cc: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x1a54ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
label_1a54d0:
    // 0x1a54d0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1a54d4:
    if (ctx->pc == 0x1A54D4u) {
        ctx->pc = 0x1A54D4u;
            // 0x1a54d4: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->pc = 0x1A54D8u;
        goto label_1a54d8;
    }
    ctx->pc = 0x1A54D0u;
    {
        const bool branch_taken_0x1a54d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A54D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54D0u;
            // 0x1a54d4: 0x28610033  slti        $at, $v1, 0x33 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54d0) {
            ctx->pc = 0x1A5518u;
            goto label_1a5518;
        }
    }
    ctx->pc = 0x1A54D8u;
label_1a54d8:
    // 0x1a54d8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1a54dc:
    if (ctx->pc == 0x1A54DCu) {
        ctx->pc = 0x1A54DCu;
            // 0x1a54dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1A54E0u;
        goto label_1a54e0;
    }
    ctx->pc = 0x1A54D8u;
    {
        const bool branch_taken_0x1a54d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A54DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A54D8u;
            // 0x1a54dc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a54d8) {
            ctx->pc = 0x1A5518u;
            goto label_1a5518;
        }
    }
    ctx->pc = 0x1A54E0u;
label_1a54e0:
    // 0x1a54e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1a54e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1a54e4:
    // 0x1a54e4: 0x0  nop
    ctx->pc = 0x1a54e4u;
    // NOP
label_1a54e8:
    // 0x1a54e8: 0x0  nop
    ctx->pc = 0x1a54e8u;
    // NOP
label_1a54ec:
    // 0x1a54ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1a54ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1a54f0:
    // 0x1a54f0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a54f4:
    if (ctx->pc == 0x1A54F4u) {
        ctx->pc = 0x1A54F8u;
        goto label_1a54f8;
    }
    ctx->pc = 0x1A54F0u;
    {
        const bool branch_taken_0x1a54f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a54f0) {
            ctx->pc = 0x1A5518u;
            goto label_1a5518;
        }
    }
    ctx->pc = 0x1A54F8u;
label_1a54f8:
    // 0x1a54f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a54fc:
    // 0x1a54fc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5500:
    // 0x1a5500: 0xc065598  jal         func_195660
label_1a5504:
    if (ctx->pc == 0x1A5504u) {
        ctx->pc = 0x1A5504u;
            // 0x1a5504: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1A5508u;
        goto label_1a5508;
    }
    ctx->pc = 0x1A5500u;
    SET_GPR_U32(ctx, 31, 0x1A5508u);
    ctx->pc = 0x1A5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5500u;
            // 0x1a5504: 0x2444000a  addiu       $a0, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5508u; }
        if (ctx->pc != 0x1A5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5508u; }
        if (ctx->pc != 0x1A5508u) { return; }
    }
    ctx->pc = 0x1A5508u;
label_1a5508:
    // 0x1a5508: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a5508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a550c:
    // 0x1a550c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a5510:
    // 0x1a5510: 0xc065598  jal         func_195660
label_1a5514:
    if (ctx->pc == 0x1A5514u) {
        ctx->pc = 0x1A5514u;
            // 0x1a5514: 0x2444fff6  addiu       $a0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->pc = 0x1A5518u;
        goto label_1a5518;
    }
    ctx->pc = 0x1A5510u;
    SET_GPR_U32(ctx, 31, 0x1A5518u);
    ctx->pc = 0x1A5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5510u;
            // 0x1a5514: 0x2444fff6  addiu       $a0, $v0, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5518u; }
        if (ctx->pc != 0x1A5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5518u; }
        if (ctx->pc != 0x1A5518u) { return; }
    }
    ctx->pc = 0x1A5518u;
label_1a5518:
    // 0x1a5518: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a5518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a551c:
    // 0x1a551c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a5520:
    // 0x1a5520: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a5524:
    if (ctx->pc == 0x1A5524u) {
        ctx->pc = 0x1A5528u;
        goto label_1a5528;
    }
    ctx->pc = 0x1A5520u;
    {
        const bool branch_taken_0x1a5520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a5520) {
            ctx->pc = 0x1A5538u;
            goto label_1a5538;
        }
    }
    ctx->pc = 0x1A5528u;
label_1a5528:
    // 0x1a5528: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1a5528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a552c:
    // 0x1a552c: 0xc06560c  jal         func_195830
label_1a5530:
    if (ctx->pc == 0x1A5530u) {
        ctx->pc = 0x1A5530u;
            // 0x1a5530: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->pc = 0x1A5534u;
        goto label_1a5534;
    }
    ctx->pc = 0x1A552Cu;
    SET_GPR_U32(ctx, 31, 0x1A5534u);
    ctx->pc = 0x1A5530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A552Cu;
            // 0x1a5530: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5534u; }
        if (ctx->pc != 0x1A5534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5534u; }
        if (ctx->pc != 0x1A5534u) { return; }
    }
    ctx->pc = 0x1A5534u;
label_1a5534:
    // 0x1a5534: 0x0  nop
    ctx->pc = 0x1a5534u;
    // NOP
label_1a5538:
    // 0x1a5538: 0xc04b788  jal         func_12DE20
label_1a553c:
    if (ctx->pc == 0x1A553Cu) {
        ctx->pc = 0x1A553Cu;
            // 0x1a553c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A5540u;
        goto label_1a5540;
    }
    ctx->pc = 0x1A5538u;
    SET_GPR_U32(ctx, 31, 0x1A5540u);
    ctx->pc = 0x1A553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5538u;
            // 0x1a553c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5540u; }
        if (ctx->pc != 0x1A5540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5540u; }
        if (ctx->pc != 0x1A5540u) { return; }
    }
    ctx->pc = 0x1A5540u;
label_1a5540:
    // 0x1a5540: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5544:
    // 0x1a5544: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5548:
    // 0x1a5548: 0xc04b7da  jal         func_12DF68
label_1a554c:
    if (ctx->pc == 0x1A554Cu) {
        ctx->pc = 0x1A554Cu;
            // 0x1a554c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5550u;
        goto label_1a5550;
    }
    ctx->pc = 0x1A5548u;
    SET_GPR_U32(ctx, 31, 0x1A5550u);
    ctx->pc = 0x1A554Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5548u;
            // 0x1a554c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5550u; }
        if (ctx->pc != 0x1A5550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5550u; }
        if (ctx->pc != 0x1A5550u) { return; }
    }
    ctx->pc = 0x1A5550u;
label_1a5550:
    // 0x1a5550: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5554:
    // 0x1a5554: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a5554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5558:
    // 0x1a5558: 0xc04b804  jal         func_12E010
label_1a555c:
    if (ctx->pc == 0x1A555Cu) {
        ctx->pc = 0x1A555Cu;
            // 0x1a555c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5560u;
        goto label_1a5560;
    }
    ctx->pc = 0x1A5558u;
    SET_GPR_U32(ctx, 31, 0x1A5560u);
    ctx->pc = 0x1A555Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5558u;
            // 0x1a555c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5560u; }
        if (ctx->pc != 0x1A5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5560u; }
        if (ctx->pc != 0x1A5560u) { return; }
    }
    ctx->pc = 0x1A5560u;
label_1a5560:
    // 0x1a5560: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5564:
    // 0x1a5564: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a5564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5568:
    // 0x1a5568: 0xc04b7b0  jal         func_12DEC0
label_1a556c:
    if (ctx->pc == 0x1A556Cu) {
        ctx->pc = 0x1A556Cu;
            // 0x1a556c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5570u;
        goto label_1a5570;
    }
    ctx->pc = 0x1A5568u;
    SET_GPR_U32(ctx, 31, 0x1A5570u);
    ctx->pc = 0x1A556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5568u;
            // 0x1a556c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5570u; }
        if (ctx->pc != 0x1A5570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5570u; }
        if (ctx->pc != 0x1A5570u) { return; }
    }
    ctx->pc = 0x1A5570u;
label_1a5570:
    // 0x1a5570: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a5570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5574:
    // 0x1a5574: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a5574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5578:
    // 0x1a5578: 0xc04b75e  jal         func_12DD78
label_1a557c:
    if (ctx->pc == 0x1A557Cu) {
        ctx->pc = 0x1A557Cu;
            // 0x1a557c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1A5580u;
        goto label_1a5580;
    }
    ctx->pc = 0x1A5578u;
    SET_GPR_U32(ctx, 31, 0x1A5580u);
    ctx->pc = 0x1A557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5578u;
            // 0x1a557c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5580u; }
        if (ctx->pc != 0x1A5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5580u; }
        if (ctx->pc != 0x1A5580u) { return; }
    }
    ctx->pc = 0x1A5580u;
label_1a5580:
    // 0x1a5580: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a5580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5584:
    // 0x1a5584: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a5584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5588:
    // 0x1a5588: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a5588u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a558c:
    // 0x1a558c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a5590:
    if (ctx->pc == 0x1A5590u) {
        ctx->pc = 0x1A5594u;
        goto label_1a5594;
    }
    ctx->pc = 0x1A558Cu;
    {
        const bool branch_taken_0x1a558c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a558c) {
            ctx->pc = 0x1A55E0u;
            goto label_1a55e0;
        }
    }
    ctx->pc = 0x1A5594u;
label_1a5594:
    // 0x1a5594: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a5594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a5598:
    // 0x1a5598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a559c:
    if (ctx->pc == 0x1A559Cu) {
        ctx->pc = 0x1A55A0u;
        goto label_1a55a0;
    }
    ctx->pc = 0x1A5598u;
    {
        const bool branch_taken_0x1a5598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5598) {
            ctx->pc = 0x1A55B0u;
            goto label_1a55b0;
        }
    }
    ctx->pc = 0x1A55A0u;
label_1a55a0:
    // 0x1a55a0: 0xc0604f0  jal         func_1813C0
label_1a55a4:
    if (ctx->pc == 0x1A55A4u) {
        ctx->pc = 0x1A55A4u;
            // 0x1a55a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A55A8u;
        goto label_1a55a8;
    }
    ctx->pc = 0x1A55A0u;
    SET_GPR_U32(ctx, 31, 0x1A55A8u);
    ctx->pc = 0x1A55A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55A0u;
            // 0x1a55a4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55A8u; }
        if (ctx->pc != 0x1A55A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55A8u; }
        if (ctx->pc != 0x1A55A8u) { return; }
    }
    ctx->pc = 0x1A55A8u;
label_1a55a8:
    // 0x1a55a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a55ac:
    if (ctx->pc == 0x1A55ACu) {
        ctx->pc = 0x1A55B0u;
        goto label_1a55b0;
    }
    ctx->pc = 0x1A55A8u;
    {
        const bool branch_taken_0x1a55a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55a8) {
            ctx->pc = 0x1A55B8u;
            goto label_1a55b8;
        }
    }
    ctx->pc = 0x1A55B0u;
label_1a55b0:
    // 0x1a55b0: 0xc0604dc  jal         func_181370
label_1a55b4:
    if (ctx->pc == 0x1A55B4u) {
        ctx->pc = 0x1A55B4u;
            // 0x1a55b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A55B8u;
        goto label_1a55b8;
    }
    ctx->pc = 0x1A55B0u;
    SET_GPR_U32(ctx, 31, 0x1A55B8u);
    ctx->pc = 0x1A55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55B0u;
            // 0x1a55b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B8u; }
        if (ctx->pc != 0x1A55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55B8u; }
        if (ctx->pc != 0x1A55B8u) { return; }
    }
    ctx->pc = 0x1A55B8u;
label_1a55b8:
    // 0x1a55b8: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a55bc:
    // 0x1a55bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a55c0:
    if (ctx->pc == 0x1A55C0u) {
        ctx->pc = 0x1A55C4u;
        goto label_1a55c4;
    }
    ctx->pc = 0x1A55BCu;
    {
        const bool branch_taken_0x1a55bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a55bc) {
            ctx->pc = 0x1A55D0u;
            goto label_1a55d0;
        }
    }
    ctx->pc = 0x1A55C4u;
label_1a55c4:
    // 0x1a55c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a55c8:
    if (ctx->pc == 0x1A55C8u) {
        ctx->pc = 0x1A55C8u;
            // 0x1a55c8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1A55CCu;
        goto label_1a55cc;
    }
    ctx->pc = 0x1A55C4u;
    {
        const bool branch_taken_0x1a55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55C4u;
            // 0x1a55c8: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55c4) {
            ctx->pc = 0x1A55F0u;
            goto label_1a55f0;
        }
    }
    ctx->pc = 0x1A55CCu;
label_1a55cc:
    // 0x1a55cc: 0x0  nop
    ctx->pc = 0x1a55ccu;
    // NOP
label_1a55d0:
    // 0x1a55d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a55d4:
    // 0x1a55d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a55d8:
    if (ctx->pc == 0x1A55D8u) {
        ctx->pc = 0x1A55D8u;
            // 0x1a55d8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1A55DCu;
        goto label_1a55dc;
    }
    ctx->pc = 0x1A55D4u;
    {
        const bool branch_taken_0x1a55d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A55D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55D4u;
            // 0x1a55d8: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a55d4) {
            ctx->pc = 0x1A55F0u;
            goto label_1a55f0;
        }
    }
    ctx->pc = 0x1A55DCu;
label_1a55dc:
    // 0x1a55dc: 0x0  nop
    ctx->pc = 0x1a55dcu;
    // NOP
label_1a55e0:
    // 0x1a55e0: 0xc0604dc  jal         func_181370
label_1a55e4:
    if (ctx->pc == 0x1A55E4u) {
        ctx->pc = 0x1A55E4u;
            // 0x1a55e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A55E8u;
        goto label_1a55e8;
    }
    ctx->pc = 0x1A55E0u;
    SET_GPR_U32(ctx, 31, 0x1A55E8u);
    ctx->pc = 0x1A55E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A55E0u;
            // 0x1a55e4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E8u; }
        if (ctx->pc != 0x1A55E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A55E8u; }
        if (ctx->pc != 0x1A55E8u) { return; }
    }
    ctx->pc = 0x1A55E8u;
label_1a55e8:
    // 0x1a55e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a55ec:
    // 0x1a55ec: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1a55ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1a55f0:
    // 0x1a55f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a55f4:
    // 0x1a55f4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a55f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1a55f8:
    // 0x1a55f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a55f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a55fc:
    // 0x1a55fc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a55fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a5600:
    // 0x1a5600: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a5600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a5604:
    // 0x1a5604: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a5604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a5608:
    // 0x1a5608: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a560c:
    // 0x1a560c: 0x0  nop
    ctx->pc = 0x1a560cu;
    // NOP
label_1a5610:
    // 0x1a5610: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a5610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a5614:
    // 0x1a5614: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a5614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a5618:
    // 0x1a5618: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a5618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a561c:
    // 0x1a561c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a5620:
    // 0x1a5620: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5624:
    // 0x1a5624: 0x0  nop
    ctx->pc = 0x1a5624u;
    // NOP
label_1a5628:
    // 0x1a5628: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a5628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a562c:
    // 0x1a562c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1a562cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a5630:
    // 0x1a5630: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1a5630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_1a5634:
    // 0x1a5634: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a5638:
    // 0x1a5638: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a563c:
    // 0x1a563c: 0x0  nop
    ctx->pc = 0x1a563cu;
    // NOP
label_1a5640:
    // 0x1a5640: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a5640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a5644:
    // 0x1a5644: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1a5644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1a5648:
    // 0x1a5648: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1a5648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a564c:
    // 0x1a564c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a5650:
    // 0x1a5650: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a5650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a5654:
    // 0x1a5654: 0x0  nop
    ctx->pc = 0x1a5654u;
    // NOP
label_1a5658:
    // 0x1a5658: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a5658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a565c:
    // 0x1a565c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1a565cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a5660:
    // 0x1a5660: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a5660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a5664:
    // 0x1a5664: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a5668:
    // 0x1a5668: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a5668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a566c:
    // 0x1a566c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5670:
    // 0x1a5670: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1a5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5674:
    // 0x1a5674: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a5678:
    // 0x1a5678: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1a567c:
    if (ctx->pc == 0x1A567Cu) {
        ctx->pc = 0x1A567Cu;
            // 0x1a567c: 0x3c02c28c  lui         $v0, 0xC28C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
        ctx->pc = 0x1A5680u;
        goto label_1a5680;
    }
    ctx->pc = 0x1A5678u;
    {
        const bool branch_taken_0x1a5678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A567Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5678u;
            // 0x1a567c: 0x3c02c28c  lui         $v0, 0xC28C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49804 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5678) {
            ctx->pc = 0x1A56C8u;
            goto label_1a56c8;
        }
    }
    ctx->pc = 0x1A5680u;
label_1a5680:
    // 0x1a5680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a5680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a5684:
    // 0x1a5684: 0x0  nop
    ctx->pc = 0x1a5684u;
    // NOP
label_1a5688:
    // 0x1a5688: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a5688u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a568c:
    // 0x1a568c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1a5690:
    if (ctx->pc == 0x1A5690u) {
        ctx->pc = 0x1A5694u;
        goto label_1a5694;
    }
    ctx->pc = 0x1A568Cu;
    {
        const bool branch_taken_0x1a568c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a568c) {
            ctx->pc = 0x1A56C8u;
            goto label_1a56c8;
        }
    }
    ctx->pc = 0x1A5694u;
label_1a5694:
    // 0x1a5694: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5698:
    // 0x1a5698: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a5698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1a569c:
    // 0x1a569c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a569cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a56a0:
    // 0x1a56a0: 0x0  nop
    ctx->pc = 0x1a56a0u;
    // NOP
label_1a56a4:
    // 0x1a56a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a56a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a56a8:
    // 0x1a56a8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a56ac:
    if (ctx->pc == 0x1A56ACu) {
        ctx->pc = 0x1A56ACu;
            // 0x1a56ac: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1A56B0u;
        goto label_1a56b0;
    }
    ctx->pc = 0x1A56A8u;
    {
        const bool branch_taken_0x1a56a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A56ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56A8u;
            // 0x1a56ac: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a56a8) {
            ctx->pc = 0x1A56C8u;
            goto label_1a56c8;
        }
    }
    ctx->pc = 0x1A56B0u;
label_1a56b0:
    // 0x1a56b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a56b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a56b4:
    // 0x1a56b4: 0x0  nop
    ctx->pc = 0x1a56b4u;
    // NOP
label_1a56b8:
    // 0x1a56b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a56b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a56bc:
    // 0x1a56bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a56c0:
    if (ctx->pc == 0x1A56C0u) {
        ctx->pc = 0x1A56C4u;
        goto label_1a56c4;
    }
    ctx->pc = 0x1A56BCu;
    {
        const bool branch_taken_0x1a56bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a56bc) {
            ctx->pc = 0x1A56E0u;
            goto label_1a56e0;
        }
    }
    ctx->pc = 0x1A56C4u;
label_1a56c4:
    // 0x1a56c4: 0x0  nop
    ctx->pc = 0x1a56c4u;
    // NOP
label_1a56c8:
    // 0x1a56c8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a56cc:
    // 0x1a56cc: 0x40f809  jalr        $v0
label_1a56d0:
    if (ctx->pc == 0x1A56D0u) {
        ctx->pc = 0x1A56D0u;
            // 0x1a56d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A56D4u;
        goto label_1a56d4;
    }
    ctx->pc = 0x1A56CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A56D4u);
        ctx->pc = 0x1A56D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56CCu;
            // 0x1a56d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4550u: goto label_1a4550;
            case 0x1A4554u: goto label_1a4554;
            case 0x1A4558u: goto label_1a4558;
            case 0x1A455Cu: goto label_1a455c;
            case 0x1A4560u: goto label_1a4560;
            case 0x1A4564u: goto label_1a4564;
            case 0x1A4568u: goto label_1a4568;
            case 0x1A456Cu: goto label_1a456c;
            case 0x1A4570u: goto label_1a4570;
            case 0x1A4574u: goto label_1a4574;
            case 0x1A4578u: goto label_1a4578;
            case 0x1A457Cu: goto label_1a457c;
            case 0x1A4580u: goto label_1a4580;
            case 0x1A4584u: goto label_1a4584;
            case 0x1A4588u: goto label_1a4588;
            case 0x1A458Cu: goto label_1a458c;
            case 0x1A4590u: goto label_1a4590;
            case 0x1A4594u: goto label_1a4594;
            case 0x1A4598u: goto label_1a4598;
            case 0x1A459Cu: goto label_1a459c;
            case 0x1A45A0u: goto label_1a45a0;
            case 0x1A45A4u: goto label_1a45a4;
            case 0x1A45A8u: goto label_1a45a8;
            case 0x1A45ACu: goto label_1a45ac;
            case 0x1A45B0u: goto label_1a45b0;
            case 0x1A45B4u: goto label_1a45b4;
            case 0x1A45B8u: goto label_1a45b8;
            case 0x1A45BCu: goto label_1a45bc;
            case 0x1A45C0u: goto label_1a45c0;
            case 0x1A45C4u: goto label_1a45c4;
            case 0x1A45C8u: goto label_1a45c8;
            case 0x1A45CCu: goto label_1a45cc;
            case 0x1A45D0u: goto label_1a45d0;
            case 0x1A45D4u: goto label_1a45d4;
            case 0x1A45D8u: goto label_1a45d8;
            case 0x1A45DCu: goto label_1a45dc;
            case 0x1A45E0u: goto label_1a45e0;
            case 0x1A45E4u: goto label_1a45e4;
            case 0x1A45E8u: goto label_1a45e8;
            case 0x1A45ECu: goto label_1a45ec;
            case 0x1A45F0u: goto label_1a45f0;
            case 0x1A45F4u: goto label_1a45f4;
            case 0x1A45F8u: goto label_1a45f8;
            case 0x1A45FCu: goto label_1a45fc;
            case 0x1A4600u: goto label_1a4600;
            case 0x1A4604u: goto label_1a4604;
            case 0x1A4608u: goto label_1a4608;
            case 0x1A460Cu: goto label_1a460c;
            case 0x1A4610u: goto label_1a4610;
            case 0x1A4614u: goto label_1a4614;
            case 0x1A4618u: goto label_1a4618;
            case 0x1A461Cu: goto label_1a461c;
            case 0x1A4620u: goto label_1a4620;
            case 0x1A4624u: goto label_1a4624;
            case 0x1A4628u: goto label_1a4628;
            case 0x1A462Cu: goto label_1a462c;
            case 0x1A4630u: goto label_1a4630;
            case 0x1A4634u: goto label_1a4634;
            case 0x1A4638u: goto label_1a4638;
            case 0x1A463Cu: goto label_1a463c;
            case 0x1A4640u: goto label_1a4640;
            case 0x1A4644u: goto label_1a4644;
            case 0x1A4648u: goto label_1a4648;
            case 0x1A464Cu: goto label_1a464c;
            case 0x1A4650u: goto label_1a4650;
            case 0x1A4654u: goto label_1a4654;
            case 0x1A4658u: goto label_1a4658;
            case 0x1A465Cu: goto label_1a465c;
            case 0x1A4660u: goto label_1a4660;
            case 0x1A4664u: goto label_1a4664;
            case 0x1A4668u: goto label_1a4668;
            case 0x1A466Cu: goto label_1a466c;
            case 0x1A4670u: goto label_1a4670;
            case 0x1A4674u: goto label_1a4674;
            case 0x1A4678u: goto label_1a4678;
            case 0x1A467Cu: goto label_1a467c;
            case 0x1A4680u: goto label_1a4680;
            case 0x1A4684u: goto label_1a4684;
            case 0x1A4688u: goto label_1a4688;
            case 0x1A468Cu: goto label_1a468c;
            case 0x1A4690u: goto label_1a4690;
            case 0x1A4694u: goto label_1a4694;
            case 0x1A4698u: goto label_1a4698;
            case 0x1A469Cu: goto label_1a469c;
            case 0x1A46A0u: goto label_1a46a0;
            case 0x1A46A4u: goto label_1a46a4;
            case 0x1A46A8u: goto label_1a46a8;
            case 0x1A46ACu: goto label_1a46ac;
            case 0x1A46B0u: goto label_1a46b0;
            case 0x1A46B4u: goto label_1a46b4;
            case 0x1A46B8u: goto label_1a46b8;
            case 0x1A46BCu: goto label_1a46bc;
            case 0x1A46C0u: goto label_1a46c0;
            case 0x1A46C4u: goto label_1a46c4;
            case 0x1A46C8u: goto label_1a46c8;
            case 0x1A46CCu: goto label_1a46cc;
            case 0x1A46D0u: goto label_1a46d0;
            case 0x1A46D4u: goto label_1a46d4;
            case 0x1A46D8u: goto label_1a46d8;
            case 0x1A46DCu: goto label_1a46dc;
            case 0x1A46E0u: goto label_1a46e0;
            case 0x1A46E4u: goto label_1a46e4;
            case 0x1A46E8u: goto label_1a46e8;
            case 0x1A46ECu: goto label_1a46ec;
            case 0x1A46F0u: goto label_1a46f0;
            case 0x1A46F4u: goto label_1a46f4;
            case 0x1A46F8u: goto label_1a46f8;
            case 0x1A46FCu: goto label_1a46fc;
            case 0x1A4700u: goto label_1a4700;
            case 0x1A4704u: goto label_1a4704;
            case 0x1A4708u: goto label_1a4708;
            case 0x1A470Cu: goto label_1a470c;
            case 0x1A4710u: goto label_1a4710;
            case 0x1A4714u: goto label_1a4714;
            case 0x1A4718u: goto label_1a4718;
            case 0x1A471Cu: goto label_1a471c;
            case 0x1A4720u: goto label_1a4720;
            case 0x1A4724u: goto label_1a4724;
            case 0x1A4728u: goto label_1a4728;
            case 0x1A472Cu: goto label_1a472c;
            case 0x1A4730u: goto label_1a4730;
            case 0x1A4734u: goto label_1a4734;
            case 0x1A4738u: goto label_1a4738;
            case 0x1A473Cu: goto label_1a473c;
            case 0x1A4740u: goto label_1a4740;
            case 0x1A4744u: goto label_1a4744;
            case 0x1A4748u: goto label_1a4748;
            case 0x1A474Cu: goto label_1a474c;
            case 0x1A4750u: goto label_1a4750;
            case 0x1A4754u: goto label_1a4754;
            case 0x1A4758u: goto label_1a4758;
            case 0x1A475Cu: goto label_1a475c;
            case 0x1A4760u: goto label_1a4760;
            case 0x1A4764u: goto label_1a4764;
            case 0x1A4768u: goto label_1a4768;
            case 0x1A476Cu: goto label_1a476c;
            case 0x1A4770u: goto label_1a4770;
            case 0x1A4774u: goto label_1a4774;
            case 0x1A4778u: goto label_1a4778;
            case 0x1A477Cu: goto label_1a477c;
            case 0x1A4780u: goto label_1a4780;
            case 0x1A4784u: goto label_1a4784;
            case 0x1A4788u: goto label_1a4788;
            case 0x1A478Cu: goto label_1a478c;
            case 0x1A4790u: goto label_1a4790;
            case 0x1A4794u: goto label_1a4794;
            case 0x1A4798u: goto label_1a4798;
            case 0x1A479Cu: goto label_1a479c;
            case 0x1A47A0u: goto label_1a47a0;
            case 0x1A47A4u: goto label_1a47a4;
            case 0x1A47A8u: goto label_1a47a8;
            case 0x1A47ACu: goto label_1a47ac;
            case 0x1A47B0u: goto label_1a47b0;
            case 0x1A47B4u: goto label_1a47b4;
            case 0x1A47B8u: goto label_1a47b8;
            case 0x1A47BCu: goto label_1a47bc;
            case 0x1A47C0u: goto label_1a47c0;
            case 0x1A47C4u: goto label_1a47c4;
            case 0x1A47C8u: goto label_1a47c8;
            case 0x1A47CCu: goto label_1a47cc;
            case 0x1A47D0u: goto label_1a47d0;
            case 0x1A47D4u: goto label_1a47d4;
            case 0x1A47D8u: goto label_1a47d8;
            case 0x1A47DCu: goto label_1a47dc;
            case 0x1A47E0u: goto label_1a47e0;
            case 0x1A47E4u: goto label_1a47e4;
            case 0x1A47E8u: goto label_1a47e8;
            case 0x1A47ECu: goto label_1a47ec;
            case 0x1A47F0u: goto label_1a47f0;
            case 0x1A47F4u: goto label_1a47f4;
            case 0x1A47F8u: goto label_1a47f8;
            case 0x1A47FCu: goto label_1a47fc;
            case 0x1A4800u: goto label_1a4800;
            case 0x1A4804u: goto label_1a4804;
            case 0x1A4808u: goto label_1a4808;
            case 0x1A480Cu: goto label_1a480c;
            case 0x1A4810u: goto label_1a4810;
            case 0x1A4814u: goto label_1a4814;
            case 0x1A4818u: goto label_1a4818;
            case 0x1A481Cu: goto label_1a481c;
            case 0x1A4820u: goto label_1a4820;
            case 0x1A4824u: goto label_1a4824;
            case 0x1A4828u: goto label_1a4828;
            case 0x1A482Cu: goto label_1a482c;
            case 0x1A4830u: goto label_1a4830;
            case 0x1A4834u: goto label_1a4834;
            case 0x1A4838u: goto label_1a4838;
            case 0x1A483Cu: goto label_1a483c;
            case 0x1A4840u: goto label_1a4840;
            case 0x1A4844u: goto label_1a4844;
            case 0x1A4848u: goto label_1a4848;
            case 0x1A484Cu: goto label_1a484c;
            case 0x1A4850u: goto label_1a4850;
            case 0x1A4854u: goto label_1a4854;
            case 0x1A4858u: goto label_1a4858;
            case 0x1A485Cu: goto label_1a485c;
            case 0x1A4860u: goto label_1a4860;
            case 0x1A4864u: goto label_1a4864;
            case 0x1A4868u: goto label_1a4868;
            case 0x1A486Cu: goto label_1a486c;
            case 0x1A4870u: goto label_1a4870;
            case 0x1A4874u: goto label_1a4874;
            case 0x1A4878u: goto label_1a4878;
            case 0x1A487Cu: goto label_1a487c;
            case 0x1A4880u: goto label_1a4880;
            case 0x1A4884u: goto label_1a4884;
            case 0x1A4888u: goto label_1a4888;
            case 0x1A488Cu: goto label_1a488c;
            case 0x1A4890u: goto label_1a4890;
            case 0x1A4894u: goto label_1a4894;
            case 0x1A4898u: goto label_1a4898;
            case 0x1A489Cu: goto label_1a489c;
            case 0x1A48A0u: goto label_1a48a0;
            case 0x1A48A4u: goto label_1a48a4;
            case 0x1A48A8u: goto label_1a48a8;
            case 0x1A48ACu: goto label_1a48ac;
            case 0x1A48B0u: goto label_1a48b0;
            case 0x1A48B4u: goto label_1a48b4;
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48BCu: goto label_1a48bc;
            case 0x1A48C0u: goto label_1a48c0;
            case 0x1A48C4u: goto label_1a48c4;
            case 0x1A48C8u: goto label_1a48c8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48D0u: goto label_1a48d0;
            case 0x1A48D4u: goto label_1a48d4;
            case 0x1A48D8u: goto label_1a48d8;
            case 0x1A48DCu: goto label_1a48dc;
            case 0x1A48E0u: goto label_1a48e0;
            case 0x1A48E4u: goto label_1a48e4;
            case 0x1A48E8u: goto label_1a48e8;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A48F0u: goto label_1a48f0;
            case 0x1A48F4u: goto label_1a48f4;
            case 0x1A48F8u: goto label_1a48f8;
            case 0x1A48FCu: goto label_1a48fc;
            case 0x1A4900u: goto label_1a4900;
            case 0x1A4904u: goto label_1a4904;
            case 0x1A4908u: goto label_1a4908;
            case 0x1A490Cu: goto label_1a490c;
            case 0x1A4910u: goto label_1a4910;
            case 0x1A4914u: goto label_1a4914;
            case 0x1A4918u: goto label_1a4918;
            case 0x1A491Cu: goto label_1a491c;
            case 0x1A4920u: goto label_1a4920;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4928u: goto label_1a4928;
            case 0x1A492Cu: goto label_1a492c;
            case 0x1A4930u: goto label_1a4930;
            case 0x1A4934u: goto label_1a4934;
            case 0x1A4938u: goto label_1a4938;
            case 0x1A493Cu: goto label_1a493c;
            case 0x1A4940u: goto label_1a4940;
            case 0x1A4944u: goto label_1a4944;
            case 0x1A4948u: goto label_1a4948;
            case 0x1A494Cu: goto label_1a494c;
            case 0x1A4950u: goto label_1a4950;
            case 0x1A4954u: goto label_1a4954;
            case 0x1A4958u: goto label_1a4958;
            case 0x1A495Cu: goto label_1a495c;
            case 0x1A4960u: goto label_1a4960;
            case 0x1A4964u: goto label_1a4964;
            case 0x1A4968u: goto label_1a4968;
            case 0x1A496Cu: goto label_1a496c;
            case 0x1A4970u: goto label_1a4970;
            case 0x1A4974u: goto label_1a4974;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4980u: goto label_1a4980;
            case 0x1A4984u: goto label_1a4984;
            case 0x1A4988u: goto label_1a4988;
            case 0x1A498Cu: goto label_1a498c;
            case 0x1A4990u: goto label_1a4990;
            case 0x1A4994u: goto label_1a4994;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49A4u: goto label_1a49a4;
            case 0x1A49A8u: goto label_1a49a8;
            case 0x1A49ACu: goto label_1a49ac;
            case 0x1A49B0u: goto label_1a49b0;
            case 0x1A49B4u: goto label_1a49b4;
            case 0x1A49B8u: goto label_1a49b8;
            case 0x1A49BCu: goto label_1a49bc;
            case 0x1A49C0u: goto label_1a49c0;
            case 0x1A49C4u: goto label_1a49c4;
            case 0x1A49C8u: goto label_1a49c8;
            case 0x1A49CCu: goto label_1a49cc;
            case 0x1A49D0u: goto label_1a49d0;
            case 0x1A49D4u: goto label_1a49d4;
            case 0x1A49D8u: goto label_1a49d8;
            case 0x1A49DCu: goto label_1a49dc;
            case 0x1A49E0u: goto label_1a49e0;
            case 0x1A49E4u: goto label_1a49e4;
            case 0x1A49E8u: goto label_1a49e8;
            case 0x1A49ECu: goto label_1a49ec;
            case 0x1A49F0u: goto label_1a49f0;
            case 0x1A49F4u: goto label_1a49f4;
            case 0x1A49F8u: goto label_1a49f8;
            case 0x1A49FCu: goto label_1a49fc;
            case 0x1A4A00u: goto label_1a4a00;
            case 0x1A4A04u: goto label_1a4a04;
            case 0x1A4A08u: goto label_1a4a08;
            case 0x1A4A0Cu: goto label_1a4a0c;
            case 0x1A4A10u: goto label_1a4a10;
            case 0x1A4A14u: goto label_1a4a14;
            case 0x1A4A18u: goto label_1a4a18;
            case 0x1A4A1Cu: goto label_1a4a1c;
            case 0x1A4A20u: goto label_1a4a20;
            case 0x1A4A24u: goto label_1a4a24;
            case 0x1A4A28u: goto label_1a4a28;
            case 0x1A4A2Cu: goto label_1a4a2c;
            case 0x1A4A30u: goto label_1a4a30;
            case 0x1A4A34u: goto label_1a4a34;
            case 0x1A4A38u: goto label_1a4a38;
            case 0x1A4A3Cu: goto label_1a4a3c;
            case 0x1A4A40u: goto label_1a4a40;
            case 0x1A4A44u: goto label_1a4a44;
            case 0x1A4A48u: goto label_1a4a48;
            case 0x1A4A4Cu: goto label_1a4a4c;
            case 0x1A4A50u: goto label_1a4a50;
            case 0x1A4A54u: goto label_1a4a54;
            case 0x1A4A58u: goto label_1a4a58;
            case 0x1A4A5Cu: goto label_1a4a5c;
            case 0x1A4A60u: goto label_1a4a60;
            case 0x1A4A64u: goto label_1a4a64;
            case 0x1A4A68u: goto label_1a4a68;
            case 0x1A4A6Cu: goto label_1a4a6c;
            case 0x1A4A70u: goto label_1a4a70;
            case 0x1A4A74u: goto label_1a4a74;
            case 0x1A4A78u: goto label_1a4a78;
            case 0x1A4A7Cu: goto label_1a4a7c;
            case 0x1A4A80u: goto label_1a4a80;
            case 0x1A4A84u: goto label_1a4a84;
            case 0x1A4A88u: goto label_1a4a88;
            case 0x1A4A8Cu: goto label_1a4a8c;
            case 0x1A4A90u: goto label_1a4a90;
            case 0x1A4A94u: goto label_1a4a94;
            case 0x1A4A98u: goto label_1a4a98;
            case 0x1A4A9Cu: goto label_1a4a9c;
            case 0x1A4AA0u: goto label_1a4aa0;
            case 0x1A4AA4u: goto label_1a4aa4;
            case 0x1A4AA8u: goto label_1a4aa8;
            case 0x1A4AACu: goto label_1a4aac;
            case 0x1A4AB0u: goto label_1a4ab0;
            case 0x1A4AB4u: goto label_1a4ab4;
            case 0x1A4AB8u: goto label_1a4ab8;
            case 0x1A4ABCu: goto label_1a4abc;
            case 0x1A4AC0u: goto label_1a4ac0;
            case 0x1A4AC4u: goto label_1a4ac4;
            case 0x1A4AC8u: goto label_1a4ac8;
            case 0x1A4ACCu: goto label_1a4acc;
            case 0x1A4AD0u: goto label_1a4ad0;
            case 0x1A4AD4u: goto label_1a4ad4;
            case 0x1A4AD8u: goto label_1a4ad8;
            case 0x1A4ADCu: goto label_1a4adc;
            case 0x1A4AE0u: goto label_1a4ae0;
            case 0x1A4AE4u: goto label_1a4ae4;
            case 0x1A4AE8u: goto label_1a4ae8;
            case 0x1A4AECu: goto label_1a4aec;
            case 0x1A4AF0u: goto label_1a4af0;
            case 0x1A4AF4u: goto label_1a4af4;
            case 0x1A4AF8u: goto label_1a4af8;
            case 0x1A4AFCu: goto label_1a4afc;
            case 0x1A4B00u: goto label_1a4b00;
            case 0x1A4B04u: goto label_1a4b04;
            case 0x1A4B08u: goto label_1a4b08;
            case 0x1A4B0Cu: goto label_1a4b0c;
            case 0x1A4B10u: goto label_1a4b10;
            case 0x1A4B14u: goto label_1a4b14;
            case 0x1A4B18u: goto label_1a4b18;
            case 0x1A4B1Cu: goto label_1a4b1c;
            case 0x1A4B20u: goto label_1a4b20;
            case 0x1A4B24u: goto label_1a4b24;
            case 0x1A4B28u: goto label_1a4b28;
            case 0x1A4B2Cu: goto label_1a4b2c;
            case 0x1A4B30u: goto label_1a4b30;
            case 0x1A4B34u: goto label_1a4b34;
            case 0x1A4B38u: goto label_1a4b38;
            case 0x1A4B3Cu: goto label_1a4b3c;
            case 0x1A4B40u: goto label_1a4b40;
            case 0x1A4B44u: goto label_1a4b44;
            case 0x1A4B48u: goto label_1a4b48;
            case 0x1A4B4Cu: goto label_1a4b4c;
            case 0x1A4B50u: goto label_1a4b50;
            case 0x1A4B54u: goto label_1a4b54;
            case 0x1A4B58u: goto label_1a4b58;
            case 0x1A4B5Cu: goto label_1a4b5c;
            case 0x1A4B60u: goto label_1a4b60;
            case 0x1A4B64u: goto label_1a4b64;
            case 0x1A4B68u: goto label_1a4b68;
            case 0x1A4B6Cu: goto label_1a4b6c;
            case 0x1A4B70u: goto label_1a4b70;
            case 0x1A4B74u: goto label_1a4b74;
            case 0x1A4B78u: goto label_1a4b78;
            case 0x1A4B7Cu: goto label_1a4b7c;
            case 0x1A4B80u: goto label_1a4b80;
            case 0x1A4B84u: goto label_1a4b84;
            case 0x1A4B88u: goto label_1a4b88;
            case 0x1A4B8Cu: goto label_1a4b8c;
            case 0x1A4B90u: goto label_1a4b90;
            case 0x1A4B94u: goto label_1a4b94;
            case 0x1A4B98u: goto label_1a4b98;
            case 0x1A4B9Cu: goto label_1a4b9c;
            case 0x1A4BA0u: goto label_1a4ba0;
            case 0x1A4BA4u: goto label_1a4ba4;
            case 0x1A4BA8u: goto label_1a4ba8;
            case 0x1A4BACu: goto label_1a4bac;
            case 0x1A4BB0u: goto label_1a4bb0;
            case 0x1A4BB4u: goto label_1a4bb4;
            case 0x1A4BB8u: goto label_1a4bb8;
            case 0x1A4BBCu: goto label_1a4bbc;
            case 0x1A4BC0u: goto label_1a4bc0;
            case 0x1A4BC4u: goto label_1a4bc4;
            case 0x1A4BC8u: goto label_1a4bc8;
            case 0x1A4BCCu: goto label_1a4bcc;
            case 0x1A4BD0u: goto label_1a4bd0;
            case 0x1A4BD4u: goto label_1a4bd4;
            case 0x1A4BD8u: goto label_1a4bd8;
            case 0x1A4BDCu: goto label_1a4bdc;
            case 0x1A4BE0u: goto label_1a4be0;
            case 0x1A4BE4u: goto label_1a4be4;
            case 0x1A4BE8u: goto label_1a4be8;
            case 0x1A4BECu: goto label_1a4bec;
            case 0x1A4BF0u: goto label_1a4bf0;
            case 0x1A4BF4u: goto label_1a4bf4;
            case 0x1A4BF8u: goto label_1a4bf8;
            case 0x1A4BFCu: goto label_1a4bfc;
            case 0x1A4C00u: goto label_1a4c00;
            case 0x1A4C04u: goto label_1a4c04;
            case 0x1A4C08u: goto label_1a4c08;
            case 0x1A4C0Cu: goto label_1a4c0c;
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C14u: goto label_1a4c14;
            case 0x1A4C18u: goto label_1a4c18;
            case 0x1A4C1Cu: goto label_1a4c1c;
            case 0x1A4C20u: goto label_1a4c20;
            case 0x1A4C24u: goto label_1a4c24;
            case 0x1A4C28u: goto label_1a4c28;
            case 0x1A4C2Cu: goto label_1a4c2c;
            case 0x1A4C30u: goto label_1a4c30;
            case 0x1A4C34u: goto label_1a4c34;
            case 0x1A4C38u: goto label_1a4c38;
            case 0x1A4C3Cu: goto label_1a4c3c;
            case 0x1A4C40u: goto label_1a4c40;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C48u: goto label_1a4c48;
            case 0x1A4C4Cu: goto label_1a4c4c;
            case 0x1A4C50u: goto label_1a4c50;
            case 0x1A4C54u: goto label_1a4c54;
            case 0x1A4C58u: goto label_1a4c58;
            case 0x1A4C5Cu: goto label_1a4c5c;
            case 0x1A4C60u: goto label_1a4c60;
            case 0x1A4C64u: goto label_1a4c64;
            case 0x1A4C68u: goto label_1a4c68;
            case 0x1A4C6Cu: goto label_1a4c6c;
            case 0x1A4C70u: goto label_1a4c70;
            case 0x1A4C74u: goto label_1a4c74;
            case 0x1A4C78u: goto label_1a4c78;
            case 0x1A4C7Cu: goto label_1a4c7c;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4C84u: goto label_1a4c84;
            case 0x1A4C88u: goto label_1a4c88;
            case 0x1A4C8Cu: goto label_1a4c8c;
            case 0x1A4C90u: goto label_1a4c90;
            case 0x1A4C94u: goto label_1a4c94;
            case 0x1A4C98u: goto label_1a4c98;
            case 0x1A4C9Cu: goto label_1a4c9c;
            case 0x1A4CA0u: goto label_1a4ca0;
            case 0x1A4CA4u: goto label_1a4ca4;
            case 0x1A4CA8u: goto label_1a4ca8;
            case 0x1A4CACu: goto label_1a4cac;
            case 0x1A4CB0u: goto label_1a4cb0;
            case 0x1A4CB4u: goto label_1a4cb4;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4CBCu: goto label_1a4cbc;
            case 0x1A4CC0u: goto label_1a4cc0;
            case 0x1A4CC4u: goto label_1a4cc4;
            case 0x1A4CC8u: goto label_1a4cc8;
            case 0x1A4CCCu: goto label_1a4ccc;
            case 0x1A4CD0u: goto label_1a4cd0;
            case 0x1A4CD4u: goto label_1a4cd4;
            case 0x1A4CD8u: goto label_1a4cd8;
            case 0x1A4CDCu: goto label_1a4cdc;
            case 0x1A4CE0u: goto label_1a4ce0;
            case 0x1A4CE4u: goto label_1a4ce4;
            case 0x1A4CE8u: goto label_1a4ce8;
            case 0x1A4CECu: goto label_1a4cec;
            case 0x1A4CF0u: goto label_1a4cf0;
            case 0x1A4CF4u: goto label_1a4cf4;
            case 0x1A4CF8u: goto label_1a4cf8;
            case 0x1A4CFCu: goto label_1a4cfc;
            case 0x1A4D00u: goto label_1a4d00;
            case 0x1A4D04u: goto label_1a4d04;
            case 0x1A4D08u: goto label_1a4d08;
            case 0x1A4D0Cu: goto label_1a4d0c;
            case 0x1A4D10u: goto label_1a4d10;
            case 0x1A4D14u: goto label_1a4d14;
            case 0x1A4D18u: goto label_1a4d18;
            case 0x1A4D1Cu: goto label_1a4d1c;
            case 0x1A4D20u: goto label_1a4d20;
            case 0x1A4D24u: goto label_1a4d24;
            case 0x1A4D28u: goto label_1a4d28;
            case 0x1A4D2Cu: goto label_1a4d2c;
            case 0x1A4D30u: goto label_1a4d30;
            case 0x1A4D34u: goto label_1a4d34;
            case 0x1A4D38u: goto label_1a4d38;
            case 0x1A4D3Cu: goto label_1a4d3c;
            case 0x1A4D40u: goto label_1a4d40;
            case 0x1A4D44u: goto label_1a4d44;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D4Cu: goto label_1a4d4c;
            case 0x1A4D50u: goto label_1a4d50;
            case 0x1A4D54u: goto label_1a4d54;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D5Cu: goto label_1a4d5c;
            case 0x1A4D60u: goto label_1a4d60;
            case 0x1A4D64u: goto label_1a4d64;
            case 0x1A4D68u: goto label_1a4d68;
            case 0x1A4D6Cu: goto label_1a4d6c;
            case 0x1A4D70u: goto label_1a4d70;
            case 0x1A4D74u: goto label_1a4d74;
            case 0x1A4D78u: goto label_1a4d78;
            case 0x1A4D7Cu: goto label_1a4d7c;
            case 0x1A4D80u: goto label_1a4d80;
            case 0x1A4D84u: goto label_1a4d84;
            case 0x1A4D88u: goto label_1a4d88;
            case 0x1A4D8Cu: goto label_1a4d8c;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4D94u: goto label_1a4d94;
            case 0x1A4D98u: goto label_1a4d98;
            case 0x1A4D9Cu: goto label_1a4d9c;
            case 0x1A4DA0u: goto label_1a4da0;
            case 0x1A4DA4u: goto label_1a4da4;
            case 0x1A4DA8u: goto label_1a4da8;
            case 0x1A4DACu: goto label_1a4dac;
            case 0x1A4DB0u: goto label_1a4db0;
            case 0x1A4DB4u: goto label_1a4db4;
            case 0x1A4DB8u: goto label_1a4db8;
            case 0x1A4DBCu: goto label_1a4dbc;
            case 0x1A4DC0u: goto label_1a4dc0;
            case 0x1A4DC4u: goto label_1a4dc4;
            case 0x1A4DC8u: goto label_1a4dc8;
            case 0x1A4DCCu: goto label_1a4dcc;
            case 0x1A4DD0u: goto label_1a4dd0;
            case 0x1A4DD4u: goto label_1a4dd4;
            case 0x1A4DD8u: goto label_1a4dd8;
            case 0x1A4DDCu: goto label_1a4ddc;
            case 0x1A4DE0u: goto label_1a4de0;
            case 0x1A4DE4u: goto label_1a4de4;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4DF0u: goto label_1a4df0;
            case 0x1A4DF4u: goto label_1a4df4;
            case 0x1A4DF8u: goto label_1a4df8;
            case 0x1A4DFCu: goto label_1a4dfc;
            case 0x1A4E00u: goto label_1a4e00;
            case 0x1A4E04u: goto label_1a4e04;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E14u: goto label_1a4e14;
            case 0x1A4E18u: goto label_1a4e18;
            case 0x1A4E1Cu: goto label_1a4e1c;
            case 0x1A4E20u: goto label_1a4e20;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E28u: goto label_1a4e28;
            case 0x1A4E2Cu: goto label_1a4e2c;
            case 0x1A4E30u: goto label_1a4e30;
            case 0x1A4E34u: goto label_1a4e34;
            case 0x1A4E38u: goto label_1a4e38;
            case 0x1A4E3Cu: goto label_1a4e3c;
            case 0x1A4E40u: goto label_1a4e40;
            case 0x1A4E44u: goto label_1a4e44;
            case 0x1A4E48u: goto label_1a4e48;
            case 0x1A4E4Cu: goto label_1a4e4c;
            case 0x1A4E50u: goto label_1a4e50;
            case 0x1A4E54u: goto label_1a4e54;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4E60u: goto label_1a4e60;
            case 0x1A4E64u: goto label_1a4e64;
            case 0x1A4E68u: goto label_1a4e68;
            case 0x1A4E6Cu: goto label_1a4e6c;
            case 0x1A4E70u: goto label_1a4e70;
            case 0x1A4E74u: goto label_1a4e74;
            case 0x1A4E78u: goto label_1a4e78;
            case 0x1A4E7Cu: goto label_1a4e7c;
            case 0x1A4E80u: goto label_1a4e80;
            case 0x1A4E84u: goto label_1a4e84;
            case 0x1A4E88u: goto label_1a4e88;
            case 0x1A4E8Cu: goto label_1a4e8c;
            case 0x1A4E90u: goto label_1a4e90;
            case 0x1A4E94u: goto label_1a4e94;
            case 0x1A4E98u: goto label_1a4e98;
            case 0x1A4E9Cu: goto label_1a4e9c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4EA4u: goto label_1a4ea4;
            case 0x1A4EA8u: goto label_1a4ea8;
            case 0x1A4EACu: goto label_1a4eac;
            case 0x1A4EB0u: goto label_1a4eb0;
            case 0x1A4EB4u: goto label_1a4eb4;
            case 0x1A4EB8u: goto label_1a4eb8;
            case 0x1A4EBCu: goto label_1a4ebc;
            case 0x1A4EC0u: goto label_1a4ec0;
            case 0x1A4EC4u: goto label_1a4ec4;
            case 0x1A4EC8u: goto label_1a4ec8;
            case 0x1A4ECCu: goto label_1a4ecc;
            case 0x1A4ED0u: goto label_1a4ed0;
            case 0x1A4ED4u: goto label_1a4ed4;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EDCu: goto label_1a4edc;
            case 0x1A4EE0u: goto label_1a4ee0;
            case 0x1A4EE4u: goto label_1a4ee4;
            case 0x1A4EE8u: goto label_1a4ee8;
            case 0x1A4EECu: goto label_1a4eec;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4EF4u: goto label_1a4ef4;
            case 0x1A4EF8u: goto label_1a4ef8;
            case 0x1A4EFCu: goto label_1a4efc;
            case 0x1A4F00u: goto label_1a4f00;
            case 0x1A4F04u: goto label_1a4f04;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F0Cu: goto label_1a4f0c;
            case 0x1A4F10u: goto label_1a4f10;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F18u: goto label_1a4f18;
            case 0x1A4F1Cu: goto label_1a4f1c;
            case 0x1A4F20u: goto label_1a4f20;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F28u: goto label_1a4f28;
            case 0x1A4F2Cu: goto label_1a4f2c;
            case 0x1A4F30u: goto label_1a4f30;
            case 0x1A4F34u: goto label_1a4f34;
            case 0x1A4F38u: goto label_1a4f38;
            case 0x1A4F3Cu: goto label_1a4f3c;
            case 0x1A4F40u: goto label_1a4f40;
            case 0x1A4F44u: goto label_1a4f44;
            case 0x1A4F48u: goto label_1a4f48;
            case 0x1A4F4Cu: goto label_1a4f4c;
            case 0x1A4F50u: goto label_1a4f50;
            case 0x1A4F54u: goto label_1a4f54;
            case 0x1A4F58u: goto label_1a4f58;
            case 0x1A4F5Cu: goto label_1a4f5c;
            case 0x1A4F60u: goto label_1a4f60;
            case 0x1A4F64u: goto label_1a4f64;
            case 0x1A4F68u: goto label_1a4f68;
            case 0x1A4F6Cu: goto label_1a4f6c;
            case 0x1A4F70u: goto label_1a4f70;
            case 0x1A4F74u: goto label_1a4f74;
            case 0x1A4F78u: goto label_1a4f78;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4F80u: goto label_1a4f80;
            case 0x1A4F84u: goto label_1a4f84;
            case 0x1A4F88u: goto label_1a4f88;
            case 0x1A4F8Cu: goto label_1a4f8c;
            case 0x1A4F90u: goto label_1a4f90;
            case 0x1A4F94u: goto label_1a4f94;
            case 0x1A4F98u: goto label_1a4f98;
            case 0x1A4F9Cu: goto label_1a4f9c;
            case 0x1A4FA0u: goto label_1a4fa0;
            case 0x1A4FA4u: goto label_1a4fa4;
            case 0x1A4FA8u: goto label_1a4fa8;
            case 0x1A4FACu: goto label_1a4fac;
            case 0x1A4FB0u: goto label_1a4fb0;
            case 0x1A4FB4u: goto label_1a4fb4;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FBCu: goto label_1a4fbc;
            case 0x1A4FC0u: goto label_1a4fc0;
            case 0x1A4FC4u: goto label_1a4fc4;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A4FCCu: goto label_1a4fcc;
            case 0x1A4FD0u: goto label_1a4fd0;
            case 0x1A4FD4u: goto label_1a4fd4;
            case 0x1A4FD8u: goto label_1a4fd8;
            case 0x1A4FDCu: goto label_1a4fdc;
            case 0x1A4FE0u: goto label_1a4fe0;
            case 0x1A4FE4u: goto label_1a4fe4;
            case 0x1A4FE8u: goto label_1a4fe8;
            case 0x1A4FECu: goto label_1a4fec;
            case 0x1A4FF0u: goto label_1a4ff0;
            case 0x1A4FF4u: goto label_1a4ff4;
            case 0x1A4FF8u: goto label_1a4ff8;
            case 0x1A4FFCu: goto label_1a4ffc;
            case 0x1A5000u: goto label_1a5000;
            case 0x1A5004u: goto label_1a5004;
            case 0x1A5008u: goto label_1a5008;
            case 0x1A500Cu: goto label_1a500c;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5018u: goto label_1a5018;
            case 0x1A501Cu: goto label_1a501c;
            case 0x1A5020u: goto label_1a5020;
            case 0x1A5024u: goto label_1a5024;
            case 0x1A5028u: goto label_1a5028;
            case 0x1A502Cu: goto label_1a502c;
            case 0x1A5030u: goto label_1a5030;
            case 0x1A5034u: goto label_1a5034;
            case 0x1A5038u: goto label_1a5038;
            case 0x1A503Cu: goto label_1a503c;
            case 0x1A5040u: goto label_1a5040;
            case 0x1A5044u: goto label_1a5044;
            case 0x1A5048u: goto label_1a5048;
            case 0x1A504Cu: goto label_1a504c;
            case 0x1A5050u: goto label_1a5050;
            case 0x1A5054u: goto label_1a5054;
            case 0x1A5058u: goto label_1a5058;
            case 0x1A505Cu: goto label_1a505c;
            case 0x1A5060u: goto label_1a5060;
            case 0x1A5064u: goto label_1a5064;
            case 0x1A5068u: goto label_1a5068;
            case 0x1A506Cu: goto label_1a506c;
            case 0x1A5070u: goto label_1a5070;
            case 0x1A5074u: goto label_1a5074;
            case 0x1A5078u: goto label_1a5078;
            case 0x1A507Cu: goto label_1a507c;
            case 0x1A5080u: goto label_1a5080;
            case 0x1A5084u: goto label_1a5084;
            case 0x1A5088u: goto label_1a5088;
            case 0x1A508Cu: goto label_1a508c;
            case 0x1A5090u: goto label_1a5090;
            case 0x1A5094u: goto label_1a5094;
            case 0x1A5098u: goto label_1a5098;
            case 0x1A509Cu: goto label_1a509c;
            case 0x1A50A0u: goto label_1a50a0;
            case 0x1A50A4u: goto label_1a50a4;
            case 0x1A50A8u: goto label_1a50a8;
            case 0x1A50ACu: goto label_1a50ac;
            case 0x1A50B0u: goto label_1a50b0;
            case 0x1A50B4u: goto label_1a50b4;
            case 0x1A50B8u: goto label_1a50b8;
            case 0x1A50BCu: goto label_1a50bc;
            case 0x1A50C0u: goto label_1a50c0;
            case 0x1A50C4u: goto label_1a50c4;
            case 0x1A50C8u: goto label_1a50c8;
            case 0x1A50CCu: goto label_1a50cc;
            case 0x1A50D0u: goto label_1a50d0;
            case 0x1A50D4u: goto label_1a50d4;
            case 0x1A50D8u: goto label_1a50d8;
            case 0x1A50DCu: goto label_1a50dc;
            case 0x1A50E0u: goto label_1a50e0;
            case 0x1A50E4u: goto label_1a50e4;
            case 0x1A50E8u: goto label_1a50e8;
            case 0x1A50ECu: goto label_1a50ec;
            case 0x1A50F0u: goto label_1a50f0;
            case 0x1A50F4u: goto label_1a50f4;
            case 0x1A50F8u: goto label_1a50f8;
            case 0x1A50FCu: goto label_1a50fc;
            case 0x1A5100u: goto label_1a5100;
            case 0x1A5104u: goto label_1a5104;
            case 0x1A5108u: goto label_1a5108;
            case 0x1A510Cu: goto label_1a510c;
            case 0x1A5110u: goto label_1a5110;
            case 0x1A5114u: goto label_1a5114;
            case 0x1A5118u: goto label_1a5118;
            case 0x1A511Cu: goto label_1a511c;
            case 0x1A5120u: goto label_1a5120;
            case 0x1A5124u: goto label_1a5124;
            case 0x1A5128u: goto label_1a5128;
            case 0x1A512Cu: goto label_1a512c;
            case 0x1A5130u: goto label_1a5130;
            case 0x1A5134u: goto label_1a5134;
            case 0x1A5138u: goto label_1a5138;
            case 0x1A513Cu: goto label_1a513c;
            case 0x1A5140u: goto label_1a5140;
            case 0x1A5144u: goto label_1a5144;
            case 0x1A5148u: goto label_1a5148;
            case 0x1A514Cu: goto label_1a514c;
            case 0x1A5150u: goto label_1a5150;
            case 0x1A5154u: goto label_1a5154;
            case 0x1A5158u: goto label_1a5158;
            case 0x1A515Cu: goto label_1a515c;
            case 0x1A5160u: goto label_1a5160;
            case 0x1A5164u: goto label_1a5164;
            case 0x1A5168u: goto label_1a5168;
            case 0x1A516Cu: goto label_1a516c;
            case 0x1A5170u: goto label_1a5170;
            case 0x1A5174u: goto label_1a5174;
            case 0x1A5178u: goto label_1a5178;
            case 0x1A517Cu: goto label_1a517c;
            case 0x1A5180u: goto label_1a5180;
            case 0x1A5184u: goto label_1a5184;
            case 0x1A5188u: goto label_1a5188;
            case 0x1A518Cu: goto label_1a518c;
            case 0x1A5190u: goto label_1a5190;
            case 0x1A5194u: goto label_1a5194;
            case 0x1A5198u: goto label_1a5198;
            case 0x1A519Cu: goto label_1a519c;
            case 0x1A51A0u: goto label_1a51a0;
            case 0x1A51A4u: goto label_1a51a4;
            case 0x1A51A8u: goto label_1a51a8;
            case 0x1A51ACu: goto label_1a51ac;
            case 0x1A51B0u: goto label_1a51b0;
            case 0x1A51B4u: goto label_1a51b4;
            case 0x1A51B8u: goto label_1a51b8;
            case 0x1A51BCu: goto label_1a51bc;
            case 0x1A51C0u: goto label_1a51c0;
            case 0x1A51C4u: goto label_1a51c4;
            case 0x1A51C8u: goto label_1a51c8;
            case 0x1A51CCu: goto label_1a51cc;
            case 0x1A51D0u: goto label_1a51d0;
            case 0x1A51D4u: goto label_1a51d4;
            case 0x1A51D8u: goto label_1a51d8;
            case 0x1A51DCu: goto label_1a51dc;
            case 0x1A51E0u: goto label_1a51e0;
            case 0x1A51E4u: goto label_1a51e4;
            case 0x1A51E8u: goto label_1a51e8;
            case 0x1A51ECu: goto label_1a51ec;
            case 0x1A51F0u: goto label_1a51f0;
            case 0x1A51F4u: goto label_1a51f4;
            case 0x1A51F8u: goto label_1a51f8;
            case 0x1A51FCu: goto label_1a51fc;
            case 0x1A5200u: goto label_1a5200;
            case 0x1A5204u: goto label_1a5204;
            case 0x1A5208u: goto label_1a5208;
            case 0x1A520Cu: goto label_1a520c;
            case 0x1A5210u: goto label_1a5210;
            case 0x1A5214u: goto label_1a5214;
            case 0x1A5218u: goto label_1a5218;
            case 0x1A521Cu: goto label_1a521c;
            case 0x1A5220u: goto label_1a5220;
            case 0x1A5224u: goto label_1a5224;
            case 0x1A5228u: goto label_1a5228;
            case 0x1A522Cu: goto label_1a522c;
            case 0x1A5230u: goto label_1a5230;
            case 0x1A5234u: goto label_1a5234;
            case 0x1A5238u: goto label_1a5238;
            case 0x1A523Cu: goto label_1a523c;
            case 0x1A5240u: goto label_1a5240;
            case 0x1A5244u: goto label_1a5244;
            case 0x1A5248u: goto label_1a5248;
            case 0x1A524Cu: goto label_1a524c;
            case 0x1A5250u: goto label_1a5250;
            case 0x1A5254u: goto label_1a5254;
            case 0x1A5258u: goto label_1a5258;
            case 0x1A525Cu: goto label_1a525c;
            case 0x1A5260u: goto label_1a5260;
            case 0x1A5264u: goto label_1a5264;
            case 0x1A5268u: goto label_1a5268;
            case 0x1A526Cu: goto label_1a526c;
            case 0x1A5270u: goto label_1a5270;
            case 0x1A5274u: goto label_1a5274;
            case 0x1A5278u: goto label_1a5278;
            case 0x1A527Cu: goto label_1a527c;
            case 0x1A5280u: goto label_1a5280;
            case 0x1A5284u: goto label_1a5284;
            case 0x1A5288u: goto label_1a5288;
            case 0x1A528Cu: goto label_1a528c;
            case 0x1A5290u: goto label_1a5290;
            case 0x1A5294u: goto label_1a5294;
            case 0x1A5298u: goto label_1a5298;
            case 0x1A529Cu: goto label_1a529c;
            case 0x1A52A0u: goto label_1a52a0;
            case 0x1A52A4u: goto label_1a52a4;
            case 0x1A52A8u: goto label_1a52a8;
            case 0x1A52ACu: goto label_1a52ac;
            case 0x1A52B0u: goto label_1a52b0;
            case 0x1A52B4u: goto label_1a52b4;
            case 0x1A52B8u: goto label_1a52b8;
            case 0x1A52BCu: goto label_1a52bc;
            case 0x1A52C0u: goto label_1a52c0;
            case 0x1A52C4u: goto label_1a52c4;
            case 0x1A52C8u: goto label_1a52c8;
            case 0x1A52CCu: goto label_1a52cc;
            case 0x1A52D0u: goto label_1a52d0;
            case 0x1A52D4u: goto label_1a52d4;
            case 0x1A52D8u: goto label_1a52d8;
            case 0x1A52DCu: goto label_1a52dc;
            case 0x1A52E0u: goto label_1a52e0;
            case 0x1A52E4u: goto label_1a52e4;
            case 0x1A52E8u: goto label_1a52e8;
            case 0x1A52ECu: goto label_1a52ec;
            case 0x1A52F0u: goto label_1a52f0;
            case 0x1A52F4u: goto label_1a52f4;
            case 0x1A52F8u: goto label_1a52f8;
            case 0x1A52FCu: goto label_1a52fc;
            case 0x1A5300u: goto label_1a5300;
            case 0x1A5304u: goto label_1a5304;
            case 0x1A5308u: goto label_1a5308;
            case 0x1A530Cu: goto label_1a530c;
            case 0x1A5310u: goto label_1a5310;
            case 0x1A5314u: goto label_1a5314;
            case 0x1A5318u: goto label_1a5318;
            case 0x1A531Cu: goto label_1a531c;
            case 0x1A5320u: goto label_1a5320;
            case 0x1A5324u: goto label_1a5324;
            case 0x1A5328u: goto label_1a5328;
            case 0x1A532Cu: goto label_1a532c;
            case 0x1A5330u: goto label_1a5330;
            case 0x1A5334u: goto label_1a5334;
            case 0x1A5338u: goto label_1a5338;
            case 0x1A533Cu: goto label_1a533c;
            case 0x1A5340u: goto label_1a5340;
            case 0x1A5344u: goto label_1a5344;
            case 0x1A5348u: goto label_1a5348;
            case 0x1A534Cu: goto label_1a534c;
            case 0x1A5350u: goto label_1a5350;
            case 0x1A5354u: goto label_1a5354;
            case 0x1A5358u: goto label_1a5358;
            case 0x1A535Cu: goto label_1a535c;
            case 0x1A5360u: goto label_1a5360;
            case 0x1A5364u: goto label_1a5364;
            case 0x1A5368u: goto label_1a5368;
            case 0x1A536Cu: goto label_1a536c;
            case 0x1A5370u: goto label_1a5370;
            case 0x1A5374u: goto label_1a5374;
            case 0x1A5378u: goto label_1a5378;
            case 0x1A537Cu: goto label_1a537c;
            case 0x1A5380u: goto label_1a5380;
            case 0x1A5384u: goto label_1a5384;
            case 0x1A5388u: goto label_1a5388;
            case 0x1A538Cu: goto label_1a538c;
            case 0x1A5390u: goto label_1a5390;
            case 0x1A5394u: goto label_1a5394;
            case 0x1A5398u: goto label_1a5398;
            case 0x1A539Cu: goto label_1a539c;
            case 0x1A53A0u: goto label_1a53a0;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53A8u: goto label_1a53a8;
            case 0x1A53ACu: goto label_1a53ac;
            case 0x1A53B0u: goto label_1a53b0;
            case 0x1A53B4u: goto label_1a53b4;
            case 0x1A53B8u: goto label_1a53b8;
            case 0x1A53BCu: goto label_1a53bc;
            case 0x1A53C0u: goto label_1a53c0;
            case 0x1A53C4u: goto label_1a53c4;
            case 0x1A53C8u: goto label_1a53c8;
            case 0x1A53CCu: goto label_1a53cc;
            case 0x1A53D0u: goto label_1a53d0;
            case 0x1A53D4u: goto label_1a53d4;
            case 0x1A53D8u: goto label_1a53d8;
            case 0x1A53DCu: goto label_1a53dc;
            case 0x1A53E0u: goto label_1a53e0;
            case 0x1A53E4u: goto label_1a53e4;
            case 0x1A53E8u: goto label_1a53e8;
            case 0x1A53ECu: goto label_1a53ec;
            case 0x1A53F0u: goto label_1a53f0;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A53F8u: goto label_1a53f8;
            case 0x1A53FCu: goto label_1a53fc;
            case 0x1A5400u: goto label_1a5400;
            case 0x1A5404u: goto label_1a5404;
            case 0x1A5408u: goto label_1a5408;
            case 0x1A540Cu: goto label_1a540c;
            case 0x1A5410u: goto label_1a5410;
            case 0x1A5414u: goto label_1a5414;
            case 0x1A5418u: goto label_1a5418;
            case 0x1A541Cu: goto label_1a541c;
            case 0x1A5420u: goto label_1a5420;
            case 0x1A5424u: goto label_1a5424;
            case 0x1A5428u: goto label_1a5428;
            case 0x1A542Cu: goto label_1a542c;
            case 0x1A5430u: goto label_1a5430;
            case 0x1A5434u: goto label_1a5434;
            case 0x1A5438u: goto label_1a5438;
            case 0x1A543Cu: goto label_1a543c;
            case 0x1A5440u: goto label_1a5440;
            case 0x1A5444u: goto label_1a5444;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A544Cu: goto label_1a544c;
            case 0x1A5450u: goto label_1a5450;
            case 0x1A5454u: goto label_1a5454;
            case 0x1A5458u: goto label_1a5458;
            case 0x1A545Cu: goto label_1a545c;
            case 0x1A5460u: goto label_1a5460;
            case 0x1A5464u: goto label_1a5464;
            case 0x1A5468u: goto label_1a5468;
            case 0x1A546Cu: goto label_1a546c;
            case 0x1A5470u: goto label_1a5470;
            case 0x1A5474u: goto label_1a5474;
            case 0x1A5478u: goto label_1a5478;
            case 0x1A547Cu: goto label_1a547c;
            case 0x1A5480u: goto label_1a5480;
            case 0x1A5484u: goto label_1a5484;
            case 0x1A5488u: goto label_1a5488;
            case 0x1A548Cu: goto label_1a548c;
            case 0x1A5490u: goto label_1a5490;
            case 0x1A5494u: goto label_1a5494;
            case 0x1A5498u: goto label_1a5498;
            case 0x1A549Cu: goto label_1a549c;
            case 0x1A54A0u: goto label_1a54a0;
            case 0x1A54A4u: goto label_1a54a4;
            case 0x1A54A8u: goto label_1a54a8;
            case 0x1A54ACu: goto label_1a54ac;
            case 0x1A54B0u: goto label_1a54b0;
            case 0x1A54B4u: goto label_1a54b4;
            case 0x1A54B8u: goto label_1a54b8;
            case 0x1A54BCu: goto label_1a54bc;
            case 0x1A54C0u: goto label_1a54c0;
            case 0x1A54C4u: goto label_1a54c4;
            case 0x1A54C8u: goto label_1a54c8;
            case 0x1A54CCu: goto label_1a54cc;
            case 0x1A54D0u: goto label_1a54d0;
            case 0x1A54D4u: goto label_1a54d4;
            case 0x1A54D8u: goto label_1a54d8;
            case 0x1A54DCu: goto label_1a54dc;
            case 0x1A54E0u: goto label_1a54e0;
            case 0x1A54E4u: goto label_1a54e4;
            case 0x1A54E8u: goto label_1a54e8;
            case 0x1A54ECu: goto label_1a54ec;
            case 0x1A54F0u: goto label_1a54f0;
            case 0x1A54F4u: goto label_1a54f4;
            case 0x1A54F8u: goto label_1a54f8;
            case 0x1A54FCu: goto label_1a54fc;
            case 0x1A5500u: goto label_1a5500;
            case 0x1A5504u: goto label_1a5504;
            case 0x1A5508u: goto label_1a5508;
            case 0x1A550Cu: goto label_1a550c;
            case 0x1A5510u: goto label_1a5510;
            case 0x1A5514u: goto label_1a5514;
            case 0x1A5518u: goto label_1a5518;
            case 0x1A551Cu: goto label_1a551c;
            case 0x1A5520u: goto label_1a5520;
            case 0x1A5524u: goto label_1a5524;
            case 0x1A5528u: goto label_1a5528;
            case 0x1A552Cu: goto label_1a552c;
            case 0x1A5530u: goto label_1a5530;
            case 0x1A5534u: goto label_1a5534;
            case 0x1A5538u: goto label_1a5538;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A5540u: goto label_1a5540;
            case 0x1A5544u: goto label_1a5544;
            case 0x1A5548u: goto label_1a5548;
            case 0x1A554Cu: goto label_1a554c;
            case 0x1A5550u: goto label_1a5550;
            case 0x1A5554u: goto label_1a5554;
            case 0x1A5558u: goto label_1a5558;
            case 0x1A555Cu: goto label_1a555c;
            case 0x1A5560u: goto label_1a5560;
            case 0x1A5564u: goto label_1a5564;
            case 0x1A5568u: goto label_1a5568;
            case 0x1A556Cu: goto label_1a556c;
            case 0x1A5570u: goto label_1a5570;
            case 0x1A5574u: goto label_1a5574;
            case 0x1A5578u: goto label_1a5578;
            case 0x1A557Cu: goto label_1a557c;
            case 0x1A5580u: goto label_1a5580;
            case 0x1A5584u: goto label_1a5584;
            case 0x1A5588u: goto label_1a5588;
            case 0x1A558Cu: goto label_1a558c;
            case 0x1A5590u: goto label_1a5590;
            case 0x1A5594u: goto label_1a5594;
            case 0x1A5598u: goto label_1a5598;
            case 0x1A559Cu: goto label_1a559c;
            case 0x1A55A0u: goto label_1a55a0;
            case 0x1A55A4u: goto label_1a55a4;
            case 0x1A55A8u: goto label_1a55a8;
            case 0x1A55ACu: goto label_1a55ac;
            case 0x1A55B0u: goto label_1a55b0;
            case 0x1A55B4u: goto label_1a55b4;
            case 0x1A55B8u: goto label_1a55b8;
            case 0x1A55BCu: goto label_1a55bc;
            case 0x1A55C0u: goto label_1a55c0;
            case 0x1A55C4u: goto label_1a55c4;
            case 0x1A55C8u: goto label_1a55c8;
            case 0x1A55CCu: goto label_1a55cc;
            case 0x1A55D0u: goto label_1a55d0;
            case 0x1A55D4u: goto label_1a55d4;
            case 0x1A55D8u: goto label_1a55d8;
            case 0x1A55DCu: goto label_1a55dc;
            case 0x1A55E0u: goto label_1a55e0;
            case 0x1A55E4u: goto label_1a55e4;
            case 0x1A55E8u: goto label_1a55e8;
            case 0x1A55ECu: goto label_1a55ec;
            case 0x1A55F0u: goto label_1a55f0;
            case 0x1A55F4u: goto label_1a55f4;
            case 0x1A55F8u: goto label_1a55f8;
            case 0x1A55FCu: goto label_1a55fc;
            case 0x1A5600u: goto label_1a5600;
            case 0x1A5604u: goto label_1a5604;
            case 0x1A5608u: goto label_1a5608;
            case 0x1A560Cu: goto label_1a560c;
            case 0x1A5610u: goto label_1a5610;
            case 0x1A5614u: goto label_1a5614;
            case 0x1A5618u: goto label_1a5618;
            case 0x1A561Cu: goto label_1a561c;
            case 0x1A5620u: goto label_1a5620;
            case 0x1A5624u: goto label_1a5624;
            case 0x1A5628u: goto label_1a5628;
            case 0x1A562Cu: goto label_1a562c;
            case 0x1A5630u: goto label_1a5630;
            case 0x1A5634u: goto label_1a5634;
            case 0x1A5638u: goto label_1a5638;
            case 0x1A563Cu: goto label_1a563c;
            case 0x1A5640u: goto label_1a5640;
            case 0x1A5644u: goto label_1a5644;
            case 0x1A5648u: goto label_1a5648;
            case 0x1A564Cu: goto label_1a564c;
            case 0x1A5650u: goto label_1a5650;
            case 0x1A5654u: goto label_1a5654;
            case 0x1A5658u: goto label_1a5658;
            case 0x1A565Cu: goto label_1a565c;
            case 0x1A5660u: goto label_1a5660;
            case 0x1A5664u: goto label_1a5664;
            case 0x1A5668u: goto label_1a5668;
            case 0x1A566Cu: goto label_1a566c;
            case 0x1A5670u: goto label_1a5670;
            case 0x1A5674u: goto label_1a5674;
            case 0x1A5678u: goto label_1a5678;
            case 0x1A567Cu: goto label_1a567c;
            case 0x1A5680u: goto label_1a5680;
            case 0x1A5684u: goto label_1a5684;
            case 0x1A5688u: goto label_1a5688;
            case 0x1A568Cu: goto label_1a568c;
            case 0x1A5690u: goto label_1a5690;
            case 0x1A5694u: goto label_1a5694;
            case 0x1A5698u: goto label_1a5698;
            case 0x1A569Cu: goto label_1a569c;
            case 0x1A56A0u: goto label_1a56a0;
            case 0x1A56A4u: goto label_1a56a4;
            case 0x1A56A8u: goto label_1a56a8;
            case 0x1A56ACu: goto label_1a56ac;
            case 0x1A56B0u: goto label_1a56b0;
            case 0x1A56B4u: goto label_1a56b4;
            case 0x1A56B8u: goto label_1a56b8;
            case 0x1A56BCu: goto label_1a56bc;
            case 0x1A56C0u: goto label_1a56c0;
            case 0x1A56C4u: goto label_1a56c4;
            case 0x1A56C8u: goto label_1a56c8;
            case 0x1A56CCu: goto label_1a56cc;
            case 0x1A56D0u: goto label_1a56d0;
            case 0x1A56D4u: goto label_1a56d4;
            case 0x1A56D8u: goto label_1a56d8;
            case 0x1A56DCu: goto label_1a56dc;
            case 0x1A56E0u: goto label_1a56e0;
            case 0x1A56E4u: goto label_1a56e4;
            case 0x1A56E8u: goto label_1a56e8;
            case 0x1A56ECu: goto label_1a56ec;
            case 0x1A56F0u: goto label_1a56f0;
            case 0x1A56F4u: goto label_1a56f4;
            case 0x1A56F8u: goto label_1a56f8;
            case 0x1A56FCu: goto label_1a56fc;
            case 0x1A5700u: goto label_1a5700;
            case 0x1A5704u: goto label_1a5704;
            case 0x1A5708u: goto label_1a5708;
            case 0x1A570Cu: goto label_1a570c;
            case 0x1A5710u: goto label_1a5710;
            case 0x1A5714u: goto label_1a5714;
            case 0x1A5718u: goto label_1a5718;
            case 0x1A571Cu: goto label_1a571c;
            case 0x1A5720u: goto label_1a5720;
            case 0x1A5724u: goto label_1a5724;
            case 0x1A5728u: goto label_1a5728;
            case 0x1A572Cu: goto label_1a572c;
            case 0x1A5730u: goto label_1a5730;
            case 0x1A5734u: goto label_1a5734;
            case 0x1A5738u: goto label_1a5738;
            case 0x1A573Cu: goto label_1a573c;
            case 0x1A5740u: goto label_1a5740;
            case 0x1A5744u: goto label_1a5744;
            case 0x1A5748u: goto label_1a5748;
            case 0x1A574Cu: goto label_1a574c;
            case 0x1A5750u: goto label_1a5750;
            case 0x1A5754u: goto label_1a5754;
            case 0x1A5758u: goto label_1a5758;
            case 0x1A575Cu: goto label_1a575c;
            case 0x1A5760u: goto label_1a5760;
            case 0x1A5764u: goto label_1a5764;
            case 0x1A5768u: goto label_1a5768;
            case 0x1A576Cu: goto label_1a576c;
            case 0x1A5770u: goto label_1a5770;
            case 0x1A5774u: goto label_1a5774;
            case 0x1A5778u: goto label_1a5778;
            case 0x1A577Cu: goto label_1a577c;
            case 0x1A5780u: goto label_1a5780;
            case 0x1A5784u: goto label_1a5784;
            case 0x1A5788u: goto label_1a5788;
            case 0x1A578Cu: goto label_1a578c;
            case 0x1A5790u: goto label_1a5790;
            case 0x1A5794u: goto label_1a5794;
            case 0x1A5798u: goto label_1a5798;
            case 0x1A579Cu: goto label_1a579c;
            case 0x1A57A0u: goto label_1a57a0;
            case 0x1A57A4u: goto label_1a57a4;
            case 0x1A57A8u: goto label_1a57a8;
            case 0x1A57ACu: goto label_1a57ac;
            case 0x1A57B0u: goto label_1a57b0;
            case 0x1A57B4u: goto label_1a57b4;
            case 0x1A57B8u: goto label_1a57b8;
            case 0x1A57BCu: goto label_1a57bc;
            case 0x1A57C0u: goto label_1a57c0;
            case 0x1A57C4u: goto label_1a57c4;
            case 0x1A57C8u: goto label_1a57c8;
            case 0x1A57CCu: goto label_1a57cc;
            case 0x1A57D0u: goto label_1a57d0;
            case 0x1A57D4u: goto label_1a57d4;
            case 0x1A57D8u: goto label_1a57d8;
            case 0x1A57DCu: goto label_1a57dc;
            case 0x1A57E0u: goto label_1a57e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A56D4u; }
            if (ctx->pc != 0x1A56D4u) { return; }
        }
    }
    ctx->pc = 0x1A56D4u;
label_1a56d4:
    // 0x1a56d4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a56d8:
    if (ctx->pc == 0x1A56D8u) {
        ctx->pc = 0x1A56DCu;
        goto label_1a56dc;
    }
    ctx->pc = 0x1A56D4u;
    {
        const bool branch_taken_0x1a56d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a56d4) {
            ctx->pc = 0x1A57D0u;
            goto label_1a57d0;
        }
    }
    ctx->pc = 0x1A56DCu;
label_1a56dc:
    // 0x1a56dc: 0x0  nop
    ctx->pc = 0x1a56dcu;
    // NOP
label_1a56e0:
    // 0x1a56e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a56e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a56e4:
    // 0x1a56e4: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1a56e8:
    if (ctx->pc == 0x1A56E8u) {
        ctx->pc = 0x1A56ECu;
        goto label_1a56ec;
    }
    ctx->pc = 0x1A56E4u;
    {
        const bool branch_taken_0x1a56e4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a56e4) {
            ctx->pc = 0x1A57B0u;
            goto label_1a57b0;
        }
    }
    ctx->pc = 0x1A56ECu;
label_1a56ec:
    // 0x1a56ec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a56ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a56f0:
    // 0x1a56f0: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1a56f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1a56f4:
    // 0x1a56f4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a56f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a56f8:
    // 0x1a56f8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a56f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a56fc:
    // 0x1a56fc: 0xc05d080  jal         func_174200
label_1a5700:
    if (ctx->pc == 0x1A5700u) {
        ctx->pc = 0x1A5700u;
            // 0x1a5700: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A5704u;
        goto label_1a5704;
    }
    ctx->pc = 0x1A56FCu;
    SET_GPR_U32(ctx, 31, 0x1A5704u);
    ctx->pc = 0x1A5700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A56FCu;
            // 0x1a5700: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5704u; }
        if (ctx->pc != 0x1A5704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5704u; }
        if (ctx->pc != 0x1A5704u) { return; }
    }
    ctx->pc = 0x1A5704u;
label_1a5704:
    // 0x1a5704: 0xc050bb4  jal         func_142ED0
label_1a5708:
    if (ctx->pc == 0x1A5708u) {
        ctx->pc = 0x1A570Cu;
        goto label_1a570c;
    }
    ctx->pc = 0x1A5704u;
    SET_GPR_U32(ctx, 31, 0x1A570Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A570Cu; }
        if (ctx->pc != 0x1A570Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A570Cu; }
        if (ctx->pc != 0x1A570Cu) { return; }
    }
    ctx->pc = 0x1A570Cu;
label_1a570c:
    // 0x1a570c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a570cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a5710:
    // 0x1a5710: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a5714:
    if (ctx->pc == 0x1A5714u) {
        ctx->pc = 0x1A5718u;
        goto label_1a5718;
    }
    ctx->pc = 0x1A5710u;
    {
        const bool branch_taken_0x1a5710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5710) {
            ctx->pc = 0x1A5730u;
            goto label_1a5730;
        }
    }
    ctx->pc = 0x1A5718u;
label_1a5718:
    // 0x1a5718: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a5718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a571c:
    // 0x1a571c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1a571cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1a5720:
    // 0x1a5720: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5724:
    // 0x1a5724: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a5724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a5728:
    // 0x1a5728: 0xc05d080  jal         func_174200
label_1a572c:
    if (ctx->pc == 0x1A572Cu) {
        ctx->pc = 0x1A572Cu;
            // 0x1a572c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A5730u;
        goto label_1a5730;
    }
    ctx->pc = 0x1A5728u;
    SET_GPR_U32(ctx, 31, 0x1A5730u);
    ctx->pc = 0x1A572Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5728u;
            // 0x1a572c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5730u; }
        if (ctx->pc != 0x1A5730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5730u; }
        if (ctx->pc != 0x1A5730u) { return; }
    }
    ctx->pc = 0x1A5730u;
label_1a5730:
    // 0x1a5730: 0xc050bb4  jal         func_142ED0
label_1a5734:
    if (ctx->pc == 0x1A5734u) {
        ctx->pc = 0x1A5738u;
        goto label_1a5738;
    }
    ctx->pc = 0x1A5730u;
    SET_GPR_U32(ctx, 31, 0x1A5738u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5738u; }
        if (ctx->pc != 0x1A5738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5738u; }
        if (ctx->pc != 0x1A5738u) { return; }
    }
    ctx->pc = 0x1A5738u;
label_1a5738:
    // 0x1a5738: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a5738u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a573c:
    // 0x1a573c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a5740:
    if (ctx->pc == 0x1A5740u) {
        ctx->pc = 0x1A5744u;
        goto label_1a5744;
    }
    ctx->pc = 0x1A573Cu;
    {
        const bool branch_taken_0x1a573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a573c) {
            ctx->pc = 0x1A5760u;
            goto label_1a5760;
        }
    }
    ctx->pc = 0x1A5744u;
label_1a5744:
    // 0x1a5744: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5748:
    // 0x1a5748: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1a5748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1a574c:
    // 0x1a574c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5750:
    // 0x1a5750: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a5750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a5754:
    // 0x1a5754: 0xc05d080  jal         func_174200
label_1a5758:
    if (ctx->pc == 0x1A5758u) {
        ctx->pc = 0x1A5758u;
            // 0x1a5758: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A575Cu;
        goto label_1a575c;
    }
    ctx->pc = 0x1A5754u;
    SET_GPR_U32(ctx, 31, 0x1A575Cu);
    ctx->pc = 0x1A5758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5754u;
            // 0x1a5758: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A575Cu; }
        if (ctx->pc != 0x1A575Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A575Cu; }
        if (ctx->pc != 0x1A575Cu) { return; }
    }
    ctx->pc = 0x1A575Cu;
label_1a575c:
    // 0x1a575c: 0x0  nop
    ctx->pc = 0x1a575cu;
    // NOP
label_1a5760:
    // 0x1a5760: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a5760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a5764:
    // 0x1a5764: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a5764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a5768:
    // 0x1a5768: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1a5768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a576c:
    // 0x1a576c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1a576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a5770:
    // 0x1a5770: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a5770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5774:
    // 0x1a5774: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a5774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a5778:
    // 0x1a5778: 0x0  nop
    ctx->pc = 0x1a5778u;
    // NOP
label_1a577c:
    // 0x1a577c: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1a577cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1a5780:
    // 0x1a5780: 0xc053740  jal         func_14DD00
label_1a5784:
    if (ctx->pc == 0x1A5784u) {
        ctx->pc = 0x1A5784u;
            // 0x1a5784: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1A5788u;
        goto label_1a5788;
    }
    ctx->pc = 0x1A5780u;
    SET_GPR_U32(ctx, 31, 0x1A5788u);
    ctx->pc = 0x1A5784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5780u;
            // 0x1a5784: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5788u; }
        if (ctx->pc != 0x1A5788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5788u; }
        if (ctx->pc != 0x1A5788u) { return; }
    }
    ctx->pc = 0x1A5788u;
label_1a5788:
    // 0x1a5788: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1a5788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1a578c:
    // 0x1a578c: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1a578cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5790:
    // 0x1a5790: 0xc07b0fc  jal         func_1EC3F0
label_1a5794:
    if (ctx->pc == 0x1A5794u) {
        ctx->pc = 0x1A5794u;
            // 0x1a5794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5798u;
        goto label_1a5798;
    }
    ctx->pc = 0x1A5790u;
    SET_GPR_U32(ctx, 31, 0x1A5798u);
    ctx->pc = 0x1A5794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5790u;
            // 0x1a5794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5798u; }
        if (ctx->pc != 0x1A5798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5798u; }
        if (ctx->pc != 0x1A5798u) { return; }
    }
    ctx->pc = 0x1A5798u;
label_1a5798:
    // 0x1a5798: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a5798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a579c:
    // 0x1a579c: 0x40f809  jalr        $v0
label_1a57a0:
    if (ctx->pc == 0x1A57A0u) {
        ctx->pc = 0x1A57A0u;
            // 0x1a57a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A57A4u;
        goto label_1a57a4;
    }
    ctx->pc = 0x1A579Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A57A4u);
        ctx->pc = 0x1A57A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A579Cu;
            // 0x1a57a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4550u: goto label_1a4550;
            case 0x1A4554u: goto label_1a4554;
            case 0x1A4558u: goto label_1a4558;
            case 0x1A455Cu: goto label_1a455c;
            case 0x1A4560u: goto label_1a4560;
            case 0x1A4564u: goto label_1a4564;
            case 0x1A4568u: goto label_1a4568;
            case 0x1A456Cu: goto label_1a456c;
            case 0x1A4570u: goto label_1a4570;
            case 0x1A4574u: goto label_1a4574;
            case 0x1A4578u: goto label_1a4578;
            case 0x1A457Cu: goto label_1a457c;
            case 0x1A4580u: goto label_1a4580;
            case 0x1A4584u: goto label_1a4584;
            case 0x1A4588u: goto label_1a4588;
            case 0x1A458Cu: goto label_1a458c;
            case 0x1A4590u: goto label_1a4590;
            case 0x1A4594u: goto label_1a4594;
            case 0x1A4598u: goto label_1a4598;
            case 0x1A459Cu: goto label_1a459c;
            case 0x1A45A0u: goto label_1a45a0;
            case 0x1A45A4u: goto label_1a45a4;
            case 0x1A45A8u: goto label_1a45a8;
            case 0x1A45ACu: goto label_1a45ac;
            case 0x1A45B0u: goto label_1a45b0;
            case 0x1A45B4u: goto label_1a45b4;
            case 0x1A45B8u: goto label_1a45b8;
            case 0x1A45BCu: goto label_1a45bc;
            case 0x1A45C0u: goto label_1a45c0;
            case 0x1A45C4u: goto label_1a45c4;
            case 0x1A45C8u: goto label_1a45c8;
            case 0x1A45CCu: goto label_1a45cc;
            case 0x1A45D0u: goto label_1a45d0;
            case 0x1A45D4u: goto label_1a45d4;
            case 0x1A45D8u: goto label_1a45d8;
            case 0x1A45DCu: goto label_1a45dc;
            case 0x1A45E0u: goto label_1a45e0;
            case 0x1A45E4u: goto label_1a45e4;
            case 0x1A45E8u: goto label_1a45e8;
            case 0x1A45ECu: goto label_1a45ec;
            case 0x1A45F0u: goto label_1a45f0;
            case 0x1A45F4u: goto label_1a45f4;
            case 0x1A45F8u: goto label_1a45f8;
            case 0x1A45FCu: goto label_1a45fc;
            case 0x1A4600u: goto label_1a4600;
            case 0x1A4604u: goto label_1a4604;
            case 0x1A4608u: goto label_1a4608;
            case 0x1A460Cu: goto label_1a460c;
            case 0x1A4610u: goto label_1a4610;
            case 0x1A4614u: goto label_1a4614;
            case 0x1A4618u: goto label_1a4618;
            case 0x1A461Cu: goto label_1a461c;
            case 0x1A4620u: goto label_1a4620;
            case 0x1A4624u: goto label_1a4624;
            case 0x1A4628u: goto label_1a4628;
            case 0x1A462Cu: goto label_1a462c;
            case 0x1A4630u: goto label_1a4630;
            case 0x1A4634u: goto label_1a4634;
            case 0x1A4638u: goto label_1a4638;
            case 0x1A463Cu: goto label_1a463c;
            case 0x1A4640u: goto label_1a4640;
            case 0x1A4644u: goto label_1a4644;
            case 0x1A4648u: goto label_1a4648;
            case 0x1A464Cu: goto label_1a464c;
            case 0x1A4650u: goto label_1a4650;
            case 0x1A4654u: goto label_1a4654;
            case 0x1A4658u: goto label_1a4658;
            case 0x1A465Cu: goto label_1a465c;
            case 0x1A4660u: goto label_1a4660;
            case 0x1A4664u: goto label_1a4664;
            case 0x1A4668u: goto label_1a4668;
            case 0x1A466Cu: goto label_1a466c;
            case 0x1A4670u: goto label_1a4670;
            case 0x1A4674u: goto label_1a4674;
            case 0x1A4678u: goto label_1a4678;
            case 0x1A467Cu: goto label_1a467c;
            case 0x1A4680u: goto label_1a4680;
            case 0x1A4684u: goto label_1a4684;
            case 0x1A4688u: goto label_1a4688;
            case 0x1A468Cu: goto label_1a468c;
            case 0x1A4690u: goto label_1a4690;
            case 0x1A4694u: goto label_1a4694;
            case 0x1A4698u: goto label_1a4698;
            case 0x1A469Cu: goto label_1a469c;
            case 0x1A46A0u: goto label_1a46a0;
            case 0x1A46A4u: goto label_1a46a4;
            case 0x1A46A8u: goto label_1a46a8;
            case 0x1A46ACu: goto label_1a46ac;
            case 0x1A46B0u: goto label_1a46b0;
            case 0x1A46B4u: goto label_1a46b4;
            case 0x1A46B8u: goto label_1a46b8;
            case 0x1A46BCu: goto label_1a46bc;
            case 0x1A46C0u: goto label_1a46c0;
            case 0x1A46C4u: goto label_1a46c4;
            case 0x1A46C8u: goto label_1a46c8;
            case 0x1A46CCu: goto label_1a46cc;
            case 0x1A46D0u: goto label_1a46d0;
            case 0x1A46D4u: goto label_1a46d4;
            case 0x1A46D8u: goto label_1a46d8;
            case 0x1A46DCu: goto label_1a46dc;
            case 0x1A46E0u: goto label_1a46e0;
            case 0x1A46E4u: goto label_1a46e4;
            case 0x1A46E8u: goto label_1a46e8;
            case 0x1A46ECu: goto label_1a46ec;
            case 0x1A46F0u: goto label_1a46f0;
            case 0x1A46F4u: goto label_1a46f4;
            case 0x1A46F8u: goto label_1a46f8;
            case 0x1A46FCu: goto label_1a46fc;
            case 0x1A4700u: goto label_1a4700;
            case 0x1A4704u: goto label_1a4704;
            case 0x1A4708u: goto label_1a4708;
            case 0x1A470Cu: goto label_1a470c;
            case 0x1A4710u: goto label_1a4710;
            case 0x1A4714u: goto label_1a4714;
            case 0x1A4718u: goto label_1a4718;
            case 0x1A471Cu: goto label_1a471c;
            case 0x1A4720u: goto label_1a4720;
            case 0x1A4724u: goto label_1a4724;
            case 0x1A4728u: goto label_1a4728;
            case 0x1A472Cu: goto label_1a472c;
            case 0x1A4730u: goto label_1a4730;
            case 0x1A4734u: goto label_1a4734;
            case 0x1A4738u: goto label_1a4738;
            case 0x1A473Cu: goto label_1a473c;
            case 0x1A4740u: goto label_1a4740;
            case 0x1A4744u: goto label_1a4744;
            case 0x1A4748u: goto label_1a4748;
            case 0x1A474Cu: goto label_1a474c;
            case 0x1A4750u: goto label_1a4750;
            case 0x1A4754u: goto label_1a4754;
            case 0x1A4758u: goto label_1a4758;
            case 0x1A475Cu: goto label_1a475c;
            case 0x1A4760u: goto label_1a4760;
            case 0x1A4764u: goto label_1a4764;
            case 0x1A4768u: goto label_1a4768;
            case 0x1A476Cu: goto label_1a476c;
            case 0x1A4770u: goto label_1a4770;
            case 0x1A4774u: goto label_1a4774;
            case 0x1A4778u: goto label_1a4778;
            case 0x1A477Cu: goto label_1a477c;
            case 0x1A4780u: goto label_1a4780;
            case 0x1A4784u: goto label_1a4784;
            case 0x1A4788u: goto label_1a4788;
            case 0x1A478Cu: goto label_1a478c;
            case 0x1A4790u: goto label_1a4790;
            case 0x1A4794u: goto label_1a4794;
            case 0x1A4798u: goto label_1a4798;
            case 0x1A479Cu: goto label_1a479c;
            case 0x1A47A0u: goto label_1a47a0;
            case 0x1A47A4u: goto label_1a47a4;
            case 0x1A47A8u: goto label_1a47a8;
            case 0x1A47ACu: goto label_1a47ac;
            case 0x1A47B0u: goto label_1a47b0;
            case 0x1A47B4u: goto label_1a47b4;
            case 0x1A47B8u: goto label_1a47b8;
            case 0x1A47BCu: goto label_1a47bc;
            case 0x1A47C0u: goto label_1a47c0;
            case 0x1A47C4u: goto label_1a47c4;
            case 0x1A47C8u: goto label_1a47c8;
            case 0x1A47CCu: goto label_1a47cc;
            case 0x1A47D0u: goto label_1a47d0;
            case 0x1A47D4u: goto label_1a47d4;
            case 0x1A47D8u: goto label_1a47d8;
            case 0x1A47DCu: goto label_1a47dc;
            case 0x1A47E0u: goto label_1a47e0;
            case 0x1A47E4u: goto label_1a47e4;
            case 0x1A47E8u: goto label_1a47e8;
            case 0x1A47ECu: goto label_1a47ec;
            case 0x1A47F0u: goto label_1a47f0;
            case 0x1A47F4u: goto label_1a47f4;
            case 0x1A47F8u: goto label_1a47f8;
            case 0x1A47FCu: goto label_1a47fc;
            case 0x1A4800u: goto label_1a4800;
            case 0x1A4804u: goto label_1a4804;
            case 0x1A4808u: goto label_1a4808;
            case 0x1A480Cu: goto label_1a480c;
            case 0x1A4810u: goto label_1a4810;
            case 0x1A4814u: goto label_1a4814;
            case 0x1A4818u: goto label_1a4818;
            case 0x1A481Cu: goto label_1a481c;
            case 0x1A4820u: goto label_1a4820;
            case 0x1A4824u: goto label_1a4824;
            case 0x1A4828u: goto label_1a4828;
            case 0x1A482Cu: goto label_1a482c;
            case 0x1A4830u: goto label_1a4830;
            case 0x1A4834u: goto label_1a4834;
            case 0x1A4838u: goto label_1a4838;
            case 0x1A483Cu: goto label_1a483c;
            case 0x1A4840u: goto label_1a4840;
            case 0x1A4844u: goto label_1a4844;
            case 0x1A4848u: goto label_1a4848;
            case 0x1A484Cu: goto label_1a484c;
            case 0x1A4850u: goto label_1a4850;
            case 0x1A4854u: goto label_1a4854;
            case 0x1A4858u: goto label_1a4858;
            case 0x1A485Cu: goto label_1a485c;
            case 0x1A4860u: goto label_1a4860;
            case 0x1A4864u: goto label_1a4864;
            case 0x1A4868u: goto label_1a4868;
            case 0x1A486Cu: goto label_1a486c;
            case 0x1A4870u: goto label_1a4870;
            case 0x1A4874u: goto label_1a4874;
            case 0x1A4878u: goto label_1a4878;
            case 0x1A487Cu: goto label_1a487c;
            case 0x1A4880u: goto label_1a4880;
            case 0x1A4884u: goto label_1a4884;
            case 0x1A4888u: goto label_1a4888;
            case 0x1A488Cu: goto label_1a488c;
            case 0x1A4890u: goto label_1a4890;
            case 0x1A4894u: goto label_1a4894;
            case 0x1A4898u: goto label_1a4898;
            case 0x1A489Cu: goto label_1a489c;
            case 0x1A48A0u: goto label_1a48a0;
            case 0x1A48A4u: goto label_1a48a4;
            case 0x1A48A8u: goto label_1a48a8;
            case 0x1A48ACu: goto label_1a48ac;
            case 0x1A48B0u: goto label_1a48b0;
            case 0x1A48B4u: goto label_1a48b4;
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48BCu: goto label_1a48bc;
            case 0x1A48C0u: goto label_1a48c0;
            case 0x1A48C4u: goto label_1a48c4;
            case 0x1A48C8u: goto label_1a48c8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48D0u: goto label_1a48d0;
            case 0x1A48D4u: goto label_1a48d4;
            case 0x1A48D8u: goto label_1a48d8;
            case 0x1A48DCu: goto label_1a48dc;
            case 0x1A48E0u: goto label_1a48e0;
            case 0x1A48E4u: goto label_1a48e4;
            case 0x1A48E8u: goto label_1a48e8;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A48F0u: goto label_1a48f0;
            case 0x1A48F4u: goto label_1a48f4;
            case 0x1A48F8u: goto label_1a48f8;
            case 0x1A48FCu: goto label_1a48fc;
            case 0x1A4900u: goto label_1a4900;
            case 0x1A4904u: goto label_1a4904;
            case 0x1A4908u: goto label_1a4908;
            case 0x1A490Cu: goto label_1a490c;
            case 0x1A4910u: goto label_1a4910;
            case 0x1A4914u: goto label_1a4914;
            case 0x1A4918u: goto label_1a4918;
            case 0x1A491Cu: goto label_1a491c;
            case 0x1A4920u: goto label_1a4920;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4928u: goto label_1a4928;
            case 0x1A492Cu: goto label_1a492c;
            case 0x1A4930u: goto label_1a4930;
            case 0x1A4934u: goto label_1a4934;
            case 0x1A4938u: goto label_1a4938;
            case 0x1A493Cu: goto label_1a493c;
            case 0x1A4940u: goto label_1a4940;
            case 0x1A4944u: goto label_1a4944;
            case 0x1A4948u: goto label_1a4948;
            case 0x1A494Cu: goto label_1a494c;
            case 0x1A4950u: goto label_1a4950;
            case 0x1A4954u: goto label_1a4954;
            case 0x1A4958u: goto label_1a4958;
            case 0x1A495Cu: goto label_1a495c;
            case 0x1A4960u: goto label_1a4960;
            case 0x1A4964u: goto label_1a4964;
            case 0x1A4968u: goto label_1a4968;
            case 0x1A496Cu: goto label_1a496c;
            case 0x1A4970u: goto label_1a4970;
            case 0x1A4974u: goto label_1a4974;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4980u: goto label_1a4980;
            case 0x1A4984u: goto label_1a4984;
            case 0x1A4988u: goto label_1a4988;
            case 0x1A498Cu: goto label_1a498c;
            case 0x1A4990u: goto label_1a4990;
            case 0x1A4994u: goto label_1a4994;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49A4u: goto label_1a49a4;
            case 0x1A49A8u: goto label_1a49a8;
            case 0x1A49ACu: goto label_1a49ac;
            case 0x1A49B0u: goto label_1a49b0;
            case 0x1A49B4u: goto label_1a49b4;
            case 0x1A49B8u: goto label_1a49b8;
            case 0x1A49BCu: goto label_1a49bc;
            case 0x1A49C0u: goto label_1a49c0;
            case 0x1A49C4u: goto label_1a49c4;
            case 0x1A49C8u: goto label_1a49c8;
            case 0x1A49CCu: goto label_1a49cc;
            case 0x1A49D0u: goto label_1a49d0;
            case 0x1A49D4u: goto label_1a49d4;
            case 0x1A49D8u: goto label_1a49d8;
            case 0x1A49DCu: goto label_1a49dc;
            case 0x1A49E0u: goto label_1a49e0;
            case 0x1A49E4u: goto label_1a49e4;
            case 0x1A49E8u: goto label_1a49e8;
            case 0x1A49ECu: goto label_1a49ec;
            case 0x1A49F0u: goto label_1a49f0;
            case 0x1A49F4u: goto label_1a49f4;
            case 0x1A49F8u: goto label_1a49f8;
            case 0x1A49FCu: goto label_1a49fc;
            case 0x1A4A00u: goto label_1a4a00;
            case 0x1A4A04u: goto label_1a4a04;
            case 0x1A4A08u: goto label_1a4a08;
            case 0x1A4A0Cu: goto label_1a4a0c;
            case 0x1A4A10u: goto label_1a4a10;
            case 0x1A4A14u: goto label_1a4a14;
            case 0x1A4A18u: goto label_1a4a18;
            case 0x1A4A1Cu: goto label_1a4a1c;
            case 0x1A4A20u: goto label_1a4a20;
            case 0x1A4A24u: goto label_1a4a24;
            case 0x1A4A28u: goto label_1a4a28;
            case 0x1A4A2Cu: goto label_1a4a2c;
            case 0x1A4A30u: goto label_1a4a30;
            case 0x1A4A34u: goto label_1a4a34;
            case 0x1A4A38u: goto label_1a4a38;
            case 0x1A4A3Cu: goto label_1a4a3c;
            case 0x1A4A40u: goto label_1a4a40;
            case 0x1A4A44u: goto label_1a4a44;
            case 0x1A4A48u: goto label_1a4a48;
            case 0x1A4A4Cu: goto label_1a4a4c;
            case 0x1A4A50u: goto label_1a4a50;
            case 0x1A4A54u: goto label_1a4a54;
            case 0x1A4A58u: goto label_1a4a58;
            case 0x1A4A5Cu: goto label_1a4a5c;
            case 0x1A4A60u: goto label_1a4a60;
            case 0x1A4A64u: goto label_1a4a64;
            case 0x1A4A68u: goto label_1a4a68;
            case 0x1A4A6Cu: goto label_1a4a6c;
            case 0x1A4A70u: goto label_1a4a70;
            case 0x1A4A74u: goto label_1a4a74;
            case 0x1A4A78u: goto label_1a4a78;
            case 0x1A4A7Cu: goto label_1a4a7c;
            case 0x1A4A80u: goto label_1a4a80;
            case 0x1A4A84u: goto label_1a4a84;
            case 0x1A4A88u: goto label_1a4a88;
            case 0x1A4A8Cu: goto label_1a4a8c;
            case 0x1A4A90u: goto label_1a4a90;
            case 0x1A4A94u: goto label_1a4a94;
            case 0x1A4A98u: goto label_1a4a98;
            case 0x1A4A9Cu: goto label_1a4a9c;
            case 0x1A4AA0u: goto label_1a4aa0;
            case 0x1A4AA4u: goto label_1a4aa4;
            case 0x1A4AA8u: goto label_1a4aa8;
            case 0x1A4AACu: goto label_1a4aac;
            case 0x1A4AB0u: goto label_1a4ab0;
            case 0x1A4AB4u: goto label_1a4ab4;
            case 0x1A4AB8u: goto label_1a4ab8;
            case 0x1A4ABCu: goto label_1a4abc;
            case 0x1A4AC0u: goto label_1a4ac0;
            case 0x1A4AC4u: goto label_1a4ac4;
            case 0x1A4AC8u: goto label_1a4ac8;
            case 0x1A4ACCu: goto label_1a4acc;
            case 0x1A4AD0u: goto label_1a4ad0;
            case 0x1A4AD4u: goto label_1a4ad4;
            case 0x1A4AD8u: goto label_1a4ad8;
            case 0x1A4ADCu: goto label_1a4adc;
            case 0x1A4AE0u: goto label_1a4ae0;
            case 0x1A4AE4u: goto label_1a4ae4;
            case 0x1A4AE8u: goto label_1a4ae8;
            case 0x1A4AECu: goto label_1a4aec;
            case 0x1A4AF0u: goto label_1a4af0;
            case 0x1A4AF4u: goto label_1a4af4;
            case 0x1A4AF8u: goto label_1a4af8;
            case 0x1A4AFCu: goto label_1a4afc;
            case 0x1A4B00u: goto label_1a4b00;
            case 0x1A4B04u: goto label_1a4b04;
            case 0x1A4B08u: goto label_1a4b08;
            case 0x1A4B0Cu: goto label_1a4b0c;
            case 0x1A4B10u: goto label_1a4b10;
            case 0x1A4B14u: goto label_1a4b14;
            case 0x1A4B18u: goto label_1a4b18;
            case 0x1A4B1Cu: goto label_1a4b1c;
            case 0x1A4B20u: goto label_1a4b20;
            case 0x1A4B24u: goto label_1a4b24;
            case 0x1A4B28u: goto label_1a4b28;
            case 0x1A4B2Cu: goto label_1a4b2c;
            case 0x1A4B30u: goto label_1a4b30;
            case 0x1A4B34u: goto label_1a4b34;
            case 0x1A4B38u: goto label_1a4b38;
            case 0x1A4B3Cu: goto label_1a4b3c;
            case 0x1A4B40u: goto label_1a4b40;
            case 0x1A4B44u: goto label_1a4b44;
            case 0x1A4B48u: goto label_1a4b48;
            case 0x1A4B4Cu: goto label_1a4b4c;
            case 0x1A4B50u: goto label_1a4b50;
            case 0x1A4B54u: goto label_1a4b54;
            case 0x1A4B58u: goto label_1a4b58;
            case 0x1A4B5Cu: goto label_1a4b5c;
            case 0x1A4B60u: goto label_1a4b60;
            case 0x1A4B64u: goto label_1a4b64;
            case 0x1A4B68u: goto label_1a4b68;
            case 0x1A4B6Cu: goto label_1a4b6c;
            case 0x1A4B70u: goto label_1a4b70;
            case 0x1A4B74u: goto label_1a4b74;
            case 0x1A4B78u: goto label_1a4b78;
            case 0x1A4B7Cu: goto label_1a4b7c;
            case 0x1A4B80u: goto label_1a4b80;
            case 0x1A4B84u: goto label_1a4b84;
            case 0x1A4B88u: goto label_1a4b88;
            case 0x1A4B8Cu: goto label_1a4b8c;
            case 0x1A4B90u: goto label_1a4b90;
            case 0x1A4B94u: goto label_1a4b94;
            case 0x1A4B98u: goto label_1a4b98;
            case 0x1A4B9Cu: goto label_1a4b9c;
            case 0x1A4BA0u: goto label_1a4ba0;
            case 0x1A4BA4u: goto label_1a4ba4;
            case 0x1A4BA8u: goto label_1a4ba8;
            case 0x1A4BACu: goto label_1a4bac;
            case 0x1A4BB0u: goto label_1a4bb0;
            case 0x1A4BB4u: goto label_1a4bb4;
            case 0x1A4BB8u: goto label_1a4bb8;
            case 0x1A4BBCu: goto label_1a4bbc;
            case 0x1A4BC0u: goto label_1a4bc0;
            case 0x1A4BC4u: goto label_1a4bc4;
            case 0x1A4BC8u: goto label_1a4bc8;
            case 0x1A4BCCu: goto label_1a4bcc;
            case 0x1A4BD0u: goto label_1a4bd0;
            case 0x1A4BD4u: goto label_1a4bd4;
            case 0x1A4BD8u: goto label_1a4bd8;
            case 0x1A4BDCu: goto label_1a4bdc;
            case 0x1A4BE0u: goto label_1a4be0;
            case 0x1A4BE4u: goto label_1a4be4;
            case 0x1A4BE8u: goto label_1a4be8;
            case 0x1A4BECu: goto label_1a4bec;
            case 0x1A4BF0u: goto label_1a4bf0;
            case 0x1A4BF4u: goto label_1a4bf4;
            case 0x1A4BF8u: goto label_1a4bf8;
            case 0x1A4BFCu: goto label_1a4bfc;
            case 0x1A4C00u: goto label_1a4c00;
            case 0x1A4C04u: goto label_1a4c04;
            case 0x1A4C08u: goto label_1a4c08;
            case 0x1A4C0Cu: goto label_1a4c0c;
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C14u: goto label_1a4c14;
            case 0x1A4C18u: goto label_1a4c18;
            case 0x1A4C1Cu: goto label_1a4c1c;
            case 0x1A4C20u: goto label_1a4c20;
            case 0x1A4C24u: goto label_1a4c24;
            case 0x1A4C28u: goto label_1a4c28;
            case 0x1A4C2Cu: goto label_1a4c2c;
            case 0x1A4C30u: goto label_1a4c30;
            case 0x1A4C34u: goto label_1a4c34;
            case 0x1A4C38u: goto label_1a4c38;
            case 0x1A4C3Cu: goto label_1a4c3c;
            case 0x1A4C40u: goto label_1a4c40;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C48u: goto label_1a4c48;
            case 0x1A4C4Cu: goto label_1a4c4c;
            case 0x1A4C50u: goto label_1a4c50;
            case 0x1A4C54u: goto label_1a4c54;
            case 0x1A4C58u: goto label_1a4c58;
            case 0x1A4C5Cu: goto label_1a4c5c;
            case 0x1A4C60u: goto label_1a4c60;
            case 0x1A4C64u: goto label_1a4c64;
            case 0x1A4C68u: goto label_1a4c68;
            case 0x1A4C6Cu: goto label_1a4c6c;
            case 0x1A4C70u: goto label_1a4c70;
            case 0x1A4C74u: goto label_1a4c74;
            case 0x1A4C78u: goto label_1a4c78;
            case 0x1A4C7Cu: goto label_1a4c7c;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4C84u: goto label_1a4c84;
            case 0x1A4C88u: goto label_1a4c88;
            case 0x1A4C8Cu: goto label_1a4c8c;
            case 0x1A4C90u: goto label_1a4c90;
            case 0x1A4C94u: goto label_1a4c94;
            case 0x1A4C98u: goto label_1a4c98;
            case 0x1A4C9Cu: goto label_1a4c9c;
            case 0x1A4CA0u: goto label_1a4ca0;
            case 0x1A4CA4u: goto label_1a4ca4;
            case 0x1A4CA8u: goto label_1a4ca8;
            case 0x1A4CACu: goto label_1a4cac;
            case 0x1A4CB0u: goto label_1a4cb0;
            case 0x1A4CB4u: goto label_1a4cb4;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4CBCu: goto label_1a4cbc;
            case 0x1A4CC0u: goto label_1a4cc0;
            case 0x1A4CC4u: goto label_1a4cc4;
            case 0x1A4CC8u: goto label_1a4cc8;
            case 0x1A4CCCu: goto label_1a4ccc;
            case 0x1A4CD0u: goto label_1a4cd0;
            case 0x1A4CD4u: goto label_1a4cd4;
            case 0x1A4CD8u: goto label_1a4cd8;
            case 0x1A4CDCu: goto label_1a4cdc;
            case 0x1A4CE0u: goto label_1a4ce0;
            case 0x1A4CE4u: goto label_1a4ce4;
            case 0x1A4CE8u: goto label_1a4ce8;
            case 0x1A4CECu: goto label_1a4cec;
            case 0x1A4CF0u: goto label_1a4cf0;
            case 0x1A4CF4u: goto label_1a4cf4;
            case 0x1A4CF8u: goto label_1a4cf8;
            case 0x1A4CFCu: goto label_1a4cfc;
            case 0x1A4D00u: goto label_1a4d00;
            case 0x1A4D04u: goto label_1a4d04;
            case 0x1A4D08u: goto label_1a4d08;
            case 0x1A4D0Cu: goto label_1a4d0c;
            case 0x1A4D10u: goto label_1a4d10;
            case 0x1A4D14u: goto label_1a4d14;
            case 0x1A4D18u: goto label_1a4d18;
            case 0x1A4D1Cu: goto label_1a4d1c;
            case 0x1A4D20u: goto label_1a4d20;
            case 0x1A4D24u: goto label_1a4d24;
            case 0x1A4D28u: goto label_1a4d28;
            case 0x1A4D2Cu: goto label_1a4d2c;
            case 0x1A4D30u: goto label_1a4d30;
            case 0x1A4D34u: goto label_1a4d34;
            case 0x1A4D38u: goto label_1a4d38;
            case 0x1A4D3Cu: goto label_1a4d3c;
            case 0x1A4D40u: goto label_1a4d40;
            case 0x1A4D44u: goto label_1a4d44;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D4Cu: goto label_1a4d4c;
            case 0x1A4D50u: goto label_1a4d50;
            case 0x1A4D54u: goto label_1a4d54;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D5Cu: goto label_1a4d5c;
            case 0x1A4D60u: goto label_1a4d60;
            case 0x1A4D64u: goto label_1a4d64;
            case 0x1A4D68u: goto label_1a4d68;
            case 0x1A4D6Cu: goto label_1a4d6c;
            case 0x1A4D70u: goto label_1a4d70;
            case 0x1A4D74u: goto label_1a4d74;
            case 0x1A4D78u: goto label_1a4d78;
            case 0x1A4D7Cu: goto label_1a4d7c;
            case 0x1A4D80u: goto label_1a4d80;
            case 0x1A4D84u: goto label_1a4d84;
            case 0x1A4D88u: goto label_1a4d88;
            case 0x1A4D8Cu: goto label_1a4d8c;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4D94u: goto label_1a4d94;
            case 0x1A4D98u: goto label_1a4d98;
            case 0x1A4D9Cu: goto label_1a4d9c;
            case 0x1A4DA0u: goto label_1a4da0;
            case 0x1A4DA4u: goto label_1a4da4;
            case 0x1A4DA8u: goto label_1a4da8;
            case 0x1A4DACu: goto label_1a4dac;
            case 0x1A4DB0u: goto label_1a4db0;
            case 0x1A4DB4u: goto label_1a4db4;
            case 0x1A4DB8u: goto label_1a4db8;
            case 0x1A4DBCu: goto label_1a4dbc;
            case 0x1A4DC0u: goto label_1a4dc0;
            case 0x1A4DC4u: goto label_1a4dc4;
            case 0x1A4DC8u: goto label_1a4dc8;
            case 0x1A4DCCu: goto label_1a4dcc;
            case 0x1A4DD0u: goto label_1a4dd0;
            case 0x1A4DD4u: goto label_1a4dd4;
            case 0x1A4DD8u: goto label_1a4dd8;
            case 0x1A4DDCu: goto label_1a4ddc;
            case 0x1A4DE0u: goto label_1a4de0;
            case 0x1A4DE4u: goto label_1a4de4;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4DF0u: goto label_1a4df0;
            case 0x1A4DF4u: goto label_1a4df4;
            case 0x1A4DF8u: goto label_1a4df8;
            case 0x1A4DFCu: goto label_1a4dfc;
            case 0x1A4E00u: goto label_1a4e00;
            case 0x1A4E04u: goto label_1a4e04;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E14u: goto label_1a4e14;
            case 0x1A4E18u: goto label_1a4e18;
            case 0x1A4E1Cu: goto label_1a4e1c;
            case 0x1A4E20u: goto label_1a4e20;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E28u: goto label_1a4e28;
            case 0x1A4E2Cu: goto label_1a4e2c;
            case 0x1A4E30u: goto label_1a4e30;
            case 0x1A4E34u: goto label_1a4e34;
            case 0x1A4E38u: goto label_1a4e38;
            case 0x1A4E3Cu: goto label_1a4e3c;
            case 0x1A4E40u: goto label_1a4e40;
            case 0x1A4E44u: goto label_1a4e44;
            case 0x1A4E48u: goto label_1a4e48;
            case 0x1A4E4Cu: goto label_1a4e4c;
            case 0x1A4E50u: goto label_1a4e50;
            case 0x1A4E54u: goto label_1a4e54;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4E60u: goto label_1a4e60;
            case 0x1A4E64u: goto label_1a4e64;
            case 0x1A4E68u: goto label_1a4e68;
            case 0x1A4E6Cu: goto label_1a4e6c;
            case 0x1A4E70u: goto label_1a4e70;
            case 0x1A4E74u: goto label_1a4e74;
            case 0x1A4E78u: goto label_1a4e78;
            case 0x1A4E7Cu: goto label_1a4e7c;
            case 0x1A4E80u: goto label_1a4e80;
            case 0x1A4E84u: goto label_1a4e84;
            case 0x1A4E88u: goto label_1a4e88;
            case 0x1A4E8Cu: goto label_1a4e8c;
            case 0x1A4E90u: goto label_1a4e90;
            case 0x1A4E94u: goto label_1a4e94;
            case 0x1A4E98u: goto label_1a4e98;
            case 0x1A4E9Cu: goto label_1a4e9c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4EA4u: goto label_1a4ea4;
            case 0x1A4EA8u: goto label_1a4ea8;
            case 0x1A4EACu: goto label_1a4eac;
            case 0x1A4EB0u: goto label_1a4eb0;
            case 0x1A4EB4u: goto label_1a4eb4;
            case 0x1A4EB8u: goto label_1a4eb8;
            case 0x1A4EBCu: goto label_1a4ebc;
            case 0x1A4EC0u: goto label_1a4ec0;
            case 0x1A4EC4u: goto label_1a4ec4;
            case 0x1A4EC8u: goto label_1a4ec8;
            case 0x1A4ECCu: goto label_1a4ecc;
            case 0x1A4ED0u: goto label_1a4ed0;
            case 0x1A4ED4u: goto label_1a4ed4;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EDCu: goto label_1a4edc;
            case 0x1A4EE0u: goto label_1a4ee0;
            case 0x1A4EE4u: goto label_1a4ee4;
            case 0x1A4EE8u: goto label_1a4ee8;
            case 0x1A4EECu: goto label_1a4eec;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4EF4u: goto label_1a4ef4;
            case 0x1A4EF8u: goto label_1a4ef8;
            case 0x1A4EFCu: goto label_1a4efc;
            case 0x1A4F00u: goto label_1a4f00;
            case 0x1A4F04u: goto label_1a4f04;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F0Cu: goto label_1a4f0c;
            case 0x1A4F10u: goto label_1a4f10;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F18u: goto label_1a4f18;
            case 0x1A4F1Cu: goto label_1a4f1c;
            case 0x1A4F20u: goto label_1a4f20;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F28u: goto label_1a4f28;
            case 0x1A4F2Cu: goto label_1a4f2c;
            case 0x1A4F30u: goto label_1a4f30;
            case 0x1A4F34u: goto label_1a4f34;
            case 0x1A4F38u: goto label_1a4f38;
            case 0x1A4F3Cu: goto label_1a4f3c;
            case 0x1A4F40u: goto label_1a4f40;
            case 0x1A4F44u: goto label_1a4f44;
            case 0x1A4F48u: goto label_1a4f48;
            case 0x1A4F4Cu: goto label_1a4f4c;
            case 0x1A4F50u: goto label_1a4f50;
            case 0x1A4F54u: goto label_1a4f54;
            case 0x1A4F58u: goto label_1a4f58;
            case 0x1A4F5Cu: goto label_1a4f5c;
            case 0x1A4F60u: goto label_1a4f60;
            case 0x1A4F64u: goto label_1a4f64;
            case 0x1A4F68u: goto label_1a4f68;
            case 0x1A4F6Cu: goto label_1a4f6c;
            case 0x1A4F70u: goto label_1a4f70;
            case 0x1A4F74u: goto label_1a4f74;
            case 0x1A4F78u: goto label_1a4f78;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4F80u: goto label_1a4f80;
            case 0x1A4F84u: goto label_1a4f84;
            case 0x1A4F88u: goto label_1a4f88;
            case 0x1A4F8Cu: goto label_1a4f8c;
            case 0x1A4F90u: goto label_1a4f90;
            case 0x1A4F94u: goto label_1a4f94;
            case 0x1A4F98u: goto label_1a4f98;
            case 0x1A4F9Cu: goto label_1a4f9c;
            case 0x1A4FA0u: goto label_1a4fa0;
            case 0x1A4FA4u: goto label_1a4fa4;
            case 0x1A4FA8u: goto label_1a4fa8;
            case 0x1A4FACu: goto label_1a4fac;
            case 0x1A4FB0u: goto label_1a4fb0;
            case 0x1A4FB4u: goto label_1a4fb4;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FBCu: goto label_1a4fbc;
            case 0x1A4FC0u: goto label_1a4fc0;
            case 0x1A4FC4u: goto label_1a4fc4;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A4FCCu: goto label_1a4fcc;
            case 0x1A4FD0u: goto label_1a4fd0;
            case 0x1A4FD4u: goto label_1a4fd4;
            case 0x1A4FD8u: goto label_1a4fd8;
            case 0x1A4FDCu: goto label_1a4fdc;
            case 0x1A4FE0u: goto label_1a4fe0;
            case 0x1A4FE4u: goto label_1a4fe4;
            case 0x1A4FE8u: goto label_1a4fe8;
            case 0x1A4FECu: goto label_1a4fec;
            case 0x1A4FF0u: goto label_1a4ff0;
            case 0x1A4FF4u: goto label_1a4ff4;
            case 0x1A4FF8u: goto label_1a4ff8;
            case 0x1A4FFCu: goto label_1a4ffc;
            case 0x1A5000u: goto label_1a5000;
            case 0x1A5004u: goto label_1a5004;
            case 0x1A5008u: goto label_1a5008;
            case 0x1A500Cu: goto label_1a500c;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5018u: goto label_1a5018;
            case 0x1A501Cu: goto label_1a501c;
            case 0x1A5020u: goto label_1a5020;
            case 0x1A5024u: goto label_1a5024;
            case 0x1A5028u: goto label_1a5028;
            case 0x1A502Cu: goto label_1a502c;
            case 0x1A5030u: goto label_1a5030;
            case 0x1A5034u: goto label_1a5034;
            case 0x1A5038u: goto label_1a5038;
            case 0x1A503Cu: goto label_1a503c;
            case 0x1A5040u: goto label_1a5040;
            case 0x1A5044u: goto label_1a5044;
            case 0x1A5048u: goto label_1a5048;
            case 0x1A504Cu: goto label_1a504c;
            case 0x1A5050u: goto label_1a5050;
            case 0x1A5054u: goto label_1a5054;
            case 0x1A5058u: goto label_1a5058;
            case 0x1A505Cu: goto label_1a505c;
            case 0x1A5060u: goto label_1a5060;
            case 0x1A5064u: goto label_1a5064;
            case 0x1A5068u: goto label_1a5068;
            case 0x1A506Cu: goto label_1a506c;
            case 0x1A5070u: goto label_1a5070;
            case 0x1A5074u: goto label_1a5074;
            case 0x1A5078u: goto label_1a5078;
            case 0x1A507Cu: goto label_1a507c;
            case 0x1A5080u: goto label_1a5080;
            case 0x1A5084u: goto label_1a5084;
            case 0x1A5088u: goto label_1a5088;
            case 0x1A508Cu: goto label_1a508c;
            case 0x1A5090u: goto label_1a5090;
            case 0x1A5094u: goto label_1a5094;
            case 0x1A5098u: goto label_1a5098;
            case 0x1A509Cu: goto label_1a509c;
            case 0x1A50A0u: goto label_1a50a0;
            case 0x1A50A4u: goto label_1a50a4;
            case 0x1A50A8u: goto label_1a50a8;
            case 0x1A50ACu: goto label_1a50ac;
            case 0x1A50B0u: goto label_1a50b0;
            case 0x1A50B4u: goto label_1a50b4;
            case 0x1A50B8u: goto label_1a50b8;
            case 0x1A50BCu: goto label_1a50bc;
            case 0x1A50C0u: goto label_1a50c0;
            case 0x1A50C4u: goto label_1a50c4;
            case 0x1A50C8u: goto label_1a50c8;
            case 0x1A50CCu: goto label_1a50cc;
            case 0x1A50D0u: goto label_1a50d0;
            case 0x1A50D4u: goto label_1a50d4;
            case 0x1A50D8u: goto label_1a50d8;
            case 0x1A50DCu: goto label_1a50dc;
            case 0x1A50E0u: goto label_1a50e0;
            case 0x1A50E4u: goto label_1a50e4;
            case 0x1A50E8u: goto label_1a50e8;
            case 0x1A50ECu: goto label_1a50ec;
            case 0x1A50F0u: goto label_1a50f0;
            case 0x1A50F4u: goto label_1a50f4;
            case 0x1A50F8u: goto label_1a50f8;
            case 0x1A50FCu: goto label_1a50fc;
            case 0x1A5100u: goto label_1a5100;
            case 0x1A5104u: goto label_1a5104;
            case 0x1A5108u: goto label_1a5108;
            case 0x1A510Cu: goto label_1a510c;
            case 0x1A5110u: goto label_1a5110;
            case 0x1A5114u: goto label_1a5114;
            case 0x1A5118u: goto label_1a5118;
            case 0x1A511Cu: goto label_1a511c;
            case 0x1A5120u: goto label_1a5120;
            case 0x1A5124u: goto label_1a5124;
            case 0x1A5128u: goto label_1a5128;
            case 0x1A512Cu: goto label_1a512c;
            case 0x1A5130u: goto label_1a5130;
            case 0x1A5134u: goto label_1a5134;
            case 0x1A5138u: goto label_1a5138;
            case 0x1A513Cu: goto label_1a513c;
            case 0x1A5140u: goto label_1a5140;
            case 0x1A5144u: goto label_1a5144;
            case 0x1A5148u: goto label_1a5148;
            case 0x1A514Cu: goto label_1a514c;
            case 0x1A5150u: goto label_1a5150;
            case 0x1A5154u: goto label_1a5154;
            case 0x1A5158u: goto label_1a5158;
            case 0x1A515Cu: goto label_1a515c;
            case 0x1A5160u: goto label_1a5160;
            case 0x1A5164u: goto label_1a5164;
            case 0x1A5168u: goto label_1a5168;
            case 0x1A516Cu: goto label_1a516c;
            case 0x1A5170u: goto label_1a5170;
            case 0x1A5174u: goto label_1a5174;
            case 0x1A5178u: goto label_1a5178;
            case 0x1A517Cu: goto label_1a517c;
            case 0x1A5180u: goto label_1a5180;
            case 0x1A5184u: goto label_1a5184;
            case 0x1A5188u: goto label_1a5188;
            case 0x1A518Cu: goto label_1a518c;
            case 0x1A5190u: goto label_1a5190;
            case 0x1A5194u: goto label_1a5194;
            case 0x1A5198u: goto label_1a5198;
            case 0x1A519Cu: goto label_1a519c;
            case 0x1A51A0u: goto label_1a51a0;
            case 0x1A51A4u: goto label_1a51a4;
            case 0x1A51A8u: goto label_1a51a8;
            case 0x1A51ACu: goto label_1a51ac;
            case 0x1A51B0u: goto label_1a51b0;
            case 0x1A51B4u: goto label_1a51b4;
            case 0x1A51B8u: goto label_1a51b8;
            case 0x1A51BCu: goto label_1a51bc;
            case 0x1A51C0u: goto label_1a51c0;
            case 0x1A51C4u: goto label_1a51c4;
            case 0x1A51C8u: goto label_1a51c8;
            case 0x1A51CCu: goto label_1a51cc;
            case 0x1A51D0u: goto label_1a51d0;
            case 0x1A51D4u: goto label_1a51d4;
            case 0x1A51D8u: goto label_1a51d8;
            case 0x1A51DCu: goto label_1a51dc;
            case 0x1A51E0u: goto label_1a51e0;
            case 0x1A51E4u: goto label_1a51e4;
            case 0x1A51E8u: goto label_1a51e8;
            case 0x1A51ECu: goto label_1a51ec;
            case 0x1A51F0u: goto label_1a51f0;
            case 0x1A51F4u: goto label_1a51f4;
            case 0x1A51F8u: goto label_1a51f8;
            case 0x1A51FCu: goto label_1a51fc;
            case 0x1A5200u: goto label_1a5200;
            case 0x1A5204u: goto label_1a5204;
            case 0x1A5208u: goto label_1a5208;
            case 0x1A520Cu: goto label_1a520c;
            case 0x1A5210u: goto label_1a5210;
            case 0x1A5214u: goto label_1a5214;
            case 0x1A5218u: goto label_1a5218;
            case 0x1A521Cu: goto label_1a521c;
            case 0x1A5220u: goto label_1a5220;
            case 0x1A5224u: goto label_1a5224;
            case 0x1A5228u: goto label_1a5228;
            case 0x1A522Cu: goto label_1a522c;
            case 0x1A5230u: goto label_1a5230;
            case 0x1A5234u: goto label_1a5234;
            case 0x1A5238u: goto label_1a5238;
            case 0x1A523Cu: goto label_1a523c;
            case 0x1A5240u: goto label_1a5240;
            case 0x1A5244u: goto label_1a5244;
            case 0x1A5248u: goto label_1a5248;
            case 0x1A524Cu: goto label_1a524c;
            case 0x1A5250u: goto label_1a5250;
            case 0x1A5254u: goto label_1a5254;
            case 0x1A5258u: goto label_1a5258;
            case 0x1A525Cu: goto label_1a525c;
            case 0x1A5260u: goto label_1a5260;
            case 0x1A5264u: goto label_1a5264;
            case 0x1A5268u: goto label_1a5268;
            case 0x1A526Cu: goto label_1a526c;
            case 0x1A5270u: goto label_1a5270;
            case 0x1A5274u: goto label_1a5274;
            case 0x1A5278u: goto label_1a5278;
            case 0x1A527Cu: goto label_1a527c;
            case 0x1A5280u: goto label_1a5280;
            case 0x1A5284u: goto label_1a5284;
            case 0x1A5288u: goto label_1a5288;
            case 0x1A528Cu: goto label_1a528c;
            case 0x1A5290u: goto label_1a5290;
            case 0x1A5294u: goto label_1a5294;
            case 0x1A5298u: goto label_1a5298;
            case 0x1A529Cu: goto label_1a529c;
            case 0x1A52A0u: goto label_1a52a0;
            case 0x1A52A4u: goto label_1a52a4;
            case 0x1A52A8u: goto label_1a52a8;
            case 0x1A52ACu: goto label_1a52ac;
            case 0x1A52B0u: goto label_1a52b0;
            case 0x1A52B4u: goto label_1a52b4;
            case 0x1A52B8u: goto label_1a52b8;
            case 0x1A52BCu: goto label_1a52bc;
            case 0x1A52C0u: goto label_1a52c0;
            case 0x1A52C4u: goto label_1a52c4;
            case 0x1A52C8u: goto label_1a52c8;
            case 0x1A52CCu: goto label_1a52cc;
            case 0x1A52D0u: goto label_1a52d0;
            case 0x1A52D4u: goto label_1a52d4;
            case 0x1A52D8u: goto label_1a52d8;
            case 0x1A52DCu: goto label_1a52dc;
            case 0x1A52E0u: goto label_1a52e0;
            case 0x1A52E4u: goto label_1a52e4;
            case 0x1A52E8u: goto label_1a52e8;
            case 0x1A52ECu: goto label_1a52ec;
            case 0x1A52F0u: goto label_1a52f0;
            case 0x1A52F4u: goto label_1a52f4;
            case 0x1A52F8u: goto label_1a52f8;
            case 0x1A52FCu: goto label_1a52fc;
            case 0x1A5300u: goto label_1a5300;
            case 0x1A5304u: goto label_1a5304;
            case 0x1A5308u: goto label_1a5308;
            case 0x1A530Cu: goto label_1a530c;
            case 0x1A5310u: goto label_1a5310;
            case 0x1A5314u: goto label_1a5314;
            case 0x1A5318u: goto label_1a5318;
            case 0x1A531Cu: goto label_1a531c;
            case 0x1A5320u: goto label_1a5320;
            case 0x1A5324u: goto label_1a5324;
            case 0x1A5328u: goto label_1a5328;
            case 0x1A532Cu: goto label_1a532c;
            case 0x1A5330u: goto label_1a5330;
            case 0x1A5334u: goto label_1a5334;
            case 0x1A5338u: goto label_1a5338;
            case 0x1A533Cu: goto label_1a533c;
            case 0x1A5340u: goto label_1a5340;
            case 0x1A5344u: goto label_1a5344;
            case 0x1A5348u: goto label_1a5348;
            case 0x1A534Cu: goto label_1a534c;
            case 0x1A5350u: goto label_1a5350;
            case 0x1A5354u: goto label_1a5354;
            case 0x1A5358u: goto label_1a5358;
            case 0x1A535Cu: goto label_1a535c;
            case 0x1A5360u: goto label_1a5360;
            case 0x1A5364u: goto label_1a5364;
            case 0x1A5368u: goto label_1a5368;
            case 0x1A536Cu: goto label_1a536c;
            case 0x1A5370u: goto label_1a5370;
            case 0x1A5374u: goto label_1a5374;
            case 0x1A5378u: goto label_1a5378;
            case 0x1A537Cu: goto label_1a537c;
            case 0x1A5380u: goto label_1a5380;
            case 0x1A5384u: goto label_1a5384;
            case 0x1A5388u: goto label_1a5388;
            case 0x1A538Cu: goto label_1a538c;
            case 0x1A5390u: goto label_1a5390;
            case 0x1A5394u: goto label_1a5394;
            case 0x1A5398u: goto label_1a5398;
            case 0x1A539Cu: goto label_1a539c;
            case 0x1A53A0u: goto label_1a53a0;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53A8u: goto label_1a53a8;
            case 0x1A53ACu: goto label_1a53ac;
            case 0x1A53B0u: goto label_1a53b0;
            case 0x1A53B4u: goto label_1a53b4;
            case 0x1A53B8u: goto label_1a53b8;
            case 0x1A53BCu: goto label_1a53bc;
            case 0x1A53C0u: goto label_1a53c0;
            case 0x1A53C4u: goto label_1a53c4;
            case 0x1A53C8u: goto label_1a53c8;
            case 0x1A53CCu: goto label_1a53cc;
            case 0x1A53D0u: goto label_1a53d0;
            case 0x1A53D4u: goto label_1a53d4;
            case 0x1A53D8u: goto label_1a53d8;
            case 0x1A53DCu: goto label_1a53dc;
            case 0x1A53E0u: goto label_1a53e0;
            case 0x1A53E4u: goto label_1a53e4;
            case 0x1A53E8u: goto label_1a53e8;
            case 0x1A53ECu: goto label_1a53ec;
            case 0x1A53F0u: goto label_1a53f0;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A53F8u: goto label_1a53f8;
            case 0x1A53FCu: goto label_1a53fc;
            case 0x1A5400u: goto label_1a5400;
            case 0x1A5404u: goto label_1a5404;
            case 0x1A5408u: goto label_1a5408;
            case 0x1A540Cu: goto label_1a540c;
            case 0x1A5410u: goto label_1a5410;
            case 0x1A5414u: goto label_1a5414;
            case 0x1A5418u: goto label_1a5418;
            case 0x1A541Cu: goto label_1a541c;
            case 0x1A5420u: goto label_1a5420;
            case 0x1A5424u: goto label_1a5424;
            case 0x1A5428u: goto label_1a5428;
            case 0x1A542Cu: goto label_1a542c;
            case 0x1A5430u: goto label_1a5430;
            case 0x1A5434u: goto label_1a5434;
            case 0x1A5438u: goto label_1a5438;
            case 0x1A543Cu: goto label_1a543c;
            case 0x1A5440u: goto label_1a5440;
            case 0x1A5444u: goto label_1a5444;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A544Cu: goto label_1a544c;
            case 0x1A5450u: goto label_1a5450;
            case 0x1A5454u: goto label_1a5454;
            case 0x1A5458u: goto label_1a5458;
            case 0x1A545Cu: goto label_1a545c;
            case 0x1A5460u: goto label_1a5460;
            case 0x1A5464u: goto label_1a5464;
            case 0x1A5468u: goto label_1a5468;
            case 0x1A546Cu: goto label_1a546c;
            case 0x1A5470u: goto label_1a5470;
            case 0x1A5474u: goto label_1a5474;
            case 0x1A5478u: goto label_1a5478;
            case 0x1A547Cu: goto label_1a547c;
            case 0x1A5480u: goto label_1a5480;
            case 0x1A5484u: goto label_1a5484;
            case 0x1A5488u: goto label_1a5488;
            case 0x1A548Cu: goto label_1a548c;
            case 0x1A5490u: goto label_1a5490;
            case 0x1A5494u: goto label_1a5494;
            case 0x1A5498u: goto label_1a5498;
            case 0x1A549Cu: goto label_1a549c;
            case 0x1A54A0u: goto label_1a54a0;
            case 0x1A54A4u: goto label_1a54a4;
            case 0x1A54A8u: goto label_1a54a8;
            case 0x1A54ACu: goto label_1a54ac;
            case 0x1A54B0u: goto label_1a54b0;
            case 0x1A54B4u: goto label_1a54b4;
            case 0x1A54B8u: goto label_1a54b8;
            case 0x1A54BCu: goto label_1a54bc;
            case 0x1A54C0u: goto label_1a54c0;
            case 0x1A54C4u: goto label_1a54c4;
            case 0x1A54C8u: goto label_1a54c8;
            case 0x1A54CCu: goto label_1a54cc;
            case 0x1A54D0u: goto label_1a54d0;
            case 0x1A54D4u: goto label_1a54d4;
            case 0x1A54D8u: goto label_1a54d8;
            case 0x1A54DCu: goto label_1a54dc;
            case 0x1A54E0u: goto label_1a54e0;
            case 0x1A54E4u: goto label_1a54e4;
            case 0x1A54E8u: goto label_1a54e8;
            case 0x1A54ECu: goto label_1a54ec;
            case 0x1A54F0u: goto label_1a54f0;
            case 0x1A54F4u: goto label_1a54f4;
            case 0x1A54F8u: goto label_1a54f8;
            case 0x1A54FCu: goto label_1a54fc;
            case 0x1A5500u: goto label_1a5500;
            case 0x1A5504u: goto label_1a5504;
            case 0x1A5508u: goto label_1a5508;
            case 0x1A550Cu: goto label_1a550c;
            case 0x1A5510u: goto label_1a5510;
            case 0x1A5514u: goto label_1a5514;
            case 0x1A5518u: goto label_1a5518;
            case 0x1A551Cu: goto label_1a551c;
            case 0x1A5520u: goto label_1a5520;
            case 0x1A5524u: goto label_1a5524;
            case 0x1A5528u: goto label_1a5528;
            case 0x1A552Cu: goto label_1a552c;
            case 0x1A5530u: goto label_1a5530;
            case 0x1A5534u: goto label_1a5534;
            case 0x1A5538u: goto label_1a5538;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A5540u: goto label_1a5540;
            case 0x1A5544u: goto label_1a5544;
            case 0x1A5548u: goto label_1a5548;
            case 0x1A554Cu: goto label_1a554c;
            case 0x1A5550u: goto label_1a5550;
            case 0x1A5554u: goto label_1a5554;
            case 0x1A5558u: goto label_1a5558;
            case 0x1A555Cu: goto label_1a555c;
            case 0x1A5560u: goto label_1a5560;
            case 0x1A5564u: goto label_1a5564;
            case 0x1A5568u: goto label_1a5568;
            case 0x1A556Cu: goto label_1a556c;
            case 0x1A5570u: goto label_1a5570;
            case 0x1A5574u: goto label_1a5574;
            case 0x1A5578u: goto label_1a5578;
            case 0x1A557Cu: goto label_1a557c;
            case 0x1A5580u: goto label_1a5580;
            case 0x1A5584u: goto label_1a5584;
            case 0x1A5588u: goto label_1a5588;
            case 0x1A558Cu: goto label_1a558c;
            case 0x1A5590u: goto label_1a5590;
            case 0x1A5594u: goto label_1a5594;
            case 0x1A5598u: goto label_1a5598;
            case 0x1A559Cu: goto label_1a559c;
            case 0x1A55A0u: goto label_1a55a0;
            case 0x1A55A4u: goto label_1a55a4;
            case 0x1A55A8u: goto label_1a55a8;
            case 0x1A55ACu: goto label_1a55ac;
            case 0x1A55B0u: goto label_1a55b0;
            case 0x1A55B4u: goto label_1a55b4;
            case 0x1A55B8u: goto label_1a55b8;
            case 0x1A55BCu: goto label_1a55bc;
            case 0x1A55C0u: goto label_1a55c0;
            case 0x1A55C4u: goto label_1a55c4;
            case 0x1A55C8u: goto label_1a55c8;
            case 0x1A55CCu: goto label_1a55cc;
            case 0x1A55D0u: goto label_1a55d0;
            case 0x1A55D4u: goto label_1a55d4;
            case 0x1A55D8u: goto label_1a55d8;
            case 0x1A55DCu: goto label_1a55dc;
            case 0x1A55E0u: goto label_1a55e0;
            case 0x1A55E4u: goto label_1a55e4;
            case 0x1A55E8u: goto label_1a55e8;
            case 0x1A55ECu: goto label_1a55ec;
            case 0x1A55F0u: goto label_1a55f0;
            case 0x1A55F4u: goto label_1a55f4;
            case 0x1A55F8u: goto label_1a55f8;
            case 0x1A55FCu: goto label_1a55fc;
            case 0x1A5600u: goto label_1a5600;
            case 0x1A5604u: goto label_1a5604;
            case 0x1A5608u: goto label_1a5608;
            case 0x1A560Cu: goto label_1a560c;
            case 0x1A5610u: goto label_1a5610;
            case 0x1A5614u: goto label_1a5614;
            case 0x1A5618u: goto label_1a5618;
            case 0x1A561Cu: goto label_1a561c;
            case 0x1A5620u: goto label_1a5620;
            case 0x1A5624u: goto label_1a5624;
            case 0x1A5628u: goto label_1a5628;
            case 0x1A562Cu: goto label_1a562c;
            case 0x1A5630u: goto label_1a5630;
            case 0x1A5634u: goto label_1a5634;
            case 0x1A5638u: goto label_1a5638;
            case 0x1A563Cu: goto label_1a563c;
            case 0x1A5640u: goto label_1a5640;
            case 0x1A5644u: goto label_1a5644;
            case 0x1A5648u: goto label_1a5648;
            case 0x1A564Cu: goto label_1a564c;
            case 0x1A5650u: goto label_1a5650;
            case 0x1A5654u: goto label_1a5654;
            case 0x1A5658u: goto label_1a5658;
            case 0x1A565Cu: goto label_1a565c;
            case 0x1A5660u: goto label_1a5660;
            case 0x1A5664u: goto label_1a5664;
            case 0x1A5668u: goto label_1a5668;
            case 0x1A566Cu: goto label_1a566c;
            case 0x1A5670u: goto label_1a5670;
            case 0x1A5674u: goto label_1a5674;
            case 0x1A5678u: goto label_1a5678;
            case 0x1A567Cu: goto label_1a567c;
            case 0x1A5680u: goto label_1a5680;
            case 0x1A5684u: goto label_1a5684;
            case 0x1A5688u: goto label_1a5688;
            case 0x1A568Cu: goto label_1a568c;
            case 0x1A5690u: goto label_1a5690;
            case 0x1A5694u: goto label_1a5694;
            case 0x1A5698u: goto label_1a5698;
            case 0x1A569Cu: goto label_1a569c;
            case 0x1A56A0u: goto label_1a56a0;
            case 0x1A56A4u: goto label_1a56a4;
            case 0x1A56A8u: goto label_1a56a8;
            case 0x1A56ACu: goto label_1a56ac;
            case 0x1A56B0u: goto label_1a56b0;
            case 0x1A56B4u: goto label_1a56b4;
            case 0x1A56B8u: goto label_1a56b8;
            case 0x1A56BCu: goto label_1a56bc;
            case 0x1A56C0u: goto label_1a56c0;
            case 0x1A56C4u: goto label_1a56c4;
            case 0x1A56C8u: goto label_1a56c8;
            case 0x1A56CCu: goto label_1a56cc;
            case 0x1A56D0u: goto label_1a56d0;
            case 0x1A56D4u: goto label_1a56d4;
            case 0x1A56D8u: goto label_1a56d8;
            case 0x1A56DCu: goto label_1a56dc;
            case 0x1A56E0u: goto label_1a56e0;
            case 0x1A56E4u: goto label_1a56e4;
            case 0x1A56E8u: goto label_1a56e8;
            case 0x1A56ECu: goto label_1a56ec;
            case 0x1A56F0u: goto label_1a56f0;
            case 0x1A56F4u: goto label_1a56f4;
            case 0x1A56F8u: goto label_1a56f8;
            case 0x1A56FCu: goto label_1a56fc;
            case 0x1A5700u: goto label_1a5700;
            case 0x1A5704u: goto label_1a5704;
            case 0x1A5708u: goto label_1a5708;
            case 0x1A570Cu: goto label_1a570c;
            case 0x1A5710u: goto label_1a5710;
            case 0x1A5714u: goto label_1a5714;
            case 0x1A5718u: goto label_1a5718;
            case 0x1A571Cu: goto label_1a571c;
            case 0x1A5720u: goto label_1a5720;
            case 0x1A5724u: goto label_1a5724;
            case 0x1A5728u: goto label_1a5728;
            case 0x1A572Cu: goto label_1a572c;
            case 0x1A5730u: goto label_1a5730;
            case 0x1A5734u: goto label_1a5734;
            case 0x1A5738u: goto label_1a5738;
            case 0x1A573Cu: goto label_1a573c;
            case 0x1A5740u: goto label_1a5740;
            case 0x1A5744u: goto label_1a5744;
            case 0x1A5748u: goto label_1a5748;
            case 0x1A574Cu: goto label_1a574c;
            case 0x1A5750u: goto label_1a5750;
            case 0x1A5754u: goto label_1a5754;
            case 0x1A5758u: goto label_1a5758;
            case 0x1A575Cu: goto label_1a575c;
            case 0x1A5760u: goto label_1a5760;
            case 0x1A5764u: goto label_1a5764;
            case 0x1A5768u: goto label_1a5768;
            case 0x1A576Cu: goto label_1a576c;
            case 0x1A5770u: goto label_1a5770;
            case 0x1A5774u: goto label_1a5774;
            case 0x1A5778u: goto label_1a5778;
            case 0x1A577Cu: goto label_1a577c;
            case 0x1A5780u: goto label_1a5780;
            case 0x1A5784u: goto label_1a5784;
            case 0x1A5788u: goto label_1a5788;
            case 0x1A578Cu: goto label_1a578c;
            case 0x1A5790u: goto label_1a5790;
            case 0x1A5794u: goto label_1a5794;
            case 0x1A5798u: goto label_1a5798;
            case 0x1A579Cu: goto label_1a579c;
            case 0x1A57A0u: goto label_1a57a0;
            case 0x1A57A4u: goto label_1a57a4;
            case 0x1A57A8u: goto label_1a57a8;
            case 0x1A57ACu: goto label_1a57ac;
            case 0x1A57B0u: goto label_1a57b0;
            case 0x1A57B4u: goto label_1a57b4;
            case 0x1A57B8u: goto label_1a57b8;
            case 0x1A57BCu: goto label_1a57bc;
            case 0x1A57C0u: goto label_1a57c0;
            case 0x1A57C4u: goto label_1a57c4;
            case 0x1A57C8u: goto label_1a57c8;
            case 0x1A57CCu: goto label_1a57cc;
            case 0x1A57D0u: goto label_1a57d0;
            case 0x1A57D4u: goto label_1a57d4;
            case 0x1A57D8u: goto label_1a57d8;
            case 0x1A57DCu: goto label_1a57dc;
            case 0x1A57E0u: goto label_1a57e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A57A4u; }
            if (ctx->pc != 0x1A57A4u) { return; }
        }
    }
    ctx->pc = 0x1A57A4u;
label_1a57a4:
    // 0x1a57a4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a57a8:
    if (ctx->pc == 0x1A57A8u) {
        ctx->pc = 0x1A57ACu;
        goto label_1a57ac;
    }
    ctx->pc = 0x1A57A4u;
    {
        const bool branch_taken_0x1a57a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a57a4) {
            ctx->pc = 0x1A57D0u;
            goto label_1a57d0;
        }
    }
    ctx->pc = 0x1A57ACu;
label_1a57ac:
    // 0x1a57ac: 0x0  nop
    ctx->pc = 0x1a57acu;
    // NOP
label_1a57b0:
    // 0x1a57b0: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a57b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_1a57b4:
    // 0x1a57b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1a57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a57b8:
    // 0x1a57b8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1a57b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1a57bc:
    // 0x1a57bc: 0x24c642e0  addiu       $a2, $a2, 0x42E0
    ctx->pc = 0x1a57bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17120));
label_1a57c0:
    // 0x1a57c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1a57c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a57c4:
    // 0x1a57c4: 0xc053ca4  jal         func_14F290
label_1a57c8:
    if (ctx->pc == 0x1A57C8u) {
        ctx->pc = 0x1A57C8u;
            // 0x1a57c8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A57CCu;
        goto label_1a57cc;
    }
    ctx->pc = 0x1A57C4u;
    SET_GPR_U32(ctx, 31, 0x1A57CCu);
    ctx->pc = 0x1A57C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57C4u;
            // 0x1a57c8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57CCu; }
        if (ctx->pc != 0x1A57CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A57CCu; }
        if (ctx->pc != 0x1A57CCu) { return; }
    }
    ctx->pc = 0x1A57CCu;
label_1a57cc:
    // 0x1a57cc: 0x0  nop
    ctx->pc = 0x1a57ccu;
    // NOP
label_1a57d0:
    // 0x1a57d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a57d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a57d4:
    // 0x1a57d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a57d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a57d8:
    // 0x1a57d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a57d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a57dc:
    // 0x1a57dc: 0x3e00008  jr          $ra
label_1a57e0:
    if (ctx->pc == 0x1A57E0u) {
        ctx->pc = 0x1A57E0u;
            // 0x1a57e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A57E4u;
        goto label_fallthrough_0x1a57dc;
    }
    ctx->pc = 0x1A57DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A57DCu;
            // 0x1a57e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4550u: goto label_1a4550;
            case 0x1A4554u: goto label_1a4554;
            case 0x1A4558u: goto label_1a4558;
            case 0x1A455Cu: goto label_1a455c;
            case 0x1A4560u: goto label_1a4560;
            case 0x1A4564u: goto label_1a4564;
            case 0x1A4568u: goto label_1a4568;
            case 0x1A456Cu: goto label_1a456c;
            case 0x1A4570u: goto label_1a4570;
            case 0x1A4574u: goto label_1a4574;
            case 0x1A4578u: goto label_1a4578;
            case 0x1A457Cu: goto label_1a457c;
            case 0x1A4580u: goto label_1a4580;
            case 0x1A4584u: goto label_1a4584;
            case 0x1A4588u: goto label_1a4588;
            case 0x1A458Cu: goto label_1a458c;
            case 0x1A4590u: goto label_1a4590;
            case 0x1A4594u: goto label_1a4594;
            case 0x1A4598u: goto label_1a4598;
            case 0x1A459Cu: goto label_1a459c;
            case 0x1A45A0u: goto label_1a45a0;
            case 0x1A45A4u: goto label_1a45a4;
            case 0x1A45A8u: goto label_1a45a8;
            case 0x1A45ACu: goto label_1a45ac;
            case 0x1A45B0u: goto label_1a45b0;
            case 0x1A45B4u: goto label_1a45b4;
            case 0x1A45B8u: goto label_1a45b8;
            case 0x1A45BCu: goto label_1a45bc;
            case 0x1A45C0u: goto label_1a45c0;
            case 0x1A45C4u: goto label_1a45c4;
            case 0x1A45C8u: goto label_1a45c8;
            case 0x1A45CCu: goto label_1a45cc;
            case 0x1A45D0u: goto label_1a45d0;
            case 0x1A45D4u: goto label_1a45d4;
            case 0x1A45D8u: goto label_1a45d8;
            case 0x1A45DCu: goto label_1a45dc;
            case 0x1A45E0u: goto label_1a45e0;
            case 0x1A45E4u: goto label_1a45e4;
            case 0x1A45E8u: goto label_1a45e8;
            case 0x1A45ECu: goto label_1a45ec;
            case 0x1A45F0u: goto label_1a45f0;
            case 0x1A45F4u: goto label_1a45f4;
            case 0x1A45F8u: goto label_1a45f8;
            case 0x1A45FCu: goto label_1a45fc;
            case 0x1A4600u: goto label_1a4600;
            case 0x1A4604u: goto label_1a4604;
            case 0x1A4608u: goto label_1a4608;
            case 0x1A460Cu: goto label_1a460c;
            case 0x1A4610u: goto label_1a4610;
            case 0x1A4614u: goto label_1a4614;
            case 0x1A4618u: goto label_1a4618;
            case 0x1A461Cu: goto label_1a461c;
            case 0x1A4620u: goto label_1a4620;
            case 0x1A4624u: goto label_1a4624;
            case 0x1A4628u: goto label_1a4628;
            case 0x1A462Cu: goto label_1a462c;
            case 0x1A4630u: goto label_1a4630;
            case 0x1A4634u: goto label_1a4634;
            case 0x1A4638u: goto label_1a4638;
            case 0x1A463Cu: goto label_1a463c;
            case 0x1A4640u: goto label_1a4640;
            case 0x1A4644u: goto label_1a4644;
            case 0x1A4648u: goto label_1a4648;
            case 0x1A464Cu: goto label_1a464c;
            case 0x1A4650u: goto label_1a4650;
            case 0x1A4654u: goto label_1a4654;
            case 0x1A4658u: goto label_1a4658;
            case 0x1A465Cu: goto label_1a465c;
            case 0x1A4660u: goto label_1a4660;
            case 0x1A4664u: goto label_1a4664;
            case 0x1A4668u: goto label_1a4668;
            case 0x1A466Cu: goto label_1a466c;
            case 0x1A4670u: goto label_1a4670;
            case 0x1A4674u: goto label_1a4674;
            case 0x1A4678u: goto label_1a4678;
            case 0x1A467Cu: goto label_1a467c;
            case 0x1A4680u: goto label_1a4680;
            case 0x1A4684u: goto label_1a4684;
            case 0x1A4688u: goto label_1a4688;
            case 0x1A468Cu: goto label_1a468c;
            case 0x1A4690u: goto label_1a4690;
            case 0x1A4694u: goto label_1a4694;
            case 0x1A4698u: goto label_1a4698;
            case 0x1A469Cu: goto label_1a469c;
            case 0x1A46A0u: goto label_1a46a0;
            case 0x1A46A4u: goto label_1a46a4;
            case 0x1A46A8u: goto label_1a46a8;
            case 0x1A46ACu: goto label_1a46ac;
            case 0x1A46B0u: goto label_1a46b0;
            case 0x1A46B4u: goto label_1a46b4;
            case 0x1A46B8u: goto label_1a46b8;
            case 0x1A46BCu: goto label_1a46bc;
            case 0x1A46C0u: goto label_1a46c0;
            case 0x1A46C4u: goto label_1a46c4;
            case 0x1A46C8u: goto label_1a46c8;
            case 0x1A46CCu: goto label_1a46cc;
            case 0x1A46D0u: goto label_1a46d0;
            case 0x1A46D4u: goto label_1a46d4;
            case 0x1A46D8u: goto label_1a46d8;
            case 0x1A46DCu: goto label_1a46dc;
            case 0x1A46E0u: goto label_1a46e0;
            case 0x1A46E4u: goto label_1a46e4;
            case 0x1A46E8u: goto label_1a46e8;
            case 0x1A46ECu: goto label_1a46ec;
            case 0x1A46F0u: goto label_1a46f0;
            case 0x1A46F4u: goto label_1a46f4;
            case 0x1A46F8u: goto label_1a46f8;
            case 0x1A46FCu: goto label_1a46fc;
            case 0x1A4700u: goto label_1a4700;
            case 0x1A4704u: goto label_1a4704;
            case 0x1A4708u: goto label_1a4708;
            case 0x1A470Cu: goto label_1a470c;
            case 0x1A4710u: goto label_1a4710;
            case 0x1A4714u: goto label_1a4714;
            case 0x1A4718u: goto label_1a4718;
            case 0x1A471Cu: goto label_1a471c;
            case 0x1A4720u: goto label_1a4720;
            case 0x1A4724u: goto label_1a4724;
            case 0x1A4728u: goto label_1a4728;
            case 0x1A472Cu: goto label_1a472c;
            case 0x1A4730u: goto label_1a4730;
            case 0x1A4734u: goto label_1a4734;
            case 0x1A4738u: goto label_1a4738;
            case 0x1A473Cu: goto label_1a473c;
            case 0x1A4740u: goto label_1a4740;
            case 0x1A4744u: goto label_1a4744;
            case 0x1A4748u: goto label_1a4748;
            case 0x1A474Cu: goto label_1a474c;
            case 0x1A4750u: goto label_1a4750;
            case 0x1A4754u: goto label_1a4754;
            case 0x1A4758u: goto label_1a4758;
            case 0x1A475Cu: goto label_1a475c;
            case 0x1A4760u: goto label_1a4760;
            case 0x1A4764u: goto label_1a4764;
            case 0x1A4768u: goto label_1a4768;
            case 0x1A476Cu: goto label_1a476c;
            case 0x1A4770u: goto label_1a4770;
            case 0x1A4774u: goto label_1a4774;
            case 0x1A4778u: goto label_1a4778;
            case 0x1A477Cu: goto label_1a477c;
            case 0x1A4780u: goto label_1a4780;
            case 0x1A4784u: goto label_1a4784;
            case 0x1A4788u: goto label_1a4788;
            case 0x1A478Cu: goto label_1a478c;
            case 0x1A4790u: goto label_1a4790;
            case 0x1A4794u: goto label_1a4794;
            case 0x1A4798u: goto label_1a4798;
            case 0x1A479Cu: goto label_1a479c;
            case 0x1A47A0u: goto label_1a47a0;
            case 0x1A47A4u: goto label_1a47a4;
            case 0x1A47A8u: goto label_1a47a8;
            case 0x1A47ACu: goto label_1a47ac;
            case 0x1A47B0u: goto label_1a47b0;
            case 0x1A47B4u: goto label_1a47b4;
            case 0x1A47B8u: goto label_1a47b8;
            case 0x1A47BCu: goto label_1a47bc;
            case 0x1A47C0u: goto label_1a47c0;
            case 0x1A47C4u: goto label_1a47c4;
            case 0x1A47C8u: goto label_1a47c8;
            case 0x1A47CCu: goto label_1a47cc;
            case 0x1A47D0u: goto label_1a47d0;
            case 0x1A47D4u: goto label_1a47d4;
            case 0x1A47D8u: goto label_1a47d8;
            case 0x1A47DCu: goto label_1a47dc;
            case 0x1A47E0u: goto label_1a47e0;
            case 0x1A47E4u: goto label_1a47e4;
            case 0x1A47E8u: goto label_1a47e8;
            case 0x1A47ECu: goto label_1a47ec;
            case 0x1A47F0u: goto label_1a47f0;
            case 0x1A47F4u: goto label_1a47f4;
            case 0x1A47F8u: goto label_1a47f8;
            case 0x1A47FCu: goto label_1a47fc;
            case 0x1A4800u: goto label_1a4800;
            case 0x1A4804u: goto label_1a4804;
            case 0x1A4808u: goto label_1a4808;
            case 0x1A480Cu: goto label_1a480c;
            case 0x1A4810u: goto label_1a4810;
            case 0x1A4814u: goto label_1a4814;
            case 0x1A4818u: goto label_1a4818;
            case 0x1A481Cu: goto label_1a481c;
            case 0x1A4820u: goto label_1a4820;
            case 0x1A4824u: goto label_1a4824;
            case 0x1A4828u: goto label_1a4828;
            case 0x1A482Cu: goto label_1a482c;
            case 0x1A4830u: goto label_1a4830;
            case 0x1A4834u: goto label_1a4834;
            case 0x1A4838u: goto label_1a4838;
            case 0x1A483Cu: goto label_1a483c;
            case 0x1A4840u: goto label_1a4840;
            case 0x1A4844u: goto label_1a4844;
            case 0x1A4848u: goto label_1a4848;
            case 0x1A484Cu: goto label_1a484c;
            case 0x1A4850u: goto label_1a4850;
            case 0x1A4854u: goto label_1a4854;
            case 0x1A4858u: goto label_1a4858;
            case 0x1A485Cu: goto label_1a485c;
            case 0x1A4860u: goto label_1a4860;
            case 0x1A4864u: goto label_1a4864;
            case 0x1A4868u: goto label_1a4868;
            case 0x1A486Cu: goto label_1a486c;
            case 0x1A4870u: goto label_1a4870;
            case 0x1A4874u: goto label_1a4874;
            case 0x1A4878u: goto label_1a4878;
            case 0x1A487Cu: goto label_1a487c;
            case 0x1A4880u: goto label_1a4880;
            case 0x1A4884u: goto label_1a4884;
            case 0x1A4888u: goto label_1a4888;
            case 0x1A488Cu: goto label_1a488c;
            case 0x1A4890u: goto label_1a4890;
            case 0x1A4894u: goto label_1a4894;
            case 0x1A4898u: goto label_1a4898;
            case 0x1A489Cu: goto label_1a489c;
            case 0x1A48A0u: goto label_1a48a0;
            case 0x1A48A4u: goto label_1a48a4;
            case 0x1A48A8u: goto label_1a48a8;
            case 0x1A48ACu: goto label_1a48ac;
            case 0x1A48B0u: goto label_1a48b0;
            case 0x1A48B4u: goto label_1a48b4;
            case 0x1A48B8u: goto label_1a48b8;
            case 0x1A48BCu: goto label_1a48bc;
            case 0x1A48C0u: goto label_1a48c0;
            case 0x1A48C4u: goto label_1a48c4;
            case 0x1A48C8u: goto label_1a48c8;
            case 0x1A48CCu: goto label_1a48cc;
            case 0x1A48D0u: goto label_1a48d0;
            case 0x1A48D4u: goto label_1a48d4;
            case 0x1A48D8u: goto label_1a48d8;
            case 0x1A48DCu: goto label_1a48dc;
            case 0x1A48E0u: goto label_1a48e0;
            case 0x1A48E4u: goto label_1a48e4;
            case 0x1A48E8u: goto label_1a48e8;
            case 0x1A48ECu: goto label_1a48ec;
            case 0x1A48F0u: goto label_1a48f0;
            case 0x1A48F4u: goto label_1a48f4;
            case 0x1A48F8u: goto label_1a48f8;
            case 0x1A48FCu: goto label_1a48fc;
            case 0x1A4900u: goto label_1a4900;
            case 0x1A4904u: goto label_1a4904;
            case 0x1A4908u: goto label_1a4908;
            case 0x1A490Cu: goto label_1a490c;
            case 0x1A4910u: goto label_1a4910;
            case 0x1A4914u: goto label_1a4914;
            case 0x1A4918u: goto label_1a4918;
            case 0x1A491Cu: goto label_1a491c;
            case 0x1A4920u: goto label_1a4920;
            case 0x1A4924u: goto label_1a4924;
            case 0x1A4928u: goto label_1a4928;
            case 0x1A492Cu: goto label_1a492c;
            case 0x1A4930u: goto label_1a4930;
            case 0x1A4934u: goto label_1a4934;
            case 0x1A4938u: goto label_1a4938;
            case 0x1A493Cu: goto label_1a493c;
            case 0x1A4940u: goto label_1a4940;
            case 0x1A4944u: goto label_1a4944;
            case 0x1A4948u: goto label_1a4948;
            case 0x1A494Cu: goto label_1a494c;
            case 0x1A4950u: goto label_1a4950;
            case 0x1A4954u: goto label_1a4954;
            case 0x1A4958u: goto label_1a4958;
            case 0x1A495Cu: goto label_1a495c;
            case 0x1A4960u: goto label_1a4960;
            case 0x1A4964u: goto label_1a4964;
            case 0x1A4968u: goto label_1a4968;
            case 0x1A496Cu: goto label_1a496c;
            case 0x1A4970u: goto label_1a4970;
            case 0x1A4974u: goto label_1a4974;
            case 0x1A4978u: goto label_1a4978;
            case 0x1A497Cu: goto label_1a497c;
            case 0x1A4980u: goto label_1a4980;
            case 0x1A4984u: goto label_1a4984;
            case 0x1A4988u: goto label_1a4988;
            case 0x1A498Cu: goto label_1a498c;
            case 0x1A4990u: goto label_1a4990;
            case 0x1A4994u: goto label_1a4994;
            case 0x1A4998u: goto label_1a4998;
            case 0x1A499Cu: goto label_1a499c;
            case 0x1A49A0u: goto label_1a49a0;
            case 0x1A49A4u: goto label_1a49a4;
            case 0x1A49A8u: goto label_1a49a8;
            case 0x1A49ACu: goto label_1a49ac;
            case 0x1A49B0u: goto label_1a49b0;
            case 0x1A49B4u: goto label_1a49b4;
            case 0x1A49B8u: goto label_1a49b8;
            case 0x1A49BCu: goto label_1a49bc;
            case 0x1A49C0u: goto label_1a49c0;
            case 0x1A49C4u: goto label_1a49c4;
            case 0x1A49C8u: goto label_1a49c8;
            case 0x1A49CCu: goto label_1a49cc;
            case 0x1A49D0u: goto label_1a49d0;
            case 0x1A49D4u: goto label_1a49d4;
            case 0x1A49D8u: goto label_1a49d8;
            case 0x1A49DCu: goto label_1a49dc;
            case 0x1A49E0u: goto label_1a49e0;
            case 0x1A49E4u: goto label_1a49e4;
            case 0x1A49E8u: goto label_1a49e8;
            case 0x1A49ECu: goto label_1a49ec;
            case 0x1A49F0u: goto label_1a49f0;
            case 0x1A49F4u: goto label_1a49f4;
            case 0x1A49F8u: goto label_1a49f8;
            case 0x1A49FCu: goto label_1a49fc;
            case 0x1A4A00u: goto label_1a4a00;
            case 0x1A4A04u: goto label_1a4a04;
            case 0x1A4A08u: goto label_1a4a08;
            case 0x1A4A0Cu: goto label_1a4a0c;
            case 0x1A4A10u: goto label_1a4a10;
            case 0x1A4A14u: goto label_1a4a14;
            case 0x1A4A18u: goto label_1a4a18;
            case 0x1A4A1Cu: goto label_1a4a1c;
            case 0x1A4A20u: goto label_1a4a20;
            case 0x1A4A24u: goto label_1a4a24;
            case 0x1A4A28u: goto label_1a4a28;
            case 0x1A4A2Cu: goto label_1a4a2c;
            case 0x1A4A30u: goto label_1a4a30;
            case 0x1A4A34u: goto label_1a4a34;
            case 0x1A4A38u: goto label_1a4a38;
            case 0x1A4A3Cu: goto label_1a4a3c;
            case 0x1A4A40u: goto label_1a4a40;
            case 0x1A4A44u: goto label_1a4a44;
            case 0x1A4A48u: goto label_1a4a48;
            case 0x1A4A4Cu: goto label_1a4a4c;
            case 0x1A4A50u: goto label_1a4a50;
            case 0x1A4A54u: goto label_1a4a54;
            case 0x1A4A58u: goto label_1a4a58;
            case 0x1A4A5Cu: goto label_1a4a5c;
            case 0x1A4A60u: goto label_1a4a60;
            case 0x1A4A64u: goto label_1a4a64;
            case 0x1A4A68u: goto label_1a4a68;
            case 0x1A4A6Cu: goto label_1a4a6c;
            case 0x1A4A70u: goto label_1a4a70;
            case 0x1A4A74u: goto label_1a4a74;
            case 0x1A4A78u: goto label_1a4a78;
            case 0x1A4A7Cu: goto label_1a4a7c;
            case 0x1A4A80u: goto label_1a4a80;
            case 0x1A4A84u: goto label_1a4a84;
            case 0x1A4A88u: goto label_1a4a88;
            case 0x1A4A8Cu: goto label_1a4a8c;
            case 0x1A4A90u: goto label_1a4a90;
            case 0x1A4A94u: goto label_1a4a94;
            case 0x1A4A98u: goto label_1a4a98;
            case 0x1A4A9Cu: goto label_1a4a9c;
            case 0x1A4AA0u: goto label_1a4aa0;
            case 0x1A4AA4u: goto label_1a4aa4;
            case 0x1A4AA8u: goto label_1a4aa8;
            case 0x1A4AACu: goto label_1a4aac;
            case 0x1A4AB0u: goto label_1a4ab0;
            case 0x1A4AB4u: goto label_1a4ab4;
            case 0x1A4AB8u: goto label_1a4ab8;
            case 0x1A4ABCu: goto label_1a4abc;
            case 0x1A4AC0u: goto label_1a4ac0;
            case 0x1A4AC4u: goto label_1a4ac4;
            case 0x1A4AC8u: goto label_1a4ac8;
            case 0x1A4ACCu: goto label_1a4acc;
            case 0x1A4AD0u: goto label_1a4ad0;
            case 0x1A4AD4u: goto label_1a4ad4;
            case 0x1A4AD8u: goto label_1a4ad8;
            case 0x1A4ADCu: goto label_1a4adc;
            case 0x1A4AE0u: goto label_1a4ae0;
            case 0x1A4AE4u: goto label_1a4ae4;
            case 0x1A4AE8u: goto label_1a4ae8;
            case 0x1A4AECu: goto label_1a4aec;
            case 0x1A4AF0u: goto label_1a4af0;
            case 0x1A4AF4u: goto label_1a4af4;
            case 0x1A4AF8u: goto label_1a4af8;
            case 0x1A4AFCu: goto label_1a4afc;
            case 0x1A4B00u: goto label_1a4b00;
            case 0x1A4B04u: goto label_1a4b04;
            case 0x1A4B08u: goto label_1a4b08;
            case 0x1A4B0Cu: goto label_1a4b0c;
            case 0x1A4B10u: goto label_1a4b10;
            case 0x1A4B14u: goto label_1a4b14;
            case 0x1A4B18u: goto label_1a4b18;
            case 0x1A4B1Cu: goto label_1a4b1c;
            case 0x1A4B20u: goto label_1a4b20;
            case 0x1A4B24u: goto label_1a4b24;
            case 0x1A4B28u: goto label_1a4b28;
            case 0x1A4B2Cu: goto label_1a4b2c;
            case 0x1A4B30u: goto label_1a4b30;
            case 0x1A4B34u: goto label_1a4b34;
            case 0x1A4B38u: goto label_1a4b38;
            case 0x1A4B3Cu: goto label_1a4b3c;
            case 0x1A4B40u: goto label_1a4b40;
            case 0x1A4B44u: goto label_1a4b44;
            case 0x1A4B48u: goto label_1a4b48;
            case 0x1A4B4Cu: goto label_1a4b4c;
            case 0x1A4B50u: goto label_1a4b50;
            case 0x1A4B54u: goto label_1a4b54;
            case 0x1A4B58u: goto label_1a4b58;
            case 0x1A4B5Cu: goto label_1a4b5c;
            case 0x1A4B60u: goto label_1a4b60;
            case 0x1A4B64u: goto label_1a4b64;
            case 0x1A4B68u: goto label_1a4b68;
            case 0x1A4B6Cu: goto label_1a4b6c;
            case 0x1A4B70u: goto label_1a4b70;
            case 0x1A4B74u: goto label_1a4b74;
            case 0x1A4B78u: goto label_1a4b78;
            case 0x1A4B7Cu: goto label_1a4b7c;
            case 0x1A4B80u: goto label_1a4b80;
            case 0x1A4B84u: goto label_1a4b84;
            case 0x1A4B88u: goto label_1a4b88;
            case 0x1A4B8Cu: goto label_1a4b8c;
            case 0x1A4B90u: goto label_1a4b90;
            case 0x1A4B94u: goto label_1a4b94;
            case 0x1A4B98u: goto label_1a4b98;
            case 0x1A4B9Cu: goto label_1a4b9c;
            case 0x1A4BA0u: goto label_1a4ba0;
            case 0x1A4BA4u: goto label_1a4ba4;
            case 0x1A4BA8u: goto label_1a4ba8;
            case 0x1A4BACu: goto label_1a4bac;
            case 0x1A4BB0u: goto label_1a4bb0;
            case 0x1A4BB4u: goto label_1a4bb4;
            case 0x1A4BB8u: goto label_1a4bb8;
            case 0x1A4BBCu: goto label_1a4bbc;
            case 0x1A4BC0u: goto label_1a4bc0;
            case 0x1A4BC4u: goto label_1a4bc4;
            case 0x1A4BC8u: goto label_1a4bc8;
            case 0x1A4BCCu: goto label_1a4bcc;
            case 0x1A4BD0u: goto label_1a4bd0;
            case 0x1A4BD4u: goto label_1a4bd4;
            case 0x1A4BD8u: goto label_1a4bd8;
            case 0x1A4BDCu: goto label_1a4bdc;
            case 0x1A4BE0u: goto label_1a4be0;
            case 0x1A4BE4u: goto label_1a4be4;
            case 0x1A4BE8u: goto label_1a4be8;
            case 0x1A4BECu: goto label_1a4bec;
            case 0x1A4BF0u: goto label_1a4bf0;
            case 0x1A4BF4u: goto label_1a4bf4;
            case 0x1A4BF8u: goto label_1a4bf8;
            case 0x1A4BFCu: goto label_1a4bfc;
            case 0x1A4C00u: goto label_1a4c00;
            case 0x1A4C04u: goto label_1a4c04;
            case 0x1A4C08u: goto label_1a4c08;
            case 0x1A4C0Cu: goto label_1a4c0c;
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C14u: goto label_1a4c14;
            case 0x1A4C18u: goto label_1a4c18;
            case 0x1A4C1Cu: goto label_1a4c1c;
            case 0x1A4C20u: goto label_1a4c20;
            case 0x1A4C24u: goto label_1a4c24;
            case 0x1A4C28u: goto label_1a4c28;
            case 0x1A4C2Cu: goto label_1a4c2c;
            case 0x1A4C30u: goto label_1a4c30;
            case 0x1A4C34u: goto label_1a4c34;
            case 0x1A4C38u: goto label_1a4c38;
            case 0x1A4C3Cu: goto label_1a4c3c;
            case 0x1A4C40u: goto label_1a4c40;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C48u: goto label_1a4c48;
            case 0x1A4C4Cu: goto label_1a4c4c;
            case 0x1A4C50u: goto label_1a4c50;
            case 0x1A4C54u: goto label_1a4c54;
            case 0x1A4C58u: goto label_1a4c58;
            case 0x1A4C5Cu: goto label_1a4c5c;
            case 0x1A4C60u: goto label_1a4c60;
            case 0x1A4C64u: goto label_1a4c64;
            case 0x1A4C68u: goto label_1a4c68;
            case 0x1A4C6Cu: goto label_1a4c6c;
            case 0x1A4C70u: goto label_1a4c70;
            case 0x1A4C74u: goto label_1a4c74;
            case 0x1A4C78u: goto label_1a4c78;
            case 0x1A4C7Cu: goto label_1a4c7c;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4C84u: goto label_1a4c84;
            case 0x1A4C88u: goto label_1a4c88;
            case 0x1A4C8Cu: goto label_1a4c8c;
            case 0x1A4C90u: goto label_1a4c90;
            case 0x1A4C94u: goto label_1a4c94;
            case 0x1A4C98u: goto label_1a4c98;
            case 0x1A4C9Cu: goto label_1a4c9c;
            case 0x1A4CA0u: goto label_1a4ca0;
            case 0x1A4CA4u: goto label_1a4ca4;
            case 0x1A4CA8u: goto label_1a4ca8;
            case 0x1A4CACu: goto label_1a4cac;
            case 0x1A4CB0u: goto label_1a4cb0;
            case 0x1A4CB4u: goto label_1a4cb4;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4CBCu: goto label_1a4cbc;
            case 0x1A4CC0u: goto label_1a4cc0;
            case 0x1A4CC4u: goto label_1a4cc4;
            case 0x1A4CC8u: goto label_1a4cc8;
            case 0x1A4CCCu: goto label_1a4ccc;
            case 0x1A4CD0u: goto label_1a4cd0;
            case 0x1A4CD4u: goto label_1a4cd4;
            case 0x1A4CD8u: goto label_1a4cd8;
            case 0x1A4CDCu: goto label_1a4cdc;
            case 0x1A4CE0u: goto label_1a4ce0;
            case 0x1A4CE4u: goto label_1a4ce4;
            case 0x1A4CE8u: goto label_1a4ce8;
            case 0x1A4CECu: goto label_1a4cec;
            case 0x1A4CF0u: goto label_1a4cf0;
            case 0x1A4CF4u: goto label_1a4cf4;
            case 0x1A4CF8u: goto label_1a4cf8;
            case 0x1A4CFCu: goto label_1a4cfc;
            case 0x1A4D00u: goto label_1a4d00;
            case 0x1A4D04u: goto label_1a4d04;
            case 0x1A4D08u: goto label_1a4d08;
            case 0x1A4D0Cu: goto label_1a4d0c;
            case 0x1A4D10u: goto label_1a4d10;
            case 0x1A4D14u: goto label_1a4d14;
            case 0x1A4D18u: goto label_1a4d18;
            case 0x1A4D1Cu: goto label_1a4d1c;
            case 0x1A4D20u: goto label_1a4d20;
            case 0x1A4D24u: goto label_1a4d24;
            case 0x1A4D28u: goto label_1a4d28;
            case 0x1A4D2Cu: goto label_1a4d2c;
            case 0x1A4D30u: goto label_1a4d30;
            case 0x1A4D34u: goto label_1a4d34;
            case 0x1A4D38u: goto label_1a4d38;
            case 0x1A4D3Cu: goto label_1a4d3c;
            case 0x1A4D40u: goto label_1a4d40;
            case 0x1A4D44u: goto label_1a4d44;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D4Cu: goto label_1a4d4c;
            case 0x1A4D50u: goto label_1a4d50;
            case 0x1A4D54u: goto label_1a4d54;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D5Cu: goto label_1a4d5c;
            case 0x1A4D60u: goto label_1a4d60;
            case 0x1A4D64u: goto label_1a4d64;
            case 0x1A4D68u: goto label_1a4d68;
            case 0x1A4D6Cu: goto label_1a4d6c;
            case 0x1A4D70u: goto label_1a4d70;
            case 0x1A4D74u: goto label_1a4d74;
            case 0x1A4D78u: goto label_1a4d78;
            case 0x1A4D7Cu: goto label_1a4d7c;
            case 0x1A4D80u: goto label_1a4d80;
            case 0x1A4D84u: goto label_1a4d84;
            case 0x1A4D88u: goto label_1a4d88;
            case 0x1A4D8Cu: goto label_1a4d8c;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4D94u: goto label_1a4d94;
            case 0x1A4D98u: goto label_1a4d98;
            case 0x1A4D9Cu: goto label_1a4d9c;
            case 0x1A4DA0u: goto label_1a4da0;
            case 0x1A4DA4u: goto label_1a4da4;
            case 0x1A4DA8u: goto label_1a4da8;
            case 0x1A4DACu: goto label_1a4dac;
            case 0x1A4DB0u: goto label_1a4db0;
            case 0x1A4DB4u: goto label_1a4db4;
            case 0x1A4DB8u: goto label_1a4db8;
            case 0x1A4DBCu: goto label_1a4dbc;
            case 0x1A4DC0u: goto label_1a4dc0;
            case 0x1A4DC4u: goto label_1a4dc4;
            case 0x1A4DC8u: goto label_1a4dc8;
            case 0x1A4DCCu: goto label_1a4dcc;
            case 0x1A4DD0u: goto label_1a4dd0;
            case 0x1A4DD4u: goto label_1a4dd4;
            case 0x1A4DD8u: goto label_1a4dd8;
            case 0x1A4DDCu: goto label_1a4ddc;
            case 0x1A4DE0u: goto label_1a4de0;
            case 0x1A4DE4u: goto label_1a4de4;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4DF0u: goto label_1a4df0;
            case 0x1A4DF4u: goto label_1a4df4;
            case 0x1A4DF8u: goto label_1a4df8;
            case 0x1A4DFCu: goto label_1a4dfc;
            case 0x1A4E00u: goto label_1a4e00;
            case 0x1A4E04u: goto label_1a4e04;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E14u: goto label_1a4e14;
            case 0x1A4E18u: goto label_1a4e18;
            case 0x1A4E1Cu: goto label_1a4e1c;
            case 0x1A4E20u: goto label_1a4e20;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E28u: goto label_1a4e28;
            case 0x1A4E2Cu: goto label_1a4e2c;
            case 0x1A4E30u: goto label_1a4e30;
            case 0x1A4E34u: goto label_1a4e34;
            case 0x1A4E38u: goto label_1a4e38;
            case 0x1A4E3Cu: goto label_1a4e3c;
            case 0x1A4E40u: goto label_1a4e40;
            case 0x1A4E44u: goto label_1a4e44;
            case 0x1A4E48u: goto label_1a4e48;
            case 0x1A4E4Cu: goto label_1a4e4c;
            case 0x1A4E50u: goto label_1a4e50;
            case 0x1A4E54u: goto label_1a4e54;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4E60u: goto label_1a4e60;
            case 0x1A4E64u: goto label_1a4e64;
            case 0x1A4E68u: goto label_1a4e68;
            case 0x1A4E6Cu: goto label_1a4e6c;
            case 0x1A4E70u: goto label_1a4e70;
            case 0x1A4E74u: goto label_1a4e74;
            case 0x1A4E78u: goto label_1a4e78;
            case 0x1A4E7Cu: goto label_1a4e7c;
            case 0x1A4E80u: goto label_1a4e80;
            case 0x1A4E84u: goto label_1a4e84;
            case 0x1A4E88u: goto label_1a4e88;
            case 0x1A4E8Cu: goto label_1a4e8c;
            case 0x1A4E90u: goto label_1a4e90;
            case 0x1A4E94u: goto label_1a4e94;
            case 0x1A4E98u: goto label_1a4e98;
            case 0x1A4E9Cu: goto label_1a4e9c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4EA4u: goto label_1a4ea4;
            case 0x1A4EA8u: goto label_1a4ea8;
            case 0x1A4EACu: goto label_1a4eac;
            case 0x1A4EB0u: goto label_1a4eb0;
            case 0x1A4EB4u: goto label_1a4eb4;
            case 0x1A4EB8u: goto label_1a4eb8;
            case 0x1A4EBCu: goto label_1a4ebc;
            case 0x1A4EC0u: goto label_1a4ec0;
            case 0x1A4EC4u: goto label_1a4ec4;
            case 0x1A4EC8u: goto label_1a4ec8;
            case 0x1A4ECCu: goto label_1a4ecc;
            case 0x1A4ED0u: goto label_1a4ed0;
            case 0x1A4ED4u: goto label_1a4ed4;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EDCu: goto label_1a4edc;
            case 0x1A4EE0u: goto label_1a4ee0;
            case 0x1A4EE4u: goto label_1a4ee4;
            case 0x1A4EE8u: goto label_1a4ee8;
            case 0x1A4EECu: goto label_1a4eec;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4EF4u: goto label_1a4ef4;
            case 0x1A4EF8u: goto label_1a4ef8;
            case 0x1A4EFCu: goto label_1a4efc;
            case 0x1A4F00u: goto label_1a4f00;
            case 0x1A4F04u: goto label_1a4f04;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F0Cu: goto label_1a4f0c;
            case 0x1A4F10u: goto label_1a4f10;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F18u: goto label_1a4f18;
            case 0x1A4F1Cu: goto label_1a4f1c;
            case 0x1A4F20u: goto label_1a4f20;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F28u: goto label_1a4f28;
            case 0x1A4F2Cu: goto label_1a4f2c;
            case 0x1A4F30u: goto label_1a4f30;
            case 0x1A4F34u: goto label_1a4f34;
            case 0x1A4F38u: goto label_1a4f38;
            case 0x1A4F3Cu: goto label_1a4f3c;
            case 0x1A4F40u: goto label_1a4f40;
            case 0x1A4F44u: goto label_1a4f44;
            case 0x1A4F48u: goto label_1a4f48;
            case 0x1A4F4Cu: goto label_1a4f4c;
            case 0x1A4F50u: goto label_1a4f50;
            case 0x1A4F54u: goto label_1a4f54;
            case 0x1A4F58u: goto label_1a4f58;
            case 0x1A4F5Cu: goto label_1a4f5c;
            case 0x1A4F60u: goto label_1a4f60;
            case 0x1A4F64u: goto label_1a4f64;
            case 0x1A4F68u: goto label_1a4f68;
            case 0x1A4F6Cu: goto label_1a4f6c;
            case 0x1A4F70u: goto label_1a4f70;
            case 0x1A4F74u: goto label_1a4f74;
            case 0x1A4F78u: goto label_1a4f78;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4F80u: goto label_1a4f80;
            case 0x1A4F84u: goto label_1a4f84;
            case 0x1A4F88u: goto label_1a4f88;
            case 0x1A4F8Cu: goto label_1a4f8c;
            case 0x1A4F90u: goto label_1a4f90;
            case 0x1A4F94u: goto label_1a4f94;
            case 0x1A4F98u: goto label_1a4f98;
            case 0x1A4F9Cu: goto label_1a4f9c;
            case 0x1A4FA0u: goto label_1a4fa0;
            case 0x1A4FA4u: goto label_1a4fa4;
            case 0x1A4FA8u: goto label_1a4fa8;
            case 0x1A4FACu: goto label_1a4fac;
            case 0x1A4FB0u: goto label_1a4fb0;
            case 0x1A4FB4u: goto label_1a4fb4;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FBCu: goto label_1a4fbc;
            case 0x1A4FC0u: goto label_1a4fc0;
            case 0x1A4FC4u: goto label_1a4fc4;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A4FCCu: goto label_1a4fcc;
            case 0x1A4FD0u: goto label_1a4fd0;
            case 0x1A4FD4u: goto label_1a4fd4;
            case 0x1A4FD8u: goto label_1a4fd8;
            case 0x1A4FDCu: goto label_1a4fdc;
            case 0x1A4FE0u: goto label_1a4fe0;
            case 0x1A4FE4u: goto label_1a4fe4;
            case 0x1A4FE8u: goto label_1a4fe8;
            case 0x1A4FECu: goto label_1a4fec;
            case 0x1A4FF0u: goto label_1a4ff0;
            case 0x1A4FF4u: goto label_1a4ff4;
            case 0x1A4FF8u: goto label_1a4ff8;
            case 0x1A4FFCu: goto label_1a4ffc;
            case 0x1A5000u: goto label_1a5000;
            case 0x1A5004u: goto label_1a5004;
            case 0x1A5008u: goto label_1a5008;
            case 0x1A500Cu: goto label_1a500c;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5018u: goto label_1a5018;
            case 0x1A501Cu: goto label_1a501c;
            case 0x1A5020u: goto label_1a5020;
            case 0x1A5024u: goto label_1a5024;
            case 0x1A5028u: goto label_1a5028;
            case 0x1A502Cu: goto label_1a502c;
            case 0x1A5030u: goto label_1a5030;
            case 0x1A5034u: goto label_1a5034;
            case 0x1A5038u: goto label_1a5038;
            case 0x1A503Cu: goto label_1a503c;
            case 0x1A5040u: goto label_1a5040;
            case 0x1A5044u: goto label_1a5044;
            case 0x1A5048u: goto label_1a5048;
            case 0x1A504Cu: goto label_1a504c;
            case 0x1A5050u: goto label_1a5050;
            case 0x1A5054u: goto label_1a5054;
            case 0x1A5058u: goto label_1a5058;
            case 0x1A505Cu: goto label_1a505c;
            case 0x1A5060u: goto label_1a5060;
            case 0x1A5064u: goto label_1a5064;
            case 0x1A5068u: goto label_1a5068;
            case 0x1A506Cu: goto label_1a506c;
            case 0x1A5070u: goto label_1a5070;
            case 0x1A5074u: goto label_1a5074;
            case 0x1A5078u: goto label_1a5078;
            case 0x1A507Cu: goto label_1a507c;
            case 0x1A5080u: goto label_1a5080;
            case 0x1A5084u: goto label_1a5084;
            case 0x1A5088u: goto label_1a5088;
            case 0x1A508Cu: goto label_1a508c;
            case 0x1A5090u: goto label_1a5090;
            case 0x1A5094u: goto label_1a5094;
            case 0x1A5098u: goto label_1a5098;
            case 0x1A509Cu: goto label_1a509c;
            case 0x1A50A0u: goto label_1a50a0;
            case 0x1A50A4u: goto label_1a50a4;
            case 0x1A50A8u: goto label_1a50a8;
            case 0x1A50ACu: goto label_1a50ac;
            case 0x1A50B0u: goto label_1a50b0;
            case 0x1A50B4u: goto label_1a50b4;
            case 0x1A50B8u: goto label_1a50b8;
            case 0x1A50BCu: goto label_1a50bc;
            case 0x1A50C0u: goto label_1a50c0;
            case 0x1A50C4u: goto label_1a50c4;
            case 0x1A50C8u: goto label_1a50c8;
            case 0x1A50CCu: goto label_1a50cc;
            case 0x1A50D0u: goto label_1a50d0;
            case 0x1A50D4u: goto label_1a50d4;
            case 0x1A50D8u: goto label_1a50d8;
            case 0x1A50DCu: goto label_1a50dc;
            case 0x1A50E0u: goto label_1a50e0;
            case 0x1A50E4u: goto label_1a50e4;
            case 0x1A50E8u: goto label_1a50e8;
            case 0x1A50ECu: goto label_1a50ec;
            case 0x1A50F0u: goto label_1a50f0;
            case 0x1A50F4u: goto label_1a50f4;
            case 0x1A50F8u: goto label_1a50f8;
            case 0x1A50FCu: goto label_1a50fc;
            case 0x1A5100u: goto label_1a5100;
            case 0x1A5104u: goto label_1a5104;
            case 0x1A5108u: goto label_1a5108;
            case 0x1A510Cu: goto label_1a510c;
            case 0x1A5110u: goto label_1a5110;
            case 0x1A5114u: goto label_1a5114;
            case 0x1A5118u: goto label_1a5118;
            case 0x1A511Cu: goto label_1a511c;
            case 0x1A5120u: goto label_1a5120;
            case 0x1A5124u: goto label_1a5124;
            case 0x1A5128u: goto label_1a5128;
            case 0x1A512Cu: goto label_1a512c;
            case 0x1A5130u: goto label_1a5130;
            case 0x1A5134u: goto label_1a5134;
            case 0x1A5138u: goto label_1a5138;
            case 0x1A513Cu: goto label_1a513c;
            case 0x1A5140u: goto label_1a5140;
            case 0x1A5144u: goto label_1a5144;
            case 0x1A5148u: goto label_1a5148;
            case 0x1A514Cu: goto label_1a514c;
            case 0x1A5150u: goto label_1a5150;
            case 0x1A5154u: goto label_1a5154;
            case 0x1A5158u: goto label_1a5158;
            case 0x1A515Cu: goto label_1a515c;
            case 0x1A5160u: goto label_1a5160;
            case 0x1A5164u: goto label_1a5164;
            case 0x1A5168u: goto label_1a5168;
            case 0x1A516Cu: goto label_1a516c;
            case 0x1A5170u: goto label_1a5170;
            case 0x1A5174u: goto label_1a5174;
            case 0x1A5178u: goto label_1a5178;
            case 0x1A517Cu: goto label_1a517c;
            case 0x1A5180u: goto label_1a5180;
            case 0x1A5184u: goto label_1a5184;
            case 0x1A5188u: goto label_1a5188;
            case 0x1A518Cu: goto label_1a518c;
            case 0x1A5190u: goto label_1a5190;
            case 0x1A5194u: goto label_1a5194;
            case 0x1A5198u: goto label_1a5198;
            case 0x1A519Cu: goto label_1a519c;
            case 0x1A51A0u: goto label_1a51a0;
            case 0x1A51A4u: goto label_1a51a4;
            case 0x1A51A8u: goto label_1a51a8;
            case 0x1A51ACu: goto label_1a51ac;
            case 0x1A51B0u: goto label_1a51b0;
            case 0x1A51B4u: goto label_1a51b4;
            case 0x1A51B8u: goto label_1a51b8;
            case 0x1A51BCu: goto label_1a51bc;
            case 0x1A51C0u: goto label_1a51c0;
            case 0x1A51C4u: goto label_1a51c4;
            case 0x1A51C8u: goto label_1a51c8;
            case 0x1A51CCu: goto label_1a51cc;
            case 0x1A51D0u: goto label_1a51d0;
            case 0x1A51D4u: goto label_1a51d4;
            case 0x1A51D8u: goto label_1a51d8;
            case 0x1A51DCu: goto label_1a51dc;
            case 0x1A51E0u: goto label_1a51e0;
            case 0x1A51E4u: goto label_1a51e4;
            case 0x1A51E8u: goto label_1a51e8;
            case 0x1A51ECu: goto label_1a51ec;
            case 0x1A51F0u: goto label_1a51f0;
            case 0x1A51F4u: goto label_1a51f4;
            case 0x1A51F8u: goto label_1a51f8;
            case 0x1A51FCu: goto label_1a51fc;
            case 0x1A5200u: goto label_1a5200;
            case 0x1A5204u: goto label_1a5204;
            case 0x1A5208u: goto label_1a5208;
            case 0x1A520Cu: goto label_1a520c;
            case 0x1A5210u: goto label_1a5210;
            case 0x1A5214u: goto label_1a5214;
            case 0x1A5218u: goto label_1a5218;
            case 0x1A521Cu: goto label_1a521c;
            case 0x1A5220u: goto label_1a5220;
            case 0x1A5224u: goto label_1a5224;
            case 0x1A5228u: goto label_1a5228;
            case 0x1A522Cu: goto label_1a522c;
            case 0x1A5230u: goto label_1a5230;
            case 0x1A5234u: goto label_1a5234;
            case 0x1A5238u: goto label_1a5238;
            case 0x1A523Cu: goto label_1a523c;
            case 0x1A5240u: goto label_1a5240;
            case 0x1A5244u: goto label_1a5244;
            case 0x1A5248u: goto label_1a5248;
            case 0x1A524Cu: goto label_1a524c;
            case 0x1A5250u: goto label_1a5250;
            case 0x1A5254u: goto label_1a5254;
            case 0x1A5258u: goto label_1a5258;
            case 0x1A525Cu: goto label_1a525c;
            case 0x1A5260u: goto label_1a5260;
            case 0x1A5264u: goto label_1a5264;
            case 0x1A5268u: goto label_1a5268;
            case 0x1A526Cu: goto label_1a526c;
            case 0x1A5270u: goto label_1a5270;
            case 0x1A5274u: goto label_1a5274;
            case 0x1A5278u: goto label_1a5278;
            case 0x1A527Cu: goto label_1a527c;
            case 0x1A5280u: goto label_1a5280;
            case 0x1A5284u: goto label_1a5284;
            case 0x1A5288u: goto label_1a5288;
            case 0x1A528Cu: goto label_1a528c;
            case 0x1A5290u: goto label_1a5290;
            case 0x1A5294u: goto label_1a5294;
            case 0x1A5298u: goto label_1a5298;
            case 0x1A529Cu: goto label_1a529c;
            case 0x1A52A0u: goto label_1a52a0;
            case 0x1A52A4u: goto label_1a52a4;
            case 0x1A52A8u: goto label_1a52a8;
            case 0x1A52ACu: goto label_1a52ac;
            case 0x1A52B0u: goto label_1a52b0;
            case 0x1A52B4u: goto label_1a52b4;
            case 0x1A52B8u: goto label_1a52b8;
            case 0x1A52BCu: goto label_1a52bc;
            case 0x1A52C0u: goto label_1a52c0;
            case 0x1A52C4u: goto label_1a52c4;
            case 0x1A52C8u: goto label_1a52c8;
            case 0x1A52CCu: goto label_1a52cc;
            case 0x1A52D0u: goto label_1a52d0;
            case 0x1A52D4u: goto label_1a52d4;
            case 0x1A52D8u: goto label_1a52d8;
            case 0x1A52DCu: goto label_1a52dc;
            case 0x1A52E0u: goto label_1a52e0;
            case 0x1A52E4u: goto label_1a52e4;
            case 0x1A52E8u: goto label_1a52e8;
            case 0x1A52ECu: goto label_1a52ec;
            case 0x1A52F0u: goto label_1a52f0;
            case 0x1A52F4u: goto label_1a52f4;
            case 0x1A52F8u: goto label_1a52f8;
            case 0x1A52FCu: goto label_1a52fc;
            case 0x1A5300u: goto label_1a5300;
            case 0x1A5304u: goto label_1a5304;
            case 0x1A5308u: goto label_1a5308;
            case 0x1A530Cu: goto label_1a530c;
            case 0x1A5310u: goto label_1a5310;
            case 0x1A5314u: goto label_1a5314;
            case 0x1A5318u: goto label_1a5318;
            case 0x1A531Cu: goto label_1a531c;
            case 0x1A5320u: goto label_1a5320;
            case 0x1A5324u: goto label_1a5324;
            case 0x1A5328u: goto label_1a5328;
            case 0x1A532Cu: goto label_1a532c;
            case 0x1A5330u: goto label_1a5330;
            case 0x1A5334u: goto label_1a5334;
            case 0x1A5338u: goto label_1a5338;
            case 0x1A533Cu: goto label_1a533c;
            case 0x1A5340u: goto label_1a5340;
            case 0x1A5344u: goto label_1a5344;
            case 0x1A5348u: goto label_1a5348;
            case 0x1A534Cu: goto label_1a534c;
            case 0x1A5350u: goto label_1a5350;
            case 0x1A5354u: goto label_1a5354;
            case 0x1A5358u: goto label_1a5358;
            case 0x1A535Cu: goto label_1a535c;
            case 0x1A5360u: goto label_1a5360;
            case 0x1A5364u: goto label_1a5364;
            case 0x1A5368u: goto label_1a5368;
            case 0x1A536Cu: goto label_1a536c;
            case 0x1A5370u: goto label_1a5370;
            case 0x1A5374u: goto label_1a5374;
            case 0x1A5378u: goto label_1a5378;
            case 0x1A537Cu: goto label_1a537c;
            case 0x1A5380u: goto label_1a5380;
            case 0x1A5384u: goto label_1a5384;
            case 0x1A5388u: goto label_1a5388;
            case 0x1A538Cu: goto label_1a538c;
            case 0x1A5390u: goto label_1a5390;
            case 0x1A5394u: goto label_1a5394;
            case 0x1A5398u: goto label_1a5398;
            case 0x1A539Cu: goto label_1a539c;
            case 0x1A53A0u: goto label_1a53a0;
            case 0x1A53A4u: goto label_1a53a4;
            case 0x1A53A8u: goto label_1a53a8;
            case 0x1A53ACu: goto label_1a53ac;
            case 0x1A53B0u: goto label_1a53b0;
            case 0x1A53B4u: goto label_1a53b4;
            case 0x1A53B8u: goto label_1a53b8;
            case 0x1A53BCu: goto label_1a53bc;
            case 0x1A53C0u: goto label_1a53c0;
            case 0x1A53C4u: goto label_1a53c4;
            case 0x1A53C8u: goto label_1a53c8;
            case 0x1A53CCu: goto label_1a53cc;
            case 0x1A53D0u: goto label_1a53d0;
            case 0x1A53D4u: goto label_1a53d4;
            case 0x1A53D8u: goto label_1a53d8;
            case 0x1A53DCu: goto label_1a53dc;
            case 0x1A53E0u: goto label_1a53e0;
            case 0x1A53E4u: goto label_1a53e4;
            case 0x1A53E8u: goto label_1a53e8;
            case 0x1A53ECu: goto label_1a53ec;
            case 0x1A53F0u: goto label_1a53f0;
            case 0x1A53F4u: goto label_1a53f4;
            case 0x1A53F8u: goto label_1a53f8;
            case 0x1A53FCu: goto label_1a53fc;
            case 0x1A5400u: goto label_1a5400;
            case 0x1A5404u: goto label_1a5404;
            case 0x1A5408u: goto label_1a5408;
            case 0x1A540Cu: goto label_1a540c;
            case 0x1A5410u: goto label_1a5410;
            case 0x1A5414u: goto label_1a5414;
            case 0x1A5418u: goto label_1a5418;
            case 0x1A541Cu: goto label_1a541c;
            case 0x1A5420u: goto label_1a5420;
            case 0x1A5424u: goto label_1a5424;
            case 0x1A5428u: goto label_1a5428;
            case 0x1A542Cu: goto label_1a542c;
            case 0x1A5430u: goto label_1a5430;
            case 0x1A5434u: goto label_1a5434;
            case 0x1A5438u: goto label_1a5438;
            case 0x1A543Cu: goto label_1a543c;
            case 0x1A5440u: goto label_1a5440;
            case 0x1A5444u: goto label_1a5444;
            case 0x1A5448u: goto label_1a5448;
            case 0x1A544Cu: goto label_1a544c;
            case 0x1A5450u: goto label_1a5450;
            case 0x1A5454u: goto label_1a5454;
            case 0x1A5458u: goto label_1a5458;
            case 0x1A545Cu: goto label_1a545c;
            case 0x1A5460u: goto label_1a5460;
            case 0x1A5464u: goto label_1a5464;
            case 0x1A5468u: goto label_1a5468;
            case 0x1A546Cu: goto label_1a546c;
            case 0x1A5470u: goto label_1a5470;
            case 0x1A5474u: goto label_1a5474;
            case 0x1A5478u: goto label_1a5478;
            case 0x1A547Cu: goto label_1a547c;
            case 0x1A5480u: goto label_1a5480;
            case 0x1A5484u: goto label_1a5484;
            case 0x1A5488u: goto label_1a5488;
            case 0x1A548Cu: goto label_1a548c;
            case 0x1A5490u: goto label_1a5490;
            case 0x1A5494u: goto label_1a5494;
            case 0x1A5498u: goto label_1a5498;
            case 0x1A549Cu: goto label_1a549c;
            case 0x1A54A0u: goto label_1a54a0;
            case 0x1A54A4u: goto label_1a54a4;
            case 0x1A54A8u: goto label_1a54a8;
            case 0x1A54ACu: goto label_1a54ac;
            case 0x1A54B0u: goto label_1a54b0;
            case 0x1A54B4u: goto label_1a54b4;
            case 0x1A54B8u: goto label_1a54b8;
            case 0x1A54BCu: goto label_1a54bc;
            case 0x1A54C0u: goto label_1a54c0;
            case 0x1A54C4u: goto label_1a54c4;
            case 0x1A54C8u: goto label_1a54c8;
            case 0x1A54CCu: goto label_1a54cc;
            case 0x1A54D0u: goto label_1a54d0;
            case 0x1A54D4u: goto label_1a54d4;
            case 0x1A54D8u: goto label_1a54d8;
            case 0x1A54DCu: goto label_1a54dc;
            case 0x1A54E0u: goto label_1a54e0;
            case 0x1A54E4u: goto label_1a54e4;
            case 0x1A54E8u: goto label_1a54e8;
            case 0x1A54ECu: goto label_1a54ec;
            case 0x1A54F0u: goto label_1a54f0;
            case 0x1A54F4u: goto label_1a54f4;
            case 0x1A54F8u: goto label_1a54f8;
            case 0x1A54FCu: goto label_1a54fc;
            case 0x1A5500u: goto label_1a5500;
            case 0x1A5504u: goto label_1a5504;
            case 0x1A5508u: goto label_1a5508;
            case 0x1A550Cu: goto label_1a550c;
            case 0x1A5510u: goto label_1a5510;
            case 0x1A5514u: goto label_1a5514;
            case 0x1A5518u: goto label_1a5518;
            case 0x1A551Cu: goto label_1a551c;
            case 0x1A5520u: goto label_1a5520;
            case 0x1A5524u: goto label_1a5524;
            case 0x1A5528u: goto label_1a5528;
            case 0x1A552Cu: goto label_1a552c;
            case 0x1A5530u: goto label_1a5530;
            case 0x1A5534u: goto label_1a5534;
            case 0x1A5538u: goto label_1a5538;
            case 0x1A553Cu: goto label_1a553c;
            case 0x1A5540u: goto label_1a5540;
            case 0x1A5544u: goto label_1a5544;
            case 0x1A5548u: goto label_1a5548;
            case 0x1A554Cu: goto label_1a554c;
            case 0x1A5550u: goto label_1a5550;
            case 0x1A5554u: goto label_1a5554;
            case 0x1A5558u: goto label_1a5558;
            case 0x1A555Cu: goto label_1a555c;
            case 0x1A5560u: goto label_1a5560;
            case 0x1A5564u: goto label_1a5564;
            case 0x1A5568u: goto label_1a5568;
            case 0x1A556Cu: goto label_1a556c;
            case 0x1A5570u: goto label_1a5570;
            case 0x1A5574u: goto label_1a5574;
            case 0x1A5578u: goto label_1a5578;
            case 0x1A557Cu: goto label_1a557c;
            case 0x1A5580u: goto label_1a5580;
            case 0x1A5584u: goto label_1a5584;
            case 0x1A5588u: goto label_1a5588;
            case 0x1A558Cu: goto label_1a558c;
            case 0x1A5590u: goto label_1a5590;
            case 0x1A5594u: goto label_1a5594;
            case 0x1A5598u: goto label_1a5598;
            case 0x1A559Cu: goto label_1a559c;
            case 0x1A55A0u: goto label_1a55a0;
            case 0x1A55A4u: goto label_1a55a4;
            case 0x1A55A8u: goto label_1a55a8;
            case 0x1A55ACu: goto label_1a55ac;
            case 0x1A55B0u: goto label_1a55b0;
            case 0x1A55B4u: goto label_1a55b4;
            case 0x1A55B8u: goto label_1a55b8;
            case 0x1A55BCu: goto label_1a55bc;
            case 0x1A55C0u: goto label_1a55c0;
            case 0x1A55C4u: goto label_1a55c4;
            case 0x1A55C8u: goto label_1a55c8;
            case 0x1A55CCu: goto label_1a55cc;
            case 0x1A55D0u: goto label_1a55d0;
            case 0x1A55D4u: goto label_1a55d4;
            case 0x1A55D8u: goto label_1a55d8;
            case 0x1A55DCu: goto label_1a55dc;
            case 0x1A55E0u: goto label_1a55e0;
            case 0x1A55E4u: goto label_1a55e4;
            case 0x1A55E8u: goto label_1a55e8;
            case 0x1A55ECu: goto label_1a55ec;
            case 0x1A55F0u: goto label_1a55f0;
            case 0x1A55F4u: goto label_1a55f4;
            case 0x1A55F8u: goto label_1a55f8;
            case 0x1A55FCu: goto label_1a55fc;
            case 0x1A5600u: goto label_1a5600;
            case 0x1A5604u: goto label_1a5604;
            case 0x1A5608u: goto label_1a5608;
            case 0x1A560Cu: goto label_1a560c;
            case 0x1A5610u: goto label_1a5610;
            case 0x1A5614u: goto label_1a5614;
            case 0x1A5618u: goto label_1a5618;
            case 0x1A561Cu: goto label_1a561c;
            case 0x1A5620u: goto label_1a5620;
            case 0x1A5624u: goto label_1a5624;
            case 0x1A5628u: goto label_1a5628;
            case 0x1A562Cu: goto label_1a562c;
            case 0x1A5630u: goto label_1a5630;
            case 0x1A5634u: goto label_1a5634;
            case 0x1A5638u: goto label_1a5638;
            case 0x1A563Cu: goto label_1a563c;
            case 0x1A5640u: goto label_1a5640;
            case 0x1A5644u: goto label_1a5644;
            case 0x1A5648u: goto label_1a5648;
            case 0x1A564Cu: goto label_1a564c;
            case 0x1A5650u: goto label_1a5650;
            case 0x1A5654u: goto label_1a5654;
            case 0x1A5658u: goto label_1a5658;
            case 0x1A565Cu: goto label_1a565c;
            case 0x1A5660u: goto label_1a5660;
            case 0x1A5664u: goto label_1a5664;
            case 0x1A5668u: goto label_1a5668;
            case 0x1A566Cu: goto label_1a566c;
            case 0x1A5670u: goto label_1a5670;
            case 0x1A5674u: goto label_1a5674;
            case 0x1A5678u: goto label_1a5678;
            case 0x1A567Cu: goto label_1a567c;
            case 0x1A5680u: goto label_1a5680;
            case 0x1A5684u: goto label_1a5684;
            case 0x1A5688u: goto label_1a5688;
            case 0x1A568Cu: goto label_1a568c;
            case 0x1A5690u: goto label_1a5690;
            case 0x1A5694u: goto label_1a5694;
            case 0x1A5698u: goto label_1a5698;
            case 0x1A569Cu: goto label_1a569c;
            case 0x1A56A0u: goto label_1a56a0;
            case 0x1A56A4u: goto label_1a56a4;
            case 0x1A56A8u: goto label_1a56a8;
            case 0x1A56ACu: goto label_1a56ac;
            case 0x1A56B0u: goto label_1a56b0;
            case 0x1A56B4u: goto label_1a56b4;
            case 0x1A56B8u: goto label_1a56b8;
            case 0x1A56BCu: goto label_1a56bc;
            case 0x1A56C0u: goto label_1a56c0;
            case 0x1A56C4u: goto label_1a56c4;
            case 0x1A56C8u: goto label_1a56c8;
            case 0x1A56CCu: goto label_1a56cc;
            case 0x1A56D0u: goto label_1a56d0;
            case 0x1A56D4u: goto label_1a56d4;
            case 0x1A56D8u: goto label_1a56d8;
            case 0x1A56DCu: goto label_1a56dc;
            case 0x1A56E0u: goto label_1a56e0;
            case 0x1A56E4u: goto label_1a56e4;
            case 0x1A56E8u: goto label_1a56e8;
            case 0x1A56ECu: goto label_1a56ec;
            case 0x1A56F0u: goto label_1a56f0;
            case 0x1A56F4u: goto label_1a56f4;
            case 0x1A56F8u: goto label_1a56f8;
            case 0x1A56FCu: goto label_1a56fc;
            case 0x1A5700u: goto label_1a5700;
            case 0x1A5704u: goto label_1a5704;
            case 0x1A5708u: goto label_1a5708;
            case 0x1A570Cu: goto label_1a570c;
            case 0x1A5710u: goto label_1a5710;
            case 0x1A5714u: goto label_1a5714;
            case 0x1A5718u: goto label_1a5718;
            case 0x1A571Cu: goto label_1a571c;
            case 0x1A5720u: goto label_1a5720;
            case 0x1A5724u: goto label_1a5724;
            case 0x1A5728u: goto label_1a5728;
            case 0x1A572Cu: goto label_1a572c;
            case 0x1A5730u: goto label_1a5730;
            case 0x1A5734u: goto label_1a5734;
            case 0x1A5738u: goto label_1a5738;
            case 0x1A573Cu: goto label_1a573c;
            case 0x1A5740u: goto label_1a5740;
            case 0x1A5744u: goto label_1a5744;
            case 0x1A5748u: goto label_1a5748;
            case 0x1A574Cu: goto label_1a574c;
            case 0x1A5750u: goto label_1a5750;
            case 0x1A5754u: goto label_1a5754;
            case 0x1A5758u: goto label_1a5758;
            case 0x1A575Cu: goto label_1a575c;
            case 0x1A5760u: goto label_1a5760;
            case 0x1A5764u: goto label_1a5764;
            case 0x1A5768u: goto label_1a5768;
            case 0x1A576Cu: goto label_1a576c;
            case 0x1A5770u: goto label_1a5770;
            case 0x1A5774u: goto label_1a5774;
            case 0x1A5778u: goto label_1a5778;
            case 0x1A577Cu: goto label_1a577c;
            case 0x1A5780u: goto label_1a5780;
            case 0x1A5784u: goto label_1a5784;
            case 0x1A5788u: goto label_1a5788;
            case 0x1A578Cu: goto label_1a578c;
            case 0x1A5790u: goto label_1a5790;
            case 0x1A5794u: goto label_1a5794;
            case 0x1A5798u: goto label_1a5798;
            case 0x1A579Cu: goto label_1a579c;
            case 0x1A57A0u: goto label_1a57a0;
            case 0x1A57A4u: goto label_1a57a4;
            case 0x1A57A8u: goto label_1a57a8;
            case 0x1A57ACu: goto label_1a57ac;
            case 0x1A57B0u: goto label_1a57b0;
            case 0x1A57B4u: goto label_1a57b4;
            case 0x1A57B8u: goto label_1a57b8;
            case 0x1A57BCu: goto label_1a57bc;
            case 0x1A57C0u: goto label_1a57c0;
            case 0x1A57C4u: goto label_1a57c4;
            case 0x1A57C8u: goto label_1a57c8;
            case 0x1A57CCu: goto label_1a57cc;
            case 0x1A57D0u: goto label_1a57d0;
            case 0x1A57D4u: goto label_1a57d4;
            case 0x1A57D8u: goto label_1a57d8;
            case 0x1A57DCu: goto label_1a57dc;
            case 0x1A57E0u: goto label_1a57e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1a57dc:
    ctx->pc = 0x1A57E4u;
}
