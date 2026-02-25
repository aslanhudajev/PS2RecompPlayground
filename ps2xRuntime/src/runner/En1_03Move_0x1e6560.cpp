#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_03Move
// Address: 0x1e6560 - 0x1e71c8
void En1_03Move_0x1e6560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_03Move_0x1e6560");
#endif

    ctx->pc = 0x1e6560u;

label_1e6560:
    // 0x1e6560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e6560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e6564:
    // 0x1e6564: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e6568:
    // 0x1e6568: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e6568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e656c:
    // 0x1e656c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e656cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6570:
    // 0x1e6570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6574:
    // 0x1e6574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6578:
    // 0x1e6578: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e6578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e657c:
    // 0x1e657c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6580:
    // 0x1e6580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e6580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6584:
    // 0x1e6584: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e6584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6588:
    // 0x1e6588: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e6588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e658c:
    // 0x1e658c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e658cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e6590:
    // 0x1e6590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e6590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6594:
    // 0x1e6594: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e6594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e6598:
    // 0x1e6598: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e6598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e659c:
    // 0x1e659c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e659cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e65a0:
    // 0x1e65a0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e65a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e65a4:
    // 0x1e65a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e65a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e65a8:
    // 0x1e65a8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e65a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e65ac:
    // 0x1e65ac: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e65b0:
    // 0x1e65b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e65b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e65b4:
    // 0x1e65b4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e65b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e65b8:
    // 0x1e65b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e65b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e65bc:
    // 0x1e65bc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e65c0:
    // 0x1e65c0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e65c4:
    // 0x1e65c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e65c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e65c8:
    // 0x1e65c8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e65c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e65cc:
    // 0x1e65cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e65d0:
    // 0x1e65d0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e65d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e65d4:
    // 0x1e65d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e65d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e65d8:
    // 0x1e65d8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e65dc:
    if (ctx->pc == 0x1E65DCu) {
        ctx->pc = 0x1E65DCu;
            // 0x1e65dc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E65E0u;
        goto label_1e65e0;
    }
    ctx->pc = 0x1E65D8u;
    {
        const bool branch_taken_0x1e65d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E65DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E65D8u;
            // 0x1e65dc: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e65d8) {
            ctx->pc = 0x1E65F8u;
            goto label_1e65f8;
        }
    }
    ctx->pc = 0x1E65E0u;
label_1e65e0:
    // 0x1e65e0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e65e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e65e4:
    // 0x1e65e4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e65e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e65e8:
    // 0x1e65e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e65e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e65ec:
    // 0x1e65ec: 0x0  nop
    ctx->pc = 0x1e65ecu;
    // NOP
label_1e65f0:
    // 0x1e65f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e65f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e65f4:
    // 0x1e65f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e65f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e65f8:
    // 0x1e65f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e65f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e65fc:
    // 0x1e65fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e65fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e6600:
    // 0x1e6600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e6600u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6604:
    // 0x1e6604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6608:
    // 0x1e6608: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e6608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e660c:
    // 0x1e660c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e660cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6610:
    // 0x1e6610: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e6614:
    if (ctx->pc == 0x1E6614u) {
        ctx->pc = 0x1E6614u;
            // 0x1e6614: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E6618u;
        goto label_1e6618;
    }
    ctx->pc = 0x1E6610u;
    {
        const bool branch_taken_0x1e6610 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6610u;
            // 0x1e6614: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6610) {
            ctx->pc = 0x1E6630u;
            goto label_1e6630;
        }
    }
    ctx->pc = 0x1E6618u;
label_1e6618:
    // 0x1e6618: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e6618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e661c:
    // 0x1e661c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e661cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6620:
    // 0x1e6620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6624:
    // 0x1e6624: 0x0  nop
    ctx->pc = 0x1e6624u;
    // NOP
label_1e6628:
    // 0x1e6628: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6628u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e662c:
    // 0x1e662c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e662cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e6630:
    // 0x1e6630: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6634:
    // 0x1e6634: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e6634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e6638:
    // 0x1e6638: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e6638u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e663c:
    // 0x1e663c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e663cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6640:
    // 0x1e6640: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e6640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6644:
    // 0x1e6644: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6648:
    // 0x1e6648: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e664c:
    if (ctx->pc == 0x1E664Cu) {
        ctx->pc = 0x1E664Cu;
            // 0x1e664c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E6650u;
        goto label_1e6650;
    }
    ctx->pc = 0x1E6648u;
    {
        const bool branch_taken_0x1e6648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6648u;
            // 0x1e664c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6648) {
            ctx->pc = 0x1E6668u;
            goto label_1e6668;
        }
    }
    ctx->pc = 0x1E6650u;
label_1e6650:
    // 0x1e6650: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e6650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e6654:
    // 0x1e6654: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e6654u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6658:
    // 0x1e6658: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6658u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e665c:
    // 0x1e665c: 0x0  nop
    ctx->pc = 0x1e665cu;
    // NOP
label_1e6660:
    // 0x1e6660: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e6664:
    // 0x1e6664: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e6664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e6668:
    // 0x1e6668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e6668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e666c:
    // 0x1e666c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e6670:
    // 0x1e6670: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e6670u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6674:
    // 0x1e6674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6678:
    // 0x1e6678: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e6678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e667c:
    // 0x1e667c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e667cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6680:
    // 0x1e6680: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e6684:
    if (ctx->pc == 0x1E6684u) {
        ctx->pc = 0x1E6684u;
            // 0x1e6684: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E6688u;
        goto label_1e6688;
    }
    ctx->pc = 0x1E6680u;
    {
        const bool branch_taken_0x1e6680 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E6684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6680u;
            // 0x1e6684: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6680) {
            ctx->pc = 0x1E66A0u;
            goto label_1e66a0;
        }
    }
    ctx->pc = 0x1E6688u;
label_1e6688:
    // 0x1e6688: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e6688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e668c:
    // 0x1e668c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e668cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e6690:
    // 0x1e6690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6694:
    // 0x1e6694: 0x0  nop
    ctx->pc = 0x1e6694u;
    // NOP
label_1e6698:
    // 0x1e6698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e6698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e669c:
    // 0x1e669c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e669cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e66a0:
    // 0x1e66a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e66a4:
    // 0x1e66a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1e66a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1e66a8:
    // 0x1e66a8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e66ac:
    // 0x1e66ac: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e66acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e66b0:
    // 0x1e66b0: 0xc079c74  jal         func_1E71D0
label_1e66b4:
    if (ctx->pc == 0x1E66B4u) {
        ctx->pc = 0x1E66B4u;
            // 0x1e66b4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1E66B8u;
        goto label_1e66b8;
    }
    ctx->pc = 0x1E66B0u;
    SET_GPR_U32(ctx, 31, 0x1E66B8u);
    ctx->pc = 0x1E66B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66B0u;
            // 0x1e66b4: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E71D0u;
    if (runtime->hasFunction(0x1E71D0u)) {
        auto targetFn = runtime->lookupFunction(0x1E71D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B8u; }
        if (ctx->pc != 0x1E66B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e71d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66B8u; }
        if (ctx->pc != 0x1E66B8u) { return; }
    }
    ctx->pc = 0x1E66B8u;
label_1e66b8:
    // 0x1e66b8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e66bc:
    // 0x1e66bc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1e66bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1e66c0:
    // 0x1e66c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e66c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e66c4:
    // 0x1e66c4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e66c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_1e66c8:
    // 0x1e66c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e66cc:
    // 0x1e66cc: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_1e66d0:
    if (ctx->pc == 0x1E66D0u) {
        ctx->pc = 0x1E66D4u;
        goto label_1e66d4;
    }
    ctx->pc = 0x1E66CCu;
    {
        const bool branch_taken_0x1e66cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e66cc) {
            ctx->pc = 0x1E6740u;
            goto label_1e6740;
        }
    }
    ctx->pc = 0x1E66D4u;
label_1e66d4:
    // 0x1e66d4: 0xc050bb4  jal         func_142ED0
label_1e66d8:
    if (ctx->pc == 0x1E66D8u) {
        ctx->pc = 0x1E66DCu;
        goto label_1e66dc;
    }
    ctx->pc = 0x1E66D4u;
    SET_GPR_U32(ctx, 31, 0x1E66DCu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66DCu; }
        if (ctx->pc != 0x1E66DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E66DCu; }
        if (ctx->pc != 0x1E66DCu) { return; }
    }
    ctx->pc = 0x1E66DCu;
label_1e66dc:
    // 0x1e66dc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1e66dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1e66e0:
    // 0x1e66e0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e66e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e66e4:
    // 0x1e66e4: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e66e4u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e66e8:
    // 0x1e66e8: 0x0  nop
    ctx->pc = 0x1e66e8u;
    // NOP
label_1e66ec:
    // 0x1e66ec: 0x0  nop
    ctx->pc = 0x1e66ecu;
    // NOP
label_1e66f0:
    // 0x1e66f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e66f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e66f4:
    // 0x1e66f4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e66f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e66f8:
    // 0x1e66f8: 0xc050bb4  jal         func_142ED0
label_1e66fc:
    if (ctx->pc == 0x1E66FCu) {
        ctx->pc = 0x1E66FCu;
            // 0x1e66fc: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6700u;
        goto label_1e6700;
    }
    ctx->pc = 0x1E66F8u;
    SET_GPR_U32(ctx, 31, 0x1E6700u);
    ctx->pc = 0x1E66FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E66F8u;
            // 0x1e66fc: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6700u; }
        if (ctx->pc != 0x1E6700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6700u; }
        if (ctx->pc != 0x1E6700u) { return; }
    }
    ctx->pc = 0x1E6700u;
label_1e6700:
    // 0x1e6700: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1e6700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1e6704:
    // 0x1e6704: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e6704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e6708:
    // 0x1e6708: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e6708u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e670c:
    // 0x1e670c: 0x0  nop
    ctx->pc = 0x1e670cu;
    // NOP
label_1e6710:
    // 0x1e6710: 0x0  nop
    ctx->pc = 0x1e6710u;
    // NOP
label_1e6714:
    // 0x1e6714: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6714u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e6718:
    // 0x1e6718: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e6718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e671c:
    // 0x1e671c: 0xc050bb4  jal         func_142ED0
label_1e6720:
    if (ctx->pc == 0x1E6720u) {
        ctx->pc = 0x1E6720u;
            // 0x1e6720: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6724u;
        goto label_1e6724;
    }
    ctx->pc = 0x1E671Cu;
    SET_GPR_U32(ctx, 31, 0x1E6724u);
    ctx->pc = 0x1E6720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E671Cu;
            // 0x1e6720: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6724u; }
        if (ctx->pc != 0x1E6724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6724u; }
        if (ctx->pc != 0x1E6724u) { return; }
    }
    ctx->pc = 0x1E6724u;
label_1e6724:
    // 0x1e6724: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1e6724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1e6728:
    // 0x1e6728: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e6728u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e672c:
    // 0x1e672c: 0x0  nop
    ctx->pc = 0x1e672cu;
    // NOP
label_1e6730:
    // 0x1e6730: 0x0  nop
    ctx->pc = 0x1e6730u;
    // NOP
label_1e6734:
    // 0x1e6734: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6734u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e6738:
    // 0x1e6738: 0x1000017b  b           . + 4 + (0x17B << 2)
label_1e673c:
    if (ctx->pc == 0x1E673Cu) {
        ctx->pc = 0x1E673Cu;
            // 0x1e673c: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6740u;
        goto label_1e6740;
    }
    ctx->pc = 0x1E6738u;
    {
        const bool branch_taken_0x1e6738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6738u;
            // 0x1e673c: 0xae02011c  sw          $v0, 0x11C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6738) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6740u;
label_1e6740:
    // 0x1e6740: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1e6740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1e6744:
    // 0x1e6744: 0x14400178  bnez        $v0, . + 4 + (0x178 << 2)
label_1e6748:
    if (ctx->pc == 0x1E6748u) {
        ctx->pc = 0x1E6748u;
            // 0x1e6748: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1E674Cu;
        goto label_1e674c;
    }
    ctx->pc = 0x1E6744u;
    {
        const bool branch_taken_0x1e6744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E6748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6744u;
            // 0x1e6748: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6744) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E674Cu;
label_1e674c:
    // 0x1e674c: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_1e6750:
    if (ctx->pc == 0x1E6750u) {
        ctx->pc = 0x1E6754u;
        goto label_1e6754;
    }
    ctx->pc = 0x1E674Cu;
    {
        const bool branch_taken_0x1e674c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e674c) {
            ctx->pc = 0x1E6938u;
            goto label_1e6938;
        }
    }
    ctx->pc = 0x1E6754u;
label_1e6754:
    // 0x1e6754: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6758:
    // 0x1e6758: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1e6758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1e675c:
    // 0x1e675c: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1e675cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1e6760:
    // 0x1e6760: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6764:
    // 0x1e6764: 0x0  nop
    ctx->pc = 0x1e6764u;
    // NOP
label_1e6768:
    // 0x1e6768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e676c:
    // 0x1e676c: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e676cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e6770:
    // 0x1e6770: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6774:
    // 0x1e6774: 0x1840016c  blez        $v0, . + 4 + (0x16C << 2)
label_1e6778:
    if (ctx->pc == 0x1E6778u) {
        ctx->pc = 0x1E677Cu;
        goto label_1e677c;
    }
    ctx->pc = 0x1E6774u;
    {
        const bool branch_taken_0x1e6774 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e6774) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E677Cu;
label_1e677c:
    // 0x1e677c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e6780:
    // 0x1e6780: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1e6780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1e6784:
    // 0x1e6784: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
label_1e6788:
    if (ctx->pc == 0x1E6788u) {
        ctx->pc = 0x1E6788u;
            // 0x1e6788: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x1E678Cu;
        goto label_1e678c;
    }
    ctx->pc = 0x1E6784u;
    {
        const bool branch_taken_0x1e6784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6784u;
            // 0x1e6788: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6784) {
            ctx->pc = 0x1E68A0u;
            goto label_1e68a0;
        }
    }
    ctx->pc = 0x1E678Cu;
label_1e678c:
    // 0x1e678c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6790:
    if (ctx->pc == 0x1E6790u) {
        ctx->pc = 0x1E6794u;
        goto label_1e6794;
    }
    ctx->pc = 0x1E678Cu;
    {
        const bool branch_taken_0x1e678c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e678c) {
            ctx->pc = 0x1E67A0u;
            goto label_1e67a0;
        }
    }
    ctx->pc = 0x1E6794u;
label_1e6794:
    // 0x1e6794: 0x10000164  b           . + 4 + (0x164 << 2)
label_1e6798:
    if (ctx->pc == 0x1E6798u) {
        ctx->pc = 0x1E679Cu;
        goto label_1e679c;
    }
    ctx->pc = 0x1E6794u;
    {
        const bool branch_taken_0x1e6794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6794) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E679Cu;
label_1e679c:
    // 0x1e679c: 0x0  nop
    ctx->pc = 0x1e679cu;
    // NOP
label_1e67a0:
    // 0x1e67a0: 0xc065d00  jal         func_197400
label_1e67a4:
    if (ctx->pc == 0x1E67A4u) {
        ctx->pc = 0x1E67A8u;
        goto label_1e67a8;
    }
    ctx->pc = 0x1E67A0u;
    SET_GPR_U32(ctx, 31, 0x1E67A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67A8u; }
        if (ctx->pc != 0x1E67A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67A8u; }
        if (ctx->pc != 0x1E67A8u) { return; }
    }
    ctx->pc = 0x1E67A8u;
label_1e67a8:
    // 0x1e67a8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e67a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e67ac:
    // 0x1e67ac: 0x1420015e  bnez        $at, . + 4 + (0x15E << 2)
label_1e67b0:
    if (ctx->pc == 0x1E67B0u) {
        ctx->pc = 0x1E67B4u;
        goto label_1e67b4;
    }
    ctx->pc = 0x1E67ACu;
    {
        const bool branch_taken_0x1e67ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e67ac) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E67B4u;
label_1e67b4:
    // 0x1e67b4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e67b8:
    // 0x1e67b8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e67b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e67bc:
    // 0x1e67bc: 0xc0655a8  jal         func_1956A0
label_1e67c0:
    if (ctx->pc == 0x1E67C0u) {
        ctx->pc = 0x1E67C0u;
            // 0x1e67c0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E67C4u;
        goto label_1e67c4;
    }
    ctx->pc = 0x1E67BCu;
    SET_GPR_U32(ctx, 31, 0x1E67C4u);
    ctx->pc = 0x1E67C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67BCu;
            // 0x1e67c0: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67C4u; }
        if (ctx->pc != 0x1E67C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67C4u; }
        if (ctx->pc != 0x1E67C4u) { return; }
    }
    ctx->pc = 0x1E67C4u;
label_1e67c4:
    // 0x1e67c4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e67c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e67c8:
    // 0x1e67c8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e67c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e67cc:
    // 0x1e67cc: 0xc0655a8  jal         func_1956A0
label_1e67d0:
    if (ctx->pc == 0x1E67D0u) {
        ctx->pc = 0x1E67D0u;
            // 0x1e67d0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E67D4u;
        goto label_1e67d4;
    }
    ctx->pc = 0x1E67CCu;
    SET_GPR_U32(ctx, 31, 0x1E67D4u);
    ctx->pc = 0x1E67D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67CCu;
            // 0x1e67d0: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67D4u; }
        if (ctx->pc != 0x1E67D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67D4u; }
        if (ctx->pc != 0x1E67D4u) { return; }
    }
    ctx->pc = 0x1E67D4u;
label_1e67d4:
    // 0x1e67d4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e67d8:
    // 0x1e67d8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1e67dc:
    // 0x1e67dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e67e0:
    // 0x1e67e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e67e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e67e4:
    // 0x1e67e4: 0xc0655b0  jal         func_1956C0
label_1e67e8:
    if (ctx->pc == 0x1E67E8u) {
        ctx->pc = 0x1E67E8u;
            // 0x1e67e8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E67ECu;
        goto label_1e67ec;
    }
    ctx->pc = 0x1E67E4u;
    SET_GPR_U32(ctx, 31, 0x1E67ECu);
    ctx->pc = 0x1E67E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67E4u;
            // 0x1e67e8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67ECu; }
        if (ctx->pc != 0x1E67ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E67ECu; }
        if (ctx->pc != 0x1E67ECu) { return; }
    }
    ctx->pc = 0x1E67ECu;
label_1e67ec:
    // 0x1e67ec: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e67ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e67f0:
    // 0x1e67f0: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1e67f4:
    // 0x1e67f4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e67f8:
    // 0x1e67f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e67f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e67fc:
    // 0x1e67fc: 0xc0655b0  jal         func_1956C0
label_1e6800:
    if (ctx->pc == 0x1E6800u) {
        ctx->pc = 0x1E6800u;
            // 0x1e6800: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6804u;
        goto label_1e6804;
    }
    ctx->pc = 0x1E67FCu;
    SET_GPR_U32(ctx, 31, 0x1E6804u);
    ctx->pc = 0x1E6800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E67FCu;
            // 0x1e6800: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6804u; }
        if (ctx->pc != 0x1E6804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6804u; }
        if (ctx->pc != 0x1E6804u) { return; }
    }
    ctx->pc = 0x1E6804u;
label_1e6804:
    // 0x1e6804: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6808:
    // 0x1e6808: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1e680c:
    // 0x1e680c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6810:
    // 0x1e6810: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6814:
    // 0x1e6814: 0xc0655b0  jal         func_1956C0
label_1e6818:
    if (ctx->pc == 0x1E6818u) {
        ctx->pc = 0x1E6818u;
            // 0x1e6818: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E681Cu;
        goto label_1e681c;
    }
    ctx->pc = 0x1E6814u;
    SET_GPR_U32(ctx, 31, 0x1E681Cu);
    ctx->pc = 0x1E6818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6814u;
            // 0x1e6818: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E681Cu; }
        if (ctx->pc != 0x1E681Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E681Cu; }
        if (ctx->pc != 0x1E681Cu) { return; }
    }
    ctx->pc = 0x1E681Cu;
label_1e681c:
    // 0x1e681c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e681cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6820:
    // 0x1e6820: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1e6820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1e6824:
    // 0x1e6824: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6828:
    // 0x1e6828: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e682c:
    // 0x1e682c: 0xc0655b0  jal         func_1956C0
label_1e6830:
    if (ctx->pc == 0x1E6830u) {
        ctx->pc = 0x1E6830u;
            // 0x1e6830: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6834u;
        goto label_1e6834;
    }
    ctx->pc = 0x1E682Cu;
    SET_GPR_U32(ctx, 31, 0x1E6834u);
    ctx->pc = 0x1E6830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E682Cu;
            // 0x1e6830: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6834u; }
        if (ctx->pc != 0x1E6834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6834u; }
        if (ctx->pc != 0x1E6834u) { return; }
    }
    ctx->pc = 0x1E6834u;
label_1e6834:
    // 0x1e6834: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6838:
    // 0x1e6838: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1e6838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_1e683c:
    // 0x1e683c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6840:
    // 0x1e6840: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6844:
    // 0x1e6844: 0xc0655b0  jal         func_1956C0
label_1e6848:
    if (ctx->pc == 0x1E6848u) {
        ctx->pc = 0x1E6848u;
            // 0x1e6848: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E684Cu;
        goto label_1e684c;
    }
    ctx->pc = 0x1E6844u;
    SET_GPR_U32(ctx, 31, 0x1E684Cu);
    ctx->pc = 0x1E6848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6844u;
            // 0x1e6848: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E684Cu; }
        if (ctx->pc != 0x1E684Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E684Cu; }
        if (ctx->pc != 0x1E684Cu) { return; }
    }
    ctx->pc = 0x1E684Cu;
label_1e684c:
    // 0x1e684c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e684cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6850:
    // 0x1e6850: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1e6850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_1e6854:
    // 0x1e6854: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6858:
    // 0x1e6858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e685c:
    // 0x1e685c: 0xc0655b0  jal         func_1956C0
label_1e6860:
    if (ctx->pc == 0x1E6860u) {
        ctx->pc = 0x1E6860u;
            // 0x1e6860: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6864u;
        goto label_1e6864;
    }
    ctx->pc = 0x1E685Cu;
    SET_GPR_U32(ctx, 31, 0x1E6864u);
    ctx->pc = 0x1E6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E685Cu;
            // 0x1e6860: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6864u; }
        if (ctx->pc != 0x1E6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6864u; }
        if (ctx->pc != 0x1E6864u) { return; }
    }
    ctx->pc = 0x1E6864u;
label_1e6864:
    // 0x1e6864: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6868:
    // 0x1e6868: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1e6868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1e686c:
    // 0x1e686c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e686cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6870:
    // 0x1e6870: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6874:
    // 0x1e6874: 0xc0655b0  jal         func_1956C0
label_1e6878:
    if (ctx->pc == 0x1E6878u) {
        ctx->pc = 0x1E6878u;
            // 0x1e6878: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E687Cu;
        goto label_1e687c;
    }
    ctx->pc = 0x1E6874u;
    SET_GPR_U32(ctx, 31, 0x1E687Cu);
    ctx->pc = 0x1E6878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6874u;
            // 0x1e6878: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E687Cu; }
        if (ctx->pc != 0x1E687Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E687Cu; }
        if (ctx->pc != 0x1E687Cu) { return; }
    }
    ctx->pc = 0x1E687Cu;
label_1e687c:
    // 0x1e687c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6880:
    // 0x1e6880: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1e6880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1e6884:
    // 0x1e6884: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6888:
    // 0x1e6888: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e688c:
    // 0x1e688c: 0xc0655b0  jal         func_1956C0
label_1e6890:
    if (ctx->pc == 0x1E6890u) {
        ctx->pc = 0x1E6890u;
            // 0x1e6890: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6894u;
        goto label_1e6894;
    }
    ctx->pc = 0x1E688Cu;
    SET_GPR_U32(ctx, 31, 0x1E6894u);
    ctx->pc = 0x1E6890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E688Cu;
            // 0x1e6890: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6894u; }
        if (ctx->pc != 0x1E6894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6894u; }
        if (ctx->pc != 0x1E6894u) { return; }
    }
    ctx->pc = 0x1E6894u;
label_1e6894:
    // 0x1e6894: 0x10000124  b           . + 4 + (0x124 << 2)
label_1e6898:
    if (ctx->pc == 0x1E6898u) {
        ctx->pc = 0x1E689Cu;
        goto label_1e689c;
    }
    ctx->pc = 0x1E6894u;
    {
        const bool branch_taken_0x1e6894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6894) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E689Cu;
label_1e689c:
    // 0x1e689c: 0x0  nop
    ctx->pc = 0x1e689cu;
    // NOP
label_1e68a0:
    // 0x1e68a0: 0xc065d00  jal         func_197400
label_1e68a4:
    if (ctx->pc == 0x1E68A4u) {
        ctx->pc = 0x1E68A8u;
        goto label_1e68a8;
    }
    ctx->pc = 0x1E68A0u;
    SET_GPR_U32(ctx, 31, 0x1E68A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68A8u; }
        if (ctx->pc != 0x1E68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68A8u; }
        if (ctx->pc != 0x1E68A8u) { return; }
    }
    ctx->pc = 0x1E68A8u;
label_1e68a8:
    // 0x1e68a8: 0x1840011f  blez        $v0, . + 4 + (0x11F << 2)
label_1e68ac:
    if (ctx->pc == 0x1E68ACu) {
        ctx->pc = 0x1E68B0u;
        goto label_1e68b0;
    }
    ctx->pc = 0x1E68A8u;
    {
        const bool branch_taken_0x1e68a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e68a8) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E68B0u;
label_1e68b0:
    // 0x1e68b0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e68b4:
    // 0x1e68b4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e68b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e68b8:
    // 0x1e68b8: 0xc0655a8  jal         func_1956A0
label_1e68bc:
    if (ctx->pc == 0x1E68BCu) {
        ctx->pc = 0x1E68BCu;
            // 0x1e68bc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E68C0u;
        goto label_1e68c0;
    }
    ctx->pc = 0x1E68B8u;
    SET_GPR_U32(ctx, 31, 0x1E68C0u);
    ctx->pc = 0x1E68BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68B8u;
            // 0x1e68bc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C0u; }
        if (ctx->pc != 0x1E68C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68C0u; }
        if (ctx->pc != 0x1E68C0u) { return; }
    }
    ctx->pc = 0x1E68C0u;
label_1e68c0:
    // 0x1e68c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e68c4:
    // 0x1e68c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e68c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e68c8:
    // 0x1e68c8: 0xc0655a8  jal         func_1956A0
label_1e68cc:
    if (ctx->pc == 0x1E68CCu) {
        ctx->pc = 0x1E68CCu;
            // 0x1e68cc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E68D0u;
        goto label_1e68d0;
    }
    ctx->pc = 0x1E68C8u;
    SET_GPR_U32(ctx, 31, 0x1E68D0u);
    ctx->pc = 0x1E68CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68C8u;
            // 0x1e68cc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D0u; }
        if (ctx->pc != 0x1E68D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68D0u; }
        if (ctx->pc != 0x1E68D0u) { return; }
    }
    ctx->pc = 0x1E68D0u;
label_1e68d0:
    // 0x1e68d0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e68d4:
    // 0x1e68d4: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1e68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_1e68d8:
    // 0x1e68d8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e68d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e68dc:
    // 0x1e68dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e68dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e68e0:
    // 0x1e68e0: 0xc0655b0  jal         func_1956C0
label_1e68e4:
    if (ctx->pc == 0x1E68E4u) {
        ctx->pc = 0x1E68E4u;
            // 0x1e68e4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E68E8u;
        goto label_1e68e8;
    }
    ctx->pc = 0x1E68E0u;
    SET_GPR_U32(ctx, 31, 0x1E68E8u);
    ctx->pc = 0x1E68E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68E0u;
            // 0x1e68e4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68E8u; }
        if (ctx->pc != 0x1E68E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E68E8u; }
        if (ctx->pc != 0x1E68E8u) { return; }
    }
    ctx->pc = 0x1E68E8u;
label_1e68e8:
    // 0x1e68e8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e68e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e68ec:
    // 0x1e68ec: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1e68ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_1e68f0:
    // 0x1e68f0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e68f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e68f4:
    // 0x1e68f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e68f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e68f8:
    // 0x1e68f8: 0xc0655b0  jal         func_1956C0
label_1e68fc:
    if (ctx->pc == 0x1E68FCu) {
        ctx->pc = 0x1E68FCu;
            // 0x1e68fc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6900u;
        goto label_1e6900;
    }
    ctx->pc = 0x1E68F8u;
    SET_GPR_U32(ctx, 31, 0x1E6900u);
    ctx->pc = 0x1E68FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E68F8u;
            // 0x1e68fc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6900u; }
        if (ctx->pc != 0x1E6900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6900u; }
        if (ctx->pc != 0x1E6900u) { return; }
    }
    ctx->pc = 0x1E6900u;
label_1e6900:
    // 0x1e6900: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6904:
    // 0x1e6904: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x1e6904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_1e6908:
    // 0x1e6908: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e690c:
    // 0x1e690c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e690cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6910:
    // 0x1e6910: 0xc0655b0  jal         func_1956C0
label_1e6914:
    if (ctx->pc == 0x1E6914u) {
        ctx->pc = 0x1E6914u;
            // 0x1e6914: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6918u;
        goto label_1e6918;
    }
    ctx->pc = 0x1E6910u;
    SET_GPR_U32(ctx, 31, 0x1E6918u);
    ctx->pc = 0x1E6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6910u;
            // 0x1e6914: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6918u; }
        if (ctx->pc != 0x1E6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6918u; }
        if (ctx->pc != 0x1E6918u) { return; }
    }
    ctx->pc = 0x1E6918u;
label_1e6918:
    // 0x1e6918: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e691c:
    // 0x1e691c: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x1e691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_1e6920:
    // 0x1e6920: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6924:
    // 0x1e6924: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6928:
    // 0x1e6928: 0xc0655b0  jal         func_1956C0
label_1e692c:
    if (ctx->pc == 0x1E692Cu) {
        ctx->pc = 0x1E692Cu;
            // 0x1e692c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6930u;
        goto label_1e6930;
    }
    ctx->pc = 0x1E6928u;
    SET_GPR_U32(ctx, 31, 0x1E6930u);
    ctx->pc = 0x1E692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6928u;
            // 0x1e692c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6930u; }
        if (ctx->pc != 0x1E6930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6930u; }
        if (ctx->pc != 0x1E6930u) { return; }
    }
    ctx->pc = 0x1E6930u;
