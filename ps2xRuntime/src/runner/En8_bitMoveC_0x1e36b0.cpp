#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_bitMoveC
// Address: 0x1e36b0 - 0x1e4120
void En8_bitMoveC_0x1e36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_bitMoveC_0x1e36b0");
#endif

    ctx->pc = 0x1e36b0u;

label_1e36b0:
    // 0x1e36b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e36b4:
    // 0x1e36b4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e36b8:
    // 0x1e36b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e36b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e36bc:
    // 0x1e36bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e36bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e36c0:
    // 0x1e36c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e36c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e36c4:
    // 0x1e36c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e36c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e36c8:
    // 0x1e36c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e36cc:
    // 0x1e36cc: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e36ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e36d0:
    // 0x1e36d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e36d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e36d4:
    // 0x1e36d4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e36d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e36d8:
    // 0x1e36d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e36d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e36dc:
    // 0x1e36dc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e36dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e36e0:
    // 0x1e36e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e36e4:
    // 0x1e36e4: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e36e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e36e8:
    // 0x1e36e8: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e36e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e36ec:
    // 0x1e36ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e36ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e36f0:
    // 0x1e36f0: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e36f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e36f4:
    // 0x1e36f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e36f8:
    // 0x1e36f8: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1e36f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e36fc:
    // 0x1e36fc: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1e36fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3700:
    // 0x1e3700: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e3704:
    // 0x1e3704: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1e3704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
label_1e3708:
    // 0x1e3708: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e3708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e370c:
    // 0x1e370c: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e370cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3710:
    // 0x1e3710: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e3710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3714:
    // 0x1e3714: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e3718:
    // 0x1e3718: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e3718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e371c:
    // 0x1e371c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3720:
    // 0x1e3720: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e3720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3724:
    // 0x1e3724: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e3724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3728:
    // 0x1e3728: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e3728u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e372c:
    // 0x1e372c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e372cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e3730:
    // 0x1e3730: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3734:
    // 0x1e3734: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1e3734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3738:
    // 0x1e3738: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e373c:
    // 0x1e373c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e373cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e3740:
    // 0x1e3740: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1e3744:
    // 0x1e3744: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e3744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3748:
    // 0x1e3748: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e3748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e374c:
    // 0x1e374c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e374cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3750:
    // 0x1e3750: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e3754:
    if (ctx->pc == 0x1E3754u) {
        ctx->pc = 0x1E3754u;
            // 0x1e3754: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E3758u;
        goto label_1e3758;
    }
    ctx->pc = 0x1E3750u;
    {
        const bool branch_taken_0x1e3750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3750u;
            // 0x1e3754: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3750) {
            ctx->pc = 0x1E3770u;
            goto label_1e3770;
        }
    }
    ctx->pc = 0x1E3758u;
label_1e3758:
    // 0x1e3758: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e375c:
    // 0x1e375c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e375cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3760:
    // 0x1e3760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3764:
    // 0x1e3764: 0x0  nop
    ctx->pc = 0x1e3764u;
    // NOP
label_1e3768:
    // 0x1e3768: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e3768u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e376c:
    // 0x1e376c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e3770:
    // 0x1e3770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e3770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3774:
    // 0x1e3774: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e3778:
    // 0x1e3778: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3778u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e377c:
    // 0x1e377c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e377cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3780:
    // 0x1e3780: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e3780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3784:
    // 0x1e3784: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3784u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3788:
    // 0x1e3788: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e378c:
    if (ctx->pc == 0x1E378Cu) {
        ctx->pc = 0x1E378Cu;
            // 0x1e378c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E3790u;
        goto label_1e3790;
    }
    ctx->pc = 0x1E3788u;
    {
        const bool branch_taken_0x1e3788 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E378Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3788u;
            // 0x1e378c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3788) {
            ctx->pc = 0x1E37A8u;
            goto label_1e37a8;
        }
    }
    ctx->pc = 0x1E3790u;
label_1e3790:
    // 0x1e3790: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e3790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e3794:
    // 0x1e3794: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3794u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3798:
    // 0x1e3798: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e379c:
    // 0x1e379c: 0x0  nop
    ctx->pc = 0x1e379cu;
    // NOP
label_1e37a0:
    // 0x1e37a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e37a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e37a4:
    // 0x1e37a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e37a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e37a8:
    // 0x1e37a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e37ac:
    // 0x1e37ac: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e37b0:
    // 0x1e37b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e37b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e37b4:
    // 0x1e37b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e37b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e37b8:
    // 0x1e37b8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e37b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e37bc:
    // 0x1e37bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e37bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e37c0:
    // 0x1e37c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e37c4:
    if (ctx->pc == 0x1E37C4u) {
        ctx->pc = 0x1E37C4u;
            // 0x1e37c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E37C8u;
        goto label_1e37c8;
    }
    ctx->pc = 0x1E37C0u;
    {
        const bool branch_taken_0x1e37c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37C0u;
            // 0x1e37c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37c0) {
            ctx->pc = 0x1E37E0u;
            goto label_1e37e0;
        }
    }
    ctx->pc = 0x1E37C8u;
label_1e37c8:
    // 0x1e37c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e37c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e37cc:
    // 0x1e37cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e37ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e37d0:
    // 0x1e37d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e37d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e37d4:
    // 0x1e37d4: 0x0  nop
    ctx->pc = 0x1e37d4u;
    // NOP
label_1e37d8:
    // 0x1e37d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e37d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e37dc:
    // 0x1e37dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e37dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e37e0:
    // 0x1e37e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e37e4:
    // 0x1e37e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e37e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e37e8:
    // 0x1e37e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e37e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e37ec:
    // 0x1e37ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e37ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e37f0:
    // 0x1e37f0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e37f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e37f4:
    // 0x1e37f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e37f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e37f8:
    // 0x1e37f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e37fc:
    if (ctx->pc == 0x1E37FCu) {
        ctx->pc = 0x1E37FCu;
            // 0x1e37fc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E3800u;
        goto label_1e3800;
    }
    ctx->pc = 0x1E37F8u;
    {
        const bool branch_taken_0x1e37f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E37FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E37F8u;
            // 0x1e37fc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e37f8) {
            ctx->pc = 0x1E3818u;
            goto label_1e3818;
        }
    }
    ctx->pc = 0x1E3800u;
label_1e3800:
    // 0x1e3800: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e3804:
    // 0x1e3804: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3804u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3808:
    // 0x1e3808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e380c:
    // 0x1e380c: 0x0  nop
    ctx->pc = 0x1e380cu;
    // NOP
label_1e3810:
    // 0x1e3810: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3810u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e3814:
    // 0x1e3814: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e3814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e3818:
    // 0x1e3818: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e381c:
    // 0x1e381c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e3820:
    // 0x1e3820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3820u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3824:
    // 0x1e3824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3828:
    // 0x1e3828: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e3828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e382c:
    // 0x1e382c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e382cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3830:
    // 0x1e3830: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e3834:
    if (ctx->pc == 0x1E3834u) {
        ctx->pc = 0x1E3834u;
            // 0x1e3834: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E3838u;
        goto label_1e3838;
    }
    ctx->pc = 0x1E3830u;
    {
        const bool branch_taken_0x1e3830 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3830u;
            // 0x1e3834: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3830) {
            ctx->pc = 0x1E3850u;
            goto label_1e3850;
        }
    }
    ctx->pc = 0x1E3838u;
label_1e3838:
    // 0x1e3838: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e3838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e383c:
    // 0x1e383c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e383cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3840:
    // 0x1e3840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3844:
    // 0x1e3844: 0x0  nop
    ctx->pc = 0x1e3844u;
    // NOP
label_1e3848:
    // 0x1e3848: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e3848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e384c:
    // 0x1e384c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e3850:
    // 0x1e3850: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e3850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3854:
    // 0x1e3854: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e3858:
    // 0x1e3858: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3858u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e385c:
    // 0x1e385c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e385cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3860:
    // 0x1e3860: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e3860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3864:
    // 0x1e3864: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3864u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3868:
    // 0x1e3868: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e386c:
    if (ctx->pc == 0x1E386Cu) {
        ctx->pc = 0x1E386Cu;
            // 0x1e386c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1E3870u;
        goto label_1e3870;
    }
    ctx->pc = 0x1E3868u;
    {
        const bool branch_taken_0x1e3868 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E386Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3868u;
            // 0x1e386c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3868) {
            ctx->pc = 0x1E3888u;
            goto label_1e3888;
        }
    }
    ctx->pc = 0x1E3870u;
label_1e3870:
    // 0x1e3870: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e3870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e3874:
    // 0x1e3874: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e3874u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e3878:
    // 0x1e3878: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e387c:
    // 0x1e387c: 0x0  nop
    ctx->pc = 0x1e387cu;
    // NOP
label_1e3880:
    // 0x1e3880: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e3884:
    // 0x1e3884: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e3884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e3888:
    // 0x1e3888: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e388c:
    // 0x1e388c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e388cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_1e3890:
    // 0x1e3890: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e3890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3894:
    // 0x1e3894: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e3898:
    // 0x1e3898: 0xc0793d8  jal         func_1E4F60
label_1e389c:
    if (ctx->pc == 0x1E389Cu) {
        ctx->pc = 0x1E389Cu;
            // 0x1e389c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->pc = 0x1E38A0u;
        goto label_1e38a0;
    }
    ctx->pc = 0x1E3898u;
    SET_GPR_U32(ctx, 31, 0x1E38A0u);
    ctx->pc = 0x1E389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3898u;
            // 0x1e389c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4F60u;
    if (runtime->hasFunction(0x1E4F60u)) {
        auto targetFn = runtime->lookupFunction(0x1E4F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38A0u; }
        if (ctx->pc != 0x1E38A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e4f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38A0u; }
        if (ctx->pc != 0x1E38A0u) { return; }
    }
    ctx->pc = 0x1E38A0u;
label_1e38a0:
    // 0x1e38a0: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e38a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e38a4:
    // 0x1e38a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e38a8:
    // 0x1e38a8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1e38a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1e38ac:
    // 0x1e38ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e38acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e38b0:
    // 0x1e38b0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1e38b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1e38b4:
    // 0x1e38b4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1e38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1e38b8:
    // 0x1e38b8: 0x10620177  beq         $v1, $v0, . + 4 + (0x177 << 2)
label_1e38bc:
    if (ctx->pc == 0x1E38BCu) {
        ctx->pc = 0x1E38BCu;
            // 0x1e38bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E38C0u;
        goto label_1e38c0;
    }
    ctx->pc = 0x1E38B8u;
    {
        const bool branch_taken_0x1e38b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E38BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38B8u;
            // 0x1e38bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38b8) {
            ctx->pc = 0x1E3E98u;
            goto label_1e3e98;
        }
    }
    ctx->pc = 0x1E38C0u;
label_1e38c0:
    // 0x1e38c0: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_1e38c4:
    if (ctx->pc == 0x1E38C4u) {
        ctx->pc = 0x1E38C8u;
        goto label_1e38c8;
    }
    ctx->pc = 0x1E38C0u;
    {
        const bool branch_taken_0x1e38c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e38c0) {
            ctx->pc = 0x1E39D0u;
            goto label_1e39d0;
        }
    }
    ctx->pc = 0x1E38C8u;
label_1e38c8:
    // 0x1e38c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e38cc:
    if (ctx->pc == 0x1E38CCu) {
        ctx->pc = 0x1E38D0u;
        goto label_1e38d0;
    }
    ctx->pc = 0x1E38C8u;
    {
        const bool branch_taken_0x1e38c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e38c8) {
            ctx->pc = 0x1E38D8u;
            goto label_1e38d8;
        }
    }
    ctx->pc = 0x1E38D0u;
label_1e38d0:
    // 0x1e38d0: 0x10000179  b           . + 4 + (0x179 << 2)
label_1e38d4:
    if (ctx->pc == 0x1E38D4u) {
        ctx->pc = 0x1E38D8u;
        goto label_1e38d8;
    }
    ctx->pc = 0x1E38D0u;
    {
        const bool branch_taken_0x1e38d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e38d0) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E38D8u;
label_1e38d8:
    // 0x1e38d8: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1e38dc:
    // 0x1e38dc: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e38dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e38e0:
    // 0x1e38e0: 0x344251ec  ori         $v0, $v0, 0x51EC
    ctx->pc = 0x1e38e0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1e38e4:
    // 0x1e38e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e38e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e38e8:
    // 0x1e38e8: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x1e38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
label_1e38ec:
    // 0x1e38ec: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1e38ecu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1e38f0:
    // 0x1e38f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e38f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e38f4:
    // 0x1e38f4: 0x0  nop
    ctx->pc = 0x1e38f4u;
    // NOP
label_1e38f8:
    // 0x1e38f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e38f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1e38fc:
    // 0x1e38fc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e38fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1e3900:
    // 0x1e3900: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3904:
    // 0x1e3904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e3904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e3908:
    // 0x1e3908: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e3908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e390c:
    // 0x1e390c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e390cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e3910:
    // 0x1e3910: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1e3910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1e3914:
    // 0x1e3914: 0x10200168  beqz        $at, . + 4 + (0x168 << 2)
label_1e3918:
    if (ctx->pc == 0x1E3918u) {
        ctx->pc = 0x1E3918u;
            // 0x1e3918: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1E391Cu;
        goto label_1e391c;
    }
    ctx->pc = 0x1E3914u;
    {
        const bool branch_taken_0x1e3914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3914u;
            // 0x1e3918: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3914) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E391Cu;
label_1e391c:
    // 0x1e391c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e3920:
    // 0x1e3920: 0x24632e90  addiu       $v1, $v1, 0x2E90
    ctx->pc = 0x1e3920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11920));
label_1e3924:
    // 0x1e3924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3928:
    // 0x1e3928: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e392c:
    // 0x1e392c: 0x400008  jr          $v0
label_1e3930:
    if (ctx->pc == 0x1E3930u) {
        ctx->pc = 0x1E3934u;
        goto label_1e3934;
    }
    ctx->pc = 0x1E392Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3938u: goto label_1e3938;
            case 0x1E3980u: goto label_1e3980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3934u;
label_1e3934:
    // 0x1e3934: 0x0  nop
    ctx->pc = 0x1e3934u;
    // NOP
label_1e3938:
    // 0x1e3938: 0xc040d72  jal         func_1035C8
label_1e393c:
    if (ctx->pc == 0x1E393Cu) {
        ctx->pc = 0x1E393Cu;
            // 0x1e393c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E3940u;
        goto label_1e3940;
    }
    ctx->pc = 0x1E3938u;
    SET_GPR_U32(ctx, 31, 0x1E3940u);
    ctx->pc = 0x1E393Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3938u;
            // 0x1e393c: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3940u; }
        if (ctx->pc != 0x1E3940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3940u; }
        if (ctx->pc != 0x1E3940u) { return; }
    }
    ctx->pc = 0x1E3940u;
label_1e3940:
    // 0x1e3940: 0x3c043f68  lui         $a0, 0x3F68
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16232 << 16));
label_1e3944:
    // 0x1e3944: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e3944u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e3948:
    // 0x1e3948: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e3948u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e394c:
    // 0x1e394c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e394cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e3950:
    // 0x1e3950: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e3950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e3954:
    // 0x1e3954: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e3954u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e3958:
    // 0x1e3958: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1e3958u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e395c:
    // 0x1e395c: 0xc040098  jal         func_100260
label_1e3960:
    if (ctx->pc == 0x1E3960u) {
        ctx->pc = 0x1E3960u;
            // 0x1e3960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3964u;
        goto label_1e3964;
    }
    ctx->pc = 0x1E395Cu;
    SET_GPR_U32(ctx, 31, 0x1E3964u);
    ctx->pc = 0x1E3960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E395Cu;
            // 0x1e3960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100260u;
    if (runtime->hasFunction(0x100260u)) {
        auto targetFn = runtime->lookupFunction(0x100260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3964u; }
        if (ctx->pc != 0x1E3964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpflt_0x100260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3964u; }
        if (ctx->pc != 0x1E3964u) { return; }
    }
    ctx->pc = 0x1E3964u;
label_1e3964:
    // 0x1e3964: 0x10400154  beqz        $v0, . + 4 + (0x154 << 2)
label_1e3968:
    if (ctx->pc == 0x1E3968u) {
        ctx->pc = 0x1E396Cu;
        goto label_1e396c;
    }
    ctx->pc = 0x1E3964u;
    {
        const bool branch_taken_0x1e3964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3964) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E396Cu;
label_1e396c:
    // 0x1e396c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3970:
    // 0x1e3970: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e3970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1e3974:
    // 0x1e3974: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e3974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1e3978:
    // 0x1e3978: 0x1000014f  b           . + 4 + (0x14F << 2)
label_1e397c:
    if (ctx->pc == 0x1E397Cu) {
        ctx->pc = 0x1E397Cu;
            // 0x1e397c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1E3980u;
        goto label_1e3980;
    }
    ctx->pc = 0x1E3978u;
    {
        const bool branch_taken_0x1e3978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E397Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3978u;
            // 0x1e397c: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3978) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E3980u;
label_1e3980:
    // 0x1e3980: 0xc040d72  jal         func_1035C8
label_1e3984:
    if (ctx->pc == 0x1E3984u) {
        ctx->pc = 0x1E3984u;
            // 0x1e3984: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1E3988u;
        goto label_1e3988;
    }
    ctx->pc = 0x1E3980u;
    SET_GPR_U32(ctx, 31, 0x1E3988u);
    ctx->pc = 0x1E3984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3980u;
            // 0x1e3984: 0xc60c00d0  lwc1        $f12, 0xD0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3988u; }
        if (ctx->pc != 0x1E3988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3988u; }
        if (ctx->pc != 0x1E3988u) { return; }
    }
    ctx->pc = 0x1E3988u;
label_1e3988:
    // 0x1e3988: 0x3c04bf68  lui         $a0, 0xBF68
    ctx->pc = 0x1e3988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49000 << 16));
label_1e398c:
    // 0x1e398c: 0x3403bc6a  ori         $v1, $zero, 0xBC6A
    ctx->pc = 0x1e398cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)48234u)));
label_1e3990:
    // 0x1e3990: 0x34849374  ori         $a0, $a0, 0x9374
    ctx->pc = 0x1e3990u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)37748u)));
label_1e3994:
    // 0x1e3994: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e3994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e3998:
    // 0x1e3998: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e3998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e399c:
    // 0x1e399c: 0x34637efa  ori         $v1, $v1, 0x7EFA
    ctx->pc = 0x1e399cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32506u)));
label_1e39a0:
    // 0x1e39a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1e39a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e39a4:
    // 0x1e39a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e39a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a8:
    // 0x1e39a8: 0xc040084  jal         func_100210
label_1e39ac:
    if (ctx->pc == 0x1E39ACu) {
        ctx->pc = 0x1E39ACu;
            // 0x1e39ac: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->pc = 0x1E39B0u;
        goto label_1e39b0;
    }
    ctx->pc = 0x1E39A8u;
    SET_GPR_U32(ctx, 31, 0x1E39B0u);
    ctx->pc = 0x1E39ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39A8u;
            // 0x1e39ac: 0x70032b89  pcpyld      $a1, $zero, $v1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_unpacklo_epi64(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100210u;
    if (runtime->hasFunction(0x100210u)) {
        auto targetFn = runtime->lookupFunction(0x100210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39B0u; }
        if (ctx->pc != 0x1E39B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfgt_0x100210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39B0u; }
        if (ctx->pc != 0x1E39B0u) { return; }
    }
    ctx->pc = 0x1E39B0u;
label_1e39b0:
    // 0x1e39b0: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
label_1e39b4:
    if (ctx->pc == 0x1E39B4u) {
        ctx->pc = 0x1E39B8u;
        goto label_1e39b8;
    }
    ctx->pc = 0x1E39B0u;
    {
        const bool branch_taken_0x1e39b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39b0) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E39B8u;
label_1e39b8:
    // 0x1e39b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e39bc:
    // 0x1e39bc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e39bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_1e39c0:
    // 0x1e39c0: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_1e39c4:
    // 0x1e39c4: 0x1000013c  b           . + 4 + (0x13C << 2)
label_1e39c8:
    if (ctx->pc == 0x1E39C8u) {
        ctx->pc = 0x1E39C8u;
            // 0x1e39c8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1E39CCu;
        goto label_1e39cc;
    }
    ctx->pc = 0x1E39C4u;
    {
        const bool branch_taken_0x1e39c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39C4u;
            // 0x1e39c8: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39c4) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E39CCu;
label_1e39cc:
    // 0x1e39cc: 0x0  nop
    ctx->pc = 0x1e39ccu;
    // NOP
label_1e39d0:
    // 0x1e39d0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1e39d4:
    // 0x1e39d4: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x1e39d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1e39d8:
    // 0x1e39d8: 0x10200129  beqz        $at, . + 4 + (0x129 << 2)
label_1e39dc:
    if (ctx->pc == 0x1E39DCu) {
        ctx->pc = 0x1E39DCu;
            // 0x1e39dc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->pc = 0x1E39E0u;
        goto label_1e39e0;
    }
    ctx->pc = 0x1E39D8u;
    {
        const bool branch_taken_0x1e39d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39D8u;
            // 0x1e39dc: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39d8) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E39E0u;
label_1e39e0:
    // 0x1e39e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e39e4:
    // 0x1e39e4: 0x24632e60  addiu       $v1, $v1, 0x2E60
    ctx->pc = 0x1e39e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11872));
label_1e39e8:
    // 0x1e39e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e39ec:
    // 0x1e39ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e39f0:
    // 0x1e39f0: 0x400008  jr          $v0
label_1e39f4:
    if (ctx->pc == 0x1E39F4u) {
        ctx->pc = 0x1E39F8u;
        goto label_1e39f8;
    }
    ctx->pc = 0x1E39F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E39F8u: goto label_1e39f8;
            case 0x1E3CD0u: goto label_1e3cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E39F8u;
label_1e39f8:
    // 0x1e39f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e39f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e39fc:
    // 0x1e39fc: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1e39fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1e3a00:
    // 0x1e3a00: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1e3a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1e3a04:
    // 0x1e3a04: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1e3a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e3a08:
    // 0x1e3a08: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e3a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3a0c:
    // 0x1e3a0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e3a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e3a10:
    // 0x1e3a10: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e3a14:
    // 0x1e3a14: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1e3a18:
    // 0x1e3a18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3a1c:
    // 0x1e3a1c: 0x0  nop
    ctx->pc = 0x1e3a1cu;
    // NOP
label_1e3a20:
    // 0x1e3a20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3a24:
    // 0x1e3a24: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1e3a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e3a28:
    // 0x1e3a28: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e3a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e3a2c:
    // 0x1e3a2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3a30:
    // 0x1e3a30: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1e3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_1e3a34:
    // 0x1e3a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3a38:
    // 0x1e3a38: 0x0  nop
    ctx->pc = 0x1e3a38u;
    // NOP
label_1e3a3c:
    // 0x1e3a3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e3a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e3a40:
    // 0x1e3a40: 0xc04b6ee  jal         func_12DBB8
label_1e3a44:
    if (ctx->pc == 0x1E3A44u) {
        ctx->pc = 0x1E3A44u;
            // 0x1e3a44: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->pc = 0x1E3A48u;
        goto label_1e3a48;
    }
    ctx->pc = 0x1E3A40u;
    SET_GPR_U32(ctx, 31, 0x1E3A48u);
    ctx->pc = 0x1E3A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A40u;
            // 0x1e3a44: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A48u; }
        if (ctx->pc != 0x1E3A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A48u; }
        if (ctx->pc != 0x1E3A48u) { return; }
    }
    ctx->pc = 0x1E3A48u;
label_1e3a48:
    // 0x1e3a48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3a4c:
    // 0x1e3a4c: 0x284100c8  slti        $at, $v0, 0xC8
    ctx->pc = 0x1e3a4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
label_1e3a50:
    // 0x1e3a50: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_1e3a54:
    if (ctx->pc == 0x1E3A54u) {
        ctx->pc = 0x1E3A58u;
        goto label_1e3a58;
    }
    ctx->pc = 0x1E3A50u;
    {
        const bool branch_taken_0x1e3a50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a50) {
            ctx->pc = 0x1E3AA8u;
            goto label_1e3aa8;
        }
    }
    ctx->pc = 0x1E3A58u;
label_1e3a58:
    // 0x1e3a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3a5c:
    // 0x1e3a5c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3a60:
    // 0x1e3a60: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3a64:
    // 0x1e3a64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3a64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3a68:
    // 0x1e3a68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3a68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3a6c:
    // 0x1e3a6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1e3a70:
    if (ctx->pc == 0x1E3A70u) {
        ctx->pc = 0x1E3A70u;
            // 0x1e3a70: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1E3A74u;
        goto label_1e3a74;
    }
    ctx->pc = 0x1E3A6Cu;
    {
        const bool branch_taken_0x1e3a6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A6Cu;
            // 0x1e3a70: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a6c) {
            ctx->pc = 0x1E3A80u;
            goto label_1e3a80;
        }
    }
    ctx->pc = 0x1E3A74u;