label_1e6930:
    // 0x1e6930: 0x100000fd  b           . + 4 + (0xFD << 2)
label_1e6934:
    if (ctx->pc == 0x1E6934u) {
        ctx->pc = 0x1E6938u;
        goto label_1e6938;
    }
    ctx->pc = 0x1E6930u;
    {
        const bool branch_taken_0x1e6930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6930) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6938u;
label_1e6938:
    // 0x1e6938: 0x286100a0  slti        $at, $v1, 0xA0
    ctx->pc = 0x1e6938u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)160) ? 1 : 0);
label_1e693c:
    // 0x1e693c: 0x102000ae  beqz        $at, . + 4 + (0xAE << 2)
label_1e6940:
    if (ctx->pc == 0x1E6940u) {
        ctx->pc = 0x1E6944u;
        goto label_1e6944;
    }
    ctx->pc = 0x1E693Cu;
    {
        const bool branch_taken_0x1e693c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e693c) {
            ctx->pc = 0x1E6BF8u;
            goto label_1e6bf8;
        }
    }
    ctx->pc = 0x1E6944u;
label_1e6944:
    // 0x1e6944: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6948:
    // 0x1e6948: 0x184000f7  blez        $v0, . + 4 + (0xF7 << 2)
label_1e694c:
    if (ctx->pc == 0x1E694Cu) {
        ctx->pc = 0x1E694Cu;
            // 0x1e694c: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x1E6950u;
        goto label_1e6950;
    }
    ctx->pc = 0x1E6948u;
    {
        const bool branch_taken_0x1e6948 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6948u;
            // 0x1e694c: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6948) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6950u;
label_1e6950:
    // 0x1e6950: 0x10620069  beq         $v1, $v0, . + 4 + (0x69 << 2)
label_1e6954:
    if (ctx->pc == 0x1E6954u) {
        ctx->pc = 0x1E6958u;
        goto label_1e6958;
    }
    ctx->pc = 0x1E6950u;
    {
        const bool branch_taken_0x1e6950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6950) {
            ctx->pc = 0x1E6AF8u;
            goto label_1e6af8;
        }
    }
    ctx->pc = 0x1E6958u;
label_1e6958:
    // 0x1e6958: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e695c:
    // 0x1e695c: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_1e6960:
    if (ctx->pc == 0x1E6960u) {
        ctx->pc = 0x1E6960u;
            // 0x1e6960: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1E6964u;
        goto label_1e6964;
    }
    ctx->pc = 0x1E695Cu;
    {
        const bool branch_taken_0x1e695c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E695Cu;
            // 0x1e6960: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e695c) {
            ctx->pc = 0x1E6A60u;
            goto label_1e6a60;
        }
    }
    ctx->pc = 0x1E6964u;
label_1e6964:
    // 0x1e6964: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6968:
    if (ctx->pc == 0x1E6968u) {
        ctx->pc = 0x1E696Cu;
        goto label_1e696c;
    }
    ctx->pc = 0x1E6964u;
    {
        const bool branch_taken_0x1e6964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6964) {
            ctx->pc = 0x1E6978u;
            goto label_1e6978;
        }
    }
    ctx->pc = 0x1E696Cu;
label_1e696c:
    // 0x1e696c: 0x100000ee  b           . + 4 + (0xEE << 2)
label_1e6970:
    if (ctx->pc == 0x1E6970u) {
        ctx->pc = 0x1E6974u;
        goto label_1e6974;
    }
    ctx->pc = 0x1E696Cu;
    {
        const bool branch_taken_0x1e696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e696c) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6974u;
label_1e6974:
    // 0x1e6974: 0x0  nop
    ctx->pc = 0x1e6974u;
    // NOP
label_1e6978:
    // 0x1e6978: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e697c:
    // 0x1e697c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e697cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6980:
    // 0x1e6980: 0xc0655a8  jal         func_1956A0
label_1e6984:
    if (ctx->pc == 0x1E6984u) {
        ctx->pc = 0x1E6984u;
            // 0x1e6984: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E6988u;
        goto label_1e6988;
    }
    ctx->pc = 0x1E6980u;
    SET_GPR_U32(ctx, 31, 0x1E6988u);
    ctx->pc = 0x1E6984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6980u;
            // 0x1e6984: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6988u; }
        if (ctx->pc != 0x1E6988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6988u; }
        if (ctx->pc != 0x1E6988u) { return; }
    }
    ctx->pc = 0x1E6988u;
label_1e6988:
    // 0x1e6988: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e698c:
    // 0x1e698c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6990:
    // 0x1e6990: 0xc0655a8  jal         func_1956A0
label_1e6994:
    if (ctx->pc == 0x1E6994u) {
        ctx->pc = 0x1E6994u;
            // 0x1e6994: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E6998u;
        goto label_1e6998;
    }
    ctx->pc = 0x1E6990u;
    SET_GPR_U32(ctx, 31, 0x1E6998u);
    ctx->pc = 0x1E6994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6990u;
            // 0x1e6994: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6998u; }
        if (ctx->pc != 0x1E6998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6998u; }
        if (ctx->pc != 0x1E6998u) { return; }
    }
    ctx->pc = 0x1E6998u;
label_1e6998:
    // 0x1e6998: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e699c:
    // 0x1e699c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e699cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1e69a0:
    // 0x1e69a0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e69a4:
    // 0x1e69a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e69a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e69a8:
    // 0x1e69a8: 0xc0655b0  jal         func_1956C0
label_1e69ac:
    if (ctx->pc == 0x1E69ACu) {
        ctx->pc = 0x1E69ACu;
            // 0x1e69ac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E69B0u;
        goto label_1e69b0;
    }
    ctx->pc = 0x1E69A8u;
    SET_GPR_U32(ctx, 31, 0x1E69B0u);
    ctx->pc = 0x1E69ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69A8u;
            // 0x1e69ac: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69B0u; }
        if (ctx->pc != 0x1E69B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69B0u; }
        if (ctx->pc != 0x1E69B0u) { return; }
    }
    ctx->pc = 0x1E69B0u;
label_1e69b0:
    // 0x1e69b0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e69b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e69b4:
    // 0x1e69b4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1e69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1e69b8:
    // 0x1e69b8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e69b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e69bc:
    // 0x1e69bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e69bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e69c0:
    // 0x1e69c0: 0xc0655b0  jal         func_1956C0
label_1e69c4:
    if (ctx->pc == 0x1E69C4u) {
        ctx->pc = 0x1E69C4u;
            // 0x1e69c4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E69C8u;
        goto label_1e69c8;
    }
    ctx->pc = 0x1E69C0u;
    SET_GPR_U32(ctx, 31, 0x1E69C8u);
    ctx->pc = 0x1E69C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69C0u;
            // 0x1e69c4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69C8u; }
        if (ctx->pc != 0x1E69C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69C8u; }
        if (ctx->pc != 0x1E69C8u) { return; }
    }
    ctx->pc = 0x1E69C8u;
label_1e69c8:
    // 0x1e69c8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e69cc:
    // 0x1e69cc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1e69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1e69d0:
    // 0x1e69d0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e69d4:
    // 0x1e69d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e69d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e69d8:
    // 0x1e69d8: 0xc0655b0  jal         func_1956C0
label_1e69dc:
    if (ctx->pc == 0x1E69DCu) {
        ctx->pc = 0x1E69DCu;
            // 0x1e69dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E69E0u;
        goto label_1e69e0;
    }
    ctx->pc = 0x1E69D8u;
    SET_GPR_U32(ctx, 31, 0x1E69E0u);
    ctx->pc = 0x1E69DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69D8u;
            // 0x1e69dc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69E0u; }
        if (ctx->pc != 0x1E69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69E0u; }
        if (ctx->pc != 0x1E69E0u) { return; }
    }
    ctx->pc = 0x1E69E0u;
label_1e69e0:
    // 0x1e69e0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e69e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e69e4:
    // 0x1e69e4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1e69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
label_1e69e8:
    // 0x1e69e8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e69e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e69ec:
    // 0x1e69ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e69ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e69f0:
    // 0x1e69f0: 0xc0655b0  jal         func_1956C0
label_1e69f4:
    if (ctx->pc == 0x1E69F4u) {
        ctx->pc = 0x1E69F4u;
            // 0x1e69f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E69F8u;
        goto label_1e69f8;
    }
    ctx->pc = 0x1E69F0u;
    SET_GPR_U32(ctx, 31, 0x1E69F8u);
    ctx->pc = 0x1E69F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E69F0u;
            // 0x1e69f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69F8u; }
        if (ctx->pc != 0x1E69F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E69F8u; }
        if (ctx->pc != 0x1E69F8u) { return; }
    }
    ctx->pc = 0x1E69F8u;
label_1e69f8:
    // 0x1e69f8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e69f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e69fc:
    // 0x1e69fc: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1e69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_1e6a00:
    // 0x1e6a00: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a04:
    // 0x1e6a04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6a08:
    // 0x1e6a08: 0xc0655b0  jal         func_1956C0
label_1e6a0c:
    if (ctx->pc == 0x1E6A0Cu) {
        ctx->pc = 0x1E6A0Cu;
            // 0x1e6a0c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6A10u;
        goto label_1e6a10;
    }
    ctx->pc = 0x1E6A08u;
    SET_GPR_U32(ctx, 31, 0x1E6A10u);
    ctx->pc = 0x1E6A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A08u;
            // 0x1e6a0c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A10u; }
        if (ctx->pc != 0x1E6A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A10u; }
        if (ctx->pc != 0x1E6A10u) { return; }
    }
    ctx->pc = 0x1E6A10u;
label_1e6a10:
    // 0x1e6a10: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a14:
    // 0x1e6a14: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1e6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
label_1e6a18:
    // 0x1e6a18: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a1c:
    // 0x1e6a1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6a20:
    // 0x1e6a20: 0xc0655b0  jal         func_1956C0
label_1e6a24:
    if (ctx->pc == 0x1E6A24u) {
        ctx->pc = 0x1E6A24u;
            // 0x1e6a24: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6A28u;
        goto label_1e6a28;
    }
    ctx->pc = 0x1E6A20u;
    SET_GPR_U32(ctx, 31, 0x1E6A28u);
    ctx->pc = 0x1E6A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A20u;
            // 0x1e6a24: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A28u; }
        if (ctx->pc != 0x1E6A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A28u; }
        if (ctx->pc != 0x1E6A28u) { return; }
    }
    ctx->pc = 0x1E6A28u;
label_1e6a28:
    // 0x1e6a28: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a2c:
    // 0x1e6a2c: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1e6a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1e6a30:
    // 0x1e6a30: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a34:
    // 0x1e6a34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6a38:
    // 0x1e6a38: 0xc0655b0  jal         func_1956C0
label_1e6a3c:
    if (ctx->pc == 0x1E6A3Cu) {
        ctx->pc = 0x1E6A3Cu;
            // 0x1e6a3c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6A40u;
        goto label_1e6a40;
    }
    ctx->pc = 0x1E6A38u;
    SET_GPR_U32(ctx, 31, 0x1E6A40u);
    ctx->pc = 0x1E6A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A38u;
            // 0x1e6a3c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A40u; }
        if (ctx->pc != 0x1E6A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A40u; }
        if (ctx->pc != 0x1E6A40u) { return; }
    }
    ctx->pc = 0x1E6A40u;
label_1e6a40:
    // 0x1e6a40: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a44:
    // 0x1e6a44: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x1e6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_1e6a48:
    // 0x1e6a48: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a4c:
    // 0x1e6a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6a50:
    // 0x1e6a50: 0xc0655b0  jal         func_1956C0
label_1e6a54:
    if (ctx->pc == 0x1E6A54u) {
        ctx->pc = 0x1E6A54u;
            // 0x1e6a54: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6A58u;
        goto label_1e6a58;
    }
    ctx->pc = 0x1E6A50u;
    SET_GPR_U32(ctx, 31, 0x1E6A58u);
    ctx->pc = 0x1E6A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A50u;
            // 0x1e6a54: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A58u; }
        if (ctx->pc != 0x1E6A58u) { return; }
    }
    ctx->pc = 0x1E6A58u;
label_1e6a58:
    // 0x1e6a58: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_1e6a5c:
    if (ctx->pc == 0x1E6A5Cu) {
        ctx->pc = 0x1E6A60u;
        goto label_1e6a60;
    }
    ctx->pc = 0x1E6A58u;
    {
        const bool branch_taken_0x1e6a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6a58) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6A60u;
label_1e6a60:
    // 0x1e6a60: 0xc065d00  jal         func_197400
label_1e6a64:
    if (ctx->pc == 0x1E6A64u) {
        ctx->pc = 0x1E6A68u;
        goto label_1e6a68;
    }
    ctx->pc = 0x1E6A60u;
    SET_GPR_U32(ctx, 31, 0x1E6A68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A68u; }
        if (ctx->pc != 0x1E6A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A68u; }
        if (ctx->pc != 0x1E6A68u) { return; }
    }
    ctx->pc = 0x1E6A68u;
label_1e6a68:
    // 0x1e6a68: 0x184000af  blez        $v0, . + 4 + (0xAF << 2)
label_1e6a6c:
    if (ctx->pc == 0x1E6A6Cu) {
        ctx->pc = 0x1E6A70u;
        goto label_1e6a70;
    }
    ctx->pc = 0x1E6A68u;
    {
        const bool branch_taken_0x1e6a68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e6a68) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6A70u;
label_1e6a70:
    // 0x1e6a70: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a74:
    // 0x1e6a74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a78:
    // 0x1e6a78: 0xc0655a8  jal         func_1956A0
label_1e6a7c:
    if (ctx->pc == 0x1E6A7Cu) {
        ctx->pc = 0x1E6A7Cu;
            // 0x1e6a7c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E6A80u;
        goto label_1e6a80;
    }
    ctx->pc = 0x1E6A78u;
    SET_GPR_U32(ctx, 31, 0x1E6A80u);
    ctx->pc = 0x1E6A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A78u;
            // 0x1e6a7c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A80u; }
        if (ctx->pc != 0x1E6A80u) { return; }
    }
    ctx->pc = 0x1E6A80u;
label_1e6a80:
    // 0x1e6a80: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a84:
    // 0x1e6a84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a88:
    // 0x1e6a88: 0xc0655a8  jal         func_1956A0
label_1e6a8c:
    if (ctx->pc == 0x1E6A8Cu) {
        ctx->pc = 0x1E6A8Cu;
            // 0x1e6a8c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E6A90u;
        goto label_1e6a90;
    }
    ctx->pc = 0x1E6A88u;
    SET_GPR_U32(ctx, 31, 0x1E6A90u);
    ctx->pc = 0x1E6A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6A88u;
            // 0x1e6a8c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A90u; }
        if (ctx->pc != 0x1E6A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6A90u; }
        if (ctx->pc != 0x1E6A90u) { return; }
    }
    ctx->pc = 0x1E6A90u;
label_1e6a90:
    // 0x1e6a90: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6a94:
    // 0x1e6a94: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1e6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_1e6a98:
    // 0x1e6a98: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6a9c:
    // 0x1e6a9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6aa0:
    // 0x1e6aa0: 0xc0655b0  jal         func_1956C0
label_1e6aa4:
    if (ctx->pc == 0x1E6AA4u) {
        ctx->pc = 0x1E6AA4u;
            // 0x1e6aa4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6AA8u;
        goto label_1e6aa8;
    }
    ctx->pc = 0x1E6AA0u;
    SET_GPR_U32(ctx, 31, 0x1E6AA8u);
    ctx->pc = 0x1E6AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AA0u;
            // 0x1e6aa4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AA8u; }
        if (ctx->pc != 0x1E6AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AA8u; }
        if (ctx->pc != 0x1E6AA8u) { return; }
    }
    ctx->pc = 0x1E6AA8u;
label_1e6aa8:
    // 0x1e6aa8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6aac:
    // 0x1e6aac: 0x3c02420c  lui         $v0, 0x420C
    ctx->pc = 0x1e6aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16908 << 16));
label_1e6ab0:
    // 0x1e6ab0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6ab4:
    // 0x1e6ab4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6ab8:
    // 0x1e6ab8: 0xc0655b0  jal         func_1956C0
label_1e6abc:
    if (ctx->pc == 0x1E6ABCu) {
        ctx->pc = 0x1E6ABCu;
            // 0x1e6abc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6AC0u;
        goto label_1e6ac0;
    }
    ctx->pc = 0x1E6AB8u;
    SET_GPR_U32(ctx, 31, 0x1E6AC0u);
    ctx->pc = 0x1E6ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AB8u;
            // 0x1e6abc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AC0u; }
        if (ctx->pc != 0x1E6AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AC0u; }
        if (ctx->pc != 0x1E6AC0u) { return; }
    }
    ctx->pc = 0x1E6AC0u;
label_1e6ac0:
    // 0x1e6ac0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6ac4:
    // 0x1e6ac4: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x1e6ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_1e6ac8:
    // 0x1e6ac8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6acc:
    // 0x1e6acc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6accu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6ad0:
    // 0x1e6ad0: 0xc0655b0  jal         func_1956C0
label_1e6ad4:
    if (ctx->pc == 0x1E6AD4u) {
        ctx->pc = 0x1E6AD4u;
            // 0x1e6ad4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6AD8u;
        goto label_1e6ad8;
    }
    ctx->pc = 0x1E6AD0u;
    SET_GPR_U32(ctx, 31, 0x1E6AD8u);
    ctx->pc = 0x1E6AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AD0u;
            // 0x1e6ad4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD8u; }
        if (ctx->pc != 0x1E6AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AD8u; }
        if (ctx->pc != 0x1E6AD8u) { return; }
    }
    ctx->pc = 0x1E6AD8u;
label_1e6ad8:
    // 0x1e6ad8: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6adc:
    // 0x1e6adc: 0x3c02c20c  lui         $v0, 0xC20C
    ctx->pc = 0x1e6adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49676 << 16));
label_1e6ae0:
    // 0x1e6ae0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6ae4:
    // 0x1e6ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6ae8:
    // 0x1e6ae8: 0xc0655b0  jal         func_1956C0
label_1e6aec:
    if (ctx->pc == 0x1E6AECu) {
        ctx->pc = 0x1E6AECu;
            // 0x1e6aec: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6AF0u;
        goto label_1e6af0;
    }
    ctx->pc = 0x1E6AE8u;
    SET_GPR_U32(ctx, 31, 0x1E6AF0u);
    ctx->pc = 0x1E6AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6AE8u;
            // 0x1e6aec: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AF0u; }
        if (ctx->pc != 0x1E6AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6AF0u; }
        if (ctx->pc != 0x1E6AF0u) { return; }
    }
    ctx->pc = 0x1E6AF0u;
label_1e6af0:
    // 0x1e6af0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1e6af4:
    if (ctx->pc == 0x1E6AF4u) {
        ctx->pc = 0x1E6AF8u;
        goto label_1e6af8;
    }
    ctx->pc = 0x1E6AF0u;
    {
        const bool branch_taken_0x1e6af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6af0) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6AF8u;
label_1e6af8:
    // 0x1e6af8: 0xc065d00  jal         func_197400
label_1e6afc:
    if (ctx->pc == 0x1E6AFCu) {
        ctx->pc = 0x1E6B00u;
        goto label_1e6b00;
    }
    ctx->pc = 0x1E6AF8u;
    SET_GPR_U32(ctx, 31, 0x1E6B00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B00u; }
        if (ctx->pc != 0x1E6B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B00u; }
        if (ctx->pc != 0x1E6B00u) { return; }
    }
    ctx->pc = 0x1E6B00u;
label_1e6b00:
    // 0x1e6b00: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1e6b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e6b04:
    // 0x1e6b04: 0x14200088  bnez        $at, . + 4 + (0x88 << 2)
label_1e6b08:
    if (ctx->pc == 0x1E6B08u) {
        ctx->pc = 0x1E6B0Cu;
        goto label_1e6b0c;
    }
    ctx->pc = 0x1E6B04u;
    {
        const bool branch_taken_0x1e6b04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6b04) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6B0Cu;
label_1e6b0c:
    // 0x1e6b0c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b10:
    // 0x1e6b10: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b14:
    // 0x1e6b14: 0xc0655a8  jal         func_1956A0
label_1e6b18:
    if (ctx->pc == 0x1E6B18u) {
        ctx->pc = 0x1E6B18u;
            // 0x1e6b18: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E6B1Cu;
        goto label_1e6b1c;
    }
    ctx->pc = 0x1E6B14u;
    SET_GPR_U32(ctx, 31, 0x1E6B1Cu);
    ctx->pc = 0x1E6B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B14u;
            // 0x1e6b18: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B1Cu; }
        if (ctx->pc != 0x1E6B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B1Cu; }
        if (ctx->pc != 0x1E6B1Cu) { return; }
    }
    ctx->pc = 0x1E6B1Cu;
label_1e6b1c:
    // 0x1e6b1c: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e6b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b20:
    // 0x1e6b20: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b24:
    // 0x1e6b24: 0xc0655a8  jal         func_1956A0
label_1e6b28:
    if (ctx->pc == 0x1E6B28u) {
        ctx->pc = 0x1E6B28u;
            // 0x1e6b28: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E6B2Cu;
        goto label_1e6b2c;
    }
    ctx->pc = 0x1E6B24u;
    SET_GPR_U32(ctx, 31, 0x1E6B2Cu);
    ctx->pc = 0x1E6B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B24u;
            // 0x1e6b28: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B2Cu; }
        if (ctx->pc != 0x1E6B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B2Cu; }
        if (ctx->pc != 0x1E6B2Cu) { return; }
    }
    ctx->pc = 0x1E6B2Cu;
label_1e6b2c:
    // 0x1e6b2c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b30:
    // 0x1e6b30: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e6b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e6b34:
    // 0x1e6b34: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b38:
    // 0x1e6b38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6b3c:
    // 0x1e6b3c: 0xc0655b0  jal         func_1956C0
label_1e6b40:
    if (ctx->pc == 0x1E6B40u) {
        ctx->pc = 0x1E6B40u;
            // 0x1e6b40: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6B44u;
        goto label_1e6b44;
    }
    ctx->pc = 0x1E6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B44u);
    ctx->pc = 0x1E6B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B3Cu;
            // 0x1e6b40: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B44u; }
        if (ctx->pc != 0x1E6B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B44u; }
        if (ctx->pc != 0x1E6B44u) { return; }
    }
    ctx->pc = 0x1E6B44u;
label_1e6b44:
    // 0x1e6b44: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b48:
    // 0x1e6b48: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e6b4c:
    // 0x1e6b4c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b50:
    // 0x1e6b50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6b54:
    // 0x1e6b54: 0xc0655b0  jal         func_1956C0
label_1e6b58:
    if (ctx->pc == 0x1E6B58u) {
        ctx->pc = 0x1E6B58u;
            // 0x1e6b58: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6B5Cu;
        goto label_1e6b5c;
    }
    ctx->pc = 0x1E6B54u;
    SET_GPR_U32(ctx, 31, 0x1E6B5Cu);
    ctx->pc = 0x1E6B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B54u;
            // 0x1e6b58: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B5Cu; }
        if (ctx->pc != 0x1E6B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B5Cu; }
        if (ctx->pc != 0x1E6B5Cu) { return; }
    }
    ctx->pc = 0x1E6B5Cu;
label_1e6b5c:
    // 0x1e6b5c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b60:
    // 0x1e6b60: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1e6b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1e6b64:
    // 0x1e6b64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b68:
    // 0x1e6b68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6b6c:
    // 0x1e6b6c: 0xc0655b0  jal         func_1956C0
label_1e6b70:
    if (ctx->pc == 0x1E6B70u) {
        ctx->pc = 0x1E6B70u;
            // 0x1e6b70: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6B74u;
        goto label_1e6b74;
    }
    ctx->pc = 0x1E6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1E6B74u);
    ctx->pc = 0x1E6B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B6Cu;
            // 0x1e6b70: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B74u; }
        if (ctx->pc != 0x1E6B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B74u; }
        if (ctx->pc != 0x1E6B74u) { return; }
    }
    ctx->pc = 0x1E6B74u;
label_1e6b74:
    // 0x1e6b74: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b78:
    // 0x1e6b78: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1e6b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_1e6b7c:
    // 0x1e6b7c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b80:
    // 0x1e6b80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6b80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6b84:
    // 0x1e6b84: 0xc0655b0  jal         func_1956C0
label_1e6b88:
    if (ctx->pc == 0x1E6B88u) {
        ctx->pc = 0x1E6B88u;
            // 0x1e6b88: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6B8Cu;
        goto label_1e6b8c;
    }
    ctx->pc = 0x1E6B84u;
    SET_GPR_U32(ctx, 31, 0x1E6B8Cu);
    ctx->pc = 0x1E6B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B84u;
            // 0x1e6b88: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B8Cu; }
        if (ctx->pc != 0x1E6B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6B8Cu; }
        if (ctx->pc != 0x1E6B8Cu) { return; }
    }
    ctx->pc = 0x1E6B8Cu;
label_1e6b8c:
    // 0x1e6b8c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6b90:
    // 0x1e6b90: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1e6b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_1e6b94:
    // 0x1e6b94: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6b98:
    // 0x1e6b98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6b9c:
    // 0x1e6b9c: 0xc0655b0  jal         func_1956C0
label_1e6ba0:
    if (ctx->pc == 0x1E6BA0u) {
        ctx->pc = 0x1E6BA0u;
            // 0x1e6ba0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6BA4u;
        goto label_1e6ba4;
    }
    ctx->pc = 0x1E6B9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6BA4u);
    ctx->pc = 0x1E6BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6B9Cu;
            // 0x1e6ba0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA4u; }
        if (ctx->pc != 0x1E6BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BA4u; }
        if (ctx->pc != 0x1E6BA4u) { return; }
    }
    ctx->pc = 0x1E6BA4u;
label_1e6ba4:
    // 0x1e6ba4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6ba8:
    // 0x1e6ba8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1e6ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
label_1e6bac:
    // 0x1e6bac: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6bb0:
    // 0x1e6bb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6bb4:
    // 0x1e6bb4: 0xc0655b0  jal         func_1956C0
label_1e6bb8:
    if (ctx->pc == 0x1E6BB8u) {
        ctx->pc = 0x1E6BB8u;
            // 0x1e6bb8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6BBCu;
        goto label_1e6bbc;
    }
    ctx->pc = 0x1E6BB4u;
    SET_GPR_U32(ctx, 31, 0x1E6BBCu);
    ctx->pc = 0x1E6BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BB4u;
            // 0x1e6bb8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BBCu; }
        if (ctx->pc != 0x1E6BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BBCu; }
        if (ctx->pc != 0x1E6BBCu) { return; }
    }
    ctx->pc = 0x1E6BBCu;
label_1e6bbc:
    // 0x1e6bbc: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6bc0:
    // 0x1e6bc0: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1e6bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1e6bc4:
    // 0x1e6bc4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6bc8:
    // 0x1e6bc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6bcc:
    // 0x1e6bcc: 0xc0655b0  jal         func_1956C0
label_1e6bd0:
    if (ctx->pc == 0x1E6BD0u) {
        ctx->pc = 0x1E6BD0u;
            // 0x1e6bd0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E6BD4u;
        goto label_1e6bd4;
    }
    ctx->pc = 0x1E6BCCu;
    SET_GPR_U32(ctx, 31, 0x1E6BD4u);
    ctx->pc = 0x1E6BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BCCu;
            // 0x1e6bd0: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BD4u; }
        if (ctx->pc != 0x1E6BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BD4u; }
        if (ctx->pc != 0x1E6BD4u) { return; }
    }
    ctx->pc = 0x1E6BD4u;
label_1e6bd4:
    // 0x1e6bd4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6bd8:
    // 0x1e6bd8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1e6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
label_1e6bdc:
    // 0x1e6bdc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1e6bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6be0:
    // 0x1e6be0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e6be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6be4:
    // 0x1e6be4: 0xc0655b0  jal         func_1956C0
label_1e6be8:
    if (ctx->pc == 0x1E6BE8u) {
        ctx->pc = 0x1E6BE8u;
            // 0x1e6be8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E6BECu;
        goto label_1e6bec;
    }
    ctx->pc = 0x1E6BE4u;
    SET_GPR_U32(ctx, 31, 0x1E6BECu);
    ctx->pc = 0x1E6BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6BE4u;
            // 0x1e6be8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BECu; }
        if (ctx->pc != 0x1E6BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6BECu; }
        if (ctx->pc != 0x1E6BECu) { return; }
    }
    ctx->pc = 0x1E6BECu;
label_1e6bec:
    // 0x1e6bec: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1e6bf0:
    if (ctx->pc == 0x1E6BF0u) {
        ctx->pc = 0x1E6BF4u;
        goto label_1e6bf4;
    }
    ctx->pc = 0x1E6BECu;
    {
        const bool branch_taken_0x1e6bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bec) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6BF4u;
label_1e6bf4:
    // 0x1e6bf4: 0x0  nop
    ctx->pc = 0x1e6bf4u;
    // NOP
label_1e6bf8:
    // 0x1e6bf8: 0x286100a1  slti        $at, $v1, 0xA1
    ctx->pc = 0x1e6bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)161) ? 1 : 0);
label_1e6bfc:
    // 0x1e6bfc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_1e6c00:
    if (ctx->pc == 0x1E6C00u) {
        ctx->pc = 0x1E6C04u;
        goto label_1e6c04;
    }
    ctx->pc = 0x1E6BFCu;
    {
        const bool branch_taken_0x1e6bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6bfc) {
            ctx->pc = 0x1E6C38u;
            goto label_1e6c38;
        }
    }
    ctx->pc = 0x1E6C04u;
label_1e6c04:
    // 0x1e6c04: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6c08:
    // 0x1e6c08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6c0c:
    // 0x1e6c0c: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x1e6c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_1e6c10:
    // 0x1e6c10: 0xc065590  jal         func_195640
label_1e6c14:
    if (ctx->pc == 0x1E6C14u) {
        ctx->pc = 0x1E6C14u;
            // 0x1e6c14: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6C18u;
        goto label_1e6c18;
    }
    ctx->pc = 0x1E6C10u;
    SET_GPR_U32(ctx, 31, 0x1E6C18u);
    ctx->pc = 0x1E6C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C10u;
            // 0x1e6c14: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C18u; }
        if (ctx->pc != 0x1E6C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C18u; }
        if (ctx->pc != 0x1E6C18u) { return; }
    }
    ctx->pc = 0x1E6C18u;
label_1e6c18:
    // 0x1e6c18: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6c1c:
    // 0x1e6c1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6c20:
    // 0x1e6c20: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x1e6c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_1e6c24:
    // 0x1e6c24: 0xc065590  jal         func_195640
label_1e6c28:
    if (ctx->pc == 0x1E6C28u) {
        ctx->pc = 0x1E6C28u;
            // 0x1e6c28: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6C2Cu;
        goto label_1e6c2c;
    }
    ctx->pc = 0x1E6C24u;
    SET_GPR_U32(ctx, 31, 0x1E6C2Cu);
    ctx->pc = 0x1E6C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C24u;
            // 0x1e6c28: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C2Cu; }
        if (ctx->pc != 0x1E6C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C2Cu; }
        if (ctx->pc != 0x1E6C2Cu) { return; }
    }
    ctx->pc = 0x1E6C2Cu;
label_1e6c2c:
    // 0x1e6c2c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1e6c30:
    if (ctx->pc == 0x1E6C30u) {
        ctx->pc = 0x1E6C34u;
        goto label_1e6c34;
    }
    ctx->pc = 0x1E6C2Cu;
    {
        const bool branch_taken_0x1e6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c2c) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6C34u;
label_1e6c34:
    // 0x1e6c34: 0x0  nop
    ctx->pc = 0x1e6c34u;
    // NOP
label_1e6c38:
    // 0x1e6c38: 0x286100be  slti        $at, $v1, 0xBE
    ctx->pc = 0x1e6c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)190) ? 1 : 0);
label_1e6c3c:
    // 0x1e6c3c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1e6c40:
    if (ctx->pc == 0x1E6C40u) {
        ctx->pc = 0x1E6C40u;
            // 0x1e6c40: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->pc = 0x1E6C44u;
        goto label_1e6c44;
    }
    ctx->pc = 0x1E6C3Cu;
    {
        const bool branch_taken_0x1e6c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C3Cu;
            // 0x1e6c40: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6c3c) {
            ctx->pc = 0x1E6CB8u;
            goto label_1e6cb8;
        }
    }
    ctx->pc = 0x1E6C44u;
label_1e6c44:
    // 0x1e6c44: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1e6c48:
    if (ctx->pc == 0x1E6C48u) {
        ctx->pc = 0x1E6C4Cu;
        goto label_1e6c4c;
    }
    ctx->pc = 0x1E6C44u;
    {
        const bool branch_taken_0x1e6c44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e6c44) {
            ctx->pc = 0x1E6C58u;
            goto label_1e6c58;
        }
    }
    ctx->pc = 0x1E6C4Cu;
label_1e6c4c:
    // 0x1e6c4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1e6c50:
    if (ctx->pc == 0x1E6C50u) {
        ctx->pc = 0x1E6C54u;
        goto label_1e6c54;
    }
    ctx->pc = 0x1E6C4Cu;
    {
        const bool branch_taken_0x1e6c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c4c) {
            ctx->pc = 0x1E6C58u;
            goto label_1e6c58;
        }
    }
    ctx->pc = 0x1E6C54u;
label_1e6c54:
    // 0x1e6c54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1e6c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_1e6c58:
    // 0x1e6c58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1e6c5c:
    if (ctx->pc == 0x1E6C5Cu) {
        ctx->pc = 0x1E6C60u;
        goto label_1e6c60;
    }
    ctx->pc = 0x1E6C58u;
    {
        const bool branch_taken_0x1e6c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c58) {
            ctx->pc = 0x1E6C98u;
            goto label_1e6c98;
        }
    }
    ctx->pc = 0x1E6C60u;
label_1e6c60:
    // 0x1e6c60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6c64:
    // 0x1e6c64: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_1e6c68:
    if (ctx->pc == 0x1E6C68u) {
        ctx->pc = 0x1E6C6Cu;
        goto label_1e6c6c;
    }
    ctx->pc = 0x1E6C64u;
    {
        const bool branch_taken_0x1e6c64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e6c64) {
            ctx->pc = 0x1E6C98u;
            goto label_1e6c98;
        }
    }
    ctx->pc = 0x1E6C6Cu;
label_1e6c6c:
    // 0x1e6c6c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6c70:
    // 0x1e6c70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6c74:
    // 0x1e6c74: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x1e6c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_1e6c78:
    // 0x1e6c78: 0xc0655a0  jal         func_195680
label_1e6c7c:
    if (ctx->pc == 0x1E6C7Cu) {
        ctx->pc = 0x1E6C7Cu;
            // 0x1e6c7c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6C80u;
        goto label_1e6c80;
    }
    ctx->pc = 0x1E6C78u;
    SET_GPR_U32(ctx, 31, 0x1E6C80u);
    ctx->pc = 0x1E6C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C78u;
            // 0x1e6c7c: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C80u; }
        if (ctx->pc != 0x1E6C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C80u; }
        if (ctx->pc != 0x1E6C80u) { return; }
    }
    ctx->pc = 0x1E6C80u;
label_1e6c80:
    // 0x1e6c80: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6c84:
    // 0x1e6c84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6c88:
    // 0x1e6c88: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x1e6c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_1e6c8c:
    // 0x1e6c8c: 0xc0655a0  jal         func_195680
label_1e6c90:
    if (ctx->pc == 0x1E6C90u) {
        ctx->pc = 0x1E6C90u;
            // 0x1e6c90: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6C94u;
        goto label_1e6c94;
    }
    ctx->pc = 0x1E6C8Cu;
    SET_GPR_U32(ctx, 31, 0x1E6C94u);
    ctx->pc = 0x1E6C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6C8Cu;
            // 0x1e6c90: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C94u; }
        if (ctx->pc != 0x1E6C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6C94u; }
        if (ctx->pc != 0x1E6C94u) { return; }
    }
    ctx->pc = 0x1E6C94u;
label_1e6c94:
    // 0x1e6c94: 0x0  nop
    ctx->pc = 0x1e6c94u;
    // NOP
label_1e6c98:
    // 0x1e6c98: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1e6c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1e6c9c:
    // 0x1e6c9c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ca0:
    // 0x1e6ca0: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1e6ca0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1e6ca4:
    // 0x1e6ca4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6ca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6ca8:
    // 0x1e6ca8: 0x0  nop
    ctx->pc = 0x1e6ca8u;
    // NOP
label_1e6cac:
    // 0x1e6cac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6cb0:
    // 0x1e6cb0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1e6cb4:
    if (ctx->pc == 0x1E6CB4u) {
        ctx->pc = 0x1E6CB4u;
            // 0x1e6cb4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E6CB8u;
        goto label_1e6cb8;
    }
    ctx->pc = 0x1E6CB0u;
    {
        const bool branch_taken_0x1e6cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CB0u;
            // 0x1e6cb4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6cb0) {
            ctx->pc = 0x1E6D28u;
            goto label_1e6d28;
        }
    }
    ctx->pc = 0x1E6CB8u;
label_1e6cb8:
    // 0x1e6cb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e6cbc:
    // 0x1e6cbc: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e6cbcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e6cc0:
    // 0x1e6cc0: 0x0  nop
    ctx->pc = 0x1e6cc0u;
    // NOP
label_1e6cc4:
    // 0x1e6cc4: 0x0  nop
    ctx->pc = 0x1e6cc4u;
    // NOP
label_1e6cc8:
    // 0x1e6cc8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6cc8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e6ccc:
    // 0x1e6ccc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e6cd0:
    if (ctx->pc == 0x1E6CD0u) {
        ctx->pc = 0x1E6CD4u;
        goto label_1e6cd4;
    }
    ctx->pc = 0x1E6CCCu;
    {
        const bool branch_taken_0x1e6ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6ccc) {
            ctx->pc = 0x1E6D08u;
            goto label_1e6d08;
        }
    }
    ctx->pc = 0x1E6CD4u;
label_1e6cd4:
    // 0x1e6cd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6cd8:
    // 0x1e6cd8: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_1e6cdc:
    if (ctx->pc == 0x1E6CDCu) {
        ctx->pc = 0x1E6CE0u;
        goto label_1e6ce0;
    }
    ctx->pc = 0x1E6CD8u;
    {
        const bool branch_taken_0x1e6cd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e6cd8) {
            ctx->pc = 0x1E6D08u;
            goto label_1e6d08;
        }
    }
    ctx->pc = 0x1E6CE0u;
label_1e6ce0:
    // 0x1e6ce0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6ce4:
    // 0x1e6ce4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6ce8:
    // 0x1e6ce8: 0x2464ffdd  addiu       $a0, $v1, -0x23
    ctx->pc = 0x1e6ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_1e6cec:
    // 0x1e6cec: 0xc0655a0  jal         func_195680
label_1e6cf0:
    if (ctx->pc == 0x1E6CF0u) {
        ctx->pc = 0x1E6CF0u;
            // 0x1e6cf0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6CF4u;
        goto label_1e6cf4;
    }
    ctx->pc = 0x1E6CECu;
    SET_GPR_U32(ctx, 31, 0x1E6CF4u);
    ctx->pc = 0x1E6CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6CECu;
            // 0x1e6cf0: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CF4u; }
        if (ctx->pc != 0x1E6CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6CF4u; }
        if (ctx->pc != 0x1E6CF4u) { return; }
    }
    ctx->pc = 0x1E6CF4u;
label_1e6cf4:
    // 0x1e6cf4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1e6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e6cf8:
    // 0x1e6cf8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e6cfc:
    // 0x1e6cfc: 0x24640023  addiu       $a0, $v1, 0x23
    ctx->pc = 0x1e6cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 35));
label_1e6d00:
    // 0x1e6d00: 0xc0655a0  jal         func_195680
label_1e6d04:
    if (ctx->pc == 0x1E6D04u) {
        ctx->pc = 0x1E6D04u;
            // 0x1e6d04: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1E6D08u;
        goto label_1e6d08;
    }
    ctx->pc = 0x1E6D00u;
    SET_GPR_U32(ctx, 31, 0x1E6D08u);
    ctx->pc = 0x1E6D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D00u;
            // 0x1e6d04: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D08u; }
        if (ctx->pc != 0x1E6D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D08u; }
        if (ctx->pc != 0x1E6D08u) { return; }
    }
    ctx->pc = 0x1E6D08u;
label_1e6d08:
    // 0x1e6d08: 0x3c023f81  lui         $v0, 0x3F81
    ctx->pc = 0x1e6d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16257 << 16));
label_1e6d0c:
    // 0x1e6d0c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6d10:
    // 0x1e6d10: 0x344247ae  ori         $v0, $v0, 0x47AE
    ctx->pc = 0x1e6d10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)18350u)));
label_1e6d14:
    // 0x1e6d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6d18:
    // 0x1e6d18: 0x0  nop
    ctx->pc = 0x1e6d18u;
    // NOP
label_1e6d1c:
    // 0x1e6d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6d20:
    // 0x1e6d20: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6d20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e6d24:
    // 0x1e6d24: 0x0  nop
    ctx->pc = 0x1e6d24u;
    // NOP
label_1e6d28:
    // 0x1e6d28: 0xc04b788  jal         func_12DE20
label_1e6d2c:
    if (ctx->pc == 0x1E6D2Cu) {
        ctx->pc = 0x1E6D2Cu;
            // 0x1e6d2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6D30u;
        goto label_1e6d30;
    }
    ctx->pc = 0x1E6D28u;
    SET_GPR_U32(ctx, 31, 0x1E6D30u);
    ctx->pc = 0x1E6D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D28u;
            // 0x1e6d2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D30u; }
        if (ctx->pc != 0x1E6D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D30u; }
        if (ctx->pc != 0x1E6D30u) { return; }
    }
    ctx->pc = 0x1E6D30u;
label_1e6d30:
    // 0x1e6d30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6d34:
    // 0x1e6d34: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6d38:
    // 0x1e6d38: 0xc04b7da  jal         func_12DF68
label_1e6d3c:
    if (ctx->pc == 0x1E6D3Cu) {
        ctx->pc = 0x1E6D3Cu;
            // 0x1e6d3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D40u;
        goto label_1e6d40;
    }
    ctx->pc = 0x1E6D38u;
    SET_GPR_U32(ctx, 31, 0x1E6D40u);
    ctx->pc = 0x1E6D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D38u;
            // 0x1e6d3c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D40u; }
        if (ctx->pc != 0x1E6D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D40u; }
        if (ctx->pc != 0x1E6D40u) { return; }
    }
    ctx->pc = 0x1E6D40u;
label_1e6d40:
    // 0x1e6d40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6d44:
    // 0x1e6d44: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6d48:
    // 0x1e6d48: 0xc04b804  jal         func_12E010
label_1e6d4c:
    if (ctx->pc == 0x1E6D4Cu) {
        ctx->pc = 0x1E6D4Cu;
            // 0x1e6d4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D50u;
        goto label_1e6d50;
    }
    ctx->pc = 0x1E6D48u;
    SET_GPR_U32(ctx, 31, 0x1E6D50u);
    ctx->pc = 0x1E6D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D48u;
            // 0x1e6d4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D50u; }
        if (ctx->pc != 0x1E6D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D50u; }
        if (ctx->pc != 0x1E6D50u) { return; }
    }
    ctx->pc = 0x1E6D50u;
label_1e6d50:
    // 0x1e6d50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6d54:
    // 0x1e6d54: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e6d58:
    // 0x1e6d58: 0xc04b7b0  jal         func_12DEC0
label_1e6d5c:
    if (ctx->pc == 0x1E6D5Cu) {
        ctx->pc = 0x1E6D5Cu;
            // 0x1e6d5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6D60u;
        goto label_1e6d60;
    }
    ctx->pc = 0x1E6D58u;
    SET_GPR_U32(ctx, 31, 0x1E6D60u);
    ctx->pc = 0x1E6D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D58u;
            // 0x1e6d5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D60u; }
        if (ctx->pc != 0x1E6D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D60u; }
        if (ctx->pc != 0x1E6D60u) { return; }
    }
    ctx->pc = 0x1E6D60u;
label_1e6d60:
    // 0x1e6d60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e6d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6d64:
    // 0x1e6d64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e6d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e6d68:
    // 0x1e6d68: 0xc04b75e  jal         func_12DD78
label_1e6d6c:
    if (ctx->pc == 0x1E6D6Cu) {
        ctx->pc = 0x1E6D6Cu;
            // 0x1e6d6c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E6D70u;
        goto label_1e6d70;
    }
    ctx->pc = 0x1E6D68u;
    SET_GPR_U32(ctx, 31, 0x1E6D70u);
    ctx->pc = 0x1E6D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D68u;
            // 0x1e6d6c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D70u; }
        if (ctx->pc != 0x1E6D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D70u; }
        if (ctx->pc != 0x1E6D70u) { return; }
    }
    ctx->pc = 0x1E6D70u;
label_1e6d70:
    // 0x1e6d70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e6d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6d74:
    // 0x1e6d74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e6d78:
    // 0x1e6d78: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e6d78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e6d7c:
    // 0x1e6d7c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e6d80:
    if (ctx->pc == 0x1E6D80u) {
        ctx->pc = 0x1E6D84u;
        goto label_1e6d84;
    }
    ctx->pc = 0x1E6D7Cu;
    {
        const bool branch_taken_0x1e6d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d7c) {
            ctx->pc = 0x1E6DD0u;
            goto label_1e6dd0;
        }
    }
    ctx->pc = 0x1E6D84u;
label_1e6d84:
    // 0x1e6d84: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e6d88:
    // 0x1e6d88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e6d8c:
    if (ctx->pc == 0x1E6D8Cu) {
        ctx->pc = 0x1E6D90u;
        goto label_1e6d90;
    }
    ctx->pc = 0x1E6D88u;
    {
        const bool branch_taken_0x1e6d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d88) {
            ctx->pc = 0x1E6DA0u;
            goto label_1e6da0;
        }
    }
    ctx->pc = 0x1E6D90u;
label_1e6d90:
    // 0x1e6d90: 0xc0604f0  jal         func_1813C0
label_1e6d94:
    if (ctx->pc == 0x1E6D94u) {
        ctx->pc = 0x1E6D94u;
            // 0x1e6d94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6D98u;
        goto label_1e6d98;
    }
    ctx->pc = 0x1E6D90u;
    SET_GPR_U32(ctx, 31, 0x1E6D98u);
    ctx->pc = 0x1E6D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6D90u;
            // 0x1e6d94: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D98u; }
        if (ctx->pc != 0x1E6D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6D98u; }
        if (ctx->pc != 0x1E6D98u) { return; }
    }
    ctx->pc = 0x1E6D98u;
label_1e6d98:
    // 0x1e6d98: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6d9c:
    if (ctx->pc == 0x1E6D9Cu) {
        ctx->pc = 0x1E6DA0u;
        goto label_1e6da0;
    }
    ctx->pc = 0x1E6D98u;
    {
        const bool branch_taken_0x1e6d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6d98) {
            ctx->pc = 0x1E6DA8u;
            goto label_1e6da8;
        }
    }
    ctx->pc = 0x1E6DA0u;
label_1e6da0:
    // 0x1e6da0: 0xc0604dc  jal         func_181370
label_1e6da4:
    if (ctx->pc == 0x1E6DA4u) {
        ctx->pc = 0x1E6DA4u;
            // 0x1e6da4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6DA8u;
        goto label_1e6da8;
    }
    ctx->pc = 0x1E6DA0u;
    SET_GPR_U32(ctx, 31, 0x1E6DA8u);
    ctx->pc = 0x1E6DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DA0u;
            // 0x1e6da4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DA8u; }
        if (ctx->pc != 0x1E6DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6DA8u; }
        if (ctx->pc != 0x1E6DA8u) { return; }
    }
    ctx->pc = 0x1E6DA8u;
label_1e6da8:
    // 0x1e6da8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e6dac:
    // 0x1e6dac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e6db0:
    if (ctx->pc == 0x1E6DB0u) {
        ctx->pc = 0x1E6DB4u;
        goto label_1e6db4;
    }
    ctx->pc = 0x1E6DACu;
    {
        const bool branch_taken_0x1e6dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6dac) {
            ctx->pc = 0x1E6DC0u;
            goto label_1e6dc0;
        }
    }
    ctx->pc = 0x1E6DB4u;
label_1e6db4:
    // 0x1e6db4: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e6db8:
    if (ctx->pc == 0x1E6DB8u) {
        ctx->pc = 0x1E6DB8u;
            // 0x1e6db8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1E6DBCu;
        goto label_1e6dbc;
    }
    ctx->pc = 0x1E6DB4u;
    {
        const bool branch_taken_0x1e6db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DB4u;
            // 0x1e6db8: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6db4) {
            ctx->pc = 0x1E6E40u;
            goto label_1e6e40;
        }
    }
    ctx->pc = 0x1E6DBCu;
label_1e6dbc:
    // 0x1e6dbc: 0x0  nop
    ctx->pc = 0x1e6dbcu;
    // NOP
label_1e6dc0:
    // 0x1e6dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6dc4:
    // 0x1e6dc4: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e6dc8:
    if (ctx->pc == 0x1E6DC8u) {
        ctx->pc = 0x1E6DC8u;
            // 0x1e6dc8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1E6DCCu;
        goto label_1e6dcc;
    }
    ctx->pc = 0x1E6DC4u;
    {
        const bool branch_taken_0x1e6dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6DC4u;
            // 0x1e6dc8: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6dc4) {
            ctx->pc = 0x1E6E40u;
            goto label_1e6e40;
        }
    }
    ctx->pc = 0x1E6DCCu;
label_1e6dcc:
    // 0x1e6dcc: 0x0  nop
    ctx->pc = 0x1e6dccu;
    // NOP
label_1e6dd0:
    // 0x1e6dd0: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1e6dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1e6dd4:
    // 0x1e6dd4: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e6dd8:
    if (ctx->pc == 0x1E6DD8u) {
        ctx->pc = 0x1E6DDCu;
        goto label_1e6ddc;
    }
    ctx->pc = 0x1E6DD4u;
    {
        const bool branch_taken_0x1e6dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6dd4) {
            ctx->pc = 0x1E6E30u;
            goto label_1e6e30;
        }
    }
    ctx->pc = 0x1E6DDCu;
label_1e6ddc:
    // 0x1e6ddc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e6ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e6de0:
    // 0x1e6de0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e6de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e6de4:
    // 0x1e6de4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e6de4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e6de8:
    // 0x1e6de8: 0x0  nop
    ctx->pc = 0x1e6de8u;
    // NOP
label_1e6dec:
    // 0x1e6dec: 0x0  nop
    ctx->pc = 0x1e6decu;
    // NOP
label_1e6df0:
    // 0x1e6df0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e6df0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e6df4:
    // 0x1e6df4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e6df8:
    if (ctx->pc == 0x1E6DF8u) {
        ctx->pc = 0x1E6DFCu;
        goto label_1e6dfc;
    }
    ctx->pc = 0x1E6DF4u;
    {
        const bool branch_taken_0x1e6df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6df4) {
            ctx->pc = 0x1E6E30u;
            goto label_1e6e30;
        }
    }
    ctx->pc = 0x1E6DFCu;
label_1e6dfc:
    // 0x1e6dfc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e6dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e6e00:
    // 0x1e6e00: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e6e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e6e04:
    // 0x1e6e04: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e6e08:
    // 0x1e6e08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e6e08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e6e0c:
    // 0x1e6e0c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e6e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e6e10:
    // 0x1e6e10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e6e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e6e14:
    // 0x1e6e14: 0xc0536d8  jal         func_14DB60
label_1e6e18:
    if (ctx->pc == 0x1E6E18u) {
        ctx->pc = 0x1E6E18u;
            // 0x1e6e18: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E6E1Cu;
        goto label_1e6e1c;
    }
    ctx->pc = 0x1E6E14u;
    SET_GPR_U32(ctx, 31, 0x1E6E1Cu);
    ctx->pc = 0x1E6E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E14u;
            // 0x1e6e18: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E1Cu; }
        if (ctx->pc != 0x1E6E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E1Cu; }
        if (ctx->pc != 0x1E6E1Cu) { return; }
    }
    ctx->pc = 0x1E6E1Cu;
label_1e6e1c:
    // 0x1e6e1c: 0xc060500  jal         func_181400
label_1e6e20:
    if (ctx->pc == 0x1E6E20u) {
        ctx->pc = 0x1E6E20u;
            // 0x1e6e20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6E24u;
        goto label_1e6e24;
    }
    ctx->pc = 0x1E6E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E6E24u);
    ctx->pc = 0x1E6E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E1Cu;
            // 0x1e6e20: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E24u; }
        if (ctx->pc != 0x1E6E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E24u; }
        if (ctx->pc != 0x1E6E24u) { return; }
    }
    ctx->pc = 0x1E6E24u;
label_1e6e24:
    // 0x1e6e24: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e6e28:
    if (ctx->pc == 0x1E6E28u) {
        ctx->pc = 0x1E6E2Cu;
        goto label_1e6e2c;
    }
    ctx->pc = 0x1E6E24u;
    {
        const bool branch_taken_0x1e6e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6e24) {
            ctx->pc = 0x1E6E38u;
            goto label_1e6e38;
        }
    }
    ctx->pc = 0x1E6E2Cu;
label_1e6e2c:
    // 0x1e6e2c: 0x0  nop
    ctx->pc = 0x1e6e2cu;
    // NOP
label_1e6e30:
    // 0x1e6e30: 0xc0604dc  jal         func_181370
label_1e6e34:
    if (ctx->pc == 0x1E6E34u) {
        ctx->pc = 0x1E6E34u;
            // 0x1e6e34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6E38u;
        goto label_1e6e38;
    }
    ctx->pc = 0x1E6E30u;
    SET_GPR_U32(ctx, 31, 0x1E6E38u);
    ctx->pc = 0x1E6E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E30u;
            // 0x1e6e34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E38u; }
        if (ctx->pc != 0x1E6E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E38u; }
        if (ctx->pc != 0x1E6E38u) { return; }
    }
    ctx->pc = 0x1E6E38u;
label_1e6e38:
    // 0x1e6e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e6e3c:
    // 0x1e6e3c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e6e40:
    // 0x1e6e40: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e6e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6e44:
    // 0x1e6e44: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e6e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e6e48:
    // 0x1e6e48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e6e48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e6e4c:
    // 0x1e6e4c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e6e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e6e50:
    // 0x1e6e50: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e6e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e6e54:
    // 0x1e6e54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6e58:
    // 0x1e6e58: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e6e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e6e5c:
    // 0x1e6e5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e6e60:
    // 0x1e6e60: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6e64:
    // 0x1e6e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e6e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e6e68:
    // 0x1e6e68: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e6e6c:
    if (ctx->pc == 0x1E6E6Cu) {
        ctx->pc = 0x1E6E70u;
        goto label_1e6e70;
    }
    ctx->pc = 0x1E6E68u;
    {
        const bool branch_taken_0x1e6e68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e6e68) {
            ctx->pc = 0x1E6E88u;
            goto label_1e6e88;
        }
    }
    ctx->pc = 0x1E6E70u;
label_1e6e70:
    // 0x1e6e70: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e6e74:
    // 0x1e6e74: 0x40f809  jalr        $v0