label_1e3a74:
    // 0x1e3a74: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3a74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3a78:
    // 0x1e3a78: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3a7c:
    // 0x1e3a7c: 0x0  nop
    ctx->pc = 0x1e3a7cu;
    // NOP
label_1e3a80:
    // 0x1e3a80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3a84:
    // 0x1e3a84: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3a88:
    // 0x1e3a88: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3a8c:
    // 0x1e3a8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3a8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3a90:
    // 0x1e3a90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3a90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3a94:
    // 0x1e3a94: 0x450100fa  bc1t        . + 4 + (0xFA << 2)
label_1e3a98:
    if (ctx->pc == 0x1E3A98u) {
        ctx->pc = 0x1E3A98u;
            // 0x1e3a98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1E3A9Cu;
        goto label_1e3a9c;
    }
    ctx->pc = 0x1E3A94u;
    {
        const bool branch_taken_0x1e3a94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A94u;
            // 0x1e3a98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a94) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3A9Cu;
label_1e3a9c:
    // 0x1e3a9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3a9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3aa0:
    // 0x1e3aa0: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1e3aa4:
    if (ctx->pc == 0x1E3AA4u) {
        ctx->pc = 0x1E3AA4u;
            // 0x1e3aa4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3AA8u;
        goto label_1e3aa8;
    }
    ctx->pc = 0x1E3AA0u;
    {
        const bool branch_taken_0x1e3aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AA0u;
            // 0x1e3aa4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3aa0) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3AA8u;
label_1e3aa8:
    // 0x1e3aa8: 0x284100c9  slti        $at, $v0, 0xC9
    ctx->pc = 0x1e3aa8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)201) ? 1 : 0);
label_1e3aac:
    // 0x1e3aac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e3ab0:
    if (ctx->pc == 0x1E3AB0u) {
        ctx->pc = 0x1E3AB4u;
        goto label_1e3ab4;
    }
    ctx->pc = 0x1E3AACu;
    {
        const bool branch_taken_0x1e3aac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3aac) {
            ctx->pc = 0x1E3AD0u;
            goto label_1e3ad0;
        }
    }
    ctx->pc = 0x1E3AB4u;
label_1e3ab4:
    // 0x1e3ab4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ab8:
    // 0x1e3ab8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3abc:
    // 0x1e3abc: 0xc44c0118  lwc1        $f12, 0x118($v0)
    ctx->pc = 0x1e3abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ac0:
    // 0x1e3ac0: 0xc079048  jal         func_1E4120
label_1e3ac4:
    if (ctx->pc == 0x1E3AC4u) {
        ctx->pc = 0x1E3AC4u;
            // 0x1e3ac4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E3AC8u;
        goto label_1e3ac8;
    }
    ctx->pc = 0x1E3AC0u;
    SET_GPR_U32(ctx, 31, 0x1E3AC8u);
    ctx->pc = 0x1E3AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AC0u;
            // 0x1e3ac4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4120u;
    if (runtime->hasFunction(0x1E4120u)) {
        auto targetFn = runtime->lookupFunction(0x1E4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AC8u; }
        if (ctx->pc != 0x1E3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitC_Shot_0x1e4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3AC8u; }
        if (ctx->pc != 0x1E3AC8u) { return; }
    }
    ctx->pc = 0x1E3AC8u;
label_1e3ac8:
    // 0x1e3ac8: 0x100000ed  b           . + 4 + (0xED << 2)
label_1e3acc:
    if (ctx->pc == 0x1E3ACCu) {
        ctx->pc = 0x1E3AD0u;
        goto label_1e3ad0;
    }
    ctx->pc = 0x1E3AC8u;
    {
        const bool branch_taken_0x1e3ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ac8) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3AD0u;
label_1e3ad0:
    // 0x1e3ad0: 0x284100fa  slti        $at, $v0, 0xFA
    ctx->pc = 0x1e3ad0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)250) ? 1 : 0);
label_1e3ad4:
    // 0x1e3ad4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e3ad8:
    if (ctx->pc == 0x1E3AD8u) {
        ctx->pc = 0x1E3ADCu;
        goto label_1e3adc;
    }
    ctx->pc = 0x1E3AD4u;
    {
        const bool branch_taken_0x1e3ad4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3ad4) {
            ctx->pc = 0x1E3B28u;
            goto label_1e3b28;
        }
    }
    ctx->pc = 0x1E3ADCu;
label_1e3adc:
    // 0x1e3adc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ae0:
    // 0x1e3ae0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3ae4:
    // 0x1e3ae4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3ae8:
    // 0x1e3ae8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3ae8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3aec:
    // 0x1e3aec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3aecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3af0:
    // 0x1e3af0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e3af4:
    if (ctx->pc == 0x1E3AF4u) {
        ctx->pc = 0x1E3AF4u;
            // 0x1e3af4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1E3AF8u;
        goto label_1e3af8;
    }
    ctx->pc = 0x1E3AF0u;
    {
        const bool branch_taken_0x1e3af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AF0u;
            // 0x1e3af4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3af0) {
            ctx->pc = 0x1E3B00u;
            goto label_1e3b00;
        }
    }
    ctx->pc = 0x1E3AF8u;
label_1e3af8:
    // 0x1e3af8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3af8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3afc:
    // 0x1e3afc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3b00:
    // 0x1e3b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3b04:
    // 0x1e3b04: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3b08:
    // 0x1e3b08: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3b0c:
    // 0x1e3b0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3b0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3b10:
    // 0x1e3b10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3b10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3b14:
    // 0x1e3b14: 0x450100da  bc1t        . + 4 + (0xDA << 2)
label_1e3b18:
    if (ctx->pc == 0x1E3B18u) {
        ctx->pc = 0x1E3B18u;
            // 0x1e3b18: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1E3B1Cu;
        goto label_1e3b1c;
    }
    ctx->pc = 0x1E3B14u;
    {
        const bool branch_taken_0x1e3b14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B14u;
            // 0x1e3b18: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b14) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3B1Cu;
label_1e3b1c:
    // 0x1e3b1c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3b1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3b20:
    // 0x1e3b20: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_1e3b24:
    if (ctx->pc == 0x1E3B24u) {
        ctx->pc = 0x1E3B24u;
            // 0x1e3b24: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3B28u;
        goto label_1e3b28;
    }
    ctx->pc = 0x1E3B20u;
    {
        const bool branch_taken_0x1e3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B20u;
            // 0x1e3b24: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b20) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3B28u;
label_1e3b28:
    // 0x1e3b28: 0x284100fb  slti        $at, $v0, 0xFB
    ctx->pc = 0x1e3b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)251) ? 1 : 0);
label_1e3b2c:
    // 0x1e3b2c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e3b30:
    if (ctx->pc == 0x1E3B30u) {
        ctx->pc = 0x1E3B34u;
        goto label_1e3b34;
    }
    ctx->pc = 0x1E3B2Cu;
    {
        const bool branch_taken_0x1e3b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b2c) {
            ctx->pc = 0x1E3B50u;
            goto label_1e3b50;
        }
    }
    ctx->pc = 0x1E3B34u;
label_1e3b34:
    // 0x1e3b34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3b38:
    // 0x1e3b38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3b3c:
    // 0x1e3b3c: 0xc44c0118  lwc1        $f12, 0x118($v0)
    ctx->pc = 0x1e3b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3b40:
    // 0x1e3b40: 0xc079048  jal         func_1E4120
label_1e3b44:
    if (ctx->pc == 0x1E3B44u) {
        ctx->pc = 0x1E3B44u;
            // 0x1e3b44: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E3B48u;
        goto label_1e3b48;
    }
    ctx->pc = 0x1E3B40u;
    SET_GPR_U32(ctx, 31, 0x1E3B48u);
    ctx->pc = 0x1E3B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B40u;
            // 0x1e3b44: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4120u;
    if (runtime->hasFunction(0x1E4120u)) {
        auto targetFn = runtime->lookupFunction(0x1E4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B48u; }
        if (ctx->pc != 0x1E3B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitC_Shot_0x1e4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B48u; }
        if (ctx->pc != 0x1E3B48u) { return; }
    }
    ctx->pc = 0x1E3B48u;
label_1e3b48:
    // 0x1e3b48: 0x100000cd  b           . + 4 + (0xCD << 2)
label_1e3b4c:
    if (ctx->pc == 0x1E3B4Cu) {
        ctx->pc = 0x1E3B50u;
        goto label_1e3b50;
    }
    ctx->pc = 0x1E3B48u;
    {
        const bool branch_taken_0x1e3b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b48) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3B50u;
label_1e3b50:
    // 0x1e3b50: 0x2841012c  slti        $at, $v0, 0x12C
    ctx->pc = 0x1e3b50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)300) ? 1 : 0);
label_1e3b54:
    // 0x1e3b54: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e3b58:
    if (ctx->pc == 0x1E3B58u) {
        ctx->pc = 0x1E3B5Cu;
        goto label_1e3b5c;
    }
    ctx->pc = 0x1E3B54u;
    {
        const bool branch_taken_0x1e3b54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3b54) {
            ctx->pc = 0x1E3BA8u;
            goto label_1e3ba8;
        }
    }
    ctx->pc = 0x1E3B5Cu;
label_1e3b5c:
    // 0x1e3b5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3b60:
    // 0x1e3b60: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3b64:
    // 0x1e3b64: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3b68:
    // 0x1e3b68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3b68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3b6c:
    // 0x1e3b6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3b6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3b70:
    // 0x1e3b70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e3b74:
    if (ctx->pc == 0x1E3B74u) {
        ctx->pc = 0x1E3B74u;
            // 0x1e3b74: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1E3B78u;
        goto label_1e3b78;
    }
    ctx->pc = 0x1E3B70u;
    {
        const bool branch_taken_0x1e3b70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B70u;
            // 0x1e3b74: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b70) {
            ctx->pc = 0x1E3B80u;
            goto label_1e3b80;
        }
    }
    ctx->pc = 0x1E3B78u;
label_1e3b78:
    // 0x1e3b78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3b78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3b7c:
    // 0x1e3b7c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e3b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3b80:
    // 0x1e3b80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3b84:
    // 0x1e3b84: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3b88:
    // 0x1e3b88: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3b8c:
    // 0x1e3b8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3b8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3b90:
    // 0x1e3b90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3b94:
    // 0x1e3b94: 0x450100ba  bc1t        . + 4 + (0xBA << 2)
label_1e3b98:
    if (ctx->pc == 0x1E3B98u) {
        ctx->pc = 0x1E3B98u;
            // 0x1e3b98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1E3B9Cu;
        goto label_1e3b9c;
    }
    ctx->pc = 0x1E3B94u;
    {
        const bool branch_taken_0x1e3b94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B94u;
            // 0x1e3b98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b94) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3B9Cu;
label_1e3b9c:
    // 0x1e3b9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3b9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3ba0:
    // 0x1e3ba0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_1e3ba4:
    if (ctx->pc == 0x1E3BA4u) {
        ctx->pc = 0x1E3BA4u;
            // 0x1e3ba4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3BA8u;
        goto label_1e3ba8;
    }
    ctx->pc = 0x1E3BA0u;
    {
        const bool branch_taken_0x1e3ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BA0u;
            // 0x1e3ba4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ba0) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3BA8u;
label_1e3ba8:
    // 0x1e3ba8: 0x2841012d  slti        $at, $v0, 0x12D
    ctx->pc = 0x1e3ba8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)301) ? 1 : 0);
label_1e3bac:
    // 0x1e3bac: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e3bb0:
    if (ctx->pc == 0x1E3BB0u) {
        ctx->pc = 0x1E3BB4u;
        goto label_1e3bb4;
    }
    ctx->pc = 0x1E3BACu;
    {
        const bool branch_taken_0x1e3bac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bac) {
            ctx->pc = 0x1E3BD0u;
            goto label_1e3bd0;
        }
    }
    ctx->pc = 0x1E3BB4u;
label_1e3bb4:
    // 0x1e3bb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3bb8:
    // 0x1e3bb8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3bbc:
    // 0x1e3bbc: 0xc44c0118  lwc1        $f12, 0x118($v0)
    ctx->pc = 0x1e3bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3bc0:
    // 0x1e3bc0: 0xc079048  jal         func_1E4120
label_1e3bc4:
    if (ctx->pc == 0x1E3BC4u) {
        ctx->pc = 0x1E3BC4u;
            // 0x1e3bc4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E3BC8u;
        goto label_1e3bc8;
    }
    ctx->pc = 0x1E3BC0u;
    SET_GPR_U32(ctx, 31, 0x1E3BC8u);
    ctx->pc = 0x1E3BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BC0u;
            // 0x1e3bc4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4120u;
    if (runtime->hasFunction(0x1E4120u)) {
        auto targetFn = runtime->lookupFunction(0x1E4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BC8u; }
        if (ctx->pc != 0x1E3BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitC_Shot_0x1e4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BC8u; }
        if (ctx->pc != 0x1E3BC8u) { return; }
    }
    ctx->pc = 0x1E3BC8u;
label_1e3bc8:
    // 0x1e3bc8: 0x100000ad  b           . + 4 + (0xAD << 2)
label_1e3bcc:
    if (ctx->pc == 0x1E3BCCu) {
        ctx->pc = 0x1E3BD0u;
        goto label_1e3bd0;
    }
    ctx->pc = 0x1E3BC8u;
    {
        const bool branch_taken_0x1e3bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bc8) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3BD0u;
label_1e3bd0:
    // 0x1e3bd0: 0x2841015e  slti        $at, $v0, 0x15E
    ctx->pc = 0x1e3bd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)350) ? 1 : 0);
label_1e3bd4:
    // 0x1e3bd4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e3bd8:
    if (ctx->pc == 0x1E3BD8u) {
        ctx->pc = 0x1E3BDCu;
        goto label_1e3bdc;
    }
    ctx->pc = 0x1E3BD4u;
    {
        const bool branch_taken_0x1e3bd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bd4) {
            ctx->pc = 0x1E3C28u;
            goto label_1e3c28;
        }
    }
    ctx->pc = 0x1E3BDCu;
label_1e3bdc:
    // 0x1e3bdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3be0:
    // 0x1e3be0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3be4:
    // 0x1e3be4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3be8:
    // 0x1e3be8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3be8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3bec:
    // 0x1e3bec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3bf0:
    // 0x1e3bf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e3bf4:
    if (ctx->pc == 0x1E3BF4u) {
        ctx->pc = 0x1E3BF4u;
            // 0x1e3bf4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1E3BF8u;
        goto label_1e3bf8;
    }
    ctx->pc = 0x1E3BF0u;
    {
        const bool branch_taken_0x1e3bf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BF0u;
            // 0x1e3bf4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bf0) {
            ctx->pc = 0x1E3C00u;
            goto label_1e3c00;
        }
    }
    ctx->pc = 0x1E3BF8u;
label_1e3bf8:
    // 0x1e3bf8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3bf8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3bfc:
    // 0x1e3bfc: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e3bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3c00:
    // 0x1e3c00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3c04:
    // 0x1e3c04: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c08:
    // 0x1e3c08: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c0c:
    // 0x1e3c0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3c0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3c10:
    // 0x1e3c10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3c14:
    // 0x1e3c14: 0x4501009a  bc1t        . + 4 + (0x9A << 2)
label_1e3c18:
    if (ctx->pc == 0x1E3C18u) {
        ctx->pc = 0x1E3C18u;
            // 0x1e3c18: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1E3C1Cu;
        goto label_1e3c1c;
    }
    ctx->pc = 0x1E3C14u;
    {
        const bool branch_taken_0x1e3c14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C14u;
            // 0x1e3c18: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c14) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3C1Cu;
label_1e3c1c:
    // 0x1e3c1c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3c1cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3c20:
    // 0x1e3c20: 0x10000097  b           . + 4 + (0x97 << 2)
label_1e3c24:
    if (ctx->pc == 0x1E3C24u) {
        ctx->pc = 0x1E3C24u;
            // 0x1e3c24: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3C28u;
        goto label_1e3c28;
    }
    ctx->pc = 0x1E3C20u;
    {
        const bool branch_taken_0x1e3c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C20u;
            // 0x1e3c24: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c20) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3C28u;
label_1e3c28:
    // 0x1e3c28: 0x2841015f  slti        $at, $v0, 0x15F
    ctx->pc = 0x1e3c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)351) ? 1 : 0);
label_1e3c2c:
    // 0x1e3c2c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_1e3c30:
    if (ctx->pc == 0x1E3C30u) {
        ctx->pc = 0x1E3C34u;
        goto label_1e3c34;
    }
    ctx->pc = 0x1E3C2Cu;
    {
        const bool branch_taken_0x1e3c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c2c) {
            ctx->pc = 0x1E3C50u;
            goto label_1e3c50;
        }
    }
    ctx->pc = 0x1E3C34u;
label_1e3c34:
    // 0x1e3c34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3c38:
    // 0x1e3c38: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3c3c:
    // 0x1e3c3c: 0xc44c0118  lwc1        $f12, 0x118($v0)
    ctx->pc = 0x1e3c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3c40:
    // 0x1e3c40: 0xc079048  jal         func_1E4120
label_1e3c44:
    if (ctx->pc == 0x1E3C44u) {
        ctx->pc = 0x1E3C44u;
            // 0x1e3c44: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E3C48u;
        goto label_1e3c48;
    }
    ctx->pc = 0x1E3C40u;
    SET_GPR_U32(ctx, 31, 0x1E3C48u);
    ctx->pc = 0x1E3C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C40u;
            // 0x1e3c44: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4120u;
    if (runtime->hasFunction(0x1E4120u)) {
        auto targetFn = runtime->lookupFunction(0x1E4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C48u; }
        if (ctx->pc != 0x1E3C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitC_Shot_0x1e4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C48u; }
        if (ctx->pc != 0x1E3C48u) { return; }
    }
    ctx->pc = 0x1E3C48u;
label_1e3c48:
    // 0x1e3c48: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1e3c4c:
    if (ctx->pc == 0x1E3C4Cu) {
        ctx->pc = 0x1E3C50u;
        goto label_1e3c50;
    }
    ctx->pc = 0x1E3C48u;
    {
        const bool branch_taken_0x1e3c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c48) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3C50u;
label_1e3c50:
    // 0x1e3c50: 0x2841018f  slti        $at, $v0, 0x18F
    ctx->pc = 0x1e3c50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)399) ? 1 : 0);
label_1e3c54:
    // 0x1e3c54: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e3c58:
    if (ctx->pc == 0x1E3C58u) {
        ctx->pc = 0x1E3C5Cu;
        goto label_1e3c5c;
    }
    ctx->pc = 0x1E3C54u;
    {
        const bool branch_taken_0x1e3c54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3c54) {
            ctx->pc = 0x1E3CA8u;
            goto label_1e3ca8;
        }
    }
    ctx->pc = 0x1E3C5Cu;
label_1e3c5c:
    // 0x1e3c5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3c60:
    // 0x1e3c60: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c64:
    // 0x1e3c64: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c68:
    // 0x1e3c68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3c68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3c6c:
    // 0x1e3c6c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e3c6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3c70:
    // 0x1e3c70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1e3c74:
    if (ctx->pc == 0x1E3C74u) {
        ctx->pc = 0x1E3C74u;
            // 0x1e3c74: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1E3C78u;
        goto label_1e3c78;
    }
    ctx->pc = 0x1E3C70u;
    {
        const bool branch_taken_0x1e3c70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C70u;
            // 0x1e3c74: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c70) {
            ctx->pc = 0x1E3C80u;
            goto label_1e3c80;
        }
    }
    ctx->pc = 0x1E3C78u;
label_1e3c78:
    // 0x1e3c78: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3c78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3c7c:
    // 0x1e3c7c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x1e3c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1e3c80:
    // 0x1e3c80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3c84:
    // 0x1e3c84: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1e3c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c88:
    // 0x1e3c88: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c8c:
    // 0x1e3c8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e3c8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e3c90:
    // 0x1e3c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3c94:
    // 0x1e3c94: 0x4501007a  bc1t        . + 4 + (0x7A << 2)
label_1e3c98:
    if (ctx->pc == 0x1E3C98u) {
        ctx->pc = 0x1E3C98u;
            // 0x1e3c98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->pc = 0x1E3C9Cu;
        goto label_1e3c9c;
    }
    ctx->pc = 0x1E3C94u;
    {
        const bool branch_taken_0x1e3c94 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C94u;
            // 0x1e3c98: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c94) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3C9Cu;
label_1e3c9c:
    // 0x1e3c9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3c9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e3ca0:
    // 0x1e3ca0: 0x10000077  b           . + 4 + (0x77 << 2)
label_1e3ca4:
    if (ctx->pc == 0x1E3CA4u) {
        ctx->pc = 0x1E3CA4u;
            // 0x1e3ca4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3CA8u;
        goto label_1e3ca8;
    }
    ctx->pc = 0x1E3CA0u;
    {
        const bool branch_taken_0x1e3ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CA0u;
            // 0x1e3ca4: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ca0) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3CA8u;
label_1e3ca8:
    // 0x1e3ca8: 0x28410190  slti        $at, $v0, 0x190
    ctx->pc = 0x1e3ca8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)400) ? 1 : 0);
label_1e3cac:
    // 0x1e3cac: 0x10200074  beqz        $at, . + 4 + (0x74 << 2)
label_1e3cb0:
    if (ctx->pc == 0x1E3CB0u) {
        ctx->pc = 0x1E3CB4u;
        goto label_1e3cb4;
    }
    ctx->pc = 0x1E3CACu;
    {
        const bool branch_taken_0x1e3cac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cac) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3CB4u;
label_1e3cb4:
    // 0x1e3cb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3cb8:
    // 0x1e3cb8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3cbc:
    // 0x1e3cbc: 0xc44c0118  lwc1        $f12, 0x118($v0)
    ctx->pc = 0x1e3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3cc0:
    // 0x1e3cc0: 0xc079048  jal         func_1E4120
label_1e3cc4:
    if (ctx->pc == 0x1E3CC4u) {
        ctx->pc = 0x1E3CC4u;
            // 0x1e3cc4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x1E3CC8u;
        goto label_1e3cc8;
    }
    ctx->pc = 0x1E3CC0u;
    SET_GPR_U32(ctx, 31, 0x1E3CC8u);
    ctx->pc = 0x1E3CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CC0u;
            // 0x1e3cc4: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4120u;
    if (runtime->hasFunction(0x1E4120u)) {
        auto targetFn = runtime->lookupFunction(0x1E4120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC8u; }
        if (ctx->pc != 0x1E3CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        En8_bitC_Shot_0x1e4120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CC8u; }
        if (ctx->pc != 0x1E3CC8u) { return; }
    }
    ctx->pc = 0x1E3CC8u;
label_1e3cc8:
    // 0x1e3cc8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_1e3ccc:
    if (ctx->pc == 0x1E3CCCu) {
        ctx->pc = 0x1E3CD0u;
        goto label_1e3cd0;
    }
    ctx->pc = 0x1E3CC8u;
    {
        const bool branch_taken_0x1e3cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cc8) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3CD0u;
label_1e3cd0:
    // 0x1e3cd0: 0xc065d00  jal         func_197400
label_1e3cd4:
    if (ctx->pc == 0x1E3CD4u) {
        ctx->pc = 0x1E3CD8u;
        goto label_1e3cd8;
    }
    ctx->pc = 0x1E3CD0u;
    SET_GPR_U32(ctx, 31, 0x1E3CD8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CD8u; }
        if (ctx->pc != 0x1E3CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3CD8u; }
        if (ctx->pc != 0x1E3CD8u) { return; }
    }
    ctx->pc = 0x1E3CD8u;
label_1e3cd8:
    // 0x1e3cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e3cdc:
    // 0x1e3cdc: 0x14430020  bne         $v0, $v1, . + 4 + (0x20 << 2)
label_1e3ce0:
    if (ctx->pc == 0x1E3CE0u) {
        ctx->pc = 0x1E3CE4u;
        goto label_1e3ce4;
    }
    ctx->pc = 0x1E3CDCu;
    {
        const bool branch_taken_0x1e3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3cdc) {
            ctx->pc = 0x1E3D60u;
            goto label_1e3d60;
        }
    }
    ctx->pc = 0x1E3CE4u;
label_1e3ce4:
    // 0x1e3ce4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3ce8:
    // 0x1e3ce8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e3cec:
    // 0x1e3cec: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e3cecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e3cf0:
    // 0x1e3cf0: 0x0  nop
    ctx->pc = 0x1e3cf0u;
    // NOP
label_1e3cf4:
    // 0x1e3cf4: 0x0  nop
    ctx->pc = 0x1e3cf4u;
    // NOP
label_1e3cf8:
    // 0x1e3cf8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3cf8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e3cfc:
    // 0x1e3cfc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1e3d00:
    if (ctx->pc == 0x1E3D00u) {
        ctx->pc = 0x1E3D04u;
        goto label_1e3d04;
    }
    ctx->pc = 0x1E3CFCu;
    {
        const bool branch_taken_0x1e3cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3cfc) {
            ctx->pc = 0x1E3D60u;
            goto label_1e3d60;
        }
    }
    ctx->pc = 0x1E3D04u;