label_1e6e78:
    if (ctx->pc == 0x1E6E78u) {
        ctx->pc = 0x1E6E78u;
            // 0x1e6e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6E7Cu;
        goto label_1e6e7c;
    }
    ctx->pc = 0x1E6E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E6E7Cu);
        ctx->pc = 0x1E6E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6E74u;
            // 0x1e6e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6560u: goto label_1e6560;
            case 0x1E6564u: goto label_1e6564;
            case 0x1E6568u: goto label_1e6568;
            case 0x1E656Cu: goto label_1e656c;
            case 0x1E6570u: goto label_1e6570;
            case 0x1E6574u: goto label_1e6574;
            case 0x1E6578u: goto label_1e6578;
            case 0x1E657Cu: goto label_1e657c;
            case 0x1E6580u: goto label_1e6580;
            case 0x1E6584u: goto label_1e6584;
            case 0x1E6588u: goto label_1e6588;
            case 0x1E658Cu: goto label_1e658c;
            case 0x1E6590u: goto label_1e6590;
            case 0x1E6594u: goto label_1e6594;
            case 0x1E6598u: goto label_1e6598;
            case 0x1E659Cu: goto label_1e659c;
            case 0x1E65A0u: goto label_1e65a0;
            case 0x1E65A4u: goto label_1e65a4;
            case 0x1E65A8u: goto label_1e65a8;
            case 0x1E65ACu: goto label_1e65ac;
            case 0x1E65B0u: goto label_1e65b0;
            case 0x1E65B4u: goto label_1e65b4;
            case 0x1E65B8u: goto label_1e65b8;
            case 0x1E65BCu: goto label_1e65bc;
            case 0x1E65C0u: goto label_1e65c0;
            case 0x1E65C4u: goto label_1e65c4;
            case 0x1E65C8u: goto label_1e65c8;
            case 0x1E65CCu: goto label_1e65cc;
            case 0x1E65D0u: goto label_1e65d0;
            case 0x1E65D4u: goto label_1e65d4;
            case 0x1E65D8u: goto label_1e65d8;
            case 0x1E65DCu: goto label_1e65dc;
            case 0x1E65E0u: goto label_1e65e0;
            case 0x1E65E4u: goto label_1e65e4;
            case 0x1E65E8u: goto label_1e65e8;
            case 0x1E65ECu: goto label_1e65ec;
            case 0x1E65F0u: goto label_1e65f0;
            case 0x1E65F4u: goto label_1e65f4;
            case 0x1E65F8u: goto label_1e65f8;
            case 0x1E65FCu: goto label_1e65fc;
            case 0x1E6600u: goto label_1e6600;
            case 0x1E6604u: goto label_1e6604;
            case 0x1E6608u: goto label_1e6608;
            case 0x1E660Cu: goto label_1e660c;
            case 0x1E6610u: goto label_1e6610;
            case 0x1E6614u: goto label_1e6614;
            case 0x1E6618u: goto label_1e6618;
            case 0x1E661Cu: goto label_1e661c;
            case 0x1E6620u: goto label_1e6620;
            case 0x1E6624u: goto label_1e6624;
            case 0x1E6628u: goto label_1e6628;
            case 0x1E662Cu: goto label_1e662c;
            case 0x1E6630u: goto label_1e6630;
            case 0x1E6634u: goto label_1e6634;
            case 0x1E6638u: goto label_1e6638;
            case 0x1E663Cu: goto label_1e663c;
            case 0x1E6640u: goto label_1e6640;
            case 0x1E6644u: goto label_1e6644;
            case 0x1E6648u: goto label_1e6648;
            case 0x1E664Cu: goto label_1e664c;
            case 0x1E6650u: goto label_1e6650;
            case 0x1E6654u: goto label_1e6654;
            case 0x1E6658u: goto label_1e6658;
            case 0x1E665Cu: goto label_1e665c;
            case 0x1E6660u: goto label_1e6660;
            case 0x1E6664u: goto label_1e6664;
            case 0x1E6668u: goto label_1e6668;
            case 0x1E666Cu: goto label_1e666c;
            case 0x1E6670u: goto label_1e6670;
            case 0x1E6674u: goto label_1e6674;
            case 0x1E6678u: goto label_1e6678;
            case 0x1E667Cu: goto label_1e667c;
            case 0x1E6680u: goto label_1e6680;
            case 0x1E6684u: goto label_1e6684;
            case 0x1E6688u: goto label_1e6688;
            case 0x1E668Cu: goto label_1e668c;
            case 0x1E6690u: goto label_1e6690;
            case 0x1E6694u: goto label_1e6694;
            case 0x1E6698u: goto label_1e6698;
            case 0x1E669Cu: goto label_1e669c;
            case 0x1E66A0u: goto label_1e66a0;
            case 0x1E66A4u: goto label_1e66a4;
            case 0x1E66A8u: goto label_1e66a8;
            case 0x1E66ACu: goto label_1e66ac;
            case 0x1E66B0u: goto label_1e66b0;
            case 0x1E66B4u: goto label_1e66b4;
            case 0x1E66B8u: goto label_1e66b8;
            case 0x1E66BCu: goto label_1e66bc;
            case 0x1E66C0u: goto label_1e66c0;
            case 0x1E66C4u: goto label_1e66c4;
            case 0x1E66C8u: goto label_1e66c8;
            case 0x1E66CCu: goto label_1e66cc;
            case 0x1E66D0u: goto label_1e66d0;
            case 0x1E66D4u: goto label_1e66d4;
            case 0x1E66D8u: goto label_1e66d8;
            case 0x1E66DCu: goto label_1e66dc;
            case 0x1E66E0u: goto label_1e66e0;
            case 0x1E66E4u: goto label_1e66e4;
            case 0x1E66E8u: goto label_1e66e8;
            case 0x1E66ECu: goto label_1e66ec;
            case 0x1E66F0u: goto label_1e66f0;
            case 0x1E66F4u: goto label_1e66f4;
            case 0x1E66F8u: goto label_1e66f8;
            case 0x1E66FCu: goto label_1e66fc;
            case 0x1E6700u: goto label_1e6700;
            case 0x1E6704u: goto label_1e6704;
            case 0x1E6708u: goto label_1e6708;
            case 0x1E670Cu: goto label_1e670c;
            case 0x1E6710u: goto label_1e6710;
            case 0x1E6714u: goto label_1e6714;
            case 0x1E6718u: goto label_1e6718;
            case 0x1E671Cu: goto label_1e671c;
            case 0x1E6720u: goto label_1e6720;
            case 0x1E6724u: goto label_1e6724;
            case 0x1E6728u: goto label_1e6728;
            case 0x1E672Cu: goto label_1e672c;
            case 0x1E6730u: goto label_1e6730;
            case 0x1E6734u: goto label_1e6734;
            case 0x1E6738u: goto label_1e6738;
            case 0x1E673Cu: goto label_1e673c;
            case 0x1E6740u: goto label_1e6740;
            case 0x1E6744u: goto label_1e6744;
            case 0x1E6748u: goto label_1e6748;
            case 0x1E674Cu: goto label_1e674c;
            case 0x1E6750u: goto label_1e6750;
            case 0x1E6754u: goto label_1e6754;
            case 0x1E6758u: goto label_1e6758;
            case 0x1E675Cu: goto label_1e675c;
            case 0x1E6760u: goto label_1e6760;
            case 0x1E6764u: goto label_1e6764;
            case 0x1E6768u: goto label_1e6768;
            case 0x1E676Cu: goto label_1e676c;
            case 0x1E6770u: goto label_1e6770;
            case 0x1E6774u: goto label_1e6774;
            case 0x1E6778u: goto label_1e6778;
            case 0x1E677Cu: goto label_1e677c;
            case 0x1E6780u: goto label_1e6780;
            case 0x1E6784u: goto label_1e6784;
            case 0x1E6788u: goto label_1e6788;
            case 0x1E678Cu: goto label_1e678c;
            case 0x1E6790u: goto label_1e6790;
            case 0x1E6794u: goto label_1e6794;
            case 0x1E6798u: goto label_1e6798;
            case 0x1E679Cu: goto label_1e679c;
            case 0x1E67A0u: goto label_1e67a0;
            case 0x1E67A4u: goto label_1e67a4;
            case 0x1E67A8u: goto label_1e67a8;
            case 0x1E67ACu: goto label_1e67ac;
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E67B4u: goto label_1e67b4;
            case 0x1E67B8u: goto label_1e67b8;
            case 0x1E67BCu: goto label_1e67bc;
            case 0x1E67C0u: goto label_1e67c0;
            case 0x1E67C4u: goto label_1e67c4;
            case 0x1E67C8u: goto label_1e67c8;
            case 0x1E67CCu: goto label_1e67cc;
            case 0x1E67D0u: goto label_1e67d0;
            case 0x1E67D4u: goto label_1e67d4;
            case 0x1E67D8u: goto label_1e67d8;
            case 0x1E67DCu: goto label_1e67dc;
            case 0x1E67E0u: goto label_1e67e0;
            case 0x1E67E4u: goto label_1e67e4;
            case 0x1E67E8u: goto label_1e67e8;
            case 0x1E67ECu: goto label_1e67ec;
            case 0x1E67F0u: goto label_1e67f0;
            case 0x1E67F4u: goto label_1e67f4;
            case 0x1E67F8u: goto label_1e67f8;
            case 0x1E67FCu: goto label_1e67fc;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6804u: goto label_1e6804;
            case 0x1E6808u: goto label_1e6808;
            case 0x1E680Cu: goto label_1e680c;
            case 0x1E6810u: goto label_1e6810;
            case 0x1E6814u: goto label_1e6814;
            case 0x1E6818u: goto label_1e6818;
            case 0x1E681Cu: goto label_1e681c;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6824u: goto label_1e6824;
            case 0x1E6828u: goto label_1e6828;
            case 0x1E682Cu: goto label_1e682c;
            case 0x1E6830u: goto label_1e6830;
            case 0x1E6834u: goto label_1e6834;
            case 0x1E6838u: goto label_1e6838;
            case 0x1E683Cu: goto label_1e683c;
            case 0x1E6840u: goto label_1e6840;
            case 0x1E6844u: goto label_1e6844;
            case 0x1E6848u: goto label_1e6848;
            case 0x1E684Cu: goto label_1e684c;
            case 0x1E6850u: goto label_1e6850;
            case 0x1E6854u: goto label_1e6854;
            case 0x1E6858u: goto label_1e6858;
            case 0x1E685Cu: goto label_1e685c;
            case 0x1E6860u: goto label_1e6860;
            case 0x1E6864u: goto label_1e6864;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E686Cu: goto label_1e686c;
            case 0x1E6870u: goto label_1e6870;
            case 0x1E6874u: goto label_1e6874;
            case 0x1E6878u: goto label_1e6878;
            case 0x1E687Cu: goto label_1e687c;
            case 0x1E6880u: goto label_1e6880;
            case 0x1E6884u: goto label_1e6884;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E6890u: goto label_1e6890;
            case 0x1E6894u: goto label_1e6894;
            case 0x1E6898u: goto label_1e6898;
            case 0x1E689Cu: goto label_1e689c;
            case 0x1E68A0u: goto label_1e68a0;
            case 0x1E68A4u: goto label_1e68a4;
            case 0x1E68A8u: goto label_1e68a8;
            case 0x1E68ACu: goto label_1e68ac;
            case 0x1E68B0u: goto label_1e68b0;
            case 0x1E68B4u: goto label_1e68b4;
            case 0x1E68B8u: goto label_1e68b8;
            case 0x1E68BCu: goto label_1e68bc;
            case 0x1E68C0u: goto label_1e68c0;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E68C8u: goto label_1e68c8;
            case 0x1E68CCu: goto label_1e68cc;
            case 0x1E68D0u: goto label_1e68d0;
            case 0x1E68D4u: goto label_1e68d4;
            case 0x1E68D8u: goto label_1e68d8;
            case 0x1E68DCu: goto label_1e68dc;
            case 0x1E68E0u: goto label_1e68e0;
            case 0x1E68E4u: goto label_1e68e4;
            case 0x1E68E8u: goto label_1e68e8;
            case 0x1E68ECu: goto label_1e68ec;
            case 0x1E68F0u: goto label_1e68f0;
            case 0x1E68F4u: goto label_1e68f4;
            case 0x1E68F8u: goto label_1e68f8;
            case 0x1E68FCu: goto label_1e68fc;
            case 0x1E6900u: goto label_1e6900;
            case 0x1E6904u: goto label_1e6904;
            case 0x1E6908u: goto label_1e6908;
            case 0x1E690Cu: goto label_1e690c;
            case 0x1E6910u: goto label_1e6910;
            case 0x1E6914u: goto label_1e6914;
            case 0x1E6918u: goto label_1e6918;
            case 0x1E691Cu: goto label_1e691c;
            case 0x1E6920u: goto label_1e6920;
            case 0x1E6924u: goto label_1e6924;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E692Cu: goto label_1e692c;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6934u: goto label_1e6934;
            case 0x1E6938u: goto label_1e6938;
            case 0x1E693Cu: goto label_1e693c;
            case 0x1E6940u: goto label_1e6940;
            case 0x1E6944u: goto label_1e6944;
            case 0x1E6948u: goto label_1e6948;
            case 0x1E694Cu: goto label_1e694c;
            case 0x1E6950u: goto label_1e6950;
            case 0x1E6954u: goto label_1e6954;
            case 0x1E6958u: goto label_1e6958;
            case 0x1E695Cu: goto label_1e695c;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6964u: goto label_1e6964;
            case 0x1E6968u: goto label_1e6968;
            case 0x1E696Cu: goto label_1e696c;
            case 0x1E6970u: goto label_1e6970;
            case 0x1E6974u: goto label_1e6974;
            case 0x1E6978u: goto label_1e6978;
            case 0x1E697Cu: goto label_1e697c;
            case 0x1E6980u: goto label_1e6980;
            case 0x1E6984u: goto label_1e6984;
            case 0x1E6988u: goto label_1e6988;
            case 0x1E698Cu: goto label_1e698c;
            case 0x1E6990u: goto label_1e6990;
            case 0x1E6994u: goto label_1e6994;
            case 0x1E6998u: goto label_1e6998;
            case 0x1E699Cu: goto label_1e699c;
            case 0x1E69A0u: goto label_1e69a0;
            case 0x1E69A4u: goto label_1e69a4;
            case 0x1E69A8u: goto label_1e69a8;
            case 0x1E69ACu: goto label_1e69ac;
            case 0x1E69B0u: goto label_1e69b0;
            case 0x1E69B4u: goto label_1e69b4;
            case 0x1E69B8u: goto label_1e69b8;
            case 0x1E69BCu: goto label_1e69bc;
            case 0x1E69C0u: goto label_1e69c0;
            case 0x1E69C4u: goto label_1e69c4;
            case 0x1E69C8u: goto label_1e69c8;
            case 0x1E69CCu: goto label_1e69cc;
            case 0x1E69D0u: goto label_1e69d0;
            case 0x1E69D4u: goto label_1e69d4;
            case 0x1E69D8u: goto label_1e69d8;
            case 0x1E69DCu: goto label_1e69dc;
            case 0x1E69E0u: goto label_1e69e0;
            case 0x1E69E4u: goto label_1e69e4;
            case 0x1E69E8u: goto label_1e69e8;
            case 0x1E69ECu: goto label_1e69ec;
            case 0x1E69F0u: goto label_1e69f0;
            case 0x1E69F4u: goto label_1e69f4;
            case 0x1E69F8u: goto label_1e69f8;
            case 0x1E69FCu: goto label_1e69fc;
            case 0x1E6A00u: goto label_1e6a00;
            case 0x1E6A04u: goto label_1e6a04;
            case 0x1E6A08u: goto label_1e6a08;
            case 0x1E6A0Cu: goto label_1e6a0c;
            case 0x1E6A10u: goto label_1e6a10;
            case 0x1E6A14u: goto label_1e6a14;
            case 0x1E6A18u: goto label_1e6a18;
            case 0x1E6A1Cu: goto label_1e6a1c;
            case 0x1E6A20u: goto label_1e6a20;
            case 0x1E6A24u: goto label_1e6a24;
            case 0x1E6A28u: goto label_1e6a28;
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6A30u: goto label_1e6a30;
            case 0x1E6A34u: goto label_1e6a34;
            case 0x1E6A38u: goto label_1e6a38;
            case 0x1E6A3Cu: goto label_1e6a3c;
            case 0x1E6A40u: goto label_1e6a40;
            case 0x1E6A44u: goto label_1e6a44;
            case 0x1E6A48u: goto label_1e6a48;
            case 0x1E6A4Cu: goto label_1e6a4c;
            case 0x1E6A50u: goto label_1e6a50;
            case 0x1E6A54u: goto label_1e6a54;
            case 0x1E6A58u: goto label_1e6a58;
            case 0x1E6A5Cu: goto label_1e6a5c;
            case 0x1E6A60u: goto label_1e6a60;
            case 0x1E6A64u: goto label_1e6a64;
            case 0x1E6A68u: goto label_1e6a68;
            case 0x1E6A6Cu: goto label_1e6a6c;
            case 0x1E6A70u: goto label_1e6a70;
            case 0x1E6A74u: goto label_1e6a74;
            case 0x1E6A78u: goto label_1e6a78;
            case 0x1E6A7Cu: goto label_1e6a7c;
            case 0x1E6A80u: goto label_1e6a80;
            case 0x1E6A84u: goto label_1e6a84;
            case 0x1E6A88u: goto label_1e6a88;
            case 0x1E6A8Cu: goto label_1e6a8c;
            case 0x1E6A90u: goto label_1e6a90;
            case 0x1E6A94u: goto label_1e6a94;
            case 0x1E6A98u: goto label_1e6a98;
            case 0x1E6A9Cu: goto label_1e6a9c;
            case 0x1E6AA0u: goto label_1e6aa0;
            case 0x1E6AA4u: goto label_1e6aa4;
            case 0x1E6AA8u: goto label_1e6aa8;
            case 0x1E6AACu: goto label_1e6aac;
            case 0x1E6AB0u: goto label_1e6ab0;
            case 0x1E6AB4u: goto label_1e6ab4;
            case 0x1E6AB8u: goto label_1e6ab8;
            case 0x1E6ABCu: goto label_1e6abc;
            case 0x1E6AC0u: goto label_1e6ac0;
            case 0x1E6AC4u: goto label_1e6ac4;
            case 0x1E6AC8u: goto label_1e6ac8;
            case 0x1E6ACCu: goto label_1e6acc;
            case 0x1E6AD0u: goto label_1e6ad0;
            case 0x1E6AD4u: goto label_1e6ad4;
            case 0x1E6AD8u: goto label_1e6ad8;
            case 0x1E6ADCu: goto label_1e6adc;
            case 0x1E6AE0u: goto label_1e6ae0;
            case 0x1E6AE4u: goto label_1e6ae4;
            case 0x1E6AE8u: goto label_1e6ae8;
            case 0x1E6AECu: goto label_1e6aec;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6AF4u: goto label_1e6af4;
            case 0x1E6AF8u: goto label_1e6af8;
            case 0x1E6AFCu: goto label_1e6afc;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B04u: goto label_1e6b04;
            case 0x1E6B08u: goto label_1e6b08;
            case 0x1E6B0Cu: goto label_1e6b0c;
            case 0x1E6B10u: goto label_1e6b10;
            case 0x1E6B14u: goto label_1e6b14;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B1Cu: goto label_1e6b1c;
            case 0x1E6B20u: goto label_1e6b20;
            case 0x1E6B24u: goto label_1e6b24;
            case 0x1E6B28u: goto label_1e6b28;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B30u: goto label_1e6b30;
            case 0x1E6B34u: goto label_1e6b34;
            case 0x1E6B38u: goto label_1e6b38;
            case 0x1E6B3Cu: goto label_1e6b3c;
            case 0x1E6B40u: goto label_1e6b40;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B48u: goto label_1e6b48;
            case 0x1E6B4Cu: goto label_1e6b4c;
            case 0x1E6B50u: goto label_1e6b50;
            case 0x1E6B54u: goto label_1e6b54;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6B5Cu: goto label_1e6b5c;
            case 0x1E6B60u: goto label_1e6b60;
            case 0x1E6B64u: goto label_1e6b64;
            case 0x1E6B68u: goto label_1e6b68;
            case 0x1E6B6Cu: goto label_1e6b6c;
            case 0x1E6B70u: goto label_1e6b70;
            case 0x1E6B74u: goto label_1e6b74;
            case 0x1E6B78u: goto label_1e6b78;
            case 0x1E6B7Cu: goto label_1e6b7c;
            case 0x1E6B80u: goto label_1e6b80;
            case 0x1E6B84u: goto label_1e6b84;
            case 0x1E6B88u: goto label_1e6b88;
            case 0x1E6B8Cu: goto label_1e6b8c;
            case 0x1E6B90u: goto label_1e6b90;
            case 0x1E6B94u: goto label_1e6b94;
            case 0x1E6B98u: goto label_1e6b98;
            case 0x1E6B9Cu: goto label_1e6b9c;
            case 0x1E6BA0u: goto label_1e6ba0;
            case 0x1E6BA4u: goto label_1e6ba4;
            case 0x1E6BA8u: goto label_1e6ba8;
            case 0x1E6BACu: goto label_1e6bac;
            case 0x1E6BB0u: goto label_1e6bb0;
            case 0x1E6BB4u: goto label_1e6bb4;
            case 0x1E6BB8u: goto label_1e6bb8;
            case 0x1E6BBCu: goto label_1e6bbc;
            case 0x1E6BC0u: goto label_1e6bc0;
            case 0x1E6BC4u: goto label_1e6bc4;
            case 0x1E6BC8u: goto label_1e6bc8;
            case 0x1E6BCCu: goto label_1e6bcc;
            case 0x1E6BD0u: goto label_1e6bd0;
            case 0x1E6BD4u: goto label_1e6bd4;
            case 0x1E6BD8u: goto label_1e6bd8;
            case 0x1E6BDCu: goto label_1e6bdc;
            case 0x1E6BE0u: goto label_1e6be0;
            case 0x1E6BE4u: goto label_1e6be4;
            case 0x1E6BE8u: goto label_1e6be8;
            case 0x1E6BECu: goto label_1e6bec;
            case 0x1E6BF0u: goto label_1e6bf0;
            case 0x1E6BF4u: goto label_1e6bf4;
            case 0x1E6BF8u: goto label_1e6bf8;
            case 0x1E6BFCu: goto label_1e6bfc;
            case 0x1E6C00u: goto label_1e6c00;
            case 0x1E6C04u: goto label_1e6c04;
            case 0x1E6C08u: goto label_1e6c08;
            case 0x1E6C0Cu: goto label_1e6c0c;
            case 0x1E6C10u: goto label_1e6c10;
            case 0x1E6C14u: goto label_1e6c14;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C1Cu: goto label_1e6c1c;
            case 0x1E6C20u: goto label_1e6c20;
            case 0x1E6C24u: goto label_1e6c24;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C2Cu: goto label_1e6c2c;
            case 0x1E6C30u: goto label_1e6c30;
            case 0x1E6C34u: goto label_1e6c34;
            case 0x1E6C38u: goto label_1e6c38;
            case 0x1E6C3Cu: goto label_1e6c3c;
            case 0x1E6C40u: goto label_1e6c40;
            case 0x1E6C44u: goto label_1e6c44;
            case 0x1E6C48u: goto label_1e6c48;
            case 0x1E6C4Cu: goto label_1e6c4c;
            case 0x1E6C50u: goto label_1e6c50;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C58u: goto label_1e6c58;
            case 0x1E6C5Cu: goto label_1e6c5c;
            case 0x1E6C60u: goto label_1e6c60;
            case 0x1E6C64u: goto label_1e6c64;
            case 0x1E6C68u: goto label_1e6c68;
            case 0x1E6C6Cu: goto label_1e6c6c;
            case 0x1E6C70u: goto label_1e6c70;
            case 0x1E6C74u: goto label_1e6c74;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6C7Cu: goto label_1e6c7c;
            case 0x1E6C80u: goto label_1e6c80;
            case 0x1E6C84u: goto label_1e6c84;
            case 0x1E6C88u: goto label_1e6c88;
            case 0x1E6C8Cu: goto label_1e6c8c;
            case 0x1E6C90u: goto label_1e6c90;
            case 0x1E6C94u: goto label_1e6c94;
            case 0x1E6C98u: goto label_1e6c98;
            case 0x1E6C9Cu: goto label_1e6c9c;
            case 0x1E6CA0u: goto label_1e6ca0;
            case 0x1E6CA4u: goto label_1e6ca4;
            case 0x1E6CA8u: goto label_1e6ca8;
            case 0x1E6CACu: goto label_1e6cac;
            case 0x1E6CB0u: goto label_1e6cb0;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CB8u: goto label_1e6cb8;
            case 0x1E6CBCu: goto label_1e6cbc;
            case 0x1E6CC0u: goto label_1e6cc0;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6CC8u: goto label_1e6cc8;
            case 0x1E6CCCu: goto label_1e6ccc;
            case 0x1E6CD0u: goto label_1e6cd0;
            case 0x1E6CD4u: goto label_1e6cd4;
            case 0x1E6CD8u: goto label_1e6cd8;
            case 0x1E6CDCu: goto label_1e6cdc;
            case 0x1E6CE0u: goto label_1e6ce0;
            case 0x1E6CE4u: goto label_1e6ce4;
            case 0x1E6CE8u: goto label_1e6ce8;
            case 0x1E6CECu: goto label_1e6cec;
            case 0x1E6CF0u: goto label_1e6cf0;
            case 0x1E6CF4u: goto label_1e6cf4;
            case 0x1E6CF8u: goto label_1e6cf8;
            case 0x1E6CFCu: goto label_1e6cfc;
            case 0x1E6D00u: goto label_1e6d00;
            case 0x1E6D04u: goto label_1e6d04;
            case 0x1E6D08u: goto label_1e6d08;
            case 0x1E6D0Cu: goto label_1e6d0c;
            case 0x1E6D10u: goto label_1e6d10;
            case 0x1E6D14u: goto label_1e6d14;
            case 0x1E6D18u: goto label_1e6d18;
            case 0x1E6D1Cu: goto label_1e6d1c;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D24u: goto label_1e6d24;
            case 0x1E6D28u: goto label_1e6d28;
            case 0x1E6D2Cu: goto label_1e6d2c;
            case 0x1E6D30u: goto label_1e6d30;
            case 0x1E6D34u: goto label_1e6d34;
            case 0x1E6D38u: goto label_1e6d38;
            case 0x1E6D3Cu: goto label_1e6d3c;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D44u: goto label_1e6d44;
            case 0x1E6D48u: goto label_1e6d48;
            case 0x1E6D4Cu: goto label_1e6d4c;
            case 0x1E6D50u: goto label_1e6d50;
            case 0x1E6D54u: goto label_1e6d54;
            case 0x1E6D58u: goto label_1e6d58;
            case 0x1E6D5Cu: goto label_1e6d5c;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6D64u: goto label_1e6d64;
            case 0x1E6D68u: goto label_1e6d68;
            case 0x1E6D6Cu: goto label_1e6d6c;
            case 0x1E6D70u: goto label_1e6d70;
            case 0x1E6D74u: goto label_1e6d74;
            case 0x1E6D78u: goto label_1e6d78;
            case 0x1E6D7Cu: goto label_1e6d7c;
            case 0x1E6D80u: goto label_1e6d80;
            case 0x1E6D84u: goto label_1e6d84;
            case 0x1E6D88u: goto label_1e6d88;
            case 0x1E6D8Cu: goto label_1e6d8c;
            case 0x1E6D90u: goto label_1e6d90;
            case 0x1E6D94u: goto label_1e6d94;
            case 0x1E6D98u: goto label_1e6d98;
            case 0x1E6D9Cu: goto label_1e6d9c;
            case 0x1E6DA0u: goto label_1e6da0;
            case 0x1E6DA4u: goto label_1e6da4;
            case 0x1E6DA8u: goto label_1e6da8;
            case 0x1E6DACu: goto label_1e6dac;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB4u: goto label_1e6db4;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6DBCu: goto label_1e6dbc;
            case 0x1E6DC0u: goto label_1e6dc0;
            case 0x1E6DC4u: goto label_1e6dc4;
            case 0x1E6DC8u: goto label_1e6dc8;
            case 0x1E6DCCu: goto label_1e6dcc;
            case 0x1E6DD0u: goto label_1e6dd0;
            case 0x1E6DD4u: goto label_1e6dd4;
            case 0x1E6DD8u: goto label_1e6dd8;
            case 0x1E6DDCu: goto label_1e6ddc;
            case 0x1E6DE0u: goto label_1e6de0;
            case 0x1E6DE4u: goto label_1e6de4;
            case 0x1E6DE8u: goto label_1e6de8;
            case 0x1E6DECu: goto label_1e6dec;
            case 0x1E6DF0u: goto label_1e6df0;
            case 0x1E6DF4u: goto label_1e6df4;
            case 0x1E6DF8u: goto label_1e6df8;
            case 0x1E6DFCu: goto label_1e6dfc;
            case 0x1E6E00u: goto label_1e6e00;
            case 0x1E6E04u: goto label_1e6e04;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E0Cu: goto label_1e6e0c;
            case 0x1E6E10u: goto label_1e6e10;
            case 0x1E6E14u: goto label_1e6e14;
            case 0x1E6E18u: goto label_1e6e18;
            case 0x1E6E1Cu: goto label_1e6e1c;
            case 0x1E6E20u: goto label_1e6e20;
            case 0x1E6E24u: goto label_1e6e24;
            case 0x1E6E28u: goto label_1e6e28;
            case 0x1E6E2Cu: goto label_1e6e2c;
            case 0x1E6E30u: goto label_1e6e30;
            case 0x1E6E34u: goto label_1e6e34;
            case 0x1E6E38u: goto label_1e6e38;
            case 0x1E6E3Cu: goto label_1e6e3c;
            case 0x1E6E40u: goto label_1e6e40;
            case 0x1E6E44u: goto label_1e6e44;
            case 0x1E6E48u: goto label_1e6e48;
            case 0x1E6E4Cu: goto label_1e6e4c;
            case 0x1E6E50u: goto label_1e6e50;
            case 0x1E6E54u: goto label_1e6e54;
            case 0x1E6E58u: goto label_1e6e58;
            case 0x1E6E5Cu: goto label_1e6e5c;
            case 0x1E6E60u: goto label_1e6e60;
            case 0x1E6E64u: goto label_1e6e64;
            case 0x1E6E68u: goto label_1e6e68;
            case 0x1E6E6Cu: goto label_1e6e6c;
            case 0x1E6E70u: goto label_1e6e70;
            case 0x1E6E74u: goto label_1e6e74;
            case 0x1E6E78u: goto label_1e6e78;
            case 0x1E6E7Cu: goto label_1e6e7c;
            case 0x1E6E80u: goto label_1e6e80;
            case 0x1E6E84u: goto label_1e6e84;
            case 0x1E6E88u: goto label_1e6e88;
            case 0x1E6E8Cu: goto label_1e6e8c;
            case 0x1E6E90u: goto label_1e6e90;
            case 0x1E6E94u: goto label_1e6e94;
            case 0x1E6E98u: goto label_1e6e98;
            case 0x1E6E9Cu: goto label_1e6e9c;
            case 0x1E6EA0u: goto label_1e6ea0;
            case 0x1E6EA4u: goto label_1e6ea4;
            case 0x1E6EA8u: goto label_1e6ea8;
            case 0x1E6EACu: goto label_1e6eac;
            case 0x1E6EB0u: goto label_1e6eb0;
            case 0x1E6EB4u: goto label_1e6eb4;
            case 0x1E6EB8u: goto label_1e6eb8;
            case 0x1E6EBCu: goto label_1e6ebc;
            case 0x1E6EC0u: goto label_1e6ec0;
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EC8u: goto label_1e6ec8;
            case 0x1E6ECCu: goto label_1e6ecc;
            case 0x1E6ED0u: goto label_1e6ed0;
            case 0x1E6ED4u: goto label_1e6ed4;
            case 0x1E6ED8u: goto label_1e6ed8;
            case 0x1E6EDCu: goto label_1e6edc;
            case 0x1E6EE0u: goto label_1e6ee0;
            case 0x1E6EE4u: goto label_1e6ee4;
            case 0x1E6EE8u: goto label_1e6ee8;
            case 0x1E6EECu: goto label_1e6eec;
            case 0x1E6EF0u: goto label_1e6ef0;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6EF8u: goto label_1e6ef8;
            case 0x1E6EFCu: goto label_1e6efc;
            case 0x1E6F00u: goto label_1e6f00;
            case 0x1E6F04u: goto label_1e6f04;
            case 0x1E6F08u: goto label_1e6f08;
            case 0x1E6F0Cu: goto label_1e6f0c;
            case 0x1E6F10u: goto label_1e6f10;
            case 0x1E6F14u: goto label_1e6f14;
            case 0x1E6F18u: goto label_1e6f18;
            case 0x1E6F1Cu: goto label_1e6f1c;
            case 0x1E6F20u: goto label_1e6f20;
            case 0x1E6F24u: goto label_1e6f24;
            case 0x1E6F28u: goto label_1e6f28;
            case 0x1E6F2Cu: goto label_1e6f2c;
            case 0x1E6F30u: goto label_1e6f30;
            case 0x1E6F34u: goto label_1e6f34;
            case 0x1E6F38u: goto label_1e6f38;
            case 0x1E6F3Cu: goto label_1e6f3c;
            case 0x1E6F40u: goto label_1e6f40;
            case 0x1E6F44u: goto label_1e6f44;
            case 0x1E6F48u: goto label_1e6f48;
            case 0x1E6F4Cu: goto label_1e6f4c;
            case 0x1E6F50u: goto label_1e6f50;
            case 0x1E6F54u: goto label_1e6f54;
            case 0x1E6F58u: goto label_1e6f58;
            case 0x1E6F5Cu: goto label_1e6f5c;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F6Cu: goto label_1e6f6c;
            case 0x1E6F70u: goto label_1e6f70;
            case 0x1E6F74u: goto label_1e6f74;
            case 0x1E6F78u: goto label_1e6f78;
            case 0x1E6F7Cu: goto label_1e6f7c;
            case 0x1E6F80u: goto label_1e6f80;
            case 0x1E6F84u: goto label_1e6f84;
            case 0x1E6F88u: goto label_1e6f88;
            case 0x1E6F8Cu: goto label_1e6f8c;
            case 0x1E6F90u: goto label_1e6f90;
            case 0x1E6F94u: goto label_1e6f94;
            case 0x1E6F98u: goto label_1e6f98;
            case 0x1E6F9Cu: goto label_1e6f9c;
            case 0x1E6FA0u: goto label_1e6fa0;
            case 0x1E6FA4u: goto label_1e6fa4;
            case 0x1E6FA8u: goto label_1e6fa8;
            case 0x1E6FACu: goto label_1e6fac;
            case 0x1E6FB0u: goto label_1e6fb0;
            case 0x1E6FB4u: goto label_1e6fb4;
            case 0x1E6FB8u: goto label_1e6fb8;
            case 0x1E6FBCu: goto label_1e6fbc;
            case 0x1E6FC0u: goto label_1e6fc0;
            case 0x1E6FC4u: goto label_1e6fc4;
            case 0x1E6FC8u: goto label_1e6fc8;
            case 0x1E6FCCu: goto label_1e6fcc;
            case 0x1E6FD0u: goto label_1e6fd0;
            case 0x1E6FD4u: goto label_1e6fd4;
            case 0x1E6FD8u: goto label_1e6fd8;
            case 0x1E6FDCu: goto label_1e6fdc;
            case 0x1E6FE0u: goto label_1e6fe0;
            case 0x1E6FE4u: goto label_1e6fe4;
            case 0x1E6FE8u: goto label_1e6fe8;
            case 0x1E6FECu: goto label_1e6fec;
            case 0x1E6FF0u: goto label_1e6ff0;
            case 0x1E6FF4u: goto label_1e6ff4;
            case 0x1E6FF8u: goto label_1e6ff8;
            case 0x1E6FFCu: goto label_1e6ffc;
            case 0x1E7000u: goto label_1e7000;
            case 0x1E7004u: goto label_1e7004;
            case 0x1E7008u: goto label_1e7008;
            case 0x1E700Cu: goto label_1e700c;
            case 0x1E7010u: goto label_1e7010;
            case 0x1E7014u: goto label_1e7014;
            case 0x1E7018u: goto label_1e7018;
            case 0x1E701Cu: goto label_1e701c;
            case 0x1E7020u: goto label_1e7020;
            case 0x1E7024u: goto label_1e7024;
            case 0x1E7028u: goto label_1e7028;
            case 0x1E702Cu: goto label_1e702c;
            case 0x1E7030u: goto label_1e7030;
            case 0x1E7034u: goto label_1e7034;
            case 0x1E7038u: goto label_1e7038;
            case 0x1E703Cu: goto label_1e703c;
            case 0x1E7040u: goto label_1e7040;
            case 0x1E7044u: goto label_1e7044;
            case 0x1E7048u: goto label_1e7048;
            case 0x1E704Cu: goto label_1e704c;
            case 0x1E7050u: goto label_1e7050;
            case 0x1E7054u: goto label_1e7054;
            case 0x1E7058u: goto label_1e7058;
            case 0x1E705Cu: goto label_1e705c;
            case 0x1E7060u: goto label_1e7060;
            case 0x1E7064u: goto label_1e7064;
            case 0x1E7068u: goto label_1e7068;
            case 0x1E706Cu: goto label_1e706c;
            case 0x1E7070u: goto label_1e7070;
            case 0x1E7074u: goto label_1e7074;
            case 0x1E7078u: goto label_1e7078;
            case 0x1E707Cu: goto label_1e707c;
            case 0x1E7080u: goto label_1e7080;
            case 0x1E7084u: goto label_1e7084;
            case 0x1E7088u: goto label_1e7088;
            case 0x1E708Cu: goto label_1e708c;
            case 0x1E7090u: goto label_1e7090;
            case 0x1E7094u: goto label_1e7094;
            case 0x1E7098u: goto label_1e7098;
            case 0x1E709Cu: goto label_1e709c;
            case 0x1E70A0u: goto label_1e70a0;
            case 0x1E70A4u: goto label_1e70a4;
            case 0x1E70A8u: goto label_1e70a8;
            case 0x1E70ACu: goto label_1e70ac;
            case 0x1E70B0u: goto label_1e70b0;
            case 0x1E70B4u: goto label_1e70b4;
            case 0x1E70B8u: goto label_1e70b8;
            case 0x1E70BCu: goto label_1e70bc;
            case 0x1E70C0u: goto label_1e70c0;
            case 0x1E70C4u: goto label_1e70c4;
            case 0x1E70C8u: goto label_1e70c8;
            case 0x1E70CCu: goto label_1e70cc;
            case 0x1E70D0u: goto label_1e70d0;
            case 0x1E70D4u: goto label_1e70d4;
            case 0x1E70D8u: goto label_1e70d8;
            case 0x1E70DCu: goto label_1e70dc;
            case 0x1E70E0u: goto label_1e70e0;
            case 0x1E70E4u: goto label_1e70e4;
            case 0x1E70E8u: goto label_1e70e8;
            case 0x1E70ECu: goto label_1e70ec;
            case 0x1E70F0u: goto label_1e70f0;
            case 0x1E70F4u: goto label_1e70f4;
            case 0x1E70F8u: goto label_1e70f8;
            case 0x1E70FCu: goto label_1e70fc;
            case 0x1E7100u: goto label_1e7100;
            case 0x1E7104u: goto label_1e7104;
            case 0x1E7108u: goto label_1e7108;
            case 0x1E710Cu: goto label_1e710c;
            case 0x1E7110u: goto label_1e7110;
            case 0x1E7114u: goto label_1e7114;
            case 0x1E7118u: goto label_1e7118;
            case 0x1E711Cu: goto label_1e711c;
            case 0x1E7120u: goto label_1e7120;
            case 0x1E7124u: goto label_1e7124;
            case 0x1E7128u: goto label_1e7128;
            case 0x1E712Cu: goto label_1e712c;
            case 0x1E7130u: goto label_1e7130;
            case 0x1E7134u: goto label_1e7134;
            case 0x1E7138u: goto label_1e7138;
            case 0x1E713Cu: goto label_1e713c;
            case 0x1E7140u: goto label_1e7140;
            case 0x1E7144u: goto label_1e7144;
            case 0x1E7148u: goto label_1e7148;
            case 0x1E714Cu: goto label_1e714c;
            case 0x1E7150u: goto label_1e7150;
            case 0x1E7154u: goto label_1e7154;
            case 0x1E7158u: goto label_1e7158;
            case 0x1E715Cu: goto label_1e715c;
            case 0x1E7160u: goto label_1e7160;
            case 0x1E7164u: goto label_1e7164;
            case 0x1E7168u: goto label_1e7168;
            case 0x1E716Cu: goto label_1e716c;
            case 0x1E7170u: goto label_1e7170;
            case 0x1E7174u: goto label_1e7174;
            case 0x1E7178u: goto label_1e7178;
            case 0x1E717Cu: goto label_1e717c;
            case 0x1E7180u: goto label_1e7180;
            case 0x1E7184u: goto label_1e7184;
            case 0x1E7188u: goto label_1e7188;
            case 0x1E718Cu: goto label_1e718c;
            case 0x1E7190u: goto label_1e7190;
            case 0x1E7194u: goto label_1e7194;
            case 0x1E7198u: goto label_1e7198;
            case 0x1E719Cu: goto label_1e719c;
            case 0x1E71A0u: goto label_1e71a0;
            case 0x1E71A4u: goto label_1e71a4;
            case 0x1E71A8u: goto label_1e71a8;
            case 0x1E71ACu: goto label_1e71ac;
            case 0x1E71B0u: goto label_1e71b0;
            case 0x1E71B4u: goto label_1e71b4;
            case 0x1E71B8u: goto label_1e71b8;
            case 0x1E71BCu: goto label_1e71bc;
            case 0x1E71C0u: goto label_1e71c0;
            case 0x1E71C4u: goto label_1e71c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E6E7Cu; }
            if (ctx->pc != 0x1E6E7Cu) { return; }
        }
    }
    ctx->pc = 0x1E6E7Cu;