label_1e3d04:
    // 0x1e3d04: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1e3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3d08:
    // 0x1e3d08: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e3d0c:
    // 0x1e3d0c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3d10:
    // 0x1e3d10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3d14:
    // 0x1e3d14: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3d18:
    // 0x1e3d18: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e3d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e3d1c:
    // 0x1e3d1c: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x1e3d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1e3d20:
    // 0x1e3d20: 0xc065480  jal         func_195200
label_1e3d24:
    if (ctx->pc == 0x1E3D24u) {
        ctx->pc = 0x1E3D24u;
            // 0x1e3d24: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E3D28u;
        goto label_1e3d28;
    }
    ctx->pc = 0x1E3D20u;
    SET_GPR_U32(ctx, 31, 0x1E3D28u);
    ctx->pc = 0x1E3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D20u;
            // 0x1e3d24: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D28u; }
        if (ctx->pc != 0x1E3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D28u; }
        if (ctx->pc != 0x1E3D28u) { return; }
    }
    ctx->pc = 0x1E3D28u;
label_1e3d28:
    // 0x1e3d28: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1e3d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3d2c:
    // 0x1e3d2c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e3d30:
    // 0x1e3d30: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3d34:
    // 0x1e3d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3d38:
    // 0x1e3d38: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3d3c:
    // 0x1e3d3c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1e3d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e3d40:
    // 0x1e3d40: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e3d44:
    // 0x1e3d44: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e3d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e3d48:
    // 0x1e3d48: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x1e3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1e3d4c:
    // 0x1e3d4c: 0xc065480  jal         func_195200
label_1e3d50:
    if (ctx->pc == 0x1E3D50u) {
        ctx->pc = 0x1E3D50u;
            // 0x1e3d50: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E3D54u;
        goto label_1e3d54;
    }
    ctx->pc = 0x1E3D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E3D54u);
    ctx->pc = 0x1E3D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D4Cu;
            // 0x1e3d50: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D54u; }
        if (ctx->pc != 0x1E3D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D54u; }
        if (ctx->pc != 0x1E3D54u) { return; }
    }
    ctx->pc = 0x1E3D54u;
label_1e3d54:
    // 0x1e3d54: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3d58:
    // 0x1e3d58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3d5c:
    // 0x1e3d5c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e3d60:
    // 0x1e3d60: 0xc065d00  jal         func_197400
label_1e3d64:
    if (ctx->pc == 0x1E3D64u) {
        ctx->pc = 0x1E3D68u;
        goto label_1e3d68;
    }
    ctx->pc = 0x1E3D60u;
    SET_GPR_U32(ctx, 31, 0x1E3D68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D68u; }
        if (ctx->pc != 0x1E3D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3D68u; }
        if (ctx->pc != 0x1E3D68u) { return; }
    }
    ctx->pc = 0x1E3D68u;
label_1e3d68:
    // 0x1e3d68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3d6c:
    // 0x1e3d6c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_1e3d70:
    if (ctx->pc == 0x1E3D70u) {
        ctx->pc = 0x1E3D74u;
        goto label_1e3d74;
    }
    ctx->pc = 0x1E3D6Cu;
    {
        const bool branch_taken_0x1e3d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e3d6c) {
            ctx->pc = 0x1E3DE8u;
            goto label_1e3de8;
        }
    }
    ctx->pc = 0x1E3D74u;
label_1e3d74:
    // 0x1e3d74: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e3d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3d78:
    // 0x1e3d78: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1e3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e3d7c:
    // 0x1e3d7c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e3d7cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e3d80:
    // 0x1e3d80: 0x0  nop
    ctx->pc = 0x1e3d80u;
    // NOP
label_1e3d84:
    // 0x1e3d84: 0x0  nop
    ctx->pc = 0x1e3d84u;
    // NOP
label_1e3d88:
    // 0x1e3d88: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3d88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e3d8c:
    // 0x1e3d8c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_1e3d90:
    if (ctx->pc == 0x1E3D90u) {
        ctx->pc = 0x1E3D90u;
            // 0x1e3d90: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x1E3D94u;
        goto label_1e3d94;
    }
    ctx->pc = 0x1E3D8Cu;
    {
        const bool branch_taken_0x1e3d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3D8Cu;
            // 0x1e3d90: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3d8c) {
            ctx->pc = 0x1E3DE8u;
            goto label_1e3de8;
        }
    }
    ctx->pc = 0x1E3D94u;
label_1e3d94:
    // 0x1e3d94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1e3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3d98:
    // 0x1e3d98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3d9c:
    // 0x1e3d9c: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3da0:
    // 0x1e3da0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3da4:
    // 0x1e3da4: 0x24650032  addiu       $a1, $v1, 0x32
    ctx->pc = 0x1e3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
label_1e3da8:
    // 0x1e3da8: 0xc065480  jal         func_195200
label_1e3dac:
    if (ctx->pc == 0x1E3DACu) {
        ctx->pc = 0x1E3DACu;
            // 0x1e3dac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E3DB0u;
        goto label_1e3db0;
    }
    ctx->pc = 0x1E3DA8u;
    SET_GPR_U32(ctx, 31, 0x1E3DB0u);
    ctx->pc = 0x1E3DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DA8u;
            // 0x1e3dac: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DB0u; }
        if (ctx->pc != 0x1E3DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DB0u; }
        if (ctx->pc != 0x1E3DB0u) { return; }
    }
    ctx->pc = 0x1E3DB0u;
label_1e3db0:
    // 0x1e3db0: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1e3db0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3db4:
    // 0x1e3db4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e3db8:
    // 0x1e3db8: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3dbc:
    // 0x1e3dbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3dbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3dc0:
    // 0x1e3dc0: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3dc4:
    // 0x1e3dc4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1e3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e3dc8:
    // 0x1e3dc8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1e3dcc:
    // 0x1e3dcc: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1e3dd0:
    // 0x1e3dd0: 0xc065480  jal         func_195200
label_1e3dd4:
    if (ctx->pc == 0x1E3DD4u) {
        ctx->pc = 0x1E3DD4u;
            // 0x1e3dd4: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E3DD8u;
        goto label_1e3dd8;
    }
    ctx->pc = 0x1E3DD0u;
    SET_GPR_U32(ctx, 31, 0x1E3DD8u);
    ctx->pc = 0x1E3DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DD0u;
            // 0x1e3dd4: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DD8u; }
        if (ctx->pc != 0x1E3DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DD8u; }
        if (ctx->pc != 0x1E3DD8u) { return; }
    }
    ctx->pc = 0x1E3DD8u;
label_1e3dd8:
    // 0x1e3dd8: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3ddc:
    // 0x1e3ddc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3de0:
    // 0x1e3de0: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3de0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e3de4:
    // 0x1e3de4: 0x0  nop
    ctx->pc = 0x1e3de4u;
    // NOP
label_1e3de8:
    // 0x1e3de8: 0xc065d00  jal         func_197400
label_1e3dec:
    if (ctx->pc == 0x1E3DECu) {
        ctx->pc = 0x1E3DF0u;
        goto label_1e3df0;
    }
    ctx->pc = 0x1E3DE8u;
    SET_GPR_U32(ctx, 31, 0x1E3DF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DF0u; }
        if (ctx->pc != 0x1E3DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DF0u; }
        if (ctx->pc != 0x1E3DF0u) { return; }
    }
    ctx->pc = 0x1E3DF0u;
label_1e3df0:
    // 0x1e3df0: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_1e3df4:
    if (ctx->pc == 0x1E3DF4u) {
        ctx->pc = 0x1E3DF8u;
        goto label_1e3df8;
    }
    ctx->pc = 0x1E3DF0u;
    {
        const bool branch_taken_0x1e3df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3df0) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3DF8u;
label_1e3df8:
    // 0x1e3df8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3dfc:
    // 0x1e3dfc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1e3e00:
    // 0x1e3e00: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e3e00u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e3e04:
    // 0x1e3e04: 0x0  nop
    ctx->pc = 0x1e3e04u;
    // NOP
label_1e3e08:
    // 0x1e3e08: 0x0  nop
    ctx->pc = 0x1e3e08u;
    // NOP
label_1e3e0c:
    // 0x1e3e0c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e3e0cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e3e10:
    // 0x1e3e10: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1e3e14:
    if (ctx->pc == 0x1E3E14u) {
        ctx->pc = 0x1E3E18u;
        goto label_1e3e18;
    }
    ctx->pc = 0x1E3E10u;
    {
        const bool branch_taken_0x1e3e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3e10) {
            ctx->pc = 0x1E3E80u;
            goto label_1e3e80;
        }
    }
    ctx->pc = 0x1E3E18u;
label_1e3e18:
    // 0x1e3e18: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1e3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3e1c:
    // 0x1e3e1c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e3e20:
    // 0x1e3e20: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3e24:
    // 0x1e3e24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3e24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3e28:
    // 0x1e3e28: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3e2c:
    // 0x1e3e2c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e3e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e3e30:
    // 0x1e3e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e3e34:
    // 0x1e3e34: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x1e3e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1e3e38:
    // 0x1e3e38: 0xc065480  jal         func_195200
label_1e3e3c:
    if (ctx->pc == 0x1E3E3Cu) {
        ctx->pc = 0x1E3E3Cu;
            // 0x1e3e3c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1E3E40u;
        goto label_1e3e40;
    }
    ctx->pc = 0x1E3E38u;
    SET_GPR_U32(ctx, 31, 0x1E3E40u);
    ctx->pc = 0x1E3E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E38u;
            // 0x1e3e3c: 0x23040  sll         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E40u; }
        if (ctx->pc != 0x1E3E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E40u; }
        if (ctx->pc != 0x1E3E40u) { return; }
    }
    ctx->pc = 0x1E3E40u;
label_1e3e40:
    // 0x1e3e40: 0x8e06010c  lw          $a2, 0x10C($s0)
    ctx->pc = 0x1e3e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3e44:
    // 0x1e3e44: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e3e48:
    // 0x1e3e48: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1e3e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3e4c:
    // 0x1e3e4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e3e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e3e50:
    // 0x1e3e50: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3e54:
    // 0x1e3e54: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1e3e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e3e58:
    // 0x1e3e58: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1e3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_1e3e5c:
    // 0x1e3e5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1e3e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1e3e60:
    // 0x1e3e60: 0x24a50032  addiu       $a1, $a1, 0x32
    ctx->pc = 0x1e3e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
label_1e3e64:
    // 0x1e3e64: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1e3e68:
    // 0x1e3e68: 0xc065480  jal         func_195200
label_1e3e6c:
    if (ctx->pc == 0x1E3E6Cu) {
        ctx->pc = 0x1E3E6Cu;
            // 0x1e3e6c: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E3E70u;
        goto label_1e3e70;
    }
    ctx->pc = 0x1E3E68u;
    SET_GPR_U32(ctx, 31, 0x1E3E70u);
    ctx->pc = 0x1E3E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E68u;
            // 0x1e3e6c: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E70u; }
        if (ctx->pc != 0x1E3E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E70u; }
        if (ctx->pc != 0x1E3E70u) { return; }
    }
    ctx->pc = 0x1E3E70u;
label_1e3e70:
    // 0x1e3e70: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1e3e74:
    // 0x1e3e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3e78:
    // 0x1e3e78: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1e3e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1e3e7c:
    // 0x1e3e7c: 0x0  nop
    ctx->pc = 0x1e3e7cu;
    // NOP
label_1e3e80:
    // 0x1e3e80: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3e84:
    // 0x1e3e84: 0x28410191  slti        $at, $v0, 0x191
    ctx->pc = 0x1e3e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)401) ? 1 : 0);
label_1e3e88:
    // 0x1e3e88: 0x1420000b  bnez        $at, . + 4 + (0xB << 2)
label_1e3e8c:
    if (ctx->pc == 0x1E3E8Cu) {
        ctx->pc = 0x1E3E8Cu;
            // 0x1e3e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1E3E90u;
        goto label_1e3e90;
    }
    ctx->pc = 0x1E3E88u;
    {
        const bool branch_taken_0x1e3e88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E88u;
            // 0x1e3e8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e88) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E3E90u;
label_1e3e90:
    // 0x1e3e90: 0x10000009  b           . + 4 + (0x9 << 2)
label_1e3e94:
    if (ctx->pc == 0x1E3E94u) {
        ctx->pc = 0x1E3E94u;
            // 0x1e3e94: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3E98u;
        goto label_1e3e98;
    }
    ctx->pc = 0x1E3E90u;
    {
        const bool branch_taken_0x1e3e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E90u;
            // 0x1e3e94: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e90) {
            ctx->pc = 0x1E3EB8u;
            goto label_1e3eb8;
        }
    }
    ctx->pc = 0x1E3E98u;
label_1e3e98:
    // 0x1e3e98: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1e3e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1e3e9c:
    // 0x1e3e9c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3ea0:
    // 0x1e3ea0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1e3ea0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
label_1e3ea4:
    // 0x1e3ea4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3ea8:
    // 0x1e3ea8: 0x0  nop
    ctx->pc = 0x1e3ea8u;
    // NOP
label_1e3eac:
    // 0x1e3eac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e3eacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e3eb0:
    // 0x1e3eb0: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e3eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_1e3eb4:
    // 0x1e3eb4: 0x0  nop
    ctx->pc = 0x1e3eb4u;
    // NOP
label_1e3eb8:
    // 0x1e3eb8: 0xc04b788  jal         func_12DE20
label_1e3ebc:
    if (ctx->pc == 0x1E3EBCu) {
        ctx->pc = 0x1E3EBCu;
            // 0x1e3ebc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E3EC0u;
        goto label_1e3ec0;
    }
    ctx->pc = 0x1E3EB8u;
    SET_GPR_U32(ctx, 31, 0x1E3EC0u);
    ctx->pc = 0x1E3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EB8u;
            // 0x1e3ebc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EC0u; }
        if (ctx->pc != 0x1E3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EC0u; }
        if (ctx->pc != 0x1E3EC0u) { return; }
    }
    ctx->pc = 0x1E3EC0u;
label_1e3ec0:
    // 0x1e3ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ec4:
    // 0x1e3ec4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e3ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ec8:
    // 0x1e3ec8: 0xc04b7da  jal         func_12DF68
label_1e3ecc:
    if (ctx->pc == 0x1E3ECCu) {
        ctx->pc = 0x1E3ECCu;
            // 0x1e3ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3ED0u;
        goto label_1e3ed0;
    }
    ctx->pc = 0x1E3EC8u;
    SET_GPR_U32(ctx, 31, 0x1E3ED0u);
    ctx->pc = 0x1E3ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EC8u;
            // 0x1e3ecc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3ED0u; }
        if (ctx->pc != 0x1E3ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3ED0u; }
        if (ctx->pc != 0x1E3ED0u) { return; }
    }
    ctx->pc = 0x1E3ED0u;
label_1e3ed0:
    // 0x1e3ed0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e3ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ed4:
    // 0x1e3ed4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e3ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ed8:
    // 0x1e3ed8: 0xc04b804  jal         func_12E010
label_1e3edc:
    if (ctx->pc == 0x1E3EDCu) {
        ctx->pc = 0x1E3EDCu;
            // 0x1e3edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EE0u;
        goto label_1e3ee0;
    }
    ctx->pc = 0x1E3ED8u;
    SET_GPR_U32(ctx, 31, 0x1E3EE0u);
    ctx->pc = 0x1E3EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ED8u;
            // 0x1e3edc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EE0u; }
        if (ctx->pc != 0x1E3EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EE0u; }
        if (ctx->pc != 0x1E3EE0u) { return; }
    }
    ctx->pc = 0x1E3EE0u;
label_1e3ee0:
    // 0x1e3ee0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ee4:
    // 0x1e3ee4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e3ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3ee8:
    // 0x1e3ee8: 0xc04b7b0  jal         func_12DEC0
label_1e3eec:
    if (ctx->pc == 0x1E3EECu) {
        ctx->pc = 0x1E3EECu;
            // 0x1e3eec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3EF0u;
        goto label_1e3ef0;
    }
    ctx->pc = 0x1E3EE8u;
    SET_GPR_U32(ctx, 31, 0x1E3EF0u);
    ctx->pc = 0x1E3EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EE8u;
            // 0x1e3eec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EF0u; }
        if (ctx->pc != 0x1E3EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EF0u; }
        if (ctx->pc != 0x1E3EF0u) { return; }
    }
    ctx->pc = 0x1E3EF0u;
label_1e3ef0:
    // 0x1e3ef0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ef4:
    // 0x1e3ef4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e3ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ef8:
    // 0x1e3ef8: 0xc04b75e  jal         func_12DD78
label_1e3efc:
    if (ctx->pc == 0x1E3EFCu) {
        ctx->pc = 0x1E3EFCu;
            // 0x1e3efc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E3F00u;
        goto label_1e3f00;
    }
    ctx->pc = 0x1E3EF8u;
    SET_GPR_U32(ctx, 31, 0x1E3F00u);
    ctx->pc = 0x1E3EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EF8u;
            // 0x1e3efc: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F00u; }
        if (ctx->pc != 0x1E3F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F00u; }
        if (ctx->pc != 0x1E3F00u) { return; }
    }
    ctx->pc = 0x1E3F00u;
label_1e3f00:
    // 0x1e3f00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e3f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3f04:
    // 0x1e3f04: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e3f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1e3f08:
    // 0x1e3f08: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e3f08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e3f0c:
    // 0x1e3f0c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e3f10:
    if (ctx->pc == 0x1E3F10u) {
        ctx->pc = 0x1E3F14u;
        goto label_1e3f14;
    }
    ctx->pc = 0x1E3F0Cu;
    {
        const bool branch_taken_0x1e3f0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f0c) {
            ctx->pc = 0x1E3F60u;
            goto label_1e3f60;
        }
    }
    ctx->pc = 0x1E3F14u;
label_1e3f14:
    // 0x1e3f14: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e3f18:
    // 0x1e3f18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e3f1c:
    if (ctx->pc == 0x1E3F1Cu) {
        ctx->pc = 0x1E3F20u;
        goto label_1e3f20;
    }
    ctx->pc = 0x1E3F18u;
    {
        const bool branch_taken_0x1e3f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f18) {
            ctx->pc = 0x1E3F30u;
            goto label_1e3f30;
        }
    }
    ctx->pc = 0x1E3F20u;
label_1e3f20:
    // 0x1e3f20: 0xc0604f0  jal         func_1813C0
label_1e3f24:
    if (ctx->pc == 0x1E3F24u) {
        ctx->pc = 0x1E3F24u;
            // 0x1e3f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E3F28u;
        goto label_1e3f28;
    }
    ctx->pc = 0x1E3F20u;
    SET_GPR_U32(ctx, 31, 0x1E3F28u);
    ctx->pc = 0x1E3F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F20u;
            // 0x1e3f24: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F28u; }
        if (ctx->pc != 0x1E3F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F28u; }
        if (ctx->pc != 0x1E3F28u) { return; }
    }
    ctx->pc = 0x1E3F28u;
label_1e3f28:
    // 0x1e3f28: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e3f2c:
    if (ctx->pc == 0x1E3F2Cu) {
        ctx->pc = 0x1E3F30u;
        goto label_1e3f30;
    }
    ctx->pc = 0x1E3F28u;
    {
        const bool branch_taken_0x1e3f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f28) {
            ctx->pc = 0x1E3F38u;
            goto label_1e3f38;
        }
    }
    ctx->pc = 0x1E3F30u;
label_1e3f30:
    // 0x1e3f30: 0xc0604dc  jal         func_181370
label_1e3f34:
    if (ctx->pc == 0x1E3F34u) {
        ctx->pc = 0x1E3F34u;
            // 0x1e3f34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E3F38u;
        goto label_1e3f38;
    }
    ctx->pc = 0x1E3F30u;
    SET_GPR_U32(ctx, 31, 0x1E3F38u);
    ctx->pc = 0x1E3F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F30u;
            // 0x1e3f34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F38u; }
        if (ctx->pc != 0x1E3F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F38u; }
        if (ctx->pc != 0x1E3F38u) { return; }
    }
    ctx->pc = 0x1E3F38u;
label_1e3f38:
    // 0x1e3f38: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e3f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1e3f3c:
    // 0x1e3f3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e3f40:
    if (ctx->pc == 0x1E3F40u) {
        ctx->pc = 0x1E3F44u;
        goto label_1e3f44;
    }
    ctx->pc = 0x1E3F3Cu;
    {
        const bool branch_taken_0x1e3f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3f3c) {
            ctx->pc = 0x1E3F50u;
            goto label_1e3f50;
        }
    }
    ctx->pc = 0x1E3F44u;
label_1e3f44:
    // 0x1e3f44: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e3f48:
    if (ctx->pc == 0x1E3F48u) {
        ctx->pc = 0x1E3F48u;
            // 0x1e3f48: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1E3F4Cu;
        goto label_1e3f4c;
    }
    ctx->pc = 0x1E3F44u;
    {
        const bool branch_taken_0x1e3f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F44u;
            // 0x1e3f48: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f44) {
            ctx->pc = 0x1E3F70u;
            goto label_1e3f70;
        }
    }
    ctx->pc = 0x1E3F4Cu;
label_1e3f4c:
    // 0x1e3f4c: 0x0  nop
    ctx->pc = 0x1e3f4cu;
    // NOP
label_1e3f50:
    // 0x1e3f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3f54:
    // 0x1e3f54: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e3f58:
    if (ctx->pc == 0x1E3F58u) {
        ctx->pc = 0x1E3F58u;
            // 0x1e3f58: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3F5Cu;
        goto label_1e3f5c;
    }
    ctx->pc = 0x1E3F54u;
    {
        const bool branch_taken_0x1e3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F54u;
            // 0x1e3f58: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f54) {
            ctx->pc = 0x1E3F70u;
            goto label_1e3f70;
        }
    }
    ctx->pc = 0x1E3F5Cu;
label_1e3f5c:
    // 0x1e3f5c: 0x0  nop
    ctx->pc = 0x1e3f5cu;
    // NOP
label_1e3f60:
    // 0x1e3f60: 0xc0604dc  jal         func_181370
label_1e3f64:
    if (ctx->pc == 0x1E3F64u) {
        ctx->pc = 0x1E3F64u;
            // 0x1e3f64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1E3F68u;
        goto label_1e3f68;
    }
    ctx->pc = 0x1E3F60u;
    SET_GPR_U32(ctx, 31, 0x1E3F68u);
    ctx->pc = 0x1E3F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F60u;
            // 0x1e3f64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F68u; }
        if (ctx->pc != 0x1E3F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F68u; }
        if (ctx->pc != 0x1E3F68u) { return; }
    }
    ctx->pc = 0x1E3F68u;
label_1e3f68:
    // 0x1e3f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e3f6c:
    // 0x1e3f6c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1e3f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1e3f70:
    // 0x1e3f70: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e3f74:
    // 0x1e3f74: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e3f78:
    // 0x1e3f78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e3f78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e3f7c:
    // 0x1e3f7c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e3f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1e3f80:
    // 0x1e3f80: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3f84:
    // 0x1e3f84: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e3f88:
    // 0x1e3f88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3f8c:
    // 0x1e3f8c: 0x0  nop
    ctx->pc = 0x1e3f8cu;
    // NOP
label_1e3f90:
    // 0x1e3f90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3f94:
    // 0x1e3f94: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1e3f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1e3f98:
    // 0x1e3f98: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3f9c:
    // 0x1e3f9c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e3fa0:
    // 0x1e3fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3fa4:
    // 0x1e3fa4: 0x0  nop
    ctx->pc = 0x1e3fa4u;
    // NOP
label_1e3fa8:
    // 0x1e3fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3fac:
    // 0x1e3fac: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1e3facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1e3fb0:
    // 0x1e3fb0: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1e3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_1e3fb4:
    // 0x1e3fb4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e3fb8:
    // 0x1e3fb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3fbc:
    // 0x1e3fbc: 0x0  nop
    ctx->pc = 0x1e3fbcu;
    // NOP
label_1e3fc0:
    // 0x1e3fc0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3fc4:
    // 0x1e3fc4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1e3fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1e3fc8:
    // 0x1e3fc8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1e3fcc:
    // 0x1e3fcc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e3fd0:
    // 0x1e3fd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3fd4:
    // 0x1e3fd4: 0x0  nop
    ctx->pc = 0x1e3fd4u;
    // NOP
label_1e3fd8:
    // 0x1e3fd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e3fd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e3fdc:
    // 0x1e3fdc: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1e3fdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1e3fe0:
    // 0x1e3fe0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e3fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1e3fe4:
    // 0x1e3fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e3fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e3fe8:
    // 0x1e3fe8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1e3fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1e3fec:
    // 0x1e3fec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e3ff0:
    // 0x1e3ff0: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e3ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3ff4:
    // 0x1e3ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3ff8:
    // 0x1e3ff8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e3ffc:
    if (ctx->pc == 0x1E3FFCu) {
        ctx->pc = 0x1E3FFCu;
            // 0x1e3ffc: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1E4000u;
        goto label_1e4000;
    }
    ctx->pc = 0x1E3FF8u;
    {
        const bool branch_taken_0x1e3ff8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FF8u;
            // 0x1e3ffc: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ff8) {
            ctx->pc = 0x1E4018u;
            goto label_1e4018;
        }
    }
    ctx->pc = 0x1E4000u;
label_1e4000:
    // 0x1e4000: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4000u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e4004:
    // 0x1e4004: 0x0  nop
    ctx->pc = 0x1e4004u;
    // NOP
label_1e4008:
    // 0x1e4008: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e4008u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e400c:
    // 0x1e400c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e4010:
    if (ctx->pc == 0x1E4010u) {
        ctx->pc = 0x1E4014u;
        goto label_1e4014;
    }
    ctx->pc = 0x1E400Cu;
    {
        const bool branch_taken_0x1e400c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e400c) {
            ctx->pc = 0x1E4030u;
            goto label_1e4030;
        }
    }
    ctx->pc = 0x1E4014u;
label_1e4014:
    // 0x1e4014: 0x0  nop
    ctx->pc = 0x1e4014u;
    // NOP
label_1e4018:
    // 0x1e4018: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e4018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e401c:
    // 0x1e401c: 0x40f809  jalr        $v0
label_1e4020:
    if (ctx->pc == 0x1E4020u) {
        ctx->pc = 0x1E4020u;
            // 0x1e4020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4024u;
        goto label_1e4024;
    }
    ctx->pc = 0x1E401Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4024u);
        ctx->pc = 0x1E4020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E401Cu;
            // 0x1e4020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E36B0u: goto label_1e36b0;
            case 0x1E36B4u: goto label_1e36b4;
            case 0x1E36B8u: goto label_1e36b8;
            case 0x1E36BCu: goto label_1e36bc;
            case 0x1E36C0u: goto label_1e36c0;
            case 0x1E36C4u: goto label_1e36c4;
            case 0x1E36C8u: goto label_1e36c8;
            case 0x1E36CCu: goto label_1e36cc;
            case 0x1E36D0u: goto label_1e36d0;
            case 0x1E36D4u: goto label_1e36d4;
            case 0x1E36D8u: goto label_1e36d8;
            case 0x1E36DCu: goto label_1e36dc;
            case 0x1E36E0u: goto label_1e36e0;
            case 0x1E36E4u: goto label_1e36e4;
            case 0x1E36E8u: goto label_1e36e8;
            case 0x1E36ECu: goto label_1e36ec;
            case 0x1E36F0u: goto label_1e36f0;
            case 0x1E36F4u: goto label_1e36f4;
            case 0x1E36F8u: goto label_1e36f8;
            case 0x1E36FCu: goto label_1e36fc;
            case 0x1E3700u: goto label_1e3700;
            case 0x1E3704u: goto label_1e3704;
            case 0x1E3708u: goto label_1e3708;
            case 0x1E370Cu: goto label_1e370c;
            case 0x1E3710u: goto label_1e3710;
            case 0x1E3714u: goto label_1e3714;
            case 0x1E3718u: goto label_1e3718;
            case 0x1E371Cu: goto label_1e371c;
            case 0x1E3720u: goto label_1e3720;
            case 0x1E3724u: goto label_1e3724;
            case 0x1E3728u: goto label_1e3728;
            case 0x1E372Cu: goto label_1e372c;
            case 0x1E3730u: goto label_1e3730;
            case 0x1E3734u: goto label_1e3734;
            case 0x1E3738u: goto label_1e3738;
            case 0x1E373Cu: goto label_1e373c;
            case 0x1E3740u: goto label_1e3740;
            case 0x1E3744u: goto label_1e3744;
            case 0x1E3748u: goto label_1e3748;
            case 0x1E374Cu: goto label_1e374c;
            case 0x1E3750u: goto label_1e3750;
            case 0x1E3754u: goto label_1e3754;
            case 0x1E3758u: goto label_1e3758;
            case 0x1E375Cu: goto label_1e375c;
            case 0x1E3760u: goto label_1e3760;
            case 0x1E3764u: goto label_1e3764;
            case 0x1E3768u: goto label_1e3768;
            case 0x1E376Cu: goto label_1e376c;
            case 0x1E3770u: goto label_1e3770;
            case 0x1E3774u: goto label_1e3774;
            case 0x1E3778u: goto label_1e3778;
            case 0x1E377Cu: goto label_1e377c;
            case 0x1E3780u: goto label_1e3780;
            case 0x1E3784u: goto label_1e3784;
            case 0x1E3788u: goto label_1e3788;
            case 0x1E378Cu: goto label_1e378c;
            case 0x1E3790u: goto label_1e3790;
            case 0x1E3794u: goto label_1e3794;
            case 0x1E3798u: goto label_1e3798;
            case 0x1E379Cu: goto label_1e379c;
            case 0x1E37A0u: goto label_1e37a0;
            case 0x1E37A4u: goto label_1e37a4;
            case 0x1E37A8u: goto label_1e37a8;
            case 0x1E37ACu: goto label_1e37ac;
            case 0x1E37B0u: goto label_1e37b0;
            case 0x1E37B4u: goto label_1e37b4;
            case 0x1E37B8u: goto label_1e37b8;
            case 0x1E37BCu: goto label_1e37bc;
            case 0x1E37C0u: goto label_1e37c0;
            case 0x1E37C4u: goto label_1e37c4;
            case 0x1E37C8u: goto label_1e37c8;
            case 0x1E37CCu: goto label_1e37cc;
            case 0x1E37D0u: goto label_1e37d0;
            case 0x1E37D4u: goto label_1e37d4;
            case 0x1E37D8u: goto label_1e37d8;
            case 0x1E37DCu: goto label_1e37dc;
            case 0x1E37E0u: goto label_1e37e0;
            case 0x1E37E4u: goto label_1e37e4;
            case 0x1E37E8u: goto label_1e37e8;
            case 0x1E37ECu: goto label_1e37ec;
            case 0x1E37F0u: goto label_1e37f0;
            case 0x1E37F4u: goto label_1e37f4;
            case 0x1E37F8u: goto label_1e37f8;
            case 0x1E37FCu: goto label_1e37fc;
            case 0x1E3800u: goto label_1e3800;
            case 0x1E3804u: goto label_1e3804;
            case 0x1E3808u: goto label_1e3808;
            case 0x1E380Cu: goto label_1e380c;
            case 0x1E3810u: goto label_1e3810;
            case 0x1E3814u: goto label_1e3814;
            case 0x1E3818u: goto label_1e3818;
            case 0x1E381Cu: goto label_1e381c;
            case 0x1E3820u: goto label_1e3820;
            case 0x1E3824u: goto label_1e3824;
            case 0x1E3828u: goto label_1e3828;
            case 0x1E382Cu: goto label_1e382c;
            case 0x1E3830u: goto label_1e3830;
            case 0x1E3834u: goto label_1e3834;
            case 0x1E3838u: goto label_1e3838;
            case 0x1E383Cu: goto label_1e383c;
            case 0x1E3840u: goto label_1e3840;
            case 0x1E3844u: goto label_1e3844;
            case 0x1E3848u: goto label_1e3848;
            case 0x1E384Cu: goto label_1e384c;
            case 0x1E3850u: goto label_1e3850;
            case 0x1E3854u: goto label_1e3854;
            case 0x1E3858u: goto label_1e3858;
            case 0x1E385Cu: goto label_1e385c;
            case 0x1E3860u: goto label_1e3860;
            case 0x1E3864u: goto label_1e3864;
            case 0x1E3868u: goto label_1e3868;
            case 0x1E386Cu: goto label_1e386c;
            case 0x1E3870u: goto label_1e3870;
            case 0x1E3874u: goto label_1e3874;
            case 0x1E3878u: goto label_1e3878;
            case 0x1E387Cu: goto label_1e387c;
            case 0x1E3880u: goto label_1e3880;
            case 0x1E3884u: goto label_1e3884;
            case 0x1E3888u: goto label_1e3888;
            case 0x1E388Cu: goto label_1e388c;
            case 0x1E3890u: goto label_1e3890;
            case 0x1E3894u: goto label_1e3894;
            case 0x1E3898u: goto label_1e3898;
            case 0x1E389Cu: goto label_1e389c;
            case 0x1E38A0u: goto label_1e38a0;
            case 0x1E38A4u: goto label_1e38a4;
            case 0x1E38A8u: goto label_1e38a8;
            case 0x1E38ACu: goto label_1e38ac;
            case 0x1E38B0u: goto label_1e38b0;
            case 0x1E38B4u: goto label_1e38b4;
            case 0x1E38B8u: goto label_1e38b8;
            case 0x1E38BCu: goto label_1e38bc;
            case 0x1E38C0u: goto label_1e38c0;
            case 0x1E38C4u: goto label_1e38c4;
            case 0x1E38C8u: goto label_1e38c8;
            case 0x1E38CCu: goto label_1e38cc;
            case 0x1E38D0u: goto label_1e38d0;
            case 0x1E38D4u: goto label_1e38d4;
            case 0x1E38D8u: goto label_1e38d8;
            case 0x1E38DCu: goto label_1e38dc;
            case 0x1E38E0u: goto label_1e38e0;
            case 0x1E38E4u: goto label_1e38e4;
            case 0x1E38E8u: goto label_1e38e8;
            case 0x1E38ECu: goto label_1e38ec;
            case 0x1E38F0u: goto label_1e38f0;
            case 0x1E38F4u: goto label_1e38f4;
            case 0x1E38F8u: goto label_1e38f8;
            case 0x1E38FCu: goto label_1e38fc;
            case 0x1E3900u: goto label_1e3900;
            case 0x1E3904u: goto label_1e3904;
            case 0x1E3908u: goto label_1e3908;
            case 0x1E390Cu: goto label_1e390c;
            case 0x1E3910u: goto label_1e3910;
            case 0x1E3914u: goto label_1e3914;
            case 0x1E3918u: goto label_1e3918;
            case 0x1E391Cu: goto label_1e391c;
            case 0x1E3920u: goto label_1e3920;
            case 0x1E3924u: goto label_1e3924;
            case 0x1E3928u: goto label_1e3928;
            case 0x1E392Cu: goto label_1e392c;
            case 0x1E3930u: goto label_1e3930;
            case 0x1E3934u: goto label_1e3934;
            case 0x1E3938u: goto label_1e3938;
            case 0x1E393Cu: goto label_1e393c;
            case 0x1E3940u: goto label_1e3940;
            case 0x1E3944u: goto label_1e3944;
            case 0x1E3948u: goto label_1e3948;
            case 0x1E394Cu: goto label_1e394c;
            case 0x1E3950u: goto label_1e3950;
            case 0x1E3954u: goto label_1e3954;
            case 0x1E3958u: goto label_1e3958;
            case 0x1E395Cu: goto label_1e395c;
            case 0x1E3960u: goto label_1e3960;
            case 0x1E3964u: goto label_1e3964;
            case 0x1E3968u: goto label_1e3968;
            case 0x1E396Cu: goto label_1e396c;
            case 0x1E3970u: goto label_1e3970;
            case 0x1E3974u: goto label_1e3974;
            case 0x1E3978u: goto label_1e3978;
            case 0x1E397Cu: goto label_1e397c;
            case 0x1E3980u: goto label_1e3980;
            case 0x1E3984u: goto label_1e3984;
            case 0x1E3988u: goto label_1e3988;
            case 0x1E398Cu: goto label_1e398c;
            case 0x1E3990u: goto label_1e3990;
            case 0x1E3994u: goto label_1e3994;
            case 0x1E3998u: goto label_1e3998;
            case 0x1E399Cu: goto label_1e399c;
            case 0x1E39A0u: goto label_1e39a0;
            case 0x1E39A4u: goto label_1e39a4;
            case 0x1E39A8u: goto label_1e39a8;
            case 0x1E39ACu: goto label_1e39ac;
            case 0x1E39B0u: goto label_1e39b0;
            case 0x1E39B4u: goto label_1e39b4;
            case 0x1E39B8u: goto label_1e39b8;
            case 0x1E39BCu: goto label_1e39bc;
            case 0x1E39C0u: goto label_1e39c0;
            case 0x1E39C4u: goto label_1e39c4;
            case 0x1E39C8u: goto label_1e39c8;
            case 0x1E39CCu: goto label_1e39cc;
            case 0x1E39D0u: goto label_1e39d0;
            case 0x1E39D4u: goto label_1e39d4;
            case 0x1E39D8u: goto label_1e39d8;
            case 0x1E39DCu: goto label_1e39dc;
            case 0x1E39E0u: goto label_1e39e0;
            case 0x1E39E4u: goto label_1e39e4;
            case 0x1E39E8u: goto label_1e39e8;
            case 0x1E39ECu: goto label_1e39ec;
            case 0x1E39F0u: goto label_1e39f0;
            case 0x1E39F4u: goto label_1e39f4;
            case 0x1E39F8u: goto label_1e39f8;
            case 0x1E39FCu: goto label_1e39fc;
            case 0x1E3A00u: goto label_1e3a00;
            case 0x1E3A04u: goto label_1e3a04;
            case 0x1E3A08u: goto label_1e3a08;
            case 0x1E3A0Cu: goto label_1e3a0c;
            case 0x1E3A10u: goto label_1e3a10;
            case 0x1E3A14u: goto label_1e3a14;
            case 0x1E3A18u: goto label_1e3a18;
            case 0x1E3A1Cu: goto label_1e3a1c;
            case 0x1E3A20u: goto label_1e3a20;
            case 0x1E3A24u: goto label_1e3a24;
            case 0x1E3A28u: goto label_1e3a28;
            case 0x1E3A2Cu: goto label_1e3a2c;
            case 0x1E3A30u: goto label_1e3a30;
            case 0x1E3A34u: goto label_1e3a34;
            case 0x1E3A38u: goto label_1e3a38;
            case 0x1E3A3Cu: goto label_1e3a3c;
            case 0x1E3A40u: goto label_1e3a40;
            case 0x1E3A44u: goto label_1e3a44;
            case 0x1E3A48u: goto label_1e3a48;
            case 0x1E3A4Cu: goto label_1e3a4c;
            case 0x1E3A50u: goto label_1e3a50;
            case 0x1E3A54u: goto label_1e3a54;
            case 0x1E3A58u: goto label_1e3a58;
            case 0x1E3A5Cu: goto label_1e3a5c;
            case 0x1E3A60u: goto label_1e3a60;
            case 0x1E3A64u: goto label_1e3a64;
            case 0x1E3A68u: goto label_1e3a68;
            case 0x1E3A6Cu: goto label_1e3a6c;
            case 0x1E3A70u: goto label_1e3a70;
            case 0x1E3A74u: goto label_1e3a74;
            case 0x1E3A78u: goto label_1e3a78;
            case 0x1E3A7Cu: goto label_1e3a7c;
            case 0x1E3A80u: goto label_1e3a80;
            case 0x1E3A84u: goto label_1e3a84;
            case 0x1E3A88u: goto label_1e3a88;
            case 0x1E3A8Cu: goto label_1e3a8c;
            case 0x1E3A90u: goto label_1e3a90;
            case 0x1E3A94u: goto label_1e3a94;
            case 0x1E3A98u: goto label_1e3a98;
            case 0x1E3A9Cu: goto label_1e3a9c;
            case 0x1E3AA0u: goto label_1e3aa0;
            case 0x1E3AA4u: goto label_1e3aa4;
            case 0x1E3AA8u: goto label_1e3aa8;
            case 0x1E3AACu: goto label_1e3aac;
            case 0x1E3AB0u: goto label_1e3ab0;
            case 0x1E3AB4u: goto label_1e3ab4;
            case 0x1E3AB8u: goto label_1e3ab8;
            case 0x1E3ABCu: goto label_1e3abc;
            case 0x1E3AC0u: goto label_1e3ac0;
            case 0x1E3AC4u: goto label_1e3ac4;
            case 0x1E3AC8u: goto label_1e3ac8;
            case 0x1E3ACCu: goto label_1e3acc;
            case 0x1E3AD0u: goto label_1e3ad0;
            case 0x1E3AD4u: goto label_1e3ad4;
            case 0x1E3AD8u: goto label_1e3ad8;
            case 0x1E3ADCu: goto label_1e3adc;
            case 0x1E3AE0u: goto label_1e3ae0;
            case 0x1E3AE4u: goto label_1e3ae4;
            case 0x1E3AE8u: goto label_1e3ae8;
            case 0x1E3AECu: goto label_1e3aec;
            case 0x1E3AF0u: goto label_1e3af0;
            case 0x1E3AF4u: goto label_1e3af4;
            case 0x1E3AF8u: goto label_1e3af8;
            case 0x1E3AFCu: goto label_1e3afc;
            case 0x1E3B00u: goto label_1e3b00;
            case 0x1E3B04u: goto label_1e3b04;
            case 0x1E3B08u: goto label_1e3b08;
            case 0x1E3B0Cu: goto label_1e3b0c;
            case 0x1E3B10u: goto label_1e3b10;
            case 0x1E3B14u: goto label_1e3b14;
            case 0x1E3B18u: goto label_1e3b18;
            case 0x1E3B1Cu: goto label_1e3b1c;
            case 0x1E3B20u: goto label_1e3b20;
            case 0x1E3B24u: goto label_1e3b24;
            case 0x1E3B28u: goto label_1e3b28;
            case 0x1E3B2Cu: goto label_1e3b2c;
            case 0x1E3B30u: goto label_1e3b30;
            case 0x1E3B34u: goto label_1e3b34;
            case 0x1E3B38u: goto label_1e3b38;
            case 0x1E3B3Cu: goto label_1e3b3c;
            case 0x1E3B40u: goto label_1e3b40;
            case 0x1E3B44u: goto label_1e3b44;
            case 0x1E3B48u: goto label_1e3b48;
            case 0x1E3B4Cu: goto label_1e3b4c;
            case 0x1E3B50u: goto label_1e3b50;
            case 0x1E3B54u: goto label_1e3b54;
            case 0x1E3B58u: goto label_1e3b58;
            case 0x1E3B5Cu: goto label_1e3b5c;
            case 0x1E3B60u: goto label_1e3b60;
            case 0x1E3B64u: goto label_1e3b64;
            case 0x1E3B68u: goto label_1e3b68;
            case 0x1E3B6Cu: goto label_1e3b6c;
            case 0x1E3B70u: goto label_1e3b70;
            case 0x1E3B74u: goto label_1e3b74;
            case 0x1E3B78u: goto label_1e3b78;
            case 0x1E3B7Cu: goto label_1e3b7c;
            case 0x1E3B80u: goto label_1e3b80;
            case 0x1E3B84u: goto label_1e3b84;
            case 0x1E3B88u: goto label_1e3b88;
            case 0x1E3B8Cu: goto label_1e3b8c;
            case 0x1E3B90u: goto label_1e3b90;
            case 0x1E3B94u: goto label_1e3b94;
            case 0x1E3B98u: goto label_1e3b98;
            case 0x1E3B9Cu: goto label_1e3b9c;
            case 0x1E3BA0u: goto label_1e3ba0;
            case 0x1E3BA4u: goto label_1e3ba4;
            case 0x1E3BA8u: goto label_1e3ba8;
            case 0x1E3BACu: goto label_1e3bac;
            case 0x1E3BB0u: goto label_1e3bb0;
            case 0x1E3BB4u: goto label_1e3bb4;
            case 0x1E3BB8u: goto label_1e3bb8;
            case 0x1E3BBCu: goto label_1e3bbc;
            case 0x1E3BC0u: goto label_1e3bc0;
            case 0x1E3BC4u: goto label_1e3bc4;
            case 0x1E3BC8u: goto label_1e3bc8;
            case 0x1E3BCCu: goto label_1e3bcc;
            case 0x1E3BD0u: goto label_1e3bd0;
            case 0x1E3BD4u: goto label_1e3bd4;
            case 0x1E3BD8u: goto label_1e3bd8;
            case 0x1E3BDCu: goto label_1e3bdc;
            case 0x1E3BE0u: goto label_1e3be0;
            case 0x1E3BE4u: goto label_1e3be4;
            case 0x1E3BE8u: goto label_1e3be8;
            case 0x1E3BECu: goto label_1e3bec;
            case 0x1E3BF0u: goto label_1e3bf0;
            case 0x1E3BF4u: goto label_1e3bf4;
            case 0x1E3BF8u: goto label_1e3bf8;
            case 0x1E3BFCu: goto label_1e3bfc;
            case 0x1E3C00u: goto label_1e3c00;
            case 0x1E3C04u: goto label_1e3c04;
            case 0x1E3C08u: goto label_1e3c08;
            case 0x1E3C0Cu: goto label_1e3c0c;
            case 0x1E3C10u: goto label_1e3c10;
            case 0x1E3C14u: goto label_1e3c14;
            case 0x1E3C18u: goto label_1e3c18;
            case 0x1E3C1Cu: goto label_1e3c1c;
            case 0x1E3C20u: goto label_1e3c20;
            case 0x1E3C24u: goto label_1e3c24;
            case 0x1E3C28u: goto label_1e3c28;
            case 0x1E3C2Cu: goto label_1e3c2c;
            case 0x1E3C30u: goto label_1e3c30;
            case 0x1E3C34u: goto label_1e3c34;
            case 0x1E3C38u: goto label_1e3c38;
            case 0x1E3C3Cu: goto label_1e3c3c;
            case 0x1E3C40u: goto label_1e3c40;
            case 0x1E3C44u: goto label_1e3c44;
            case 0x1E3C48u: goto label_1e3c48;
            case 0x1E3C4Cu: goto label_1e3c4c;
            case 0x1E3C50u: goto label_1e3c50;
            case 0x1E3C54u: goto label_1e3c54;
            case 0x1E3C58u: goto label_1e3c58;
            case 0x1E3C5Cu: goto label_1e3c5c;
            case 0x1E3C60u: goto label_1e3c60;
            case 0x1E3C64u: goto label_1e3c64;
            case 0x1E3C68u: goto label_1e3c68;
            case 0x1E3C6Cu: goto label_1e3c6c;
            case 0x1E3C70u: goto label_1e3c70;
            case 0x1E3C74u: goto label_1e3c74;
            case 0x1E3C78u: goto label_1e3c78;
            case 0x1E3C7Cu: goto label_1e3c7c;
            case 0x1E3C80u: goto label_1e3c80;
            case 0x1E3C84u: goto label_1e3c84;
            case 0x1E3C88u: goto label_1e3c88;
            case 0x1E3C8Cu: goto label_1e3c8c;
            case 0x1E3C90u: goto label_1e3c90;
            case 0x1E3C94u: goto label_1e3c94;
            case 0x1E3C98u: goto label_1e3c98;
            case 0x1E3C9Cu: goto label_1e3c9c;
            case 0x1E3CA0u: goto label_1e3ca0;
            case 0x1E3CA4u: goto label_1e3ca4;
            case 0x1E3CA8u: goto label_1e3ca8;
            case 0x1E3CACu: goto label_1e3cac;
            case 0x1E3CB0u: goto label_1e3cb0;
            case 0x1E3CB4u: goto label_1e3cb4;
            case 0x1E3CB8u: goto label_1e3cb8;
            case 0x1E3CBCu: goto label_1e3cbc;
            case 0x1E3CC0u: goto label_1e3cc0;
            case 0x1E3CC4u: goto label_1e3cc4;
            case 0x1E3CC8u: goto label_1e3cc8;
            case 0x1E3CCCu: goto label_1e3ccc;
            case 0x1E3CD0u: goto label_1e3cd0;
            case 0x1E3CD4u: goto label_1e3cd4;
            case 0x1E3CD8u: goto label_1e3cd8;
            case 0x1E3CDCu: goto label_1e3cdc;
            case 0x1E3CE0u: goto label_1e3ce0;
            case 0x1E3CE4u: goto label_1e3ce4;
            case 0x1E3CE8u: goto label_1e3ce8;
            case 0x1E3CECu: goto label_1e3cec;
            case 0x1E3CF0u: goto label_1e3cf0;
            case 0x1E3CF4u: goto label_1e3cf4;
            case 0x1E3CF8u: goto label_1e3cf8;
            case 0x1E3CFCu: goto label_1e3cfc;
            case 0x1E3D00u: goto label_1e3d00;
            case 0x1E3D04u: goto label_1e3d04;
            case 0x1E3D08u: goto label_1e3d08;
            case 0x1E3D0Cu: goto label_1e3d0c;
            case 0x1E3D10u: goto label_1e3d10;
            case 0x1E3D14u: goto label_1e3d14;
            case 0x1E3D18u: goto label_1e3d18;
            case 0x1E3D1Cu: goto label_1e3d1c;
            case 0x1E3D20u: goto label_1e3d20;
            case 0x1E3D24u: goto label_1e3d24;
            case 0x1E3D28u: goto label_1e3d28;
            case 0x1E3D2Cu: goto label_1e3d2c;
            case 0x1E3D30u: goto label_1e3d30;
            case 0x1E3D34u: goto label_1e3d34;
            case 0x1E3D38u: goto label_1e3d38;
            case 0x1E3D3Cu: goto label_1e3d3c;
            case 0x1E3D40u: goto label_1e3d40;
            case 0x1E3D44u: goto label_1e3d44;
            case 0x1E3D48u: goto label_1e3d48;
            case 0x1E3D4Cu: goto label_1e3d4c;
            case 0x1E3D50u: goto label_1e3d50;
            case 0x1E3D54u: goto label_1e3d54;
            case 0x1E3D58u: goto label_1e3d58;
            case 0x1E3D5Cu: goto label_1e3d5c;
            case 0x1E3D60u: goto label_1e3d60;
            case 0x1E3D64u: goto label_1e3d64;
            case 0x1E3D68u: goto label_1e3d68;
            case 0x1E3D6Cu: goto label_1e3d6c;
            case 0x1E3D70u: goto label_1e3d70;
            case 0x1E3D74u: goto label_1e3d74;
            case 0x1E3D78u: goto label_1e3d78;
            case 0x1E3D7Cu: goto label_1e3d7c;
            case 0x1E3D80u: goto label_1e3d80;
            case 0x1E3D84u: goto label_1e3d84;
            case 0x1E3D88u: goto label_1e3d88;
            case 0x1E3D8Cu: goto label_1e3d8c;
            case 0x1E3D90u: goto label_1e3d90;
            case 0x1E3D94u: goto label_1e3d94;
            case 0x1E3D98u: goto label_1e3d98;
            case 0x1E3D9Cu: goto label_1e3d9c;
            case 0x1E3DA0u: goto label_1e3da0;
            case 0x1E3DA4u: goto label_1e3da4;
            case 0x1E3DA8u: goto label_1e3da8;
            case 0x1E3DACu: goto label_1e3dac;
            case 0x1E3DB0u: goto label_1e3db0;
            case 0x1E3DB4u: goto label_1e3db4;
            case 0x1E3DB8u: goto label_1e3db8;
            case 0x1E3DBCu: goto label_1e3dbc;
            case 0x1E3DC0u: goto label_1e3dc0;
            case 0x1E3DC4u: goto label_1e3dc4;
            case 0x1E3DC8u: goto label_1e3dc8;
            case 0x1E3DCCu: goto label_1e3dcc;
            case 0x1E3DD0u: goto label_1e3dd0;
            case 0x1E3DD4u: goto label_1e3dd4;
            case 0x1E3DD8u: goto label_1e3dd8;
            case 0x1E3DDCu: goto label_1e3ddc;
            case 0x1E3DE0u: goto label_1e3de0;
            case 0x1E3DE4u: goto label_1e3de4;
            case 0x1E3DE8u: goto label_1e3de8;
            case 0x1E3DECu: goto label_1e3dec;
            case 0x1E3DF0u: goto label_1e3df0;
            case 0x1E3DF4u: goto label_1e3df4;
            case 0x1E3DF8u: goto label_1e3df8;
            case 0x1E3DFCu: goto label_1e3dfc;
            case 0x1E3E00u: goto label_1e3e00;
            case 0x1E3E04u: goto label_1e3e04;
            case 0x1E3E08u: goto label_1e3e08;
            case 0x1E3E0Cu: goto label_1e3e0c;
            case 0x1E3E10u: goto label_1e3e10;
            case 0x1E3E14u: goto label_1e3e14;
            case 0x1E3E18u: goto label_1e3e18;
            case 0x1E3E1Cu: goto label_1e3e1c;
            case 0x1E3E20u: goto label_1e3e20;
            case 0x1E3E24u: goto label_1e3e24;
            case 0x1E3E28u: goto label_1e3e28;
            case 0x1E3E2Cu: goto label_1e3e2c;
            case 0x1E3E30u: goto label_1e3e30;
            case 0x1E3E34u: goto label_1e3e34;
            case 0x1E3E38u: goto label_1e3e38;
            case 0x1E3E3Cu: goto label_1e3e3c;
            case 0x1E3E40u: goto label_1e3e40;
            case 0x1E3E44u: goto label_1e3e44;
            case 0x1E3E48u: goto label_1e3e48;
            case 0x1E3E4Cu: goto label_1e3e4c;
            case 0x1E3E50u: goto label_1e3e50;
            case 0x1E3E54u: goto label_1e3e54;
            case 0x1E3E58u: goto label_1e3e58;
            case 0x1E3E5Cu: goto label_1e3e5c;
            case 0x1E3E60u: goto label_1e3e60;
            case 0x1E3E64u: goto label_1e3e64;
            case 0x1E3E68u: goto label_1e3e68;
            case 0x1E3E6Cu: goto label_1e3e6c;
            case 0x1E3E70u: goto label_1e3e70;
            case 0x1E3E74u: goto label_1e3e74;
            case 0x1E3E78u: goto label_1e3e78;
            case 0x1E3E7Cu: goto label_1e3e7c;
            case 0x1E3E80u: goto label_1e3e80;
            case 0x1E3E84u: goto label_1e3e84;
            case 0x1E3E88u: goto label_1e3e88;
            case 0x1E3E8Cu: goto label_1e3e8c;
            case 0x1E3E90u: goto label_1e3e90;
            case 0x1E3E94u: goto label_1e3e94;
            case 0x1E3E98u: goto label_1e3e98;
            case 0x1E3E9Cu: goto label_1e3e9c;
            case 0x1E3EA0u: goto label_1e3ea0;
            case 0x1E3EA4u: goto label_1e3ea4;
            case 0x1E3EA8u: goto label_1e3ea8;
            case 0x1E3EACu: goto label_1e3eac;
            case 0x1E3EB0u: goto label_1e3eb0;
            case 0x1E3EB4u: goto label_1e3eb4;
            case 0x1E3EB8u: goto label_1e3eb8;
            case 0x1E3EBCu: goto label_1e3ebc;
            case 0x1E3EC0u: goto label_1e3ec0;
            case 0x1E3EC4u: goto label_1e3ec4;
            case 0x1E3EC8u: goto label_1e3ec8;
            case 0x1E3ECCu: goto label_1e3ecc;
            case 0x1E3ED0u: goto label_1e3ed0;
            case 0x1E3ED4u: goto label_1e3ed4;
            case 0x1E3ED8u: goto label_1e3ed8;
            case 0x1E3EDCu: goto label_1e3edc;
            case 0x1E3EE0u: goto label_1e3ee0;
            case 0x1E3EE4u: goto label_1e3ee4;
            case 0x1E3EE8u: goto label_1e3ee8;
            case 0x1E3EECu: goto label_1e3eec;
            case 0x1E3EF0u: goto label_1e3ef0;
            case 0x1E3EF4u: goto label_1e3ef4;
            case 0x1E3EF8u: goto label_1e3ef8;
            case 0x1E3EFCu: goto label_1e3efc;
            case 0x1E3F00u: goto label_1e3f00;
            case 0x1E3F04u: goto label_1e3f04;
            case 0x1E3F08u: goto label_1e3f08;
            case 0x1E3F0Cu: goto label_1e3f0c;
            case 0x1E3F10u: goto label_1e3f10;
            case 0x1E3F14u: goto label_1e3f14;
            case 0x1E3F18u: goto label_1e3f18;
            case 0x1E3F1Cu: goto label_1e3f1c;
            case 0x1E3F20u: goto label_1e3f20;
            case 0x1E3F24u: goto label_1e3f24;
            case 0x1E3F28u: goto label_1e3f28;
            case 0x1E3F2Cu: goto label_1e3f2c;
            case 0x1E3F30u: goto label_1e3f30;
            case 0x1E3F34u: goto label_1e3f34;
            case 0x1E3F38u: goto label_1e3f38;
            case 0x1E3F3Cu: goto label_1e3f3c;
            case 0x1E3F40u: goto label_1e3f40;
            case 0x1E3F44u: goto label_1e3f44;
            case 0x1E3F48u: goto label_1e3f48;
            case 0x1E3F4Cu: goto label_1e3f4c;
            case 0x1E3F50u: goto label_1e3f50;
            case 0x1E3F54u: goto label_1e3f54;
            case 0x1E3F58u: goto label_1e3f58;
            case 0x1E3F5Cu: goto label_1e3f5c;
            case 0x1E3F60u: goto label_1e3f60;
            case 0x1E3F64u: goto label_1e3f64;
            case 0x1E3F68u: goto label_1e3f68;
            case 0x1E3F6Cu: goto label_1e3f6c;
            case 0x1E3F70u: goto label_1e3f70;
            case 0x1E3F74u: goto label_1e3f74;
            case 0x1E3F78u: goto label_1e3f78;
            case 0x1E3F7Cu: goto label_1e3f7c;
            case 0x1E3F80u: goto label_1e3f80;
            case 0x1E3F84u: goto label_1e3f84;
            case 0x1E3F88u: goto label_1e3f88;
            case 0x1E3F8Cu: goto label_1e3f8c;
            case 0x1E3F90u: goto label_1e3f90;
            case 0x1E3F94u: goto label_1e3f94;
            case 0x1E3F98u: goto label_1e3f98;
            case 0x1E3F9Cu: goto label_1e3f9c;
            case 0x1E3FA0u: goto label_1e3fa0;
            case 0x1E3FA4u: goto label_1e3fa4;
            case 0x1E3FA8u: goto label_1e3fa8;
            case 0x1E3FACu: goto label_1e3fac;
            case 0x1E3FB0u: goto label_1e3fb0;
            case 0x1E3FB4u: goto label_1e3fb4;
            case 0x1E3FB8u: goto label_1e3fb8;
            case 0x1E3FBCu: goto label_1e3fbc;
            case 0x1E3FC0u: goto label_1e3fc0;
            case 0x1E3FC4u: goto label_1e3fc4;
            case 0x1E3FC8u: goto label_1e3fc8;
            case 0x1E3FCCu: goto label_1e3fcc;
            case 0x1E3FD0u: goto label_1e3fd0;
            case 0x1E3FD4u: goto label_1e3fd4;
            case 0x1E3FD8u: goto label_1e3fd8;
            case 0x1E3FDCu: goto label_1e3fdc;
            case 0x1E3FE0u: goto label_1e3fe0;
            case 0x1E3FE4u: goto label_1e3fe4;
            case 0x1E3FE8u: goto label_1e3fe8;
            case 0x1E3FECu: goto label_1e3fec;
            case 0x1E3FF0u: goto label_1e3ff0;
            case 0x1E3FF4u: goto label_1e3ff4;
            case 0x1E3FF8u: goto label_1e3ff8;
            case 0x1E3FFCu: goto label_1e3ffc;
            case 0x1E4000u: goto label_1e4000;
            case 0x1E4004u: goto label_1e4004;
            case 0x1E4008u: goto label_1e4008;
            case 0x1E400Cu: goto label_1e400c;
            case 0x1E4010u: goto label_1e4010;
            case 0x1E4014u: goto label_1e4014;
            case 0x1E4018u: goto label_1e4018;
            case 0x1E401Cu: goto label_1e401c;
            case 0x1E4020u: goto label_1e4020;
            case 0x1E4024u: goto label_1e4024;
            case 0x1E4028u: goto label_1e4028;
            case 0x1E402Cu: goto label_1e402c;
            case 0x1E4030u: goto label_1e4030;
            case 0x1E4034u: goto label_1e4034;
            case 0x1E4038u: goto label_1e4038;
            case 0x1E403Cu: goto label_1e403c;
            case 0x1E4040u: goto label_1e4040;
            case 0x1E4044u: goto label_1e4044;
            case 0x1E4048u: goto label_1e4048;
            case 0x1E404Cu: goto label_1e404c;
            case 0x1E4050u: goto label_1e4050;
            case 0x1E4054u: goto label_1e4054;
            case 0x1E4058u: goto label_1e4058;
            case 0x1E405Cu: goto label_1e405c;
            case 0x1E4060u: goto label_1e4060;
            case 0x1E4064u: goto label_1e4064;
            case 0x1E4068u: goto label_1e4068;
            case 0x1E406Cu: goto label_1e406c;
            case 0x1E4070u: goto label_1e4070;
            case 0x1E4074u: goto label_1e4074;
            case 0x1E4078u: goto label_1e4078;
            case 0x1E407Cu: goto label_1e407c;
            case 0x1E4080u: goto label_1e4080;
            case 0x1E4084u: goto label_1e4084;
            case 0x1E4088u: goto label_1e4088;
            case 0x1E408Cu: goto label_1e408c;
            case 0x1E4090u: goto label_1e4090;
            case 0x1E4094u: goto label_1e4094;
            case 0x1E4098u: goto label_1e4098;
            case 0x1E409Cu: goto label_1e409c;
            case 0x1E40A0u: goto label_1e40a0;
            case 0x1E40A4u: goto label_1e40a4;
            case 0x1E40A8u: goto label_1e40a8;
            case 0x1E40ACu: goto label_1e40ac;
            case 0x1E40B0u: goto label_1e40b0;
            case 0x1E40B4u: goto label_1e40b4;
            case 0x1E40B8u: goto label_1e40b8;
            case 0x1E40BCu: goto label_1e40bc;
            case 0x1E40C0u: goto label_1e40c0;
            case 0x1E40C4u: goto label_1e40c4;
            case 0x1E40C8u: goto label_1e40c8;
            case 0x1E40CCu: goto label_1e40cc;
            case 0x1E40D0u: goto label_1e40d0;
            case 0x1E40D4u: goto label_1e40d4;
            case 0x1E40D8u: goto label_1e40d8;
            case 0x1E40DCu: goto label_1e40dc;
            case 0x1E40E0u: goto label_1e40e0;
            case 0x1E40E4u: goto label_1e40e4;
            case 0x1E40E8u: goto label_1e40e8;
            case 0x1E40ECu: goto label_1e40ec;
            case 0x1E40F0u: goto label_1e40f0;
            case 0x1E40F4u: goto label_1e40f4;
            case 0x1E40F8u: goto label_1e40f8;
            case 0x1E40FCu: goto label_1e40fc;
            case 0x1E4100u: goto label_1e4100;
            case 0x1E4104u: goto label_1e4104;
            case 0x1E4108u: goto label_1e4108;
            case 0x1E410Cu: goto label_1e410c;
            case 0x1E4110u: goto label_1e4110;
            case 0x1E4114u: goto label_1e4114;
            case 0x1E4118u: goto label_1e4118;
            case 0x1E411Cu: goto label_1e411c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E4024u; }
            if (ctx->pc != 0x1E4024u) { return; }
        }
    }
    ctx->pc = 0x1E4024u;