label_1e6e7c:
    // 0x1e6e7c: 0x100000ce  b           . + 4 + (0xCE << 2)
label_1e6e80:
    if (ctx->pc == 0x1E6E80u) {
        ctx->pc = 0x1E6E84u;
        goto label_1e6e84;
    }
    ctx->pc = 0x1E6E7Cu;
    {
        const bool branch_taken_0x1e6e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6e7c) {
            ctx->pc = 0x1E71B8u;
            goto label_1e71b8;
        }
    }
    ctx->pc = 0x1E6E84u;
label_1e6e84:
    // 0x1e6e84: 0x0  nop
    ctx->pc = 0x1e6e84u;
    // NOP
label_1e6e88:
    // 0x1e6e88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e6e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e6e8c:
    // 0x1e6e8c: 0x1c4000aa  bgtz        $v0, . + 4 + (0xAA << 2)
label_1e6e90:
    if (ctx->pc == 0x1E6E90u) {
        ctx->pc = 0x1E6E94u;
        goto label_1e6e94;
    }
    ctx->pc = 0x1E6E8Cu;
    {
        const bool branch_taken_0x1e6e8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e6e8c) {
            ctx->pc = 0x1E7138u;
            goto label_1e7138;
        }
    }
    ctx->pc = 0x1E6E94u;
label_1e6e94:
    // 0x1e6e94: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x1e6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1e6e98:
    // 0x1e6e98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6e9c:
    // 0x1e6e9c: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x1e6e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_1e6ea0:
    // 0x1e6ea0: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x1e6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1e6ea4:
    // 0x1e6ea4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e6ea8:
    // 0x1e6ea8: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x1e6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
label_1e6eac:
    // 0x1e6eac: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x1e6eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_1e6eb0:
    // 0x1e6eb0: 0xc0604b0  jal         func_1812C0
label_1e6eb4:
    if (ctx->pc == 0x1E6EB4u) {
        ctx->pc = 0x1E6EB4u;
            // 0x1e6eb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E6EB8u;
        goto label_1e6eb8;
    }
    ctx->pc = 0x1E6EB0u;
    SET_GPR_U32(ctx, 31, 0x1E6EB8u);
    ctx->pc = 0x1E6EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EB0u;
            // 0x1e6eb4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EB8u; }
        if (ctx->pc != 0x1E6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EB8u; }
        if (ctx->pc != 0x1E6EB8u) { return; }
    }
    ctx->pc = 0x1E6EB8u;
label_1e6eb8:
    // 0x1e6eb8: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e6eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ebc:
    // 0x1e6ebc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1e6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1e6ec0:
    // 0x1e6ec0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1e6ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1e6ec4:
    // 0x1e6ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e6ec8:
    // 0x1e6ec8: 0x0  nop
    ctx->pc = 0x1e6ec8u;
    // NOP
label_1e6ecc:
    // 0x1e6ecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6ed0:
    // 0x1e6ed0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e6ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e6ed4:
    // 0x1e6ed4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e6ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ed8:
    // 0x1e6ed8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e6ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e6edc:
    // 0x1e6edc: 0xc050ba4  jal         func_142E90
label_1e6ee0:
    if (ctx->pc == 0x1E6EE0u) {
        ctx->pc = 0x1E6EE0u;
            // 0x1e6ee0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1E6EE4u;
        goto label_1e6ee4;
    }
    ctx->pc = 0x1E6EDCu;
    SET_GPR_U32(ctx, 31, 0x1E6EE4u);
    ctx->pc = 0x1E6EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EDCu;
            // 0x1e6ee0: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EE4u; }
        if (ctx->pc != 0x1E6EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EE4u; }
        if (ctx->pc != 0x1E6EE4u) { return; }
    }
    ctx->pc = 0x1E6EE4u;
label_1e6ee4:
    // 0x1e6ee4: 0xc040d72  jal         func_1035C8
label_1e6ee8:
    if (ctx->pc == 0x1E6EE8u) {
        ctx->pc = 0x1E6EE8u;
            // 0x1e6ee8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E6EECu;
        goto label_1e6eec;
    }
    ctx->pc = 0x1E6EE4u;
    SET_GPR_U32(ctx, 31, 0x1E6EECu);
    ctx->pc = 0x1E6EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6EE4u;
            // 0x1e6ee8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EECu; }
        if (ctx->pc != 0x1E6EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6EECu; }
        if (ctx->pc != 0x1E6EECu) { return; }
    }
    ctx->pc = 0x1E6EECu;
label_1e6eec:
    // 0x1e6eec: 0x3c043f68  lui         $a0, 0x3F68
    ctx->pc = 0x1e6eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16232 << 16));
label_1e6ef0:
    // 0x1e6ef0: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e6ef0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e6ef4:
    // 0x1e6ef4: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e6ef4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e6ef8:
    // 0x1e6ef8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e6efc:
    // 0x1e6efc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e6efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e6f00:
    // 0x1e6f00: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e6f00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e6f04:
    // 0x1e6f04: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e6f04u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e6f08:
    // 0x1e6f08: 0xc040880  jal         func_102200
label_1e6f0c:
    if (ctx->pc == 0x1E6F0Cu) {
        ctx->pc = 0x1E6F0Cu;
            // 0x1e6f0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F10u;
        goto label_1e6f10;
    }
    ctx->pc = 0x1E6F08u;
    SET_GPR_U32(ctx, 31, 0x1E6F10u);
    ctx->pc = 0x1E6F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F08u;
            // 0x1e6f0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F10u; }
        if (ctx->pc != 0x1E6F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F10u; }
        if (ctx->pc != 0x1E6F10u) { return; }
    }
    ctx->pc = 0x1E6F10u;
label_1e6f10:
    // 0x1e6f10: 0x3c043f58  lui         $a0, 0x3F58
    ctx->pc = 0x1e6f10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16216 << 16));
label_1e6f14:
    // 0x1e6f14: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e6f14u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e6f18:
    // 0x1e6f18: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e6f18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e6f1c:
    // 0x1e6f1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e6f20:
    // 0x1e6f20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e6f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e6f24:
    // 0x1e6f24: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e6f24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e6f28:
    // 0x1e6f28: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e6f28u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e6f2c:
    // 0x1e6f2c: 0xc040866  jal         func_102198
label_1e6f30:
    if (ctx->pc == 0x1E6F30u) {
        ctx->pc = 0x1E6F30u;
            // 0x1e6f30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F34u;
        goto label_1e6f34;
    }
    ctx->pc = 0x1E6F2Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F34u);
    ctx->pc = 0x1E6F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F2Cu;
            // 0x1e6f30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F34u; }
        if (ctx->pc != 0x1E6F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F34u; }
        if (ctx->pc != 0x1E6F34u) { return; }
    }
    ctx->pc = 0x1E6F34u;
label_1e6f34:
    // 0x1e6f34: 0xc040a74  jal         func_1029D0
label_1e6f38:
    if (ctx->pc == 0x1E6F38u) {
        ctx->pc = 0x1E6F38u;
            // 0x1e6f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F3Cu;
        goto label_1e6f3c;
    }
    ctx->pc = 0x1E6F34u;
    SET_GPR_U32(ctx, 31, 0x1E6F3Cu);
    ctx->pc = 0x1E6F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F34u;
            // 0x1e6f38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F3Cu; }
        if (ctx->pc != 0x1E6F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F3Cu; }
        if (ctx->pc != 0x1E6F3Cu) { return; }
    }
    ctx->pc = 0x1E6F3Cu;
label_1e6f3c:
    // 0x1e6f3c: 0xc60100e4  lwc1        $f1, 0xE4($s0)
    ctx->pc = 0x1e6f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6f40:
    // 0x1e6f40: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6f40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e6f44:
    // 0x1e6f44: 0xc050ba4  jal         func_142E90
label_1e6f48:
    if (ctx->pc == 0x1E6F48u) {
        ctx->pc = 0x1E6F48u;
            // 0x1e6f48: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1E6F4Cu;
        goto label_1e6f4c;
    }
    ctx->pc = 0x1E6F44u;
    SET_GPR_U32(ctx, 31, 0x1E6F4Cu);
    ctx->pc = 0x1E6F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F44u;
            // 0x1e6f48: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F4Cu; }
        if (ctx->pc != 0x1E6F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F4Cu; }
        if (ctx->pc != 0x1E6F4Cu) { return; }
    }
    ctx->pc = 0x1E6F4Cu;
label_1e6f4c:
    // 0x1e6f4c: 0xc040d72  jal         func_1035C8
label_1e6f50:
    if (ctx->pc == 0x1E6F50u) {
        ctx->pc = 0x1E6F50u;
            // 0x1e6f50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E6F54u;
        goto label_1e6f54;
    }
    ctx->pc = 0x1E6F4Cu;
    SET_GPR_U32(ctx, 31, 0x1E6F54u);
    ctx->pc = 0x1E6F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F4Cu;
            // 0x1e6f50: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F54u; }
        if (ctx->pc != 0x1E6F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F54u; }
        if (ctx->pc != 0x1E6F54u) { return; }
    }
    ctx->pc = 0x1E6F54u;
label_1e6f54:
    // 0x1e6f54: 0x3c043f68  lui         $a0, 0x3F68
    ctx->pc = 0x1e6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16232 << 16));
label_1e6f58:
    // 0x1e6f58: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e6f58u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e6f5c:
    // 0x1e6f5c: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e6f5cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e6f60:
    // 0x1e6f60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e6f64:
    // 0x1e6f64: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e6f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e6f68:
    // 0x1e6f68: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e6f68u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e6f6c:
    // 0x1e6f6c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e6f6cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e6f70:
    // 0x1e6f70: 0xc040880  jal         func_102200
label_1e6f74:
    if (ctx->pc == 0x1E6F74u) {
        ctx->pc = 0x1E6F74u;
            // 0x1e6f74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F78u;
        goto label_1e6f78;
    }
    ctx->pc = 0x1E6F70u;
    SET_GPR_U32(ctx, 31, 0x1E6F78u);
    ctx->pc = 0x1E6F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F70u;
            // 0x1e6f74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F78u; }
        if (ctx->pc != 0x1E6F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F78u; }
        if (ctx->pc != 0x1E6F78u) { return; }
    }
    ctx->pc = 0x1E6F78u;
label_1e6f78:
    // 0x1e6f78: 0x3c043f58  lui         $a0, 0x3F58
    ctx->pc = 0x1e6f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16216 << 16));
label_1e6f7c:
    // 0x1e6f7c: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e6f7cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e6f80:
    // 0x1e6f80: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e6f80u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e6f84:
    // 0x1e6f84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e6f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e6f88:
    // 0x1e6f88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e6f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e6f8c:
    // 0x1e6f8c: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e6f8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e6f90:
    // 0x1e6f90: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e6f90u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e6f94:
    // 0x1e6f94: 0xc040866  jal         func_102198
label_1e6f98:
    if (ctx->pc == 0x1E6F98u) {
        ctx->pc = 0x1E6F98u;
            // 0x1e6f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6F9Cu;
        goto label_1e6f9c;
    }
    ctx->pc = 0x1E6F94u;
    SET_GPR_U32(ctx, 31, 0x1E6F9Cu);
    ctx->pc = 0x1E6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F94u;
            // 0x1e6f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F9Cu; }
        if (ctx->pc != 0x1E6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6F9Cu; }
        if (ctx->pc != 0x1E6F9Cu) { return; }
    }
    ctx->pc = 0x1E6F9Cu;
label_1e6f9c:
    // 0x1e6f9c: 0xc040a74  jal         func_1029D0
label_1e6fa0:
    if (ctx->pc == 0x1E6FA0u) {
        ctx->pc = 0x1E6FA0u;
            // 0x1e6fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E6FA4u;
        goto label_1e6fa4;
    }
    ctx->pc = 0x1E6F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E6FA4u);
    ctx->pc = 0x1E6FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6F9Cu;
            // 0x1e6fa0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FA4u; }
        if (ctx->pc != 0x1E6FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FA4u; }
        if (ctx->pc != 0x1E6FA4u) { return; }
    }
    ctx->pc = 0x1E6FA4u;
label_1e6fa4:
    // 0x1e6fa4: 0xc60100e0  lwc1        $f1, 0xE0($s0)
    ctx->pc = 0x1e6fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6fa8:
    // 0x1e6fa8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e6fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e6fac:
    // 0x1e6fac: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e6facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_1e6fb0:
    // 0x1e6fb0: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x1e6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_1e6fb4:
    // 0x1e6fb4: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1e6fb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1e6fb8:
    // 0x1e6fb8: 0x1420007f  bnez        $at, . + 4 + (0x7F << 2)
label_1e6fbc:
    if (ctx->pc == 0x1E6FBCu) {
        ctx->pc = 0x1E6FC0u;
        goto label_1e6fc0;
    }
    ctx->pc = 0x1E6FB8u;
    {
        const bool branch_taken_0x1e6fb8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e6fb8) {
            ctx->pc = 0x1E71B8u;
            goto label_1e71b8;
        }
    }
    ctx->pc = 0x1E6FC0u;
label_1e6fc0:
    // 0x1e6fc0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6fc4:
    // 0x1e6fc4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1e6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e6fc8:
    // 0x1e6fc8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6fcc:
    // 0x1e6fcc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e6fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e6fd0:
    // 0x1e6fd0: 0xc05d080  jal         func_174200
label_1e6fd4:
    if (ctx->pc == 0x1E6FD4u) {
        ctx->pc = 0x1E6FD4u;
            // 0x1e6fd4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E6FD8u;
        goto label_1e6fd8;
    }
    ctx->pc = 0x1E6FD0u;
    SET_GPR_U32(ctx, 31, 0x1E6FD8u);
    ctx->pc = 0x1E6FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FD0u;
            // 0x1e6fd4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FD8u; }
        if (ctx->pc != 0x1E6FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FD8u; }
        if (ctx->pc != 0x1E6FD8u) { return; }
    }
    ctx->pc = 0x1E6FD8u;
label_1e6fd8:
    // 0x1e6fd8: 0xc050bb4  jal         func_142ED0
label_1e6fdc:
    if (ctx->pc == 0x1E6FDCu) {
        ctx->pc = 0x1E6FE0u;
        goto label_1e6fe0;
    }
    ctx->pc = 0x1E6FD8u;
    SET_GPR_U32(ctx, 31, 0x1E6FE0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FE0u; }
        if (ctx->pc != 0x1E6FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6FE0u; }
        if (ctx->pc != 0x1E6FE0u) { return; }
    }
    ctx->pc = 0x1E6FE0u;
label_1e6fe0:
    // 0x1e6fe0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e6fe0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e6fe4:
    // 0x1e6fe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e6fe8:
    if (ctx->pc == 0x1E6FE8u) {
        ctx->pc = 0x1E6FECu;
        goto label_1e6fec;
    }
    ctx->pc = 0x1E6FE4u;
    {
        const bool branch_taken_0x1e6fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6fe4) {
            ctx->pc = 0x1E7008u;
            goto label_1e7008;
        }
    }
    ctx->pc = 0x1E6FECu;
label_1e6fec:
    // 0x1e6fec: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e6fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e6ff0:
    // 0x1e6ff0: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e6ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e6ff4:
    // 0x1e6ff4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e6ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e6ff8:
    // 0x1e6ff8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e6ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e6ffc:
    // 0x1e6ffc: 0xc05d080  jal         func_174200
label_1e7000:
    if (ctx->pc == 0x1E7000u) {
        ctx->pc = 0x1E7000u;
            // 0x1e7000: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E7004u;
        goto label_1e7004;
    }
    ctx->pc = 0x1E6FFCu;
    SET_GPR_U32(ctx, 31, 0x1E7004u);
    ctx->pc = 0x1E7000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6FFCu;
            // 0x1e7000: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7004u; }
        if (ctx->pc != 0x1E7004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7004u; }
        if (ctx->pc != 0x1E7004u) { return; }
    }
    ctx->pc = 0x1E7004u;
label_1e7004:
    // 0x1e7004: 0x0  nop
    ctx->pc = 0x1e7004u;
    // NOP
label_1e7008:
    // 0x1e7008: 0xc050bb4  jal         func_142ED0
label_1e700c:
    if (ctx->pc == 0x1E700Cu) {
        ctx->pc = 0x1E7010u;
        goto label_1e7010;
    }
    ctx->pc = 0x1E7008u;
    SET_GPR_U32(ctx, 31, 0x1E7010u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7010u; }
        if (ctx->pc != 0x1E7010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7010u; }
        if (ctx->pc != 0x1E7010u) { return; }
    }
    ctx->pc = 0x1E7010u;
label_1e7010:
    // 0x1e7010: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e7010u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e7014:
    // 0x1e7014: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e7018:
    if (ctx->pc == 0x1E7018u) {
        ctx->pc = 0x1E701Cu;
        goto label_1e701c;
    }
    ctx->pc = 0x1E7014u;
    {
        const bool branch_taken_0x1e7014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7014) {
            ctx->pc = 0x1E7038u;
            goto label_1e7038;
        }
    }
    ctx->pc = 0x1E701Cu;
label_1e701c:
    // 0x1e701c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7020:
    // 0x1e7020: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1e7020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e7024:
    // 0x1e7024: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e7024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7028:
    // 0x1e7028: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e7028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e702c:
    // 0x1e702c: 0xc05d080  jal         func_174200
label_1e7030:
    if (ctx->pc == 0x1E7030u) {
        ctx->pc = 0x1E7030u;
            // 0x1e7030: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E7034u;
        goto label_1e7034;
    }
    ctx->pc = 0x1E702Cu;
    SET_GPR_U32(ctx, 31, 0x1E7034u);
    ctx->pc = 0x1E7030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E702Cu;
            // 0x1e7030: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7034u; }
        if (ctx->pc != 0x1E7034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7034u; }
        if (ctx->pc != 0x1E7034u) { return; }
    }
    ctx->pc = 0x1E7034u;
label_1e7034:
    // 0x1e7034: 0x0  nop
    ctx->pc = 0x1e7034u;
    // NOP
label_1e7038:
    // 0x1e7038: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e7038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e703c:
    // 0x1e703c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7040:
    // 0x1e7040: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e7040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e7044:
    // 0x1e7044: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e7044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7048:
    // 0x1e7048: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e7048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e704c:
    // 0x1e704c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e704cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7050:
    // 0x1e7050: 0x0  nop
    ctx->pc = 0x1e7050u;
    // NOP
label_1e7054:
    // 0x1e7054: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e7054u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e7058:
    // 0x1e7058: 0xc053708  jal         func_14DC20
label_1e705c:
    if (ctx->pc == 0x1E705Cu) {
        ctx->pc = 0x1E705Cu;
            // 0x1e705c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E7060u;
        goto label_1e7060;
    }
    ctx->pc = 0x1E7058u;
    SET_GPR_U32(ctx, 31, 0x1E7060u);
    ctx->pc = 0x1E705Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7058u;
            // 0x1e705c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7060u; }
        if (ctx->pc != 0x1E7060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7060u; }
        if (ctx->pc != 0x1E7060u) { return; }
    }
    ctx->pc = 0x1E7060u;
label_1e7060:
    // 0x1e7060: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e7060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7064:
    // 0x1e7064: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e7064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e7068:
    // 0x1e7068: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e7068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e706c:
    // 0x1e706c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e7070:
    // 0x1e7070: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e7070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e7074:
    // 0x1e7074: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e7074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e7078:
    // 0x1e7078: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e7078u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e707c:
    // 0x1e707c: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1e707cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1e7080:
    // 0x1e7080: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x1e7080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_1e7084:
    // 0x1e7084: 0xc053708  jal         func_14DC20
label_1e7088:
    if (ctx->pc == 0x1E7088u) {
        ctx->pc = 0x1E7088u;
            // 0x1e7088: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E708Cu;
        goto label_1e708c;
    }
    ctx->pc = 0x1E7084u;
    SET_GPR_U32(ctx, 31, 0x1E708Cu);
    ctx->pc = 0x1E7088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7084u;
            // 0x1e7088: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E708Cu; }
        if (ctx->pc != 0x1E708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E708Cu; }
        if (ctx->pc != 0x1E708Cu) { return; }
    }
    ctx->pc = 0x1E708Cu;
label_1e708c:
    // 0x1e708c: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7090:
    // 0x1e7090: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e7090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e7094:
    // 0x1e7094: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e7094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7098:
    // 0x1e7098: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e7098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e709c:
    // 0x1e709c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e709cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e70a0:
    // 0x1e70a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e70a4:
    // 0x1e70a4: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e70a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e70a8:
    // 0x1e70a8: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1e70a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1e70ac:
    // 0x1e70ac: 0x24450005  addiu       $a1, $v0, 0x5
    ctx->pc = 0x1e70acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_1e70b0:
    // 0x1e70b0: 0xc053708  jal         func_14DC20
label_1e70b4:
    if (ctx->pc == 0x1E70B4u) {
        ctx->pc = 0x1E70B4u;
            // 0x1e70b4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E70B8u;
        goto label_1e70b8;
    }
    ctx->pc = 0x1E70B0u;
    SET_GPR_U32(ctx, 31, 0x1E70B8u);
    ctx->pc = 0x1E70B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70B0u;
            // 0x1e70b4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70B8u; }
        if (ctx->pc != 0x1E70B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70B8u; }
        if (ctx->pc != 0x1E70B8u) { return; }
    }
    ctx->pc = 0x1E70B8u;
label_1e70b8:
    // 0x1e70b8: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70bc:
    // 0x1e70bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e70bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e70c0:
    // 0x1e70c0: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70c4:
    // 0x1e70c4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e70c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e70c8:
    // 0x1e70c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e70c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e70cc:
    // 0x1e70cc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e70d0:
    // 0x1e70d0: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e70d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e70d4:
    // 0x1e70d4: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1e70d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
label_1e70d8:
    // 0x1e70d8: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x1e70d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_1e70dc:
    // 0x1e70dc: 0xc053708  jal         func_14DC20
label_1e70e0:
    if (ctx->pc == 0x1E70E0u) {
        ctx->pc = 0x1E70E0u;
            // 0x1e70e0: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E70E4u;
        goto label_1e70e4;
    }
    ctx->pc = 0x1E70DCu;
    SET_GPR_U32(ctx, 31, 0x1E70E4u);
    ctx->pc = 0x1E70E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E70DCu;
            // 0x1e70e0: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70E4u; }
        if (ctx->pc != 0x1E70E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E70E4u; }
        if (ctx->pc != 0x1E70E4u) { return; }
    }
    ctx->pc = 0x1E70E4u;
label_1e70e4:
    // 0x1e70e4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e70e8:
    // 0x1e70e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e70ec:
    // 0x1e70ec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e70ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e70f0:
    // 0x1e70f0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e70f4:
    // 0x1e70f4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e70f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e70f8:
    // 0x1e70f8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e70fc:
    // 0x1e70fc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e70fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e7100:
    // 0x1e7100: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
label_1e7104:
    // 0x1e7104: 0x2445fff6  addiu       $a1, $v0, -0xA
    ctx->pc = 0x1e7104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967286));
label_1e7108:
    // 0x1e7108: 0xc053708  jal         func_14DC20
label_1e710c:
    if (ctx->pc == 0x1E710Cu) {
        ctx->pc = 0x1E710Cu;
            // 0x1e710c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E7110u;
        goto label_1e7110;
    }
    ctx->pc = 0x1E7108u;
    SET_GPR_U32(ctx, 31, 0x1E7110u);
    ctx->pc = 0x1E710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7108u;
            // 0x1e710c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DC20u;
    if (runtime->hasFunction(0x14DC20u)) {
        auto targetFn = runtime->lookupFunction(0x14DC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7110u; }
        if (ctx->pc != 0x1E7110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionChain_0x14dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7110u; }
        if (ctx->pc != 0x1E7110u) { return; }
    }
    ctx->pc = 0x1E7110u;