label_1e4024:
    // 0x1e4024: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1e4028:
    if (ctx->pc == 0x1E4028u) {
        ctx->pc = 0x1E402Cu;
        goto label_1e402c;
    }
    ctx->pc = 0x1E4024u;
    {
        const bool branch_taken_0x1e4024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4024) {
            ctx->pc = 0x1E4110u;
            goto label_1e4110;
        }
    }
    ctx->pc = 0x1E402Cu;
label_1e402c:
    // 0x1e402c: 0x0  nop
    ctx->pc = 0x1e402cu;
    // NOP
label_1e4030:
    // 0x1e4030: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1e4034:
    // 0x1e4034: 0x1c40002e  bgtz        $v0, . + 4 + (0x2E << 2)
label_1e4038:
    if (ctx->pc == 0x1E4038u) {
        ctx->pc = 0x1E403Cu;
        goto label_1e403c;
    }
    ctx->pc = 0x1E4034u;
    {
        const bool branch_taken_0x1e4034 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e4034) {
            ctx->pc = 0x1E40F0u;
            goto label_1e40f0;
        }
    }
    ctx->pc = 0x1E403Cu;
label_1e403c:
    // 0x1e403c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e403cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4040:
    // 0x1e4040: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1e4040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1e4044:
    // 0x1e4044: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e4044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4048:
    // 0x1e4048: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e4048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e404c:
    // 0x1e404c: 0xc05d080  jal         func_174200
label_1e4050:
    if (ctx->pc == 0x1E4050u) {
        ctx->pc = 0x1E4050u;
            // 0x1e4050: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E4054u;
        goto label_1e4054;
    }
    ctx->pc = 0x1E404Cu;
    SET_GPR_U32(ctx, 31, 0x1E4054u);
    ctx->pc = 0x1E4050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E404Cu;
            // 0x1e4050: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4054u; }
        if (ctx->pc != 0x1E4054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4054u; }
        if (ctx->pc != 0x1E4054u) { return; }
    }
    ctx->pc = 0x1E4054u;
label_1e4054:
    // 0x1e4054: 0xc050bb4  jal         func_142ED0
label_1e4058:
    if (ctx->pc == 0x1E4058u) {
        ctx->pc = 0x1E405Cu;
        goto label_1e405c;
    }
    ctx->pc = 0x1E4054u;
    SET_GPR_U32(ctx, 31, 0x1E405Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E405Cu; }
        if (ctx->pc != 0x1E405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E405Cu; }
        if (ctx->pc != 0x1E405Cu) { return; }
    }
    ctx->pc = 0x1E405Cu;
label_1e405c:
    // 0x1e405c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e405cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e4060:
    // 0x1e4060: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1e4064:
    if (ctx->pc == 0x1E4064u) {
        ctx->pc = 0x1E4068u;
        goto label_1e4068;
    }
    ctx->pc = 0x1E4060u;
    {
        const bool branch_taken_0x1e4060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4060) {
            ctx->pc = 0x1E4080u;
            goto label_1e4080;
        }
    }
    ctx->pc = 0x1E4068u;
label_1e4068:
    // 0x1e4068: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e4068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e406c:
    // 0x1e406c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1e406cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1e4070:
    // 0x1e4070: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e4070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4074:
    // 0x1e4074: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e4074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e4078:
    // 0x1e4078: 0xc05d080  jal         func_174200
label_1e407c:
    if (ctx->pc == 0x1E407Cu) {
        ctx->pc = 0x1E407Cu;
            // 0x1e407c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E4080u;
        goto label_1e4080;
    }
    ctx->pc = 0x1E4078u;
    SET_GPR_U32(ctx, 31, 0x1E4080u);
    ctx->pc = 0x1E407Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4078u;
            // 0x1e407c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4080u; }
        if (ctx->pc != 0x1E4080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4080u; }
        if (ctx->pc != 0x1E4080u) { return; }
    }
    ctx->pc = 0x1E4080u;
label_1e4080:
    // 0x1e4080: 0xc050bb4  jal         func_142ED0
label_1e4084:
    if (ctx->pc == 0x1E4084u) {
        ctx->pc = 0x1E4088u;
        goto label_1e4088;
    }
    ctx->pc = 0x1E4080u;
    SET_GPR_U32(ctx, 31, 0x1E4088u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4088u; }
        if (ctx->pc != 0x1E4088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4088u; }
        if (ctx->pc != 0x1E4088u) { return; }
    }
    ctx->pc = 0x1E4088u;
label_1e4088:
    // 0x1e4088: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4088u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e408c:
    // 0x1e408c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e4090:
    if (ctx->pc == 0x1E4090u) {
        ctx->pc = 0x1E4094u;
        goto label_1e4094;
    }
    ctx->pc = 0x1E408Cu;
    {
        const bool branch_taken_0x1e408c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e408c) {
            ctx->pc = 0x1E40B0u;
            goto label_1e40b0;
        }
    }
    ctx->pc = 0x1E4094u;
label_1e4094:
    // 0x1e4094: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1e4094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e4098:
    // 0x1e4098: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1e4098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1e409c:
    // 0x1e409c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1e409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e40a0:
    // 0x1e40a0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e40a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e40a4:
    // 0x1e40a4: 0xc05d080  jal         func_174200
label_1e40a8:
    if (ctx->pc == 0x1E40A8u) {
        ctx->pc = 0x1E40A8u;
            // 0x1e40a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E40ACu;
        goto label_1e40ac;
    }
    ctx->pc = 0x1E40A4u;
    SET_GPR_U32(ctx, 31, 0x1E40ACu);
    ctx->pc = 0x1E40A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40A4u;
            // 0x1e40a8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40ACu; }
        if (ctx->pc != 0x1E40ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40ACu; }
        if (ctx->pc != 0x1E40ACu) { return; }
    }
    ctx->pc = 0x1E40ACu;
label_1e40ac:
    // 0x1e40ac: 0x0  nop
    ctx->pc = 0x1e40acu;
    // NOP
label_1e40b0:
    // 0x1e40b0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e40b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e40b4:
    // 0x1e40b4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1e40b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e40b8:
    // 0x1e40b8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e40b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e40bc:
    // 0x1e40bc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e40bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e40c0:
    // 0x1e40c0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1e40c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1e40c4:
    // 0x1e40c4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e40c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e40c8:
    // 0x1e40c8: 0x0  nop
    ctx->pc = 0x1e40c8u;
    // NOP
label_1e40cc:
    // 0x1e40cc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1e40ccu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1e40d0:
    // 0x1e40d0: 0xc053740  jal         func_14DD00
label_1e40d4:
    if (ctx->pc == 0x1E40D4u) {
        ctx->pc = 0x1E40D4u;
            // 0x1e40d4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1E40D8u;
        goto label_1e40d8;
    }
    ctx->pc = 0x1E40D0u;
    SET_GPR_U32(ctx, 31, 0x1E40D8u);
    ctx->pc = 0x1E40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40D0u;
            // 0x1e40d4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40D8u; }
        if (ctx->pc != 0x1E40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E40D8u; }
        if (ctx->pc != 0x1E40D8u) { return; }
    }
    ctx->pc = 0x1E40D8u;
label_1e40d8:
    // 0x1e40d8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1e40dc:
    // 0x1e40dc: 0x40f809  jalr        $v0