label_1e7110:
    // 0x1e7110: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e7114:
    // 0x1e7114: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1e7114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e7118:
    // 0x1e7118: 0xc07b0ac  jal         func_1EC2B0
label_1e711c:
    if (ctx->pc == 0x1E711Cu) {
        ctx->pc = 0x1E711Cu;
            // 0x1e711c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E7120u;
        goto label_1e7120;
    }
    ctx->pc = 0x1E7118u;
    SET_GPR_U32(ctx, 31, 0x1E7120u);
    ctx->pc = 0x1E711Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7118u;
            // 0x1e711c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7120u; }
        if (ctx->pc != 0x1E7120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7120u; }
        if (ctx->pc != 0x1E7120u) { return; }
    }
    ctx->pc = 0x1E7120u;
label_1e7120:
    // 0x1e7120: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e7120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e7124:
    // 0x1e7124: 0x40f809  jalr        $v0
label_1e7128:
    if (ctx->pc == 0x1E7128u) {
        ctx->pc = 0x1E7128u;
            // 0x1e7128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E712Cu;
        goto label_1e712c;
    }
    ctx->pc = 0x1E7124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E712Cu);
        ctx->pc = 0x1E7128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7124u;
            // 0x1e7128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6560u: goto label_1e6560;
            case 0x1E6564u: goto label_1e6564;
            case 0x1E6568u: goto label_1e6568;
            case 0x1E656Cu: goto label_1e656c;
            case 0x1E6570u: goto label_1e6570;
            case 0x1E6574u: goto label_1e6574;
            case 0x1E6578u: goto label_1e6578;
            case 0x1E657Cu: goto label_1e657c;
            case 0x1E6580u: goto label_1e6580;
            case 0x1E6584u: goto label_1e6584;
            case 0x1E6588u: goto label_1e6588;
            case 0x1E658Cu: goto label_1e658c;
            case 0x1E6590u: goto label_1e6590;
            case 0x1E6594u: goto label_1e6594;
            case 0x1E6598u: goto label_1e6598;
            case 0x1E659Cu: goto label_1e659c;
            case 0x1E65A0u: goto label_1e65a0;
            case 0x1E65A4u: goto label_1e65a4;
            case 0x1E65A8u: goto label_1e65a8;
            case 0x1E65ACu: goto label_1e65ac;
            case 0x1E65B0u: goto label_1e65b0;
            case 0x1E65B4u: goto label_1e65b4;
            case 0x1E65B8u: goto label_1e65b8;
            case 0x1E65BCu: goto label_1e65bc;
            case 0x1E65C0u: goto label_1e65c0;
            case 0x1E65C4u: goto label_1e65c4;
            case 0x1E65C8u: goto label_1e65c8;
            case 0x1E65CCu: goto label_1e65cc;
            case 0x1E65D0u: goto label_1e65d0;
            case 0x1E65D4u: goto label_1e65d4;
            case 0x1E65D8u: goto label_1e65d8;
            case 0x1E65DCu: goto label_1e65dc;
            case 0x1E65E0u: goto label_1e65e0;
            case 0x1E65E4u: goto label_1e65e4;
            case 0x1E65E8u: goto label_1e65e8;
            case 0x1E65ECu: goto label_1e65ec;
            case 0x1E65F0u: goto label_1e65f0;
            case 0x1E65F4u: goto label_1e65f4;
            case 0x1E65F8u: goto label_1e65f8;
            case 0x1E65FCu: goto label_1e65fc;
            case 0x1E6600u: goto label_1e6600;
            case 0x1E6604u: goto label_1e6604;
            case 0x1E6608u: goto label_1e6608;
            case 0x1E660Cu: goto label_1e660c;
            case 0x1E6610u: goto label_1e6610;
            case 0x1E6614u: goto label_1e6614;
            case 0x1E6618u: goto label_1e6618;
            case 0x1E661Cu: goto label_1e661c;
            case 0x1E6620u: goto label_1e6620;
            case 0x1E6624u: goto label_1e6624;
            case 0x1E6628u: goto label_1e6628;
            case 0x1E662Cu: goto label_1e662c;
            case 0x1E6630u: goto label_1e6630;
            case 0x1E6634u: goto label_1e6634;
            case 0x1E6638u: goto label_1e6638;
            case 0x1E663Cu: goto label_1e663c;
            case 0x1E6640u: goto label_1e6640;
            case 0x1E6644u: goto label_1e6644;
            case 0x1E6648u: goto label_1e6648;
            case 0x1E664Cu: goto label_1e664c;
            case 0x1E6650u: goto label_1e6650;
            case 0x1E6654u: goto label_1e6654;
            case 0x1E6658u: goto label_1e6658;
            case 0x1E665Cu: goto label_1e665c;
            case 0x1E6660u: goto label_1e6660;
            case 0x1E6664u: goto label_1e6664;
            case 0x1E6668u: goto label_1e6668;
            case 0x1E666Cu: goto label_1e666c;
            case 0x1E6670u: goto label_1e6670;
            case 0x1E6674u: goto label_1e6674;
            case 0x1E6678u: goto label_1e6678;
            case 0x1E667Cu: goto label_1e667c;
            case 0x1E6680u: goto label_1e6680;
            case 0x1E6684u: goto label_1e6684;
            case 0x1E6688u: goto label_1e6688;
            case 0x1E668Cu: goto label_1e668c;
            case 0x1E6690u: goto label_1e6690;
            case 0x1E6694u: goto label_1e6694;
            case 0x1E6698u: goto label_1e6698;
            case 0x1E669Cu: goto label_1e669c;
            case 0x1E66A0u: goto label_1e66a0;
            case 0x1E66A4u: goto label_1e66a4;
            case 0x1E66A8u: goto label_1e66a8;
            case 0x1E66ACu: goto label_1e66ac;
            case 0x1E66B0u: goto label_1e66b0;
            case 0x1E66B4u: goto label_1e66b4;
            case 0x1E66B8u: goto label_1e66b8;
            case 0x1E66BCu: goto label_1e66bc;
            case 0x1E66C0u: goto label_1e66c0;
            case 0x1E66C4u: goto label_1e66c4;
            case 0x1E66C8u: goto label_1e66c8;
            case 0x1E66CCu: goto label_1e66cc;
            case 0x1E66D0u: goto label_1e66d0;
            case 0x1E66D4u: goto label_1e66d4;
            case 0x1E66D8u: goto label_1e66d8;
            case 0x1E66DCu: goto label_1e66dc;
            case 0x1E66E0u: goto label_1e66e0;
            case 0x1E66E4u: goto label_1e66e4;
            case 0x1E66E8u: goto label_1e66e8;
            case 0x1E66ECu: goto label_1e66ec;
            case 0x1E66F0u: goto label_1e66f0;
            case 0x1E66F4u: goto label_1e66f4;
            case 0x1E66F8u: goto label_1e66f8;
            case 0x1E66FCu: goto label_1e66fc;
            case 0x1E6700u: goto label_1e6700;
            case 0x1E6704u: goto label_1e6704;
            case 0x1E6708u: goto label_1e6708;
            case 0x1E670Cu: goto label_1e670c;
            case 0x1E6710u: goto label_1e6710;
            case 0x1E6714u: goto label_1e6714;
            case 0x1E6718u: goto label_1e6718;
            case 0x1E671Cu: goto label_1e671c;
            case 0x1E6720u: goto label_1e6720;
            case 0x1E6724u: goto label_1e6724;
            case 0x1E6728u: goto label_1e6728;
            case 0x1E672Cu: goto label_1e672c;
            case 0x1E6730u: goto label_1e6730;
            case 0x1E6734u: goto label_1e6734;
            case 0x1E6738u: goto label_1e6738;
            case 0x1E673Cu: goto label_1e673c;
            case 0x1E6740u: goto label_1e6740;
            case 0x1E6744u: goto label_1e6744;
            case 0x1E6748u: goto label_1e6748;
            case 0x1E674Cu: goto label_1e674c;
            case 0x1E6750u: goto label_1e6750;
            case 0x1E6754u: goto label_1e6754;
            case 0x1E6758u: goto label_1e6758;
            case 0x1E675Cu: goto label_1e675c;
            case 0x1E6760u: goto label_1e6760;
            case 0x1E6764u: goto label_1e6764;
            case 0x1E6768u: goto label_1e6768;
            case 0x1E676Cu: goto label_1e676c;
            case 0x1E6770u: goto label_1e6770;
            case 0x1E6774u: goto label_1e6774;
            case 0x1E6778u: goto label_1e6778;
            case 0x1E677Cu: goto label_1e677c;
            case 0x1E6780u: goto label_1e6780;
            case 0x1E6784u: goto label_1e6784;
            case 0x1E6788u: goto label_1e6788;
            case 0x1E678Cu: goto label_1e678c;
            case 0x1E6790u: goto label_1e6790;
            case 0x1E6794u: goto label_1e6794;
            case 0x1E6798u: goto label_1e6798;
            case 0x1E679Cu: goto label_1e679c;
            case 0x1E67A0u: goto label_1e67a0;
            case 0x1E67A4u: goto label_1e67a4;
            case 0x1E67A8u: goto label_1e67a8;
            case 0x1E67ACu: goto label_1e67ac;
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E67B4u: goto label_1e67b4;
            case 0x1E67B8u: goto label_1e67b8;
            case 0x1E67BCu: goto label_1e67bc;
            case 0x1E67C0u: goto label_1e67c0;
            case 0x1E67C4u: goto label_1e67c4;
            case 0x1E67C8u: goto label_1e67c8;
            case 0x1E67CCu: goto label_1e67cc;
            case 0x1E67D0u: goto label_1e67d0;
            case 0x1E67D4u: goto label_1e67d4;
            case 0x1E67D8u: goto label_1e67d8;
            case 0x1E67DCu: goto label_1e67dc;
            case 0x1E67E0u: goto label_1e67e0;
            case 0x1E67E4u: goto label_1e67e4;
            case 0x1E67E8u: goto label_1e67e8;
            case 0x1E67ECu: goto label_1e67ec;
            case 0x1E67F0u: goto label_1e67f0;
            case 0x1E67F4u: goto label_1e67f4;
            case 0x1E67F8u: goto label_1e67f8;
            case 0x1E67FCu: goto label_1e67fc;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6804u: goto label_1e6804;
            case 0x1E6808u: goto label_1e6808;
            case 0x1E680Cu: goto label_1e680c;
            case 0x1E6810u: goto label_1e6810;
            case 0x1E6814u: goto label_1e6814;
            case 0x1E6818u: goto label_1e6818;
            case 0x1E681Cu: goto label_1e681c;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6824u: goto label_1e6824;
            case 0x1E6828u: goto label_1e6828;
            case 0x1E682Cu: goto label_1e682c;
            case 0x1E6830u: goto label_1e6830;
            case 0x1E6834u: goto label_1e6834;
            case 0x1E6838u: goto label_1e6838;
            case 0x1E683Cu: goto label_1e683c;
            case 0x1E6840u: goto label_1e6840;
            case 0x1E6844u: goto label_1e6844;
            case 0x1E6848u: goto label_1e6848;
            case 0x1E684Cu: goto label_1e684c;
            case 0x1E6850u: goto label_1e6850;
            case 0x1E6854u: goto label_1e6854;
            case 0x1E6858u: goto label_1e6858;
            case 0x1E685Cu: goto label_1e685c;
            case 0x1E6860u: goto label_1e6860;
            case 0x1E6864u: goto label_1e6864;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E686Cu: goto label_1e686c;
            case 0x1E6870u: goto label_1e6870;
            case 0x1E6874u: goto label_1e6874;
            case 0x1E6878u: goto label_1e6878;
            case 0x1E687Cu: goto label_1e687c;
            case 0x1E6880u: goto label_1e6880;
            case 0x1E6884u: goto label_1e6884;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E6890u: goto label_1e6890;
            case 0x1E6894u: goto label_1e6894;
            case 0x1E6898u: goto label_1e6898;
            case 0x1E689Cu: goto label_1e689c;
            case 0x1E68A0u: goto label_1e68a0;
            case 0x1E68A4u: goto label_1e68a4;
            case 0x1E68A8u: goto label_1e68a8;
            case 0x1E68ACu: goto label_1e68ac;
            case 0x1E68B0u: goto label_1e68b0;
            case 0x1E68B4u: goto label_1e68b4;
            case 0x1E68B8u: goto label_1e68b8;
            case 0x1E68BCu: goto label_1e68bc;
            case 0x1E68C0u: goto label_1e68c0;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E68C8u: goto label_1e68c8;
            case 0x1E68CCu: goto label_1e68cc;
            case 0x1E68D0u: goto label_1e68d0;
            case 0x1E68D4u: goto label_1e68d4;
            case 0x1E68D8u: goto label_1e68d8;
            case 0x1E68DCu: goto label_1e68dc;
            case 0x1E68E0u: goto label_1e68e0;
            case 0x1E68E4u: goto label_1e68e4;
            case 0x1E68E8u: goto label_1e68e8;
            case 0x1E68ECu: goto label_1e68ec;
            case 0x1E68F0u: goto label_1e68f0;
            case 0x1E68F4u: goto label_1e68f4;
            case 0x1E68F8u: goto label_1e68f8;
            case 0x1E68FCu: goto label_1e68fc;
            case 0x1E6900u: goto label_1e6900;
            case 0x1E6904u: goto label_1e6904;
            case 0x1E6908u: goto label_1e6908;
            case 0x1E690Cu: goto label_1e690c;
            case 0x1E6910u: goto label_1e6910;
            case 0x1E6914u: goto label_1e6914;
            case 0x1E6918u: goto label_1e6918;
            case 0x1E691Cu: goto label_1e691c;
            case 0x1E6920u: goto label_1e6920;
            case 0x1E6924u: goto label_1e6924;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E692Cu: goto label_1e692c;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6934u: goto label_1e6934;
            case 0x1E6938u: goto label_1e6938;
            case 0x1E693Cu: goto label_1e693c;
            case 0x1E6940u: goto label_1e6940;
            case 0x1E6944u: goto label_1e6944;
            case 0x1E6948u: goto label_1e6948;
            case 0x1E694Cu: goto label_1e694c;
            case 0x1E6950u: goto label_1e6950;
            case 0x1E6954u: goto label_1e6954;
            case 0x1E6958u: goto label_1e6958;
            case 0x1E695Cu: goto label_1e695c;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6964u: goto label_1e6964;
            case 0x1E6968u: goto label_1e6968;
            case 0x1E696Cu: goto label_1e696c;
            case 0x1E6970u: goto label_1e6970;
            case 0x1E6974u: goto label_1e6974;
            case 0x1E6978u: goto label_1e6978;
            case 0x1E697Cu: goto label_1e697c;
            case 0x1E6980u: goto label_1e6980;
            case 0x1E6984u: goto label_1e6984;
            case 0x1E6988u: goto label_1e6988;
            case 0x1E698Cu: goto label_1e698c;
            case 0x1E6990u: goto label_1e6990;
            case 0x1E6994u: goto label_1e6994;
            case 0x1E6998u: goto label_1e6998;
            case 0x1E699Cu: goto label_1e699c;
            case 0x1E69A0u: goto label_1e69a0;
            case 0x1E69A4u: goto label_1e69a4;
            case 0x1E69A8u: goto label_1e69a8;
            case 0x1E69ACu: goto label_1e69ac;
            case 0x1E69B0u: goto label_1e69b0;
            case 0x1E69B4u: goto label_1e69b4;
            case 0x1E69B8u: goto label_1e69b8;
            case 0x1E69BCu: goto label_1e69bc;
            case 0x1E69C0u: goto label_1e69c0;
            case 0x1E69C4u: goto label_1e69c4;
            case 0x1E69C8u: goto label_1e69c8;
            case 0x1E69CCu: goto label_1e69cc;
            case 0x1E69D0u: goto label_1e69d0;
            case 0x1E69D4u: goto label_1e69d4;
            case 0x1E69D8u: goto label_1e69d8;
            case 0x1E69DCu: goto label_1e69dc;
            case 0x1E69E0u: goto label_1e69e0;
            case 0x1E69E4u: goto label_1e69e4;
            case 0x1E69E8u: goto label_1e69e8;
            case 0x1E69ECu: goto label_1e69ec;
            case 0x1E69F0u: goto label_1e69f0;
            case 0x1E69F4u: goto label_1e69f4;
            case 0x1E69F8u: goto label_1e69f8;
            case 0x1E69FCu: goto label_1e69fc;
            case 0x1E6A00u: goto label_1e6a00;
            case 0x1E6A04u: goto label_1e6a04;
            case 0x1E6A08u: goto label_1e6a08;
            case 0x1E6A0Cu: goto label_1e6a0c;
            case 0x1E6A10u: goto label_1e6a10;
            case 0x1E6A14u: goto label_1e6a14;
            case 0x1E6A18u: goto label_1e6a18;
            case 0x1E6A1Cu: goto label_1e6a1c;
            case 0x1E6A20u: goto label_1e6a20;
            case 0x1E6A24u: goto label_1e6a24;
            case 0x1E6A28u: goto label_1e6a28;
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6A30u: goto label_1e6a30;
            case 0x1E6A34u: goto label_1e6a34;
            case 0x1E6A38u: goto label_1e6a38;
            case 0x1E6A3Cu: goto label_1e6a3c;
            case 0x1E6A40u: goto label_1e6a40;
            case 0x1E6A44u: goto label_1e6a44;
            case 0x1E6A48u: goto label_1e6a48;
            case 0x1E6A4Cu: goto label_1e6a4c;
            case 0x1E6A50u: goto label_1e6a50;
            case 0x1E6A54u: goto label_1e6a54;
            case 0x1E6A58u: goto label_1e6a58;
            case 0x1E6A5Cu: goto label_1e6a5c;
            case 0x1E6A60u: goto label_1e6a60;
            case 0x1E6A64u: goto label_1e6a64;
            case 0x1E6A68u: goto label_1e6a68;
            case 0x1E6A6Cu: goto label_1e6a6c;
            case 0x1E6A70u: goto label_1e6a70;
            case 0x1E6A74u: goto label_1e6a74;
            case 0x1E6A78u: goto label_1e6a78;
            case 0x1E6A7Cu: goto label_1e6a7c;
            case 0x1E6A80u: goto label_1e6a80;
            case 0x1E6A84u: goto label_1e6a84;
            case 0x1E6A88u: goto label_1e6a88;
            case 0x1E6A8Cu: goto label_1e6a8c;
            case 0x1E6A90u: goto label_1e6a90;
            case 0x1E6A94u: goto label_1e6a94;
            case 0x1E6A98u: goto label_1e6a98;
            case 0x1E6A9Cu: goto label_1e6a9c;
            case 0x1E6AA0u: goto label_1e6aa0;
            case 0x1E6AA4u: goto label_1e6aa4;
            case 0x1E6AA8u: goto label_1e6aa8;
            case 0x1E6AACu: goto label_1e6aac;
            case 0x1E6AB0u: goto label_1e6ab0;
            case 0x1E6AB4u: goto label_1e6ab4;
            case 0x1E6AB8u: goto label_1e6ab8;
            case 0x1E6ABCu: goto label_1e6abc;
            case 0x1E6AC0u: goto label_1e6ac0;
            case 0x1E6AC4u: goto label_1e6ac4;
            case 0x1E6AC8u: goto label_1e6ac8;
            case 0x1E6ACCu: goto label_1e6acc;
            case 0x1E6AD0u: goto label_1e6ad0;
            case 0x1E6AD4u: goto label_1e6ad4;
            case 0x1E6AD8u: goto label_1e6ad8;
            case 0x1E6ADCu: goto label_1e6adc;
            case 0x1E6AE0u: goto label_1e6ae0;
            case 0x1E6AE4u: goto label_1e6ae4;
            case 0x1E6AE8u: goto label_1e6ae8;
            case 0x1E6AECu: goto label_1e6aec;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6AF4u: goto label_1e6af4;
            case 0x1E6AF8u: goto label_1e6af8;
            case 0x1E6AFCu: goto label_1e6afc;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B04u: goto label_1e6b04;
            case 0x1E6B08u: goto label_1e6b08;
            case 0x1E6B0Cu: goto label_1e6b0c;
            case 0x1E6B10u: goto label_1e6b10;
            case 0x1E6B14u: goto label_1e6b14;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B1Cu: goto label_1e6b1c;
            case 0x1E6B20u: goto label_1e6b20;
            case 0x1E6B24u: goto label_1e6b24;
            case 0x1E6B28u: goto label_1e6b28;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B30u: goto label_1e6b30;
            case 0x1E6B34u: goto label_1e6b34;
            case 0x1E6B38u: goto label_1e6b38;
            case 0x1E6B3Cu: goto label_1e6b3c;
            case 0x1E6B40u: goto label_1e6b40;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B48u: goto label_1e6b48;
            case 0x1E6B4Cu: goto label_1e6b4c;
            case 0x1E6B50u: goto label_1e6b50;
            case 0x1E6B54u: goto label_1e6b54;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6B5Cu: goto label_1e6b5c;
            case 0x1E6B60u: goto label_1e6b60;
            case 0x1E6B64u: goto label_1e6b64;
            case 0x1E6B68u: goto label_1e6b68;
            case 0x1E6B6Cu: goto label_1e6b6c;
            case 0x1E6B70u: goto label_1e6b70;
            case 0x1E6B74u: goto label_1e6b74;
            case 0x1E6B78u: goto label_1e6b78;
            case 0x1E6B7Cu: goto label_1e6b7c;
            case 0x1E6B80u: goto label_1e6b80;
            case 0x1E6B84u: goto label_1e6b84;
            case 0x1E6B88u: goto label_1e6b88;
            case 0x1E6B8Cu: goto label_1e6b8c;
            case 0x1E6B90u: goto label_1e6b90;
            case 0x1E6B94u: goto label_1e6b94;
            case 0x1E6B98u: goto label_1e6b98;
            case 0x1E6B9Cu: goto label_1e6b9c;
            case 0x1E6BA0u: goto label_1e6ba0;
            case 0x1E6BA4u: goto label_1e6ba4;
            case 0x1E6BA8u: goto label_1e6ba8;
            case 0x1E6BACu: goto label_1e6bac;
            case 0x1E6BB0u: goto label_1e6bb0;
            case 0x1E6BB4u: goto label_1e6bb4;
            case 0x1E6BB8u: goto label_1e6bb8;
            case 0x1E6BBCu: goto label_1e6bbc;
            case 0x1E6BC0u: goto label_1e6bc0;
            case 0x1E6BC4u: goto label_1e6bc4;
            case 0x1E6BC8u: goto label_1e6bc8;
            case 0x1E6BCCu: goto label_1e6bcc;
            case 0x1E6BD0u: goto label_1e6bd0;
            case 0x1E6BD4u: goto label_1e6bd4;
            case 0x1E6BD8u: goto label_1e6bd8;
            case 0x1E6BDCu: goto label_1e6bdc;
            case 0x1E6BE0u: goto label_1e6be0;
            case 0x1E6BE4u: goto label_1e6be4;
            case 0x1E6BE8u: goto label_1e6be8;
            case 0x1E6BECu: goto label_1e6bec;
            case 0x1E6BF0u: goto label_1e6bf0;
            case 0x1E6BF4u: goto label_1e6bf4;
            case 0x1E6BF8u: goto label_1e6bf8;
            case 0x1E6BFCu: goto label_1e6bfc;
            case 0x1E6C00u: goto label_1e6c00;
            case 0x1E6C04u: goto label_1e6c04;
            case 0x1E6C08u: goto label_1e6c08;
            case 0x1E6C0Cu: goto label_1e6c0c;
            case 0x1E6C10u: goto label_1e6c10;
            case 0x1E6C14u: goto label_1e6c14;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C1Cu: goto label_1e6c1c;
            case 0x1E6C20u: goto label_1e6c20;
            case 0x1E6C24u: goto label_1e6c24;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C2Cu: goto label_1e6c2c;
            case 0x1E6C30u: goto label_1e6c30;
            case 0x1E6C34u: goto label_1e6c34;
            case 0x1E6C38u: goto label_1e6c38;
            case 0x1E6C3Cu: goto label_1e6c3c;
            case 0x1E6C40u: goto label_1e6c40;
            case 0x1E6C44u: goto label_1e6c44;
            case 0x1E6C48u: goto label_1e6c48;
            case 0x1E6C4Cu: goto label_1e6c4c;
            case 0x1E6C50u: goto label_1e6c50;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C58u: goto label_1e6c58;
            case 0x1E6C5Cu: goto label_1e6c5c;
            case 0x1E6C60u: goto label_1e6c60;
            case 0x1E6C64u: goto label_1e6c64;
            case 0x1E6C68u: goto label_1e6c68;
            case 0x1E6C6Cu: goto label_1e6c6c;
            case 0x1E6C70u: goto label_1e6c70;
            case 0x1E6C74u: goto label_1e6c74;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6C7Cu: goto label_1e6c7c;
            case 0x1E6C80u: goto label_1e6c80;
            case 0x1E6C84u: goto label_1e6c84;
            case 0x1E6C88u: goto label_1e6c88;
            case 0x1E6C8Cu: goto label_1e6c8c;
            case 0x1E6C90u: goto label_1e6c90;
            case 0x1E6C94u: goto label_1e6c94;
            case 0x1E6C98u: goto label_1e6c98;
            case 0x1E6C9Cu: goto label_1e6c9c;
            case 0x1E6CA0u: goto label_1e6ca0;
            case 0x1E6CA4u: goto label_1e6ca4;
            case 0x1E6CA8u: goto label_1e6ca8;
            case 0x1E6CACu: goto label_1e6cac;
            case 0x1E6CB0u: goto label_1e6cb0;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CB8u: goto label_1e6cb8;
            case 0x1E6CBCu: goto label_1e6cbc;
            case 0x1E6CC0u: goto label_1e6cc0;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6CC8u: goto label_1e6cc8;
            case 0x1E6CCCu: goto label_1e6ccc;
            case 0x1E6CD0u: goto label_1e6cd0;
            case 0x1E6CD4u: goto label_1e6cd4;
            case 0x1E6CD8u: goto label_1e6cd8;
            case 0x1E6CDCu: goto label_1e6cdc;
            case 0x1E6CE0u: goto label_1e6ce0;
            case 0x1E6CE4u: goto label_1e6ce4;
            case 0x1E6CE8u: goto label_1e6ce8;
            case 0x1E6CECu: goto label_1e6cec;
            case 0x1E6CF0u: goto label_1e6cf0;
            case 0x1E6CF4u: goto label_1e6cf4;
            case 0x1E6CF8u: goto label_1e6cf8;
            case 0x1E6CFCu: goto label_1e6cfc;
            case 0x1E6D00u: goto label_1e6d00;
            case 0x1E6D04u: goto label_1e6d04;
            case 0x1E6D08u: goto label_1e6d08;
            case 0x1E6D0Cu: goto label_1e6d0c;
            case 0x1E6D10u: goto label_1e6d10;
            case 0x1E6D14u: goto label_1e6d14;
            case 0x1E6D18u: goto label_1e6d18;
            case 0x1E6D1Cu: goto label_1e6d1c;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D24u: goto label_1e6d24;
            case 0x1E6D28u: goto label_1e6d28;
            case 0x1E6D2Cu: goto label_1e6d2c;
            case 0x1E6D30u: goto label_1e6d30;
            case 0x1E6D34u: goto label_1e6d34;
            case 0x1E6D38u: goto label_1e6d38;
            case 0x1E6D3Cu: goto label_1e6d3c;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D44u: goto label_1e6d44;
            case 0x1E6D48u: goto label_1e6d48;
            case 0x1E6D4Cu: goto label_1e6d4c;
            case 0x1E6D50u: goto label_1e6d50;
            case 0x1E6D54u: goto label_1e6d54;
            case 0x1E6D58u: goto label_1e6d58;
            case 0x1E6D5Cu: goto label_1e6d5c;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6D64u: goto label_1e6d64;
            case 0x1E6D68u: goto label_1e6d68;
            case 0x1E6D6Cu: goto label_1e6d6c;
            case 0x1E6D70u: goto label_1e6d70;
            case 0x1E6D74u: goto label_1e6d74;
            case 0x1E6D78u: goto label_1e6d78;
            case 0x1E6D7Cu: goto label_1e6d7c;
            case 0x1E6D80u: goto label_1e6d80;
            case 0x1E6D84u: goto label_1e6d84;
            case 0x1E6D88u: goto label_1e6d88;
            case 0x1E6D8Cu: goto label_1e6d8c;
            case 0x1E6D90u: goto label_1e6d90;
            case 0x1E6D94u: goto label_1e6d94;
            case 0x1E6D98u: goto label_1e6d98;
            case 0x1E6D9Cu: goto label_1e6d9c;
            case 0x1E6DA0u: goto label_1e6da0;
            case 0x1E6DA4u: goto label_1e6da4;
            case 0x1E6DA8u: goto label_1e6da8;
            case 0x1E6DACu: goto label_1e6dac;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB4u: goto label_1e6db4;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6DBCu: goto label_1e6dbc;
            case 0x1E6DC0u: goto label_1e6dc0;
            case 0x1E6DC4u: goto label_1e6dc4;
            case 0x1E6DC8u: goto label_1e6dc8;
            case 0x1E6DCCu: goto label_1e6dcc;
            case 0x1E6DD0u: goto label_1e6dd0;
            case 0x1E6DD4u: goto label_1e6dd4;
            case 0x1E6DD8u: goto label_1e6dd8;
            case 0x1E6DDCu: goto label_1e6ddc;
            case 0x1E6DE0u: goto label_1e6de0;
            case 0x1E6DE4u: goto label_1e6de4;
            case 0x1E6DE8u: goto label_1e6de8;
            case 0x1E6DECu: goto label_1e6dec;
            case 0x1E6DF0u: goto label_1e6df0;
            case 0x1E6DF4u: goto label_1e6df4;
            case 0x1E6DF8u: goto label_1e6df8;
            case 0x1E6DFCu: goto label_1e6dfc;
            case 0x1E6E00u: goto label_1e6e00;
            case 0x1E6E04u: goto label_1e6e04;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E0Cu: goto label_1e6e0c;
            case 0x1E6E10u: goto label_1e6e10;
            case 0x1E6E14u: goto label_1e6e14;
            case 0x1E6E18u: goto label_1e6e18;
            case 0x1E6E1Cu: goto label_1e6e1c;
            case 0x1E6E20u: goto label_1e6e20;
            case 0x1E6E24u: goto label_1e6e24;
            case 0x1E6E28u: goto label_1e6e28;
            case 0x1E6E2Cu: goto label_1e6e2c;
            case 0x1E6E30u: goto label_1e6e30;
            case 0x1E6E34u: goto label_1e6e34;
            case 0x1E6E38u: goto label_1e6e38;
            case 0x1E6E3Cu: goto label_1e6e3c;
            case 0x1E6E40u: goto label_1e6e40;
            case 0x1E6E44u: goto label_1e6e44;
            case 0x1E6E48u: goto label_1e6e48;
            case 0x1E6E4Cu: goto label_1e6e4c;
            case 0x1E6E50u: goto label_1e6e50;
            case 0x1E6E54u: goto label_1e6e54;
            case 0x1E6E58u: goto label_1e6e58;
            case 0x1E6E5Cu: goto label_1e6e5c;
            case 0x1E6E60u: goto label_1e6e60;
            case 0x1E6E64u: goto label_1e6e64;
            case 0x1E6E68u: goto label_1e6e68;
            case 0x1E6E6Cu: goto label_1e6e6c;
            case 0x1E6E70u: goto label_1e6e70;
            case 0x1E6E74u: goto label_1e6e74;
            case 0x1E6E78u: goto label_1e6e78;
            case 0x1E6E7Cu: goto label_1e6e7c;
            case 0x1E6E80u: goto label_1e6e80;
            case 0x1E6E84u: goto label_1e6e84;
            case 0x1E6E88u: goto label_1e6e88;
            case 0x1E6E8Cu: goto label_1e6e8c;
            case 0x1E6E90u: goto label_1e6e90;
            case 0x1E6E94u: goto label_1e6e94;
            case 0x1E6E98u: goto label_1e6e98;
            case 0x1E6E9Cu: goto label_1e6e9c;
            case 0x1E6EA0u: goto label_1e6ea0;
            case 0x1E6EA4u: goto label_1e6ea4;
            case 0x1E6EA8u: goto label_1e6ea8;
            case 0x1E6EACu: goto label_1e6eac;
            case 0x1E6EB0u: goto label_1e6eb0;
            case 0x1E6EB4u: goto label_1e6eb4;
            case 0x1E6EB8u: goto label_1e6eb8;
            case 0x1E6EBCu: goto label_1e6ebc;
            case 0x1E6EC0u: goto label_1e6ec0;
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EC8u: goto label_1e6ec8;
            case 0x1E6ECCu: goto label_1e6ecc;
            case 0x1E6ED0u: goto label_1e6ed0;
            case 0x1E6ED4u: goto label_1e6ed4;
            case 0x1E6ED8u: goto label_1e6ed8;
            case 0x1E6EDCu: goto label_1e6edc;
            case 0x1E6EE0u: goto label_1e6ee0;
            case 0x1E6EE4u: goto label_1e6ee4;
            case 0x1E6EE8u: goto label_1e6ee8;
            case 0x1E6EECu: goto label_1e6eec;
            case 0x1E6EF0u: goto label_1e6ef0;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6EF8u: goto label_1e6ef8;
            case 0x1E6EFCu: goto label_1e6efc;
            case 0x1E6F00u: goto label_1e6f00;
            case 0x1E6F04u: goto label_1e6f04;
            case 0x1E6F08u: goto label_1e6f08;
            case 0x1E6F0Cu: goto label_1e6f0c;
            case 0x1E6F10u: goto label_1e6f10;
            case 0x1E6F14u: goto label_1e6f14;
            case 0x1E6F18u: goto label_1e6f18;
            case 0x1E6F1Cu: goto label_1e6f1c;
            case 0x1E6F20u: goto label_1e6f20;
            case 0x1E6F24u: goto label_1e6f24;
            case 0x1E6F28u: goto label_1e6f28;
            case 0x1E6F2Cu: goto label_1e6f2c;
            case 0x1E6F30u: goto label_1e6f30;
            case 0x1E6F34u: goto label_1e6f34;
            case 0x1E6F38u: goto label_1e6f38;
            case 0x1E6F3Cu: goto label_1e6f3c;
            case 0x1E6F40u: goto label_1e6f40;
            case 0x1E6F44u: goto label_1e6f44;
            case 0x1E6F48u: goto label_1e6f48;
            case 0x1E6F4Cu: goto label_1e6f4c;
            case 0x1E6F50u: goto label_1e6f50;
            case 0x1E6F54u: goto label_1e6f54;
            case 0x1E6F58u: goto label_1e6f58;
            case 0x1E6F5Cu: goto label_1e6f5c;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F6Cu: goto label_1e6f6c;
            case 0x1E6F70u: goto label_1e6f70;
            case 0x1E6F74u: goto label_1e6f74;
            case 0x1E6F78u: goto label_1e6f78;
            case 0x1E6F7Cu: goto label_1e6f7c;
            case 0x1E6F80u: goto label_1e6f80;
            case 0x1E6F84u: goto label_1e6f84;
            case 0x1E6F88u: goto label_1e6f88;
            case 0x1E6F8Cu: goto label_1e6f8c;
            case 0x1E6F90u: goto label_1e6f90;
            case 0x1E6F94u: goto label_1e6f94;
            case 0x1E6F98u: goto label_1e6f98;
            case 0x1E6F9Cu: goto label_1e6f9c;
            case 0x1E6FA0u: goto label_1e6fa0;
            case 0x1E6FA4u: goto label_1e6fa4;
            case 0x1E6FA8u: goto label_1e6fa8;
            case 0x1E6FACu: goto label_1e6fac;
            case 0x1E6FB0u: goto label_1e6fb0;
            case 0x1E6FB4u: goto label_1e6fb4;
            case 0x1E6FB8u: goto label_1e6fb8;
            case 0x1E6FBCu: goto label_1e6fbc;
            case 0x1E6FC0u: goto label_1e6fc0;
            case 0x1E6FC4u: goto label_1e6fc4;
            case 0x1E6FC8u: goto label_1e6fc8;
            case 0x1E6FCCu: goto label_1e6fcc;
            case 0x1E6FD0u: goto label_1e6fd0;
            case 0x1E6FD4u: goto label_1e6fd4;
            case 0x1E6FD8u: goto label_1e6fd8;
            case 0x1E6FDCu: goto label_1e6fdc;
            case 0x1E6FE0u: goto label_1e6fe0;
            case 0x1E6FE4u: goto label_1e6fe4;
            case 0x1E6FE8u: goto label_1e6fe8;
            case 0x1E6FECu: goto label_1e6fec;
            case 0x1E6FF0u: goto label_1e6ff0;
            case 0x1E6FF4u: goto label_1e6ff4;
            case 0x1E6FF8u: goto label_1e6ff8;
            case 0x1E6FFCu: goto label_1e6ffc;
            case 0x1E7000u: goto label_1e7000;
            case 0x1E7004u: goto label_1e7004;
            case 0x1E7008u: goto label_1e7008;
            case 0x1E700Cu: goto label_1e700c;
            case 0x1E7010u: goto label_1e7010;
            case 0x1E7014u: goto label_1e7014;
            case 0x1E7018u: goto label_1e7018;
            case 0x1E701Cu: goto label_1e701c;
            case 0x1E7020u: goto label_1e7020;
            case 0x1E7024u: goto label_1e7024;
            case 0x1E7028u: goto label_1e7028;
            case 0x1E702Cu: goto label_1e702c;
            case 0x1E7030u: goto label_1e7030;
            case 0x1E7034u: goto label_1e7034;
            case 0x1E7038u: goto label_1e7038;
            case 0x1E703Cu: goto label_1e703c;
            case 0x1E7040u: goto label_1e7040;
            case 0x1E7044u: goto label_1e7044;
            case 0x1E7048u: goto label_1e7048;
            case 0x1E704Cu: goto label_1e704c;
            case 0x1E7050u: goto label_1e7050;
            case 0x1E7054u: goto label_1e7054;
            case 0x1E7058u: goto label_1e7058;
            case 0x1E705Cu: goto label_1e705c;
            case 0x1E7060u: goto label_1e7060;
            case 0x1E7064u: goto label_1e7064;
            case 0x1E7068u: goto label_1e7068;
            case 0x1E706Cu: goto label_1e706c;
            case 0x1E7070u: goto label_1e7070;
            case 0x1E7074u: goto label_1e7074;
            case 0x1E7078u: goto label_1e7078;
            case 0x1E707Cu: goto label_1e707c;
            case 0x1E7080u: goto label_1e7080;
            case 0x1E7084u: goto label_1e7084;
            case 0x1E7088u: goto label_1e7088;
            case 0x1E708Cu: goto label_1e708c;
            case 0x1E7090u: goto label_1e7090;
            case 0x1E7094u: goto label_1e7094;
            case 0x1E7098u: goto label_1e7098;
            case 0x1E709Cu: goto label_1e709c;
            case 0x1E70A0u: goto label_1e70a0;
            case 0x1E70A4u: goto label_1e70a4;
            case 0x1E70A8u: goto label_1e70a8;
            case 0x1E70ACu: goto label_1e70ac;
            case 0x1E70B0u: goto label_1e70b0;
            case 0x1E70B4u: goto label_1e70b4;
            case 0x1E70B8u: goto label_1e70b8;
            case 0x1E70BCu: goto label_1e70bc;
            case 0x1E70C0u: goto label_1e70c0;
            case 0x1E70C4u: goto label_1e70c4;
            case 0x1E70C8u: goto label_1e70c8;
            case 0x1E70CCu: goto label_1e70cc;
            case 0x1E70D0u: goto label_1e70d0;
            case 0x1E70D4u: goto label_1e70d4;
            case 0x1E70D8u: goto label_1e70d8;
            case 0x1E70DCu: goto label_1e70dc;
            case 0x1E70E0u: goto label_1e70e0;
            case 0x1E70E4u: goto label_1e70e4;
            case 0x1E70E8u: goto label_1e70e8;
            case 0x1E70ECu: goto label_1e70ec;
            case 0x1E70F0u: goto label_1e70f0;
            case 0x1E70F4u: goto label_1e70f4;
            case 0x1E70F8u: goto label_1e70f8;
            case 0x1E70FCu: goto label_1e70fc;
            case 0x1E7100u: goto label_1e7100;
            case 0x1E7104u: goto label_1e7104;
            case 0x1E7108u: goto label_1e7108;
            case 0x1E710Cu: goto label_1e710c;
            case 0x1E7110u: goto label_1e7110;
            case 0x1E7114u: goto label_1e7114;
            case 0x1E7118u: goto label_1e7118;
            case 0x1E711Cu: goto label_1e711c;
            case 0x1E7120u: goto label_1e7120;
            case 0x1E7124u: goto label_1e7124;
            case 0x1E7128u: goto label_1e7128;
            case 0x1E712Cu: goto label_1e712c;
            case 0x1E7130u: goto label_1e7130;
            case 0x1E7134u: goto label_1e7134;
            case 0x1E7138u: goto label_1e7138;
            case 0x1E713Cu: goto label_1e713c;
            case 0x1E7140u: goto label_1e7140;
            case 0x1E7144u: goto label_1e7144;
            case 0x1E7148u: goto label_1e7148;
            case 0x1E714Cu: goto label_1e714c;
            case 0x1E7150u: goto label_1e7150;
            case 0x1E7154u: goto label_1e7154;
            case 0x1E7158u: goto label_1e7158;
            case 0x1E715Cu: goto label_1e715c;
            case 0x1E7160u: goto label_1e7160;
            case 0x1E7164u: goto label_1e7164;
            case 0x1E7168u: goto label_1e7168;
            case 0x1E716Cu: goto label_1e716c;
            case 0x1E7170u: goto label_1e7170;
            case 0x1E7174u: goto label_1e7174;
            case 0x1E7178u: goto label_1e7178;
            case 0x1E717Cu: goto label_1e717c;
            case 0x1E7180u: goto label_1e7180;
            case 0x1E7184u: goto label_1e7184;
            case 0x1E7188u: goto label_1e7188;
            case 0x1E718Cu: goto label_1e718c;
            case 0x1E7190u: goto label_1e7190;
            case 0x1E7194u: goto label_1e7194;
            case 0x1E7198u: goto label_1e7198;
            case 0x1E719Cu: goto label_1e719c;
            case 0x1E71A0u: goto label_1e71a0;
            case 0x1E71A4u: goto label_1e71a4;
            case 0x1E71A8u: goto label_1e71a8;
            case 0x1E71ACu: goto label_1e71ac;
            case 0x1E71B0u: goto label_1e71b0;
            case 0x1E71B4u: goto label_1e71b4;
            case 0x1E71B8u: goto label_1e71b8;
            case 0x1E71BCu: goto label_1e71bc;
            case 0x1E71C0u: goto label_1e71c0;
            case 0x1E71C4u: goto label_1e71c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E712Cu; }
            if (ctx->pc != 0x1E712Cu) { return; }
        }
    }
    ctx->pc = 0x1E712Cu;