label_1e40e0:
    if (ctx->pc == 0x1E40E0u) {
        ctx->pc = 0x1E40E0u;
            // 0x1e40e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E40E4u;
        goto label_1e40e4;
    }
    ctx->pc = 0x1E40DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E40E4u);
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40DCu;
            // 0x1e40e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E36B0u: goto label_1e36b0;
            case 0x1E36B4u: goto label_1e36b4;
            case 0x1E36B8u: goto label_1e36b8;
            case 0x1E36BCu: goto label_1e36bc;
            case 0x1E36C0u: goto label_1e36c0;
            case 0x1E36C4u: goto label_1e36c4;
            case 0x1E36C8u: goto label_1e36c8;
            case 0x1E36CCu: goto label_1e36cc;
            case 0x1E36D0u: goto label_1e36d0;
            case 0x1E36D4u: goto label_1e36d4;
            case 0x1E36D8u: goto label_1e36d8;
            case 0x1E36DCu: goto label_1e36dc;
            case 0x1E36E0u: goto label_1e36e0;
            case 0x1E36E4u: goto label_1e36e4;
            case 0x1E36E8u: goto label_1e36e8;
            case 0x1E36ECu: goto label_1e36ec;
            case 0x1E36F0u: goto label_1e36f0;
            case 0x1E36F4u: goto label_1e36f4;
            case 0x1E36F8u: goto label_1e36f8;
            case 0x1E36FCu: goto label_1e36fc;
            case 0x1E3700u: goto label_1e3700;
            case 0x1E3704u: goto label_1e3704;
            case 0x1E3708u: goto label_1e3708;
            case 0x1E370Cu: goto label_1e370c;
            case 0x1E3710u: goto label_1e3710;
            case 0x1E3714u: goto label_1e3714;
            case 0x1E3718u: goto label_1e3718;
            case 0x1E371Cu: goto label_1e371c;
            case 0x1E3720u: goto label_1e3720;
            case 0x1E3724u: goto label_1e3724;
            case 0x1E3728u: goto label_1e3728;
            case 0x1E372Cu: goto label_1e372c;
            case 0x1E3730u: goto label_1e3730;
            case 0x1E3734u: goto label_1e3734;
            case 0x1E3738u: goto label_1e3738;
            case 0x1E373Cu: goto label_1e373c;
            case 0x1E3740u: goto label_1e3740;
            case 0x1E3744u: goto label_1e3744;
            case 0x1E3748u: goto label_1e3748;
            case 0x1E374Cu: goto label_1e374c;
            case 0x1E3750u: goto label_1e3750;
            case 0x1E3754u: goto label_1e3754;
            case 0x1E3758u: goto label_1e3758;
            case 0x1E375Cu: goto label_1e375c;
            case 0x1E3760u: goto label_1e3760;
            case 0x1E3764u: goto label_1e3764;
            case 0x1E3768u: goto label_1e3768;
            case 0x1E376Cu: goto label_1e376c;
            case 0x1E3770u: goto label_1e3770;
            case 0x1E3774u: goto label_1e3774;
            case 0x1E3778u: goto label_1e3778;
            case 0x1E377Cu: goto label_1e377c;
            case 0x1E3780u: goto label_1e3780;
            case 0x1E3784u: goto label_1e3784;
            case 0x1E3788u: goto label_1e3788;
            case 0x1E378Cu: goto label_1e378c;
            case 0x1E3790u: goto label_1e3790;
            case 0x1E3794u: goto label_1e3794;
            case 0x1E3798u: goto label_1e3798;
            case 0x1E379Cu: goto label_1e379c;
            case 0x1E37A0u: goto label_1e37a0;
            case 0x1E37A4u: goto label_1e37a4;
            case 0x1E37A8u: goto label_1e37a8;
            case 0x1E37ACu: goto label_1e37ac;
            case 0x1E37B0u: goto label_1e37b0;
            case 0x1E37B4u: goto label_1e37b4;
            case 0x1E37B8u: goto label_1e37b8;
            case 0x1E37BCu: goto label_1e37bc;
            case 0x1E37C0u: goto label_1e37c0;
            case 0x1E37C4u: goto label_1e37c4;
            case 0x1E37C8u: goto label_1e37c8;
            case 0x1E37CCu: goto label_1e37cc;
            case 0x1E37D0u: goto label_1e37d0;
            case 0x1E37D4u: goto label_1e37d4;
            case 0x1E37D8u: goto label_1e37d8;
            case 0x1E37DCu: goto label_1e37dc;
            case 0x1E37E0u: goto label_1e37e0;
            case 0x1E37E4u: goto label_1e37e4;
            case 0x1E37E8u: goto label_1e37e8;
            case 0x1E37ECu: goto label_1e37ec;
            case 0x1E37F0u: goto label_1e37f0;
            case 0x1E37F4u: goto label_1e37f4;
            case 0x1E37F8u: goto label_1e37f8;
            case 0x1E37FCu: goto label_1e37fc;
            case 0x1E3800u: goto label_1e3800;
            case 0x1E3804u: goto label_1e3804;
            case 0x1E3808u: goto label_1e3808;
            case 0x1E380Cu: goto label_1e380c;
            case 0x1E3810u: goto label_1e3810;
            case 0x1E3814u: goto label_1e3814;
            case 0x1E3818u: goto label_1e3818;
            case 0x1E381Cu: goto label_1e381c;
            case 0x1E3820u: goto label_1e3820;
            case 0x1E3824u: goto label_1e3824;
            case 0x1E3828u: goto label_1e3828;
            case 0x1E382Cu: goto label_1e382c;
            case 0x1E3830u: goto label_1e3830;
            case 0x1E3834u: goto label_1e3834;
            case 0x1E3838u: goto label_1e3838;
            case 0x1E383Cu: goto label_1e383c;
            case 0x1E3840u: goto label_1e3840;
            case 0x1E3844u: goto label_1e3844;
            case 0x1E3848u: goto label_1e3848;
            case 0x1E384Cu: goto label_1e384c;
            case 0x1E3850u: goto label_1e3850;
            case 0x1E3854u: goto label_1e3854;
            case 0x1E3858u: goto label_1e3858;
            case 0x1E385Cu: goto label_1e385c;
            case 0x1E3860u: goto label_1e3860;
            case 0x1E3864u: goto label_1e3864;
            case 0x1E3868u: goto label_1e3868;
            case 0x1E386Cu: goto label_1e386c;
            case 0x1E3870u: goto label_1e3870;
            case 0x1E3874u: goto label_1e3874;
            case 0x1E3878u: goto label_1e3878;
            case 0x1E387Cu: goto label_1e387c;
            case 0x1E3880u: goto label_1e3880;
            case 0x1E3884u: goto label_1e3884;
            case 0x1E3888u: goto label_1e3888;
            case 0x1E388Cu: goto label_1e388c;
            case 0x1E3890u: goto label_1e3890;
            case 0x1E3894u: goto label_1e3894;
            case 0x1E3898u: goto label_1e3898;
            case 0x1E389Cu: goto label_1e389c;
            case 0x1E38A0u: goto label_1e38a0;
            case 0x1E38A4u: goto label_1e38a4;
            case 0x1E38A8u: goto label_1e38a8;
            case 0x1E38ACu: goto label_1e38ac;
            case 0x1E38B0u: goto label_1e38b0;
            case 0x1E38B4u: goto label_1e38b4;
            case 0x1E38B8u: goto label_1e38b8;
            case 0x1E38BCu: goto label_1e38bc;
            case 0x1E38C0u: goto label_1e38c0;
            case 0x1E38C4u: goto label_1e38c4;
            case 0x1E38C8u: goto label_1e38c8;
            case 0x1E38CCu: goto label_1e38cc;
            case 0x1E38D0u: goto label_1e38d0;
            case 0x1E38D4u: goto label_1e38d4;
            case 0x1E38D8u: goto label_1e38d8;
            case 0x1E38DCu: goto label_1e38dc;
            case 0x1E38E0u: goto label_1e38e0;
            case 0x1E38E4u: goto label_1e38e4;
            case 0x1E38E8u: goto label_1e38e8;
            case 0x1E38ECu: goto label_1e38ec;
            case 0x1E38F0u: goto label_1e38f0;
            case 0x1E38F4u: goto label_1e38f4;
            case 0x1E38F8u: goto label_1e38f8;
            case 0x1E38FCu: goto label_1e38fc;
            case 0x1E3900u: goto label_1e3900;
            case 0x1E3904u: goto label_1e3904;
            case 0x1E3908u: goto label_1e3908;
            case 0x1E390Cu: goto label_1e390c;
            case 0x1E3910u: goto label_1e3910;
            case 0x1E3914u: goto label_1e3914;
            case 0x1E3918u: goto label_1e3918;
            case 0x1E391Cu: goto label_1e391c;
            case 0x1E3920u: goto label_1e3920;
            case 0x1E3924u: goto label_1e3924;
            case 0x1E3928u: goto label_1e3928;
            case 0x1E392Cu: goto label_1e392c;
            case 0x1E3930u: goto label_1e3930;
            case 0x1E3934u: goto label_1e3934;
            case 0x1E3938u: goto label_1e3938;
            case 0x1E393Cu: goto label_1e393c;
            case 0x1E3940u: goto label_1e3940;
            case 0x1E3944u: goto label_1e3944;
            case 0x1E3948u: goto label_1e3948;
            case 0x1E394Cu: goto label_1e394c;
            case 0x1E3950u: goto label_1e3950;
            case 0x1E3954u: goto label_1e3954;
            case 0x1E3958u: goto label_1e3958;
            case 0x1E395Cu: goto label_1e395c;
            case 0x1E3960u: goto label_1e3960;
            case 0x1E3964u: goto label_1e3964;
            case 0x1E3968u: goto label_1e3968;
            case 0x1E396Cu: goto label_1e396c;
            case 0x1E3970u: goto label_1e3970;
            case 0x1E3974u: goto label_1e3974;
            case 0x1E3978u: goto label_1e3978;
            case 0x1E397Cu: goto label_1e397c;
            case 0x1E3980u: goto label_1e3980;
            case 0x1E3984u: goto label_1e3984;
            case 0x1E3988u: goto label_1e3988;
            case 0x1E398Cu: goto label_1e398c;
            case 0x1E3990u: goto label_1e3990;
            case 0x1E3994u: goto label_1e3994;
            case 0x1E3998u: goto label_1e3998;
            case 0x1E399Cu: goto label_1e399c;
            case 0x1E39A0u: goto label_1e39a0;
            case 0x1E39A4u: goto label_1e39a4;
            case 0x1E39A8u: goto label_1e39a8;
            case 0x1E39ACu: goto label_1e39ac;
            case 0x1E39B0u: goto label_1e39b0;
            case 0x1E39B4u: goto label_1e39b4;
            case 0x1E39B8u: goto label_1e39b8;
            case 0x1E39BCu: goto label_1e39bc;
            case 0x1E39C0u: goto label_1e39c0;
            case 0x1E39C4u: goto label_1e39c4;
            case 0x1E39C8u: goto label_1e39c8;
            case 0x1E39CCu: goto label_1e39cc;
            case 0x1E39D0u: goto label_1e39d0;
            case 0x1E39D4u: goto label_1e39d4;
            case 0x1E39D8u: goto label_1e39d8;
            case 0x1E39DCu: goto label_1e39dc;
            case 0x1E39E0u: goto label_1e39e0;
            case 0x1E39E4u: goto label_1e39e4;
            case 0x1E39E8u: goto label_1e39e8;
            case 0x1E39ECu: goto label_1e39ec;
            case 0x1E39F0u: goto label_1e39f0;
            case 0x1E39F4u: goto label_1e39f4;
            case 0x1E39F8u: goto label_1e39f8;
            case 0x1E39FCu: goto label_1e39fc;
            case 0x1E3A00u: goto label_1e3a00;
            case 0x1E3A04u: goto label_1e3a04;
            case 0x1E3A08u: goto label_1e3a08;
            case 0x1E3A0Cu: goto label_1e3a0c;
            case 0x1E3A10u: goto label_1e3a10;
            case 0x1E3A14u: goto label_1e3a14;
            case 0x1E3A18u: goto label_1e3a18;
            case 0x1E3A1Cu: goto label_1e3a1c;
            case 0x1E3A20u: goto label_1e3a20;
            case 0x1E3A24u: goto label_1e3a24;
            case 0x1E3A28u: goto label_1e3a28;
            case 0x1E3A2Cu: goto label_1e3a2c;
            case 0x1E3A30u: goto label_1e3a30;
            case 0x1E3A34u: goto label_1e3a34;
            case 0x1E3A38u: goto label_1e3a38;
            case 0x1E3A3Cu: goto label_1e3a3c;
            case 0x1E3A40u: goto label_1e3a40;
            case 0x1E3A44u: goto label_1e3a44;
            case 0x1E3A48u: goto label_1e3a48;
            case 0x1E3A4Cu: goto label_1e3a4c;
            case 0x1E3A50u: goto label_1e3a50;
            case 0x1E3A54u: goto label_1e3a54;
            case 0x1E3A58u: goto label_1e3a58;
            case 0x1E3A5Cu: goto label_1e3a5c;
            case 0x1E3A60u: goto label_1e3a60;
            case 0x1E3A64u: goto label_1e3a64;
            case 0x1E3A68u: goto label_1e3a68;
            case 0x1E3A6Cu: goto label_1e3a6c;
            case 0x1E3A70u: goto label_1e3a70;
            case 0x1E3A74u: goto label_1e3a74;
            case 0x1E3A78u: goto label_1e3a78;
            case 0x1E3A7Cu: goto label_1e3a7c;
            case 0x1E3A80u: goto label_1e3a80;
            case 0x1E3A84u: goto label_1e3a84;
            case 0x1E3A88u: goto label_1e3a88;
            case 0x1E3A8Cu: goto label_1e3a8c;
            case 0x1E3A90u: goto label_1e3a90;
            case 0x1E3A94u: goto label_1e3a94;
            case 0x1E3A98u: goto label_1e3a98;
            case 0x1E3A9Cu: goto label_1e3a9c;
            case 0x1E3AA0u: goto label_1e3aa0;
            case 0x1E3AA4u: goto label_1e3aa4;
            case 0x1E3AA8u: goto label_1e3aa8;
            case 0x1E3AACu: goto label_1e3aac;
            case 0x1E3AB0u: goto label_1e3ab0;
            case 0x1E3AB4u: goto label_1e3ab4;
            case 0x1E3AB8u: goto label_1e3ab8;
            case 0x1E3ABCu: goto label_1e3abc;
            case 0x1E3AC0u: goto label_1e3ac0;
            case 0x1E3AC4u: goto label_1e3ac4;
            case 0x1E3AC8u: goto label_1e3ac8;
            case 0x1E3ACCu: goto label_1e3acc;
            case 0x1E3AD0u: goto label_1e3ad0;
            case 0x1E3AD4u: goto label_1e3ad4;
            case 0x1E3AD8u: goto label_1e3ad8;
            case 0x1E3ADCu: goto label_1e3adc;
            case 0x1E3AE0u: goto label_1e3ae0;
            case 0x1E3AE4u: goto label_1e3ae4;
            case 0x1E3AE8u: goto label_1e3ae8;
            case 0x1E3AECu: goto label_1e3aec;
            case 0x1E3AF0u: goto label_1e3af0;
            case 0x1E3AF4u: goto label_1e3af4;
            case 0x1E3AF8u: goto label_1e3af8;
            case 0x1E3AFCu: goto label_1e3afc;
            case 0x1E3B00u: goto label_1e3b00;
            case 0x1E3B04u: goto label_1e3b04;
            case 0x1E3B08u: goto label_1e3b08;
            case 0x1E3B0Cu: goto label_1e3b0c;
            case 0x1E3B10u: goto label_1e3b10;
            case 0x1E3B14u: goto label_1e3b14;
            case 0x1E3B18u: goto label_1e3b18;
            case 0x1E3B1Cu: goto label_1e3b1c;
            case 0x1E3B20u: goto label_1e3b20;
            case 0x1E3B24u: goto label_1e3b24;
            case 0x1E3B28u: goto label_1e3b28;
            case 0x1E3B2Cu: goto label_1e3b2c;
            case 0x1E3B30u: goto label_1e3b30;
            case 0x1E3B34u: goto label_1e3b34;
            case 0x1E3B38u: goto label_1e3b38;
            case 0x1E3B3Cu: goto label_1e3b3c;
            case 0x1E3B40u: goto label_1e3b40;
            case 0x1E3B44u: goto label_1e3b44;
            case 0x1E3B48u: goto label_1e3b48;
            case 0x1E3B4Cu: goto label_1e3b4c;
            case 0x1E3B50u: goto label_1e3b50;
            case 0x1E3B54u: goto label_1e3b54;
            case 0x1E3B58u: goto label_1e3b58;
            case 0x1E3B5Cu: goto label_1e3b5c;
            case 0x1E3B60u: goto label_1e3b60;
            case 0x1E3B64u: goto label_1e3b64;
            case 0x1E3B68u: goto label_1e3b68;
            case 0x1E3B6Cu: goto label_1e3b6c;
            case 0x1E3B70u: goto label_1e3b70;
            case 0x1E3B74u: goto label_1e3b74;
            case 0x1E3B78u: goto label_1e3b78;
            case 0x1E3B7Cu: goto label_1e3b7c;
            case 0x1E3B80u: goto label_1e3b80;
            case 0x1E3B84u: goto label_1e3b84;
            case 0x1E3B88u: goto label_1e3b88;
            case 0x1E3B8Cu: goto label_1e3b8c;
            case 0x1E3B90u: goto label_1e3b90;
            case 0x1E3B94u: goto label_1e3b94;
            case 0x1E3B98u: goto label_1e3b98;
            case 0x1E3B9Cu: goto label_1e3b9c;
            case 0x1E3BA0u: goto label_1e3ba0;
            case 0x1E3BA4u: goto label_1e3ba4;
            case 0x1E3BA8u: goto label_1e3ba8;
            case 0x1E3BACu: goto label_1e3bac;
            case 0x1E3BB0u: goto label_1e3bb0;
            case 0x1E3BB4u: goto label_1e3bb4;
            case 0x1E3BB8u: goto label_1e3bb8;
            case 0x1E3BBCu: goto label_1e3bbc;
            case 0x1E3BC0u: goto label_1e3bc0;
            case 0x1E3BC4u: goto label_1e3bc4;
            case 0x1E3BC8u: goto label_1e3bc8;
            case 0x1E3BCCu: goto label_1e3bcc;
            case 0x1E3BD0u: goto label_1e3bd0;
            case 0x1E3BD4u: goto label_1e3bd4;
            case 0x1E3BD8u: goto label_1e3bd8;
            case 0x1E3BDCu: goto label_1e3bdc;
            case 0x1E3BE0u: goto label_1e3be0;
            case 0x1E3BE4u: goto label_1e3be4;
            case 0x1E3BE8u: goto label_1e3be8;
            case 0x1E3BECu: goto label_1e3bec;
            case 0x1E3BF0u: goto label_1e3bf0;
            case 0x1E3BF4u: goto label_1e3bf4;
            case 0x1E3BF8u: goto label_1e3bf8;
            case 0x1E3BFCu: goto label_1e3bfc;
            case 0x1E3C00u: goto label_1e3c00;
            case 0x1E3C04u: goto label_1e3c04;
            case 0x1E3C08u: goto label_1e3c08;
            case 0x1E3C0Cu: goto label_1e3c0c;
            case 0x1E3C10u: goto label_1e3c10;
            case 0x1E3C14u: goto label_1e3c14;
            case 0x1E3C18u: goto label_1e3c18;
            case 0x1E3C1Cu: goto label_1e3c1c;
            case 0x1E3C20u: goto label_1e3c20;
            case 0x1E3C24u: goto label_1e3c24;
            case 0x1E3C28u: goto label_1e3c28;
            case 0x1E3C2Cu: goto label_1e3c2c;
            case 0x1E3C30u: goto label_1e3c30;
            case 0x1E3C34u: goto label_1e3c34;
            case 0x1E3C38u: goto label_1e3c38;
            case 0x1E3C3Cu: goto label_1e3c3c;
            case 0x1E3C40u: goto label_1e3c40;
            case 0x1E3C44u: goto label_1e3c44;
            case 0x1E3C48u: goto label_1e3c48;
            case 0x1E3C4Cu: goto label_1e3c4c;
            case 0x1E3C50u: goto label_1e3c50;
            case 0x1E3C54u: goto label_1e3c54;
            case 0x1E3C58u: goto label_1e3c58;
            case 0x1E3C5Cu: goto label_1e3c5c;
            case 0x1E3C60u: goto label_1e3c60;
            case 0x1E3C64u: goto label_1e3c64;
            case 0x1E3C68u: goto label_1e3c68;
            case 0x1E3C6Cu: goto label_1e3c6c;
            case 0x1E3C70u: goto label_1e3c70;
            case 0x1E3C74u: goto label_1e3c74;
            case 0x1E3C78u: goto label_1e3c78;
            case 0x1E3C7Cu: goto label_1e3c7c;
            case 0x1E3C80u: goto label_1e3c80;
            case 0x1E3C84u: goto label_1e3c84;
            case 0x1E3C88u: goto label_1e3c88;
            case 0x1E3C8Cu: goto label_1e3c8c;
            case 0x1E3C90u: goto label_1e3c90;
            case 0x1E3C94u: goto label_1e3c94;
            case 0x1E3C98u: goto label_1e3c98;
            case 0x1E3C9Cu: goto label_1e3c9c;
            case 0x1E3CA0u: goto label_1e3ca0;
            case 0x1E3CA4u: goto label_1e3ca4;
            case 0x1E3CA8u: goto label_1e3ca8;
            case 0x1E3CACu: goto label_1e3cac;
            case 0x1E3CB0u: goto label_1e3cb0;
            case 0x1E3CB4u: goto label_1e3cb4;
            case 0x1E3CB8u: goto label_1e3cb8;
            case 0x1E3CBCu: goto label_1e3cbc;
            case 0x1E3CC0u: goto label_1e3cc0;
            case 0x1E3CC4u: goto label_1e3cc4;
            case 0x1E3CC8u: goto label_1e3cc8;
            case 0x1E3CCCu: goto label_1e3ccc;
            case 0x1E3CD0u: goto label_1e3cd0;
            case 0x1E3CD4u: goto label_1e3cd4;
            case 0x1E3CD8u: goto label_1e3cd8;
            case 0x1E3CDCu: goto label_1e3cdc;
            case 0x1E3CE0u: goto label_1e3ce0;
            case 0x1E3CE4u: goto label_1e3ce4;
            case 0x1E3CE8u: goto label_1e3ce8;
            case 0x1E3CECu: goto label_1e3cec;
            case 0x1E3CF0u: goto label_1e3cf0;
            case 0x1E3CF4u: goto label_1e3cf4;
            case 0x1E3CF8u: goto label_1e3cf8;
            case 0x1E3CFCu: goto label_1e3cfc;
            case 0x1E3D00u: goto label_1e3d00;
            case 0x1E3D04u: goto label_1e3d04;
            case 0x1E3D08u: goto label_1e3d08;
            case 0x1E3D0Cu: goto label_1e3d0c;
            case 0x1E3D10u: goto label_1e3d10;
            case 0x1E3D14u: goto label_1e3d14;
            case 0x1E3D18u: goto label_1e3d18;
            case 0x1E3D1Cu: goto label_1e3d1c;
            case 0x1E3D20u: goto label_1e3d20;
            case 0x1E3D24u: goto label_1e3d24;
            case 0x1E3D28u: goto label_1e3d28;
            case 0x1E3D2Cu: goto label_1e3d2c;
            case 0x1E3D30u: goto label_1e3d30;
            case 0x1E3D34u: goto label_1e3d34;
            case 0x1E3D38u: goto label_1e3d38;
            case 0x1E3D3Cu: goto label_1e3d3c;
            case 0x1E3D40u: goto label_1e3d40;
            case 0x1E3D44u: goto label_1e3d44;
            case 0x1E3D48u: goto label_1e3d48;
            case 0x1E3D4Cu: goto label_1e3d4c;
            case 0x1E3D50u: goto label_1e3d50;
            case 0x1E3D54u: goto label_1e3d54;
            case 0x1E3D58u: goto label_1e3d58;
            case 0x1E3D5Cu: goto label_1e3d5c;
            case 0x1E3D60u: goto label_1e3d60;
            case 0x1E3D64u: goto label_1e3d64;
            case 0x1E3D68u: goto label_1e3d68;
            case 0x1E3D6Cu: goto label_1e3d6c;
            case 0x1E3D70u: goto label_1e3d70;
            case 0x1E3D74u: goto label_1e3d74;
            case 0x1E3D78u: goto label_1e3d78;
            case 0x1E3D7Cu: goto label_1e3d7c;
            case 0x1E3D80u: goto label_1e3d80;
            case 0x1E3D84u: goto label_1e3d84;
            case 0x1E3D88u: goto label_1e3d88;
            case 0x1E3D8Cu: goto label_1e3d8c;
            case 0x1E3D90u: goto label_1e3d90;
            case 0x1E3D94u: goto label_1e3d94;
            case 0x1E3D98u: goto label_1e3d98;
            case 0x1E3D9Cu: goto label_1e3d9c;
            case 0x1E3DA0u: goto label_1e3da0;
            case 0x1E3DA4u: goto label_1e3da4;
            case 0x1E3DA8u: goto label_1e3da8;
            case 0x1E3DACu: goto label_1e3dac;
            case 0x1E3DB0u: goto label_1e3db0;
            case 0x1E3DB4u: goto label_1e3db4;
            case 0x1E3DB8u: goto label_1e3db8;
            case 0x1E3DBCu: goto label_1e3dbc;
            case 0x1E3DC0u: goto label_1e3dc0;
            case 0x1E3DC4u: goto label_1e3dc4;
            case 0x1E3DC8u: goto label_1e3dc8;
            case 0x1E3DCCu: goto label_1e3dcc;
            case 0x1E3DD0u: goto label_1e3dd0;
            case 0x1E3DD4u: goto label_1e3dd4;
            case 0x1E3DD8u: goto label_1e3dd8;
            case 0x1E3DDCu: goto label_1e3ddc;
            case 0x1E3DE0u: goto label_1e3de0;
            case 0x1E3DE4u: goto label_1e3de4;
            case 0x1E3DE8u: goto label_1e3de8;
            case 0x1E3DECu: goto label_1e3dec;
            case 0x1E3DF0u: goto label_1e3df0;
            case 0x1E3DF4u: goto label_1e3df4;
            case 0x1E3DF8u: goto label_1e3df8;
            case 0x1E3DFCu: goto label_1e3dfc;
            case 0x1E3E00u: goto label_1e3e00;
            case 0x1E3E04u: goto label_1e3e04;
            case 0x1E3E08u: goto label_1e3e08;
            case 0x1E3E0Cu: goto label_1e3e0c;
            case 0x1E3E10u: goto label_1e3e10;
            case 0x1E3E14u: goto label_1e3e14;
            case 0x1E3E18u: goto label_1e3e18;
            case 0x1E3E1Cu: goto label_1e3e1c;
            case 0x1E3E20u: goto label_1e3e20;
            case 0x1E3E24u: goto label_1e3e24;
            case 0x1E3E28u: goto label_1e3e28;
            case 0x1E3E2Cu: goto label_1e3e2c;
            case 0x1E3E30u: goto label_1e3e30;
            case 0x1E3E34u: goto label_1e3e34;
            case 0x1E3E38u: goto label_1e3e38;
            case 0x1E3E3Cu: goto label_1e3e3c;
            case 0x1E3E40u: goto label_1e3e40;
            case 0x1E3E44u: goto label_1e3e44;
            case 0x1E3E48u: goto label_1e3e48;
            case 0x1E3E4Cu: goto label_1e3e4c;
            case 0x1E3E50u: goto label_1e3e50;
            case 0x1E3E54u: goto label_1e3e54;
            case 0x1E3E58u: goto label_1e3e58;
            case 0x1E3E5Cu: goto label_1e3e5c;
            case 0x1E3E60u: goto label_1e3e60;
            case 0x1E3E64u: goto label_1e3e64;
            case 0x1E3E68u: goto label_1e3e68;
            case 0x1E3E6Cu: goto label_1e3e6c;
            case 0x1E3E70u: goto label_1e3e70;
            case 0x1E3E74u: goto label_1e3e74;
            case 0x1E3E78u: goto label_1e3e78;
            case 0x1E3E7Cu: goto label_1e3e7c;
            case 0x1E3E80u: goto label_1e3e80;
            case 0x1E3E84u: goto label_1e3e84;
            case 0x1E3E88u: goto label_1e3e88;
            case 0x1E3E8Cu: goto label_1e3e8c;
            case 0x1E3E90u: goto label_1e3e90;
            case 0x1E3E94u: goto label_1e3e94;
            case 0x1E3E98u: goto label_1e3e98;
            case 0x1E3E9Cu: goto label_1e3e9c;
            case 0x1E3EA0u: goto label_1e3ea0;
            case 0x1E3EA4u: goto label_1e3ea4;
            case 0x1E3EA8u: goto label_1e3ea8;
            case 0x1E3EACu: goto label_1e3eac;
            case 0x1E3EB0u: goto label_1e3eb0;
            case 0x1E3EB4u: goto label_1e3eb4;
            case 0x1E3EB8u: goto label_1e3eb8;
            case 0x1E3EBCu: goto label_1e3ebc;
            case 0x1E3EC0u: goto label_1e3ec0;
            case 0x1E3EC4u: goto label_1e3ec4;
            case 0x1E3EC8u: goto label_1e3ec8;
            case 0x1E3ECCu: goto label_1e3ecc;
            case 0x1E3ED0u: goto label_1e3ed0;
            case 0x1E3ED4u: goto label_1e3ed4;
            case 0x1E3ED8u: goto label_1e3ed8;
            case 0x1E3EDCu: goto label_1e3edc;
            case 0x1E3EE0u: goto label_1e3ee0;
            case 0x1E3EE4u: goto label_1e3ee4;
            case 0x1E3EE8u: goto label_1e3ee8;
            case 0x1E3EECu: goto label_1e3eec;
            case 0x1E3EF0u: goto label_1e3ef0;
            case 0x1E3EF4u: goto label_1e3ef4;
            case 0x1E3EF8u: goto label_1e3ef8;
            case 0x1E3EFCu: goto label_1e3efc;
            case 0x1E3F00u: goto label_1e3f00;
            case 0x1E3F04u: goto label_1e3f04;
            case 0x1E3F08u: goto label_1e3f08;
            case 0x1E3F0Cu: goto label_1e3f0c;
            case 0x1E3F10u: goto label_1e3f10;
            case 0x1E3F14u: goto label_1e3f14;
            case 0x1E3F18u: goto label_1e3f18;
            case 0x1E3F1Cu: goto label_1e3f1c;
            case 0x1E3F20u: goto label_1e3f20;
            case 0x1E3F24u: goto label_1e3f24;
            case 0x1E3F28u: goto label_1e3f28;
            case 0x1E3F2Cu: goto label_1e3f2c;
            case 0x1E3F30u: goto label_1e3f30;
            case 0x1E3F34u: goto label_1e3f34;
            case 0x1E3F38u: goto label_1e3f38;
            case 0x1E3F3Cu: goto label_1e3f3c;
            case 0x1E3F40u: goto label_1e3f40;
            case 0x1E3F44u: goto label_1e3f44;
            case 0x1E3F48u: goto label_1e3f48;
            case 0x1E3F4Cu: goto label_1e3f4c;
            case 0x1E3F50u: goto label_1e3f50;
            case 0x1E3F54u: goto label_1e3f54;
            case 0x1E3F58u: goto label_1e3f58;
            case 0x1E3F5Cu: goto label_1e3f5c;
            case 0x1E3F60u: goto label_1e3f60;
            case 0x1E3F64u: goto label_1e3f64;
            case 0x1E3F68u: goto label_1e3f68;
            case 0x1E3F6Cu: goto label_1e3f6c;
            case 0x1E3F70u: goto label_1e3f70;
            case 0x1E3F74u: goto label_1e3f74;
            case 0x1E3F78u: goto label_1e3f78;
            case 0x1E3F7Cu: goto label_1e3f7c;
            case 0x1E3F80u: goto label_1e3f80;
            case 0x1E3F84u: goto label_1e3f84;
            case 0x1E3F88u: goto label_1e3f88;
            case 0x1E3F8Cu: goto label_1e3f8c;
            case 0x1E3F90u: goto label_1e3f90;
            case 0x1E3F94u: goto label_1e3f94;
            case 0x1E3F98u: goto label_1e3f98;
            case 0x1E3F9Cu: goto label_1e3f9c;
            case 0x1E3FA0u: goto label_1e3fa0;
            case 0x1E3FA4u: goto label_1e3fa4;
            case 0x1E3FA8u: goto label_1e3fa8;
            case 0x1E3FACu: goto label_1e3fac;
            case 0x1E3FB0u: goto label_1e3fb0;
            case 0x1E3FB4u: goto label_1e3fb4;
            case 0x1E3FB8u: goto label_1e3fb8;
            case 0x1E3FBCu: goto label_1e3fbc;
            case 0x1E3FC0u: goto label_1e3fc0;
            case 0x1E3FC4u: goto label_1e3fc4;
            case 0x1E3FC8u: goto label_1e3fc8;
            case 0x1E3FCCu: goto label_1e3fcc;
            case 0x1E3FD0u: goto label_1e3fd0;
            case 0x1E3FD4u: goto label_1e3fd4;
            case 0x1E3FD8u: goto label_1e3fd8;
            case 0x1E3FDCu: goto label_1e3fdc;
            case 0x1E3FE0u: goto label_1e3fe0;
            case 0x1E3FE4u: goto label_1e3fe4;
            case 0x1E3FE8u: goto label_1e3fe8;
            case 0x1E3FECu: goto label_1e3fec;
            case 0x1E3FF0u: goto label_1e3ff0;
            case 0x1E3FF4u: goto label_1e3ff4;
            case 0x1E3FF8u: goto label_1e3ff8;
            case 0x1E3FFCu: goto label_1e3ffc;
            case 0x1E4000u: goto label_1e4000;
            case 0x1E4004u: goto label_1e4004;
            case 0x1E4008u: goto label_1e4008;
            case 0x1E400Cu: goto label_1e400c;
            case 0x1E4010u: goto label_1e4010;
            case 0x1E4014u: goto label_1e4014;
            case 0x1E4018u: goto label_1e4018;
            case 0x1E401Cu: goto label_1e401c;
            case 0x1E4020u: goto label_1e4020;
            case 0x1E4024u: goto label_1e4024;
            case 0x1E4028u: goto label_1e4028;
            case 0x1E402Cu: goto label_1e402c;
            case 0x1E4030u: goto label_1e4030;
            case 0x1E4034u: goto label_1e4034;
            case 0x1E4038u: goto label_1e4038;
            case 0x1E403Cu: goto label_1e403c;
            case 0x1E4040u: goto label_1e4040;
            case 0x1E4044u: goto label_1e4044;
            case 0x1E4048u: goto label_1e4048;
            case 0x1E404Cu: goto label_1e404c;
            case 0x1E4050u: goto label_1e4050;
            case 0x1E4054u: goto label_1e4054;
            case 0x1E4058u: goto label_1e4058;
            case 0x1E405Cu: goto label_1e405c;
            case 0x1E4060u: goto label_1e4060;
            case 0x1E4064u: goto label_1e4064;
            case 0x1E4068u: goto label_1e4068;
            case 0x1E406Cu: goto label_1e406c;
            case 0x1E4070u: goto label_1e4070;
            case 0x1E4074u: goto label_1e4074;
            case 0x1E4078u: goto label_1e4078;
            case 0x1E407Cu: goto label_1e407c;
            case 0x1E4080u: goto label_1e4080;
            case 0x1E4084u: goto label_1e4084;
            case 0x1E4088u: goto label_1e4088;
            case 0x1E408Cu: goto label_1e408c;
            case 0x1E4090u: goto label_1e4090;
            case 0x1E4094u: goto label_1e4094;
            case 0x1E4098u: goto label_1e4098;
            case 0x1E409Cu: goto label_1e409c;
            case 0x1E40A0u: goto label_1e40a0;
            case 0x1E40A4u: goto label_1e40a4;
            case 0x1E40A8u: goto label_1e40a8;
            case 0x1E40ACu: goto label_1e40ac;
            case 0x1E40B0u: goto label_1e40b0;
            case 0x1E40B4u: goto label_1e40b4;
            case 0x1E40B8u: goto label_1e40b8;
            case 0x1E40BCu: goto label_1e40bc;
            case 0x1E40C0u: goto label_1e40c0;
            case 0x1E40C4u: goto label_1e40c4;
            case 0x1E40C8u: goto label_1e40c8;
            case 0x1E40CCu: goto label_1e40cc;
            case 0x1E40D0u: goto label_1e40d0;
            case 0x1E40D4u: goto label_1e40d4;
            case 0x1E40D8u: goto label_1e40d8;
            case 0x1E40DCu: goto label_1e40dc;
            case 0x1E40E0u: goto label_1e40e0;
            case 0x1E40E4u: goto label_1e40e4;
            case 0x1E40E8u: goto label_1e40e8;
            case 0x1E40ECu: goto label_1e40ec;
            case 0x1E40F0u: goto label_1e40f0;
            case 0x1E40F4u: goto label_1e40f4;
            case 0x1E40F8u: goto label_1e40f8;
            case 0x1E40FCu: goto label_1e40fc;
            case 0x1E4100u: goto label_1e4100;
            case 0x1E4104u: goto label_1e4104;
            case 0x1E4108u: goto label_1e4108;
            case 0x1E410Cu: goto label_1e410c;
            case 0x1E4110u: goto label_1e4110;
            case 0x1E4114u: goto label_1e4114;
            case 0x1E4118u: goto label_1e4118;
            case 0x1E411Cu: goto label_1e411c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E40E4u; }
            if (ctx->pc != 0x1E40E4u) { return; }
        }
    }
    ctx->pc = 0x1E40E4u;
label_1e40e4:
    // 0x1e40e4: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e40e8:
    if (ctx->pc == 0x1E40E8u) {
        ctx->pc = 0x1E40ECu;
        goto label_1e40ec;
    }
    ctx->pc = 0x1E40E4u;
    {
        const bool branch_taken_0x1e40e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e40e4) {
            ctx->pc = 0x1E4110u;
            goto label_1e4110;
        }
    }
    ctx->pc = 0x1E40ECu;
label_1e40ec:
    // 0x1e40ec: 0x0  nop
    ctx->pc = 0x1e40ecu;
    // NOP
label_1e40f0:
    // 0x1e40f0: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e40f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e40f4:
    // 0x1e40f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e40f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e40f8:
    // 0x1e40f8: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e40f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1e40fc:
    // 0x1e40fc: 0x24c63290  addiu       $a2, $a2, 0x3290
    ctx->pc = 0x1e40fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12944));
label_1e4100:
    // 0x1e4100: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e4100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4104:
    // 0x1e4104: 0xc053ca4  jal         func_14F290
label_1e4108:
    if (ctx->pc == 0x1E4108u) {
        ctx->pc = 0x1E4108u;
            // 0x1e4108: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E410Cu;
        goto label_1e410c;
    }
    ctx->pc = 0x1E4104u;
    SET_GPR_U32(ctx, 31, 0x1E410Cu);
    ctx->pc = 0x1E4108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4104u;
            // 0x1e4108: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E410Cu; }
        if (ctx->pc != 0x1E410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E410Cu; }
        if (ctx->pc != 0x1E410Cu) { return; }
    }
    ctx->pc = 0x1E410Cu;
label_1e410c:
    // 0x1e410c: 0x0  nop
    ctx->pc = 0x1e410cu;
    // NOP
label_1e4110:
    // 0x1e4110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e4110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4114:
    // 0x1e4114: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e4114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4118:
    // 0x1e4118: 0x3e00008  jr          $ra