label_1e712c:
    // 0x1e712c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e7130:
    if (ctx->pc == 0x1E7130u) {
        ctx->pc = 0x1E7134u;
        goto label_1e7134;
    }
    ctx->pc = 0x1E712Cu;
    {
        const bool branch_taken_0x1e712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e712c) {
            ctx->pc = 0x1E71B8u;
            goto label_1e71b8;
        }
    }
    ctx->pc = 0x1E7134u;
label_1e7134:
    // 0x1e7134: 0x0  nop
    ctx->pc = 0x1e7134u;
    // NOP
label_1e7138:
    // 0x1e7138: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e7138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e713c:
    // 0x1e713c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e713cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e7140:
    // 0x1e7140: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e7140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7144:
    // 0x1e7144: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1e7148:
    // 0x1e7148: 0x24c662a0  addiu       $a2, $a2, 0x62A0
    ctx->pc = 0x1e7148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25248));
label_1e714c:
    // 0x1e714c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e714cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7150:
    // 0x1e7150: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e7150u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7154:
    // 0x1e7154: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1e7154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1e7158:
    // 0x1e7158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e715c:
    // 0x1e715c: 0x0  nop
    ctx->pc = 0x1e715cu;
    // NOP
label_1e7160:
    // 0x1e7160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7164:
    // 0x1e7164: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1e7164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e7168:
    // 0x1e7168: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e7168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e716c:
    // 0x1e716c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e7170:
    // 0x1e7170: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7174:
    // 0x1e7174: 0x0  nop
    ctx->pc = 0x1e7174u;
    // NOP
label_1e7178:
    // 0x1e7178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e717c:
    // 0x1e717c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e717cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e7180:
    // 0x1e7180: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1e7184:
    // 0x1e7184: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e7184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1e7188:
    // 0x1e7188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e718c:
    // 0x1e718c: 0x0  nop
    ctx->pc = 0x1e718cu;
    // NOP
label_1e7190:
    // 0x1e7190: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7194:
    // 0x1e7194: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e7194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e7198:
    // 0x1e7198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1e7198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1e719c:
    // 0x1e719c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e71a0:
    // 0x1e71a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e71a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e71a4:
    // 0x1e71a4: 0x0  nop
    ctx->pc = 0x1e71a4u;
    // NOP
label_1e71a8:
    // 0x1e71a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e71a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e71ac:
    // 0x1e71ac: 0xc053ca4  jal         func_14F290
label_1e71b0:
    if (ctx->pc == 0x1E71B0u) {
        ctx->pc = 0x1E71B0u;
            // 0x1e71b0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->pc = 0x1E71B4u;
        goto label_1e71b4;
    }
    ctx->pc = 0x1E71ACu;
    SET_GPR_U32(ctx, 31, 0x1E71B4u);
    ctx->pc = 0x1E71B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71ACu;
            // 0x1e71b0: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71B4u; }
        if (ctx->pc != 0x1E71B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E71B4u; }
        if (ctx->pc != 0x1E71B4u) { return; }
    }
    ctx->pc = 0x1E71B4u;
label_1e71b4:
    // 0x1e71b4: 0x0  nop
    ctx->pc = 0x1e71b4u;
    // NOP
label_1e71b8:
    // 0x1e71b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e71b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e71bc:
    // 0x1e71bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e71bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e71c0:
    // 0x1e71c0: 0x3e00008  jr          $ra
label_1e71c4:
    if (ctx->pc == 0x1E71C4u) {
        ctx->pc = 0x1E71C4u;
            // 0x1e71c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E71C8u;
        goto label_fallthrough_0x1e71c0;
    }
    ctx->pc = 0x1E71C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E71C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E71C0u;
            // 0x1e71c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E6560u: goto label_1e6560;
            case 0x1E6564u: goto label_1e6564;
            case 0x1E6568u: goto label_1e6568;
            case 0x1E656Cu: goto label_1e656c;
            case 0x1E6570u: goto label_1e6570;
            case 0x1E6574u: goto label_1e6574;
            case 0x1E6578u: goto label_1e6578;
            case 0x1E657Cu: goto label_1e657c;
            case 0x1E6580u: goto label_1e6580;
            case 0x1E6584u: goto label_1e6584;
            case 0x1E6588u: goto label_1e6588;
            case 0x1E658Cu: goto label_1e658c;
            case 0x1E6590u: goto label_1e6590;
            case 0x1E6594u: goto label_1e6594;
            case 0x1E6598u: goto label_1e6598;
            case 0x1E659Cu: goto label_1e659c;
            case 0x1E65A0u: goto label_1e65a0;
            case 0x1E65A4u: goto label_1e65a4;
            case 0x1E65A8u: goto label_1e65a8;
            case 0x1E65ACu: goto label_1e65ac;
            case 0x1E65B0u: goto label_1e65b0;
            case 0x1E65B4u: goto label_1e65b4;
            case 0x1E65B8u: goto label_1e65b8;
            case 0x1E65BCu: goto label_1e65bc;
            case 0x1E65C0u: goto label_1e65c0;
            case 0x1E65C4u: goto label_1e65c4;
            case 0x1E65C8u: goto label_1e65c8;
            case 0x1E65CCu: goto label_1e65cc;
            case 0x1E65D0u: goto label_1e65d0;
            case 0x1E65D4u: goto label_1e65d4;
            case 0x1E65D8u: goto label_1e65d8;
            case 0x1E65DCu: goto label_1e65dc;
            case 0x1E65E0u: goto label_1e65e0;
            case 0x1E65E4u: goto label_1e65e4;
            case 0x1E65E8u: goto label_1e65e8;
            case 0x1E65ECu: goto label_1e65ec;
            case 0x1E65F0u: goto label_1e65f0;
            case 0x1E65F4u: goto label_1e65f4;
            case 0x1E65F8u: goto label_1e65f8;
            case 0x1E65FCu: goto label_1e65fc;
            case 0x1E6600u: goto label_1e6600;
            case 0x1E6604u: goto label_1e6604;
            case 0x1E6608u: goto label_1e6608;
            case 0x1E660Cu: goto label_1e660c;
            case 0x1E6610u: goto label_1e6610;
            case 0x1E6614u: goto label_1e6614;
            case 0x1E6618u: goto label_1e6618;
            case 0x1E661Cu: goto label_1e661c;
            case 0x1E6620u: goto label_1e6620;
            case 0x1E6624u: goto label_1e6624;
            case 0x1E6628u: goto label_1e6628;
            case 0x1E662Cu: goto label_1e662c;
            case 0x1E6630u: goto label_1e6630;
            case 0x1E6634u: goto label_1e6634;
            case 0x1E6638u: goto label_1e6638;
            case 0x1E663Cu: goto label_1e663c;
            case 0x1E6640u: goto label_1e6640;
            case 0x1E6644u: goto label_1e6644;
            case 0x1E6648u: goto label_1e6648;
            case 0x1E664Cu: goto label_1e664c;
            case 0x1E6650u: goto label_1e6650;
            case 0x1E6654u: goto label_1e6654;
            case 0x1E6658u: goto label_1e6658;
            case 0x1E665Cu: goto label_1e665c;
            case 0x1E6660u: goto label_1e6660;
            case 0x1E6664u: goto label_1e6664;
            case 0x1E6668u: goto label_1e6668;
            case 0x1E666Cu: goto label_1e666c;
            case 0x1E6670u: goto label_1e6670;
            case 0x1E6674u: goto label_1e6674;
            case 0x1E6678u: goto label_1e6678;
            case 0x1E667Cu: goto label_1e667c;
            case 0x1E6680u: goto label_1e6680;
            case 0x1E6684u: goto label_1e6684;
            case 0x1E6688u: goto label_1e6688;
            case 0x1E668Cu: goto label_1e668c;
            case 0x1E6690u: goto label_1e6690;
            case 0x1E6694u: goto label_1e6694;
            case 0x1E6698u: goto label_1e6698;
            case 0x1E669Cu: goto label_1e669c;
            case 0x1E66A0u: goto label_1e66a0;
            case 0x1E66A4u: goto label_1e66a4;
            case 0x1E66A8u: goto label_1e66a8;
            case 0x1E66ACu: goto label_1e66ac;
            case 0x1E66B0u: goto label_1e66b0;
            case 0x1E66B4u: goto label_1e66b4;
            case 0x1E66B8u: goto label_1e66b8;
            case 0x1E66BCu: goto label_1e66bc;
            case 0x1E66C0u: goto label_1e66c0;
            case 0x1E66C4u: goto label_1e66c4;
            case 0x1E66C8u: goto label_1e66c8;
            case 0x1E66CCu: goto label_1e66cc;
            case 0x1E66D0u: goto label_1e66d0;
            case 0x1E66D4u: goto label_1e66d4;
            case 0x1E66D8u: goto label_1e66d8;
            case 0x1E66DCu: goto label_1e66dc;
            case 0x1E66E0u: goto label_1e66e0;
            case 0x1E66E4u: goto label_1e66e4;
            case 0x1E66E8u: goto label_1e66e8;
            case 0x1E66ECu: goto label_1e66ec;
            case 0x1E66F0u: goto label_1e66f0;
            case 0x1E66F4u: goto label_1e66f4;
            case 0x1E66F8u: goto label_1e66f8;
            case 0x1E66FCu: goto label_1e66fc;
            case 0x1E6700u: goto label_1e6700;
            case 0x1E6704u: goto label_1e6704;
            case 0x1E6708u: goto label_1e6708;
            case 0x1E670Cu: goto label_1e670c;
            case 0x1E6710u: goto label_1e6710;
            case 0x1E6714u: goto label_1e6714;
            case 0x1E6718u: goto label_1e6718;
            case 0x1E671Cu: goto label_1e671c;
            case 0x1E6720u: goto label_1e6720;
            case 0x1E6724u: goto label_1e6724;
            case 0x1E6728u: goto label_1e6728;
            case 0x1E672Cu: goto label_1e672c;
            case 0x1E6730u: goto label_1e6730;
            case 0x1E6734u: goto label_1e6734;
            case 0x1E6738u: goto label_1e6738;
            case 0x1E673Cu: goto label_1e673c;
            case 0x1E6740u: goto label_1e6740;
            case 0x1E6744u: goto label_1e6744;
            case 0x1E6748u: goto label_1e6748;
            case 0x1E674Cu: goto label_1e674c;
            case 0x1E6750u: goto label_1e6750;
            case 0x1E6754u: goto label_1e6754;
            case 0x1E6758u: goto label_1e6758;
            case 0x1E675Cu: goto label_1e675c;
            case 0x1E6760u: goto label_1e6760;
            case 0x1E6764u: goto label_1e6764;
            case 0x1E6768u: goto label_1e6768;
            case 0x1E676Cu: goto label_1e676c;
            case 0x1E6770u: goto label_1e6770;
            case 0x1E6774u: goto label_1e6774;
            case 0x1E6778u: goto label_1e6778;
            case 0x1E677Cu: goto label_1e677c;
            case 0x1E6780u: goto label_1e6780;
            case 0x1E6784u: goto label_1e6784;
            case 0x1E6788u: goto label_1e6788;
            case 0x1E678Cu: goto label_1e678c;
            case 0x1E6790u: goto label_1e6790;
            case 0x1E6794u: goto label_1e6794;
            case 0x1E6798u: goto label_1e6798;
            case 0x1E679Cu: goto label_1e679c;
            case 0x1E67A0u: goto label_1e67a0;
            case 0x1E67A4u: goto label_1e67a4;
            case 0x1E67A8u: goto label_1e67a8;
            case 0x1E67ACu: goto label_1e67ac;
            case 0x1E67B0u: goto label_1e67b0;
            case 0x1E67B4u: goto label_1e67b4;
            case 0x1E67B8u: goto label_1e67b8;
            case 0x1E67BCu: goto label_1e67bc;
            case 0x1E67C0u: goto label_1e67c0;
            case 0x1E67C4u: goto label_1e67c4;
            case 0x1E67C8u: goto label_1e67c8;
            case 0x1E67CCu: goto label_1e67cc;
            case 0x1E67D0u: goto label_1e67d0;
            case 0x1E67D4u: goto label_1e67d4;
            case 0x1E67D8u: goto label_1e67d8;
            case 0x1E67DCu: goto label_1e67dc;
            case 0x1E67E0u: goto label_1e67e0;
            case 0x1E67E4u: goto label_1e67e4;
            case 0x1E67E8u: goto label_1e67e8;
            case 0x1E67ECu: goto label_1e67ec;
            case 0x1E67F0u: goto label_1e67f0;
            case 0x1E67F4u: goto label_1e67f4;
            case 0x1E67F8u: goto label_1e67f8;
            case 0x1E67FCu: goto label_1e67fc;
            case 0x1E6800u: goto label_1e6800;
            case 0x1E6804u: goto label_1e6804;
            case 0x1E6808u: goto label_1e6808;
            case 0x1E680Cu: goto label_1e680c;
            case 0x1E6810u: goto label_1e6810;
            case 0x1E6814u: goto label_1e6814;
            case 0x1E6818u: goto label_1e6818;
            case 0x1E681Cu: goto label_1e681c;
            case 0x1E6820u: goto label_1e6820;
            case 0x1E6824u: goto label_1e6824;
            case 0x1E6828u: goto label_1e6828;
            case 0x1E682Cu: goto label_1e682c;
            case 0x1E6830u: goto label_1e6830;
            case 0x1E6834u: goto label_1e6834;
            case 0x1E6838u: goto label_1e6838;
            case 0x1E683Cu: goto label_1e683c;
            case 0x1E6840u: goto label_1e6840;
            case 0x1E6844u: goto label_1e6844;
            case 0x1E6848u: goto label_1e6848;
            case 0x1E684Cu: goto label_1e684c;
            case 0x1E6850u: goto label_1e6850;
            case 0x1E6854u: goto label_1e6854;
            case 0x1E6858u: goto label_1e6858;
            case 0x1E685Cu: goto label_1e685c;
            case 0x1E6860u: goto label_1e6860;
            case 0x1E6864u: goto label_1e6864;
            case 0x1E6868u: goto label_1e6868;
            case 0x1E686Cu: goto label_1e686c;
            case 0x1E6870u: goto label_1e6870;
            case 0x1E6874u: goto label_1e6874;
            case 0x1E6878u: goto label_1e6878;
            case 0x1E687Cu: goto label_1e687c;
            case 0x1E6880u: goto label_1e6880;
            case 0x1E6884u: goto label_1e6884;
            case 0x1E6888u: goto label_1e6888;
            case 0x1E688Cu: goto label_1e688c;
            case 0x1E6890u: goto label_1e6890;
            case 0x1E6894u: goto label_1e6894;
            case 0x1E6898u: goto label_1e6898;
            case 0x1E689Cu: goto label_1e689c;
            case 0x1E68A0u: goto label_1e68a0;
            case 0x1E68A4u: goto label_1e68a4;
            case 0x1E68A8u: goto label_1e68a8;
            case 0x1E68ACu: goto label_1e68ac;
            case 0x1E68B0u: goto label_1e68b0;
            case 0x1E68B4u: goto label_1e68b4;
            case 0x1E68B8u: goto label_1e68b8;
            case 0x1E68BCu: goto label_1e68bc;
            case 0x1E68C0u: goto label_1e68c0;
            case 0x1E68C4u: goto label_1e68c4;
            case 0x1E68C8u: goto label_1e68c8;
            case 0x1E68CCu: goto label_1e68cc;
            case 0x1E68D0u: goto label_1e68d0;
            case 0x1E68D4u: goto label_1e68d4;
            case 0x1E68D8u: goto label_1e68d8;
            case 0x1E68DCu: goto label_1e68dc;
            case 0x1E68E0u: goto label_1e68e0;
            case 0x1E68E4u: goto label_1e68e4;
            case 0x1E68E8u: goto label_1e68e8;
            case 0x1E68ECu: goto label_1e68ec;
            case 0x1E68F0u: goto label_1e68f0;
            case 0x1E68F4u: goto label_1e68f4;
            case 0x1E68F8u: goto label_1e68f8;
            case 0x1E68FCu: goto label_1e68fc;
            case 0x1E6900u: goto label_1e6900;
            case 0x1E6904u: goto label_1e6904;
            case 0x1E6908u: goto label_1e6908;
            case 0x1E690Cu: goto label_1e690c;
            case 0x1E6910u: goto label_1e6910;
            case 0x1E6914u: goto label_1e6914;
            case 0x1E6918u: goto label_1e6918;
            case 0x1E691Cu: goto label_1e691c;
            case 0x1E6920u: goto label_1e6920;
            case 0x1E6924u: goto label_1e6924;
            case 0x1E6928u: goto label_1e6928;
            case 0x1E692Cu: goto label_1e692c;
            case 0x1E6930u: goto label_1e6930;
            case 0x1E6934u: goto label_1e6934;
            case 0x1E6938u: goto label_1e6938;
            case 0x1E693Cu: goto label_1e693c;
            case 0x1E6940u: goto label_1e6940;
            case 0x1E6944u: goto label_1e6944;
            case 0x1E6948u: goto label_1e6948;
            case 0x1E694Cu: goto label_1e694c;
            case 0x1E6950u: goto label_1e6950;
            case 0x1E6954u: goto label_1e6954;
            case 0x1E6958u: goto label_1e6958;
            case 0x1E695Cu: goto label_1e695c;
            case 0x1E6960u: goto label_1e6960;
            case 0x1E6964u: goto label_1e6964;
            case 0x1E6968u: goto label_1e6968;
            case 0x1E696Cu: goto label_1e696c;
            case 0x1E6970u: goto label_1e6970;
            case 0x1E6974u: goto label_1e6974;
            case 0x1E6978u: goto label_1e6978;
            case 0x1E697Cu: goto label_1e697c;
            case 0x1E6980u: goto label_1e6980;
            case 0x1E6984u: goto label_1e6984;
            case 0x1E6988u: goto label_1e6988;
            case 0x1E698Cu: goto label_1e698c;
            case 0x1E6990u: goto label_1e6990;
            case 0x1E6994u: goto label_1e6994;
            case 0x1E6998u: goto label_1e6998;
            case 0x1E699Cu: goto label_1e699c;
            case 0x1E69A0u: goto label_1e69a0;
            case 0x1E69A4u: goto label_1e69a4;
            case 0x1E69A8u: goto label_1e69a8;
            case 0x1E69ACu: goto label_1e69ac;
            case 0x1E69B0u: goto label_1e69b0;
            case 0x1E69B4u: goto label_1e69b4;
            case 0x1E69B8u: goto label_1e69b8;
            case 0x1E69BCu: goto label_1e69bc;
            case 0x1E69C0u: goto label_1e69c0;
            case 0x1E69C4u: goto label_1e69c4;
            case 0x1E69C8u: goto label_1e69c8;
            case 0x1E69CCu: goto label_1e69cc;
            case 0x1E69D0u: goto label_1e69d0;
            case 0x1E69D4u: goto label_1e69d4;
            case 0x1E69D8u: goto label_1e69d8;
            case 0x1E69DCu: goto label_1e69dc;
            case 0x1E69E0u: goto label_1e69e0;
            case 0x1E69E4u: goto label_1e69e4;
            case 0x1E69E8u: goto label_1e69e8;
            case 0x1E69ECu: goto label_1e69ec;
            case 0x1E69F0u: goto label_1e69f0;
            case 0x1E69F4u: goto label_1e69f4;
            case 0x1E69F8u: goto label_1e69f8;
            case 0x1E69FCu: goto label_1e69fc;
            case 0x1E6A00u: goto label_1e6a00;
            case 0x1E6A04u: goto label_1e6a04;
            case 0x1E6A08u: goto label_1e6a08;
            case 0x1E6A0Cu: goto label_1e6a0c;
            case 0x1E6A10u: goto label_1e6a10;
            case 0x1E6A14u: goto label_1e6a14;
            case 0x1E6A18u: goto label_1e6a18;
            case 0x1E6A1Cu: goto label_1e6a1c;
            case 0x1E6A20u: goto label_1e6a20;
            case 0x1E6A24u: goto label_1e6a24;
            case 0x1E6A28u: goto label_1e6a28;
            case 0x1E6A2Cu: goto label_1e6a2c;
            case 0x1E6A30u: goto label_1e6a30;
            case 0x1E6A34u: goto label_1e6a34;
            case 0x1E6A38u: goto label_1e6a38;
            case 0x1E6A3Cu: goto label_1e6a3c;
            case 0x1E6A40u: goto label_1e6a40;
            case 0x1E6A44u: goto label_1e6a44;
            case 0x1E6A48u: goto label_1e6a48;
            case 0x1E6A4Cu: goto label_1e6a4c;
            case 0x1E6A50u: goto label_1e6a50;
            case 0x1E6A54u: goto label_1e6a54;
            case 0x1E6A58u: goto label_1e6a58;
            case 0x1E6A5Cu: goto label_1e6a5c;
            case 0x1E6A60u: goto label_1e6a60;
            case 0x1E6A64u: goto label_1e6a64;
            case 0x1E6A68u: goto label_1e6a68;
            case 0x1E6A6Cu: goto label_1e6a6c;
            case 0x1E6A70u: goto label_1e6a70;
            case 0x1E6A74u: goto label_1e6a74;
            case 0x1E6A78u: goto label_1e6a78;
            case 0x1E6A7Cu: goto label_1e6a7c;
            case 0x1E6A80u: goto label_1e6a80;
            case 0x1E6A84u: goto label_1e6a84;
            case 0x1E6A88u: goto label_1e6a88;
            case 0x1E6A8Cu: goto label_1e6a8c;
            case 0x1E6A90u: goto label_1e6a90;
            case 0x1E6A94u: goto label_1e6a94;
            case 0x1E6A98u: goto label_1e6a98;
            case 0x1E6A9Cu: goto label_1e6a9c;
            case 0x1E6AA0u: goto label_1e6aa0;
            case 0x1E6AA4u: goto label_1e6aa4;
            case 0x1E6AA8u: goto label_1e6aa8;
            case 0x1E6AACu: goto label_1e6aac;
            case 0x1E6AB0u: goto label_1e6ab0;
            case 0x1E6AB4u: goto label_1e6ab4;
            case 0x1E6AB8u: goto label_1e6ab8;
            case 0x1E6ABCu: goto label_1e6abc;
            case 0x1E6AC0u: goto label_1e6ac0;
            case 0x1E6AC4u: goto label_1e6ac4;
            case 0x1E6AC8u: goto label_1e6ac8;
            case 0x1E6ACCu: goto label_1e6acc;
            case 0x1E6AD0u: goto label_1e6ad0;
            case 0x1E6AD4u: goto label_1e6ad4;
            case 0x1E6AD8u: goto label_1e6ad8;
            case 0x1E6ADCu: goto label_1e6adc;
            case 0x1E6AE0u: goto label_1e6ae0;
            case 0x1E6AE4u: goto label_1e6ae4;
            case 0x1E6AE8u: goto label_1e6ae8;
            case 0x1E6AECu: goto label_1e6aec;
            case 0x1E6AF0u: goto label_1e6af0;
            case 0x1E6AF4u: goto label_1e6af4;
            case 0x1E6AF8u: goto label_1e6af8;
            case 0x1E6AFCu: goto label_1e6afc;
            case 0x1E6B00u: goto label_1e6b00;
            case 0x1E6B04u: goto label_1e6b04;
            case 0x1E6B08u: goto label_1e6b08;
            case 0x1E6B0Cu: goto label_1e6b0c;
            case 0x1E6B10u: goto label_1e6b10;
            case 0x1E6B14u: goto label_1e6b14;
            case 0x1E6B18u: goto label_1e6b18;
            case 0x1E6B1Cu: goto label_1e6b1c;
            case 0x1E6B20u: goto label_1e6b20;
            case 0x1E6B24u: goto label_1e6b24;
            case 0x1E6B28u: goto label_1e6b28;
            case 0x1E6B2Cu: goto label_1e6b2c;
            case 0x1E6B30u: goto label_1e6b30;
            case 0x1E6B34u: goto label_1e6b34;
            case 0x1E6B38u: goto label_1e6b38;
            case 0x1E6B3Cu: goto label_1e6b3c;
            case 0x1E6B40u: goto label_1e6b40;
            case 0x1E6B44u: goto label_1e6b44;
            case 0x1E6B48u: goto label_1e6b48;
            case 0x1E6B4Cu: goto label_1e6b4c;
            case 0x1E6B50u: goto label_1e6b50;
            case 0x1E6B54u: goto label_1e6b54;
            case 0x1E6B58u: goto label_1e6b58;
            case 0x1E6B5Cu: goto label_1e6b5c;
            case 0x1E6B60u: goto label_1e6b60;
            case 0x1E6B64u: goto label_1e6b64;
            case 0x1E6B68u: goto label_1e6b68;
            case 0x1E6B6Cu: goto label_1e6b6c;
            case 0x1E6B70u: goto label_1e6b70;
            case 0x1E6B74u: goto label_1e6b74;
            case 0x1E6B78u: goto label_1e6b78;
            case 0x1E6B7Cu: goto label_1e6b7c;
            case 0x1E6B80u: goto label_1e6b80;
            case 0x1E6B84u: goto label_1e6b84;
            case 0x1E6B88u: goto label_1e6b88;
            case 0x1E6B8Cu: goto label_1e6b8c;
            case 0x1E6B90u: goto label_1e6b90;
            case 0x1E6B94u: goto label_1e6b94;
            case 0x1E6B98u: goto label_1e6b98;
            case 0x1E6B9Cu: goto label_1e6b9c;
            case 0x1E6BA0u: goto label_1e6ba0;
            case 0x1E6BA4u: goto label_1e6ba4;
            case 0x1E6BA8u: goto label_1e6ba8;
            case 0x1E6BACu: goto label_1e6bac;
            case 0x1E6BB0u: goto label_1e6bb0;
            case 0x1E6BB4u: goto label_1e6bb4;
            case 0x1E6BB8u: goto label_1e6bb8;
            case 0x1E6BBCu: goto label_1e6bbc;
            case 0x1E6BC0u: goto label_1e6bc0;
            case 0x1E6BC4u: goto label_1e6bc4;
            case 0x1E6BC8u: goto label_1e6bc8;
            case 0x1E6BCCu: goto label_1e6bcc;
            case 0x1E6BD0u: goto label_1e6bd0;
            case 0x1E6BD4u: goto label_1e6bd4;
            case 0x1E6BD8u: goto label_1e6bd8;
            case 0x1E6BDCu: goto label_1e6bdc;
            case 0x1E6BE0u: goto label_1e6be0;
            case 0x1E6BE4u: goto label_1e6be4;
            case 0x1E6BE8u: goto label_1e6be8;
            case 0x1E6BECu: goto label_1e6bec;
            case 0x1E6BF0u: goto label_1e6bf0;
            case 0x1E6BF4u: goto label_1e6bf4;
            case 0x1E6BF8u: goto label_1e6bf8;
            case 0x1E6BFCu: goto label_1e6bfc;
            case 0x1E6C00u: goto label_1e6c00;
            case 0x1E6C04u: goto label_1e6c04;
            case 0x1E6C08u: goto label_1e6c08;
            case 0x1E6C0Cu: goto label_1e6c0c;
            case 0x1E6C10u: goto label_1e6c10;
            case 0x1E6C14u: goto label_1e6c14;
            case 0x1E6C18u: goto label_1e6c18;
            case 0x1E6C1Cu: goto label_1e6c1c;
            case 0x1E6C20u: goto label_1e6c20;
            case 0x1E6C24u: goto label_1e6c24;
            case 0x1E6C28u: goto label_1e6c28;
            case 0x1E6C2Cu: goto label_1e6c2c;
            case 0x1E6C30u: goto label_1e6c30;
            case 0x1E6C34u: goto label_1e6c34;
            case 0x1E6C38u: goto label_1e6c38;
            case 0x1E6C3Cu: goto label_1e6c3c;
            case 0x1E6C40u: goto label_1e6c40;
            case 0x1E6C44u: goto label_1e6c44;
            case 0x1E6C48u: goto label_1e6c48;
            case 0x1E6C4Cu: goto label_1e6c4c;
            case 0x1E6C50u: goto label_1e6c50;
            case 0x1E6C54u: goto label_1e6c54;
            case 0x1E6C58u: goto label_1e6c58;
            case 0x1E6C5Cu: goto label_1e6c5c;
            case 0x1E6C60u: goto label_1e6c60;
            case 0x1E6C64u: goto label_1e6c64;
            case 0x1E6C68u: goto label_1e6c68;
            case 0x1E6C6Cu: goto label_1e6c6c;
            case 0x1E6C70u: goto label_1e6c70;
            case 0x1E6C74u: goto label_1e6c74;
            case 0x1E6C78u: goto label_1e6c78;
            case 0x1E6C7Cu: goto label_1e6c7c;
            case 0x1E6C80u: goto label_1e6c80;
            case 0x1E6C84u: goto label_1e6c84;
            case 0x1E6C88u: goto label_1e6c88;
            case 0x1E6C8Cu: goto label_1e6c8c;
            case 0x1E6C90u: goto label_1e6c90;
            case 0x1E6C94u: goto label_1e6c94;
            case 0x1E6C98u: goto label_1e6c98;
            case 0x1E6C9Cu: goto label_1e6c9c;
            case 0x1E6CA0u: goto label_1e6ca0;
            case 0x1E6CA4u: goto label_1e6ca4;
            case 0x1E6CA8u: goto label_1e6ca8;
            case 0x1E6CACu: goto label_1e6cac;
            case 0x1E6CB0u: goto label_1e6cb0;
            case 0x1E6CB4u: goto label_1e6cb4;
            case 0x1E6CB8u: goto label_1e6cb8;
            case 0x1E6CBCu: goto label_1e6cbc;
            case 0x1E6CC0u: goto label_1e6cc0;
            case 0x1E6CC4u: goto label_1e6cc4;
            case 0x1E6CC8u: goto label_1e6cc8;
            case 0x1E6CCCu: goto label_1e6ccc;
            case 0x1E6CD0u: goto label_1e6cd0;
            case 0x1E6CD4u: goto label_1e6cd4;
            case 0x1E6CD8u: goto label_1e6cd8;
            case 0x1E6CDCu: goto label_1e6cdc;
            case 0x1E6CE0u: goto label_1e6ce0;
            case 0x1E6CE4u: goto label_1e6ce4;
            case 0x1E6CE8u: goto label_1e6ce8;
            case 0x1E6CECu: goto label_1e6cec;
            case 0x1E6CF0u: goto label_1e6cf0;
            case 0x1E6CF4u: goto label_1e6cf4;
            case 0x1E6CF8u: goto label_1e6cf8;
            case 0x1E6CFCu: goto label_1e6cfc;
            case 0x1E6D00u: goto label_1e6d00;
            case 0x1E6D04u: goto label_1e6d04;
            case 0x1E6D08u: goto label_1e6d08;
            case 0x1E6D0Cu: goto label_1e6d0c;
            case 0x1E6D10u: goto label_1e6d10;
            case 0x1E6D14u: goto label_1e6d14;
            case 0x1E6D18u: goto label_1e6d18;
            case 0x1E6D1Cu: goto label_1e6d1c;
            case 0x1E6D20u: goto label_1e6d20;
            case 0x1E6D24u: goto label_1e6d24;
            case 0x1E6D28u: goto label_1e6d28;
            case 0x1E6D2Cu: goto label_1e6d2c;
            case 0x1E6D30u: goto label_1e6d30;
            case 0x1E6D34u: goto label_1e6d34;
            case 0x1E6D38u: goto label_1e6d38;
            case 0x1E6D3Cu: goto label_1e6d3c;
            case 0x1E6D40u: goto label_1e6d40;
            case 0x1E6D44u: goto label_1e6d44;
            case 0x1E6D48u: goto label_1e6d48;
            case 0x1E6D4Cu: goto label_1e6d4c;
            case 0x1E6D50u: goto label_1e6d50;
            case 0x1E6D54u: goto label_1e6d54;
            case 0x1E6D58u: goto label_1e6d58;
            case 0x1E6D5Cu: goto label_1e6d5c;
            case 0x1E6D60u: goto label_1e6d60;
            case 0x1E6D64u: goto label_1e6d64;
            case 0x1E6D68u: goto label_1e6d68;
            case 0x1E6D6Cu: goto label_1e6d6c;
            case 0x1E6D70u: goto label_1e6d70;
            case 0x1E6D74u: goto label_1e6d74;
            case 0x1E6D78u: goto label_1e6d78;
            case 0x1E6D7Cu: goto label_1e6d7c;
            case 0x1E6D80u: goto label_1e6d80;
            case 0x1E6D84u: goto label_1e6d84;
            case 0x1E6D88u: goto label_1e6d88;
            case 0x1E6D8Cu: goto label_1e6d8c;
            case 0x1E6D90u: goto label_1e6d90;
            case 0x1E6D94u: goto label_1e6d94;
            case 0x1E6D98u: goto label_1e6d98;
            case 0x1E6D9Cu: goto label_1e6d9c;
            case 0x1E6DA0u: goto label_1e6da0;
            case 0x1E6DA4u: goto label_1e6da4;
            case 0x1E6DA8u: goto label_1e6da8;
            case 0x1E6DACu: goto label_1e6dac;
            case 0x1E6DB0u: goto label_1e6db0;
            case 0x1E6DB4u: goto label_1e6db4;
            case 0x1E6DB8u: goto label_1e6db8;
            case 0x1E6DBCu: goto label_1e6dbc;
            case 0x1E6DC0u: goto label_1e6dc0;
            case 0x1E6DC4u: goto label_1e6dc4;
            case 0x1E6DC8u: goto label_1e6dc8;
            case 0x1E6DCCu: goto label_1e6dcc;
            case 0x1E6DD0u: goto label_1e6dd0;
            case 0x1E6DD4u: goto label_1e6dd4;
            case 0x1E6DD8u: goto label_1e6dd8;
            case 0x1E6DDCu: goto label_1e6ddc;
            case 0x1E6DE0u: goto label_1e6de0;
            case 0x1E6DE4u: goto label_1e6de4;
            case 0x1E6DE8u: goto label_1e6de8;
            case 0x1E6DECu: goto label_1e6dec;
            case 0x1E6DF0u: goto label_1e6df0;
            case 0x1E6DF4u: goto label_1e6df4;
            case 0x1E6DF8u: goto label_1e6df8;
            case 0x1E6DFCu: goto label_1e6dfc;
            case 0x1E6E00u: goto label_1e6e00;
            case 0x1E6E04u: goto label_1e6e04;
            case 0x1E6E08u: goto label_1e6e08;
            case 0x1E6E0Cu: goto label_1e6e0c;
            case 0x1E6E10u: goto label_1e6e10;
            case 0x1E6E14u: goto label_1e6e14;
            case 0x1E6E18u: goto label_1e6e18;
            case 0x1E6E1Cu: goto label_1e6e1c;
            case 0x1E6E20u: goto label_1e6e20;
            case 0x1E6E24u: goto label_1e6e24;
            case 0x1E6E28u: goto label_1e6e28;
            case 0x1E6E2Cu: goto label_1e6e2c;
            case 0x1E6E30u: goto label_1e6e30;
            case 0x1E6E34u: goto label_1e6e34;
            case 0x1E6E38u: goto label_1e6e38;
            case 0x1E6E3Cu: goto label_1e6e3c;
            case 0x1E6E40u: goto label_1e6e40;
            case 0x1E6E44u: goto label_1e6e44;
            case 0x1E6E48u: goto label_1e6e48;
            case 0x1E6E4Cu: goto label_1e6e4c;
            case 0x1E6E50u: goto label_1e6e50;
            case 0x1E6E54u: goto label_1e6e54;
            case 0x1E6E58u: goto label_1e6e58;
            case 0x1E6E5Cu: goto label_1e6e5c;
            case 0x1E6E60u: goto label_1e6e60;
            case 0x1E6E64u: goto label_1e6e64;
            case 0x1E6E68u: goto label_1e6e68;
            case 0x1E6E6Cu: goto label_1e6e6c;
            case 0x1E6E70u: goto label_1e6e70;
            case 0x1E6E74u: goto label_1e6e74;
            case 0x1E6E78u: goto label_1e6e78;
            case 0x1E6E7Cu: goto label_1e6e7c;
            case 0x1E6E80u: goto label_1e6e80;
            case 0x1E6E84u: goto label_1e6e84;
            case 0x1E6E88u: goto label_1e6e88;
            case 0x1E6E8Cu: goto label_1e6e8c;
            case 0x1E6E90u: goto label_1e6e90;
            case 0x1E6E94u: goto label_1e6e94;
            case 0x1E6E98u: goto label_1e6e98;
            case 0x1E6E9Cu: goto label_1e6e9c;
            case 0x1E6EA0u: goto label_1e6ea0;
            case 0x1E6EA4u: goto label_1e6ea4;
            case 0x1E6EA8u: goto label_1e6ea8;
            case 0x1E6EACu: goto label_1e6eac;
            case 0x1E6EB0u: goto label_1e6eb0;
            case 0x1E6EB4u: goto label_1e6eb4;
            case 0x1E6EB8u: goto label_1e6eb8;
            case 0x1E6EBCu: goto label_1e6ebc;
            case 0x1E6EC0u: goto label_1e6ec0;
            case 0x1E6EC4u: goto label_1e6ec4;
            case 0x1E6EC8u: goto label_1e6ec8;
            case 0x1E6ECCu: goto label_1e6ecc;
            case 0x1E6ED0u: goto label_1e6ed0;
            case 0x1E6ED4u: goto label_1e6ed4;
            case 0x1E6ED8u: goto label_1e6ed8;
            case 0x1E6EDCu: goto label_1e6edc;
            case 0x1E6EE0u: goto label_1e6ee0;
            case 0x1E6EE4u: goto label_1e6ee4;
            case 0x1E6EE8u: goto label_1e6ee8;
            case 0x1E6EECu: goto label_1e6eec;
            case 0x1E6EF0u: goto label_1e6ef0;
            case 0x1E6EF4u: goto label_1e6ef4;
            case 0x1E6EF8u: goto label_1e6ef8;
            case 0x1E6EFCu: goto label_1e6efc;
            case 0x1E6F00u: goto label_1e6f00;
            case 0x1E6F04u: goto label_1e6f04;
            case 0x1E6F08u: goto label_1e6f08;
            case 0x1E6F0Cu: goto label_1e6f0c;
            case 0x1E6F10u: goto label_1e6f10;
            case 0x1E6F14u: goto label_1e6f14;
            case 0x1E6F18u: goto label_1e6f18;
            case 0x1E6F1Cu: goto label_1e6f1c;
            case 0x1E6F20u: goto label_1e6f20;
            case 0x1E6F24u: goto label_1e6f24;
            case 0x1E6F28u: goto label_1e6f28;
            case 0x1E6F2Cu: goto label_1e6f2c;
            case 0x1E6F30u: goto label_1e6f30;
            case 0x1E6F34u: goto label_1e6f34;
            case 0x1E6F38u: goto label_1e6f38;
            case 0x1E6F3Cu: goto label_1e6f3c;
            case 0x1E6F40u: goto label_1e6f40;
            case 0x1E6F44u: goto label_1e6f44;
            case 0x1E6F48u: goto label_1e6f48;
            case 0x1E6F4Cu: goto label_1e6f4c;
            case 0x1E6F50u: goto label_1e6f50;
            case 0x1E6F54u: goto label_1e6f54;
            case 0x1E6F58u: goto label_1e6f58;
            case 0x1E6F5Cu: goto label_1e6f5c;
            case 0x1E6F60u: goto label_1e6f60;
            case 0x1E6F64u: goto label_1e6f64;
            case 0x1E6F68u: goto label_1e6f68;
            case 0x1E6F6Cu: goto label_1e6f6c;
            case 0x1E6F70u: goto label_1e6f70;
            case 0x1E6F74u: goto label_1e6f74;
            case 0x1E6F78u: goto label_1e6f78;
            case 0x1E6F7Cu: goto label_1e6f7c;
            case 0x1E6F80u: goto label_1e6f80;
            case 0x1E6F84u: goto label_1e6f84;
            case 0x1E6F88u: goto label_1e6f88;
            case 0x1E6F8Cu: goto label_1e6f8c;
            case 0x1E6F90u: goto label_1e6f90;
            case 0x1E6F94u: goto label_1e6f94;
            case 0x1E6F98u: goto label_1e6f98;
            case 0x1E6F9Cu: goto label_1e6f9c;
            case 0x1E6FA0u: goto label_1e6fa0;
            case 0x1E6FA4u: goto label_1e6fa4;
            case 0x1E6FA8u: goto label_1e6fa8;
            case 0x1E6FACu: goto label_1e6fac;
            case 0x1E6FB0u: goto label_1e6fb0;
            case 0x1E6FB4u: goto label_1e6fb4;
            case 0x1E6FB8u: goto label_1e6fb8;
            case 0x1E6FBCu: goto label_1e6fbc;
            case 0x1E6FC0u: goto label_1e6fc0;
            case 0x1E6FC4u: goto label_1e6fc4;
            case 0x1E6FC8u: goto label_1e6fc8;
            case 0x1E6FCCu: goto label_1e6fcc;
            case 0x1E6FD0u: goto label_1e6fd0;
            case 0x1E6FD4u: goto label_1e6fd4;
            case 0x1E6FD8u: goto label_1e6fd8;
            case 0x1E6FDCu: goto label_1e6fdc;
            case 0x1E6FE0u: goto label_1e6fe0;
            case 0x1E6FE4u: goto label_1e6fe4;
            case 0x1E6FE8u: goto label_1e6fe8;
            case 0x1E6FECu: goto label_1e6fec;
            case 0x1E6FF0u: goto label_1e6ff0;
            case 0x1E6FF4u: goto label_1e6ff4;
            case 0x1E6FF8u: goto label_1e6ff8;
            case 0x1E6FFCu: goto label_1e6ffc;
            case 0x1E7000u: goto label_1e7000;
            case 0x1E7004u: goto label_1e7004;
            case 0x1E7008u: goto label_1e7008;
            case 0x1E700Cu: goto label_1e700c;
            case 0x1E7010u: goto label_1e7010;
            case 0x1E7014u: goto label_1e7014;
            case 0x1E7018u: goto label_1e7018;
            case 0x1E701Cu: goto label_1e701c;
            case 0x1E7020u: goto label_1e7020;
            case 0x1E7024u: goto label_1e7024;
            case 0x1E7028u: goto label_1e7028;
            case 0x1E702Cu: goto label_1e702c;
            case 0x1E7030u: goto label_1e7030;
            case 0x1E7034u: goto label_1e7034;
            case 0x1E7038u: goto label_1e7038;
            case 0x1E703Cu: goto label_1e703c;
            case 0x1E7040u: goto label_1e7040;
            case 0x1E7044u: goto label_1e7044;
            case 0x1E7048u: goto label_1e7048;
            case 0x1E704Cu: goto label_1e704c;
            case 0x1E7050u: goto label_1e7050;
            case 0x1E7054u: goto label_1e7054;
            case 0x1E7058u: goto label_1e7058;
            case 0x1E705Cu: goto label_1e705c;
            case 0x1E7060u: goto label_1e7060;
            case 0x1E7064u: goto label_1e7064;
            case 0x1E7068u: goto label_1e7068;
            case 0x1E706Cu: goto label_1e706c;
            case 0x1E7070u: goto label_1e7070;
            case 0x1E7074u: goto label_1e7074;
            case 0x1E7078u: goto label_1e7078;
            case 0x1E707Cu: goto label_1e707c;
            case 0x1E7080u: goto label_1e7080;
            case 0x1E7084u: goto label_1e7084;
            case 0x1E7088u: goto label_1e7088;
            case 0x1E708Cu: goto label_1e708c;
            case 0x1E7090u: goto label_1e7090;
            case 0x1E7094u: goto label_1e7094;
            case 0x1E7098u: goto label_1e7098;
            case 0x1E709Cu: goto label_1e709c;
            case 0x1E70A0u: goto label_1e70a0;
            case 0x1E70A4u: goto label_1e70a4;
            case 0x1E70A8u: goto label_1e70a8;
            case 0x1E70ACu: goto label_1e70ac;
            case 0x1E70B0u: goto label_1e70b0;
            case 0x1E70B4u: goto label_1e70b4;
            case 0x1E70B8u: goto label_1e70b8;
            case 0x1E70BCu: goto label_1e70bc;
            case 0x1E70C0u: goto label_1e70c0;
            case 0x1E70C4u: goto label_1e70c4;
            case 0x1E70C8u: goto label_1e70c8;
            case 0x1E70CCu: goto label_1e70cc;
            case 0x1E70D0u: goto label_1e70d0;
            case 0x1E70D4u: goto label_1e70d4;
            case 0x1E70D8u: goto label_1e70d8;
            case 0x1E70DCu: goto label_1e70dc;
            case 0x1E70E0u: goto label_1e70e0;
            case 0x1E70E4u: goto label_1e70e4;
            case 0x1E70E8u: goto label_1e70e8;
            case 0x1E70ECu: goto label_1e70ec;
            case 0x1E70F0u: goto label_1e70f0;
            case 0x1E70F4u: goto label_1e70f4;
            case 0x1E70F8u: goto label_1e70f8;
            case 0x1E70FCu: goto label_1e70fc;
            case 0x1E7100u: goto label_1e7100;
            case 0x1E7104u: goto label_1e7104;
            case 0x1E7108u: goto label_1e7108;
            case 0x1E710Cu: goto label_1e710c;
            case 0x1E7110u: goto label_1e7110;
            case 0x1E7114u: goto label_1e7114;
            case 0x1E7118u: goto label_1e7118;
            case 0x1E711Cu: goto label_1e711c;
            case 0x1E7120u: goto label_1e7120;
            case 0x1E7124u: goto label_1e7124;
            case 0x1E7128u: goto label_1e7128;
            case 0x1E712Cu: goto label_1e712c;
            case 0x1E7130u: goto label_1e7130;
            case 0x1E7134u: goto label_1e7134;
            case 0x1E7138u: goto label_1e7138;
            case 0x1E713Cu: goto label_1e713c;
            case 0x1E7140u: goto label_1e7140;
            case 0x1E7144u: goto label_1e7144;
            case 0x1E7148u: goto label_1e7148;
            case 0x1E714Cu: goto label_1e714c;
            case 0x1E7150u: goto label_1e7150;
            case 0x1E7154u: goto label_1e7154;
            case 0x1E7158u: goto label_1e7158;
            case 0x1E715Cu: goto label_1e715c;
            case 0x1E7160u: goto label_1e7160;
            case 0x1E7164u: goto label_1e7164;
            case 0x1E7168u: goto label_1e7168;
            case 0x1E716Cu: goto label_1e716c;
            case 0x1E7170u: goto label_1e7170;
            case 0x1E7174u: goto label_1e7174;
            case 0x1E7178u: goto label_1e7178;
            case 0x1E717Cu: goto label_1e717c;
            case 0x1E7180u: goto label_1e7180;
            case 0x1E7184u: goto label_1e7184;
            case 0x1E7188u: goto label_1e7188;
            case 0x1E718Cu: goto label_1e718c;
            case 0x1E7190u: goto label_1e7190;
            case 0x1E7194u: goto label_1e7194;
            case 0x1E7198u: goto label_1e7198;
            case 0x1E719Cu: goto label_1e719c;
            case 0x1E71A0u: goto label_1e71a0;
            case 0x1E71A4u: goto label_1e71a4;
            case 0x1E71A8u: goto label_1e71a8;
            case 0x1E71ACu: goto label_1e71ac;
            case 0x1E71B0u: goto label_1e71b0;
            case 0x1E71B4u: goto label_1e71b4;
            case 0x1E71B8u: goto label_1e71b8;
            case 0x1E71BCu: goto label_1e71bc;
            case 0x1E71C0u: goto label_1e71c0;
            case 0x1E71C4u: goto label_1e71c4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e71c0:
    ctx->pc = 0x1E71C8u;
}