label_1e411c:
    if (ctx->pc == 0x1E411Cu) {
        ctx->pc = 0x1E411Cu;
            // 0x1e411c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E4120u;
        goto label_fallthrough_0x1e4118;
    }
    ctx->pc = 0x1E4118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4118u;
            // 0x1e411c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E36B0u: goto label_1e36b0;
            case 0x1E36B4u: goto label_1e36b4;
            case 0x1E36B8u: goto label_1e36b8;
            case 0x1E36BCu: goto label_1e36bc;
            case 0x1E36C0u: goto label_1e36c0;
            case 0x1E36C4u: goto label_1e36c4;
            case 0x1E36C8u: goto label_1e36c8;
            case 0x1E36CCu: goto label_1e36cc;
            case 0x1E36D0u: goto label_1e36d0;
            case 0x1E36D4u: goto label_1e36d4;
            case 0x1E36D8u: goto label_1e36d8;
            case 0x1E36DCu: goto label_1e36dc;
            case 0x1E36E0u: goto label_1e36e0;
            case 0x1E36E4u: goto label_1e36e4;
            case 0x1E36E8u: goto label_1e36e8;
            case 0x1E36ECu: goto label_1e36ec;
            case 0x1E36F0u: goto label_1e36f0;
            case 0x1E36F4u: goto label_1e36f4;
            case 0x1E36F8u: goto label_1e36f8;
            case 0x1E36FCu: goto label_1e36fc;
            case 0x1E3700u: goto label_1e3700;
            case 0x1E3704u: goto label_1e3704;
            case 0x1E3708u: goto label_1e3708;
            case 0x1E370Cu: goto label_1e370c;
            case 0x1E3710u: goto label_1e3710;
            case 0x1E3714u: goto label_1e3714;
            case 0x1E3718u: goto label_1e3718;
            case 0x1E371Cu: goto label_1e371c;
            case 0x1E3720u: goto label_1e3720;
            case 0x1E3724u: goto label_1e3724;
            case 0x1E3728u: goto label_1e3728;
            case 0x1E372Cu: goto label_1e372c;
            case 0x1E3730u: goto label_1e3730;
            case 0x1E3734u: goto label_1e3734;
            case 0x1E3738u: goto label_1e3738;
            case 0x1E373Cu: goto label_1e373c;
            case 0x1E3740u: goto label_1e3740;
            case 0x1E3744u: goto label_1e3744;
            case 0x1E3748u: goto label_1e3748;
            case 0x1E374Cu: goto label_1e374c;
            case 0x1E3750u: goto label_1e3750;
            case 0x1E3754u: goto label_1e3754;
            case 0x1E3758u: goto label_1e3758;
            case 0x1E375Cu: goto label_1e375c;
            case 0x1E3760u: goto label_1e3760;
            case 0x1E3764u: goto label_1e3764;
            case 0x1E3768u: goto label_1e3768;
            case 0x1E376Cu: goto label_1e376c;
            case 0x1E3770u: goto label_1e3770;
            case 0x1E3774u: goto label_1e3774;
            case 0x1E3778u: goto label_1e3778;
            case 0x1E377Cu: goto label_1e377c;
            case 0x1E3780u: goto label_1e3780;
            case 0x1E3784u: goto label_1e3784;
            case 0x1E3788u: goto label_1e3788;
            case 0x1E378Cu: goto label_1e378c;
            case 0x1E3790u: goto label_1e3790;
            case 0x1E3794u: goto label_1e3794;
            case 0x1E3798u: goto label_1e3798;
            case 0x1E379Cu: goto label_1e379c;
            case 0x1E37A0u: goto label_1e37a0;
            case 0x1E37A4u: goto label_1e37a4;
            case 0x1E37A8u: goto label_1e37a8;
            case 0x1E37ACu: goto label_1e37ac;
            case 0x1E37B0u: goto label_1e37b0;
            case 0x1E37B4u: goto label_1e37b4;
            case 0x1E37B8u: goto label_1e37b8;
            case 0x1E37BCu: goto label_1e37bc;
            case 0x1E37C0u: goto label_1e37c0;
            case 0x1E37C4u: goto label_1e37c4;
            case 0x1E37C8u: goto label_1e37c8;
            case 0x1E37CCu: goto label_1e37cc;
            case 0x1E37D0u: goto label_1e37d0;
            case 0x1E37D4u: goto label_1e37d4;
            case 0x1E37D8u: goto label_1e37d8;
            case 0x1E37DCu: goto label_1e37dc;
            case 0x1E37E0u: goto label_1e37e0;
            case 0x1E37E4u: goto label_1e37e4;
            case 0x1E37E8u: goto label_1e37e8;
            case 0x1E37ECu: goto label_1e37ec;
            case 0x1E37F0u: goto label_1e37f0;
            case 0x1E37F4u: goto label_1e37f4;
            case 0x1E37F8u: goto label_1e37f8;
            case 0x1E37FCu: goto label_1e37fc;
            case 0x1E3800u: goto label_1e3800;
            case 0x1E3804u: goto label_1e3804;
            case 0x1E3808u: goto label_1e3808;
            case 0x1E380Cu: goto label_1e380c;
            case 0x1E3810u: goto label_1e3810;
            case 0x1E3814u: goto label_1e3814;
            case 0x1E3818u: goto label_1e3818;
            case 0x1E381Cu: goto label_1e381c;
            case 0x1E3820u: goto label_1e3820;
            case 0x1E3824u: goto label_1e3824;
            case 0x1E3828u: goto label_1e3828;
            case 0x1E382Cu: goto label_1e382c;
            case 0x1E3830u: goto label_1e3830;
            case 0x1E3834u: goto label_1e3834;
            case 0x1E3838u: goto label_1e3838;
            case 0x1E383Cu: goto label_1e383c;
            case 0x1E3840u: goto label_1e3840;
            case 0x1E3844u: goto label_1e3844;
            case 0x1E3848u: goto label_1e3848;
            case 0x1E384Cu: goto label_1e384c;
            case 0x1E3850u: goto label_1e3850;
            case 0x1E3854u: goto label_1e3854;
            case 0x1E3858u: goto label_1e3858;
            case 0x1E385Cu: goto label_1e385c;
            case 0x1E3860u: goto label_1e3860;
            case 0x1E3864u: goto label_1e3864;
            case 0x1E3868u: goto label_1e3868;
            case 0x1E386Cu: goto label_1e386c;
            case 0x1E3870u: goto label_1e3870;
            case 0x1E3874u: goto label_1e3874;
            case 0x1E3878u: goto label_1e3878;
            case 0x1E387Cu: goto label_1e387c;
            case 0x1E3880u: goto label_1e3880;
            case 0x1E3884u: goto label_1e3884;
            case 0x1E3888u: goto label_1e3888;
            case 0x1E388Cu: goto label_1e388c;
            case 0x1E3890u: goto label_1e3890;
            case 0x1E3894u: goto label_1e3894;
            case 0x1E3898u: goto label_1e3898;
            case 0x1E389Cu: goto label_1e389c;
            case 0x1E38A0u: goto label_1e38a0;
            case 0x1E38A4u: goto label_1e38a4;
            case 0x1E38A8u: goto label_1e38a8;
            case 0x1E38ACu: goto label_1e38ac;
            case 0x1E38B0u: goto label_1e38b0;
            case 0x1E38B4u: goto label_1e38b4;
            case 0x1E38B8u: goto label_1e38b8;
            case 0x1E38BCu: goto label_1e38bc;
            case 0x1E38C0u: goto label_1e38c0;
            case 0x1E38C4u: goto label_1e38c4;
            case 0x1E38C8u: goto label_1e38c8;
            case 0x1E38CCu: goto label_1e38cc;
            case 0x1E38D0u: goto label_1e38d0;
            case 0x1E38D4u: goto label_1e38d4;
            case 0x1E38D8u: goto label_1e38d8;
            case 0x1E38DCu: goto label_1e38dc;
            case 0x1E38E0u: goto label_1e38e0;
            case 0x1E38E4u: goto label_1e38e4;
            case 0x1E38E8u: goto label_1e38e8;
            case 0x1E38ECu: goto label_1e38ec;
            case 0x1E38F0u: goto label_1e38f0;
            case 0x1E38F4u: goto label_1e38f4;
            case 0x1E38F8u: goto label_1e38f8;
            case 0x1E38FCu: goto label_1e38fc;
            case 0x1E3900u: goto label_1e3900;
            case 0x1E3904u: goto label_1e3904;
            case 0x1E3908u: goto label_1e3908;
            case 0x1E390Cu: goto label_1e390c;
            case 0x1E3910u: goto label_1e3910;
            case 0x1E3914u: goto label_1e3914;
            case 0x1E3918u: goto label_1e3918;
            case 0x1E391Cu: goto label_1e391c;
            case 0x1E3920u: goto label_1e3920;
            case 0x1E3924u: goto label_1e3924;
            case 0x1E3928u: goto label_1e3928;
            case 0x1E392Cu: goto label_1e392c;
            case 0x1E3930u: goto label_1e3930;
            case 0x1E3934u: goto label_1e3934;
            case 0x1E3938u: goto label_1e3938;
            case 0x1E393Cu: goto label_1e393c;
            case 0x1E3940u: goto label_1e3940;
            case 0x1E3944u: goto label_1e3944;
            case 0x1E3948u: goto label_1e3948;
            case 0x1E394Cu: goto label_1e394c;
            case 0x1E3950u: goto label_1e3950;
            case 0x1E3954u: goto label_1e3954;
            case 0x1E3958u: goto label_1e3958;
            case 0x1E395Cu: goto label_1e395c;
            case 0x1E3960u: goto label_1e3960;
            case 0x1E3964u: goto label_1e3964;
            case 0x1E3968u: goto label_1e3968;
            case 0x1E396Cu: goto label_1e396c;
            case 0x1E3970u: goto label_1e3970;
            case 0x1E3974u: goto label_1e3974;
            case 0x1E3978u: goto label_1e3978;
            case 0x1E397Cu: goto label_1e397c;
            case 0x1E3980u: goto label_1e3980;
            case 0x1E3984u: goto label_1e3984;
            case 0x1E3988u: goto label_1e3988;
            case 0x1E398Cu: goto label_1e398c;
            case 0x1E3990u: goto label_1e3990;
            case 0x1E3994u: goto label_1e3994;
            case 0x1E3998u: goto label_1e3998;
            case 0x1E399Cu: goto label_1e399c;
            case 0x1E39A0u: goto label_1e39a0;
            case 0x1E39A4u: goto label_1e39a4;
            case 0x1E39A8u: goto label_1e39a8;
            case 0x1E39ACu: goto label_1e39ac;
            case 0x1E39B0u: goto label_1e39b0;
            case 0x1E39B4u: goto label_1e39b4;
            case 0x1E39B8u: goto label_1e39b8;
            case 0x1E39BCu: goto label_1e39bc;
            case 0x1E39C0u: goto label_1e39c0;
            case 0x1E39C4u: goto label_1e39c4;
            case 0x1E39C8u: goto label_1e39c8;
            case 0x1E39CCu: goto label_1e39cc;
            case 0x1E39D0u: goto label_1e39d0;
            case 0x1E39D4u: goto label_1e39d4;
            case 0x1E39D8u: goto label_1e39d8;
            case 0x1E39DCu: goto label_1e39dc;
            case 0x1E39E0u: goto label_1e39e0;
            case 0x1E39E4u: goto label_1e39e4;
            case 0x1E39E8u: goto label_1e39e8;
            case 0x1E39ECu: goto label_1e39ec;
            case 0x1E39F0u: goto label_1e39f0;
            case 0x1E39F4u: goto label_1e39f4;
            case 0x1E39F8u: goto label_1e39f8;
            case 0x1E39FCu: goto label_1e39fc;
            case 0x1E3A00u: goto label_1e3a00;
            case 0x1E3A04u: goto label_1e3a04;
            case 0x1E3A08u: goto label_1e3a08;
            case 0x1E3A0Cu: goto label_1e3a0c;
            case 0x1E3A10u: goto label_1e3a10;
            case 0x1E3A14u: goto label_1e3a14;
            case 0x1E3A18u: goto label_1e3a18;
            case 0x1E3A1Cu: goto label_1e3a1c;
            case 0x1E3A20u: goto label_1e3a20;
            case 0x1E3A24u: goto label_1e3a24;
            case 0x1E3A28u: goto label_1e3a28;
            case 0x1E3A2Cu: goto label_1e3a2c;
            case 0x1E3A30u: goto label_1e3a30;
            case 0x1E3A34u: goto label_1e3a34;
            case 0x1E3A38u: goto label_1e3a38;
            case 0x1E3A3Cu: goto label_1e3a3c;
            case 0x1E3A40u: goto label_1e3a40;
            case 0x1E3A44u: goto label_1e3a44;
            case 0x1E3A48u: goto label_1e3a48;
            case 0x1E3A4Cu: goto label_1e3a4c;
            case 0x1E3A50u: goto label_1e3a50;
            case 0x1E3A54u: goto label_1e3a54;
            case 0x1E3A58u: goto label_1e3a58;
            case 0x1E3A5Cu: goto label_1e3a5c;
            case 0x1E3A60u: goto label_1e3a60;
            case 0x1E3A64u: goto label_1e3a64;
            case 0x1E3A68u: goto label_1e3a68;
            case 0x1E3A6Cu: goto label_1e3a6c;
            case 0x1E3A70u: goto label_1e3a70;
            case 0x1E3A74u: goto label_1e3a74;
            case 0x1E3A78u: goto label_1e3a78;
            case 0x1E3A7Cu: goto label_1e3a7c;
            case 0x1E3A80u: goto label_1e3a80;
            case 0x1E3A84u: goto label_1e3a84;
            case 0x1E3A88u: goto label_1e3a88;
            case 0x1E3A8Cu: goto label_1e3a8c;
            case 0x1E3A90u: goto label_1e3a90;
            case 0x1E3A94u: goto label_1e3a94;
            case 0x1E3A98u: goto label_1e3a98;
            case 0x1E3A9Cu: goto label_1e3a9c;
            case 0x1E3AA0u: goto label_1e3aa0;
            case 0x1E3AA4u: goto label_1e3aa4;
            case 0x1E3AA8u: goto label_1e3aa8;
            case 0x1E3AACu: goto label_1e3aac;
            case 0x1E3AB0u: goto label_1e3ab0;
            case 0x1E3AB4u: goto label_1e3ab4;
            case 0x1E3AB8u: goto label_1e3ab8;
            case 0x1E3ABCu: goto label_1e3abc;
            case 0x1E3AC0u: goto label_1e3ac0;
            case 0x1E3AC4u: goto label_1e3ac4;
            case 0x1E3AC8u: goto label_1e3ac8;
            case 0x1E3ACCu: goto label_1e3acc;
            case 0x1E3AD0u: goto label_1e3ad0;
            case 0x1E3AD4u: goto label_1e3ad4;
            case 0x1E3AD8u: goto label_1e3ad8;
            case 0x1E3ADCu: goto label_1e3adc;
            case 0x1E3AE0u: goto label_1e3ae0;
            case 0x1E3AE4u: goto label_1e3ae4;
            case 0x1E3AE8u: goto label_1e3ae8;
            case 0x1E3AECu: goto label_1e3aec;
            case 0x1E3AF0u: goto label_1e3af0;
            case 0x1E3AF4u: goto label_1e3af4;
            case 0x1E3AF8u: goto label_1e3af8;
            case 0x1E3AFCu: goto label_1e3afc;
            case 0x1E3B00u: goto label_1e3b00;
            case 0x1E3B04u: goto label_1e3b04;
            case 0x1E3B08u: goto label_1e3b08;
            case 0x1E3B0Cu: goto label_1e3b0c;
            case 0x1E3B10u: goto label_1e3b10;
            case 0x1E3B14u: goto label_1e3b14;
            case 0x1E3B18u: goto label_1e3b18;
            case 0x1E3B1Cu: goto label_1e3b1c;
            case 0x1E3B20u: goto label_1e3b20;
            case 0x1E3B24u: goto label_1e3b24;
            case 0x1E3B28u: goto label_1e3b28;
            case 0x1E3B2Cu: goto label_1e3b2c;
            case 0x1E3B30u: goto label_1e3b30;
            case 0x1E3B34u: goto label_1e3b34;
            case 0x1E3B38u: goto label_1e3b38;
            case 0x1E3B3Cu: goto label_1e3b3c;
            case 0x1E3B40u: goto label_1e3b40;
            case 0x1E3B44u: goto label_1e3b44;
            case 0x1E3B48u: goto label_1e3b48;
            case 0x1E3B4Cu: goto label_1e3b4c;
            case 0x1E3B50u: goto label_1e3b50;
            case 0x1E3B54u: goto label_1e3b54;
            case 0x1E3B58u: goto label_1e3b58;
            case 0x1E3B5Cu: goto label_1e3b5c;
            case 0x1E3B60u: goto label_1e3b60;
            case 0x1E3B64u: goto label_1e3b64;
            case 0x1E3B68u: goto label_1e3b68;
            case 0x1E3B6Cu: goto label_1e3b6c;
            case 0x1E3B70u: goto label_1e3b70;
            case 0x1E3B74u: goto label_1e3b74;
            case 0x1E3B78u: goto label_1e3b78;
            case 0x1E3B7Cu: goto label_1e3b7c;
            case 0x1E3B80u: goto label_1e3b80;
            case 0x1E3B84u: goto label_1e3b84;
            case 0x1E3B88u: goto label_1e3b88;
            case 0x1E3B8Cu: goto label_1e3b8c;
            case 0x1E3B90u: goto label_1e3b90;
            case 0x1E3B94u: goto label_1e3b94;
            case 0x1E3B98u: goto label_1e3b98;
            case 0x1E3B9Cu: goto label_1e3b9c;
            case 0x1E3BA0u: goto label_1e3ba0;
            case 0x1E3BA4u: goto label_1e3ba4;
            case 0x1E3BA8u: goto label_1e3ba8;
            case 0x1E3BACu: goto label_1e3bac;
            case 0x1E3BB0u: goto label_1e3bb0;
            case 0x1E3BB4u: goto label_1e3bb4;
            case 0x1E3BB8u: goto label_1e3bb8;
            case 0x1E3BBCu: goto label_1e3bbc;
            case 0x1E3BC0u: goto label_1e3bc0;
            case 0x1E3BC4u: goto label_1e3bc4;
            case 0x1E3BC8u: goto label_1e3bc8;
            case 0x1E3BCCu: goto label_1e3bcc;
            case 0x1E3BD0u: goto label_1e3bd0;
            case 0x1E3BD4u: goto label_1e3bd4;
            case 0x1E3BD8u: goto label_1e3bd8;
            case 0x1E3BDCu: goto label_1e3bdc;
            case 0x1E3BE0u: goto label_1e3be0;
            case 0x1E3BE4u: goto label_1e3be4;
            case 0x1E3BE8u: goto label_1e3be8;
            case 0x1E3BECu: goto label_1e3bec;
            case 0x1E3BF0u: goto label_1e3bf0;
            case 0x1E3BF4u: goto label_1e3bf4;
            case 0x1E3BF8u: goto label_1e3bf8;
            case 0x1E3BFCu: goto label_1e3bfc;
            case 0x1E3C00u: goto label_1e3c00;
            case 0x1E3C04u: goto label_1e3c04;
            case 0x1E3C08u: goto label_1e3c08;
            case 0x1E3C0Cu: goto label_1e3c0c;
            case 0x1E3C10u: goto label_1e3c10;
            case 0x1E3C14u: goto label_1e3c14;
            case 0x1E3C18u: goto label_1e3c18;
            case 0x1E3C1Cu: goto label_1e3c1c;
            case 0x1E3C20u: goto label_1e3c20;
            case 0x1E3C24u: goto label_1e3c24;
            case 0x1E3C28u: goto label_1e3c28;
            case 0x1E3C2Cu: goto label_1e3c2c;
            case 0x1E3C30u: goto label_1e3c30;
            case 0x1E3C34u: goto label_1e3c34;
            case 0x1E3C38u: goto label_1e3c38;
            case 0x1E3C3Cu: goto label_1e3c3c;
            case 0x1E3C40u: goto label_1e3c40;
            case 0x1E3C44u: goto label_1e3c44;
            case 0x1E3C48u: goto label_1e3c48;
            case 0x1E3C4Cu: goto label_1e3c4c;
            case 0x1E3C50u: goto label_1e3c50;
            case 0x1E3C54u: goto label_1e3c54;
            case 0x1E3C58u: goto label_1e3c58;
            case 0x1E3C5Cu: goto label_1e3c5c;
            case 0x1E3C60u: goto label_1e3c60;
            case 0x1E3C64u: goto label_1e3c64;
            case 0x1E3C68u: goto label_1e3c68;
            case 0x1E3C6Cu: goto label_1e3c6c;
            case 0x1E3C70u: goto label_1e3c70;
            case 0x1E3C74u: goto label_1e3c74;
            case 0x1E3C78u: goto label_1e3c78;
            case 0x1E3C7Cu: goto label_1e3c7c;
            case 0x1E3C80u: goto label_1e3c80;
            case 0x1E3C84u: goto label_1e3c84;
            case 0x1E3C88u: goto label_1e3c88;
            case 0x1E3C8Cu: goto label_1e3c8c;
            case 0x1E3C90u: goto label_1e3c90;
            case 0x1E3C94u: goto label_1e3c94;
            case 0x1E3C98u: goto label_1e3c98;
            case 0x1E3C9Cu: goto label_1e3c9c;
            case 0x1E3CA0u: goto label_1e3ca0;
            case 0x1E3CA4u: goto label_1e3ca4;
            case 0x1E3CA8u: goto label_1e3ca8;
            case 0x1E3CACu: goto label_1e3cac;
            case 0x1E3CB0u: goto label_1e3cb0;
            case 0x1E3CB4u: goto label_1e3cb4;
            case 0x1E3CB8u: goto label_1e3cb8;
            case 0x1E3CBCu: goto label_1e3cbc;
            case 0x1E3CC0u: goto label_1e3cc0;
            case 0x1E3CC4u: goto label_1e3cc4;
            case 0x1E3CC8u: goto label_1e3cc8;
            case 0x1E3CCCu: goto label_1e3ccc;
            case 0x1E3CD0u: goto label_1e3cd0;
            case 0x1E3CD4u: goto label_1e3cd4;
            case 0x1E3CD8u: goto label_1e3cd8;
            case 0x1E3CDCu: goto label_1e3cdc;
            case 0x1E3CE0u: goto label_1e3ce0;
            case 0x1E3CE4u: goto label_1e3ce4;
            case 0x1E3CE8u: goto label_1e3ce8;
            case 0x1E3CECu: goto label_1e3cec;
            case 0x1E3CF0u: goto label_1e3cf0;
            case 0x1E3CF4u: goto label_1e3cf4;
            case 0x1E3CF8u: goto label_1e3cf8;
            case 0x1E3CFCu: goto label_1e3cfc;
            case 0x1E3D00u: goto label_1e3d00;
            case 0x1E3D04u: goto label_1e3d04;
            case 0x1E3D08u: goto label_1e3d08;
            case 0x1E3D0Cu: goto label_1e3d0c;
            case 0x1E3D10u: goto label_1e3d10;
            case 0x1E3D14u: goto label_1e3d14;
            case 0x1E3D18u: goto label_1e3d18;
            case 0x1E3D1Cu: goto label_1e3d1c;
            case 0x1E3D20u: goto label_1e3d20;
            case 0x1E3D24u: goto label_1e3d24;
            case 0x1E3D28u: goto label_1e3d28;
            case 0x1E3D2Cu: goto label_1e3d2c;
            case 0x1E3D30u: goto label_1e3d30;
            case 0x1E3D34u: goto label_1e3d34;
            case 0x1E3D38u: goto label_1e3d38;
            case 0x1E3D3Cu: goto label_1e3d3c;
            case 0x1E3D40u: goto label_1e3d40;
            case 0x1E3D44u: goto label_1e3d44;
            case 0x1E3D48u: goto label_1e3d48;
            case 0x1E3D4Cu: goto label_1e3d4c;
            case 0x1E3D50u: goto label_1e3d50;
            case 0x1E3D54u: goto label_1e3d54;
            case 0x1E3D58u: goto label_1e3d58;
            case 0x1E3D5Cu: goto label_1e3d5c;
            case 0x1E3D60u: goto label_1e3d60;
            case 0x1E3D64u: goto label_1e3d64;
            case 0x1E3D68u: goto label_1e3d68;
            case 0x1E3D6Cu: goto label_1e3d6c;
            case 0x1E3D70u: goto label_1e3d70;
            case 0x1E3D74u: goto label_1e3d74;
            case 0x1E3D78u: goto label_1e3d78;
            case 0x1E3D7Cu: goto label_1e3d7c;
            case 0x1E3D80u: goto label_1e3d80;
            case 0x1E3D84u: goto label_1e3d84;
            case 0x1E3D88u: goto label_1e3d88;
            case 0x1E3D8Cu: goto label_1e3d8c;
            case 0x1E3D90u: goto label_1e3d90;
            case 0x1E3D94u: goto label_1e3d94;
            case 0x1E3D98u: goto label_1e3d98;
            case 0x1E3D9Cu: goto label_1e3d9c;
            case 0x1E3DA0u: goto label_1e3da0;
            case 0x1E3DA4u: goto label_1e3da4;
            case 0x1E3DA8u: goto label_1e3da8;
            case 0x1E3DACu: goto label_1e3dac;
            case 0x1E3DB0u: goto label_1e3db0;
            case 0x1E3DB4u: goto label_1e3db4;
            case 0x1E3DB8u: goto label_1e3db8;
            case 0x1E3DBCu: goto label_1e3dbc;
            case 0x1E3DC0u: goto label_1e3dc0;
            case 0x1E3DC4u: goto label_1e3dc4;
            case 0x1E3DC8u: goto label_1e3dc8;
            case 0x1E3DCCu: goto label_1e3dcc;
            case 0x1E3DD0u: goto label_1e3dd0;
            case 0x1E3DD4u: goto label_1e3dd4;
            case 0x1E3DD8u: goto label_1e3dd8;
            case 0x1E3DDCu: goto label_1e3ddc;
            case 0x1E3DE0u: goto label_1e3de0;
            case 0x1E3DE4u: goto label_1e3de4;
            case 0x1E3DE8u: goto label_1e3de8;
            case 0x1E3DECu: goto label_1e3dec;
            case 0x1E3DF0u: goto label_1e3df0;
            case 0x1E3DF4u: goto label_1e3df4;
            case 0x1E3DF8u: goto label_1e3df8;
            case 0x1E3DFCu: goto label_1e3dfc;
            case 0x1E3E00u: goto label_1e3e00;
            case 0x1E3E04u: goto label_1e3e04;
            case 0x1E3E08u: goto label_1e3e08;
            case 0x1E3E0Cu: goto label_1e3e0c;
            case 0x1E3E10u: goto label_1e3e10;
            case 0x1E3E14u: goto label_1e3e14;
            case 0x1E3E18u: goto label_1e3e18;
            case 0x1E3E1Cu: goto label_1e3e1c;
            case 0x1E3E20u: goto label_1e3e20;
            case 0x1E3E24u: goto label_1e3e24;
            case 0x1E3E28u: goto label_1e3e28;
            case 0x1E3E2Cu: goto label_1e3e2c;
            case 0x1E3E30u: goto label_1e3e30;
            case 0x1E3E34u: goto label_1e3e34;
            case 0x1E3E38u: goto label_1e3e38;
            case 0x1E3E3Cu: goto label_1e3e3c;
            case 0x1E3E40u: goto label_1e3e40;
            case 0x1E3E44u: goto label_1e3e44;
            case 0x1E3E48u: goto label_1e3e48;
            case 0x1E3E4Cu: goto label_1e3e4c;
            case 0x1E3E50u: goto label_1e3e50;
            case 0x1E3E54u: goto label_1e3e54;
            case 0x1E3E58u: goto label_1e3e58;
            case 0x1E3E5Cu: goto label_1e3e5c;
            case 0x1E3E60u: goto label_1e3e60;
            case 0x1E3E64u: goto label_1e3e64;
            case 0x1E3E68u: goto label_1e3e68;
            case 0x1E3E6Cu: goto label_1e3e6c;
            case 0x1E3E70u: goto label_1e3e70;
            case 0x1E3E74u: goto label_1e3e74;
            case 0x1E3E78u: goto label_1e3e78;
            case 0x1E3E7Cu: goto label_1e3e7c;
            case 0x1E3E80u: goto label_1e3e80;
            case 0x1E3E84u: goto label_1e3e84;
            case 0x1E3E88u: goto label_1e3e88;
            case 0x1E3E8Cu: goto label_1e3e8c;
            case 0x1E3E90u: goto label_1e3e90;
            case 0x1E3E94u: goto label_1e3e94;
            case 0x1E3E98u: goto label_1e3e98;
            case 0x1E3E9Cu: goto label_1e3e9c;
            case 0x1E3EA0u: goto label_1e3ea0;
            case 0x1E3EA4u: goto label_1e3ea4;
            case 0x1E3EA8u: goto label_1e3ea8;
            case 0x1E3EACu: goto label_1e3eac;
            case 0x1E3EB0u: goto label_1e3eb0;
            case 0x1E3EB4u: goto label_1e3eb4;
            case 0x1E3EB8u: goto label_1e3eb8;
            case 0x1E3EBCu: goto label_1e3ebc;
            case 0x1E3EC0u: goto label_1e3ec0;
            case 0x1E3EC4u: goto label_1e3ec4;
            case 0x1E3EC8u: goto label_1e3ec8;
            case 0x1E3ECCu: goto label_1e3ecc;
            case 0x1E3ED0u: goto label_1e3ed0;
            case 0x1E3ED4u: goto label_1e3ed4;
            case 0x1E3ED8u: goto label_1e3ed8;
            case 0x1E3EDCu: goto label_1e3edc;
            case 0x1E3EE0u: goto label_1e3ee0;
            case 0x1E3EE4u: goto label_1e3ee4;
            case 0x1E3EE8u: goto label_1e3ee8;
            case 0x1E3EECu: goto label_1e3eec;
            case 0x1E3EF0u: goto label_1e3ef0;
            case 0x1E3EF4u: goto label_1e3ef4;
            case 0x1E3EF8u: goto label_1e3ef8;
            case 0x1E3EFCu: goto label_1e3efc;
            case 0x1E3F00u: goto label_1e3f00;
            case 0x1E3F04u: goto label_1e3f04;
            case 0x1E3F08u: goto label_1e3f08;
            case 0x1E3F0Cu: goto label_1e3f0c;
            case 0x1E3F10u: goto label_1e3f10;
            case 0x1E3F14u: goto label_1e3f14;
            case 0x1E3F18u: goto label_1e3f18;
            case 0x1E3F1Cu: goto label_1e3f1c;
            case 0x1E3F20u: goto label_1e3f20;
            case 0x1E3F24u: goto label_1e3f24;
            case 0x1E3F28u: goto label_1e3f28;
            case 0x1E3F2Cu: goto label_1e3f2c;
            case 0x1E3F30u: goto label_1e3f30;
            case 0x1E3F34u: goto label_1e3f34;
            case 0x1E3F38u: goto label_1e3f38;
            case 0x1E3F3Cu: goto label_1e3f3c;
            case 0x1E3F40u: goto label_1e3f40;
            case 0x1E3F44u: goto label_1e3f44;
            case 0x1E3F48u: goto label_1e3f48;
            case 0x1E3F4Cu: goto label_1e3f4c;
            case 0x1E3F50u: goto label_1e3f50;
            case 0x1E3F54u: goto label_1e3f54;
            case 0x1E3F58u: goto label_1e3f58;
            case 0x1E3F5Cu: goto label_1e3f5c;
            case 0x1E3F60u: goto label_1e3f60;
            case 0x1E3F64u: goto label_1e3f64;
            case 0x1E3F68u: goto label_1e3f68;
            case 0x1E3F6Cu: goto label_1e3f6c;
            case 0x1E3F70u: goto label_1e3f70;
            case 0x1E3F74u: goto label_1e3f74;
            case 0x1E3F78u: goto label_1e3f78;
            case 0x1E3F7Cu: goto label_1e3f7c;
            case 0x1E3F80u: goto label_1e3f80;
            case 0x1E3F84u: goto label_1e3f84;
            case 0x1E3F88u: goto label_1e3f88;
            case 0x1E3F8Cu: goto label_1e3f8c;
            case 0x1E3F90u: goto label_1e3f90;
            case 0x1E3F94u: goto label_1e3f94;
            case 0x1E3F98u: goto label_1e3f98;
            case 0x1E3F9Cu: goto label_1e3f9c;
            case 0x1E3FA0u: goto label_1e3fa0;
            case 0x1E3FA4u: goto label_1e3fa4;
            case 0x1E3FA8u: goto label_1e3fa8;
            case 0x1E3FACu: goto label_1e3fac;
            case 0x1E3FB0u: goto label_1e3fb0;
            case 0x1E3FB4u: goto label_1e3fb4;
            case 0x1E3FB8u: goto label_1e3fb8;
            case 0x1E3FBCu: goto label_1e3fbc;
            case 0x1E3FC0u: goto label_1e3fc0;
            case 0x1E3FC4u: goto label_1e3fc4;
            case 0x1E3FC8u: goto label_1e3fc8;
            case 0x1E3FCCu: goto label_1e3fcc;
            case 0x1E3FD0u: goto label_1e3fd0;
            case 0x1E3FD4u: goto label_1e3fd4;
            case 0x1E3FD8u: goto label_1e3fd8;
            case 0x1E3FDCu: goto label_1e3fdc;
            case 0x1E3FE0u: goto label_1e3fe0;
            case 0x1E3FE4u: goto label_1e3fe4;
            case 0x1E3FE8u: goto label_1e3fe8;
            case 0x1E3FECu: goto label_1e3fec;
            case 0x1E3FF0u: goto label_1e3ff0;
            case 0x1E3FF4u: goto label_1e3ff4;
            case 0x1E3FF8u: goto label_1e3ff8;
            case 0x1E3FFCu: goto label_1e3ffc;
            case 0x1E4000u: goto label_1e4000;
            case 0x1E4004u: goto label_1e4004;
            case 0x1E4008u: goto label_1e4008;
            case 0x1E400Cu: goto label_1e400c;
            case 0x1E4010u: goto label_1e4010;
            case 0x1E4014u: goto label_1e4014;
            case 0x1E4018u: goto label_1e4018;
            case 0x1E401Cu: goto label_1e401c;
            case 0x1E4020u: goto label_1e4020;
            case 0x1E4024u: goto label_1e4024;
            case 0x1E4028u: goto label_1e4028;
            case 0x1E402Cu: goto label_1e402c;
            case 0x1E4030u: goto label_1e4030;
            case 0x1E4034u: goto label_1e4034;
            case 0x1E4038u: goto label_1e4038;
            case 0x1E403Cu: goto label_1e403c;
            case 0x1E4040u: goto label_1e4040;
            case 0x1E4044u: goto label_1e4044;
            case 0x1E4048u: goto label_1e4048;
            case 0x1E404Cu: goto label_1e404c;
            case 0x1E4050u: goto label_1e4050;
            case 0x1E4054u: goto label_1e4054;
            case 0x1E4058u: goto label_1e4058;
            case 0x1E405Cu: goto label_1e405c;
            case 0x1E4060u: goto label_1e4060;
            case 0x1E4064u: goto label_1e4064;
            case 0x1E4068u: goto label_1e4068;
            case 0x1E406Cu: goto label_1e406c;
            case 0x1E4070u: goto label_1e4070;
            case 0x1E4074u: goto label_1e4074;
            case 0x1E4078u: goto label_1e4078;
            case 0x1E407Cu: goto label_1e407c;
            case 0x1E4080u: goto label_1e4080;
            case 0x1E4084u: goto label_1e4084;
            case 0x1E4088u: goto label_1e4088;
            case 0x1E408Cu: goto label_1e408c;
            case 0x1E4090u: goto label_1e4090;
            case 0x1E4094u: goto label_1e4094;
            case 0x1E4098u: goto label_1e4098;
            case 0x1E409Cu: goto label_1e409c;
            case 0x1E40A0u: goto label_1e40a0;
            case 0x1E40A4u: goto label_1e40a4;
            case 0x1E40A8u: goto label_1e40a8;
            case 0x1E40ACu: goto label_1e40ac;
            case 0x1E40B0u: goto label_1e40b0;
            case 0x1E40B4u: goto label_1e40b4;
            case 0x1E40B8u: goto label_1e40b8;
            case 0x1E40BCu: goto label_1e40bc;
            case 0x1E40C0u: goto label_1e40c0;
            case 0x1E40C4u: goto label_1e40c4;
            case 0x1E40C8u: goto label_1e40c8;
            case 0x1E40CCu: goto label_1e40cc;
            case 0x1E40D0u: goto label_1e40d0;
            case 0x1E40D4u: goto label_1e40d4;
            case 0x1E40D8u: goto label_1e40d8;
            case 0x1E40DCu: goto label_1e40dc;
            case 0x1E40E0u: goto label_1e40e0;
            case 0x1E40E4u: goto label_1e40e4;
            case 0x1E40E8u: goto label_1e40e8;
            case 0x1E40ECu: goto label_1e40ec;
            case 0x1E40F0u: goto label_1e40f0;
            case 0x1E40F4u: goto label_1e40f4;
            case 0x1E40F8u: goto label_1e40f8;
            case 0x1E40FCu: goto label_1e40fc;
            case 0x1E4100u: goto label_1e4100;
            case 0x1E4104u: goto label_1e4104;
            case 0x1E4108u: goto label_1e4108;
            case 0x1E410Cu: goto label_1e410c;
            case 0x1E4110u: goto label_1e4110;
            case 0x1E4114u: goto label_1e4114;
            case 0x1E4118u: goto label_1e4118;
            case 0x1E411Cu: goto label_1e411c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e4118:
    ctx->pc = 0x1E4120u;
}
