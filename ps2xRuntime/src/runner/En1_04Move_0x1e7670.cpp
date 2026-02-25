#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En1_04Move
// Address: 0x1e7670 - 0x1e87b4
void En1_04Move_0x1e7670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En1_04Move_0x1e7670");
#endif

    ctx->pc = 0x1e7670u;

label_1e7670:
    // 0x1e7670: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1e7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1e7674:
    // 0x1e7674: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e7674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e7678:
    // 0x1e7678: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e767c:
    // 0x1e767c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e767cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7680:
    // 0x1e7680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e7680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e7684:
    // 0x1e7684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7688:
    // 0x1e7688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e7688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e768c:
    // 0x1e768c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1e768cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e7690:
    // 0x1e7690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e7690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e7694:
    // 0x1e7694: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e7698:
    // 0x1e7698: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e7698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e769c:
    // 0x1e769c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1e769cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e76a0:
    // 0x1e76a0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e76a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76a4:
    // 0x1e76a4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e76a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e76a8:
    // 0x1e76a8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e76a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1e76ac:
    // 0x1e76ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e76acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e76b0:
    // 0x1e76b0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1e76b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e76b4:
    // 0x1e76b4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e76b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76b8:
    // 0x1e76b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e76b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e76bc:
    // 0x1e76bc: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e76bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1e76c0:
    // 0x1e76c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e76c4:
    // 0x1e76c4: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1e76c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e76c8:
    // 0x1e76c8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e76c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76cc:
    // 0x1e76cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e76ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e76d0:
    // 0x1e76d0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e76d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1e76d4:
    // 0x1e76d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e76d8:
    // 0x1e76d8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1e76d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e76dc:
    // 0x1e76dc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e76dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76e0:
    // 0x1e76e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e76e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e76e4:
    // 0x1e76e4: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e76e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1e76e8:
    // 0x1e76e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e76e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e76ec:
    // 0x1e76ec: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e76ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e76f0:
    // 0x1e76f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e76f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e76f4:
    // 0x1e76f4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1e76f8:
    if (ctx->pc == 0x1E76F8u) {
        ctx->pc = 0x1E76F8u;
            // 0x1e76f8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1E76FCu;
        goto label_1e76fc;
    }
    ctx->pc = 0x1E76F4u;
    {
        const bool branch_taken_0x1e76f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E76F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E76F4u;
            // 0x1e76f8: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76f4) {
            ctx->pc = 0x1E7718u;
            goto label_1e7718;
        }
    }
    ctx->pc = 0x1E76FCu;
label_1e76fc:
    // 0x1e76fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e7700:
    // 0x1e7700: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e7700u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7704:
    // 0x1e7704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7708:
    // 0x1e7708: 0x0  nop
    ctx->pc = 0x1e7708u;
    // NOP
label_1e770c:
    // 0x1e770c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e770cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e7710:
    // 0x1e7710: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e7710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e7714:
    // 0x1e7714: 0x0  nop
    ctx->pc = 0x1e7714u;
    // NOP
label_1e7718:
    // 0x1e7718: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e771c:
    // 0x1e771c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e7720:
    // 0x1e7720: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e7720u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7724:
    // 0x1e7724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7728:
    // 0x1e7728: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e7728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e772c:
    // 0x1e772c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e772cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7730:
    // 0x1e7730: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e7734:
    if (ctx->pc == 0x1E7734u) {
        ctx->pc = 0x1E7734u;
            // 0x1e7734: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1E7738u;
        goto label_1e7738;
    }
    ctx->pc = 0x1E7730u;
    {
        const bool branch_taken_0x1e7730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E7734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7730u;
            // 0x1e7734: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7730) {
            ctx->pc = 0x1E7750u;
            goto label_1e7750;
        }
    }
    ctx->pc = 0x1E7738u;
label_1e7738:
    // 0x1e7738: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e773c:
    // 0x1e773c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e773cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7740:
    // 0x1e7740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7744:
    // 0x1e7744: 0x0  nop
    ctx->pc = 0x1e7744u;
    // NOP
label_1e7748:
    // 0x1e7748: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e7748u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e774c:
    // 0x1e774c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e7750:
    // 0x1e7750: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e7754:
    // 0x1e7754: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1e7758:
    // 0x1e7758: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e7758u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e775c:
    // 0x1e775c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e775cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7760:
    // 0x1e7760: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e7760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7764:
    // 0x1e7764: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e7764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e7768:
    // 0x1e7768: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1e776c:
    if (ctx->pc == 0x1E776Cu) {
        ctx->pc = 0x1E776Cu;
            // 0x1e776c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E7770u;
        goto label_1e7770;
    }
    ctx->pc = 0x1E7768u;
    {
        const bool branch_taken_0x1e7768 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7768u;
            // 0x1e776c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7768) {
            ctx->pc = 0x1E7788u;
            goto label_1e7788;
        }
    }
    ctx->pc = 0x1E7770u;
label_1e7770:
    // 0x1e7770: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e7770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e7774:
    // 0x1e7774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e7774u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7778:
    // 0x1e7778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e777c:
    // 0x1e777c: 0x0  nop
    ctx->pc = 0x1e777cu;
    // NOP
label_1e7780:
    // 0x1e7780: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e7780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e7784:
    // 0x1e7784: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e7784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e7788:
    // 0x1e7788: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e7788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e778c:
    // 0x1e778c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1e7790:
    // 0x1e7790: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e7790u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e7794:
    // 0x1e7794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7798:
    // 0x1e7798: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e7798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e779c:
    // 0x1e779c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e779cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e77a0:
    // 0x1e77a0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e77a4:
    if (ctx->pc == 0x1E77A4u) {
        ctx->pc = 0x1E77A4u;
            // 0x1e77a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1E77A8u;
        goto label_1e77a8;
    }
    ctx->pc = 0x1E77A0u;
    {
        const bool branch_taken_0x1e77a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E77A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77A0u;
            // 0x1e77a4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e77a0) {
            ctx->pc = 0x1E77C0u;
            goto label_1e77c0;
        }
    }
    ctx->pc = 0x1E77A8u;
label_1e77a8:
    // 0x1e77a8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e77a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1e77ac:
    // 0x1e77ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e77acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1e77b0:
    // 0x1e77b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e77b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e77b4:
    // 0x1e77b4: 0x0  nop
    ctx->pc = 0x1e77b4u;
    // NOP
label_1e77b8:
    // 0x1e77b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e77b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1e77bc:
    // 0x1e77bc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e77bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e77c0:
    // 0x1e77c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e77c4:
    // 0x1e77c4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1e77c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1e77c8:
    // 0x1e77c8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e77cc:
    // 0x1e77cc: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e77ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e77d0:
    // 0x1e77d0: 0xc07a1f0  jal         func_1E87C0
label_1e77d4:
    if (ctx->pc == 0x1E77D4u) {
        ctx->pc = 0x1E77D4u;
            // 0x1e77d4: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1E77D8u;
        goto label_1e77d8;
    }
    ctx->pc = 0x1E77D0u;
    SET_GPR_U32(ctx, 31, 0x1E77D8u);
    ctx->pc = 0x1E77D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E77D0u;
            // 0x1e77d4: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E87C0u;
    if (runtime->hasFunction(0x1E87C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E87C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77D8u; }
        if (ctx->pc != 0x1E77D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e87c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E77D8u; }
        if (ctx->pc != 0x1E77D8u) { return; }
    }
    ctx->pc = 0x1E77D8u;
label_1e77d8:
    // 0x1e77d8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e77dc:
    // 0x1e77dc: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1e77dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_1e77e0:
    // 0x1e77e0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e77e4:
    // 0x1e77e4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1e77e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_1e77e8:
    // 0x1e77e8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e77ec:
    // 0x1e77ec: 0x18400228  blez        $v0, . + 4 + (0x228 << 2)
label_1e77f0:
    if (ctx->pc == 0x1E77F0u) {
        ctx->pc = 0x1E77F4u;
        goto label_1e77f4;
    }
    ctx->pc = 0x1E77ECu;
    {
        const bool branch_taken_0x1e77ec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e77ec) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E77F4u;
label_1e77f4:
    // 0x1e77f4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e77f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e77f8:
    // 0x1e77f8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1e77fc:
    if (ctx->pc == 0x1E77FCu) {
        ctx->pc = 0x1E7800u;
        goto label_1e7800;
    }
    ctx->pc = 0x1E77F8u;
    {
        const bool branch_taken_0x1e77f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e77f8) {
            ctx->pc = 0x1E7858u;
            goto label_1e7858;
        }
    }
    ctx->pc = 0x1E7800u;
label_1e7800:
    // 0x1e7800: 0xc050bb4  jal         func_142ED0
label_1e7804:
    if (ctx->pc == 0x1E7804u) {
        ctx->pc = 0x1E7808u;
        goto label_1e7808;
    }
    ctx->pc = 0x1E7800u;
    SET_GPR_U32(ctx, 31, 0x1E7808u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7808u; }
        if (ctx->pc != 0x1E7808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7808u; }
        if (ctx->pc != 0x1E7808u) { return; }
    }
    ctx->pc = 0x1E7808u;
label_1e7808:
    // 0x1e7808: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1e7808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1e780c:
    // 0x1e780c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e7810:
    // 0x1e7810: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e7810u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e7814:
    // 0x1e7814: 0x0  nop
    ctx->pc = 0x1e7814u;
    // NOP
label_1e7818:
    // 0x1e7818: 0x0  nop
    ctx->pc = 0x1e7818u;
    // NOP
label_1e781c:
    // 0x1e781c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e781cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7820:
    // 0x1e7820: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e7820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e7824:
    // 0x1e7824: 0xc050bb4  jal         func_142ED0
label_1e7828:
    if (ctx->pc == 0x1E7828u) {
        ctx->pc = 0x1E7828u;
            // 0x1e7828: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1E782Cu;
        goto label_1e782c;
    }
    ctx->pc = 0x1E7824u;
    SET_GPR_U32(ctx, 31, 0x1E782Cu);
    ctx->pc = 0x1E7828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7824u;
            // 0x1e7828: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E782Cu; }
        if (ctx->pc != 0x1E782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E782Cu; }
        if (ctx->pc != 0x1E782Cu) { return; }
    }
    ctx->pc = 0x1E782Cu;
label_1e782c:
    // 0x1e782c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1e782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1e7830:
    // 0x1e7830: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1e7830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e7834:
    // 0x1e7834: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e7834u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e7838:
    // 0x1e7838: 0x0  nop
    ctx->pc = 0x1e7838u;
    // NOP
label_1e783c:
    // 0x1e783c: 0x0  nop
    ctx->pc = 0x1e783cu;
    // NOP
label_1e7840:
    // 0x1e7840: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7840u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7844:
    // 0x1e7844: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1e7844u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e7848:
    // 0x1e7848: 0xae620114  sw          $v0, 0x114($s3)
    ctx->pc = 0x1e7848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
label_1e784c:
    // 0x1e784c: 0x10000210  b           . + 4 + (0x210 << 2)
label_1e7850:
    if (ctx->pc == 0x1E7850u) {
        ctx->pc = 0x1E7850u;
            // 0x1e7850: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x1E7854u;
        goto label_1e7854;
    }
    ctx->pc = 0x1E784Cu;
    {
        const bool branch_taken_0x1e784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E784Cu;
            // 0x1e7850: 0xae600118  sw          $zero, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e784c) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7854u;
label_1e7854:
    // 0x1e7854: 0x0  nop
    ctx->pc = 0x1e7854u;
    // NOP
label_1e7858:
    // 0x1e7858: 0x2862000f  slti        $v0, $v1, 0xF
    ctx->pc = 0x1e7858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_1e785c:
    // 0x1e785c: 0x1440020c  bnez        $v0, . + 4 + (0x20C << 2)
label_1e7860:
    if (ctx->pc == 0x1E7860u) {
        ctx->pc = 0x1E7860u;
            // 0x1e7860: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1E7864u;
        goto label_1e7864;
    }
    ctx->pc = 0x1E785Cu;
    {
        const bool branch_taken_0x1e785c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E785Cu;
            // 0x1e7860: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e785c) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7864u;
label_1e7864:
    // 0x1e7864: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1e7868:
    if (ctx->pc == 0x1E7868u) {
        ctx->pc = 0x1E786Cu;
        goto label_1e786c;
    }
    ctx->pc = 0x1E7864u;
    {
        const bool branch_taken_0x1e7864 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7864) {
            ctx->pc = 0x1E78E0u;
            goto label_1e78e0;
        }
    }
    ctx->pc = 0x1E786Cu;
label_1e786c:
    // 0x1e786c: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1e786cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7870:
    // 0x1e7870: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x1e7870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
label_1e7874:
    // 0x1e7874: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1e7874u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
label_1e7878:
    // 0x1e7878: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e7878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e787c:
    // 0x1e787c: 0x0  nop
    ctx->pc = 0x1e787cu;
    // NOP
label_1e7880:
    // 0x1e7880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e7884:
    // 0x1e7884: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1e7884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1e7888:
    // 0x1e7888: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e7888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e788c:
    // 0x1e788c: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x1e788cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
label_1e7890:
    // 0x1e7890: 0x102001ff  beqz        $at, . + 4 + (0x1FF << 2)
label_1e7894:
    if (ctx->pc == 0x1E7894u) {
        ctx->pc = 0x1E7894u;
            // 0x1e7894: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1E7898u;
        goto label_1e7898;
    }
    ctx->pc = 0x1E7890u;
    {
        const bool branch_taken_0x1e7890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7890u;
            // 0x1e7894: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7890) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7898u;
label_1e7898:
    // 0x1e7898: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7898u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e789c:
    // 0x1e789c: 0x0  nop
    ctx->pc = 0x1e789cu;
    // NOP
label_1e78a0:
    // 0x1e78a0: 0x0  nop
    ctx->pc = 0x1e78a0u;
    // NOP
label_1e78a4:
    // 0x1e78a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e78a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e78a8:
    // 0x1e78a8: 0x144001f9  bnez        $v0, . + 4 + (0x1F9 << 2)
label_1e78ac:
    if (ctx->pc == 0x1E78ACu) {
        ctx->pc = 0x1E78B0u;
        goto label_1e78b0;
    }
    ctx->pc = 0x1E78A8u;
    {
        const bool branch_taken_0x1e78a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e78a8) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E78B0u;
label_1e78b0:
    // 0x1e78b0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e78b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e78b4:
    // 0x1e78b4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e78b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e78b8:
    // 0x1e78b8: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1e78b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1e78bc:
    // 0x1e78bc: 0xc0655a0  jal         func_195680
label_1e78c0:
    if (ctx->pc == 0x1E78C0u) {
        ctx->pc = 0x1E78C0u;
            // 0x1e78c0: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1E78C4u;
        goto label_1e78c4;
    }
    ctx->pc = 0x1E78BCu;
    SET_GPR_U32(ctx, 31, 0x1E78C4u);
    ctx->pc = 0x1E78C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78BCu;
            // 0x1e78c0: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78C4u; }
        if (ctx->pc != 0x1E78C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78C4u; }
        if (ctx->pc != 0x1E78C4u) { return; }
    }
    ctx->pc = 0x1E78C4u;
label_1e78c4:
    // 0x1e78c4: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e78c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e78c8:
    // 0x1e78c8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e78cc:
    // 0x1e78cc: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1e78ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1e78d0:
    // 0x1e78d0: 0xc0655a0  jal         func_195680
label_1e78d4:
    if (ctx->pc == 0x1E78D4u) {
        ctx->pc = 0x1E78D4u;
            // 0x1e78d4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1E78D8u;
        goto label_1e78d8;
    }
    ctx->pc = 0x1E78D0u;
    SET_GPR_U32(ctx, 31, 0x1E78D8u);
    ctx->pc = 0x1E78D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78D0u;
            // 0x1e78d4: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78D8u; }
        if (ctx->pc != 0x1E78D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E78D8u; }
        if (ctx->pc != 0x1E78D8u) { return; }
    }
    ctx->pc = 0x1E78D8u;
label_1e78d8:
    // 0x1e78d8: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_1e78dc:
    if (ctx->pc == 0x1E78DCu) {
        ctx->pc = 0x1E78E0u;
        goto label_1e78e0;
    }
    ctx->pc = 0x1E78D8u;
    {
        const bool branch_taken_0x1e78d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e78d8) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E78E0u;
label_1e78e0:
    // 0x1e78e0: 0x28610104  slti        $at, $v1, 0x104
    ctx->pc = 0x1e78e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
label_1e78e4:
    // 0x1e78e4: 0x1020016a  beqz        $at, . + 4 + (0x16A << 2)
label_1e78e8:
    if (ctx->pc == 0x1E78E8u) {
        ctx->pc = 0x1E78E8u;
            // 0x1e78e8: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1E78ECu;
        goto label_1e78ec;
    }
    ctx->pc = 0x1E78E4u;
    {
        const bool branch_taken_0x1e78e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E78E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78E4u;
            // 0x1e78e8: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78e4) {
            ctx->pc = 0x1E7E90u;
            goto label_1e7e90;
        }
    }
    ctx->pc = 0x1E78ECu;
label_1e78ec:
    // 0x1e78ec: 0x1062009c  beq         $v1, $v0, . + 4 + (0x9C << 2)
label_1e78f0:
    if (ctx->pc == 0x1E78F0u) {
        ctx->pc = 0x1E78F4u;
        goto label_1e78f4;
    }
    ctx->pc = 0x1E78ECu;
    {
        const bool branch_taken_0x1e78ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e78ec) {
            ctx->pc = 0x1E7B60u;
            goto label_1e7b60;
        }
    }
    ctx->pc = 0x1E78F4u;
label_1e78f4:
    // 0x1e78f4: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x1e78f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1e78f8:
    // 0x1e78f8: 0x1062007b  beq         $v1, $v0, . + 4 + (0x7B << 2)
label_1e78fc:
    if (ctx->pc == 0x1E78FCu) {
        ctx->pc = 0x1E78FCu;
            // 0x1e78fc: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x1E7900u;
        goto label_1e7900;
    }
    ctx->pc = 0x1E78F8u;
    {
        const bool branch_taken_0x1e78f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E78FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E78F8u;
            // 0x1e78fc: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e78f8) {
            ctx->pc = 0x1E7AE8u;
            goto label_1e7ae8;
        }
    }
    ctx->pc = 0x1E7900u;
label_1e7900:
    // 0x1e7900: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
label_1e7904:
    if (ctx->pc == 0x1E7904u) {
        ctx->pc = 0x1E7908u;
        goto label_1e7908;
    }
    ctx->pc = 0x1E7900u;
    {
        const bool branch_taken_0x1e7900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7900) {
            ctx->pc = 0x1E7A68u;
            goto label_1e7a68;
        }
    }
    ctx->pc = 0x1E7908u;
label_1e7908:
    // 0x1e7908: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e7908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e790c:
    // 0x1e790c: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
label_1e7910:
    if (ctx->pc == 0x1E7910u) {
        ctx->pc = 0x1E7910u;
            // 0x1e7910: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1E7914u;
        goto label_1e7914;
    }
    ctx->pc = 0x1E790Cu;
    {
        const bool branch_taken_0x1e790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E790Cu;
            // 0x1e7910: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e790c) {
            ctx->pc = 0x1E7A00u;
            goto label_1e7a00;
        }
    }
    ctx->pc = 0x1E7914u;
label_1e7914:
    // 0x1e7914: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1e7918:
    if (ctx->pc == 0x1E7918u) {
        ctx->pc = 0x1E791Cu;
        goto label_1e791c;
    }
    ctx->pc = 0x1E7914u;
    {
        const bool branch_taken_0x1e7914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7914) {
            ctx->pc = 0x1E7998u;
            goto label_1e7998;
        }
    }
    ctx->pc = 0x1E791Cu;
label_1e791c:
    // 0x1e791c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1e791cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1e7920:
    // 0x1e7920: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1e7924:
    if (ctx->pc == 0x1E7924u) {
        ctx->pc = 0x1E7928u;
        goto label_1e7928;
    }
    ctx->pc = 0x1E7920u;
    {
        const bool branch_taken_0x1e7920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7920) {
            ctx->pc = 0x1E7930u;
            goto label_1e7930;
        }
    }
    ctx->pc = 0x1E7928u;
label_1e7928:
    // 0x1e7928: 0x10000127  b           . + 4 + (0x127 << 2)
label_1e792c:
    if (ctx->pc == 0x1E792Cu) {
        ctx->pc = 0x1E7930u;
        goto label_1e7930;
    }
    ctx->pc = 0x1E7928u;
    {
        const bool branch_taken_0x1e7928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7928) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7930u;
label_1e7930:
    // 0x1e7930: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7934:
    // 0x1e7934: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7938:
    // 0x1e7938: 0xc0655a8  jal         func_1956A0
label_1e793c:
    if (ctx->pc == 0x1E793Cu) {
        ctx->pc = 0x1E793Cu;
            // 0x1e793c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7940u;
        goto label_1e7940;
    }
    ctx->pc = 0x1E7938u;
    SET_GPR_U32(ctx, 31, 0x1E7940u);
    ctx->pc = 0x1E793Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7938u;
            // 0x1e793c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7940u; }
        if (ctx->pc != 0x1E7940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7940u; }
        if (ctx->pc != 0x1E7940u) { return; }
    }
    ctx->pc = 0x1E7940u;
label_1e7940:
    // 0x1e7940: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7944:
    // 0x1e7944: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7948:
    // 0x1e7948: 0xc0655a8  jal         func_1956A0
label_1e794c:
    if (ctx->pc == 0x1E794Cu) {
        ctx->pc = 0x1E794Cu;
            // 0x1e794c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7950u;
        goto label_1e7950;
    }
    ctx->pc = 0x1E7948u;
    SET_GPR_U32(ctx, 31, 0x1E7950u);
    ctx->pc = 0x1E794Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7948u;
            // 0x1e794c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7950u; }
        if (ctx->pc != 0x1E7950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7950u; }
        if (ctx->pc != 0x1E7950u) { return; }
    }
    ctx->pc = 0x1E7950u;
label_1e7950:
    // 0x1e7950: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7954:
    // 0x1e7954: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e7954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e7958:
    // 0x1e7958: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e795c:
    // 0x1e795c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e795cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7960:
    // 0x1e7960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e7964:
    // 0x1e7964: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7968:
    // 0x1e7968: 0xc0655dc  jal         func_195770
label_1e796c:
    if (ctx->pc == 0x1E796Cu) {
        ctx->pc = 0x1E796Cu;
            // 0x1e796c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E7970u;
        goto label_1e7970;
    }
    ctx->pc = 0x1E7968u;
    SET_GPR_U32(ctx, 31, 0x1E7970u);
    ctx->pc = 0x1E796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7968u;
            // 0x1e796c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7970u; }
        if (ctx->pc != 0x1E7970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7970u; }
        if (ctx->pc != 0x1E7970u) { return; }
    }
    ctx->pc = 0x1E7970u;
label_1e7970:
    // 0x1e7970: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7974:
    // 0x1e7974: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e7974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e7978:
    // 0x1e7978: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e797c:
    // 0x1e797c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e797cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7980:
    // 0x1e7980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e7984:
    // 0x1e7984: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7988:
    // 0x1e7988: 0xc0655dc  jal         func_195770
label_1e798c:
    if (ctx->pc == 0x1E798Cu) {
        ctx->pc = 0x1E798Cu;
            // 0x1e798c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E7990u;
        goto label_1e7990;
    }
    ctx->pc = 0x1E7988u;
    SET_GPR_U32(ctx, 31, 0x1E7990u);
    ctx->pc = 0x1E798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7988u;
            // 0x1e798c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7990u; }
        if (ctx->pc != 0x1E7990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7990u; }
        if (ctx->pc != 0x1E7990u) { return; }
    }
    ctx->pc = 0x1E7990u;
label_1e7990:
    // 0x1e7990: 0x1000010d  b           . + 4 + (0x10D << 2)
label_1e7994:
    if (ctx->pc == 0x1E7994u) {
        ctx->pc = 0x1E7998u;
        goto label_1e7998;
    }
    ctx->pc = 0x1E7990u;
    {
        const bool branch_taken_0x1e7990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7990) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7998u;
label_1e7998:
    // 0x1e7998: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e799c:
    // 0x1e799c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e79a0:
    // 0x1e79a0: 0xc0655a8  jal         func_1956A0
label_1e79a4:
    if (ctx->pc == 0x1E79A4u) {
        ctx->pc = 0x1E79A4u;
            // 0x1e79a4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E79A8u;
        goto label_1e79a8;
    }
    ctx->pc = 0x1E79A0u;
    SET_GPR_U32(ctx, 31, 0x1E79A8u);
    ctx->pc = 0x1E79A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79A0u;
            // 0x1e79a4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A8u; }
        if (ctx->pc != 0x1E79A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79A8u; }
        if (ctx->pc != 0x1E79A8u) { return; }
    }
    ctx->pc = 0x1E79A8u;
label_1e79a8:
    // 0x1e79a8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e79ac:
    // 0x1e79ac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e79acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e79b0:
    // 0x1e79b0: 0xc0655a8  jal         func_1956A0
label_1e79b4:
    if (ctx->pc == 0x1E79B4u) {
        ctx->pc = 0x1E79B4u;
            // 0x1e79b4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E79B8u;
        goto label_1e79b8;
    }
    ctx->pc = 0x1E79B0u;
    SET_GPR_U32(ctx, 31, 0x1E79B8u);
    ctx->pc = 0x1E79B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79B0u;
            // 0x1e79b4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B8u; }
        if (ctx->pc != 0x1E79B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79B8u; }
        if (ctx->pc != 0x1E79B8u) { return; }
    }
    ctx->pc = 0x1E79B8u;
label_1e79b8:
    // 0x1e79b8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e79bc:
    // 0x1e79bc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1e79c0:
    // 0x1e79c0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e79c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e79c4:
    // 0x1e79c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e79c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e79c8:
    // 0x1e79c8: 0x0  nop
    ctx->pc = 0x1e79c8u;
    // NOP
label_1e79cc:
    // 0x1e79cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e79ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e79d0:
    // 0x1e79d0: 0xc0655dc  jal         func_195770
label_1e79d4:
    if (ctx->pc == 0x1E79D4u) {
        ctx->pc = 0x1E79D4u;
            // 0x1e79d4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E79D8u;
        goto label_1e79d8;
    }
    ctx->pc = 0x1E79D0u;
    SET_GPR_U32(ctx, 31, 0x1E79D8u);
    ctx->pc = 0x1E79D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79D0u;
            // 0x1e79d4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79D8u; }
        if (ctx->pc != 0x1E79D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79D8u; }
        if (ctx->pc != 0x1E79D8u) { return; }
    }
    ctx->pc = 0x1E79D8u;
label_1e79d8:
    // 0x1e79d8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e79dc:
    // 0x1e79dc: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1e79dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1e79e0:
    // 0x1e79e0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e79e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e79e4:
    // 0x1e79e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e79e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e79e8:
    // 0x1e79e8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e79e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1e79ec:
    // 0x1e79ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e79ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e79f0:
    // 0x1e79f0: 0xc0655dc  jal         func_195770
label_1e79f4:
    if (ctx->pc == 0x1E79F4u) {
        ctx->pc = 0x1E79F4u;
            // 0x1e79f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E79F8u;
        goto label_1e79f8;
    }
    ctx->pc = 0x1E79F0u;
    SET_GPR_U32(ctx, 31, 0x1E79F8u);
    ctx->pc = 0x1E79F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E79F0u;
            // 0x1e79f4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79F8u; }
        if (ctx->pc != 0x1E79F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E79F8u; }
        if (ctx->pc != 0x1E79F8u) { return; }
    }
    ctx->pc = 0x1E79F8u;
label_1e79f8:
    // 0x1e79f8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_1e79fc:
    if (ctx->pc == 0x1E79FCu) {
        ctx->pc = 0x1E7A00u;
        goto label_1e7a00;
    }
    ctx->pc = 0x1E79F8u;
    {
        const bool branch_taken_0x1e79f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e79f8) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7A00u;
label_1e7a00:
    // 0x1e7a00: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a04:
    // 0x1e7a04: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a08:
    // 0x1e7a08: 0xc0655a8  jal         func_1956A0
label_1e7a0c:
    if (ctx->pc == 0x1E7A0Cu) {
        ctx->pc = 0x1E7A0Cu;
            // 0x1e7a0c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7A10u;
        goto label_1e7a10;
    }
    ctx->pc = 0x1E7A08u;
    SET_GPR_U32(ctx, 31, 0x1E7A10u);
    ctx->pc = 0x1E7A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A08u;
            // 0x1e7a0c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A10u; }
        if (ctx->pc != 0x1E7A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A10u; }
        if (ctx->pc != 0x1E7A10u) { return; }
    }
    ctx->pc = 0x1E7A10u;
label_1e7a10:
    // 0x1e7a10: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a14:
    // 0x1e7a14: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a18:
    // 0x1e7a18: 0xc0655a8  jal         func_1956A0
label_1e7a1c:
    if (ctx->pc == 0x1E7A1Cu) {
        ctx->pc = 0x1E7A1Cu;
            // 0x1e7a1c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7A20u;
        goto label_1e7a20;
    }
    ctx->pc = 0x1E7A18u;
    SET_GPR_U32(ctx, 31, 0x1E7A20u);
    ctx->pc = 0x1E7A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A18u;
            // 0x1e7a1c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A20u; }
        if (ctx->pc != 0x1E7A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A20u; }
        if (ctx->pc != 0x1E7A20u) { return; }
    }
    ctx->pc = 0x1E7A20u;
label_1e7a20:
    // 0x1e7a20: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a24:
    // 0x1e7a24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e7a28:
    // 0x1e7a28: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a2c:
    // 0x1e7a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7a30:
    // 0x1e7a30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e7a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e7a34:
    // 0x1e7a34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7a38:
    // 0x1e7a38: 0xc0655dc  jal         func_195770
label_1e7a3c:
    if (ctx->pc == 0x1E7A3Cu) {
        ctx->pc = 0x1E7A3Cu;
            // 0x1e7a3c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E7A40u;
        goto label_1e7a40;
    }
    ctx->pc = 0x1E7A38u;
    SET_GPR_U32(ctx, 31, 0x1E7A40u);
    ctx->pc = 0x1E7A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A38u;
            // 0x1e7a3c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A40u; }
        if (ctx->pc != 0x1E7A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A40u; }
        if (ctx->pc != 0x1E7A40u) { return; }
    }
    ctx->pc = 0x1E7A40u;
label_1e7a40:
    // 0x1e7a40: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a44:
    // 0x1e7a44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e7a48:
    // 0x1e7a48: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a4c:
    // 0x1e7a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7a50:
    // 0x1e7a50: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e7a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e7a54:
    // 0x1e7a54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7a58:
    // 0x1e7a58: 0xc0655dc  jal         func_195770
label_1e7a5c:
    if (ctx->pc == 0x1E7A5Cu) {
        ctx->pc = 0x1E7A5Cu;
            // 0x1e7a5c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E7A60u;
        goto label_1e7a60;
    }
    ctx->pc = 0x1E7A58u;
    SET_GPR_U32(ctx, 31, 0x1E7A60u);
    ctx->pc = 0x1E7A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A58u;
            // 0x1e7a5c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A60u; }
        if (ctx->pc != 0x1E7A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A60u; }
        if (ctx->pc != 0x1E7A60u) { return; }
    }
    ctx->pc = 0x1E7A60u;
label_1e7a60:
    // 0x1e7a60: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_1e7a64:
    if (ctx->pc == 0x1E7A64u) {
        ctx->pc = 0x1E7A68u;
        goto label_1e7a68;
    }
    ctx->pc = 0x1E7A60u;
    {
        const bool branch_taken_0x1e7a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7a60) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7A68u;
label_1e7a68:
    // 0x1e7a68: 0xc065d00  jal         func_197400
label_1e7a6c:
    if (ctx->pc == 0x1E7A6Cu) {
        ctx->pc = 0x1E7A70u;
        goto label_1e7a70;
    }
    ctx->pc = 0x1E7A68u;
    SET_GPR_U32(ctx, 31, 0x1E7A70u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A70u; }
        if (ctx->pc != 0x1E7A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A70u; }
        if (ctx->pc != 0x1E7A70u) { return; }
    }
    ctx->pc = 0x1E7A70u;
label_1e7a70:
    // 0x1e7a70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7a74:
    // 0x1e7a74: 0x144300d4  bne         $v0, $v1, . + 4 + (0xD4 << 2)
label_1e7a78:
    if (ctx->pc == 0x1E7A78u) {
        ctx->pc = 0x1E7A7Cu;
        goto label_1e7a7c;
    }
    ctx->pc = 0x1E7A74u;
    {
        const bool branch_taken_0x1e7a74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7a74) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7A7Cu;
label_1e7a7c:
    // 0x1e7a7c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a80:
    // 0x1e7a80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a84:
    // 0x1e7a84: 0xc0655a8  jal         func_1956A0
label_1e7a88:
    if (ctx->pc == 0x1E7A88u) {
        ctx->pc = 0x1E7A88u;
            // 0x1e7a88: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7A8Cu;
        goto label_1e7a8c;
    }
    ctx->pc = 0x1E7A84u;
    SET_GPR_U32(ctx, 31, 0x1E7A8Cu);
    ctx->pc = 0x1E7A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A84u;
            // 0x1e7a88: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A8Cu; }
        if (ctx->pc != 0x1E7A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A8Cu; }
        if (ctx->pc != 0x1E7A8Cu) { return; }
    }
    ctx->pc = 0x1E7A8Cu;
label_1e7a8c:
    // 0x1e7a8c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7a90:
    // 0x1e7a90: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7a94:
    // 0x1e7a94: 0xc0655a8  jal         func_1956A0
label_1e7a98:
    if (ctx->pc == 0x1E7A98u) {
        ctx->pc = 0x1E7A98u;
            // 0x1e7a98: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7A9Cu;
        goto label_1e7a9c;
    }
    ctx->pc = 0x1E7A94u;
    SET_GPR_U32(ctx, 31, 0x1E7A9Cu);
    ctx->pc = 0x1E7A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A94u;
            // 0x1e7a98: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A9Cu; }
        if (ctx->pc != 0x1E7A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A9Cu; }
        if (ctx->pc != 0x1E7A9Cu) { return; }
    }
    ctx->pc = 0x1E7A9Cu;
label_1e7a9c:
    // 0x1e7a9c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7aa0:
    // 0x1e7aa0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e7aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e7aa4:
    // 0x1e7aa4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7aa8:
    // 0x1e7aa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7aac:
    // 0x1e7aac: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1e7aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1e7ab0:
    // 0x1e7ab0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7ab4:
    // 0x1e7ab4: 0xc0655dc  jal         func_195770
label_1e7ab8:
    if (ctx->pc == 0x1E7AB8u) {
        ctx->pc = 0x1E7AB8u;
            // 0x1e7ab8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E7ABCu;
        goto label_1e7abc;
    }
    ctx->pc = 0x1E7AB4u;
    SET_GPR_U32(ctx, 31, 0x1E7ABCu);
    ctx->pc = 0x1E7AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AB4u;
            // 0x1e7ab8: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ABCu; }
        if (ctx->pc != 0x1E7ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ABCu; }
        if (ctx->pc != 0x1E7ABCu) { return; }
    }
    ctx->pc = 0x1E7ABCu;
label_1e7abc:
    // 0x1e7abc: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7ac0:
    // 0x1e7ac0: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1e7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1e7ac4:
    // 0x1e7ac4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7ac8:
    // 0x1e7ac8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7acc:
    // 0x1e7acc: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1e7accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1e7ad0:
    // 0x1e7ad0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7ad4:
    // 0x1e7ad4: 0xc0655dc  jal         func_195770
label_1e7ad8:
    if (ctx->pc == 0x1E7AD8u) {
        ctx->pc = 0x1E7AD8u;
            // 0x1e7ad8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E7ADCu;
        goto label_1e7adc;
    }
    ctx->pc = 0x1E7AD4u;
    SET_GPR_U32(ctx, 31, 0x1E7ADCu);
    ctx->pc = 0x1E7AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7AD4u;
            // 0x1e7ad8: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ADCu; }
        if (ctx->pc != 0x1E7ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ADCu; }
        if (ctx->pc != 0x1E7ADCu) { return; }
    }
    ctx->pc = 0x1E7ADCu;
label_1e7adc:
    // 0x1e7adc: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1e7ae0:
    if (ctx->pc == 0x1E7AE0u) {
        ctx->pc = 0x1E7AE4u;
        goto label_1e7ae4;
    }
    ctx->pc = 0x1E7ADCu;
    {
        const bool branch_taken_0x1e7adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7adc) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7AE4u;
label_1e7ae4:
    // 0x1e7ae4: 0x0  nop
    ctx->pc = 0x1e7ae4u;
    // NOP
label_1e7ae8:
    // 0x1e7ae8: 0xc065d00  jal         func_197400
label_1e7aec:
    if (ctx->pc == 0x1E7AECu) {
        ctx->pc = 0x1E7AF0u;
        goto label_1e7af0;
    }
    ctx->pc = 0x1E7AE8u;
    SET_GPR_U32(ctx, 31, 0x1E7AF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AF0u; }
        if (ctx->pc != 0x1E7AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7AF0u; }
        if (ctx->pc != 0x1E7AF0u) { return; }
    }
    ctx->pc = 0x1E7AF0u;
label_1e7af0:
    // 0x1e7af0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7af4:
    // 0x1e7af4: 0x144300b4  bne         $v0, $v1, . + 4 + (0xB4 << 2)
label_1e7af8:
    if (ctx->pc == 0x1E7AF8u) {
        ctx->pc = 0x1E7AFCu;
        goto label_1e7afc;
    }
    ctx->pc = 0x1E7AF4u;
    {
        const bool branch_taken_0x1e7af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7af4) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7AFCu;
label_1e7afc:
    // 0x1e7afc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7b00:
    // 0x1e7b00: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7b04:
    // 0x1e7b04: 0xc0655a8  jal         func_1956A0
label_1e7b08:
    if (ctx->pc == 0x1E7B08u) {
        ctx->pc = 0x1E7B08u;
            // 0x1e7b08: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7B0Cu;
        goto label_1e7b0c;
    }
    ctx->pc = 0x1E7B04u;
    SET_GPR_U32(ctx, 31, 0x1E7B0Cu);
    ctx->pc = 0x1E7B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B04u;
            // 0x1e7b08: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B0Cu; }
        if (ctx->pc != 0x1E7B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B0Cu; }
        if (ctx->pc != 0x1E7B0Cu) { return; }
    }
    ctx->pc = 0x1E7B0Cu;
label_1e7b0c:
    // 0x1e7b0c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7b10:
    // 0x1e7b10: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7b14:
    // 0x1e7b14: 0xc0655a8  jal         func_1956A0
label_1e7b18:
    if (ctx->pc == 0x1E7B18u) {
        ctx->pc = 0x1E7B18u;
            // 0x1e7b18: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7B1Cu;
        goto label_1e7b1c;
    }
    ctx->pc = 0x1E7B14u;
    SET_GPR_U32(ctx, 31, 0x1E7B1Cu);
    ctx->pc = 0x1E7B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B14u;
            // 0x1e7b18: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B1Cu; }
        if (ctx->pc != 0x1E7B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B1Cu; }
        if (ctx->pc != 0x1E7B1Cu) { return; }
    }
    ctx->pc = 0x1E7B1Cu;
label_1e7b1c:
    // 0x1e7b1c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7b20:
    // 0x1e7b20: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e7b24:
    // 0x1e7b24: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7b28:
    // 0x1e7b28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e7b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7b2c:
    // 0x1e7b2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7b30:
    // 0x1e7b30: 0xc0655dc  jal         func_195770
label_1e7b34:
    if (ctx->pc == 0x1E7B34u) {
        ctx->pc = 0x1E7B34u;
            // 0x1e7b34: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E7B38u;
        goto label_1e7b38;
    }
    ctx->pc = 0x1E7B30u;
    SET_GPR_U32(ctx, 31, 0x1E7B38u);
    ctx->pc = 0x1E7B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B30u;
            // 0x1e7b34: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B38u; }
        if (ctx->pc != 0x1E7B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B38u; }
        if (ctx->pc != 0x1E7B38u) { return; }
    }
    ctx->pc = 0x1E7B38u;
label_1e7b38:
    // 0x1e7b38: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7b3c:
    // 0x1e7b3c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e7b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1e7b40:
    // 0x1e7b40: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7b44:
    // 0x1e7b44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e7b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7b48:
    // 0x1e7b48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7b4c:
    // 0x1e7b4c: 0xc0655dc  jal         func_195770
label_1e7b50:
    if (ctx->pc == 0x1E7B50u) {
        ctx->pc = 0x1E7B50u;
            // 0x1e7b50: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E7B54u;
        goto label_1e7b54;
    }
    ctx->pc = 0x1E7B4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7B54u);
    ctx->pc = 0x1E7B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B4Cu;
            // 0x1e7b50: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B54u; }
        if (ctx->pc != 0x1E7B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B54u; }
        if (ctx->pc != 0x1E7B54u) { return; }
    }
    ctx->pc = 0x1E7B54u;
label_1e7b54:
    // 0x1e7b54: 0x1000009c  b           . + 4 + (0x9C << 2)
label_1e7b58:
    if (ctx->pc == 0x1E7B58u) {
        ctx->pc = 0x1E7B5Cu;
        goto label_1e7b5c;
    }
    ctx->pc = 0x1E7B54u;
    {
        const bool branch_taken_0x1e7b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7b54) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7B5Cu;
label_1e7b5c:
    // 0x1e7b5c: 0x0  nop
    ctx->pc = 0x1e7b5cu;
    // NOP
label_1e7b60:
    // 0x1e7b60: 0xc065d00  jal         func_197400
label_1e7b64:
    if (ctx->pc == 0x1E7B64u) {
        ctx->pc = 0x1E7B68u;
        goto label_1e7b68;
    }
    ctx->pc = 0x1E7B60u;
    SET_GPR_U32(ctx, 31, 0x1E7B68u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B68u; }
        if (ctx->pc != 0x1E7B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7B68u; }
        if (ctx->pc != 0x1E7B68u) { return; }
    }
    ctx->pc = 0x1E7B68u;
label_1e7b68:
    // 0x1e7b68: 0x18400097  blez        $v0, . + 4 + (0x97 << 2)
label_1e7b6c:
    if (ctx->pc == 0x1E7B6Cu) {
        ctx->pc = 0x1E7B6Cu;
            // 0x1e7b6c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x1E7B70u;
        goto label_1e7b70;
    }
    ctx->pc = 0x1E7B68u;
    {
        const bool branch_taken_0x1e7b68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1E7B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7B68u;
            // 0x1e7b6c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7b68) {
            ctx->pc = 0x1E7DC8u;
            goto label_1e7dc8;
        }
    }
    ctx->pc = 0x1E7B70u;
label_1e7b70:
    // 0x1e7b70: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1e7b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e7b74:
    // 0x1e7b74: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1e7b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1e7b78:
    // 0x1e7b78: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x1e7b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1e7b7c:
    // 0x1e7b7c: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x1e7b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1e7b80:
    // 0x1e7b80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e7b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e7b84:
    // 0x1e7b84: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e7b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e7b88:
    // 0x1e7b88: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e7b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e7b8c:
    // 0x1e7b8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e7b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e7b90:
    // 0x1e7b90: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1e7b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1e7b94:
    // 0x1e7b94: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1e7b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1e7b98:
    // 0x1e7b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e7b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7b9c:
    // 0x1e7b9c: 0x0  nop
    ctx->pc = 0x1e7b9cu;
    // NOP
label_1e7ba0:
    // 0x1e7ba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7ba4:
    // 0x1e7ba4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e7ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e7ba8:
    // 0x1e7ba8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e7ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e7bac:
    // 0x1e7bac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e7bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7bb0:
    // 0x1e7bb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7bb4:
    // 0x1e7bb4: 0x0  nop
    ctx->pc = 0x1e7bb4u;
    // NOP
label_1e7bb8:
    // 0x1e7bb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7bb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7bbc:
    // 0x1e7bbc: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e7bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e7bc0:
    // 0x1e7bc0: 0xc04b6ee  jal         func_12DBB8
label_1e7bc4:
    if (ctx->pc == 0x1E7BC4u) {
        ctx->pc = 0x1E7BC4u;
            // 0x1e7bc4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1E7BC8u;
        goto label_1e7bc8;
    }
    ctx->pc = 0x1E7BC0u;
    SET_GPR_U32(ctx, 31, 0x1E7BC8u);
    ctx->pc = 0x1E7BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BC0u;
            // 0x1e7bc4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BC8u; }
        if (ctx->pc != 0x1E7BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7BC8u; }
        if (ctx->pc != 0x1E7BC8u) { return; }
    }
    ctx->pc = 0x1E7BC8u;
label_1e7bc8:
    // 0x1e7bc8: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1e7bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7bcc:
    // 0x1e7bcc: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1e7bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_1e7bd0:
    // 0x1e7bd0: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7bd4:
    // 0x1e7bd4: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1e7bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1e7bd8:
    // 0x1e7bd8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7bdc:
    // 0x1e7bdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e7bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e7be0:
    // 0x1e7be0: 0x0  nop
    ctx->pc = 0x1e7be0u;
    // NOP
label_1e7be4:
    // 0x1e7be4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1e7be4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1e7be8:
    // 0x1e7be8: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e7be8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1e7bec:
    // 0x1e7bec: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1e7bf0:
    // 0x1e7bf0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e7bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e7bf4:
    // 0x1e7bf4: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x1e7bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_1e7bf8:
    // 0x1e7bf8: 0xc05d080  jal         func_174200
label_1e7bfc:
    if (ctx->pc == 0x1E7BFCu) {
        ctx->pc = 0x1E7BFCu;
            // 0x1e7bfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E7C00u;
        goto label_1e7c00;
    }
    ctx->pc = 0x1E7BF8u;
    SET_GPR_U32(ctx, 31, 0x1E7C00u);
    ctx->pc = 0x1E7BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7BF8u;
            // 0x1e7bfc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C00u; }
        if (ctx->pc != 0x1E7C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C00u; }
        if (ctx->pc != 0x1E7C00u) { return; }
    }
    ctx->pc = 0x1E7C00u;
label_1e7c00:
    // 0x1e7c00: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c04:
    // 0x1e7c04: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c08:
    // 0x1e7c08: 0xc0655a8  jal         func_1956A0
label_1e7c0c:
    if (ctx->pc == 0x1E7C0Cu) {
        ctx->pc = 0x1E7C0Cu;
            // 0x1e7c0c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1E7C10u;
        goto label_1e7c10;
    }
    ctx->pc = 0x1E7C08u;
    SET_GPR_U32(ctx, 31, 0x1E7C10u);
    ctx->pc = 0x1E7C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C08u;
            // 0x1e7c0c: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C10u; }
        if (ctx->pc != 0x1E7C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C10u; }
        if (ctx->pc != 0x1E7C10u) { return; }
    }
    ctx->pc = 0x1E7C10u;
label_1e7c10:
    // 0x1e7c10: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c14:
    // 0x1e7c14: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1e7c18:
    // 0x1e7c18: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c1c:
    // 0x1e7c1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7c1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7c20:
    // 0x1e7c20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c24:
    // 0x1e7c24: 0xc065480  jal         func_195200
label_1e7c28:
    if (ctx->pc == 0x1E7C28u) {
        ctx->pc = 0x1E7C28u;
            // 0x1e7c28: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7C2Cu;
        goto label_1e7c2c;
    }
    ctx->pc = 0x1E7C24u;
    SET_GPR_U32(ctx, 31, 0x1E7C2Cu);
    ctx->pc = 0x1E7C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C24u;
            // 0x1e7c28: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C2Cu; }
        if (ctx->pc != 0x1E7C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C2Cu; }
        if (ctx->pc != 0x1E7C2Cu) { return; }
    }
    ctx->pc = 0x1E7C2Cu;
label_1e7c2c:
    // 0x1e7c2c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c30:
    // 0x1e7c30: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1e7c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_1e7c34:
    // 0x1e7c34: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c38:
    // 0x1e7c38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7c3c:
    // 0x1e7c3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c40:
    // 0x1e7c40: 0xc065480  jal         func_195200
label_1e7c44:
    if (ctx->pc == 0x1E7C44u) {
        ctx->pc = 0x1E7C44u;
            // 0x1e7c44: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7C48u;
        goto label_1e7c48;
    }
    ctx->pc = 0x1E7C40u;
    SET_GPR_U32(ctx, 31, 0x1E7C48u);
    ctx->pc = 0x1E7C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C40u;
            // 0x1e7c44: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C48u; }
        if (ctx->pc != 0x1E7C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C48u; }
        if (ctx->pc != 0x1E7C48u) { return; }
    }
    ctx->pc = 0x1E7C48u;
label_1e7c48:
    // 0x1e7c48: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c4c:
    // 0x1e7c4c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e7c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1e7c50:
    // 0x1e7c50: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c54:
    // 0x1e7c54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7c58:
    // 0x1e7c58: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c5c:
    // 0x1e7c5c: 0xc065480  jal         func_195200
label_1e7c60:
    if (ctx->pc == 0x1E7C60u) {
        ctx->pc = 0x1E7C60u;
            // 0x1e7c60: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7C64u;
        goto label_1e7c64;
    }
    ctx->pc = 0x1E7C5Cu;
    SET_GPR_U32(ctx, 31, 0x1E7C64u);
    ctx->pc = 0x1E7C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C5Cu;
            // 0x1e7c60: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C64u; }
        if (ctx->pc != 0x1E7C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C64u; }
        if (ctx->pc != 0x1E7C64u) { return; }
    }
    ctx->pc = 0x1E7C64u;
label_1e7c64:
    // 0x1e7c64: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c68:
    // 0x1e7c68: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x1e7c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_1e7c6c:
    // 0x1e7c6c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c70:
    // 0x1e7c70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7c74:
    // 0x1e7c74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c78:
    // 0x1e7c78: 0xc065480  jal         func_195200
label_1e7c7c:
    if (ctx->pc == 0x1E7C7Cu) {
        ctx->pc = 0x1E7C7Cu;
            // 0x1e7c7c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7C80u;
        goto label_1e7c80;
    }
    ctx->pc = 0x1E7C78u;
    SET_GPR_U32(ctx, 31, 0x1E7C80u);
    ctx->pc = 0x1E7C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C78u;
            // 0x1e7c7c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C80u; }
        if (ctx->pc != 0x1E7C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C80u; }
        if (ctx->pc != 0x1E7C80u) { return; }
    }
    ctx->pc = 0x1E7C80u;
label_1e7c80:
    // 0x1e7c80: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7c84:
    // 0x1e7c84: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1e7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1e7c88:
    // 0x1e7c88: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7c8c:
    // 0x1e7c8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7c90:
    // 0x1e7c90: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e7c90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e7c94:
    // 0x1e7c94: 0xc065480  jal         func_195200
label_1e7c98:
    if (ctx->pc == 0x1E7C98u) {
        ctx->pc = 0x1E7C98u;
            // 0x1e7c98: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1E7C9Cu;
        goto label_1e7c9c;
    }
    ctx->pc = 0x1E7C94u;
    SET_GPR_U32(ctx, 31, 0x1E7C9Cu);
    ctx->pc = 0x1E7C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7C94u;
            // 0x1e7c98: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C9Cu; }
        if (ctx->pc != 0x1E7C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7C9Cu; }
        if (ctx->pc != 0x1E7C9Cu) { return; }
    }
    ctx->pc = 0x1E7C9Cu;
label_1e7c9c:
    // 0x1e7c9c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e7c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e7ca0:
    // 0x1e7ca0: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1e7ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e7ca4:
    // 0x1e7ca4: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1e7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1e7ca8:
    // 0x1e7ca8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e7ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e7cac:
    // 0x1e7cac: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1e7cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1e7cb0:
    // 0x1e7cb0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1e7cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1e7cb4:
    // 0x1e7cb4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e7cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1e7cb8:
    // 0x1e7cb8: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1e7cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1e7cbc:
    // 0x1e7cbc: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1e7cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1e7cc0:
    // 0x1e7cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e7cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7cc4:
    // 0x1e7cc4: 0x0  nop
    ctx->pc = 0x1e7cc4u;
    // NOP
label_1e7cc8:
    // 0x1e7cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7ccc:
    // 0x1e7ccc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1e7cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e7cd0:
    // 0x1e7cd0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e7cd4:
    // 0x1e7cd4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e7cd8:
    // 0x1e7cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e7cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e7cdc:
    // 0x1e7cdc: 0x0  nop
    ctx->pc = 0x1e7cdcu;
    // NOP
label_1e7ce0:
    // 0x1e7ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e7ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1e7ce4:
    // 0x1e7ce4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e7ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e7ce8:
    // 0x1e7ce8: 0xc04b6ee  jal         func_12DBB8
label_1e7cec:
    if (ctx->pc == 0x1E7CECu) {
        ctx->pc = 0x1E7CECu;
            // 0x1e7cec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1E7CF0u;
        goto label_1e7cf0;
    }
    ctx->pc = 0x1E7CE8u;
    SET_GPR_U32(ctx, 31, 0x1E7CF0u);
    ctx->pc = 0x1E7CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7CE8u;
            // 0x1e7cec: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CF0u; }
        if (ctx->pc != 0x1E7CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7CF0u; }
        if (ctx->pc != 0x1E7CF0u) { return; }
    }
    ctx->pc = 0x1E7CF0u;
label_1e7cf0:
    // 0x1e7cf0: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1e7cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e7cf4:
    // 0x1e7cf4: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1e7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_1e7cf8:
    // 0x1e7cf8: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e7cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7cfc:
    // 0x1e7cfc: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1e7cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1e7d00:
    // 0x1e7d00: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e7d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7d04:
    // 0x1e7d04: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e7d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1e7d08:
    // 0x1e7d08: 0x0  nop
    ctx->pc = 0x1e7d08u;
    // NOP
label_1e7d0c:
    // 0x1e7d0c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1e7d0cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1e7d10:
    // 0x1e7d10: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1e7d10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1e7d14:
    // 0x1e7d14: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e7d14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1e7d18:
    // 0x1e7d18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e7d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e7d1c:
    // 0x1e7d1c: 0x44101000  mfc1        $s0, $f2
    ctx->pc = 0x1e7d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1e7d20:
    // 0x1e7d20: 0xc05d080  jal         func_174200
label_1e7d24:
    if (ctx->pc == 0x1E7D24u) {
        ctx->pc = 0x1E7D24u;
            // 0x1e7d24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E7D28u;
        goto label_1e7d28;
    }
    ctx->pc = 0x1E7D20u;
    SET_GPR_U32(ctx, 31, 0x1E7D28u);
    ctx->pc = 0x1E7D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D20u;
            // 0x1e7d24: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D28u; }
        if (ctx->pc != 0x1E7D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D28u; }
        if (ctx->pc != 0x1E7D28u) { return; }
    }
    ctx->pc = 0x1E7D28u;
label_1e7d28:
    // 0x1e7d28: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7d2c:
    // 0x1e7d2c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7d30:
    // 0x1e7d30: 0xc0655a8  jal         func_1956A0
label_1e7d34:
    if (ctx->pc == 0x1E7D34u) {
        ctx->pc = 0x1E7D34u;
            // 0x1e7d34: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1E7D38u;
        goto label_1e7d38;
    }
    ctx->pc = 0x1E7D30u;
    SET_GPR_U32(ctx, 31, 0x1E7D38u);
    ctx->pc = 0x1E7D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D30u;
            // 0x1e7d34: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D38u; }
        if (ctx->pc != 0x1E7D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D38u; }
        if (ctx->pc != 0x1E7D38u) { return; }
    }
    ctx->pc = 0x1E7D38u;
label_1e7d38:
    // 0x1e7d38: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7d3c:
    // 0x1e7d3c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1e7d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1e7d40:
    // 0x1e7d40: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7d44:
    // 0x1e7d44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7d48:
    // 0x1e7d48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d4c:
    // 0x1e7d4c: 0xc065480  jal         func_195200
label_1e7d50:
    if (ctx->pc == 0x1E7D50u) {
        ctx->pc = 0x1E7D50u;
            // 0x1e7d50: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1E7D54u;
        goto label_1e7d54;
    }
    ctx->pc = 0x1E7D4Cu;
    SET_GPR_U32(ctx, 31, 0x1E7D54u);
    ctx->pc = 0x1E7D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D4Cu;
            // 0x1e7d50: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D54u; }
        if (ctx->pc != 0x1E7D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D54u; }
        if (ctx->pc != 0x1E7D54u) { return; }
    }
    ctx->pc = 0x1E7D54u;
label_1e7d54:
    // 0x1e7d54: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7d58:
    // 0x1e7d58: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1e7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_1e7d5c:
    // 0x1e7d5c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7d60:
    // 0x1e7d60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7d60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7d64:
    // 0x1e7d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d68:
    // 0x1e7d68: 0xc065480  jal         func_195200
label_1e7d6c:
    if (ctx->pc == 0x1E7D6Cu) {
        ctx->pc = 0x1E7D6Cu;
            // 0x1e7d6c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1E7D70u;
        goto label_1e7d70;
    }
    ctx->pc = 0x1E7D68u;
    SET_GPR_U32(ctx, 31, 0x1E7D70u);
    ctx->pc = 0x1E7D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D68u;
            // 0x1e7d6c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D70u; }
        if (ctx->pc != 0x1E7D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D70u; }
        if (ctx->pc != 0x1E7D70u) { return; }
    }
    ctx->pc = 0x1E7D70u;
label_1e7d70:
    // 0x1e7d70: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7d74:
    // 0x1e7d74: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e7d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1e7d78:
    // 0x1e7d78: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7d7c:
    // 0x1e7d7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7d80:
    // 0x1e7d80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7d84:
    // 0x1e7d84: 0xc065480  jal         func_195200
label_1e7d88:
    if (ctx->pc == 0x1E7D88u) {
        ctx->pc = 0x1E7D88u;
            // 0x1e7d88: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1E7D8Cu;
        goto label_1e7d8c;
    }
    ctx->pc = 0x1E7D84u;
    SET_GPR_U32(ctx, 31, 0x1E7D8Cu);
    ctx->pc = 0x1E7D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7D84u;
            // 0x1e7d88: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D8Cu; }
        if (ctx->pc != 0x1E7D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7D8Cu; }
        if (ctx->pc != 0x1E7D8Cu) { return; }
    }
    ctx->pc = 0x1E7D8Cu;
label_1e7d8c:
    // 0x1e7d8c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7d90:
    // 0x1e7d90: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x1e7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_1e7d94:
    // 0x1e7d94: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7d98:
    // 0x1e7d98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7d9c:
    // 0x1e7d9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7da0:
    // 0x1e7da0: 0xc065480  jal         func_195200
label_1e7da4:
    if (ctx->pc == 0x1E7DA4u) {
        ctx->pc = 0x1E7DA4u;
            // 0x1e7da4: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1E7DA8u;
        goto label_1e7da8;
    }
    ctx->pc = 0x1E7DA0u;
    SET_GPR_U32(ctx, 31, 0x1E7DA8u);
    ctx->pc = 0x1E7DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DA0u;
            // 0x1e7da4: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DA8u; }
        if (ctx->pc != 0x1E7DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DA8u; }
        if (ctx->pc != 0x1E7DA8u) { return; }
    }
    ctx->pc = 0x1E7DA8u;
label_1e7da8:
    // 0x1e7da8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7dac:
    // 0x1e7dac: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1e7dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1e7db0:
    // 0x1e7db0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7db4:
    // 0x1e7db4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7db8:
    // 0x1e7db8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e7db8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e7dbc:
    // 0x1e7dbc: 0xc065480  jal         func_195200
label_1e7dc0:
    if (ctx->pc == 0x1E7DC0u) {
        ctx->pc = 0x1E7DC0u;
            // 0x1e7dc0: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1E7DC4u;
        goto label_1e7dc4;
    }
    ctx->pc = 0x1E7DBCu;
    SET_GPR_U32(ctx, 31, 0x1E7DC4u);
    ctx->pc = 0x1E7DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DBCu;
            // 0x1e7dc0: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DC4u; }
        if (ctx->pc != 0x1E7DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7DC4u; }
        if (ctx->pc != 0x1E7DC4u) { return; }
    }
    ctx->pc = 0x1E7DC4u;
label_1e7dc4:
    // 0x1e7dc4: 0x0  nop
    ctx->pc = 0x1e7dc4u;
    // NOP
label_1e7dc8:
    // 0x1e7dc8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e7dcc:
    // 0x1e7dcc: 0x28620096  slti        $v0, $v1, 0x96
    ctx->pc = 0x1e7dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1e7dd0:
    // 0x1e7dd0: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
label_1e7dd4:
    if (ctx->pc == 0x1E7DD4u) {
        ctx->pc = 0x1E7DD4u;
            // 0x1e7dd4: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->pc = 0x1E7DD8u;
        goto label_1e7dd8;
    }
    ctx->pc = 0x1E7DD0u;
    {
        const bool branch_taken_0x1e7dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DD0u;
            // 0x1e7dd4: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd0) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7DD8u;
label_1e7dd8:
    // 0x1e7dd8: 0x102000ad  beqz        $at, . + 4 + (0xAD << 2)
label_1e7ddc:
    if (ctx->pc == 0x1E7DDCu) {
        ctx->pc = 0x1E7DDCu;
            // 0x1e7ddc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1E7DE0u;
        goto label_1e7de0;
    }
    ctx->pc = 0x1E7DD8u;
    {
        const bool branch_taken_0x1e7dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7DD8u;
            // 0x1e7ddc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7dd8) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7DE0u;
label_1e7de0:
    // 0x1e7de0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7de0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7de4:
    // 0x1e7de4: 0x0  nop
    ctx->pc = 0x1e7de4u;
    // NOP
label_1e7de8:
    // 0x1e7de8: 0x0  nop
    ctx->pc = 0x1e7de8u;
    // NOP
label_1e7dec:
    // 0x1e7dec: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7decu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7df0:
    // 0x1e7df0: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_1e7df4:
    if (ctx->pc == 0x1E7DF4u) {
        ctx->pc = 0x1E7DF8u;
        goto label_1e7df8;
    }
    ctx->pc = 0x1E7DF0u;
    {
        const bool branch_taken_0x1e7df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7df0) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7DF8u;
label_1e7df8:
    // 0x1e7df8: 0xc065d00  jal         func_197400
label_1e7dfc:
    if (ctx->pc == 0x1E7DFCu) {
        ctx->pc = 0x1E7E00u;
        goto label_1e7e00;
    }
    ctx->pc = 0x1E7DF8u;
    SET_GPR_U32(ctx, 31, 0x1E7E00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E00u; }
        if (ctx->pc != 0x1E7E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E00u; }
        if (ctx->pc != 0x1E7E00u) { return; }
    }
    ctx->pc = 0x1E7E00u;
label_1e7e00:
    // 0x1e7e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e7e04:
    // 0x1e7e04: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_1e7e08:
    if (ctx->pc == 0x1E7E08u) {
        ctx->pc = 0x1E7E0Cu;
        goto label_1e7e0c;
    }
    ctx->pc = 0x1E7E04u;
    {
        const bool branch_taken_0x1e7e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7e04) {
            ctx->pc = 0x1E7E80u;
            goto label_1e7e80;
        }
    }
    ctx->pc = 0x1E7E0Cu;
label_1e7e0c:
    // 0x1e7e0c: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e7e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e7e10:
    // 0x1e7e10: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1e7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1e7e14:
    // 0x1e7e14: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e7e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7e18:
    // 0x1e7e18: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e7e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e7e1c:
    // 0x1e7e1c: 0xc05d080  jal         func_174200
label_1e7e20:
    if (ctx->pc == 0x1E7E20u) {
        ctx->pc = 0x1E7E20u;
            // 0x1e7e20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E7E24u;
        goto label_1e7e24;
    }
    ctx->pc = 0x1E7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E24u);
    ctx->pc = 0x1E7E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E1Cu;
            // 0x1e7e20: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E24u; }
        if (ctx->pc != 0x1E7E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E24u; }
        if (ctx->pc != 0x1E7E24u) { return; }
    }
    ctx->pc = 0x1E7E24u;
label_1e7e24:
    // 0x1e7e24: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7e28:
    // 0x1e7e28: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7e2c:
    // 0x1e7e2c: 0xc0655a8  jal         func_1956A0
label_1e7e30:
    if (ctx->pc == 0x1E7E30u) {
        ctx->pc = 0x1E7E30u;
            // 0x1e7e30: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1E7E34u;
        goto label_1e7e34;
    }
    ctx->pc = 0x1E7E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E7E34u);
    ctx->pc = 0x1E7E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E2Cu;
            // 0x1e7e30: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E34u; }
        if (ctx->pc != 0x1E7E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E34u; }
        if (ctx->pc != 0x1E7E34u) { return; }
    }
    ctx->pc = 0x1E7E34u;
label_1e7e34:
    // 0x1e7e34: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7e38:
    // 0x1e7e38: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x1e7e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1e7e3c:
    // 0x1e7e3c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7e40:
    // 0x1e7e40: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x1e7e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1e7e44:
    // 0x1e7e44: 0xc065508  jal         func_195420
label_1e7e48:
    if (ctx->pc == 0x1E7E48u) {
        ctx->pc = 0x1E7E48u;
            // 0x1e7e48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E7E4Cu;
        goto label_1e7e4c;
    }
    ctx->pc = 0x1E7E44u;
    SET_GPR_U32(ctx, 31, 0x1E7E4Cu);
    ctx->pc = 0x1E7E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E44u;
            // 0x1e7e48: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E4Cu; }
        if (ctx->pc != 0x1E7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E4Cu; }
        if (ctx->pc != 0x1E7E4Cu) { return; }
    }
    ctx->pc = 0x1E7E4Cu;
label_1e7e4c:
    // 0x1e7e4c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7e50:
    // 0x1e7e50: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7e54:
    // 0x1e7e54: 0xc0655a8  jal         func_1956A0
label_1e7e58:
    if (ctx->pc == 0x1E7E58u) {
        ctx->pc = 0x1E7E58u;
            // 0x1e7e58: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1E7E5Cu;
        goto label_1e7e5c;
    }
    ctx->pc = 0x1E7E54u;
    SET_GPR_U32(ctx, 31, 0x1E7E5Cu);
    ctx->pc = 0x1E7E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E54u;
            // 0x1e7e58: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E5Cu; }
        if (ctx->pc != 0x1E7E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E5Cu; }
        if (ctx->pc != 0x1E7E5Cu) { return; }
    }
    ctx->pc = 0x1E7E5Cu;
label_1e7e5c:
    // 0x1e7e5c: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x1e7e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1e7e60:
    // 0x1e7e60: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1e7e64:
    // 0x1e7e64: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1e7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7e68:
    // 0x1e7e68: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7e6c:
    // 0x1e7e6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e7e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1e7e70:
    // 0x1e7e70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e7e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e7e74:
    // 0x1e7e74: 0xc065508  jal         func_195420
label_1e7e78:
    if (ctx->pc == 0x1E7E78u) {
        ctx->pc = 0x1E7E78u;
            // 0x1e7e78: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E7E7Cu;
        goto label_1e7e7c;
    }
    ctx->pc = 0x1E7E74u;
    SET_GPR_U32(ctx, 31, 0x1E7E7Cu);
    ctx->pc = 0x1E7E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E74u;
            // 0x1e7e78: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E7Cu; }
        if (ctx->pc != 0x1E7E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7E7Cu; }
        if (ctx->pc != 0x1E7E7Cu) { return; }
    }
    ctx->pc = 0x1E7E7Cu;
label_1e7e7c:
    // 0x1e7e7c: 0x0  nop
    ctx->pc = 0x1e7e7cu;
    // NOP
label_1e7e80:
    // 0x1e7e80: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x1e7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1e7e84:
    // 0x1e7e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e7e88:
    // 0x1e7e88: 0x10000081  b           . + 4 + (0x81 << 2)
label_1e7e8c:
    if (ctx->pc == 0x1E7E8Cu) {
        ctx->pc = 0x1E7E8Cu;
            // 0x1e7e8c: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1E7E90u;
        goto label_1e7e90;
    }
    ctx->pc = 0x1E7E88u;
    {
        const bool branch_taken_0x1e7e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E88u;
            // 0x1e7e8c: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e88) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7E90u;
label_1e7e90:
    // 0x1e7e90: 0x28610105  slti        $at, $v1, 0x105
    ctx->pc = 0x1e7e90u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)261) ? 1 : 0);
label_1e7e94:
    // 0x1e7e94: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1e7e98:
    if (ctx->pc == 0x1E7E98u) {
        ctx->pc = 0x1E7E98u;
            // 0x1e7e98: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1E7E9Cu;
        goto label_1e7e9c;
    }
    ctx->pc = 0x1E7E94u;
    {
        const bool branch_taken_0x1e7e94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7E94u;
            // 0x1e7e98: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e94) {
            ctx->pc = 0x1E7ED8u;
            goto label_1e7ed8;
        }
    }
    ctx->pc = 0x1E7E9Cu;
label_1e7e9c:
    // 0x1e7e9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e7e9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1e7ea0:
    // 0x1e7ea0: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x1e7ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_1e7ea4:
    // 0x1e7ea4: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7ea8:
    // 0x1e7ea8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7eac:
    // 0x1e7eac: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1e7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1e7eb0:
    // 0x1e7eb0: 0xc065590  jal         func_195640
label_1e7eb4:
    if (ctx->pc == 0x1E7EB4u) {
        ctx->pc = 0x1E7EB4u;
            // 0x1e7eb4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1E7EB8u;
        goto label_1e7eb8;
    }
    ctx->pc = 0x1E7EB0u;
    SET_GPR_U32(ctx, 31, 0x1E7EB8u);
    ctx->pc = 0x1E7EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7EB0u;
            // 0x1e7eb4: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EB8u; }
        if (ctx->pc != 0x1E7EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7EB8u; }
        if (ctx->pc != 0x1E7EB8u) { return; }
    }
    ctx->pc = 0x1E7EB8u;
label_1e7eb8:
    // 0x1e7eb8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7ebc:
    // 0x1e7ebc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7ec0:
    // 0x1e7ec0: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1e7ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1e7ec4:
    // 0x1e7ec4: 0xc065590  jal         func_195640
label_1e7ec8:
    if (ctx->pc == 0x1E7EC8u) {
        ctx->pc = 0x1E7EC8u;
            // 0x1e7ec8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1E7ECCu;
        goto label_1e7ecc;
    }
    ctx->pc = 0x1E7EC4u;
    SET_GPR_U32(ctx, 31, 0x1E7ECCu);
    ctx->pc = 0x1E7EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7EC4u;
            // 0x1e7ec8: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ECCu; }
        if (ctx->pc != 0x1E7ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7ECCu; }
        if (ctx->pc != 0x1E7ECCu) { return; }
    }
    ctx->pc = 0x1E7ECCu;
label_1e7ecc:
    // 0x1e7ecc: 0x10000070  b           . + 4 + (0x70 << 2)
label_1e7ed0:
    if (ctx->pc == 0x1E7ED0u) {
        ctx->pc = 0x1E7ED4u;
        goto label_1e7ed4;
    }
    ctx->pc = 0x1E7ECCu;
    {
        const bool branch_taken_0x1e7ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7ecc) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7ED4u;
label_1e7ed4:
    // 0x1e7ed4: 0x0  nop
    ctx->pc = 0x1e7ed4u;
    // NOP
label_1e7ed8:
    // 0x1e7ed8: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1e7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_1e7edc:
    // 0x1e7edc: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1e7edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e7ee0:
    // 0x1e7ee0: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1e7ee0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_1e7ee4:
    // 0x1e7ee4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e7ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e7ee8:
    // 0x1e7ee8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e7eec:
    // 0x1e7eec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e7eecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e7ef0:
    // 0x1e7ef0: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1e7ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1e7ef4:
    // 0x1e7ef4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e7ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e7ef8:
    // 0x1e7ef8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7ef8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e7efc:
    // 0x1e7efc: 0x0  nop
    ctx->pc = 0x1e7efcu;
    // NOP
label_1e7f00:
    // 0x1e7f00: 0x0  nop
    ctx->pc = 0x1e7f00u;
    // NOP
label_1e7f04:
    // 0x1e7f04: 0x1010  mfhi        $v0
    ctx->pc = 0x1e7f04u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e7f08:
    // 0x1e7f08: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1e7f0c:
    if (ctx->pc == 0x1E7F0Cu) {
        ctx->pc = 0x1E7F10u;
        goto label_1e7f10;
    }
    ctx->pc = 0x1E7F08u;
    {
        const bool branch_taken_0x1e7f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f08) {
            ctx->pc = 0x1E7F30u;
            goto label_1e7f30;
        }
    }
    ctx->pc = 0x1E7F10u;
label_1e7f10:
    // 0x1e7f10: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7f14:
    // 0x1e7f14: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7f18:
    // 0x1e7f18: 0xc0655a0  jal         func_195680
label_1e7f1c:
    if (ctx->pc == 0x1E7F1Cu) {
        ctx->pc = 0x1E7F1Cu;
            // 0x1e7f1c: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1E7F20u;
        goto label_1e7f20;
    }
    ctx->pc = 0x1E7F18u;
    SET_GPR_U32(ctx, 31, 0x1E7F20u);
    ctx->pc = 0x1E7F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F18u;
            // 0x1e7f1c: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F20u; }
        if (ctx->pc != 0x1E7F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F20u; }
        if (ctx->pc != 0x1E7F20u) { return; }
    }
    ctx->pc = 0x1E7F20u;
label_1e7f20:
    // 0x1e7f20: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7f24:
    // 0x1e7f24: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7f28:
    // 0x1e7f28: 0xc0655a0  jal         func_195680
label_1e7f2c:
    if (ctx->pc == 0x1E7F2Cu) {
        ctx->pc = 0x1E7F2Cu;
            // 0x1e7f2c: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->pc = 0x1E7F30u;
        goto label_1e7f30;
    }
    ctx->pc = 0x1E7F28u;
    SET_GPR_U32(ctx, 31, 0x1E7F30u);
    ctx->pc = 0x1E7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F28u;
            // 0x1e7f2c: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F30u; }
        if (ctx->pc != 0x1E7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F30u; }
        if (ctx->pc != 0x1E7F30u) { return; }
    }
    ctx->pc = 0x1E7F30u;
label_1e7f30:
    // 0x1e7f30: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e7f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e7f34:
    // 0x1e7f34: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x1e7f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1e7f38:
    // 0x1e7f38: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_1e7f3c:
    if (ctx->pc == 0x1E7F3Cu) {
        ctx->pc = 0x1E7F3Cu;
            // 0x1e7f3c: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->pc = 0x1E7F40u;
        goto label_1e7f40;
    }
    ctx->pc = 0x1E7F38u;
    {
        const bool branch_taken_0x1e7f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F38u;
            // 0x1e7f3c: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7f38) {
            ctx->pc = 0x1E8030u;
            goto label_1e8030;
        }
    }
    ctx->pc = 0x1E7F40u;
label_1e7f40:
    // 0x1e7f40: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1e7f44:
    if (ctx->pc == 0x1E7F44u) {
        ctx->pc = 0x1E7F48u;
        goto label_1e7f48;
    }
    ctx->pc = 0x1E7F40u;
    {
        const bool branch_taken_0x1e7f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7f40) {
            ctx->pc = 0x1E7FC8u;
            goto label_1e7fc8;
        }
    }
    ctx->pc = 0x1E7F48u;
label_1e7f48:
    // 0x1e7f48: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x1e7f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_1e7f4c:
    // 0x1e7f4c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e7f50:
    if (ctx->pc == 0x1E7F50u) {
        ctx->pc = 0x1E7F54u;
        goto label_1e7f54;
    }
    ctx->pc = 0x1E7F4Cu;
    {
        const bool branch_taken_0x1e7f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e7f4c) {
            ctx->pc = 0x1E7F60u;
            goto label_1e7f60;
        }
    }
    ctx->pc = 0x1E7F54u;
label_1e7f54:
    // 0x1e7f54: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1e7f58:
    if (ctx->pc == 0x1E7F58u) {
        ctx->pc = 0x1E7F5Cu;
        goto label_1e7f5c;
    }
    ctx->pc = 0x1E7F54u;
    {
        const bool branch_taken_0x1e7f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7f54) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7F5Cu;
label_1e7f5c:
    // 0x1e7f5c: 0x0  nop
    ctx->pc = 0x1e7f5cu;
    // NOP
label_1e7f60:
    // 0x1e7f60: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7f64:
    // 0x1e7f64: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7f68:
    // 0x1e7f68: 0xc0655a8  jal         func_1956A0
label_1e7f6c:
    if (ctx->pc == 0x1E7F6Cu) {
        ctx->pc = 0x1E7F6Cu;
            // 0x1e7f6c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7F70u;
        goto label_1e7f70;
    }
    ctx->pc = 0x1E7F68u;
    SET_GPR_U32(ctx, 31, 0x1E7F70u);
    ctx->pc = 0x1E7F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F68u;
            // 0x1e7f6c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F70u; }
        if (ctx->pc != 0x1E7F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F70u; }
        if (ctx->pc != 0x1E7F70u) { return; }
    }
    ctx->pc = 0x1E7F70u;
label_1e7f70:
    // 0x1e7f70: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7f74:
    // 0x1e7f74: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7f78:
    // 0x1e7f78: 0xc0655a8  jal         func_1956A0
label_1e7f7c:
    if (ctx->pc == 0x1E7F7Cu) {
        ctx->pc = 0x1E7F7Cu;
            // 0x1e7f7c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7F80u;
        goto label_1e7f80;
    }
    ctx->pc = 0x1E7F78u;
    SET_GPR_U32(ctx, 31, 0x1E7F80u);
    ctx->pc = 0x1E7F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F78u;
            // 0x1e7f7c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F80u; }
        if (ctx->pc != 0x1E7F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7F80u; }
        if (ctx->pc != 0x1E7F80u) { return; }
    }
    ctx->pc = 0x1E7F80u;
label_1e7f80:
    // 0x1e7f80: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7f84:
    // 0x1e7f84: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e7f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e7f88:
    // 0x1e7f88: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7f8c:
    // 0x1e7f8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7f90:
    // 0x1e7f90: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e7f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e7f94:
    // 0x1e7f94: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7f98:
    // 0x1e7f98: 0xc0655dc  jal         func_195770
label_1e7f9c:
    if (ctx->pc == 0x1E7F9Cu) {
        ctx->pc = 0x1E7F9Cu;
            // 0x1e7f9c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E7FA0u;
        goto label_1e7fa0;
    }
    ctx->pc = 0x1E7F98u;
    SET_GPR_U32(ctx, 31, 0x1E7FA0u);
    ctx->pc = 0x1E7F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7F98u;
            // 0x1e7f9c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FA0u; }
        if (ctx->pc != 0x1E7FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FA0u; }
        if (ctx->pc != 0x1E7FA0u) { return; }
    }
    ctx->pc = 0x1E7FA0u;
label_1e7fa0:
    // 0x1e7fa0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7fa4:
    // 0x1e7fa4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e7fa8:
    // 0x1e7fa8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7fac:
    // 0x1e7fac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7fb0:
    // 0x1e7fb0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e7fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e7fb4:
    // 0x1e7fb4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e7fb8:
    // 0x1e7fb8: 0xc0655dc  jal         func_195770
label_1e7fbc:
    if (ctx->pc == 0x1E7FBCu) {
        ctx->pc = 0x1E7FBCu;
            // 0x1e7fbc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E7FC0u;
        goto label_1e7fc0;
    }
    ctx->pc = 0x1E7FB8u;
    SET_GPR_U32(ctx, 31, 0x1E7FC0u);
    ctx->pc = 0x1E7FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FB8u;
            // 0x1e7fbc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FC0u; }
        if (ctx->pc != 0x1E7FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FC0u; }
        if (ctx->pc != 0x1E7FC0u) { return; }
    }
    ctx->pc = 0x1E7FC0u;
label_1e7fc0:
    // 0x1e7fc0: 0x10000033  b           . + 4 + (0x33 << 2)
label_1e7fc4:
    if (ctx->pc == 0x1E7FC4u) {
        ctx->pc = 0x1E7FC8u;
        goto label_1e7fc8;
    }
    ctx->pc = 0x1E7FC0u;
    {
        const bool branch_taken_0x1e7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7fc0) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E7FC8u;
label_1e7fc8:
    // 0x1e7fc8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7fcc:
    // 0x1e7fcc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7fd0:
    // 0x1e7fd0: 0xc0655a8  jal         func_1956A0
label_1e7fd4:
    if (ctx->pc == 0x1E7FD4u) {
        ctx->pc = 0x1E7FD4u;
            // 0x1e7fd4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E7FD8u;
        goto label_1e7fd8;
    }
    ctx->pc = 0x1E7FD0u;
    SET_GPR_U32(ctx, 31, 0x1E7FD8u);
    ctx->pc = 0x1E7FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FD0u;
            // 0x1e7fd4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FD8u; }
        if (ctx->pc != 0x1E7FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FD8u; }
        if (ctx->pc != 0x1E7FD8u) { return; }
    }
    ctx->pc = 0x1E7FD8u;
label_1e7fd8:
    // 0x1e7fd8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7fdc:
    // 0x1e7fdc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7fe0:
    // 0x1e7fe0: 0xc0655a8  jal         func_1956A0
label_1e7fe4:
    if (ctx->pc == 0x1E7FE4u) {
        ctx->pc = 0x1E7FE4u;
            // 0x1e7fe4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E7FE8u;
        goto label_1e7fe8;
    }
    ctx->pc = 0x1E7FE0u;
    SET_GPR_U32(ctx, 31, 0x1E7FE8u);
    ctx->pc = 0x1E7FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7FE0u;
            // 0x1e7fe4: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FE8u; }
        if (ctx->pc != 0x1E7FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7FE8u; }
        if (ctx->pc != 0x1E7FE8u) { return; }
    }
    ctx->pc = 0x1E7FE8u;
label_1e7fe8:
    // 0x1e7fe8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e7fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e7fec:
    // 0x1e7fec: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1e7fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1e7ff0:
    // 0x1e7ff0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e7ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e7ff4:
    // 0x1e7ff4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e7ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e7ff8:
    // 0x1e7ff8: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1e7ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1e7ffc:
    // 0x1e7ffc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e7ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e8000:
    // 0x1e8000: 0xc0655dc  jal         func_195770
label_1e8004:
    if (ctx->pc == 0x1E8004u) {
        ctx->pc = 0x1E8004u;
            // 0x1e8004: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E8008u;
        goto label_1e8008;
    }
    ctx->pc = 0x1E8000u;
    SET_GPR_U32(ctx, 31, 0x1E8008u);
    ctx->pc = 0x1E8004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8000u;
            // 0x1e8004: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8008u; }
        if (ctx->pc != 0x1E8008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8008u; }
        if (ctx->pc != 0x1E8008u) { return; }
    }
    ctx->pc = 0x1E8008u;
label_1e8008:
    // 0x1e8008: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e8008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e800c:
    // 0x1e800c: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1e800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1e8010:
    // 0x1e8010: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e8010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e8014:
    // 0x1e8014: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8014u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8018:
    // 0x1e8018: 0x0  nop
    ctx->pc = 0x1e8018u;
    // NOP
label_1e801c:
    // 0x1e801c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e801cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8020:
    // 0x1e8020: 0xc0655dc  jal         func_195770
label_1e8024:
    if (ctx->pc == 0x1E8024u) {
        ctx->pc = 0x1E8024u;
            // 0x1e8024: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E8028u;
        goto label_1e8028;
    }
    ctx->pc = 0x1E8020u;
    SET_GPR_U32(ctx, 31, 0x1E8028u);
    ctx->pc = 0x1E8024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8020u;
            // 0x1e8024: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8028u; }
        if (ctx->pc != 0x1E8028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8028u; }
        if (ctx->pc != 0x1E8028u) { return; }
    }
    ctx->pc = 0x1E8028u;
label_1e8028:
    // 0x1e8028: 0x10000019  b           . + 4 + (0x19 << 2)
label_1e802c:
    if (ctx->pc == 0x1E802Cu) {
        ctx->pc = 0x1E8030u;
        goto label_1e8030;
    }
    ctx->pc = 0x1E8028u;
    {
        const bool branch_taken_0x1e8028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8028) {
            ctx->pc = 0x1E8090u;
            goto label_1e8090;
        }
    }
    ctx->pc = 0x1E8030u;
label_1e8030:
    // 0x1e8030: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e8034:
    // 0x1e8034: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e8034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e8038:
    // 0x1e8038: 0xc0655a8  jal         func_1956A0
label_1e803c:
    if (ctx->pc == 0x1E803Cu) {
        ctx->pc = 0x1E803Cu;
            // 0x1e803c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1E8040u;
        goto label_1e8040;
    }
    ctx->pc = 0x1E8038u;
    SET_GPR_U32(ctx, 31, 0x1E8040u);
    ctx->pc = 0x1E803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8038u;
            // 0x1e803c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8040u; }
        if (ctx->pc != 0x1E8040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8040u; }
        if (ctx->pc != 0x1E8040u) { return; }
    }
    ctx->pc = 0x1E8040u;
label_1e8040:
    // 0x1e8040: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e8040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e8044:
    // 0x1e8044: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e8044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e8048:
    // 0x1e8048: 0xc0655a8  jal         func_1956A0
label_1e804c:
    if (ctx->pc == 0x1E804Cu) {
        ctx->pc = 0x1E804Cu;
            // 0x1e804c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1E8050u;
        goto label_1e8050;
    }
    ctx->pc = 0x1E8048u;
    SET_GPR_U32(ctx, 31, 0x1E8050u);
    ctx->pc = 0x1E804Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8048u;
            // 0x1e804c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8050u; }
        if (ctx->pc != 0x1E8050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8050u; }
        if (ctx->pc != 0x1E8050u) { return; }
    }
    ctx->pc = 0x1E8050u;
label_1e8050:
    // 0x1e8050: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e8050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e8054:
    // 0x1e8054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e8054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1e8058:
    // 0x1e8058: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e8058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e805c:
    // 0x1e805c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e805cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8060:
    // 0x1e8060: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e8064:
    // 0x1e8064: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e8064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e8068:
    // 0x1e8068: 0xc0655dc  jal         func_195770
label_1e806c:
    if (ctx->pc == 0x1E806Cu) {
        ctx->pc = 0x1E806Cu;
            // 0x1e806c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1E8070u;
        goto label_1e8070;
    }
    ctx->pc = 0x1E8068u;
    SET_GPR_U32(ctx, 31, 0x1E8070u);
    ctx->pc = 0x1E806Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8068u;
            // 0x1e806c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8070u; }
        if (ctx->pc != 0x1E8070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8070u; }
        if (ctx->pc != 0x1E8070u) { return; }
    }
    ctx->pc = 0x1E8070u;
label_1e8070:
    // 0x1e8070: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1e8070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e8074:
    // 0x1e8074: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e8074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e8078:
    // 0x1e8078: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1e8078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e807c:
    // 0x1e807c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e807cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8080:
    // 0x1e8080: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e8080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e8084:
    // 0x1e8084: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e8084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e8088:
    // 0x1e8088: 0xc0655dc  jal         func_195770
label_1e808c:
    if (ctx->pc == 0x1E808Cu) {
        ctx->pc = 0x1E808Cu;
            // 0x1e808c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1E8090u;
        goto label_1e8090;
    }
    ctx->pc = 0x1E8088u;
    SET_GPR_U32(ctx, 31, 0x1E8090u);
    ctx->pc = 0x1E808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8088u;
            // 0x1e808c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8090u; }
        if (ctx->pc != 0x1E8090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8090u; }
        if (ctx->pc != 0x1E8090u) { return; }
    }
    ctx->pc = 0x1E8090u;
label_1e8090:
    // 0x1e8090: 0xc04b788  jal         func_12DE20
label_1e8094:
    if (ctx->pc == 0x1E8094u) {
        ctx->pc = 0x1E8094u;
            // 0x1e8094: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E8098u;
        goto label_1e8098;
    }
    ctx->pc = 0x1E8090u;
    SET_GPR_U32(ctx, 31, 0x1E8098u);
    ctx->pc = 0x1E8094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8090u;
            // 0x1e8094: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8098u; }
        if (ctx->pc != 0x1E8098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8098u; }
        if (ctx->pc != 0x1E8098u) { return; }
    }
    ctx->pc = 0x1E8098u;
label_1e8098:
    // 0x1e8098: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e8098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e809c:
    // 0x1e809c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e80a0:
    // 0x1e80a0: 0xc04b7da  jal         func_12DF68
label_1e80a4:
    if (ctx->pc == 0x1E80A4u) {
        ctx->pc = 0x1E80A4u;
            // 0x1e80a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E80A8u;
        goto label_1e80a8;
    }
    ctx->pc = 0x1E80A0u;
    SET_GPR_U32(ctx, 31, 0x1E80A8u);
    ctx->pc = 0x1E80A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80A0u;
            // 0x1e80a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80A8u; }
        if (ctx->pc != 0x1E80A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80A8u; }
        if (ctx->pc != 0x1E80A8u) { return; }
    }
    ctx->pc = 0x1E80A8u;
label_1e80a8:
    // 0x1e80a8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e80ac:
    // 0x1e80ac: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e80acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e80b0:
    // 0x1e80b0: 0xc04b804  jal         func_12E010
label_1e80b4:
    if (ctx->pc == 0x1E80B4u) {
        ctx->pc = 0x1E80B4u;
            // 0x1e80b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E80B8u;
        goto label_1e80b8;
    }
    ctx->pc = 0x1E80B0u;
    SET_GPR_U32(ctx, 31, 0x1E80B8u);
    ctx->pc = 0x1E80B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80B0u;
            // 0x1e80b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80B8u; }
        if (ctx->pc != 0x1E80B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80B8u; }
        if (ctx->pc != 0x1E80B8u) { return; }
    }
    ctx->pc = 0x1E80B8u;
label_1e80b8:
    // 0x1e80b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e80bc:
    // 0x1e80bc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e80bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e80c0:
    // 0x1e80c0: 0xc04b7b0  jal         func_12DEC0
label_1e80c4:
    if (ctx->pc == 0x1E80C4u) {
        ctx->pc = 0x1E80C4u;
            // 0x1e80c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E80C8u;
        goto label_1e80c8;
    }
    ctx->pc = 0x1E80C0u;
    SET_GPR_U32(ctx, 31, 0x1E80C8u);
    ctx->pc = 0x1E80C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80C0u;
            // 0x1e80c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80C8u; }
        if (ctx->pc != 0x1E80C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80C8u; }
        if (ctx->pc != 0x1E80C8u) { return; }
    }
    ctx->pc = 0x1E80C8u;
label_1e80c8:
    // 0x1e80c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1e80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e80cc:
    // 0x1e80cc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e80ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e80d0:
    // 0x1e80d0: 0xc04b75e  jal         func_12DD78
label_1e80d4:
    if (ctx->pc == 0x1E80D4u) {
        ctx->pc = 0x1E80D4u;
            // 0x1e80d4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1E80D8u;
        goto label_1e80d8;
    }
    ctx->pc = 0x1E80D0u;
    SET_GPR_U32(ctx, 31, 0x1E80D8u);
    ctx->pc = 0x1E80D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80D0u;
            // 0x1e80d4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80D8u; }
        if (ctx->pc != 0x1E80D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E80D8u; }
        if (ctx->pc != 0x1E80D8u) { return; }
    }
    ctx->pc = 0x1E80D8u;
label_1e80d8:
    // 0x1e80d8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e80d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e80dc:
    // 0x1e80dc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1e80dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1e80e0:
    // 0x1e80e0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e80e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e80e4:
    // 0x1e80e4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1e80e8:
    if (ctx->pc == 0x1E80E8u) {
        ctx->pc = 0x1E80ECu;
        goto label_1e80ec;
    }
    ctx->pc = 0x1E80E4u;
    {
        const bool branch_taken_0x1e80e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e80e4) {
            ctx->pc = 0x1E8138u;
            goto label_1e8138;
        }
    }
    ctx->pc = 0x1E80ECu;
label_1e80ec:
    // 0x1e80ec: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1e80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1e80f0:
    // 0x1e80f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1e80f4:
    if (ctx->pc == 0x1E80F4u) {
        ctx->pc = 0x1E80F8u;
        goto label_1e80f8;
    }
    ctx->pc = 0x1E80F0u;
    {
        const bool branch_taken_0x1e80f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e80f0) {
            ctx->pc = 0x1E8108u;
            goto label_1e8108;
        }
    }
    ctx->pc = 0x1E80F8u;
label_1e80f8:
    // 0x1e80f8: 0xc0604f0  jal         func_1813C0
label_1e80fc:
    if (ctx->pc == 0x1E80FCu) {
        ctx->pc = 0x1E80FCu;
            // 0x1e80fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E8100u;
        goto label_1e8100;
    }
    ctx->pc = 0x1E80F8u;
    SET_GPR_U32(ctx, 31, 0x1E8100u);
    ctx->pc = 0x1E80FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E80F8u;
            // 0x1e80fc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8100u; }
        if (ctx->pc != 0x1E8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8100u; }
        if (ctx->pc != 0x1E8100u) { return; }
    }
    ctx->pc = 0x1E8100u;
label_1e8100:
    // 0x1e8100: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e8104:
    if (ctx->pc == 0x1E8104u) {
        ctx->pc = 0x1E8108u;
        goto label_1e8108;
    }
    ctx->pc = 0x1E8100u;
    {
        const bool branch_taken_0x1e8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8100) {
            ctx->pc = 0x1E8110u;
            goto label_1e8110;
        }
    }
    ctx->pc = 0x1E8108u;
label_1e8108:
    // 0x1e8108: 0xc0604dc  jal         func_181370
label_1e810c:
    if (ctx->pc == 0x1E810Cu) {
        ctx->pc = 0x1E810Cu;
            // 0x1e810c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E8110u;
        goto label_1e8110;
    }
    ctx->pc = 0x1E8108u;
    SET_GPR_U32(ctx, 31, 0x1E8110u);
    ctx->pc = 0x1E810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8108u;
            // 0x1e810c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8110u; }
        if (ctx->pc != 0x1E8110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8110u; }
        if (ctx->pc != 0x1E8110u) { return; }
    }
    ctx->pc = 0x1E8110u;
label_1e8110:
    // 0x1e8110: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1e8110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1e8114:
    // 0x1e8114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1e8118:
    if (ctx->pc == 0x1E8118u) {
        ctx->pc = 0x1E811Cu;
        goto label_1e811c;
    }
    ctx->pc = 0x1E8114u;
    {
        const bool branch_taken_0x1e8114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8114) {
            ctx->pc = 0x1E8128u;
            goto label_1e8128;
        }
    }
    ctx->pc = 0x1E811Cu;
label_1e811c:
    // 0x1e811c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1e8120:
    if (ctx->pc == 0x1E8120u) {
        ctx->pc = 0x1E8120u;
            // 0x1e8120: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1E8124u;
        goto label_1e8124;
    }
    ctx->pc = 0x1E811Cu;
    {
        const bool branch_taken_0x1e811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E811Cu;
            // 0x1e8120: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e811c) {
            ctx->pc = 0x1E81A8u;
            goto label_1e81a8;
        }
    }
    ctx->pc = 0x1E8124u;
label_1e8124:
    // 0x1e8124: 0x0  nop
    ctx->pc = 0x1e8124u;
    // NOP
label_1e8128:
    // 0x1e8128: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e8128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e812c:
    // 0x1e812c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1e8130:
    if (ctx->pc == 0x1E8130u) {
        ctx->pc = 0x1E8130u;
            // 0x1e8130: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1E8134u;
        goto label_1e8134;
    }
    ctx->pc = 0x1E812Cu;
    {
        const bool branch_taken_0x1e812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E812Cu;
            // 0x1e8130: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e812c) {
            ctx->pc = 0x1E81A8u;
            goto label_1e81a8;
        }
    }
    ctx->pc = 0x1E8134u;
label_1e8134:
    // 0x1e8134: 0x0  nop
    ctx->pc = 0x1e8134u;
    // NOP
label_1e8138:
    // 0x1e8138: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1e8138u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1e813c:
    // 0x1e813c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1e8140:
    if (ctx->pc == 0x1E8140u) {
        ctx->pc = 0x1E8144u;
        goto label_1e8144;
    }
    ctx->pc = 0x1E813Cu;
    {
        const bool branch_taken_0x1e813c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e813c) {
            ctx->pc = 0x1E8198u;
            goto label_1e8198;
        }
    }
    ctx->pc = 0x1E8144u;
label_1e8144:
    // 0x1e8144: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1e8144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e8148:
    // 0x1e8148: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e8148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e814c:
    // 0x1e814c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e814cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1e8150:
    // 0x1e8150: 0x0  nop
    ctx->pc = 0x1e8150u;
    // NOP
label_1e8154:
    // 0x1e8154: 0x0  nop
    ctx->pc = 0x1e8154u;
    // NOP
label_1e8158:
    // 0x1e8158: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8158u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e815c:
    // 0x1e815c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1e8160:
    if (ctx->pc == 0x1E8160u) {
        ctx->pc = 0x1E8164u;
        goto label_1e8164;
    }
    ctx->pc = 0x1E815Cu;
    {
        const bool branch_taken_0x1e815c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e815c) {
            ctx->pc = 0x1E8198u;
            goto label_1e8198;
        }
    }
    ctx->pc = 0x1E8164u;
label_1e8164:
    // 0x1e8164: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1e8164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8168:
    // 0x1e8168: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e8168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e816c:
    // 0x1e816c: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1e816cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1e8170:
    // 0x1e8170: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8174:
    // 0x1e8174: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1e8174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8178:
    // 0x1e8178: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e8178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e817c:
    // 0x1e817c: 0xc0536d8  jal         func_14DB60
label_1e8180:
    if (ctx->pc == 0x1E8180u) {
        ctx->pc = 0x1E8180u;
            // 0x1e8180: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E8184u;
        goto label_1e8184;
    }
    ctx->pc = 0x1E817Cu;
    SET_GPR_U32(ctx, 31, 0x1E8184u);
    ctx->pc = 0x1E8180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E817Cu;
            // 0x1e8180: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8184u; }
        if (ctx->pc != 0x1E8184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8184u; }
        if (ctx->pc != 0x1E8184u) { return; }
    }
    ctx->pc = 0x1E8184u;
label_1e8184:
    // 0x1e8184: 0xc060500  jal         func_181400
label_1e8188:
    if (ctx->pc == 0x1E8188u) {
        ctx->pc = 0x1E8188u;
            // 0x1e8188: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E818Cu;
        goto label_1e818c;
    }
    ctx->pc = 0x1E8184u;
    SET_GPR_U32(ctx, 31, 0x1E818Cu);
    ctx->pc = 0x1E8188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8184u;
            // 0x1e8188: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E818Cu; }
        if (ctx->pc != 0x1E818Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E818Cu; }
        if (ctx->pc != 0x1E818Cu) { return; }
    }
    ctx->pc = 0x1E818Cu;
label_1e818c:
    // 0x1e818c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e8190:
    if (ctx->pc == 0x1E8190u) {
        ctx->pc = 0x1E8194u;
        goto label_1e8194;
    }
    ctx->pc = 0x1E818Cu;
    {
        const bool branch_taken_0x1e818c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e818c) {
            ctx->pc = 0x1E81A0u;
            goto label_1e81a0;
        }
    }
    ctx->pc = 0x1E8194u;
label_1e8194:
    // 0x1e8194: 0x0  nop
    ctx->pc = 0x1e8194u;
    // NOP
label_1e8198:
    // 0x1e8198: 0xc0604dc  jal         func_181370
label_1e819c:
    if (ctx->pc == 0x1E819Cu) {
        ctx->pc = 0x1E819Cu;
            // 0x1e819c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E81A0u;
        goto label_1e81a0;
    }
    ctx->pc = 0x1E8198u;
    SET_GPR_U32(ctx, 31, 0x1E81A0u);
    ctx->pc = 0x1E819Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8198u;
            // 0x1e819c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81A0u; }
        if (ctx->pc != 0x1E81A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E81A0u; }
        if (ctx->pc != 0x1E81A0u) { return; }
    }
    ctx->pc = 0x1E81A0u;
label_1e81a0:
    // 0x1e81a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e81a4:
    // 0x1e81a4: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1e81a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1e81a8:
    // 0x1e81a8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1e81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e81ac:
    // 0x1e81ac: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1e81acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1e81b0:
    // 0x1e81b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e81b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e81b4:
    // 0x1e81b4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1e81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1e81b8:
    // 0x1e81b8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e81b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e81bc:
    // 0x1e81bc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1e81c0:
    // 0x1e81c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e81c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e81c4:
    // 0x1e81c4: 0x0  nop
    ctx->pc = 0x1e81c4u;
    // NOP
label_1e81c8:
    // 0x1e81c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e81c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e81cc:
    // 0x1e81cc: 0xe661002c  swc1        $f1, 0x2C($s3)
    ctx->pc = 0x1e81ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_1e81d0:
    // 0x1e81d0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e81d4:
    // 0x1e81d4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1e81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1e81d8:
    // 0x1e81d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e81dc:
    // 0x1e81dc: 0x0  nop
    ctx->pc = 0x1e81dcu;
    // NOP
label_1e81e0:
    // 0x1e81e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e81e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e81e4:
    // 0x1e81e4: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x1e81e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_1e81e8:
    // 0x1e81e8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1e81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1e81ec:
    // 0x1e81ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1e81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1e81f0:
    // 0x1e81f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e81f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e81f4:
    // 0x1e81f4: 0x0  nop
    ctx->pc = 0x1e81f4u;
    // NOP
label_1e81f8:
    // 0x1e81f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e81f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e81fc:
    // 0x1e81fc: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x1e81fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_1e8200:
    // 0x1e8200: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1e8200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1e8204:
    // 0x1e8204: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1e8204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1e8208:
    // 0x1e8208: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e8208u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e820c:
    // 0x1e820c: 0x0  nop
    ctx->pc = 0x1e820cu;
    // NOP
label_1e8210:
    // 0x1e8210: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e8210u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1e8214:
    // 0x1e8214: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x1e8214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_1e8218:
    // 0x1e8218: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1e8218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1e821c:
    // 0x1e821c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8220:
    // 0x1e8220: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1e8220u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_1e8224:
    // 0x1e8224: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1e8224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e8228:
    // 0x1e8228: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e822c:
    // 0x1e822c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e822cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e8230:
    // 0x1e8230: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e8234:
    if (ctx->pc == 0x1E8234u) {
        ctx->pc = 0x1E8238u;
        goto label_1e8238;
    }
    ctx->pc = 0x1E8230u;
    {
        const bool branch_taken_0x1e8230 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e8230) {
            ctx->pc = 0x1E8250u;
            goto label_1e8250;
        }
    }
    ctx->pc = 0x1E8238u;
label_1e8238:
    // 0x1e8238: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1e8238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1e823c:
    // 0x1e823c: 0x40f809  jalr        $v0
label_1e8240:
    if (ctx->pc == 0x1E8240u) {
        ctx->pc = 0x1E8240u;
            // 0x1e8240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8244u;
        goto label_1e8244;
    }
    ctx->pc = 0x1E823Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E8244u);
        ctx->pc = 0x1E8240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E823Cu;
            // 0x1e8240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7670u: goto label_1e7670;
            case 0x1E7674u: goto label_1e7674;
            case 0x1E7678u: goto label_1e7678;
            case 0x1E767Cu: goto label_1e767c;
            case 0x1E7680u: goto label_1e7680;
            case 0x1E7684u: goto label_1e7684;
            case 0x1E7688u: goto label_1e7688;
            case 0x1E768Cu: goto label_1e768c;
            case 0x1E7690u: goto label_1e7690;
            case 0x1E7694u: goto label_1e7694;
            case 0x1E7698u: goto label_1e7698;
            case 0x1E769Cu: goto label_1e769c;
            case 0x1E76A0u: goto label_1e76a0;
            case 0x1E76A4u: goto label_1e76a4;
            case 0x1E76A8u: goto label_1e76a8;
            case 0x1E76ACu: goto label_1e76ac;
            case 0x1E76B0u: goto label_1e76b0;
            case 0x1E76B4u: goto label_1e76b4;
            case 0x1E76B8u: goto label_1e76b8;
            case 0x1E76BCu: goto label_1e76bc;
            case 0x1E76C0u: goto label_1e76c0;
            case 0x1E76C4u: goto label_1e76c4;
            case 0x1E76C8u: goto label_1e76c8;
            case 0x1E76CCu: goto label_1e76cc;
            case 0x1E76D0u: goto label_1e76d0;
            case 0x1E76D4u: goto label_1e76d4;
            case 0x1E76D8u: goto label_1e76d8;
            case 0x1E76DCu: goto label_1e76dc;
            case 0x1E76E0u: goto label_1e76e0;
            case 0x1E76E4u: goto label_1e76e4;
            case 0x1E76E8u: goto label_1e76e8;
            case 0x1E76ECu: goto label_1e76ec;
            case 0x1E76F0u: goto label_1e76f0;
            case 0x1E76F4u: goto label_1e76f4;
            case 0x1E76F8u: goto label_1e76f8;
            case 0x1E76FCu: goto label_1e76fc;
            case 0x1E7700u: goto label_1e7700;
            case 0x1E7704u: goto label_1e7704;
            case 0x1E7708u: goto label_1e7708;
            case 0x1E770Cu: goto label_1e770c;
            case 0x1E7710u: goto label_1e7710;
            case 0x1E7714u: goto label_1e7714;
            case 0x1E7718u: goto label_1e7718;
            case 0x1E771Cu: goto label_1e771c;
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7728u: goto label_1e7728;
            case 0x1E772Cu: goto label_1e772c;
            case 0x1E7730u: goto label_1e7730;
            case 0x1E7734u: goto label_1e7734;
            case 0x1E7738u: goto label_1e7738;
            case 0x1E773Cu: goto label_1e773c;
            case 0x1E7740u: goto label_1e7740;
            case 0x1E7744u: goto label_1e7744;
            case 0x1E7748u: goto label_1e7748;
            case 0x1E774Cu: goto label_1e774c;
            case 0x1E7750u: goto label_1e7750;
            case 0x1E7754u: goto label_1e7754;
            case 0x1E7758u: goto label_1e7758;
            case 0x1E775Cu: goto label_1e775c;
            case 0x1E7760u: goto label_1e7760;
            case 0x1E7764u: goto label_1e7764;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E776Cu: goto label_1e776c;
            case 0x1E7770u: goto label_1e7770;
            case 0x1E7774u: goto label_1e7774;
            case 0x1E7778u: goto label_1e7778;
            case 0x1E777Cu: goto label_1e777c;
            case 0x1E7780u: goto label_1e7780;
            case 0x1E7784u: goto label_1e7784;
            case 0x1E7788u: goto label_1e7788;
            case 0x1E778Cu: goto label_1e778c;
            case 0x1E7790u: goto label_1e7790;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7798u: goto label_1e7798;
            case 0x1E779Cu: goto label_1e779c;
            case 0x1E77A0u: goto label_1e77a0;
            case 0x1E77A4u: goto label_1e77a4;
            case 0x1E77A8u: goto label_1e77a8;
            case 0x1E77ACu: goto label_1e77ac;
            case 0x1E77B0u: goto label_1e77b0;
            case 0x1E77B4u: goto label_1e77b4;
            case 0x1E77B8u: goto label_1e77b8;
            case 0x1E77BCu: goto label_1e77bc;
            case 0x1E77C0u: goto label_1e77c0;
            case 0x1E77C4u: goto label_1e77c4;
            case 0x1E77C8u: goto label_1e77c8;
            case 0x1E77CCu: goto label_1e77cc;
            case 0x1E77D0u: goto label_1e77d0;
            case 0x1E77D4u: goto label_1e77d4;
            case 0x1E77D8u: goto label_1e77d8;
            case 0x1E77DCu: goto label_1e77dc;
            case 0x1E77E0u: goto label_1e77e0;
            case 0x1E77E4u: goto label_1e77e4;
            case 0x1E77E8u: goto label_1e77e8;
            case 0x1E77ECu: goto label_1e77ec;
            case 0x1E77F0u: goto label_1e77f0;
            case 0x1E77F4u: goto label_1e77f4;
            case 0x1E77F8u: goto label_1e77f8;
            case 0x1E77FCu: goto label_1e77fc;
            case 0x1E7800u: goto label_1e7800;
            case 0x1E7804u: goto label_1e7804;
            case 0x1E7808u: goto label_1e7808;
            case 0x1E780Cu: goto label_1e780c;
            case 0x1E7810u: goto label_1e7810;
            case 0x1E7814u: goto label_1e7814;
            case 0x1E7818u: goto label_1e7818;
            case 0x1E781Cu: goto label_1e781c;
            case 0x1E7820u: goto label_1e7820;
            case 0x1E7824u: goto label_1e7824;
            case 0x1E7828u: goto label_1e7828;
            case 0x1E782Cu: goto label_1e782c;
            case 0x1E7830u: goto label_1e7830;
            case 0x1E7834u: goto label_1e7834;
            case 0x1E7838u: goto label_1e7838;
            case 0x1E783Cu: goto label_1e783c;
            case 0x1E7840u: goto label_1e7840;
            case 0x1E7844u: goto label_1e7844;
            case 0x1E7848u: goto label_1e7848;
            case 0x1E784Cu: goto label_1e784c;
            case 0x1E7850u: goto label_1e7850;
            case 0x1E7854u: goto label_1e7854;
            case 0x1E7858u: goto label_1e7858;
            case 0x1E785Cu: goto label_1e785c;
            case 0x1E7860u: goto label_1e7860;
            case 0x1E7864u: goto label_1e7864;
            case 0x1E7868u: goto label_1e7868;
            case 0x1E786Cu: goto label_1e786c;
            case 0x1E7870u: goto label_1e7870;
            case 0x1E7874u: goto label_1e7874;
            case 0x1E7878u: goto label_1e7878;
            case 0x1E787Cu: goto label_1e787c;
            case 0x1E7880u: goto label_1e7880;
            case 0x1E7884u: goto label_1e7884;
            case 0x1E7888u: goto label_1e7888;
            case 0x1E788Cu: goto label_1e788c;
            case 0x1E7890u: goto label_1e7890;
            case 0x1E7894u: goto label_1e7894;
            case 0x1E7898u: goto label_1e7898;
            case 0x1E789Cu: goto label_1e789c;
            case 0x1E78A0u: goto label_1e78a0;
            case 0x1E78A4u: goto label_1e78a4;
            case 0x1E78A8u: goto label_1e78a8;
            case 0x1E78ACu: goto label_1e78ac;
            case 0x1E78B0u: goto label_1e78b0;
            case 0x1E78B4u: goto label_1e78b4;
            case 0x1E78B8u: goto label_1e78b8;
            case 0x1E78BCu: goto label_1e78bc;
            case 0x1E78C0u: goto label_1e78c0;
            case 0x1E78C4u: goto label_1e78c4;
            case 0x1E78C8u: goto label_1e78c8;
            case 0x1E78CCu: goto label_1e78cc;
            case 0x1E78D0u: goto label_1e78d0;
            case 0x1E78D4u: goto label_1e78d4;
            case 0x1E78D8u: goto label_1e78d8;
            case 0x1E78DCu: goto label_1e78dc;
            case 0x1E78E0u: goto label_1e78e0;
            case 0x1E78E4u: goto label_1e78e4;
            case 0x1E78E8u: goto label_1e78e8;
            case 0x1E78ECu: goto label_1e78ec;
            case 0x1E78F0u: goto label_1e78f0;
            case 0x1E78F4u: goto label_1e78f4;
            case 0x1E78F8u: goto label_1e78f8;
            case 0x1E78FCu: goto label_1e78fc;
            case 0x1E7900u: goto label_1e7900;
            case 0x1E7904u: goto label_1e7904;
            case 0x1E7908u: goto label_1e7908;
            case 0x1E790Cu: goto label_1e790c;
            case 0x1E7910u: goto label_1e7910;
            case 0x1E7914u: goto label_1e7914;
            case 0x1E7918u: goto label_1e7918;
            case 0x1E791Cu: goto label_1e791c;
            case 0x1E7920u: goto label_1e7920;
            case 0x1E7924u: goto label_1e7924;
            case 0x1E7928u: goto label_1e7928;
            case 0x1E792Cu: goto label_1e792c;
            case 0x1E7930u: goto label_1e7930;
            case 0x1E7934u: goto label_1e7934;
            case 0x1E7938u: goto label_1e7938;
            case 0x1E793Cu: goto label_1e793c;
            case 0x1E7940u: goto label_1e7940;
            case 0x1E7944u: goto label_1e7944;
            case 0x1E7948u: goto label_1e7948;
            case 0x1E794Cu: goto label_1e794c;
            case 0x1E7950u: goto label_1e7950;
            case 0x1E7954u: goto label_1e7954;
            case 0x1E7958u: goto label_1e7958;
            case 0x1E795Cu: goto label_1e795c;
            case 0x1E7960u: goto label_1e7960;
            case 0x1E7964u: goto label_1e7964;
            case 0x1E7968u: goto label_1e7968;
            case 0x1E796Cu: goto label_1e796c;
            case 0x1E7970u: goto label_1e7970;
            case 0x1E7974u: goto label_1e7974;
            case 0x1E7978u: goto label_1e7978;
            case 0x1E797Cu: goto label_1e797c;
            case 0x1E7980u: goto label_1e7980;
            case 0x1E7984u: goto label_1e7984;
            case 0x1E7988u: goto label_1e7988;
            case 0x1E798Cu: goto label_1e798c;
            case 0x1E7990u: goto label_1e7990;
            case 0x1E7994u: goto label_1e7994;
            case 0x1E7998u: goto label_1e7998;
            case 0x1E799Cu: goto label_1e799c;
            case 0x1E79A0u: goto label_1e79a0;
            case 0x1E79A4u: goto label_1e79a4;
            case 0x1E79A8u: goto label_1e79a8;
            case 0x1E79ACu: goto label_1e79ac;
            case 0x1E79B0u: goto label_1e79b0;
            case 0x1E79B4u: goto label_1e79b4;
            case 0x1E79B8u: goto label_1e79b8;
            case 0x1E79BCu: goto label_1e79bc;
            case 0x1E79C0u: goto label_1e79c0;
            case 0x1E79C4u: goto label_1e79c4;
            case 0x1E79C8u: goto label_1e79c8;
            case 0x1E79CCu: goto label_1e79cc;
            case 0x1E79D0u: goto label_1e79d0;
            case 0x1E79D4u: goto label_1e79d4;
            case 0x1E79D8u: goto label_1e79d8;
            case 0x1E79DCu: goto label_1e79dc;
            case 0x1E79E0u: goto label_1e79e0;
            case 0x1E79E4u: goto label_1e79e4;
            case 0x1E79E8u: goto label_1e79e8;
            case 0x1E79ECu: goto label_1e79ec;
            case 0x1E79F0u: goto label_1e79f0;
            case 0x1E79F4u: goto label_1e79f4;
            case 0x1E79F8u: goto label_1e79f8;
            case 0x1E79FCu: goto label_1e79fc;
            case 0x1E7A00u: goto label_1e7a00;
            case 0x1E7A04u: goto label_1e7a04;
            case 0x1E7A08u: goto label_1e7a08;
            case 0x1E7A0Cu: goto label_1e7a0c;
            case 0x1E7A10u: goto label_1e7a10;
            case 0x1E7A14u: goto label_1e7a14;
            case 0x1E7A18u: goto label_1e7a18;
            case 0x1E7A1Cu: goto label_1e7a1c;
            case 0x1E7A20u: goto label_1e7a20;
            case 0x1E7A24u: goto label_1e7a24;
            case 0x1E7A28u: goto label_1e7a28;
            case 0x1E7A2Cu: goto label_1e7a2c;
            case 0x1E7A30u: goto label_1e7a30;
            case 0x1E7A34u: goto label_1e7a34;
            case 0x1E7A38u: goto label_1e7a38;
            case 0x1E7A3Cu: goto label_1e7a3c;
            case 0x1E7A40u: goto label_1e7a40;
            case 0x1E7A44u: goto label_1e7a44;
            case 0x1E7A48u: goto label_1e7a48;
            case 0x1E7A4Cu: goto label_1e7a4c;
            case 0x1E7A50u: goto label_1e7a50;
            case 0x1E7A54u: goto label_1e7a54;
            case 0x1E7A58u: goto label_1e7a58;
            case 0x1E7A5Cu: goto label_1e7a5c;
            case 0x1E7A60u: goto label_1e7a60;
            case 0x1E7A64u: goto label_1e7a64;
            case 0x1E7A68u: goto label_1e7a68;
            case 0x1E7A6Cu: goto label_1e7a6c;
            case 0x1E7A70u: goto label_1e7a70;
            case 0x1E7A74u: goto label_1e7a74;
            case 0x1E7A78u: goto label_1e7a78;
            case 0x1E7A7Cu: goto label_1e7a7c;
            case 0x1E7A80u: goto label_1e7a80;
            case 0x1E7A84u: goto label_1e7a84;
            case 0x1E7A88u: goto label_1e7a88;
            case 0x1E7A8Cu: goto label_1e7a8c;
            case 0x1E7A90u: goto label_1e7a90;
            case 0x1E7A94u: goto label_1e7a94;
            case 0x1E7A98u: goto label_1e7a98;
            case 0x1E7A9Cu: goto label_1e7a9c;
            case 0x1E7AA0u: goto label_1e7aa0;
            case 0x1E7AA4u: goto label_1e7aa4;
            case 0x1E7AA8u: goto label_1e7aa8;
            case 0x1E7AACu: goto label_1e7aac;
            case 0x1E7AB0u: goto label_1e7ab0;
            case 0x1E7AB4u: goto label_1e7ab4;
            case 0x1E7AB8u: goto label_1e7ab8;
            case 0x1E7ABCu: goto label_1e7abc;
            case 0x1E7AC0u: goto label_1e7ac0;
            case 0x1E7AC4u: goto label_1e7ac4;
            case 0x1E7AC8u: goto label_1e7ac8;
            case 0x1E7ACCu: goto label_1e7acc;
            case 0x1E7AD0u: goto label_1e7ad0;
            case 0x1E7AD4u: goto label_1e7ad4;
            case 0x1E7AD8u: goto label_1e7ad8;
            case 0x1E7ADCu: goto label_1e7adc;
            case 0x1E7AE0u: goto label_1e7ae0;
            case 0x1E7AE4u: goto label_1e7ae4;
            case 0x1E7AE8u: goto label_1e7ae8;
            case 0x1E7AECu: goto label_1e7aec;
            case 0x1E7AF0u: goto label_1e7af0;
            case 0x1E7AF4u: goto label_1e7af4;
            case 0x1E7AF8u: goto label_1e7af8;
            case 0x1E7AFCu: goto label_1e7afc;
            case 0x1E7B00u: goto label_1e7b00;
            case 0x1E7B04u: goto label_1e7b04;
            case 0x1E7B08u: goto label_1e7b08;
            case 0x1E7B0Cu: goto label_1e7b0c;
            case 0x1E7B10u: goto label_1e7b10;
            case 0x1E7B14u: goto label_1e7b14;
            case 0x1E7B18u: goto label_1e7b18;
            case 0x1E7B1Cu: goto label_1e7b1c;
            case 0x1E7B20u: goto label_1e7b20;
            case 0x1E7B24u: goto label_1e7b24;
            case 0x1E7B28u: goto label_1e7b28;
            case 0x1E7B2Cu: goto label_1e7b2c;
            case 0x1E7B30u: goto label_1e7b30;
            case 0x1E7B34u: goto label_1e7b34;
            case 0x1E7B38u: goto label_1e7b38;
            case 0x1E7B3Cu: goto label_1e7b3c;
            case 0x1E7B40u: goto label_1e7b40;
            case 0x1E7B44u: goto label_1e7b44;
            case 0x1E7B48u: goto label_1e7b48;
            case 0x1E7B4Cu: goto label_1e7b4c;
            case 0x1E7B50u: goto label_1e7b50;
            case 0x1E7B54u: goto label_1e7b54;
            case 0x1E7B58u: goto label_1e7b58;
            case 0x1E7B5Cu: goto label_1e7b5c;
            case 0x1E7B60u: goto label_1e7b60;
            case 0x1E7B64u: goto label_1e7b64;
            case 0x1E7B68u: goto label_1e7b68;
            case 0x1E7B6Cu: goto label_1e7b6c;
            case 0x1E7B70u: goto label_1e7b70;
            case 0x1E7B74u: goto label_1e7b74;
            case 0x1E7B78u: goto label_1e7b78;
            case 0x1E7B7Cu: goto label_1e7b7c;
            case 0x1E7B80u: goto label_1e7b80;
            case 0x1E7B84u: goto label_1e7b84;
            case 0x1E7B88u: goto label_1e7b88;
            case 0x1E7B8Cu: goto label_1e7b8c;
            case 0x1E7B90u: goto label_1e7b90;
            case 0x1E7B94u: goto label_1e7b94;
            case 0x1E7B98u: goto label_1e7b98;
            case 0x1E7B9Cu: goto label_1e7b9c;
            case 0x1E7BA0u: goto label_1e7ba0;
            case 0x1E7BA4u: goto label_1e7ba4;
            case 0x1E7BA8u: goto label_1e7ba8;
            case 0x1E7BACu: goto label_1e7bac;
            case 0x1E7BB0u: goto label_1e7bb0;
            case 0x1E7BB4u: goto label_1e7bb4;
            case 0x1E7BB8u: goto label_1e7bb8;
            case 0x1E7BBCu: goto label_1e7bbc;
            case 0x1E7BC0u: goto label_1e7bc0;
            case 0x1E7BC4u: goto label_1e7bc4;
            case 0x1E7BC8u: goto label_1e7bc8;
            case 0x1E7BCCu: goto label_1e7bcc;
            case 0x1E7BD0u: goto label_1e7bd0;
            case 0x1E7BD4u: goto label_1e7bd4;
            case 0x1E7BD8u: goto label_1e7bd8;
            case 0x1E7BDCu: goto label_1e7bdc;
            case 0x1E7BE0u: goto label_1e7be0;
            case 0x1E7BE4u: goto label_1e7be4;
            case 0x1E7BE8u: goto label_1e7be8;
            case 0x1E7BECu: goto label_1e7bec;
            case 0x1E7BF0u: goto label_1e7bf0;
            case 0x1E7BF4u: goto label_1e7bf4;
            case 0x1E7BF8u: goto label_1e7bf8;
            case 0x1E7BFCu: goto label_1e7bfc;
            case 0x1E7C00u: goto label_1e7c00;
            case 0x1E7C04u: goto label_1e7c04;
            case 0x1E7C08u: goto label_1e7c08;
            case 0x1E7C0Cu: goto label_1e7c0c;
            case 0x1E7C10u: goto label_1e7c10;
            case 0x1E7C14u: goto label_1e7c14;
            case 0x1E7C18u: goto label_1e7c18;
            case 0x1E7C1Cu: goto label_1e7c1c;
            case 0x1E7C20u: goto label_1e7c20;
            case 0x1E7C24u: goto label_1e7c24;
            case 0x1E7C28u: goto label_1e7c28;
            case 0x1E7C2Cu: goto label_1e7c2c;
            case 0x1E7C30u: goto label_1e7c30;
            case 0x1E7C34u: goto label_1e7c34;
            case 0x1E7C38u: goto label_1e7c38;
            case 0x1E7C3Cu: goto label_1e7c3c;
            case 0x1E7C40u: goto label_1e7c40;
            case 0x1E7C44u: goto label_1e7c44;
            case 0x1E7C48u: goto label_1e7c48;
            case 0x1E7C4Cu: goto label_1e7c4c;
            case 0x1E7C50u: goto label_1e7c50;
            case 0x1E7C54u: goto label_1e7c54;
            case 0x1E7C58u: goto label_1e7c58;
            case 0x1E7C5Cu: goto label_1e7c5c;
            case 0x1E7C60u: goto label_1e7c60;
            case 0x1E7C64u: goto label_1e7c64;
            case 0x1E7C68u: goto label_1e7c68;
            case 0x1E7C6Cu: goto label_1e7c6c;
            case 0x1E7C70u: goto label_1e7c70;
            case 0x1E7C74u: goto label_1e7c74;
            case 0x1E7C78u: goto label_1e7c78;
            case 0x1E7C7Cu: goto label_1e7c7c;
            case 0x1E7C80u: goto label_1e7c80;
            case 0x1E7C84u: goto label_1e7c84;
            case 0x1E7C88u: goto label_1e7c88;
            case 0x1E7C8Cu: goto label_1e7c8c;
            case 0x1E7C90u: goto label_1e7c90;
            case 0x1E7C94u: goto label_1e7c94;
            case 0x1E7C98u: goto label_1e7c98;
            case 0x1E7C9Cu: goto label_1e7c9c;
            case 0x1E7CA0u: goto label_1e7ca0;
            case 0x1E7CA4u: goto label_1e7ca4;
            case 0x1E7CA8u: goto label_1e7ca8;
            case 0x1E7CACu: goto label_1e7cac;
            case 0x1E7CB0u: goto label_1e7cb0;
            case 0x1E7CB4u: goto label_1e7cb4;
            case 0x1E7CB8u: goto label_1e7cb8;
            case 0x1E7CBCu: goto label_1e7cbc;
            case 0x1E7CC0u: goto label_1e7cc0;
            case 0x1E7CC4u: goto label_1e7cc4;
            case 0x1E7CC8u: goto label_1e7cc8;
            case 0x1E7CCCu: goto label_1e7ccc;
            case 0x1E7CD0u: goto label_1e7cd0;
            case 0x1E7CD4u: goto label_1e7cd4;
            case 0x1E7CD8u: goto label_1e7cd8;
            case 0x1E7CDCu: goto label_1e7cdc;
            case 0x1E7CE0u: goto label_1e7ce0;
            case 0x1E7CE4u: goto label_1e7ce4;
            case 0x1E7CE8u: goto label_1e7ce8;
            case 0x1E7CECu: goto label_1e7cec;
            case 0x1E7CF0u: goto label_1e7cf0;
            case 0x1E7CF4u: goto label_1e7cf4;
            case 0x1E7CF8u: goto label_1e7cf8;
            case 0x1E7CFCu: goto label_1e7cfc;
            case 0x1E7D00u: goto label_1e7d00;
            case 0x1E7D04u: goto label_1e7d04;
            case 0x1E7D08u: goto label_1e7d08;
            case 0x1E7D0Cu: goto label_1e7d0c;
            case 0x1E7D10u: goto label_1e7d10;
            case 0x1E7D14u: goto label_1e7d14;
            case 0x1E7D18u: goto label_1e7d18;
            case 0x1E7D1Cu: goto label_1e7d1c;
            case 0x1E7D20u: goto label_1e7d20;
            case 0x1E7D24u: goto label_1e7d24;
            case 0x1E7D28u: goto label_1e7d28;
            case 0x1E7D2Cu: goto label_1e7d2c;
            case 0x1E7D30u: goto label_1e7d30;
            case 0x1E7D34u: goto label_1e7d34;
            case 0x1E7D38u: goto label_1e7d38;
            case 0x1E7D3Cu: goto label_1e7d3c;
            case 0x1E7D40u: goto label_1e7d40;
            case 0x1E7D44u: goto label_1e7d44;
            case 0x1E7D48u: goto label_1e7d48;
            case 0x1E7D4Cu: goto label_1e7d4c;
            case 0x1E7D50u: goto label_1e7d50;
            case 0x1E7D54u: goto label_1e7d54;
            case 0x1E7D58u: goto label_1e7d58;
            case 0x1E7D5Cu: goto label_1e7d5c;
            case 0x1E7D60u: goto label_1e7d60;
            case 0x1E7D64u: goto label_1e7d64;
            case 0x1E7D68u: goto label_1e7d68;
            case 0x1E7D6Cu: goto label_1e7d6c;
            case 0x1E7D70u: goto label_1e7d70;
            case 0x1E7D74u: goto label_1e7d74;
            case 0x1E7D78u: goto label_1e7d78;
            case 0x1E7D7Cu: goto label_1e7d7c;
            case 0x1E7D80u: goto label_1e7d80;
            case 0x1E7D84u: goto label_1e7d84;
            case 0x1E7D88u: goto label_1e7d88;
            case 0x1E7D8Cu: goto label_1e7d8c;
            case 0x1E7D90u: goto label_1e7d90;
            case 0x1E7D94u: goto label_1e7d94;
            case 0x1E7D98u: goto label_1e7d98;
            case 0x1E7D9Cu: goto label_1e7d9c;
            case 0x1E7DA0u: goto label_1e7da0;
            case 0x1E7DA4u: goto label_1e7da4;
            case 0x1E7DA8u: goto label_1e7da8;
            case 0x1E7DACu: goto label_1e7dac;
            case 0x1E7DB0u: goto label_1e7db0;
            case 0x1E7DB4u: goto label_1e7db4;
            case 0x1E7DB8u: goto label_1e7db8;
            case 0x1E7DBCu: goto label_1e7dbc;
            case 0x1E7DC0u: goto label_1e7dc0;
            case 0x1E7DC4u: goto label_1e7dc4;
            case 0x1E7DC8u: goto label_1e7dc8;
            case 0x1E7DCCu: goto label_1e7dcc;
            case 0x1E7DD0u: goto label_1e7dd0;
            case 0x1E7DD4u: goto label_1e7dd4;
            case 0x1E7DD8u: goto label_1e7dd8;
            case 0x1E7DDCu: goto label_1e7ddc;
            case 0x1E7DE0u: goto label_1e7de0;
            case 0x1E7DE4u: goto label_1e7de4;
            case 0x1E7DE8u: goto label_1e7de8;
            case 0x1E7DECu: goto label_1e7dec;
            case 0x1E7DF0u: goto label_1e7df0;
            case 0x1E7DF4u: goto label_1e7df4;
            case 0x1E7DF8u: goto label_1e7df8;
            case 0x1E7DFCu: goto label_1e7dfc;
            case 0x1E7E00u: goto label_1e7e00;
            case 0x1E7E04u: goto label_1e7e04;
            case 0x1E7E08u: goto label_1e7e08;
            case 0x1E7E0Cu: goto label_1e7e0c;
            case 0x1E7E10u: goto label_1e7e10;
            case 0x1E7E14u: goto label_1e7e14;
            case 0x1E7E18u: goto label_1e7e18;
            case 0x1E7E1Cu: goto label_1e7e1c;
            case 0x1E7E20u: goto label_1e7e20;
            case 0x1E7E24u: goto label_1e7e24;
            case 0x1E7E28u: goto label_1e7e28;
            case 0x1E7E2Cu: goto label_1e7e2c;
            case 0x1E7E30u: goto label_1e7e30;
            case 0x1E7E34u: goto label_1e7e34;
            case 0x1E7E38u: goto label_1e7e38;
            case 0x1E7E3Cu: goto label_1e7e3c;
            case 0x1E7E40u: goto label_1e7e40;
            case 0x1E7E44u: goto label_1e7e44;
            case 0x1E7E48u: goto label_1e7e48;
            case 0x1E7E4Cu: goto label_1e7e4c;
            case 0x1E7E50u: goto label_1e7e50;
            case 0x1E7E54u: goto label_1e7e54;
            case 0x1E7E58u: goto label_1e7e58;
            case 0x1E7E5Cu: goto label_1e7e5c;
            case 0x1E7E60u: goto label_1e7e60;
            case 0x1E7E64u: goto label_1e7e64;
            case 0x1E7E68u: goto label_1e7e68;
            case 0x1E7E6Cu: goto label_1e7e6c;
            case 0x1E7E70u: goto label_1e7e70;
            case 0x1E7E74u: goto label_1e7e74;
            case 0x1E7E78u: goto label_1e7e78;
            case 0x1E7E7Cu: goto label_1e7e7c;
            case 0x1E7E80u: goto label_1e7e80;
            case 0x1E7E84u: goto label_1e7e84;
            case 0x1E7E88u: goto label_1e7e88;
            case 0x1E7E8Cu: goto label_1e7e8c;
            case 0x1E7E90u: goto label_1e7e90;
            case 0x1E7E94u: goto label_1e7e94;
            case 0x1E7E98u: goto label_1e7e98;
            case 0x1E7E9Cu: goto label_1e7e9c;
            case 0x1E7EA0u: goto label_1e7ea0;
            case 0x1E7EA4u: goto label_1e7ea4;
            case 0x1E7EA8u: goto label_1e7ea8;
            case 0x1E7EACu: goto label_1e7eac;
            case 0x1E7EB0u: goto label_1e7eb0;
            case 0x1E7EB4u: goto label_1e7eb4;
            case 0x1E7EB8u: goto label_1e7eb8;
            case 0x1E7EBCu: goto label_1e7ebc;
            case 0x1E7EC0u: goto label_1e7ec0;
            case 0x1E7EC4u: goto label_1e7ec4;
            case 0x1E7EC8u: goto label_1e7ec8;
            case 0x1E7ECCu: goto label_1e7ecc;
            case 0x1E7ED0u: goto label_1e7ed0;
            case 0x1E7ED4u: goto label_1e7ed4;
            case 0x1E7ED8u: goto label_1e7ed8;
            case 0x1E7EDCu: goto label_1e7edc;
            case 0x1E7EE0u: goto label_1e7ee0;
            case 0x1E7EE4u: goto label_1e7ee4;
            case 0x1E7EE8u: goto label_1e7ee8;
            case 0x1E7EECu: goto label_1e7eec;
            case 0x1E7EF0u: goto label_1e7ef0;
            case 0x1E7EF4u: goto label_1e7ef4;
            case 0x1E7EF8u: goto label_1e7ef8;
            case 0x1E7EFCu: goto label_1e7efc;
            case 0x1E7F00u: goto label_1e7f00;
            case 0x1E7F04u: goto label_1e7f04;
            case 0x1E7F08u: goto label_1e7f08;
            case 0x1E7F0Cu: goto label_1e7f0c;
            case 0x1E7F10u: goto label_1e7f10;
            case 0x1E7F14u: goto label_1e7f14;
            case 0x1E7F18u: goto label_1e7f18;
            case 0x1E7F1Cu: goto label_1e7f1c;
            case 0x1E7F20u: goto label_1e7f20;
            case 0x1E7F24u: goto label_1e7f24;
            case 0x1E7F28u: goto label_1e7f28;
            case 0x1E7F2Cu: goto label_1e7f2c;
            case 0x1E7F30u: goto label_1e7f30;
            case 0x1E7F34u: goto label_1e7f34;
            case 0x1E7F38u: goto label_1e7f38;
            case 0x1E7F3Cu: goto label_1e7f3c;
            case 0x1E7F40u: goto label_1e7f40;
            case 0x1E7F44u: goto label_1e7f44;
            case 0x1E7F48u: goto label_1e7f48;
            case 0x1E7F4Cu: goto label_1e7f4c;
            case 0x1E7F50u: goto label_1e7f50;
            case 0x1E7F54u: goto label_1e7f54;
            case 0x1E7F58u: goto label_1e7f58;
            case 0x1E7F5Cu: goto label_1e7f5c;
            case 0x1E7F60u: goto label_1e7f60;
            case 0x1E7F64u: goto label_1e7f64;
            case 0x1E7F68u: goto label_1e7f68;
            case 0x1E7F6Cu: goto label_1e7f6c;
            case 0x1E7F70u: goto label_1e7f70;
            case 0x1E7F74u: goto label_1e7f74;
            case 0x1E7F78u: goto label_1e7f78;
            case 0x1E7F7Cu: goto label_1e7f7c;
            case 0x1E7F80u: goto label_1e7f80;
            case 0x1E7F84u: goto label_1e7f84;
            case 0x1E7F88u: goto label_1e7f88;
            case 0x1E7F8Cu: goto label_1e7f8c;
            case 0x1E7F90u: goto label_1e7f90;
            case 0x1E7F94u: goto label_1e7f94;
            case 0x1E7F98u: goto label_1e7f98;
            case 0x1E7F9Cu: goto label_1e7f9c;
            case 0x1E7FA0u: goto label_1e7fa0;
            case 0x1E7FA4u: goto label_1e7fa4;
            case 0x1E7FA8u: goto label_1e7fa8;
            case 0x1E7FACu: goto label_1e7fac;
            case 0x1E7FB0u: goto label_1e7fb0;
            case 0x1E7FB4u: goto label_1e7fb4;
            case 0x1E7FB8u: goto label_1e7fb8;
            case 0x1E7FBCu: goto label_1e7fbc;
            case 0x1E7FC0u: goto label_1e7fc0;
            case 0x1E7FC4u: goto label_1e7fc4;
            case 0x1E7FC8u: goto label_1e7fc8;
            case 0x1E7FCCu: goto label_1e7fcc;
            case 0x1E7FD0u: goto label_1e7fd0;
            case 0x1E7FD4u: goto label_1e7fd4;
            case 0x1E7FD8u: goto label_1e7fd8;
            case 0x1E7FDCu: goto label_1e7fdc;
            case 0x1E7FE0u: goto label_1e7fe0;
            case 0x1E7FE4u: goto label_1e7fe4;
            case 0x1E7FE8u: goto label_1e7fe8;
            case 0x1E7FECu: goto label_1e7fec;
            case 0x1E7FF0u: goto label_1e7ff0;
            case 0x1E7FF4u: goto label_1e7ff4;
            case 0x1E7FF8u: goto label_1e7ff8;
            case 0x1E7FFCu: goto label_1e7ffc;
            case 0x1E8000u: goto label_1e8000;
            case 0x1E8004u: goto label_1e8004;
            case 0x1E8008u: goto label_1e8008;
            case 0x1E800Cu: goto label_1e800c;
            case 0x1E8010u: goto label_1e8010;
            case 0x1E8014u: goto label_1e8014;
            case 0x1E8018u: goto label_1e8018;
            case 0x1E801Cu: goto label_1e801c;
            case 0x1E8020u: goto label_1e8020;
            case 0x1E8024u: goto label_1e8024;
            case 0x1E8028u: goto label_1e8028;
            case 0x1E802Cu: goto label_1e802c;
            case 0x1E8030u: goto label_1e8030;
            case 0x1E8034u: goto label_1e8034;
            case 0x1E8038u: goto label_1e8038;
            case 0x1E803Cu: goto label_1e803c;
            case 0x1E8040u: goto label_1e8040;
            case 0x1E8044u: goto label_1e8044;
            case 0x1E8048u: goto label_1e8048;
            case 0x1E804Cu: goto label_1e804c;
            case 0x1E8050u: goto label_1e8050;
            case 0x1E8054u: goto label_1e8054;
            case 0x1E8058u: goto label_1e8058;
            case 0x1E805Cu: goto label_1e805c;
            case 0x1E8060u: goto label_1e8060;
            case 0x1E8064u: goto label_1e8064;
            case 0x1E8068u: goto label_1e8068;
            case 0x1E806Cu: goto label_1e806c;
            case 0x1E8070u: goto label_1e8070;
            case 0x1E8074u: goto label_1e8074;
            case 0x1E8078u: goto label_1e8078;
            case 0x1E807Cu: goto label_1e807c;
            case 0x1E8080u: goto label_1e8080;
            case 0x1E8084u: goto label_1e8084;
            case 0x1E8088u: goto label_1e8088;
            case 0x1E808Cu: goto label_1e808c;
            case 0x1E8090u: goto label_1e8090;
            case 0x1E8094u: goto label_1e8094;
            case 0x1E8098u: goto label_1e8098;
            case 0x1E809Cu: goto label_1e809c;
            case 0x1E80A0u: goto label_1e80a0;
            case 0x1E80A4u: goto label_1e80a4;
            case 0x1E80A8u: goto label_1e80a8;
            case 0x1E80ACu: goto label_1e80ac;
            case 0x1E80B0u: goto label_1e80b0;
            case 0x1E80B4u: goto label_1e80b4;
            case 0x1E80B8u: goto label_1e80b8;
            case 0x1E80BCu: goto label_1e80bc;
            case 0x1E80C0u: goto label_1e80c0;
            case 0x1E80C4u: goto label_1e80c4;
            case 0x1E80C8u: goto label_1e80c8;
            case 0x1E80CCu: goto label_1e80cc;
            case 0x1E80D0u: goto label_1e80d0;
            case 0x1E80D4u: goto label_1e80d4;
            case 0x1E80D8u: goto label_1e80d8;
            case 0x1E80DCu: goto label_1e80dc;
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E80E8u: goto label_1e80e8;
            case 0x1E80ECu: goto label_1e80ec;
            case 0x1E80F0u: goto label_1e80f0;
            case 0x1E80F4u: goto label_1e80f4;
            case 0x1E80F8u: goto label_1e80f8;
            case 0x1E80FCu: goto label_1e80fc;
            case 0x1E8100u: goto label_1e8100;
            case 0x1E8104u: goto label_1e8104;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E810Cu: goto label_1e810c;
            case 0x1E8110u: goto label_1e8110;
            case 0x1E8114u: goto label_1e8114;
            case 0x1E8118u: goto label_1e8118;
            case 0x1E811Cu: goto label_1e811c;
            case 0x1E8120u: goto label_1e8120;
            case 0x1E8124u: goto label_1e8124;
            case 0x1E8128u: goto label_1e8128;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E8130u: goto label_1e8130;
            case 0x1E8134u: goto label_1e8134;
            case 0x1E8138u: goto label_1e8138;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8140u: goto label_1e8140;
            case 0x1E8144u: goto label_1e8144;
            case 0x1E8148u: goto label_1e8148;
            case 0x1E814Cu: goto label_1e814c;
            case 0x1E8150u: goto label_1e8150;
            case 0x1E8154u: goto label_1e8154;
            case 0x1E8158u: goto label_1e8158;
            case 0x1E815Cu: goto label_1e815c;
            case 0x1E8160u: goto label_1e8160;
            case 0x1E8164u: goto label_1e8164;
            case 0x1E8168u: goto label_1e8168;
            case 0x1E816Cu: goto label_1e816c;
            case 0x1E8170u: goto label_1e8170;
            case 0x1E8174u: goto label_1e8174;
            case 0x1E8178u: goto label_1e8178;
            case 0x1E817Cu: goto label_1e817c;
            case 0x1E8180u: goto label_1e8180;
            case 0x1E8184u: goto label_1e8184;
            case 0x1E8188u: goto label_1e8188;
            case 0x1E818Cu: goto label_1e818c;
            case 0x1E8190u: goto label_1e8190;
            case 0x1E8194u: goto label_1e8194;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81A0u: goto label_1e81a0;
            case 0x1E81A4u: goto label_1e81a4;
            case 0x1E81A8u: goto label_1e81a8;
            case 0x1E81ACu: goto label_1e81ac;
            case 0x1E81B0u: goto label_1e81b0;
            case 0x1E81B4u: goto label_1e81b4;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81BCu: goto label_1e81bc;
            case 0x1E81C0u: goto label_1e81c0;
            case 0x1E81C4u: goto label_1e81c4;
            case 0x1E81C8u: goto label_1e81c8;
            case 0x1E81CCu: goto label_1e81cc;
            case 0x1E81D0u: goto label_1e81d0;
            case 0x1E81D4u: goto label_1e81d4;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E81DCu: goto label_1e81dc;
            case 0x1E81E0u: goto label_1e81e0;
            case 0x1E81E4u: goto label_1e81e4;
            case 0x1E81E8u: goto label_1e81e8;
            case 0x1E81ECu: goto label_1e81ec;
            case 0x1E81F0u: goto label_1e81f0;
            case 0x1E81F4u: goto label_1e81f4;
            case 0x1E81F8u: goto label_1e81f8;
            case 0x1E81FCu: goto label_1e81fc;
            case 0x1E8200u: goto label_1e8200;
            case 0x1E8204u: goto label_1e8204;
            case 0x1E8208u: goto label_1e8208;
            case 0x1E820Cu: goto label_1e820c;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8214u: goto label_1e8214;
            case 0x1E8218u: goto label_1e8218;
            case 0x1E821Cu: goto label_1e821c;
            case 0x1E8220u: goto label_1e8220;
            case 0x1E8224u: goto label_1e8224;
            case 0x1E8228u: goto label_1e8228;
            case 0x1E822Cu: goto label_1e822c;
            case 0x1E8230u: goto label_1e8230;
            case 0x1E8234u: goto label_1e8234;
            case 0x1E8238u: goto label_1e8238;
            case 0x1E823Cu: goto label_1e823c;
            case 0x1E8240u: goto label_1e8240;
            case 0x1E8244u: goto label_1e8244;
            case 0x1E8248u: goto label_1e8248;
            case 0x1E824Cu: goto label_1e824c;
            case 0x1E8250u: goto label_1e8250;
            case 0x1E8254u: goto label_1e8254;
            case 0x1E8258u: goto label_1e8258;
            case 0x1E825Cu: goto label_1e825c;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E8264u: goto label_1e8264;
            case 0x1E8268u: goto label_1e8268;
            case 0x1E826Cu: goto label_1e826c;
            case 0x1E8270u: goto label_1e8270;
            case 0x1E8274u: goto label_1e8274;
            case 0x1E8278u: goto label_1e8278;
            case 0x1E827Cu: goto label_1e827c;
            case 0x1E8280u: goto label_1e8280;
            case 0x1E8284u: goto label_1e8284;
            case 0x1E8288u: goto label_1e8288;
            case 0x1E828Cu: goto label_1e828c;
            case 0x1E8290u: goto label_1e8290;
            case 0x1E8294u: goto label_1e8294;
            case 0x1E8298u: goto label_1e8298;
            case 0x1E829Cu: goto label_1e829c;
            case 0x1E82A0u: goto label_1e82a0;
            case 0x1E82A4u: goto label_1e82a4;
            case 0x1E82A8u: goto label_1e82a8;
            case 0x1E82ACu: goto label_1e82ac;
            case 0x1E82B0u: goto label_1e82b0;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E82B8u: goto label_1e82b8;
            case 0x1E82BCu: goto label_1e82bc;
            case 0x1E82C0u: goto label_1e82c0;
            case 0x1E82C4u: goto label_1e82c4;
            case 0x1E82C8u: goto label_1e82c8;
            case 0x1E82CCu: goto label_1e82cc;
            case 0x1E82D0u: goto label_1e82d0;
            case 0x1E82D4u: goto label_1e82d4;
            case 0x1E82D8u: goto label_1e82d8;
            case 0x1E82DCu: goto label_1e82dc;
            case 0x1E82E0u: goto label_1e82e0;
            case 0x1E82E4u: goto label_1e82e4;
            case 0x1E82E8u: goto label_1e82e8;
            case 0x1E82ECu: goto label_1e82ec;
            case 0x1E82F0u: goto label_1e82f0;
            case 0x1E82F4u: goto label_1e82f4;
            case 0x1E82F8u: goto label_1e82f8;
            case 0x1E82FCu: goto label_1e82fc;
            case 0x1E8300u: goto label_1e8300;
            case 0x1E8304u: goto label_1e8304;
            case 0x1E8308u: goto label_1e8308;
            case 0x1E830Cu: goto label_1e830c;
            case 0x1E8310u: goto label_1e8310;
            case 0x1E8314u: goto label_1e8314;
            case 0x1E8318u: goto label_1e8318;
            case 0x1E831Cu: goto label_1e831c;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8328u: goto label_1e8328;
            case 0x1E832Cu: goto label_1e832c;
            case 0x1E8330u: goto label_1e8330;
            case 0x1E8334u: goto label_1e8334;
            case 0x1E8338u: goto label_1e8338;
            case 0x1E833Cu: goto label_1e833c;
            case 0x1E8340u: goto label_1e8340;
            case 0x1E8344u: goto label_1e8344;
            case 0x1E8348u: goto label_1e8348;
            case 0x1E834Cu: goto label_1e834c;
            case 0x1E8350u: goto label_1e8350;
            case 0x1E8354u: goto label_1e8354;
            case 0x1E8358u: goto label_1e8358;
            case 0x1E835Cu: goto label_1e835c;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E8368u: goto label_1e8368;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E8370u: goto label_1e8370;
            case 0x1E8374u: goto label_1e8374;
            case 0x1E8378u: goto label_1e8378;
            case 0x1E837Cu: goto label_1e837c;
            case 0x1E8380u: goto label_1e8380;
            case 0x1E8384u: goto label_1e8384;
            case 0x1E8388u: goto label_1e8388;
            case 0x1E838Cu: goto label_1e838c;
            case 0x1E8390u: goto label_1e8390;
            case 0x1E8394u: goto label_1e8394;
            case 0x1E8398u: goto label_1e8398;
            case 0x1E839Cu: goto label_1e839c;
            case 0x1E83A0u: goto label_1e83a0;
            case 0x1E83A4u: goto label_1e83a4;
            case 0x1E83A8u: goto label_1e83a8;
            case 0x1E83ACu: goto label_1e83ac;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            case 0x1E83B8u: goto label_1e83b8;
            case 0x1E83BCu: goto label_1e83bc;
            case 0x1E83C0u: goto label_1e83c0;
            case 0x1E83C4u: goto label_1e83c4;
            case 0x1E83C8u: goto label_1e83c8;
            case 0x1E83CCu: goto label_1e83cc;
            case 0x1E83D0u: goto label_1e83d0;
            case 0x1E83D4u: goto label_1e83d4;
            case 0x1E83D8u: goto label_1e83d8;
            case 0x1E83DCu: goto label_1e83dc;
            case 0x1E83E0u: goto label_1e83e0;
            case 0x1E83E4u: goto label_1e83e4;
            case 0x1E83E8u: goto label_1e83e8;
            case 0x1E83ECu: goto label_1e83ec;
            case 0x1E83F0u: goto label_1e83f0;
            case 0x1E83F4u: goto label_1e83f4;
            case 0x1E83F8u: goto label_1e83f8;
            case 0x1E83FCu: goto label_1e83fc;
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8404u: goto label_1e8404;
            case 0x1E8408u: goto label_1e8408;
            case 0x1E840Cu: goto label_1e840c;
            case 0x1E8410u: goto label_1e8410;
            case 0x1E8414u: goto label_1e8414;
            case 0x1E8418u: goto label_1e8418;
            case 0x1E841Cu: goto label_1e841c;
            case 0x1E8420u: goto label_1e8420;
            case 0x1E8424u: goto label_1e8424;
            case 0x1E8428u: goto label_1e8428;
            case 0x1E842Cu: goto label_1e842c;
            case 0x1E8430u: goto label_1e8430;
            case 0x1E8434u: goto label_1e8434;
            case 0x1E8438u: goto label_1e8438;
            case 0x1E843Cu: goto label_1e843c;
            case 0x1E8440u: goto label_1e8440;
            case 0x1E8444u: goto label_1e8444;
            case 0x1E8448u: goto label_1e8448;
            case 0x1E844Cu: goto label_1e844c;
            case 0x1E8450u: goto label_1e8450;
            case 0x1E8454u: goto label_1e8454;
            case 0x1E8458u: goto label_1e8458;
            case 0x1E845Cu: goto label_1e845c;
            case 0x1E8460u: goto label_1e8460;
            case 0x1E8464u: goto label_1e8464;
            case 0x1E8468u: goto label_1e8468;
            case 0x1E846Cu: goto label_1e846c;
            case 0x1E8470u: goto label_1e8470;
            case 0x1E8474u: goto label_1e8474;
            case 0x1E8478u: goto label_1e8478;
            case 0x1E847Cu: goto label_1e847c;
            case 0x1E8480u: goto label_1e8480;
            case 0x1E8484u: goto label_1e8484;
            case 0x1E8488u: goto label_1e8488;
            case 0x1E848Cu: goto label_1e848c;
            case 0x1E8490u: goto label_1e8490;
            case 0x1E8494u: goto label_1e8494;
            case 0x1E8498u: goto label_1e8498;
            case 0x1E849Cu: goto label_1e849c;
            case 0x1E84A0u: goto label_1e84a0;
            case 0x1E84A4u: goto label_1e84a4;
            case 0x1E84A8u: goto label_1e84a8;
            case 0x1E84ACu: goto label_1e84ac;
            case 0x1E84B0u: goto label_1e84b0;
            case 0x1E84B4u: goto label_1e84b4;
            case 0x1E84B8u: goto label_1e84b8;
            case 0x1E84BCu: goto label_1e84bc;
            case 0x1E84C0u: goto label_1e84c0;
            case 0x1E84C4u: goto label_1e84c4;
            case 0x1E84C8u: goto label_1e84c8;
            case 0x1E84CCu: goto label_1e84cc;
            case 0x1E84D0u: goto label_1e84d0;
            case 0x1E84D4u: goto label_1e84d4;
            case 0x1E84D8u: goto label_1e84d8;
            case 0x1E84DCu: goto label_1e84dc;
            case 0x1E84E0u: goto label_1e84e0;
            case 0x1E84E4u: goto label_1e84e4;
            case 0x1E84E8u: goto label_1e84e8;
            case 0x1E84ECu: goto label_1e84ec;
            case 0x1E84F0u: goto label_1e84f0;
            case 0x1E84F4u: goto label_1e84f4;
            case 0x1E84F8u: goto label_1e84f8;
            case 0x1E84FCu: goto label_1e84fc;
            case 0x1E8500u: goto label_1e8500;
            case 0x1E8504u: goto label_1e8504;
            case 0x1E8508u: goto label_1e8508;
            case 0x1E850Cu: goto label_1e850c;
            case 0x1E8510u: goto label_1e8510;
            case 0x1E8514u: goto label_1e8514;
            case 0x1E8518u: goto label_1e8518;
            case 0x1E851Cu: goto label_1e851c;
            case 0x1E8520u: goto label_1e8520;
            case 0x1E8524u: goto label_1e8524;
            case 0x1E8528u: goto label_1e8528;
            case 0x1E852Cu: goto label_1e852c;
            case 0x1E8530u: goto label_1e8530;
            case 0x1E8534u: goto label_1e8534;
            case 0x1E8538u: goto label_1e8538;
            case 0x1E853Cu: goto label_1e853c;
            case 0x1E8540u: goto label_1e8540;
            case 0x1E8544u: goto label_1e8544;
            case 0x1E8548u: goto label_1e8548;
            case 0x1E854Cu: goto label_1e854c;
            case 0x1E8550u: goto label_1e8550;
            case 0x1E8554u: goto label_1e8554;
            case 0x1E8558u: goto label_1e8558;
            case 0x1E855Cu: goto label_1e855c;
            case 0x1E8560u: goto label_1e8560;
            case 0x1E8564u: goto label_1e8564;
            case 0x1E8568u: goto label_1e8568;
            case 0x1E856Cu: goto label_1e856c;
            case 0x1E8570u: goto label_1e8570;
            case 0x1E8574u: goto label_1e8574;
            case 0x1E8578u: goto label_1e8578;
            case 0x1E857Cu: goto label_1e857c;
            case 0x1E8580u: goto label_1e8580;
            case 0x1E8584u: goto label_1e8584;
            case 0x1E8588u: goto label_1e8588;
            case 0x1E858Cu: goto label_1e858c;
            case 0x1E8590u: goto label_1e8590;
            case 0x1E8594u: goto label_1e8594;
            case 0x1E8598u: goto label_1e8598;
            case 0x1E859Cu: goto label_1e859c;
            case 0x1E85A0u: goto label_1e85a0;
            case 0x1E85A4u: goto label_1e85a4;
            case 0x1E85A8u: goto label_1e85a8;
            case 0x1E85ACu: goto label_1e85ac;
            case 0x1E85B0u: goto label_1e85b0;
            case 0x1E85B4u: goto label_1e85b4;
            case 0x1E85B8u: goto label_1e85b8;
            case 0x1E85BCu: goto label_1e85bc;
            case 0x1E85C0u: goto label_1e85c0;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E85C8u: goto label_1e85c8;
            case 0x1E85CCu: goto label_1e85cc;
            case 0x1E85D0u: goto label_1e85d0;
            case 0x1E85D4u: goto label_1e85d4;
            case 0x1E85D8u: goto label_1e85d8;
            case 0x1E85DCu: goto label_1e85dc;
            case 0x1E85E0u: goto label_1e85e0;
            case 0x1E85E4u: goto label_1e85e4;
            case 0x1E85E8u: goto label_1e85e8;
            case 0x1E85ECu: goto label_1e85ec;
            case 0x1E85F0u: goto label_1e85f0;
            case 0x1E85F4u: goto label_1e85f4;
            case 0x1E85F8u: goto label_1e85f8;
            case 0x1E85FCu: goto label_1e85fc;
            case 0x1E8600u: goto label_1e8600;
            case 0x1E8604u: goto label_1e8604;
            case 0x1E8608u: goto label_1e8608;
            case 0x1E860Cu: goto label_1e860c;
            case 0x1E8610u: goto label_1e8610;
            case 0x1E8614u: goto label_1e8614;
            case 0x1E8618u: goto label_1e8618;
            case 0x1E861Cu: goto label_1e861c;
            case 0x1E8620u: goto label_1e8620;
            case 0x1E8624u: goto label_1e8624;
            case 0x1E8628u: goto label_1e8628;
            case 0x1E862Cu: goto label_1e862c;
            case 0x1E8630u: goto label_1e8630;
            case 0x1E8634u: goto label_1e8634;
            case 0x1E8638u: goto label_1e8638;
            case 0x1E863Cu: goto label_1e863c;
            case 0x1E8640u: goto label_1e8640;
            case 0x1E8644u: goto label_1e8644;
            case 0x1E8648u: goto label_1e8648;
            case 0x1E864Cu: goto label_1e864c;
            case 0x1E8650u: goto label_1e8650;
            case 0x1E8654u: goto label_1e8654;
            case 0x1E8658u: goto label_1e8658;
            case 0x1E865Cu: goto label_1e865c;
            case 0x1E8660u: goto label_1e8660;
            case 0x1E8664u: goto label_1e8664;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E866Cu: goto label_1e866c;
            case 0x1E8670u: goto label_1e8670;
            case 0x1E8674u: goto label_1e8674;
            case 0x1E8678u: goto label_1e8678;
            case 0x1E867Cu: goto label_1e867c;
            case 0x1E8680u: goto label_1e8680;
            case 0x1E8684u: goto label_1e8684;
            case 0x1E8688u: goto label_1e8688;
            case 0x1E868Cu: goto label_1e868c;
            case 0x1E8690u: goto label_1e8690;
            case 0x1E8694u: goto label_1e8694;
            case 0x1E8698u: goto label_1e8698;
            case 0x1E869Cu: goto label_1e869c;
            case 0x1E86A0u: goto label_1e86a0;
            case 0x1E86A4u: goto label_1e86a4;
            case 0x1E86A8u: goto label_1e86a8;
            case 0x1E86ACu: goto label_1e86ac;
            case 0x1E86B0u: goto label_1e86b0;
            case 0x1E86B4u: goto label_1e86b4;
            case 0x1E86B8u: goto label_1e86b8;
            case 0x1E86BCu: goto label_1e86bc;
            case 0x1E86C0u: goto label_1e86c0;
            case 0x1E86C4u: goto label_1e86c4;
            case 0x1E86C8u: goto label_1e86c8;
            case 0x1E86CCu: goto label_1e86cc;
            case 0x1E86D0u: goto label_1e86d0;
            case 0x1E86D4u: goto label_1e86d4;
            case 0x1E86D8u: goto label_1e86d8;
            case 0x1E86DCu: goto label_1e86dc;
            case 0x1E86E0u: goto label_1e86e0;
            case 0x1E86E4u: goto label_1e86e4;
            case 0x1E86E8u: goto label_1e86e8;
            case 0x1E86ECu: goto label_1e86ec;
            case 0x1E86F0u: goto label_1e86f0;
            case 0x1E86F4u: goto label_1e86f4;
            case 0x1E86F8u: goto label_1e86f8;
            case 0x1E86FCu: goto label_1e86fc;
            case 0x1E8700u: goto label_1e8700;
            case 0x1E8704u: goto label_1e8704;
            case 0x1E8708u: goto label_1e8708;
            case 0x1E870Cu: goto label_1e870c;
            case 0x1E8710u: goto label_1e8710;
            case 0x1E8714u: goto label_1e8714;
            case 0x1E8718u: goto label_1e8718;
            case 0x1E871Cu: goto label_1e871c;
            case 0x1E8720u: goto label_1e8720;
            case 0x1E8724u: goto label_1e8724;
            case 0x1E8728u: goto label_1e8728;
            case 0x1E872Cu: goto label_1e872c;
            case 0x1E8730u: goto label_1e8730;
            case 0x1E8734u: goto label_1e8734;
            case 0x1E8738u: goto label_1e8738;
            case 0x1E873Cu: goto label_1e873c;
            case 0x1E8740u: goto label_1e8740;
            case 0x1E8744u: goto label_1e8744;
            case 0x1E8748u: goto label_1e8748;
            case 0x1E874Cu: goto label_1e874c;
            case 0x1E8750u: goto label_1e8750;
            case 0x1E8754u: goto label_1e8754;
            case 0x1E8758u: goto label_1e8758;
            case 0x1E875Cu: goto label_1e875c;
            case 0x1E8760u: goto label_1e8760;
            case 0x1E8764u: goto label_1e8764;
            case 0x1E8768u: goto label_1e8768;
            case 0x1E876Cu: goto label_1e876c;
            case 0x1E8770u: goto label_1e8770;
            case 0x1E8774u: goto label_1e8774;
            case 0x1E8778u: goto label_1e8778;
            case 0x1E877Cu: goto label_1e877c;
            case 0x1E8780u: goto label_1e8780;
            case 0x1E8784u: goto label_1e8784;
            case 0x1E8788u: goto label_1e8788;
            case 0x1E878Cu: goto label_1e878c;
            case 0x1E8790u: goto label_1e8790;
            case 0x1E8794u: goto label_1e8794;
            case 0x1E8798u: goto label_1e8798;
            case 0x1E879Cu: goto label_1e879c;
            case 0x1E87A0u: goto label_1e87a0;
            case 0x1E87A4u: goto label_1e87a4;
            case 0x1E87A8u: goto label_1e87a8;
            case 0x1E87ACu: goto label_1e87ac;
            case 0x1E87B0u: goto label_1e87b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E8244u; }
            if (ctx->pc != 0x1E8244u) { return; }
        }
    }
    ctx->pc = 0x1E8244u;
label_1e8244:
    // 0x1e8244: 0x10000154  b           . + 4 + (0x154 << 2)
label_1e8248:
    if (ctx->pc == 0x1E8248u) {
        ctx->pc = 0x1E824Cu;
        goto label_1e824c;
    }
    ctx->pc = 0x1E8244u;
    {
        const bool branch_taken_0x1e8244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8244) {
            ctx->pc = 0x1E8798u;
            goto label_1e8798;
        }
    }
    ctx->pc = 0x1E824Cu;
label_1e824c:
    // 0x1e824c: 0x0  nop
    ctx->pc = 0x1e824cu;
    // NOP
label_1e8250:
    // 0x1e8250: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1e8250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e8254:
    // 0x1e8254: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_1e8258:
    if (ctx->pc == 0x1E8258u) {
        ctx->pc = 0x1E825Cu;
        goto label_1e825c;
    }
    ctx->pc = 0x1E8254u;
    {
        const bool branch_taken_0x1e8254 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e8254) {
            ctx->pc = 0x1E8778u;
            goto label_1e8778;
        }
    }
    ctx->pc = 0x1E825Cu;
label_1e825c:
    // 0x1e825c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x1e825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_1e8260:
    // 0x1e8260: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e8260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8264:
    // 0x1e8264: 0xae62011c  sw          $v0, 0x11C($s3)
    ctx->pc = 0x1e8264u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
label_1e8268:
    // 0x1e8268: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1e8268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1e826c:
    // 0x1e826c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1e8270:
    // 0x1e8270: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x1e8270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
label_1e8274:
    // 0x1e8274: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1e8274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1e8278:
    // 0x1e8278: 0xc0604b0  jal         func_1812C0
label_1e827c:
    if (ctx->pc == 0x1E827Cu) {
        ctx->pc = 0x1E827Cu;
            // 0x1e827c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1E8280u;
        goto label_1e8280;
    }
    ctx->pc = 0x1E8278u;
    SET_GPR_U32(ctx, 31, 0x1E8280u);
    ctx->pc = 0x1E827Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8278u;
            // 0x1e827c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8280u; }
        if (ctx->pc != 0x1E8280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8280u; }
        if (ctx->pc != 0x1E8280u) { return; }
    }
    ctx->pc = 0x1E8280u;
label_1e8280:
    // 0x1e8280: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x1e8280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8284:
    // 0x1e8284: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1e8284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1e8288:
    // 0x1e8288: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1e8288u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1e828c:
    // 0x1e828c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e828cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e8290:
    // 0x1e8290: 0x0  nop
    ctx->pc = 0x1e8290u;
    // NOP
label_1e8294:
    // 0x1e8294: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e8294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e8298:
    // 0x1e8298: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x1e8298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1e829c:
    // 0x1e829c: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1e829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e82a0:
    // 0x1e82a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e82a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1e82a4:
    // 0x1e82a4: 0xc050ba4  jal         func_142E90
label_1e82a8:
    if (ctx->pc == 0x1E82A8u) {
        ctx->pc = 0x1E82A8u;
            // 0x1e82a8: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x1E82ACu;
        goto label_1e82ac;
    }
    ctx->pc = 0x1E82A4u;
    SET_GPR_U32(ctx, 31, 0x1E82ACu);
    ctx->pc = 0x1E82A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82A4u;
            // 0x1e82a8: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82ACu; }
        if (ctx->pc != 0x1E82ACu) { return; }
    }
    ctx->pc = 0x1E82ACu;
label_1e82ac:
    // 0x1e82ac: 0xc040d72  jal         func_1035C8
label_1e82b0:
    if (ctx->pc == 0x1E82B0u) {
        ctx->pc = 0x1E82B0u;
            // 0x1e82b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E82B4u;
        goto label_1e82b4;
    }
    ctx->pc = 0x1E82ACu;
    SET_GPR_U32(ctx, 31, 0x1E82B4u);
    ctx->pc = 0x1E82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82ACu;
            // 0x1e82b0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82B4u; }
        if (ctx->pc != 0x1E82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82B4u; }
        if (ctx->pc != 0x1E82B4u) { return; }
    }
    ctx->pc = 0x1E82B4u;
label_1e82b4:
    // 0x1e82b4: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1e82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1e82b8:
    // 0x1e82b8: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e82b8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e82bc:
    // 0x1e82bc: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e82bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e82c0:
    // 0x1e82c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e82c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e82c4:
    // 0x1e82c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e82c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e82c8:
    // 0x1e82c8: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e82c8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e82cc:
    // 0x1e82cc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e82ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e82d0:
    // 0x1e82d0: 0xc040880  jal         func_102200
label_1e82d4:
    if (ctx->pc == 0x1E82D4u) {
        ctx->pc = 0x1E82D4u;
            // 0x1e82d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E82D8u;
        goto label_1e82d8;
    }
    ctx->pc = 0x1E82D0u;
    SET_GPR_U32(ctx, 31, 0x1E82D8u);
    ctx->pc = 0x1E82D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82D0u;
            // 0x1e82d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82D8u; }
        if (ctx->pc != 0x1E82D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82D8u; }
        if (ctx->pc != 0x1E82D8u) { return; }
    }
    ctx->pc = 0x1E82D8u;
label_1e82d8:
    // 0x1e82d8: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1e82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1e82dc:
    // 0x1e82dc: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e82dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e82e0:
    // 0x1e82e0: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e82e0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e82e4:
    // 0x1e82e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e82e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e82e8:
    // 0x1e82e8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e82e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e82ec:
    // 0x1e82ec: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e82ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e82f0:
    // 0x1e82f0: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e82f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e82f4:
    // 0x1e82f4: 0xc040866  jal         func_102198
label_1e82f8:
    if (ctx->pc == 0x1E82F8u) {
        ctx->pc = 0x1E82F8u;
            // 0x1e82f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E82FCu;
        goto label_1e82fc;
    }
    ctx->pc = 0x1E82F4u;
    SET_GPR_U32(ctx, 31, 0x1E82FCu);
    ctx->pc = 0x1E82F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82F4u;
            // 0x1e82f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82FCu; }
        if (ctx->pc != 0x1E82FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E82FCu; }
        if (ctx->pc != 0x1E82FCu) { return; }
    }
    ctx->pc = 0x1E82FCu;
label_1e82fc:
    // 0x1e82fc: 0xc040a74  jal         func_1029D0
label_1e8300:
    if (ctx->pc == 0x1E8300u) {
        ctx->pc = 0x1E8300u;
            // 0x1e8300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8304u;
        goto label_1e8304;
    }
    ctx->pc = 0x1E82FCu;
    SET_GPR_U32(ctx, 31, 0x1E8304u);
    ctx->pc = 0x1E8300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E82FCu;
            // 0x1e8300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8304u; }
        if (ctx->pc != 0x1E8304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8304u; }
        if (ctx->pc != 0x1E8304u) { return; }
    }
    ctx->pc = 0x1E8304u;
label_1e8304:
    // 0x1e8304: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x1e8304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8308:
    // 0x1e8308: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e8308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e830c:
    // 0x1e830c: 0xc050ba4  jal         func_142E90
label_1e8310:
    if (ctx->pc == 0x1E8310u) {
        ctx->pc = 0x1E8310u;
            // 0x1e8310: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->pc = 0x1E8314u;
        goto label_1e8314;
    }
    ctx->pc = 0x1E830Cu;
    SET_GPR_U32(ctx, 31, 0x1E8314u);
    ctx->pc = 0x1E8310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E830Cu;
            // 0x1e8310: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8314u; }
        if (ctx->pc != 0x1E8314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8314u; }
        if (ctx->pc != 0x1E8314u) { return; }
    }
    ctx->pc = 0x1E8314u;
label_1e8314:
    // 0x1e8314: 0xc040d72  jal         func_1035C8
label_1e8318:
    if (ctx->pc == 0x1E8318u) {
        ctx->pc = 0x1E8318u;
            // 0x1e8318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1E831Cu;
        goto label_1e831c;
    }
    ctx->pc = 0x1E8314u;
    SET_GPR_U32(ctx, 31, 0x1E831Cu);
    ctx->pc = 0x1E8318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8314u;
            // 0x1e8318: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E831Cu; }
        if (ctx->pc != 0x1E831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E831Cu; }
        if (ctx->pc != 0x1E831Cu) { return; }
    }
    ctx->pc = 0x1E831Cu;
label_1e831c:
    // 0x1e831c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1e831cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1e8320:
    // 0x1e8320: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e8320u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e8324:
    // 0x1e8324: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e8324u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e8328:
    // 0x1e8328: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e8328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e832c:
    // 0x1e832c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e8330:
    // 0x1e8330: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e8330u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e8334:
    // 0x1e8334: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e8334u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e8338:
    // 0x1e8338: 0xc040880  jal         func_102200
label_1e833c:
    if (ctx->pc == 0x1E833Cu) {
        ctx->pc = 0x1E833Cu;
            // 0x1e833c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8340u;
        goto label_1e8340;
    }
    ctx->pc = 0x1E8338u;
    SET_GPR_U32(ctx, 31, 0x1E8340u);
    ctx->pc = 0x1E833Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8338u;
            // 0x1e833c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8340u; }
        if (ctx->pc != 0x1E8340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8340u; }
        if (ctx->pc != 0x1E8340u) { return; }
    }
    ctx->pc = 0x1E8340u;
label_1e8340:
    // 0x1e8340: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1e8340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1e8344:
    // 0x1e8344: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1e8344u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1e8348:
    // 0x1e8348: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1e8348u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1e834c:
    // 0x1e834c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1e834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1e8350:
    // 0x1e8350: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1e8350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1e8354:
    // 0x1e8354: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1e8354u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1e8358:
    // 0x1e8358: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1e8358u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1e835c:
    // 0x1e835c: 0xc040866  jal         func_102198
label_1e8360:
    if (ctx->pc == 0x1E8360u) {
        ctx->pc = 0x1E8360u;
            // 0x1e8360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8364u;
        goto label_1e8364;
    }
    ctx->pc = 0x1E835Cu;
    SET_GPR_U32(ctx, 31, 0x1E8364u);
    ctx->pc = 0x1E8360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E835Cu;
            // 0x1e8360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8364u; }
        if (ctx->pc != 0x1E8364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8364u; }
        if (ctx->pc != 0x1E8364u) { return; }
    }
    ctx->pc = 0x1E8364u;
label_1e8364:
    // 0x1e8364: 0xc040a74  jal         func_1029D0
label_1e8368:
    if (ctx->pc == 0x1E8368u) {
        ctx->pc = 0x1E8368u;
            // 0x1e8368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E836Cu;
        goto label_1e836c;
    }
    ctx->pc = 0x1E8364u;
    SET_GPR_U32(ctx, 31, 0x1E836Cu);
    ctx->pc = 0x1E8368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8364u;
            // 0x1e8368: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E836Cu; }
        if (ctx->pc != 0x1E836Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E836Cu; }
        if (ctx->pc != 0x1E836Cu) { return; }
    }
    ctx->pc = 0x1E836Cu;
label_1e836c:
    // 0x1e836c: 0xc66100e0  lwc1        $f1, 0xE0($s3)
    ctx->pc = 0x1e836cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e8370:
    // 0x1e8370: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e8370u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1e8374:
    // 0x1e8374: 0xe66000e0  swc1        $f0, 0xE0($s3)
    ctx->pc = 0x1e8374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_1e8378:
    // 0x1e8378: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x1e8378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_1e837c:
    // 0x1e837c: 0x2861003d  slti        $at, $v1, 0x3D
    ctx->pc = 0x1e837cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)61) ? 1 : 0);
label_1e8380:
    // 0x1e8380: 0x14200105  bnez        $at, . + 4 + (0x105 << 2)
label_1e8384:
    if (ctx->pc == 0x1E8384u) {
        ctx->pc = 0x1E8388u;
        goto label_1e8388;
    }
    ctx->pc = 0x1E8380u;
    {
        const bool branch_taken_0x1e8380 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e8380) {
            ctx->pc = 0x1E8798u;
            goto label_1e8798;
        }
    }
    ctx->pc = 0x1E8388u;
label_1e8388:
    // 0x1e8388: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e8388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e838c:
    // 0x1e838c: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1e838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1e8390:
    // 0x1e8390: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e8390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e8394:
    // 0x1e8394: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e8394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e8398:
    // 0x1e8398: 0xc05d080  jal         func_174200
label_1e839c:
    if (ctx->pc == 0x1E839Cu) {
        ctx->pc = 0x1E839Cu;
            // 0x1e839c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E83A0u;
        goto label_1e83a0;
    }
    ctx->pc = 0x1E8398u;
    SET_GPR_U32(ctx, 31, 0x1E83A0u);
    ctx->pc = 0x1E839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8398u;
            // 0x1e839c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83A0u; }
        if (ctx->pc != 0x1E83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83A0u; }
        if (ctx->pc != 0x1E83A0u) { return; }
    }
    ctx->pc = 0x1E83A0u;
label_1e83a0:
    // 0x1e83a0: 0xc050bb4  jal         func_142ED0
label_1e83a4:
    if (ctx->pc == 0x1E83A4u) {
        ctx->pc = 0x1E83A8u;
        goto label_1e83a8;
    }
    ctx->pc = 0x1E83A0u;
    SET_GPR_U32(ctx, 31, 0x1E83A8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83A8u; }
        if (ctx->pc != 0x1E83A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83A8u; }
        if (ctx->pc != 0x1E83A8u) { return; }
    }
    ctx->pc = 0x1E83A8u;
label_1e83a8:
    // 0x1e83a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e83a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e83ac:
    // 0x1e83ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e83b0:
    if (ctx->pc == 0x1E83B0u) {
        ctx->pc = 0x1E83B4u;
        goto label_1e83b4;
    }
    ctx->pc = 0x1E83ACu;
    {
        const bool branch_taken_0x1e83ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83ac) {
            ctx->pc = 0x1E83D0u;
            goto label_1e83d0;
        }
    }
    ctx->pc = 0x1E83B4u;
label_1e83b4:
    // 0x1e83b4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e83b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e83b8:
    // 0x1e83b8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1e83b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1e83bc:
    // 0x1e83bc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e83bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e83c0:
    // 0x1e83c0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e83c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e83c4:
    // 0x1e83c4: 0xc05d080  jal         func_174200
label_1e83c8:
    if (ctx->pc == 0x1E83C8u) {
        ctx->pc = 0x1E83C8u;
            // 0x1e83c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E83CCu;
        goto label_1e83cc;
    }
    ctx->pc = 0x1E83C4u;
    SET_GPR_U32(ctx, 31, 0x1E83CCu);
    ctx->pc = 0x1E83C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83C4u;
            // 0x1e83c8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83CCu; }
        if (ctx->pc != 0x1E83CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83CCu; }
        if (ctx->pc != 0x1E83CCu) { return; }
    }
    ctx->pc = 0x1E83CCu;
label_1e83cc:
    // 0x1e83cc: 0x0  nop
    ctx->pc = 0x1e83ccu;
    // NOP
label_1e83d0:
    // 0x1e83d0: 0xc050bb4  jal         func_142ED0
label_1e83d4:
    if (ctx->pc == 0x1E83D4u) {
        ctx->pc = 0x1E83D8u;
        goto label_1e83d8;
    }
    ctx->pc = 0x1E83D0u;
    SET_GPR_U32(ctx, 31, 0x1E83D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83D8u; }
        if (ctx->pc != 0x1E83D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83D8u; }
        if (ctx->pc != 0x1E83D8u) { return; }
    }
    ctx->pc = 0x1E83D8u;
label_1e83d8:
    // 0x1e83d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e83d8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1e83dc:
    // 0x1e83dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1e83e0:
    if (ctx->pc == 0x1E83E0u) {
        ctx->pc = 0x1E83E4u;
        goto label_1e83e4;
    }
    ctx->pc = 0x1E83DCu;
    {
        const bool branch_taken_0x1e83dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e83dc) {
            ctx->pc = 0x1E8400u;
            goto label_1e8400;
        }
    }
    ctx->pc = 0x1E83E4u;
label_1e83e4:
    // 0x1e83e4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1e83e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e83e8:
    // 0x1e83e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1e83e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1e83ec:
    // 0x1e83ec: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1e83ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e83f0:
    // 0x1e83f0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e83f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1e83f4:
    // 0x1e83f4: 0xc05d080  jal         func_174200
label_1e83f8:
    if (ctx->pc == 0x1E83F8u) {
        ctx->pc = 0x1E83F8u;
            // 0x1e83f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1E83FCu;
        goto label_1e83fc;
    }
    ctx->pc = 0x1E83F4u;
    SET_GPR_U32(ctx, 31, 0x1E83FCu);
    ctx->pc = 0x1E83F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E83F4u;
            // 0x1e83f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83FCu; }
        if (ctx->pc != 0x1E83FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E83FCu; }
        if (ctx->pc != 0x1E83FCu) { return; }
    }
    ctx->pc = 0x1E83FCu;
label_1e83fc:
    // 0x1e83fc: 0x0  nop
    ctx->pc = 0x1e83fcu;
    // NOP
label_1e8400:
    // 0x1e8400: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1e8400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8404:
    // 0x1e8404: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1e8404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8408:
    // 0x1e8408: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e840c:
    // 0x1e840c: 0xc053740  jal         func_14DD00
label_1e8410:
    if (ctx->pc == 0x1E8410u) {
        ctx->pc = 0x1E8410u;
            // 0x1e8410: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E8414u;
        goto label_1e8414;
    }
    ctx->pc = 0x1E840Cu;
    SET_GPR_U32(ctx, 31, 0x1E8414u);
    ctx->pc = 0x1E8410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E840Cu;
            // 0x1e8410: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8414u; }
        if (ctx->pc != 0x1E8414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8414u; }
        if (ctx->pc != 0x1E8414u) { return; }
    }
    ctx->pc = 0x1E8414u;
label_1e8414:
    // 0x1e8414: 0xc050bb4  jal         func_142ED0
label_1e8418:
    if (ctx->pc == 0x1E8418u) {
        ctx->pc = 0x1E841Cu;
        goto label_1e841c;
    }
    ctx->pc = 0x1E8414u;
    SET_GPR_U32(ctx, 31, 0x1E841Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E841Cu; }
        if (ctx->pc != 0x1E841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E841Cu; }
        if (ctx->pc != 0x1E841Cu) { return; }
    }
    ctx->pc = 0x1E841Cu;
label_1e841c:
    // 0x1e841c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e841cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8420:
    // 0x1e8420: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8424:
    // 0x1e8424: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e8424u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8428:
    // 0x1e8428: 0x0  nop
    ctx->pc = 0x1e8428u;
    // NOP
label_1e842c:
    // 0x1e842c: 0x0  nop
    ctx->pc = 0x1e842cu;
    // NOP
label_1e8430:
    // 0x1e8430: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8430u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8434:
    // 0x1e8434: 0xc050bb4  jal         func_142ED0
label_1e8438:
    if (ctx->pc == 0x1E8438u) {
        ctx->pc = 0x1E8438u;
            // 0x1e8438: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E843Cu;
        goto label_1e843c;
    }
    ctx->pc = 0x1E8434u;
    SET_GPR_U32(ctx, 31, 0x1E843Cu);
    ctx->pc = 0x1E8438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8434u;
            // 0x1e8438: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E843Cu; }
        if (ctx->pc != 0x1E843Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E843Cu; }
        if (ctx->pc != 0x1E843Cu) { return; }
    }
    ctx->pc = 0x1E843Cu;
label_1e843c:
    // 0x1e843c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8440:
    // 0x1e8440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8444:
    // 0x1e8444: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e8444u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8448:
    // 0x1e8448: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8448u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e844c:
    // 0x1e844c: 0x0  nop
    ctx->pc = 0x1e844cu;
    // NOP
label_1e8450:
    // 0x1e8450: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e8450u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8454:
    // 0x1e8454: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1e8454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8458:
    // 0x1e8458: 0x1810  mfhi        $v1
    ctx->pc = 0x1e8458u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e845c:
    // 0x1e845c: 0xc053740  jal         func_14DD00
label_1e8460:
    if (ctx->pc == 0x1E8460u) {
        ctx->pc = 0x1E8460u;
            // 0x1e8460: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E8464u;
        goto label_1e8464;
    }
    ctx->pc = 0x1E845Cu;
    SET_GPR_U32(ctx, 31, 0x1E8464u);
    ctx->pc = 0x1E8460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E845Cu;
            // 0x1e8460: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8464u; }
        if (ctx->pc != 0x1E8464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8464u; }
        if (ctx->pc != 0x1E8464u) { return; }
    }
    ctx->pc = 0x1E8464u;
label_1e8464:
    // 0x1e8464: 0xc050bb4  jal         func_142ED0
label_1e8468:
    if (ctx->pc == 0x1E8468u) {
        ctx->pc = 0x1E846Cu;
        goto label_1e846c;
    }
    ctx->pc = 0x1E8464u;
    SET_GPR_U32(ctx, 31, 0x1E846Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E846Cu; }
        if (ctx->pc != 0x1E846Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E846Cu; }
        if (ctx->pc != 0x1E846Cu) { return; }
    }
    ctx->pc = 0x1E846Cu;
label_1e846c:
    // 0x1e846c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8470:
    // 0x1e8470: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8474:
    // 0x1e8474: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e8474u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8478:
    // 0x1e8478: 0x0  nop
    ctx->pc = 0x1e8478u;
    // NOP
label_1e847c:
    // 0x1e847c: 0x0  nop
    ctx->pc = 0x1e847cu;
    // NOP
label_1e8480:
    // 0x1e8480: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8480u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8484:
    // 0x1e8484: 0xc050bb4  jal         func_142ED0
label_1e8488:
    if (ctx->pc == 0x1E8488u) {
        ctx->pc = 0x1E8488u;
            // 0x1e8488: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E848Cu;
        goto label_1e848c;
    }
    ctx->pc = 0x1E8484u;
    SET_GPR_U32(ctx, 31, 0x1E848Cu);
    ctx->pc = 0x1E8488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8484u;
            // 0x1e8488: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E848Cu; }
        if (ctx->pc != 0x1E848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E848Cu; }
        if (ctx->pc != 0x1E848Cu) { return; }
    }
    ctx->pc = 0x1E848Cu;
label_1e848c:
    // 0x1e848c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8490:
    // 0x1e8490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8494:
    // 0x1e8494: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e8494u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8498:
    // 0x1e8498: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e8498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e849c:
    // 0x1e849c: 0x0  nop
    ctx->pc = 0x1e849cu;
    // NOP
label_1e84a0:
    // 0x1e84a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e84a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e84a4:
    // 0x1e84a4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e84a8:
    // 0x1e84a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1e84a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1e84ac:
    // 0x1e84ac: 0xc053740  jal         func_14DD00
label_1e84b0:
    if (ctx->pc == 0x1E84B0u) {
        ctx->pc = 0x1E84B0u;
            // 0x1e84b0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1E84B4u;
        goto label_1e84b4;
    }
    ctx->pc = 0x1E84ACu;
    SET_GPR_U32(ctx, 31, 0x1E84B4u);
    ctx->pc = 0x1E84B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84ACu;
            // 0x1e84b0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B4u; }
        if (ctx->pc != 0x1E84B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84B4u; }
        if (ctx->pc != 0x1E84B4u) { return; }
    }
    ctx->pc = 0x1E84B4u;
label_1e84b4:
    // 0x1e84b4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1e84b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e84b8:
    // 0x1e84b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e84b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e84bc:
    // 0x1e84bc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1e84bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e84c0:
    // 0x1e84c0: 0xc053740  jal         func_14DD00
label_1e84c4:
    if (ctx->pc == 0x1E84C4u) {
        ctx->pc = 0x1E84C4u;
            // 0x1e84c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1E84C8u;
        goto label_1e84c8;
    }
    ctx->pc = 0x1E84C0u;
    SET_GPR_U32(ctx, 31, 0x1E84C8u);
    ctx->pc = 0x1E84C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84C0u;
            // 0x1e84c4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84C8u; }
        if (ctx->pc != 0x1E84C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84C8u; }
        if (ctx->pc != 0x1E84C8u) { return; }
    }
    ctx->pc = 0x1E84C8u;
label_1e84c8:
    // 0x1e84c8: 0xc050bb4  jal         func_142ED0
label_1e84cc:
    if (ctx->pc == 0x1E84CCu) {
        ctx->pc = 0x1E84D0u;
        goto label_1e84d0;
    }
    ctx->pc = 0x1E84C8u;
    SET_GPR_U32(ctx, 31, 0x1E84D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84D0u; }
        if (ctx->pc != 0x1E84D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84D0u; }
        if (ctx->pc != 0x1E84D0u) { return; }
    }
    ctx->pc = 0x1E84D0u;
label_1e84d0:
    // 0x1e84d0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e84d4:
    // 0x1e84d4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e84d8:
    // 0x1e84d8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e84d8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e84dc:
    // 0x1e84dc: 0x0  nop
    ctx->pc = 0x1e84dcu;
    // NOP
label_1e84e0:
    // 0x1e84e0: 0x0  nop
    ctx->pc = 0x1e84e0u;
    // NOP
label_1e84e4:
    // 0x1e84e4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e84e4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e84e8:
    // 0x1e84e8: 0xc050bb4  jal         func_142ED0
label_1e84ec:
    if (ctx->pc == 0x1E84ECu) {
        ctx->pc = 0x1E84ECu;
            // 0x1e84ec: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E84F0u;
        goto label_1e84f0;
    }
    ctx->pc = 0x1E84E8u;
    SET_GPR_U32(ctx, 31, 0x1E84F0u);
    ctx->pc = 0x1E84ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E84E8u;
            // 0x1e84ec: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84F0u; }
        if (ctx->pc != 0x1E84F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E84F0u; }
        if (ctx->pc != 0x1E84F0u) { return; }
    }
    ctx->pc = 0x1E84F0u;
label_1e84f0:
    // 0x1e84f0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e84f4:
    // 0x1e84f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e84f8:
    // 0x1e84f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e84f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e84fc:
    // 0x1e84fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e8500:
    // 0x1e8500: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8504:
    // 0x1e8504: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8508:
    // 0x1e8508: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8508u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e850c:
    // 0x1e850c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e850cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8510:
    // 0x1e8510: 0xc053740  jal         func_14DD00
label_1e8514:
    if (ctx->pc == 0x1E8514u) {
        ctx->pc = 0x1E8514u;
            // 0x1e8514: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8518u;
        goto label_1e8518;
    }
    ctx->pc = 0x1E8510u;
    SET_GPR_U32(ctx, 31, 0x1E8518u);
    ctx->pc = 0x1E8514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8510u;
            // 0x1e8514: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8518u; }
        if (ctx->pc != 0x1E8518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8518u; }
        if (ctx->pc != 0x1E8518u) { return; }
    }
    ctx->pc = 0x1E8518u;
label_1e8518:
    // 0x1e8518: 0xc050bb4  jal         func_142ED0
label_1e851c:
    if (ctx->pc == 0x1E851Cu) {
        ctx->pc = 0x1E8520u;
        goto label_1e8520;
    }
    ctx->pc = 0x1E8518u;
    SET_GPR_U32(ctx, 31, 0x1E8520u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8520u; }
        if (ctx->pc != 0x1E8520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8520u; }
        if (ctx->pc != 0x1E8520u) { return; }
    }
    ctx->pc = 0x1E8520u;
label_1e8520:
    // 0x1e8520: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8524:
    // 0x1e8524: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8528:
    // 0x1e8528: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e8528u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e852c:
    // 0x1e852c: 0x0  nop
    ctx->pc = 0x1e852cu;
    // NOP
label_1e8530:
    // 0x1e8530: 0x0  nop
    ctx->pc = 0x1e8530u;
    // NOP
label_1e8534:
    // 0x1e8534: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8534u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8538:
    // 0x1e8538: 0xc050bb4  jal         func_142ED0
label_1e853c:
    if (ctx->pc == 0x1E853Cu) {
        ctx->pc = 0x1E853Cu;
            // 0x1e853c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8540u;
        goto label_1e8540;
    }
    ctx->pc = 0x1E8538u;
    SET_GPR_U32(ctx, 31, 0x1E8540u);
    ctx->pc = 0x1E853Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8538u;
            // 0x1e853c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8540u; }
        if (ctx->pc != 0x1E8540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8540u; }
        if (ctx->pc != 0x1E8540u) { return; }
    }
    ctx->pc = 0x1E8540u;
label_1e8540:
    // 0x1e8540: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e8540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8544:
    // 0x1e8544: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8548:
    // 0x1e8548: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e8548u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e854c:
    // 0x1e854c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e8550:
    // 0x1e8550: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e8550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8554:
    // 0x1e8554: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8558:
    // 0x1e8558: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8558u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e855c:
    // 0x1e855c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e855cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8560:
    // 0x1e8560: 0xc053740  jal         func_14DD00
label_1e8564:
    if (ctx->pc == 0x1E8564u) {
        ctx->pc = 0x1E8564u;
            // 0x1e8564: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8568u;
        goto label_1e8568;
    }
    ctx->pc = 0x1E8560u;
    SET_GPR_U32(ctx, 31, 0x1E8568u);
    ctx->pc = 0x1E8564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8560u;
            // 0x1e8564: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8568u; }
        if (ctx->pc != 0x1E8568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8568u; }
        if (ctx->pc != 0x1E8568u) { return; }
    }
    ctx->pc = 0x1E8568u;
label_1e8568:
    // 0x1e8568: 0xc050bb4  jal         func_142ED0
label_1e856c:
    if (ctx->pc == 0x1E856Cu) {
        ctx->pc = 0x1E8570u;
        goto label_1e8570;
    }
    ctx->pc = 0x1E8568u;
    SET_GPR_U32(ctx, 31, 0x1E8570u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8570u; }
        if (ctx->pc != 0x1E8570u) { return; }
    }
    ctx->pc = 0x1E8570u;
label_1e8570:
    // 0x1e8570: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8574:
    // 0x1e8574: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8578:
    // 0x1e8578: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e8578u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e857c:
    // 0x1e857c: 0x0  nop
    ctx->pc = 0x1e857cu;
    // NOP
label_1e8580:
    // 0x1e8580: 0x0  nop
    ctx->pc = 0x1e8580u;
    // NOP
label_1e8584:
    // 0x1e8584: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8584u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8588:
    // 0x1e8588: 0xc050bb4  jal         func_142ED0
label_1e858c:
    if (ctx->pc == 0x1E858Cu) {
        ctx->pc = 0x1E858Cu;
            // 0x1e858c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8590u;
        goto label_1e8590;
    }
    ctx->pc = 0x1E8588u;
    SET_GPR_U32(ctx, 31, 0x1E8590u);
    ctx->pc = 0x1E858Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8588u;
            // 0x1e858c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8590u; }
        if (ctx->pc != 0x1E8590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8590u; }
        if (ctx->pc != 0x1E8590u) { return; }
    }
    ctx->pc = 0x1E8590u;
label_1e8590:
    // 0x1e8590: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e8590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8594:
    // 0x1e8594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8598:
    // 0x1e8598: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e8598u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e859c:
    // 0x1e859c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e85a0:
    // 0x1e85a0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e85a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e85a4:
    // 0x1e85a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e85a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e85a8:
    // 0x1e85a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1e85a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e85ac:
    // 0x1e85ac: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e85acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e85b0:
    // 0x1e85b0: 0xc053740  jal         func_14DD00
label_1e85b4:
    if (ctx->pc == 0x1E85B4u) {
        ctx->pc = 0x1E85B4u;
            // 0x1e85b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E85B8u;
        goto label_1e85b8;
    }
    ctx->pc = 0x1E85B0u;
    SET_GPR_U32(ctx, 31, 0x1E85B8u);
    ctx->pc = 0x1E85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85B0u;
            // 0x1e85b4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85B8u; }
        if (ctx->pc != 0x1E85B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85B8u; }
        if (ctx->pc != 0x1E85B8u) { return; }
    }
    ctx->pc = 0x1E85B8u;
label_1e85b8:
    // 0x1e85b8: 0xc050bb4  jal         func_142ED0
label_1e85bc:
    if (ctx->pc == 0x1E85BCu) {
        ctx->pc = 0x1E85C0u;
        goto label_1e85c0;
    }
    ctx->pc = 0x1E85B8u;
    SET_GPR_U32(ctx, 31, 0x1E85C0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85C0u; }
        if (ctx->pc != 0x1E85C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85C0u; }
        if (ctx->pc != 0x1E85C0u) { return; }
    }
    ctx->pc = 0x1E85C0u;
label_1e85c0:
    // 0x1e85c0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e85c4:
    // 0x1e85c4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e85c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e85c8:
    // 0x1e85c8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e85c8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e85cc:
    // 0x1e85cc: 0x0  nop
    ctx->pc = 0x1e85ccu;
    // NOP
label_1e85d0:
    // 0x1e85d0: 0x0  nop
    ctx->pc = 0x1e85d0u;
    // NOP
label_1e85d4:
    // 0x1e85d4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e85d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e85d8:
    // 0x1e85d8: 0xc050bb4  jal         func_142ED0
label_1e85dc:
    if (ctx->pc == 0x1E85DCu) {
        ctx->pc = 0x1E85DCu;
            // 0x1e85dc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E85E0u;
        goto label_1e85e0;
    }
    ctx->pc = 0x1E85D8u;
    SET_GPR_U32(ctx, 31, 0x1E85E0u);
    ctx->pc = 0x1E85DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E85D8u;
            // 0x1e85dc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85E0u; }
        if (ctx->pc != 0x1E85E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E85E0u; }
        if (ctx->pc != 0x1E85E0u) { return; }
    }
    ctx->pc = 0x1E85E0u;
label_1e85e0:
    // 0x1e85e0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e85e4:
    // 0x1e85e4: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1e85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e85e8:
    // 0x1e85e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e85e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e85ec:
    // 0x1e85ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e85ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e85f0:
    // 0x1e85f0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e85f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e85f4:
    // 0x1e85f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1e85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1e85f8:
    // 0x1e85f8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e85f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e85fc:
    // 0x1e85fc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e85fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8600:
    // 0x1e8600: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8600u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8604:
    // 0x1e8604: 0xc053740  jal         func_14DD00
label_1e8608:
    if (ctx->pc == 0x1E8608u) {
        ctx->pc = 0x1E8608u;
            // 0x1e8608: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E860Cu;
        goto label_1e860c;
    }
    ctx->pc = 0x1E8604u;
    SET_GPR_U32(ctx, 31, 0x1E860Cu);
    ctx->pc = 0x1E8608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8604u;
            // 0x1e8608: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E860Cu; }
        if (ctx->pc != 0x1E860Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E860Cu; }
        if (ctx->pc != 0x1E860Cu) { return; }
    }
    ctx->pc = 0x1E860Cu;
label_1e860c:
    // 0x1e860c: 0xc050bb4  jal         func_142ED0
label_1e8610:
    if (ctx->pc == 0x1E8610u) {
        ctx->pc = 0x1E8614u;
        goto label_1e8614;
    }
    ctx->pc = 0x1E860Cu;
    SET_GPR_U32(ctx, 31, 0x1E8614u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8614u; }
        if (ctx->pc != 0x1E8614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8614u; }
        if (ctx->pc != 0x1E8614u) { return; }
    }
    ctx->pc = 0x1E8614u;
label_1e8614:
    // 0x1e8614: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8618:
    // 0x1e8618: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e861c:
    // 0x1e861c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e861cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8620:
    // 0x1e8620: 0x0  nop
    ctx->pc = 0x1e8620u;
    // NOP
label_1e8624:
    // 0x1e8624: 0x0  nop
    ctx->pc = 0x1e8624u;
    // NOP
label_1e8628:
    // 0x1e8628: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8628u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e862c:
    // 0x1e862c: 0xc050bb4  jal         func_142ED0
label_1e8630:
    if (ctx->pc == 0x1E8630u) {
        ctx->pc = 0x1E8630u;
            // 0x1e8630: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8634u;
        goto label_1e8634;
    }
    ctx->pc = 0x1E862Cu;
    SET_GPR_U32(ctx, 31, 0x1E8634u);
    ctx->pc = 0x1E8630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E862Cu;
            // 0x1e8630: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8634u; }
        if (ctx->pc != 0x1E8634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8634u; }
        if (ctx->pc != 0x1E8634u) { return; }
    }
    ctx->pc = 0x1E8634u;
label_1e8634:
    // 0x1e8634: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e8634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8638:
    // 0x1e8638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e863c:
    // 0x1e863c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e863cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8640:
    // 0x1e8640: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e8640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e8644:
    // 0x1e8644: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e8644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8648:
    // 0x1e8648: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e8648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e864c:
    // 0x1e864c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e864cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8650:
    // 0x1e8650: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e8650u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8654:
    // 0x1e8654: 0xc053740  jal         func_14DD00
label_1e8658:
    if (ctx->pc == 0x1E8658u) {
        ctx->pc = 0x1E8658u;
            // 0x1e8658: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E865Cu;
        goto label_1e865c;
    }
    ctx->pc = 0x1E8654u;
    SET_GPR_U32(ctx, 31, 0x1E865Cu);
    ctx->pc = 0x1E8658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8654u;
            // 0x1e8658: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E865Cu; }
        if (ctx->pc != 0x1E865Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E865Cu; }
        if (ctx->pc != 0x1E865Cu) { return; }
    }
    ctx->pc = 0x1E865Cu;
label_1e865c:
    // 0x1e865c: 0xc050bb4  jal         func_142ED0
label_1e8660:
    if (ctx->pc == 0x1E8660u) {
        ctx->pc = 0x1E8664u;
        goto label_1e8664;
    }
    ctx->pc = 0x1E865Cu;
    SET_GPR_U32(ctx, 31, 0x1E8664u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8664u; }
        if (ctx->pc != 0x1E8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8664u; }
        if (ctx->pc != 0x1E8664u) { return; }
    }
    ctx->pc = 0x1E8664u;
label_1e8664:
    // 0x1e8664: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8668:
    // 0x1e8668: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e8668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e866c:
    // 0x1e866c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e866cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8670:
    // 0x1e8670: 0x0  nop
    ctx->pc = 0x1e8670u;
    // NOP
label_1e8674:
    // 0x1e8674: 0x0  nop
    ctx->pc = 0x1e8674u;
    // NOP
label_1e8678:
    // 0x1e8678: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8678u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e867c:
    // 0x1e867c: 0xc050bb4  jal         func_142ED0
label_1e8680:
    if (ctx->pc == 0x1E8680u) {
        ctx->pc = 0x1E8680u;
            // 0x1e8680: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8684u;
        goto label_1e8684;
    }
    ctx->pc = 0x1E867Cu;
    SET_GPR_U32(ctx, 31, 0x1E8684u);
    ctx->pc = 0x1E8680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E867Cu;
            // 0x1e8680: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8684u; }
        if (ctx->pc != 0x1E8684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8684u; }
        if (ctx->pc != 0x1E8684u) { return; }
    }
    ctx->pc = 0x1E8684u;
label_1e8684:
    // 0x1e8684: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e8684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e8688:
    // 0x1e8688: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1e8688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e868c:
    // 0x1e868c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e868cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8690:
    // 0x1e8690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8694:
    // 0x1e8694: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e8694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1e8698:
    // 0x1e8698: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1e8698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1e869c:
    // 0x1e869c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1e869cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1e86a0:
    // 0x1e86a0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1e86a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e86a4:
    // 0x1e86a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1e86a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e86a8:
    // 0x1e86a8: 0xc053740  jal         func_14DD00
label_1e86ac:
    if (ctx->pc == 0x1E86ACu) {
        ctx->pc = 0x1E86ACu;
            // 0x1e86ac: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E86B0u;
        goto label_1e86b0;
    }
    ctx->pc = 0x1E86A8u;
    SET_GPR_U32(ctx, 31, 0x1E86B0u);
    ctx->pc = 0x1E86ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86A8u;
            // 0x1e86ac: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86B0u; }
        if (ctx->pc != 0x1E86B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86B0u; }
        if (ctx->pc != 0x1E86B0u) { return; }
    }
    ctx->pc = 0x1E86B0u;
label_1e86b0:
    // 0x1e86b0: 0xc050bb4  jal         func_142ED0
label_1e86b4:
    if (ctx->pc == 0x1E86B4u) {
        ctx->pc = 0x1E86B8u;
        goto label_1e86b8;
    }
    ctx->pc = 0x1E86B0u;
    SET_GPR_U32(ctx, 31, 0x1E86B8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86B8u; }
        if (ctx->pc != 0x1E86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86B8u; }
        if (ctx->pc != 0x1E86B8u) { return; }
    }
    ctx->pc = 0x1E86B8u;
label_1e86b8:
    // 0x1e86b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e86bc:
    // 0x1e86bc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e86bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e86c0:
    // 0x1e86c0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e86c0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e86c4:
    // 0x1e86c4: 0x0  nop
    ctx->pc = 0x1e86c4u;
    // NOP
label_1e86c8:
    // 0x1e86c8: 0x0  nop
    ctx->pc = 0x1e86c8u;
    // NOP
label_1e86cc:
    // 0x1e86cc: 0x1010  mfhi        $v0
    ctx->pc = 0x1e86ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e86d0:
    // 0x1e86d0: 0xc050bb4  jal         func_142ED0
label_1e86d4:
    if (ctx->pc == 0x1E86D4u) {
        ctx->pc = 0x1E86D4u;
            // 0x1e86d4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E86D8u;
        goto label_1e86d8;
    }
    ctx->pc = 0x1E86D0u;
    SET_GPR_U32(ctx, 31, 0x1E86D8u);
    ctx->pc = 0x1E86D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86D0u;
            // 0x1e86d4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86D8u; }
        if (ctx->pc != 0x1E86D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E86D8u; }
        if (ctx->pc != 0x1E86D8u) { return; }
    }
    ctx->pc = 0x1E86D8u;
label_1e86d8:
    // 0x1e86d8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e86dc:
    // 0x1e86dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e86e0:
    // 0x1e86e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e86e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e86e4:
    // 0x1e86e4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e86e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e86e8:
    // 0x1e86e8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e86e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e86ec:
    // 0x1e86ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e86ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e86f0:
    // 0x1e86f0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e86f0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e86f4:
    // 0x1e86f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e86f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e86f8:
    // 0x1e86f8: 0xc053740  jal         func_14DD00
label_1e86fc:
    if (ctx->pc == 0x1E86FCu) {
        ctx->pc = 0x1E86FCu;
            // 0x1e86fc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8700u;
        goto label_1e8700;
    }
    ctx->pc = 0x1E86F8u;
    SET_GPR_U32(ctx, 31, 0x1E8700u);
    ctx->pc = 0x1E86FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E86F8u;
            // 0x1e86fc: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8700u; }
        if (ctx->pc != 0x1E8700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8700u; }
        if (ctx->pc != 0x1E8700u) { return; }
    }
    ctx->pc = 0x1E8700u;
label_1e8700:
    // 0x1e8700: 0xc050bb4  jal         func_142ED0
label_1e8704:
    if (ctx->pc == 0x1E8704u) {
        ctx->pc = 0x1E8708u;
        goto label_1e8708;
    }
    ctx->pc = 0x1E8700u;
    SET_GPR_U32(ctx, 31, 0x1E8708u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8708u; }
        if (ctx->pc != 0x1E8708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8708u; }
        if (ctx->pc != 0x1E8708u) { return; }
    }
    ctx->pc = 0x1E8708u;
label_1e8708:
    // 0x1e8708: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1e8708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e870c:
    // 0x1e870c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1e870cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8710:
    // 0x1e8710: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1e8710u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8714:
    // 0x1e8714: 0x0  nop
    ctx->pc = 0x1e8714u;
    // NOP
label_1e8718:
    // 0x1e8718: 0x0  nop
    ctx->pc = 0x1e8718u;
    // NOP
label_1e871c:
    // 0x1e871c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e871cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8720:
    // 0x1e8720: 0xc050bb4  jal         func_142ED0
label_1e8724:
    if (ctx->pc == 0x1E8724u) {
        ctx->pc = 0x1E8724u;
            // 0x1e8724: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8728u;
        goto label_1e8728;
    }
    ctx->pc = 0x1E8720u;
    SET_GPR_U32(ctx, 31, 0x1E8728u);
    ctx->pc = 0x1E8724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8720u;
            // 0x1e8724: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8728u; }
        if (ctx->pc != 0x1E8728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8728u; }
        if (ctx->pc != 0x1E8728u) { return; }
    }
    ctx->pc = 0x1E8728u;
label_1e8728:
    // 0x1e8728: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1e8728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e872c:
    // 0x1e872c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e8730:
    // 0x1e8730: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e8730u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1e8734:
    // 0x1e8734: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1e8734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1e8738:
    // 0x1e8738: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1e8738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e873c:
    // 0x1e873c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e8740:
    // 0x1e8740: 0x1010  mfhi        $v0
    ctx->pc = 0x1e8740u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1e8744:
    // 0x1e8744: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1e8744u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1e8748:
    // 0x1e8748: 0xc053740  jal         func_14DD00
label_1e874c:
    if (ctx->pc == 0x1E874Cu) {
        ctx->pc = 0x1E874Cu;
            // 0x1e874c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1E8750u;
        goto label_1e8750;
    }
    ctx->pc = 0x1E8748u;
    SET_GPR_U32(ctx, 31, 0x1E8750u);
    ctx->pc = 0x1E874Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8748u;
            // 0x1e874c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8750u; }
        if (ctx->pc != 0x1E8750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8750u; }
        if (ctx->pc != 0x1E8750u) { return; }
    }
    ctx->pc = 0x1E8750u;
label_1e8750:
    // 0x1e8750: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1e8750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1e8754:
    // 0x1e8754: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x1e8754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1e8758:
    // 0x1e8758: 0xc07b0ac  jal         func_1EC2B0
label_1e875c:
    if (ctx->pc == 0x1E875Cu) {
        ctx->pc = 0x1E875Cu;
            // 0x1e875c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E8760u;
        goto label_1e8760;
    }
    ctx->pc = 0x1E8758u;
    SET_GPR_U32(ctx, 31, 0x1E8760u);
    ctx->pc = 0x1E875Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8758u;
            // 0x1e875c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8760u; }
        if (ctx->pc != 0x1E8760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8760u; }
        if (ctx->pc != 0x1E8760u) { return; }
    }
    ctx->pc = 0x1E8760u;
label_1e8760:
    // 0x1e8760: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1e8760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1e8764:
    // 0x1e8764: 0x40f809  jalr        $v0
label_1e8768:
    if (ctx->pc == 0x1E8768u) {
        ctx->pc = 0x1E8768u;
            // 0x1e8768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E876Cu;
        goto label_1e876c;
    }
    ctx->pc = 0x1E8764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E876Cu);
        ctx->pc = 0x1E8768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8764u;
            // 0x1e8768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7670u: goto label_1e7670;
            case 0x1E7674u: goto label_1e7674;
            case 0x1E7678u: goto label_1e7678;
            case 0x1E767Cu: goto label_1e767c;
            case 0x1E7680u: goto label_1e7680;
            case 0x1E7684u: goto label_1e7684;
            case 0x1E7688u: goto label_1e7688;
            case 0x1E768Cu: goto label_1e768c;
            case 0x1E7690u: goto label_1e7690;
            case 0x1E7694u: goto label_1e7694;
            case 0x1E7698u: goto label_1e7698;
            case 0x1E769Cu: goto label_1e769c;
            case 0x1E76A0u: goto label_1e76a0;
            case 0x1E76A4u: goto label_1e76a4;
            case 0x1E76A8u: goto label_1e76a8;
            case 0x1E76ACu: goto label_1e76ac;
            case 0x1E76B0u: goto label_1e76b0;
            case 0x1E76B4u: goto label_1e76b4;
            case 0x1E76B8u: goto label_1e76b8;
            case 0x1E76BCu: goto label_1e76bc;
            case 0x1E76C0u: goto label_1e76c0;
            case 0x1E76C4u: goto label_1e76c4;
            case 0x1E76C8u: goto label_1e76c8;
            case 0x1E76CCu: goto label_1e76cc;
            case 0x1E76D0u: goto label_1e76d0;
            case 0x1E76D4u: goto label_1e76d4;
            case 0x1E76D8u: goto label_1e76d8;
            case 0x1E76DCu: goto label_1e76dc;
            case 0x1E76E0u: goto label_1e76e0;
            case 0x1E76E4u: goto label_1e76e4;
            case 0x1E76E8u: goto label_1e76e8;
            case 0x1E76ECu: goto label_1e76ec;
            case 0x1E76F0u: goto label_1e76f0;
            case 0x1E76F4u: goto label_1e76f4;
            case 0x1E76F8u: goto label_1e76f8;
            case 0x1E76FCu: goto label_1e76fc;
            case 0x1E7700u: goto label_1e7700;
            case 0x1E7704u: goto label_1e7704;
            case 0x1E7708u: goto label_1e7708;
            case 0x1E770Cu: goto label_1e770c;
            case 0x1E7710u: goto label_1e7710;
            case 0x1E7714u: goto label_1e7714;
            case 0x1E7718u: goto label_1e7718;
            case 0x1E771Cu: goto label_1e771c;
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7728u: goto label_1e7728;
            case 0x1E772Cu: goto label_1e772c;
            case 0x1E7730u: goto label_1e7730;
            case 0x1E7734u: goto label_1e7734;
            case 0x1E7738u: goto label_1e7738;
            case 0x1E773Cu: goto label_1e773c;
            case 0x1E7740u: goto label_1e7740;
            case 0x1E7744u: goto label_1e7744;
            case 0x1E7748u: goto label_1e7748;
            case 0x1E774Cu: goto label_1e774c;
            case 0x1E7750u: goto label_1e7750;
            case 0x1E7754u: goto label_1e7754;
            case 0x1E7758u: goto label_1e7758;
            case 0x1E775Cu: goto label_1e775c;
            case 0x1E7760u: goto label_1e7760;
            case 0x1E7764u: goto label_1e7764;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E776Cu: goto label_1e776c;
            case 0x1E7770u: goto label_1e7770;
            case 0x1E7774u: goto label_1e7774;
            case 0x1E7778u: goto label_1e7778;
            case 0x1E777Cu: goto label_1e777c;
            case 0x1E7780u: goto label_1e7780;
            case 0x1E7784u: goto label_1e7784;
            case 0x1E7788u: goto label_1e7788;
            case 0x1E778Cu: goto label_1e778c;
            case 0x1E7790u: goto label_1e7790;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7798u: goto label_1e7798;
            case 0x1E779Cu: goto label_1e779c;
            case 0x1E77A0u: goto label_1e77a0;
            case 0x1E77A4u: goto label_1e77a4;
            case 0x1E77A8u: goto label_1e77a8;
            case 0x1E77ACu: goto label_1e77ac;
            case 0x1E77B0u: goto label_1e77b0;
            case 0x1E77B4u: goto label_1e77b4;
            case 0x1E77B8u: goto label_1e77b8;
            case 0x1E77BCu: goto label_1e77bc;
            case 0x1E77C0u: goto label_1e77c0;
            case 0x1E77C4u: goto label_1e77c4;
            case 0x1E77C8u: goto label_1e77c8;
            case 0x1E77CCu: goto label_1e77cc;
            case 0x1E77D0u: goto label_1e77d0;
            case 0x1E77D4u: goto label_1e77d4;
            case 0x1E77D8u: goto label_1e77d8;
            case 0x1E77DCu: goto label_1e77dc;
            case 0x1E77E0u: goto label_1e77e0;
            case 0x1E77E4u: goto label_1e77e4;
            case 0x1E77E8u: goto label_1e77e8;
            case 0x1E77ECu: goto label_1e77ec;
            case 0x1E77F0u: goto label_1e77f0;
            case 0x1E77F4u: goto label_1e77f4;
            case 0x1E77F8u: goto label_1e77f8;
            case 0x1E77FCu: goto label_1e77fc;
            case 0x1E7800u: goto label_1e7800;
            case 0x1E7804u: goto label_1e7804;
            case 0x1E7808u: goto label_1e7808;
            case 0x1E780Cu: goto label_1e780c;
            case 0x1E7810u: goto label_1e7810;
            case 0x1E7814u: goto label_1e7814;
            case 0x1E7818u: goto label_1e7818;
            case 0x1E781Cu: goto label_1e781c;
            case 0x1E7820u: goto label_1e7820;
            case 0x1E7824u: goto label_1e7824;
            case 0x1E7828u: goto label_1e7828;
            case 0x1E782Cu: goto label_1e782c;
            case 0x1E7830u: goto label_1e7830;
            case 0x1E7834u: goto label_1e7834;
            case 0x1E7838u: goto label_1e7838;
            case 0x1E783Cu: goto label_1e783c;
            case 0x1E7840u: goto label_1e7840;
            case 0x1E7844u: goto label_1e7844;
            case 0x1E7848u: goto label_1e7848;
            case 0x1E784Cu: goto label_1e784c;
            case 0x1E7850u: goto label_1e7850;
            case 0x1E7854u: goto label_1e7854;
            case 0x1E7858u: goto label_1e7858;
            case 0x1E785Cu: goto label_1e785c;
            case 0x1E7860u: goto label_1e7860;
            case 0x1E7864u: goto label_1e7864;
            case 0x1E7868u: goto label_1e7868;
            case 0x1E786Cu: goto label_1e786c;
            case 0x1E7870u: goto label_1e7870;
            case 0x1E7874u: goto label_1e7874;
            case 0x1E7878u: goto label_1e7878;
            case 0x1E787Cu: goto label_1e787c;
            case 0x1E7880u: goto label_1e7880;
            case 0x1E7884u: goto label_1e7884;
            case 0x1E7888u: goto label_1e7888;
            case 0x1E788Cu: goto label_1e788c;
            case 0x1E7890u: goto label_1e7890;
            case 0x1E7894u: goto label_1e7894;
            case 0x1E7898u: goto label_1e7898;
            case 0x1E789Cu: goto label_1e789c;
            case 0x1E78A0u: goto label_1e78a0;
            case 0x1E78A4u: goto label_1e78a4;
            case 0x1E78A8u: goto label_1e78a8;
            case 0x1E78ACu: goto label_1e78ac;
            case 0x1E78B0u: goto label_1e78b0;
            case 0x1E78B4u: goto label_1e78b4;
            case 0x1E78B8u: goto label_1e78b8;
            case 0x1E78BCu: goto label_1e78bc;
            case 0x1E78C0u: goto label_1e78c0;
            case 0x1E78C4u: goto label_1e78c4;
            case 0x1E78C8u: goto label_1e78c8;
            case 0x1E78CCu: goto label_1e78cc;
            case 0x1E78D0u: goto label_1e78d0;
            case 0x1E78D4u: goto label_1e78d4;
            case 0x1E78D8u: goto label_1e78d8;
            case 0x1E78DCu: goto label_1e78dc;
            case 0x1E78E0u: goto label_1e78e0;
            case 0x1E78E4u: goto label_1e78e4;
            case 0x1E78E8u: goto label_1e78e8;
            case 0x1E78ECu: goto label_1e78ec;
            case 0x1E78F0u: goto label_1e78f0;
            case 0x1E78F4u: goto label_1e78f4;
            case 0x1E78F8u: goto label_1e78f8;
            case 0x1E78FCu: goto label_1e78fc;
            case 0x1E7900u: goto label_1e7900;
            case 0x1E7904u: goto label_1e7904;
            case 0x1E7908u: goto label_1e7908;
            case 0x1E790Cu: goto label_1e790c;
            case 0x1E7910u: goto label_1e7910;
            case 0x1E7914u: goto label_1e7914;
            case 0x1E7918u: goto label_1e7918;
            case 0x1E791Cu: goto label_1e791c;
            case 0x1E7920u: goto label_1e7920;
            case 0x1E7924u: goto label_1e7924;
            case 0x1E7928u: goto label_1e7928;
            case 0x1E792Cu: goto label_1e792c;
            case 0x1E7930u: goto label_1e7930;
            case 0x1E7934u: goto label_1e7934;
            case 0x1E7938u: goto label_1e7938;
            case 0x1E793Cu: goto label_1e793c;
            case 0x1E7940u: goto label_1e7940;
            case 0x1E7944u: goto label_1e7944;
            case 0x1E7948u: goto label_1e7948;
            case 0x1E794Cu: goto label_1e794c;
            case 0x1E7950u: goto label_1e7950;
            case 0x1E7954u: goto label_1e7954;
            case 0x1E7958u: goto label_1e7958;
            case 0x1E795Cu: goto label_1e795c;
            case 0x1E7960u: goto label_1e7960;
            case 0x1E7964u: goto label_1e7964;
            case 0x1E7968u: goto label_1e7968;
            case 0x1E796Cu: goto label_1e796c;
            case 0x1E7970u: goto label_1e7970;
            case 0x1E7974u: goto label_1e7974;
            case 0x1E7978u: goto label_1e7978;
            case 0x1E797Cu: goto label_1e797c;
            case 0x1E7980u: goto label_1e7980;
            case 0x1E7984u: goto label_1e7984;
            case 0x1E7988u: goto label_1e7988;
            case 0x1E798Cu: goto label_1e798c;
            case 0x1E7990u: goto label_1e7990;
            case 0x1E7994u: goto label_1e7994;
            case 0x1E7998u: goto label_1e7998;
            case 0x1E799Cu: goto label_1e799c;
            case 0x1E79A0u: goto label_1e79a0;
            case 0x1E79A4u: goto label_1e79a4;
            case 0x1E79A8u: goto label_1e79a8;
            case 0x1E79ACu: goto label_1e79ac;
            case 0x1E79B0u: goto label_1e79b0;
            case 0x1E79B4u: goto label_1e79b4;
            case 0x1E79B8u: goto label_1e79b8;
            case 0x1E79BCu: goto label_1e79bc;
            case 0x1E79C0u: goto label_1e79c0;
            case 0x1E79C4u: goto label_1e79c4;
            case 0x1E79C8u: goto label_1e79c8;
            case 0x1E79CCu: goto label_1e79cc;
            case 0x1E79D0u: goto label_1e79d0;
            case 0x1E79D4u: goto label_1e79d4;
            case 0x1E79D8u: goto label_1e79d8;
            case 0x1E79DCu: goto label_1e79dc;
            case 0x1E79E0u: goto label_1e79e0;
            case 0x1E79E4u: goto label_1e79e4;
            case 0x1E79E8u: goto label_1e79e8;
            case 0x1E79ECu: goto label_1e79ec;
            case 0x1E79F0u: goto label_1e79f0;
            case 0x1E79F4u: goto label_1e79f4;
            case 0x1E79F8u: goto label_1e79f8;
            case 0x1E79FCu: goto label_1e79fc;
            case 0x1E7A00u: goto label_1e7a00;
            case 0x1E7A04u: goto label_1e7a04;
            case 0x1E7A08u: goto label_1e7a08;
            case 0x1E7A0Cu: goto label_1e7a0c;
            case 0x1E7A10u: goto label_1e7a10;
            case 0x1E7A14u: goto label_1e7a14;
            case 0x1E7A18u: goto label_1e7a18;
            case 0x1E7A1Cu: goto label_1e7a1c;
            case 0x1E7A20u: goto label_1e7a20;
            case 0x1E7A24u: goto label_1e7a24;
            case 0x1E7A28u: goto label_1e7a28;
            case 0x1E7A2Cu: goto label_1e7a2c;
            case 0x1E7A30u: goto label_1e7a30;
            case 0x1E7A34u: goto label_1e7a34;
            case 0x1E7A38u: goto label_1e7a38;
            case 0x1E7A3Cu: goto label_1e7a3c;
            case 0x1E7A40u: goto label_1e7a40;
            case 0x1E7A44u: goto label_1e7a44;
            case 0x1E7A48u: goto label_1e7a48;
            case 0x1E7A4Cu: goto label_1e7a4c;
            case 0x1E7A50u: goto label_1e7a50;
            case 0x1E7A54u: goto label_1e7a54;
            case 0x1E7A58u: goto label_1e7a58;
            case 0x1E7A5Cu: goto label_1e7a5c;
            case 0x1E7A60u: goto label_1e7a60;
            case 0x1E7A64u: goto label_1e7a64;
            case 0x1E7A68u: goto label_1e7a68;
            case 0x1E7A6Cu: goto label_1e7a6c;
            case 0x1E7A70u: goto label_1e7a70;
            case 0x1E7A74u: goto label_1e7a74;
            case 0x1E7A78u: goto label_1e7a78;
            case 0x1E7A7Cu: goto label_1e7a7c;
            case 0x1E7A80u: goto label_1e7a80;
            case 0x1E7A84u: goto label_1e7a84;
            case 0x1E7A88u: goto label_1e7a88;
            case 0x1E7A8Cu: goto label_1e7a8c;
            case 0x1E7A90u: goto label_1e7a90;
            case 0x1E7A94u: goto label_1e7a94;
            case 0x1E7A98u: goto label_1e7a98;
            case 0x1E7A9Cu: goto label_1e7a9c;
            case 0x1E7AA0u: goto label_1e7aa0;
            case 0x1E7AA4u: goto label_1e7aa4;
            case 0x1E7AA8u: goto label_1e7aa8;
            case 0x1E7AACu: goto label_1e7aac;
            case 0x1E7AB0u: goto label_1e7ab0;
            case 0x1E7AB4u: goto label_1e7ab4;
            case 0x1E7AB8u: goto label_1e7ab8;
            case 0x1E7ABCu: goto label_1e7abc;
            case 0x1E7AC0u: goto label_1e7ac0;
            case 0x1E7AC4u: goto label_1e7ac4;
            case 0x1E7AC8u: goto label_1e7ac8;
            case 0x1E7ACCu: goto label_1e7acc;
            case 0x1E7AD0u: goto label_1e7ad0;
            case 0x1E7AD4u: goto label_1e7ad4;
            case 0x1E7AD8u: goto label_1e7ad8;
            case 0x1E7ADCu: goto label_1e7adc;
            case 0x1E7AE0u: goto label_1e7ae0;
            case 0x1E7AE4u: goto label_1e7ae4;
            case 0x1E7AE8u: goto label_1e7ae8;
            case 0x1E7AECu: goto label_1e7aec;
            case 0x1E7AF0u: goto label_1e7af0;
            case 0x1E7AF4u: goto label_1e7af4;
            case 0x1E7AF8u: goto label_1e7af8;
            case 0x1E7AFCu: goto label_1e7afc;
            case 0x1E7B00u: goto label_1e7b00;
            case 0x1E7B04u: goto label_1e7b04;
            case 0x1E7B08u: goto label_1e7b08;
            case 0x1E7B0Cu: goto label_1e7b0c;
            case 0x1E7B10u: goto label_1e7b10;
            case 0x1E7B14u: goto label_1e7b14;
            case 0x1E7B18u: goto label_1e7b18;
            case 0x1E7B1Cu: goto label_1e7b1c;
            case 0x1E7B20u: goto label_1e7b20;
            case 0x1E7B24u: goto label_1e7b24;
            case 0x1E7B28u: goto label_1e7b28;
            case 0x1E7B2Cu: goto label_1e7b2c;
            case 0x1E7B30u: goto label_1e7b30;
            case 0x1E7B34u: goto label_1e7b34;
            case 0x1E7B38u: goto label_1e7b38;
            case 0x1E7B3Cu: goto label_1e7b3c;
            case 0x1E7B40u: goto label_1e7b40;
            case 0x1E7B44u: goto label_1e7b44;
            case 0x1E7B48u: goto label_1e7b48;
            case 0x1E7B4Cu: goto label_1e7b4c;
            case 0x1E7B50u: goto label_1e7b50;
            case 0x1E7B54u: goto label_1e7b54;
            case 0x1E7B58u: goto label_1e7b58;
            case 0x1E7B5Cu: goto label_1e7b5c;
            case 0x1E7B60u: goto label_1e7b60;
            case 0x1E7B64u: goto label_1e7b64;
            case 0x1E7B68u: goto label_1e7b68;
            case 0x1E7B6Cu: goto label_1e7b6c;
            case 0x1E7B70u: goto label_1e7b70;
            case 0x1E7B74u: goto label_1e7b74;
            case 0x1E7B78u: goto label_1e7b78;
            case 0x1E7B7Cu: goto label_1e7b7c;
            case 0x1E7B80u: goto label_1e7b80;
            case 0x1E7B84u: goto label_1e7b84;
            case 0x1E7B88u: goto label_1e7b88;
            case 0x1E7B8Cu: goto label_1e7b8c;
            case 0x1E7B90u: goto label_1e7b90;
            case 0x1E7B94u: goto label_1e7b94;
            case 0x1E7B98u: goto label_1e7b98;
            case 0x1E7B9Cu: goto label_1e7b9c;
            case 0x1E7BA0u: goto label_1e7ba0;
            case 0x1E7BA4u: goto label_1e7ba4;
            case 0x1E7BA8u: goto label_1e7ba8;
            case 0x1E7BACu: goto label_1e7bac;
            case 0x1E7BB0u: goto label_1e7bb0;
            case 0x1E7BB4u: goto label_1e7bb4;
            case 0x1E7BB8u: goto label_1e7bb8;
            case 0x1E7BBCu: goto label_1e7bbc;
            case 0x1E7BC0u: goto label_1e7bc0;
            case 0x1E7BC4u: goto label_1e7bc4;
            case 0x1E7BC8u: goto label_1e7bc8;
            case 0x1E7BCCu: goto label_1e7bcc;
            case 0x1E7BD0u: goto label_1e7bd0;
            case 0x1E7BD4u: goto label_1e7bd4;
            case 0x1E7BD8u: goto label_1e7bd8;
            case 0x1E7BDCu: goto label_1e7bdc;
            case 0x1E7BE0u: goto label_1e7be0;
            case 0x1E7BE4u: goto label_1e7be4;
            case 0x1E7BE8u: goto label_1e7be8;
            case 0x1E7BECu: goto label_1e7bec;
            case 0x1E7BF0u: goto label_1e7bf0;
            case 0x1E7BF4u: goto label_1e7bf4;
            case 0x1E7BF8u: goto label_1e7bf8;
            case 0x1E7BFCu: goto label_1e7bfc;
            case 0x1E7C00u: goto label_1e7c00;
            case 0x1E7C04u: goto label_1e7c04;
            case 0x1E7C08u: goto label_1e7c08;
            case 0x1E7C0Cu: goto label_1e7c0c;
            case 0x1E7C10u: goto label_1e7c10;
            case 0x1E7C14u: goto label_1e7c14;
            case 0x1E7C18u: goto label_1e7c18;
            case 0x1E7C1Cu: goto label_1e7c1c;
            case 0x1E7C20u: goto label_1e7c20;
            case 0x1E7C24u: goto label_1e7c24;
            case 0x1E7C28u: goto label_1e7c28;
            case 0x1E7C2Cu: goto label_1e7c2c;
            case 0x1E7C30u: goto label_1e7c30;
            case 0x1E7C34u: goto label_1e7c34;
            case 0x1E7C38u: goto label_1e7c38;
            case 0x1E7C3Cu: goto label_1e7c3c;
            case 0x1E7C40u: goto label_1e7c40;
            case 0x1E7C44u: goto label_1e7c44;
            case 0x1E7C48u: goto label_1e7c48;
            case 0x1E7C4Cu: goto label_1e7c4c;
            case 0x1E7C50u: goto label_1e7c50;
            case 0x1E7C54u: goto label_1e7c54;
            case 0x1E7C58u: goto label_1e7c58;
            case 0x1E7C5Cu: goto label_1e7c5c;
            case 0x1E7C60u: goto label_1e7c60;
            case 0x1E7C64u: goto label_1e7c64;
            case 0x1E7C68u: goto label_1e7c68;
            case 0x1E7C6Cu: goto label_1e7c6c;
            case 0x1E7C70u: goto label_1e7c70;
            case 0x1E7C74u: goto label_1e7c74;
            case 0x1E7C78u: goto label_1e7c78;
            case 0x1E7C7Cu: goto label_1e7c7c;
            case 0x1E7C80u: goto label_1e7c80;
            case 0x1E7C84u: goto label_1e7c84;
            case 0x1E7C88u: goto label_1e7c88;
            case 0x1E7C8Cu: goto label_1e7c8c;
            case 0x1E7C90u: goto label_1e7c90;
            case 0x1E7C94u: goto label_1e7c94;
            case 0x1E7C98u: goto label_1e7c98;
            case 0x1E7C9Cu: goto label_1e7c9c;
            case 0x1E7CA0u: goto label_1e7ca0;
            case 0x1E7CA4u: goto label_1e7ca4;
            case 0x1E7CA8u: goto label_1e7ca8;
            case 0x1E7CACu: goto label_1e7cac;
            case 0x1E7CB0u: goto label_1e7cb0;
            case 0x1E7CB4u: goto label_1e7cb4;
            case 0x1E7CB8u: goto label_1e7cb8;
            case 0x1E7CBCu: goto label_1e7cbc;
            case 0x1E7CC0u: goto label_1e7cc0;
            case 0x1E7CC4u: goto label_1e7cc4;
            case 0x1E7CC8u: goto label_1e7cc8;
            case 0x1E7CCCu: goto label_1e7ccc;
            case 0x1E7CD0u: goto label_1e7cd0;
            case 0x1E7CD4u: goto label_1e7cd4;
            case 0x1E7CD8u: goto label_1e7cd8;
            case 0x1E7CDCu: goto label_1e7cdc;
            case 0x1E7CE0u: goto label_1e7ce0;
            case 0x1E7CE4u: goto label_1e7ce4;
            case 0x1E7CE8u: goto label_1e7ce8;
            case 0x1E7CECu: goto label_1e7cec;
            case 0x1E7CF0u: goto label_1e7cf0;
            case 0x1E7CF4u: goto label_1e7cf4;
            case 0x1E7CF8u: goto label_1e7cf8;
            case 0x1E7CFCu: goto label_1e7cfc;
            case 0x1E7D00u: goto label_1e7d00;
            case 0x1E7D04u: goto label_1e7d04;
            case 0x1E7D08u: goto label_1e7d08;
            case 0x1E7D0Cu: goto label_1e7d0c;
            case 0x1E7D10u: goto label_1e7d10;
            case 0x1E7D14u: goto label_1e7d14;
            case 0x1E7D18u: goto label_1e7d18;
            case 0x1E7D1Cu: goto label_1e7d1c;
            case 0x1E7D20u: goto label_1e7d20;
            case 0x1E7D24u: goto label_1e7d24;
            case 0x1E7D28u: goto label_1e7d28;
            case 0x1E7D2Cu: goto label_1e7d2c;
            case 0x1E7D30u: goto label_1e7d30;
            case 0x1E7D34u: goto label_1e7d34;
            case 0x1E7D38u: goto label_1e7d38;
            case 0x1E7D3Cu: goto label_1e7d3c;
            case 0x1E7D40u: goto label_1e7d40;
            case 0x1E7D44u: goto label_1e7d44;
            case 0x1E7D48u: goto label_1e7d48;
            case 0x1E7D4Cu: goto label_1e7d4c;
            case 0x1E7D50u: goto label_1e7d50;
            case 0x1E7D54u: goto label_1e7d54;
            case 0x1E7D58u: goto label_1e7d58;
            case 0x1E7D5Cu: goto label_1e7d5c;
            case 0x1E7D60u: goto label_1e7d60;
            case 0x1E7D64u: goto label_1e7d64;
            case 0x1E7D68u: goto label_1e7d68;
            case 0x1E7D6Cu: goto label_1e7d6c;
            case 0x1E7D70u: goto label_1e7d70;
            case 0x1E7D74u: goto label_1e7d74;
            case 0x1E7D78u: goto label_1e7d78;
            case 0x1E7D7Cu: goto label_1e7d7c;
            case 0x1E7D80u: goto label_1e7d80;
            case 0x1E7D84u: goto label_1e7d84;
            case 0x1E7D88u: goto label_1e7d88;
            case 0x1E7D8Cu: goto label_1e7d8c;
            case 0x1E7D90u: goto label_1e7d90;
            case 0x1E7D94u: goto label_1e7d94;
            case 0x1E7D98u: goto label_1e7d98;
            case 0x1E7D9Cu: goto label_1e7d9c;
            case 0x1E7DA0u: goto label_1e7da0;
            case 0x1E7DA4u: goto label_1e7da4;
            case 0x1E7DA8u: goto label_1e7da8;
            case 0x1E7DACu: goto label_1e7dac;
            case 0x1E7DB0u: goto label_1e7db0;
            case 0x1E7DB4u: goto label_1e7db4;
            case 0x1E7DB8u: goto label_1e7db8;
            case 0x1E7DBCu: goto label_1e7dbc;
            case 0x1E7DC0u: goto label_1e7dc0;
            case 0x1E7DC4u: goto label_1e7dc4;
            case 0x1E7DC8u: goto label_1e7dc8;
            case 0x1E7DCCu: goto label_1e7dcc;
            case 0x1E7DD0u: goto label_1e7dd0;
            case 0x1E7DD4u: goto label_1e7dd4;
            case 0x1E7DD8u: goto label_1e7dd8;
            case 0x1E7DDCu: goto label_1e7ddc;
            case 0x1E7DE0u: goto label_1e7de0;
            case 0x1E7DE4u: goto label_1e7de4;
            case 0x1E7DE8u: goto label_1e7de8;
            case 0x1E7DECu: goto label_1e7dec;
            case 0x1E7DF0u: goto label_1e7df0;
            case 0x1E7DF4u: goto label_1e7df4;
            case 0x1E7DF8u: goto label_1e7df8;
            case 0x1E7DFCu: goto label_1e7dfc;
            case 0x1E7E00u: goto label_1e7e00;
            case 0x1E7E04u: goto label_1e7e04;
            case 0x1E7E08u: goto label_1e7e08;
            case 0x1E7E0Cu: goto label_1e7e0c;
            case 0x1E7E10u: goto label_1e7e10;
            case 0x1E7E14u: goto label_1e7e14;
            case 0x1E7E18u: goto label_1e7e18;
            case 0x1E7E1Cu: goto label_1e7e1c;
            case 0x1E7E20u: goto label_1e7e20;
            case 0x1E7E24u: goto label_1e7e24;
            case 0x1E7E28u: goto label_1e7e28;
            case 0x1E7E2Cu: goto label_1e7e2c;
            case 0x1E7E30u: goto label_1e7e30;
            case 0x1E7E34u: goto label_1e7e34;
            case 0x1E7E38u: goto label_1e7e38;
            case 0x1E7E3Cu: goto label_1e7e3c;
            case 0x1E7E40u: goto label_1e7e40;
            case 0x1E7E44u: goto label_1e7e44;
            case 0x1E7E48u: goto label_1e7e48;
            case 0x1E7E4Cu: goto label_1e7e4c;
            case 0x1E7E50u: goto label_1e7e50;
            case 0x1E7E54u: goto label_1e7e54;
            case 0x1E7E58u: goto label_1e7e58;
            case 0x1E7E5Cu: goto label_1e7e5c;
            case 0x1E7E60u: goto label_1e7e60;
            case 0x1E7E64u: goto label_1e7e64;
            case 0x1E7E68u: goto label_1e7e68;
            case 0x1E7E6Cu: goto label_1e7e6c;
            case 0x1E7E70u: goto label_1e7e70;
            case 0x1E7E74u: goto label_1e7e74;
            case 0x1E7E78u: goto label_1e7e78;
            case 0x1E7E7Cu: goto label_1e7e7c;
            case 0x1E7E80u: goto label_1e7e80;
            case 0x1E7E84u: goto label_1e7e84;
            case 0x1E7E88u: goto label_1e7e88;
            case 0x1E7E8Cu: goto label_1e7e8c;
            case 0x1E7E90u: goto label_1e7e90;
            case 0x1E7E94u: goto label_1e7e94;
            case 0x1E7E98u: goto label_1e7e98;
            case 0x1E7E9Cu: goto label_1e7e9c;
            case 0x1E7EA0u: goto label_1e7ea0;
            case 0x1E7EA4u: goto label_1e7ea4;
            case 0x1E7EA8u: goto label_1e7ea8;
            case 0x1E7EACu: goto label_1e7eac;
            case 0x1E7EB0u: goto label_1e7eb0;
            case 0x1E7EB4u: goto label_1e7eb4;
            case 0x1E7EB8u: goto label_1e7eb8;
            case 0x1E7EBCu: goto label_1e7ebc;
            case 0x1E7EC0u: goto label_1e7ec0;
            case 0x1E7EC4u: goto label_1e7ec4;
            case 0x1E7EC8u: goto label_1e7ec8;
            case 0x1E7ECCu: goto label_1e7ecc;
            case 0x1E7ED0u: goto label_1e7ed0;
            case 0x1E7ED4u: goto label_1e7ed4;
            case 0x1E7ED8u: goto label_1e7ed8;
            case 0x1E7EDCu: goto label_1e7edc;
            case 0x1E7EE0u: goto label_1e7ee0;
            case 0x1E7EE4u: goto label_1e7ee4;
            case 0x1E7EE8u: goto label_1e7ee8;
            case 0x1E7EECu: goto label_1e7eec;
            case 0x1E7EF0u: goto label_1e7ef0;
            case 0x1E7EF4u: goto label_1e7ef4;
            case 0x1E7EF8u: goto label_1e7ef8;
            case 0x1E7EFCu: goto label_1e7efc;
            case 0x1E7F00u: goto label_1e7f00;
            case 0x1E7F04u: goto label_1e7f04;
            case 0x1E7F08u: goto label_1e7f08;
            case 0x1E7F0Cu: goto label_1e7f0c;
            case 0x1E7F10u: goto label_1e7f10;
            case 0x1E7F14u: goto label_1e7f14;
            case 0x1E7F18u: goto label_1e7f18;
            case 0x1E7F1Cu: goto label_1e7f1c;
            case 0x1E7F20u: goto label_1e7f20;
            case 0x1E7F24u: goto label_1e7f24;
            case 0x1E7F28u: goto label_1e7f28;
            case 0x1E7F2Cu: goto label_1e7f2c;
            case 0x1E7F30u: goto label_1e7f30;
            case 0x1E7F34u: goto label_1e7f34;
            case 0x1E7F38u: goto label_1e7f38;
            case 0x1E7F3Cu: goto label_1e7f3c;
            case 0x1E7F40u: goto label_1e7f40;
            case 0x1E7F44u: goto label_1e7f44;
            case 0x1E7F48u: goto label_1e7f48;
            case 0x1E7F4Cu: goto label_1e7f4c;
            case 0x1E7F50u: goto label_1e7f50;
            case 0x1E7F54u: goto label_1e7f54;
            case 0x1E7F58u: goto label_1e7f58;
            case 0x1E7F5Cu: goto label_1e7f5c;
            case 0x1E7F60u: goto label_1e7f60;
            case 0x1E7F64u: goto label_1e7f64;
            case 0x1E7F68u: goto label_1e7f68;
            case 0x1E7F6Cu: goto label_1e7f6c;
            case 0x1E7F70u: goto label_1e7f70;
            case 0x1E7F74u: goto label_1e7f74;
            case 0x1E7F78u: goto label_1e7f78;
            case 0x1E7F7Cu: goto label_1e7f7c;
            case 0x1E7F80u: goto label_1e7f80;
            case 0x1E7F84u: goto label_1e7f84;
            case 0x1E7F88u: goto label_1e7f88;
            case 0x1E7F8Cu: goto label_1e7f8c;
            case 0x1E7F90u: goto label_1e7f90;
            case 0x1E7F94u: goto label_1e7f94;
            case 0x1E7F98u: goto label_1e7f98;
            case 0x1E7F9Cu: goto label_1e7f9c;
            case 0x1E7FA0u: goto label_1e7fa0;
            case 0x1E7FA4u: goto label_1e7fa4;
            case 0x1E7FA8u: goto label_1e7fa8;
            case 0x1E7FACu: goto label_1e7fac;
            case 0x1E7FB0u: goto label_1e7fb0;
            case 0x1E7FB4u: goto label_1e7fb4;
            case 0x1E7FB8u: goto label_1e7fb8;
            case 0x1E7FBCu: goto label_1e7fbc;
            case 0x1E7FC0u: goto label_1e7fc0;
            case 0x1E7FC4u: goto label_1e7fc4;
            case 0x1E7FC8u: goto label_1e7fc8;
            case 0x1E7FCCu: goto label_1e7fcc;
            case 0x1E7FD0u: goto label_1e7fd0;
            case 0x1E7FD4u: goto label_1e7fd4;
            case 0x1E7FD8u: goto label_1e7fd8;
            case 0x1E7FDCu: goto label_1e7fdc;
            case 0x1E7FE0u: goto label_1e7fe0;
            case 0x1E7FE4u: goto label_1e7fe4;
            case 0x1E7FE8u: goto label_1e7fe8;
            case 0x1E7FECu: goto label_1e7fec;
            case 0x1E7FF0u: goto label_1e7ff0;
            case 0x1E7FF4u: goto label_1e7ff4;
            case 0x1E7FF8u: goto label_1e7ff8;
            case 0x1E7FFCu: goto label_1e7ffc;
            case 0x1E8000u: goto label_1e8000;
            case 0x1E8004u: goto label_1e8004;
            case 0x1E8008u: goto label_1e8008;
            case 0x1E800Cu: goto label_1e800c;
            case 0x1E8010u: goto label_1e8010;
            case 0x1E8014u: goto label_1e8014;
            case 0x1E8018u: goto label_1e8018;
            case 0x1E801Cu: goto label_1e801c;
            case 0x1E8020u: goto label_1e8020;
            case 0x1E8024u: goto label_1e8024;
            case 0x1E8028u: goto label_1e8028;
            case 0x1E802Cu: goto label_1e802c;
            case 0x1E8030u: goto label_1e8030;
            case 0x1E8034u: goto label_1e8034;
            case 0x1E8038u: goto label_1e8038;
            case 0x1E803Cu: goto label_1e803c;
            case 0x1E8040u: goto label_1e8040;
            case 0x1E8044u: goto label_1e8044;
            case 0x1E8048u: goto label_1e8048;
            case 0x1E804Cu: goto label_1e804c;
            case 0x1E8050u: goto label_1e8050;
            case 0x1E8054u: goto label_1e8054;
            case 0x1E8058u: goto label_1e8058;
            case 0x1E805Cu: goto label_1e805c;
            case 0x1E8060u: goto label_1e8060;
            case 0x1E8064u: goto label_1e8064;
            case 0x1E8068u: goto label_1e8068;
            case 0x1E806Cu: goto label_1e806c;
            case 0x1E8070u: goto label_1e8070;
            case 0x1E8074u: goto label_1e8074;
            case 0x1E8078u: goto label_1e8078;
            case 0x1E807Cu: goto label_1e807c;
            case 0x1E8080u: goto label_1e8080;
            case 0x1E8084u: goto label_1e8084;
            case 0x1E8088u: goto label_1e8088;
            case 0x1E808Cu: goto label_1e808c;
            case 0x1E8090u: goto label_1e8090;
            case 0x1E8094u: goto label_1e8094;
            case 0x1E8098u: goto label_1e8098;
            case 0x1E809Cu: goto label_1e809c;
            case 0x1E80A0u: goto label_1e80a0;
            case 0x1E80A4u: goto label_1e80a4;
            case 0x1E80A8u: goto label_1e80a8;
            case 0x1E80ACu: goto label_1e80ac;
            case 0x1E80B0u: goto label_1e80b0;
            case 0x1E80B4u: goto label_1e80b4;
            case 0x1E80B8u: goto label_1e80b8;
            case 0x1E80BCu: goto label_1e80bc;
            case 0x1E80C0u: goto label_1e80c0;
            case 0x1E80C4u: goto label_1e80c4;
            case 0x1E80C8u: goto label_1e80c8;
            case 0x1E80CCu: goto label_1e80cc;
            case 0x1E80D0u: goto label_1e80d0;
            case 0x1E80D4u: goto label_1e80d4;
            case 0x1E80D8u: goto label_1e80d8;
            case 0x1E80DCu: goto label_1e80dc;
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E80E8u: goto label_1e80e8;
            case 0x1E80ECu: goto label_1e80ec;
            case 0x1E80F0u: goto label_1e80f0;
            case 0x1E80F4u: goto label_1e80f4;
            case 0x1E80F8u: goto label_1e80f8;
            case 0x1E80FCu: goto label_1e80fc;
            case 0x1E8100u: goto label_1e8100;
            case 0x1E8104u: goto label_1e8104;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E810Cu: goto label_1e810c;
            case 0x1E8110u: goto label_1e8110;
            case 0x1E8114u: goto label_1e8114;
            case 0x1E8118u: goto label_1e8118;
            case 0x1E811Cu: goto label_1e811c;
            case 0x1E8120u: goto label_1e8120;
            case 0x1E8124u: goto label_1e8124;
            case 0x1E8128u: goto label_1e8128;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E8130u: goto label_1e8130;
            case 0x1E8134u: goto label_1e8134;
            case 0x1E8138u: goto label_1e8138;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8140u: goto label_1e8140;
            case 0x1E8144u: goto label_1e8144;
            case 0x1E8148u: goto label_1e8148;
            case 0x1E814Cu: goto label_1e814c;
            case 0x1E8150u: goto label_1e8150;
            case 0x1E8154u: goto label_1e8154;
            case 0x1E8158u: goto label_1e8158;
            case 0x1E815Cu: goto label_1e815c;
            case 0x1E8160u: goto label_1e8160;
            case 0x1E8164u: goto label_1e8164;
            case 0x1E8168u: goto label_1e8168;
            case 0x1E816Cu: goto label_1e816c;
            case 0x1E8170u: goto label_1e8170;
            case 0x1E8174u: goto label_1e8174;
            case 0x1E8178u: goto label_1e8178;
            case 0x1E817Cu: goto label_1e817c;
            case 0x1E8180u: goto label_1e8180;
            case 0x1E8184u: goto label_1e8184;
            case 0x1E8188u: goto label_1e8188;
            case 0x1E818Cu: goto label_1e818c;
            case 0x1E8190u: goto label_1e8190;
            case 0x1E8194u: goto label_1e8194;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81A0u: goto label_1e81a0;
            case 0x1E81A4u: goto label_1e81a4;
            case 0x1E81A8u: goto label_1e81a8;
            case 0x1E81ACu: goto label_1e81ac;
            case 0x1E81B0u: goto label_1e81b0;
            case 0x1E81B4u: goto label_1e81b4;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81BCu: goto label_1e81bc;
            case 0x1E81C0u: goto label_1e81c0;
            case 0x1E81C4u: goto label_1e81c4;
            case 0x1E81C8u: goto label_1e81c8;
            case 0x1E81CCu: goto label_1e81cc;
            case 0x1E81D0u: goto label_1e81d0;
            case 0x1E81D4u: goto label_1e81d4;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E81DCu: goto label_1e81dc;
            case 0x1E81E0u: goto label_1e81e0;
            case 0x1E81E4u: goto label_1e81e4;
            case 0x1E81E8u: goto label_1e81e8;
            case 0x1E81ECu: goto label_1e81ec;
            case 0x1E81F0u: goto label_1e81f0;
            case 0x1E81F4u: goto label_1e81f4;
            case 0x1E81F8u: goto label_1e81f8;
            case 0x1E81FCu: goto label_1e81fc;
            case 0x1E8200u: goto label_1e8200;
            case 0x1E8204u: goto label_1e8204;
            case 0x1E8208u: goto label_1e8208;
            case 0x1E820Cu: goto label_1e820c;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8214u: goto label_1e8214;
            case 0x1E8218u: goto label_1e8218;
            case 0x1E821Cu: goto label_1e821c;
            case 0x1E8220u: goto label_1e8220;
            case 0x1E8224u: goto label_1e8224;
            case 0x1E8228u: goto label_1e8228;
            case 0x1E822Cu: goto label_1e822c;
            case 0x1E8230u: goto label_1e8230;
            case 0x1E8234u: goto label_1e8234;
            case 0x1E8238u: goto label_1e8238;
            case 0x1E823Cu: goto label_1e823c;
            case 0x1E8240u: goto label_1e8240;
            case 0x1E8244u: goto label_1e8244;
            case 0x1E8248u: goto label_1e8248;
            case 0x1E824Cu: goto label_1e824c;
            case 0x1E8250u: goto label_1e8250;
            case 0x1E8254u: goto label_1e8254;
            case 0x1E8258u: goto label_1e8258;
            case 0x1E825Cu: goto label_1e825c;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E8264u: goto label_1e8264;
            case 0x1E8268u: goto label_1e8268;
            case 0x1E826Cu: goto label_1e826c;
            case 0x1E8270u: goto label_1e8270;
            case 0x1E8274u: goto label_1e8274;
            case 0x1E8278u: goto label_1e8278;
            case 0x1E827Cu: goto label_1e827c;
            case 0x1E8280u: goto label_1e8280;
            case 0x1E8284u: goto label_1e8284;
            case 0x1E8288u: goto label_1e8288;
            case 0x1E828Cu: goto label_1e828c;
            case 0x1E8290u: goto label_1e8290;
            case 0x1E8294u: goto label_1e8294;
            case 0x1E8298u: goto label_1e8298;
            case 0x1E829Cu: goto label_1e829c;
            case 0x1E82A0u: goto label_1e82a0;
            case 0x1E82A4u: goto label_1e82a4;
            case 0x1E82A8u: goto label_1e82a8;
            case 0x1E82ACu: goto label_1e82ac;
            case 0x1E82B0u: goto label_1e82b0;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E82B8u: goto label_1e82b8;
            case 0x1E82BCu: goto label_1e82bc;
            case 0x1E82C0u: goto label_1e82c0;
            case 0x1E82C4u: goto label_1e82c4;
            case 0x1E82C8u: goto label_1e82c8;
            case 0x1E82CCu: goto label_1e82cc;
            case 0x1E82D0u: goto label_1e82d0;
            case 0x1E82D4u: goto label_1e82d4;
            case 0x1E82D8u: goto label_1e82d8;
            case 0x1E82DCu: goto label_1e82dc;
            case 0x1E82E0u: goto label_1e82e0;
            case 0x1E82E4u: goto label_1e82e4;
            case 0x1E82E8u: goto label_1e82e8;
            case 0x1E82ECu: goto label_1e82ec;
            case 0x1E82F0u: goto label_1e82f0;
            case 0x1E82F4u: goto label_1e82f4;
            case 0x1E82F8u: goto label_1e82f8;
            case 0x1E82FCu: goto label_1e82fc;
            case 0x1E8300u: goto label_1e8300;
            case 0x1E8304u: goto label_1e8304;
            case 0x1E8308u: goto label_1e8308;
            case 0x1E830Cu: goto label_1e830c;
            case 0x1E8310u: goto label_1e8310;
            case 0x1E8314u: goto label_1e8314;
            case 0x1E8318u: goto label_1e8318;
            case 0x1E831Cu: goto label_1e831c;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8328u: goto label_1e8328;
            case 0x1E832Cu: goto label_1e832c;
            case 0x1E8330u: goto label_1e8330;
            case 0x1E8334u: goto label_1e8334;
            case 0x1E8338u: goto label_1e8338;
            case 0x1E833Cu: goto label_1e833c;
            case 0x1E8340u: goto label_1e8340;
            case 0x1E8344u: goto label_1e8344;
            case 0x1E8348u: goto label_1e8348;
            case 0x1E834Cu: goto label_1e834c;
            case 0x1E8350u: goto label_1e8350;
            case 0x1E8354u: goto label_1e8354;
            case 0x1E8358u: goto label_1e8358;
            case 0x1E835Cu: goto label_1e835c;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E8368u: goto label_1e8368;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E8370u: goto label_1e8370;
            case 0x1E8374u: goto label_1e8374;
            case 0x1E8378u: goto label_1e8378;
            case 0x1E837Cu: goto label_1e837c;
            case 0x1E8380u: goto label_1e8380;
            case 0x1E8384u: goto label_1e8384;
            case 0x1E8388u: goto label_1e8388;
            case 0x1E838Cu: goto label_1e838c;
            case 0x1E8390u: goto label_1e8390;
            case 0x1E8394u: goto label_1e8394;
            case 0x1E8398u: goto label_1e8398;
            case 0x1E839Cu: goto label_1e839c;
            case 0x1E83A0u: goto label_1e83a0;
            case 0x1E83A4u: goto label_1e83a4;
            case 0x1E83A8u: goto label_1e83a8;
            case 0x1E83ACu: goto label_1e83ac;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            case 0x1E83B8u: goto label_1e83b8;
            case 0x1E83BCu: goto label_1e83bc;
            case 0x1E83C0u: goto label_1e83c0;
            case 0x1E83C4u: goto label_1e83c4;
            case 0x1E83C8u: goto label_1e83c8;
            case 0x1E83CCu: goto label_1e83cc;
            case 0x1E83D0u: goto label_1e83d0;
            case 0x1E83D4u: goto label_1e83d4;
            case 0x1E83D8u: goto label_1e83d8;
            case 0x1E83DCu: goto label_1e83dc;
            case 0x1E83E0u: goto label_1e83e0;
            case 0x1E83E4u: goto label_1e83e4;
            case 0x1E83E8u: goto label_1e83e8;
            case 0x1E83ECu: goto label_1e83ec;
            case 0x1E83F0u: goto label_1e83f0;
            case 0x1E83F4u: goto label_1e83f4;
            case 0x1E83F8u: goto label_1e83f8;
            case 0x1E83FCu: goto label_1e83fc;
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8404u: goto label_1e8404;
            case 0x1E8408u: goto label_1e8408;
            case 0x1E840Cu: goto label_1e840c;
            case 0x1E8410u: goto label_1e8410;
            case 0x1E8414u: goto label_1e8414;
            case 0x1E8418u: goto label_1e8418;
            case 0x1E841Cu: goto label_1e841c;
            case 0x1E8420u: goto label_1e8420;
            case 0x1E8424u: goto label_1e8424;
            case 0x1E8428u: goto label_1e8428;
            case 0x1E842Cu: goto label_1e842c;
            case 0x1E8430u: goto label_1e8430;
            case 0x1E8434u: goto label_1e8434;
            case 0x1E8438u: goto label_1e8438;
            case 0x1E843Cu: goto label_1e843c;
            case 0x1E8440u: goto label_1e8440;
            case 0x1E8444u: goto label_1e8444;
            case 0x1E8448u: goto label_1e8448;
            case 0x1E844Cu: goto label_1e844c;
            case 0x1E8450u: goto label_1e8450;
            case 0x1E8454u: goto label_1e8454;
            case 0x1E8458u: goto label_1e8458;
            case 0x1E845Cu: goto label_1e845c;
            case 0x1E8460u: goto label_1e8460;
            case 0x1E8464u: goto label_1e8464;
            case 0x1E8468u: goto label_1e8468;
            case 0x1E846Cu: goto label_1e846c;
            case 0x1E8470u: goto label_1e8470;
            case 0x1E8474u: goto label_1e8474;
            case 0x1E8478u: goto label_1e8478;
            case 0x1E847Cu: goto label_1e847c;
            case 0x1E8480u: goto label_1e8480;
            case 0x1E8484u: goto label_1e8484;
            case 0x1E8488u: goto label_1e8488;
            case 0x1E848Cu: goto label_1e848c;
            case 0x1E8490u: goto label_1e8490;
            case 0x1E8494u: goto label_1e8494;
            case 0x1E8498u: goto label_1e8498;
            case 0x1E849Cu: goto label_1e849c;
            case 0x1E84A0u: goto label_1e84a0;
            case 0x1E84A4u: goto label_1e84a4;
            case 0x1E84A8u: goto label_1e84a8;
            case 0x1E84ACu: goto label_1e84ac;
            case 0x1E84B0u: goto label_1e84b0;
            case 0x1E84B4u: goto label_1e84b4;
            case 0x1E84B8u: goto label_1e84b8;
            case 0x1E84BCu: goto label_1e84bc;
            case 0x1E84C0u: goto label_1e84c0;
            case 0x1E84C4u: goto label_1e84c4;
            case 0x1E84C8u: goto label_1e84c8;
            case 0x1E84CCu: goto label_1e84cc;
            case 0x1E84D0u: goto label_1e84d0;
            case 0x1E84D4u: goto label_1e84d4;
            case 0x1E84D8u: goto label_1e84d8;
            case 0x1E84DCu: goto label_1e84dc;
            case 0x1E84E0u: goto label_1e84e0;
            case 0x1E84E4u: goto label_1e84e4;
            case 0x1E84E8u: goto label_1e84e8;
            case 0x1E84ECu: goto label_1e84ec;
            case 0x1E84F0u: goto label_1e84f0;
            case 0x1E84F4u: goto label_1e84f4;
            case 0x1E84F8u: goto label_1e84f8;
            case 0x1E84FCu: goto label_1e84fc;
            case 0x1E8500u: goto label_1e8500;
            case 0x1E8504u: goto label_1e8504;
            case 0x1E8508u: goto label_1e8508;
            case 0x1E850Cu: goto label_1e850c;
            case 0x1E8510u: goto label_1e8510;
            case 0x1E8514u: goto label_1e8514;
            case 0x1E8518u: goto label_1e8518;
            case 0x1E851Cu: goto label_1e851c;
            case 0x1E8520u: goto label_1e8520;
            case 0x1E8524u: goto label_1e8524;
            case 0x1E8528u: goto label_1e8528;
            case 0x1E852Cu: goto label_1e852c;
            case 0x1E8530u: goto label_1e8530;
            case 0x1E8534u: goto label_1e8534;
            case 0x1E8538u: goto label_1e8538;
            case 0x1E853Cu: goto label_1e853c;
            case 0x1E8540u: goto label_1e8540;
            case 0x1E8544u: goto label_1e8544;
            case 0x1E8548u: goto label_1e8548;
            case 0x1E854Cu: goto label_1e854c;
            case 0x1E8550u: goto label_1e8550;
            case 0x1E8554u: goto label_1e8554;
            case 0x1E8558u: goto label_1e8558;
            case 0x1E855Cu: goto label_1e855c;
            case 0x1E8560u: goto label_1e8560;
            case 0x1E8564u: goto label_1e8564;
            case 0x1E8568u: goto label_1e8568;
            case 0x1E856Cu: goto label_1e856c;
            case 0x1E8570u: goto label_1e8570;
            case 0x1E8574u: goto label_1e8574;
            case 0x1E8578u: goto label_1e8578;
            case 0x1E857Cu: goto label_1e857c;
            case 0x1E8580u: goto label_1e8580;
            case 0x1E8584u: goto label_1e8584;
            case 0x1E8588u: goto label_1e8588;
            case 0x1E858Cu: goto label_1e858c;
            case 0x1E8590u: goto label_1e8590;
            case 0x1E8594u: goto label_1e8594;
            case 0x1E8598u: goto label_1e8598;
            case 0x1E859Cu: goto label_1e859c;
            case 0x1E85A0u: goto label_1e85a0;
            case 0x1E85A4u: goto label_1e85a4;
            case 0x1E85A8u: goto label_1e85a8;
            case 0x1E85ACu: goto label_1e85ac;
            case 0x1E85B0u: goto label_1e85b0;
            case 0x1E85B4u: goto label_1e85b4;
            case 0x1E85B8u: goto label_1e85b8;
            case 0x1E85BCu: goto label_1e85bc;
            case 0x1E85C0u: goto label_1e85c0;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E85C8u: goto label_1e85c8;
            case 0x1E85CCu: goto label_1e85cc;
            case 0x1E85D0u: goto label_1e85d0;
            case 0x1E85D4u: goto label_1e85d4;
            case 0x1E85D8u: goto label_1e85d8;
            case 0x1E85DCu: goto label_1e85dc;
            case 0x1E85E0u: goto label_1e85e0;
            case 0x1E85E4u: goto label_1e85e4;
            case 0x1E85E8u: goto label_1e85e8;
            case 0x1E85ECu: goto label_1e85ec;
            case 0x1E85F0u: goto label_1e85f0;
            case 0x1E85F4u: goto label_1e85f4;
            case 0x1E85F8u: goto label_1e85f8;
            case 0x1E85FCu: goto label_1e85fc;
            case 0x1E8600u: goto label_1e8600;
            case 0x1E8604u: goto label_1e8604;
            case 0x1E8608u: goto label_1e8608;
            case 0x1E860Cu: goto label_1e860c;
            case 0x1E8610u: goto label_1e8610;
            case 0x1E8614u: goto label_1e8614;
            case 0x1E8618u: goto label_1e8618;
            case 0x1E861Cu: goto label_1e861c;
            case 0x1E8620u: goto label_1e8620;
            case 0x1E8624u: goto label_1e8624;
            case 0x1E8628u: goto label_1e8628;
            case 0x1E862Cu: goto label_1e862c;
            case 0x1E8630u: goto label_1e8630;
            case 0x1E8634u: goto label_1e8634;
            case 0x1E8638u: goto label_1e8638;
            case 0x1E863Cu: goto label_1e863c;
            case 0x1E8640u: goto label_1e8640;
            case 0x1E8644u: goto label_1e8644;
            case 0x1E8648u: goto label_1e8648;
            case 0x1E864Cu: goto label_1e864c;
            case 0x1E8650u: goto label_1e8650;
            case 0x1E8654u: goto label_1e8654;
            case 0x1E8658u: goto label_1e8658;
            case 0x1E865Cu: goto label_1e865c;
            case 0x1E8660u: goto label_1e8660;
            case 0x1E8664u: goto label_1e8664;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E866Cu: goto label_1e866c;
            case 0x1E8670u: goto label_1e8670;
            case 0x1E8674u: goto label_1e8674;
            case 0x1E8678u: goto label_1e8678;
            case 0x1E867Cu: goto label_1e867c;
            case 0x1E8680u: goto label_1e8680;
            case 0x1E8684u: goto label_1e8684;
            case 0x1E8688u: goto label_1e8688;
            case 0x1E868Cu: goto label_1e868c;
            case 0x1E8690u: goto label_1e8690;
            case 0x1E8694u: goto label_1e8694;
            case 0x1E8698u: goto label_1e8698;
            case 0x1E869Cu: goto label_1e869c;
            case 0x1E86A0u: goto label_1e86a0;
            case 0x1E86A4u: goto label_1e86a4;
            case 0x1E86A8u: goto label_1e86a8;
            case 0x1E86ACu: goto label_1e86ac;
            case 0x1E86B0u: goto label_1e86b0;
            case 0x1E86B4u: goto label_1e86b4;
            case 0x1E86B8u: goto label_1e86b8;
            case 0x1E86BCu: goto label_1e86bc;
            case 0x1E86C0u: goto label_1e86c0;
            case 0x1E86C4u: goto label_1e86c4;
            case 0x1E86C8u: goto label_1e86c8;
            case 0x1E86CCu: goto label_1e86cc;
            case 0x1E86D0u: goto label_1e86d0;
            case 0x1E86D4u: goto label_1e86d4;
            case 0x1E86D8u: goto label_1e86d8;
            case 0x1E86DCu: goto label_1e86dc;
            case 0x1E86E0u: goto label_1e86e0;
            case 0x1E86E4u: goto label_1e86e4;
            case 0x1E86E8u: goto label_1e86e8;
            case 0x1E86ECu: goto label_1e86ec;
            case 0x1E86F0u: goto label_1e86f0;
            case 0x1E86F4u: goto label_1e86f4;
            case 0x1E86F8u: goto label_1e86f8;
            case 0x1E86FCu: goto label_1e86fc;
            case 0x1E8700u: goto label_1e8700;
            case 0x1E8704u: goto label_1e8704;
            case 0x1E8708u: goto label_1e8708;
            case 0x1E870Cu: goto label_1e870c;
            case 0x1E8710u: goto label_1e8710;
            case 0x1E8714u: goto label_1e8714;
            case 0x1E8718u: goto label_1e8718;
            case 0x1E871Cu: goto label_1e871c;
            case 0x1E8720u: goto label_1e8720;
            case 0x1E8724u: goto label_1e8724;
            case 0x1E8728u: goto label_1e8728;
            case 0x1E872Cu: goto label_1e872c;
            case 0x1E8730u: goto label_1e8730;
            case 0x1E8734u: goto label_1e8734;
            case 0x1E8738u: goto label_1e8738;
            case 0x1E873Cu: goto label_1e873c;
            case 0x1E8740u: goto label_1e8740;
            case 0x1E8744u: goto label_1e8744;
            case 0x1E8748u: goto label_1e8748;
            case 0x1E874Cu: goto label_1e874c;
            case 0x1E8750u: goto label_1e8750;
            case 0x1E8754u: goto label_1e8754;
            case 0x1E8758u: goto label_1e8758;
            case 0x1E875Cu: goto label_1e875c;
            case 0x1E8760u: goto label_1e8760;
            case 0x1E8764u: goto label_1e8764;
            case 0x1E8768u: goto label_1e8768;
            case 0x1E876Cu: goto label_1e876c;
            case 0x1E8770u: goto label_1e8770;
            case 0x1E8774u: goto label_1e8774;
            case 0x1E8778u: goto label_1e8778;
            case 0x1E877Cu: goto label_1e877c;
            case 0x1E8780u: goto label_1e8780;
            case 0x1E8784u: goto label_1e8784;
            case 0x1E8788u: goto label_1e8788;
            case 0x1E878Cu: goto label_1e878c;
            case 0x1E8790u: goto label_1e8790;
            case 0x1E8794u: goto label_1e8794;
            case 0x1E8798u: goto label_1e8798;
            case 0x1E879Cu: goto label_1e879c;
            case 0x1E87A0u: goto label_1e87a0;
            case 0x1E87A4u: goto label_1e87a4;
            case 0x1E87A8u: goto label_1e87a8;
            case 0x1E87ACu: goto label_1e87ac;
            case 0x1E87B0u: goto label_1e87b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E876Cu; }
            if (ctx->pc != 0x1E876Cu) { return; }
        }
    }
    ctx->pc = 0x1E876Cu;
label_1e876c:
    // 0x1e876c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1e8770:
    if (ctx->pc == 0x1E8770u) {
        ctx->pc = 0x1E8774u;
        goto label_1e8774;
    }
    ctx->pc = 0x1E876Cu;
    {
        const bool branch_taken_0x1e876c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e876c) {
            ctx->pc = 0x1E8798u;
            goto label_1e8798;
        }
    }
    ctx->pc = 0x1E8774u;
label_1e8774:
    // 0x1e8774: 0x0  nop
    ctx->pc = 0x1e8774u;
    // NOP
label_1e8778:
    // 0x1e8778: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e8778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
label_1e877c:
    // 0x1e877c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e8780:
    // 0x1e8780: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1e8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1e8784:
    // 0x1e8784: 0x24c673c0  addiu       $a2, $a2, 0x73C0
    ctx->pc = 0x1e8784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29632));
label_1e8788:
    // 0x1e8788: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1e8788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1e878c:
    // 0x1e878c: 0xc053ca4  jal         func_14F290
label_1e8790:
    if (ctx->pc == 0x1E8790u) {
        ctx->pc = 0x1E8790u;
            // 0x1e8790: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E8794u;
        goto label_1e8794;
    }
    ctx->pc = 0x1E878Cu;
    SET_GPR_U32(ctx, 31, 0x1E8794u);
    ctx->pc = 0x1E8790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E878Cu;
            // 0x1e8790: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8794u; }
        if (ctx->pc != 0x1E8794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E8794u; }
        if (ctx->pc != 0x1E8794u) { return; }
    }
    ctx->pc = 0x1E8794u;
label_1e8794:
    // 0x1e8794: 0x0  nop
    ctx->pc = 0x1e8794u;
    // NOP
label_1e8798:
    // 0x1e8798: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e8798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e879c:
    // 0x1e879c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e879cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e87a0:
    // 0x1e87a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e87a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e87a4:
    // 0x1e87a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e87a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e87a8:
    // 0x1e87a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e87a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e87ac:
    // 0x1e87ac: 0x3e00008  jr          $ra
label_1e87b0:
    if (ctx->pc == 0x1E87B0u) {
        ctx->pc = 0x1E87B0u;
            // 0x1e87b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1E87B4u;
        goto label_fallthrough_0x1e87ac;
    }
    ctx->pc = 0x1E87ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E87B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E87ACu;
            // 0x1e87b0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E7670u: goto label_1e7670;
            case 0x1E7674u: goto label_1e7674;
            case 0x1E7678u: goto label_1e7678;
            case 0x1E767Cu: goto label_1e767c;
            case 0x1E7680u: goto label_1e7680;
            case 0x1E7684u: goto label_1e7684;
            case 0x1E7688u: goto label_1e7688;
            case 0x1E768Cu: goto label_1e768c;
            case 0x1E7690u: goto label_1e7690;
            case 0x1E7694u: goto label_1e7694;
            case 0x1E7698u: goto label_1e7698;
            case 0x1E769Cu: goto label_1e769c;
            case 0x1E76A0u: goto label_1e76a0;
            case 0x1E76A4u: goto label_1e76a4;
            case 0x1E76A8u: goto label_1e76a8;
            case 0x1E76ACu: goto label_1e76ac;
            case 0x1E76B0u: goto label_1e76b0;
            case 0x1E76B4u: goto label_1e76b4;
            case 0x1E76B8u: goto label_1e76b8;
            case 0x1E76BCu: goto label_1e76bc;
            case 0x1E76C0u: goto label_1e76c0;
            case 0x1E76C4u: goto label_1e76c4;
            case 0x1E76C8u: goto label_1e76c8;
            case 0x1E76CCu: goto label_1e76cc;
            case 0x1E76D0u: goto label_1e76d0;
            case 0x1E76D4u: goto label_1e76d4;
            case 0x1E76D8u: goto label_1e76d8;
            case 0x1E76DCu: goto label_1e76dc;
            case 0x1E76E0u: goto label_1e76e0;
            case 0x1E76E4u: goto label_1e76e4;
            case 0x1E76E8u: goto label_1e76e8;
            case 0x1E76ECu: goto label_1e76ec;
            case 0x1E76F0u: goto label_1e76f0;
            case 0x1E76F4u: goto label_1e76f4;
            case 0x1E76F8u: goto label_1e76f8;
            case 0x1E76FCu: goto label_1e76fc;
            case 0x1E7700u: goto label_1e7700;
            case 0x1E7704u: goto label_1e7704;
            case 0x1E7708u: goto label_1e7708;
            case 0x1E770Cu: goto label_1e770c;
            case 0x1E7710u: goto label_1e7710;
            case 0x1E7714u: goto label_1e7714;
            case 0x1E7718u: goto label_1e7718;
            case 0x1E771Cu: goto label_1e771c;
            case 0x1E7720u: goto label_1e7720;
            case 0x1E7724u: goto label_1e7724;
            case 0x1E7728u: goto label_1e7728;
            case 0x1E772Cu: goto label_1e772c;
            case 0x1E7730u: goto label_1e7730;
            case 0x1E7734u: goto label_1e7734;
            case 0x1E7738u: goto label_1e7738;
            case 0x1E773Cu: goto label_1e773c;
            case 0x1E7740u: goto label_1e7740;
            case 0x1E7744u: goto label_1e7744;
            case 0x1E7748u: goto label_1e7748;
            case 0x1E774Cu: goto label_1e774c;
            case 0x1E7750u: goto label_1e7750;
            case 0x1E7754u: goto label_1e7754;
            case 0x1E7758u: goto label_1e7758;
            case 0x1E775Cu: goto label_1e775c;
            case 0x1E7760u: goto label_1e7760;
            case 0x1E7764u: goto label_1e7764;
            case 0x1E7768u: goto label_1e7768;
            case 0x1E776Cu: goto label_1e776c;
            case 0x1E7770u: goto label_1e7770;
            case 0x1E7774u: goto label_1e7774;
            case 0x1E7778u: goto label_1e7778;
            case 0x1E777Cu: goto label_1e777c;
            case 0x1E7780u: goto label_1e7780;
            case 0x1E7784u: goto label_1e7784;
            case 0x1E7788u: goto label_1e7788;
            case 0x1E778Cu: goto label_1e778c;
            case 0x1E7790u: goto label_1e7790;
            case 0x1E7794u: goto label_1e7794;
            case 0x1E7798u: goto label_1e7798;
            case 0x1E779Cu: goto label_1e779c;
            case 0x1E77A0u: goto label_1e77a0;
            case 0x1E77A4u: goto label_1e77a4;
            case 0x1E77A8u: goto label_1e77a8;
            case 0x1E77ACu: goto label_1e77ac;
            case 0x1E77B0u: goto label_1e77b0;
            case 0x1E77B4u: goto label_1e77b4;
            case 0x1E77B8u: goto label_1e77b8;
            case 0x1E77BCu: goto label_1e77bc;
            case 0x1E77C0u: goto label_1e77c0;
            case 0x1E77C4u: goto label_1e77c4;
            case 0x1E77C8u: goto label_1e77c8;
            case 0x1E77CCu: goto label_1e77cc;
            case 0x1E77D0u: goto label_1e77d0;
            case 0x1E77D4u: goto label_1e77d4;
            case 0x1E77D8u: goto label_1e77d8;
            case 0x1E77DCu: goto label_1e77dc;
            case 0x1E77E0u: goto label_1e77e0;
            case 0x1E77E4u: goto label_1e77e4;
            case 0x1E77E8u: goto label_1e77e8;
            case 0x1E77ECu: goto label_1e77ec;
            case 0x1E77F0u: goto label_1e77f0;
            case 0x1E77F4u: goto label_1e77f4;
            case 0x1E77F8u: goto label_1e77f8;
            case 0x1E77FCu: goto label_1e77fc;
            case 0x1E7800u: goto label_1e7800;
            case 0x1E7804u: goto label_1e7804;
            case 0x1E7808u: goto label_1e7808;
            case 0x1E780Cu: goto label_1e780c;
            case 0x1E7810u: goto label_1e7810;
            case 0x1E7814u: goto label_1e7814;
            case 0x1E7818u: goto label_1e7818;
            case 0x1E781Cu: goto label_1e781c;
            case 0x1E7820u: goto label_1e7820;
            case 0x1E7824u: goto label_1e7824;
            case 0x1E7828u: goto label_1e7828;
            case 0x1E782Cu: goto label_1e782c;
            case 0x1E7830u: goto label_1e7830;
            case 0x1E7834u: goto label_1e7834;
            case 0x1E7838u: goto label_1e7838;
            case 0x1E783Cu: goto label_1e783c;
            case 0x1E7840u: goto label_1e7840;
            case 0x1E7844u: goto label_1e7844;
            case 0x1E7848u: goto label_1e7848;
            case 0x1E784Cu: goto label_1e784c;
            case 0x1E7850u: goto label_1e7850;
            case 0x1E7854u: goto label_1e7854;
            case 0x1E7858u: goto label_1e7858;
            case 0x1E785Cu: goto label_1e785c;
            case 0x1E7860u: goto label_1e7860;
            case 0x1E7864u: goto label_1e7864;
            case 0x1E7868u: goto label_1e7868;
            case 0x1E786Cu: goto label_1e786c;
            case 0x1E7870u: goto label_1e7870;
            case 0x1E7874u: goto label_1e7874;
            case 0x1E7878u: goto label_1e7878;
            case 0x1E787Cu: goto label_1e787c;
            case 0x1E7880u: goto label_1e7880;
            case 0x1E7884u: goto label_1e7884;
            case 0x1E7888u: goto label_1e7888;
            case 0x1E788Cu: goto label_1e788c;
            case 0x1E7890u: goto label_1e7890;
            case 0x1E7894u: goto label_1e7894;
            case 0x1E7898u: goto label_1e7898;
            case 0x1E789Cu: goto label_1e789c;
            case 0x1E78A0u: goto label_1e78a0;
            case 0x1E78A4u: goto label_1e78a4;
            case 0x1E78A8u: goto label_1e78a8;
            case 0x1E78ACu: goto label_1e78ac;
            case 0x1E78B0u: goto label_1e78b0;
            case 0x1E78B4u: goto label_1e78b4;
            case 0x1E78B8u: goto label_1e78b8;
            case 0x1E78BCu: goto label_1e78bc;
            case 0x1E78C0u: goto label_1e78c0;
            case 0x1E78C4u: goto label_1e78c4;
            case 0x1E78C8u: goto label_1e78c8;
            case 0x1E78CCu: goto label_1e78cc;
            case 0x1E78D0u: goto label_1e78d0;
            case 0x1E78D4u: goto label_1e78d4;
            case 0x1E78D8u: goto label_1e78d8;
            case 0x1E78DCu: goto label_1e78dc;
            case 0x1E78E0u: goto label_1e78e0;
            case 0x1E78E4u: goto label_1e78e4;
            case 0x1E78E8u: goto label_1e78e8;
            case 0x1E78ECu: goto label_1e78ec;
            case 0x1E78F0u: goto label_1e78f0;
            case 0x1E78F4u: goto label_1e78f4;
            case 0x1E78F8u: goto label_1e78f8;
            case 0x1E78FCu: goto label_1e78fc;
            case 0x1E7900u: goto label_1e7900;
            case 0x1E7904u: goto label_1e7904;
            case 0x1E7908u: goto label_1e7908;
            case 0x1E790Cu: goto label_1e790c;
            case 0x1E7910u: goto label_1e7910;
            case 0x1E7914u: goto label_1e7914;
            case 0x1E7918u: goto label_1e7918;
            case 0x1E791Cu: goto label_1e791c;
            case 0x1E7920u: goto label_1e7920;
            case 0x1E7924u: goto label_1e7924;
            case 0x1E7928u: goto label_1e7928;
            case 0x1E792Cu: goto label_1e792c;
            case 0x1E7930u: goto label_1e7930;
            case 0x1E7934u: goto label_1e7934;
            case 0x1E7938u: goto label_1e7938;
            case 0x1E793Cu: goto label_1e793c;
            case 0x1E7940u: goto label_1e7940;
            case 0x1E7944u: goto label_1e7944;
            case 0x1E7948u: goto label_1e7948;
            case 0x1E794Cu: goto label_1e794c;
            case 0x1E7950u: goto label_1e7950;
            case 0x1E7954u: goto label_1e7954;
            case 0x1E7958u: goto label_1e7958;
            case 0x1E795Cu: goto label_1e795c;
            case 0x1E7960u: goto label_1e7960;
            case 0x1E7964u: goto label_1e7964;
            case 0x1E7968u: goto label_1e7968;
            case 0x1E796Cu: goto label_1e796c;
            case 0x1E7970u: goto label_1e7970;
            case 0x1E7974u: goto label_1e7974;
            case 0x1E7978u: goto label_1e7978;
            case 0x1E797Cu: goto label_1e797c;
            case 0x1E7980u: goto label_1e7980;
            case 0x1E7984u: goto label_1e7984;
            case 0x1E7988u: goto label_1e7988;
            case 0x1E798Cu: goto label_1e798c;
            case 0x1E7990u: goto label_1e7990;
            case 0x1E7994u: goto label_1e7994;
            case 0x1E7998u: goto label_1e7998;
            case 0x1E799Cu: goto label_1e799c;
            case 0x1E79A0u: goto label_1e79a0;
            case 0x1E79A4u: goto label_1e79a4;
            case 0x1E79A8u: goto label_1e79a8;
            case 0x1E79ACu: goto label_1e79ac;
            case 0x1E79B0u: goto label_1e79b0;
            case 0x1E79B4u: goto label_1e79b4;
            case 0x1E79B8u: goto label_1e79b8;
            case 0x1E79BCu: goto label_1e79bc;
            case 0x1E79C0u: goto label_1e79c0;
            case 0x1E79C4u: goto label_1e79c4;
            case 0x1E79C8u: goto label_1e79c8;
            case 0x1E79CCu: goto label_1e79cc;
            case 0x1E79D0u: goto label_1e79d0;
            case 0x1E79D4u: goto label_1e79d4;
            case 0x1E79D8u: goto label_1e79d8;
            case 0x1E79DCu: goto label_1e79dc;
            case 0x1E79E0u: goto label_1e79e0;
            case 0x1E79E4u: goto label_1e79e4;
            case 0x1E79E8u: goto label_1e79e8;
            case 0x1E79ECu: goto label_1e79ec;
            case 0x1E79F0u: goto label_1e79f0;
            case 0x1E79F4u: goto label_1e79f4;
            case 0x1E79F8u: goto label_1e79f8;
            case 0x1E79FCu: goto label_1e79fc;
            case 0x1E7A00u: goto label_1e7a00;
            case 0x1E7A04u: goto label_1e7a04;
            case 0x1E7A08u: goto label_1e7a08;
            case 0x1E7A0Cu: goto label_1e7a0c;
            case 0x1E7A10u: goto label_1e7a10;
            case 0x1E7A14u: goto label_1e7a14;
            case 0x1E7A18u: goto label_1e7a18;
            case 0x1E7A1Cu: goto label_1e7a1c;
            case 0x1E7A20u: goto label_1e7a20;
            case 0x1E7A24u: goto label_1e7a24;
            case 0x1E7A28u: goto label_1e7a28;
            case 0x1E7A2Cu: goto label_1e7a2c;
            case 0x1E7A30u: goto label_1e7a30;
            case 0x1E7A34u: goto label_1e7a34;
            case 0x1E7A38u: goto label_1e7a38;
            case 0x1E7A3Cu: goto label_1e7a3c;
            case 0x1E7A40u: goto label_1e7a40;
            case 0x1E7A44u: goto label_1e7a44;
            case 0x1E7A48u: goto label_1e7a48;
            case 0x1E7A4Cu: goto label_1e7a4c;
            case 0x1E7A50u: goto label_1e7a50;
            case 0x1E7A54u: goto label_1e7a54;
            case 0x1E7A58u: goto label_1e7a58;
            case 0x1E7A5Cu: goto label_1e7a5c;
            case 0x1E7A60u: goto label_1e7a60;
            case 0x1E7A64u: goto label_1e7a64;
            case 0x1E7A68u: goto label_1e7a68;
            case 0x1E7A6Cu: goto label_1e7a6c;
            case 0x1E7A70u: goto label_1e7a70;
            case 0x1E7A74u: goto label_1e7a74;
            case 0x1E7A78u: goto label_1e7a78;
            case 0x1E7A7Cu: goto label_1e7a7c;
            case 0x1E7A80u: goto label_1e7a80;
            case 0x1E7A84u: goto label_1e7a84;
            case 0x1E7A88u: goto label_1e7a88;
            case 0x1E7A8Cu: goto label_1e7a8c;
            case 0x1E7A90u: goto label_1e7a90;
            case 0x1E7A94u: goto label_1e7a94;
            case 0x1E7A98u: goto label_1e7a98;
            case 0x1E7A9Cu: goto label_1e7a9c;
            case 0x1E7AA0u: goto label_1e7aa0;
            case 0x1E7AA4u: goto label_1e7aa4;
            case 0x1E7AA8u: goto label_1e7aa8;
            case 0x1E7AACu: goto label_1e7aac;
            case 0x1E7AB0u: goto label_1e7ab0;
            case 0x1E7AB4u: goto label_1e7ab4;
            case 0x1E7AB8u: goto label_1e7ab8;
            case 0x1E7ABCu: goto label_1e7abc;
            case 0x1E7AC0u: goto label_1e7ac0;
            case 0x1E7AC4u: goto label_1e7ac4;
            case 0x1E7AC8u: goto label_1e7ac8;
            case 0x1E7ACCu: goto label_1e7acc;
            case 0x1E7AD0u: goto label_1e7ad0;
            case 0x1E7AD4u: goto label_1e7ad4;
            case 0x1E7AD8u: goto label_1e7ad8;
            case 0x1E7ADCu: goto label_1e7adc;
            case 0x1E7AE0u: goto label_1e7ae0;
            case 0x1E7AE4u: goto label_1e7ae4;
            case 0x1E7AE8u: goto label_1e7ae8;
            case 0x1E7AECu: goto label_1e7aec;
            case 0x1E7AF0u: goto label_1e7af0;
            case 0x1E7AF4u: goto label_1e7af4;
            case 0x1E7AF8u: goto label_1e7af8;
            case 0x1E7AFCu: goto label_1e7afc;
            case 0x1E7B00u: goto label_1e7b00;
            case 0x1E7B04u: goto label_1e7b04;
            case 0x1E7B08u: goto label_1e7b08;
            case 0x1E7B0Cu: goto label_1e7b0c;
            case 0x1E7B10u: goto label_1e7b10;
            case 0x1E7B14u: goto label_1e7b14;
            case 0x1E7B18u: goto label_1e7b18;
            case 0x1E7B1Cu: goto label_1e7b1c;
            case 0x1E7B20u: goto label_1e7b20;
            case 0x1E7B24u: goto label_1e7b24;
            case 0x1E7B28u: goto label_1e7b28;
            case 0x1E7B2Cu: goto label_1e7b2c;
            case 0x1E7B30u: goto label_1e7b30;
            case 0x1E7B34u: goto label_1e7b34;
            case 0x1E7B38u: goto label_1e7b38;
            case 0x1E7B3Cu: goto label_1e7b3c;
            case 0x1E7B40u: goto label_1e7b40;
            case 0x1E7B44u: goto label_1e7b44;
            case 0x1E7B48u: goto label_1e7b48;
            case 0x1E7B4Cu: goto label_1e7b4c;
            case 0x1E7B50u: goto label_1e7b50;
            case 0x1E7B54u: goto label_1e7b54;
            case 0x1E7B58u: goto label_1e7b58;
            case 0x1E7B5Cu: goto label_1e7b5c;
            case 0x1E7B60u: goto label_1e7b60;
            case 0x1E7B64u: goto label_1e7b64;
            case 0x1E7B68u: goto label_1e7b68;
            case 0x1E7B6Cu: goto label_1e7b6c;
            case 0x1E7B70u: goto label_1e7b70;
            case 0x1E7B74u: goto label_1e7b74;
            case 0x1E7B78u: goto label_1e7b78;
            case 0x1E7B7Cu: goto label_1e7b7c;
            case 0x1E7B80u: goto label_1e7b80;
            case 0x1E7B84u: goto label_1e7b84;
            case 0x1E7B88u: goto label_1e7b88;
            case 0x1E7B8Cu: goto label_1e7b8c;
            case 0x1E7B90u: goto label_1e7b90;
            case 0x1E7B94u: goto label_1e7b94;
            case 0x1E7B98u: goto label_1e7b98;
            case 0x1E7B9Cu: goto label_1e7b9c;
            case 0x1E7BA0u: goto label_1e7ba0;
            case 0x1E7BA4u: goto label_1e7ba4;
            case 0x1E7BA8u: goto label_1e7ba8;
            case 0x1E7BACu: goto label_1e7bac;
            case 0x1E7BB0u: goto label_1e7bb0;
            case 0x1E7BB4u: goto label_1e7bb4;
            case 0x1E7BB8u: goto label_1e7bb8;
            case 0x1E7BBCu: goto label_1e7bbc;
            case 0x1E7BC0u: goto label_1e7bc0;
            case 0x1E7BC4u: goto label_1e7bc4;
            case 0x1E7BC8u: goto label_1e7bc8;
            case 0x1E7BCCu: goto label_1e7bcc;
            case 0x1E7BD0u: goto label_1e7bd0;
            case 0x1E7BD4u: goto label_1e7bd4;
            case 0x1E7BD8u: goto label_1e7bd8;
            case 0x1E7BDCu: goto label_1e7bdc;
            case 0x1E7BE0u: goto label_1e7be0;
            case 0x1E7BE4u: goto label_1e7be4;
            case 0x1E7BE8u: goto label_1e7be8;
            case 0x1E7BECu: goto label_1e7bec;
            case 0x1E7BF0u: goto label_1e7bf0;
            case 0x1E7BF4u: goto label_1e7bf4;
            case 0x1E7BF8u: goto label_1e7bf8;
            case 0x1E7BFCu: goto label_1e7bfc;
            case 0x1E7C00u: goto label_1e7c00;
            case 0x1E7C04u: goto label_1e7c04;
            case 0x1E7C08u: goto label_1e7c08;
            case 0x1E7C0Cu: goto label_1e7c0c;
            case 0x1E7C10u: goto label_1e7c10;
            case 0x1E7C14u: goto label_1e7c14;
            case 0x1E7C18u: goto label_1e7c18;
            case 0x1E7C1Cu: goto label_1e7c1c;
            case 0x1E7C20u: goto label_1e7c20;
            case 0x1E7C24u: goto label_1e7c24;
            case 0x1E7C28u: goto label_1e7c28;
            case 0x1E7C2Cu: goto label_1e7c2c;
            case 0x1E7C30u: goto label_1e7c30;
            case 0x1E7C34u: goto label_1e7c34;
            case 0x1E7C38u: goto label_1e7c38;
            case 0x1E7C3Cu: goto label_1e7c3c;
            case 0x1E7C40u: goto label_1e7c40;
            case 0x1E7C44u: goto label_1e7c44;
            case 0x1E7C48u: goto label_1e7c48;
            case 0x1E7C4Cu: goto label_1e7c4c;
            case 0x1E7C50u: goto label_1e7c50;
            case 0x1E7C54u: goto label_1e7c54;
            case 0x1E7C58u: goto label_1e7c58;
            case 0x1E7C5Cu: goto label_1e7c5c;
            case 0x1E7C60u: goto label_1e7c60;
            case 0x1E7C64u: goto label_1e7c64;
            case 0x1E7C68u: goto label_1e7c68;
            case 0x1E7C6Cu: goto label_1e7c6c;
            case 0x1E7C70u: goto label_1e7c70;
            case 0x1E7C74u: goto label_1e7c74;
            case 0x1E7C78u: goto label_1e7c78;
            case 0x1E7C7Cu: goto label_1e7c7c;
            case 0x1E7C80u: goto label_1e7c80;
            case 0x1E7C84u: goto label_1e7c84;
            case 0x1E7C88u: goto label_1e7c88;
            case 0x1E7C8Cu: goto label_1e7c8c;
            case 0x1E7C90u: goto label_1e7c90;
            case 0x1E7C94u: goto label_1e7c94;
            case 0x1E7C98u: goto label_1e7c98;
            case 0x1E7C9Cu: goto label_1e7c9c;
            case 0x1E7CA0u: goto label_1e7ca0;
            case 0x1E7CA4u: goto label_1e7ca4;
            case 0x1E7CA8u: goto label_1e7ca8;
            case 0x1E7CACu: goto label_1e7cac;
            case 0x1E7CB0u: goto label_1e7cb0;
            case 0x1E7CB4u: goto label_1e7cb4;
            case 0x1E7CB8u: goto label_1e7cb8;
            case 0x1E7CBCu: goto label_1e7cbc;
            case 0x1E7CC0u: goto label_1e7cc0;
            case 0x1E7CC4u: goto label_1e7cc4;
            case 0x1E7CC8u: goto label_1e7cc8;
            case 0x1E7CCCu: goto label_1e7ccc;
            case 0x1E7CD0u: goto label_1e7cd0;
            case 0x1E7CD4u: goto label_1e7cd4;
            case 0x1E7CD8u: goto label_1e7cd8;
            case 0x1E7CDCu: goto label_1e7cdc;
            case 0x1E7CE0u: goto label_1e7ce0;
            case 0x1E7CE4u: goto label_1e7ce4;
            case 0x1E7CE8u: goto label_1e7ce8;
            case 0x1E7CECu: goto label_1e7cec;
            case 0x1E7CF0u: goto label_1e7cf0;
            case 0x1E7CF4u: goto label_1e7cf4;
            case 0x1E7CF8u: goto label_1e7cf8;
            case 0x1E7CFCu: goto label_1e7cfc;
            case 0x1E7D00u: goto label_1e7d00;
            case 0x1E7D04u: goto label_1e7d04;
            case 0x1E7D08u: goto label_1e7d08;
            case 0x1E7D0Cu: goto label_1e7d0c;
            case 0x1E7D10u: goto label_1e7d10;
            case 0x1E7D14u: goto label_1e7d14;
            case 0x1E7D18u: goto label_1e7d18;
            case 0x1E7D1Cu: goto label_1e7d1c;
            case 0x1E7D20u: goto label_1e7d20;
            case 0x1E7D24u: goto label_1e7d24;
            case 0x1E7D28u: goto label_1e7d28;
            case 0x1E7D2Cu: goto label_1e7d2c;
            case 0x1E7D30u: goto label_1e7d30;
            case 0x1E7D34u: goto label_1e7d34;
            case 0x1E7D38u: goto label_1e7d38;
            case 0x1E7D3Cu: goto label_1e7d3c;
            case 0x1E7D40u: goto label_1e7d40;
            case 0x1E7D44u: goto label_1e7d44;
            case 0x1E7D48u: goto label_1e7d48;
            case 0x1E7D4Cu: goto label_1e7d4c;
            case 0x1E7D50u: goto label_1e7d50;
            case 0x1E7D54u: goto label_1e7d54;
            case 0x1E7D58u: goto label_1e7d58;
            case 0x1E7D5Cu: goto label_1e7d5c;
            case 0x1E7D60u: goto label_1e7d60;
            case 0x1E7D64u: goto label_1e7d64;
            case 0x1E7D68u: goto label_1e7d68;
            case 0x1E7D6Cu: goto label_1e7d6c;
            case 0x1E7D70u: goto label_1e7d70;
            case 0x1E7D74u: goto label_1e7d74;
            case 0x1E7D78u: goto label_1e7d78;
            case 0x1E7D7Cu: goto label_1e7d7c;
            case 0x1E7D80u: goto label_1e7d80;
            case 0x1E7D84u: goto label_1e7d84;
            case 0x1E7D88u: goto label_1e7d88;
            case 0x1E7D8Cu: goto label_1e7d8c;
            case 0x1E7D90u: goto label_1e7d90;
            case 0x1E7D94u: goto label_1e7d94;
            case 0x1E7D98u: goto label_1e7d98;
            case 0x1E7D9Cu: goto label_1e7d9c;
            case 0x1E7DA0u: goto label_1e7da0;
            case 0x1E7DA4u: goto label_1e7da4;
            case 0x1E7DA8u: goto label_1e7da8;
            case 0x1E7DACu: goto label_1e7dac;
            case 0x1E7DB0u: goto label_1e7db0;
            case 0x1E7DB4u: goto label_1e7db4;
            case 0x1E7DB8u: goto label_1e7db8;
            case 0x1E7DBCu: goto label_1e7dbc;
            case 0x1E7DC0u: goto label_1e7dc0;
            case 0x1E7DC4u: goto label_1e7dc4;
            case 0x1E7DC8u: goto label_1e7dc8;
            case 0x1E7DCCu: goto label_1e7dcc;
            case 0x1E7DD0u: goto label_1e7dd0;
            case 0x1E7DD4u: goto label_1e7dd4;
            case 0x1E7DD8u: goto label_1e7dd8;
            case 0x1E7DDCu: goto label_1e7ddc;
            case 0x1E7DE0u: goto label_1e7de0;
            case 0x1E7DE4u: goto label_1e7de4;
            case 0x1E7DE8u: goto label_1e7de8;
            case 0x1E7DECu: goto label_1e7dec;
            case 0x1E7DF0u: goto label_1e7df0;
            case 0x1E7DF4u: goto label_1e7df4;
            case 0x1E7DF8u: goto label_1e7df8;
            case 0x1E7DFCu: goto label_1e7dfc;
            case 0x1E7E00u: goto label_1e7e00;
            case 0x1E7E04u: goto label_1e7e04;
            case 0x1E7E08u: goto label_1e7e08;
            case 0x1E7E0Cu: goto label_1e7e0c;
            case 0x1E7E10u: goto label_1e7e10;
            case 0x1E7E14u: goto label_1e7e14;
            case 0x1E7E18u: goto label_1e7e18;
            case 0x1E7E1Cu: goto label_1e7e1c;
            case 0x1E7E20u: goto label_1e7e20;
            case 0x1E7E24u: goto label_1e7e24;
            case 0x1E7E28u: goto label_1e7e28;
            case 0x1E7E2Cu: goto label_1e7e2c;
            case 0x1E7E30u: goto label_1e7e30;
            case 0x1E7E34u: goto label_1e7e34;
            case 0x1E7E38u: goto label_1e7e38;
            case 0x1E7E3Cu: goto label_1e7e3c;
            case 0x1E7E40u: goto label_1e7e40;
            case 0x1E7E44u: goto label_1e7e44;
            case 0x1E7E48u: goto label_1e7e48;
            case 0x1E7E4Cu: goto label_1e7e4c;
            case 0x1E7E50u: goto label_1e7e50;
            case 0x1E7E54u: goto label_1e7e54;
            case 0x1E7E58u: goto label_1e7e58;
            case 0x1E7E5Cu: goto label_1e7e5c;
            case 0x1E7E60u: goto label_1e7e60;
            case 0x1E7E64u: goto label_1e7e64;
            case 0x1E7E68u: goto label_1e7e68;
            case 0x1E7E6Cu: goto label_1e7e6c;
            case 0x1E7E70u: goto label_1e7e70;
            case 0x1E7E74u: goto label_1e7e74;
            case 0x1E7E78u: goto label_1e7e78;
            case 0x1E7E7Cu: goto label_1e7e7c;
            case 0x1E7E80u: goto label_1e7e80;
            case 0x1E7E84u: goto label_1e7e84;
            case 0x1E7E88u: goto label_1e7e88;
            case 0x1E7E8Cu: goto label_1e7e8c;
            case 0x1E7E90u: goto label_1e7e90;
            case 0x1E7E94u: goto label_1e7e94;
            case 0x1E7E98u: goto label_1e7e98;
            case 0x1E7E9Cu: goto label_1e7e9c;
            case 0x1E7EA0u: goto label_1e7ea0;
            case 0x1E7EA4u: goto label_1e7ea4;
            case 0x1E7EA8u: goto label_1e7ea8;
            case 0x1E7EACu: goto label_1e7eac;
            case 0x1E7EB0u: goto label_1e7eb0;
            case 0x1E7EB4u: goto label_1e7eb4;
            case 0x1E7EB8u: goto label_1e7eb8;
            case 0x1E7EBCu: goto label_1e7ebc;
            case 0x1E7EC0u: goto label_1e7ec0;
            case 0x1E7EC4u: goto label_1e7ec4;
            case 0x1E7EC8u: goto label_1e7ec8;
            case 0x1E7ECCu: goto label_1e7ecc;
            case 0x1E7ED0u: goto label_1e7ed0;
            case 0x1E7ED4u: goto label_1e7ed4;
            case 0x1E7ED8u: goto label_1e7ed8;
            case 0x1E7EDCu: goto label_1e7edc;
            case 0x1E7EE0u: goto label_1e7ee0;
            case 0x1E7EE4u: goto label_1e7ee4;
            case 0x1E7EE8u: goto label_1e7ee8;
            case 0x1E7EECu: goto label_1e7eec;
            case 0x1E7EF0u: goto label_1e7ef0;
            case 0x1E7EF4u: goto label_1e7ef4;
            case 0x1E7EF8u: goto label_1e7ef8;
            case 0x1E7EFCu: goto label_1e7efc;
            case 0x1E7F00u: goto label_1e7f00;
            case 0x1E7F04u: goto label_1e7f04;
            case 0x1E7F08u: goto label_1e7f08;
            case 0x1E7F0Cu: goto label_1e7f0c;
            case 0x1E7F10u: goto label_1e7f10;
            case 0x1E7F14u: goto label_1e7f14;
            case 0x1E7F18u: goto label_1e7f18;
            case 0x1E7F1Cu: goto label_1e7f1c;
            case 0x1E7F20u: goto label_1e7f20;
            case 0x1E7F24u: goto label_1e7f24;
            case 0x1E7F28u: goto label_1e7f28;
            case 0x1E7F2Cu: goto label_1e7f2c;
            case 0x1E7F30u: goto label_1e7f30;
            case 0x1E7F34u: goto label_1e7f34;
            case 0x1E7F38u: goto label_1e7f38;
            case 0x1E7F3Cu: goto label_1e7f3c;
            case 0x1E7F40u: goto label_1e7f40;
            case 0x1E7F44u: goto label_1e7f44;
            case 0x1E7F48u: goto label_1e7f48;
            case 0x1E7F4Cu: goto label_1e7f4c;
            case 0x1E7F50u: goto label_1e7f50;
            case 0x1E7F54u: goto label_1e7f54;
            case 0x1E7F58u: goto label_1e7f58;
            case 0x1E7F5Cu: goto label_1e7f5c;
            case 0x1E7F60u: goto label_1e7f60;
            case 0x1E7F64u: goto label_1e7f64;
            case 0x1E7F68u: goto label_1e7f68;
            case 0x1E7F6Cu: goto label_1e7f6c;
            case 0x1E7F70u: goto label_1e7f70;
            case 0x1E7F74u: goto label_1e7f74;
            case 0x1E7F78u: goto label_1e7f78;
            case 0x1E7F7Cu: goto label_1e7f7c;
            case 0x1E7F80u: goto label_1e7f80;
            case 0x1E7F84u: goto label_1e7f84;
            case 0x1E7F88u: goto label_1e7f88;
            case 0x1E7F8Cu: goto label_1e7f8c;
            case 0x1E7F90u: goto label_1e7f90;
            case 0x1E7F94u: goto label_1e7f94;
            case 0x1E7F98u: goto label_1e7f98;
            case 0x1E7F9Cu: goto label_1e7f9c;
            case 0x1E7FA0u: goto label_1e7fa0;
            case 0x1E7FA4u: goto label_1e7fa4;
            case 0x1E7FA8u: goto label_1e7fa8;
            case 0x1E7FACu: goto label_1e7fac;
            case 0x1E7FB0u: goto label_1e7fb0;
            case 0x1E7FB4u: goto label_1e7fb4;
            case 0x1E7FB8u: goto label_1e7fb8;
            case 0x1E7FBCu: goto label_1e7fbc;
            case 0x1E7FC0u: goto label_1e7fc0;
            case 0x1E7FC4u: goto label_1e7fc4;
            case 0x1E7FC8u: goto label_1e7fc8;
            case 0x1E7FCCu: goto label_1e7fcc;
            case 0x1E7FD0u: goto label_1e7fd0;
            case 0x1E7FD4u: goto label_1e7fd4;
            case 0x1E7FD8u: goto label_1e7fd8;
            case 0x1E7FDCu: goto label_1e7fdc;
            case 0x1E7FE0u: goto label_1e7fe0;
            case 0x1E7FE4u: goto label_1e7fe4;
            case 0x1E7FE8u: goto label_1e7fe8;
            case 0x1E7FECu: goto label_1e7fec;
            case 0x1E7FF0u: goto label_1e7ff0;
            case 0x1E7FF4u: goto label_1e7ff4;
            case 0x1E7FF8u: goto label_1e7ff8;
            case 0x1E7FFCu: goto label_1e7ffc;
            case 0x1E8000u: goto label_1e8000;
            case 0x1E8004u: goto label_1e8004;
            case 0x1E8008u: goto label_1e8008;
            case 0x1E800Cu: goto label_1e800c;
            case 0x1E8010u: goto label_1e8010;
            case 0x1E8014u: goto label_1e8014;
            case 0x1E8018u: goto label_1e8018;
            case 0x1E801Cu: goto label_1e801c;
            case 0x1E8020u: goto label_1e8020;
            case 0x1E8024u: goto label_1e8024;
            case 0x1E8028u: goto label_1e8028;
            case 0x1E802Cu: goto label_1e802c;
            case 0x1E8030u: goto label_1e8030;
            case 0x1E8034u: goto label_1e8034;
            case 0x1E8038u: goto label_1e8038;
            case 0x1E803Cu: goto label_1e803c;
            case 0x1E8040u: goto label_1e8040;
            case 0x1E8044u: goto label_1e8044;
            case 0x1E8048u: goto label_1e8048;
            case 0x1E804Cu: goto label_1e804c;
            case 0x1E8050u: goto label_1e8050;
            case 0x1E8054u: goto label_1e8054;
            case 0x1E8058u: goto label_1e8058;
            case 0x1E805Cu: goto label_1e805c;
            case 0x1E8060u: goto label_1e8060;
            case 0x1E8064u: goto label_1e8064;
            case 0x1E8068u: goto label_1e8068;
            case 0x1E806Cu: goto label_1e806c;
            case 0x1E8070u: goto label_1e8070;
            case 0x1E8074u: goto label_1e8074;
            case 0x1E8078u: goto label_1e8078;
            case 0x1E807Cu: goto label_1e807c;
            case 0x1E8080u: goto label_1e8080;
            case 0x1E8084u: goto label_1e8084;
            case 0x1E8088u: goto label_1e8088;
            case 0x1E808Cu: goto label_1e808c;
            case 0x1E8090u: goto label_1e8090;
            case 0x1E8094u: goto label_1e8094;
            case 0x1E8098u: goto label_1e8098;
            case 0x1E809Cu: goto label_1e809c;
            case 0x1E80A0u: goto label_1e80a0;
            case 0x1E80A4u: goto label_1e80a4;
            case 0x1E80A8u: goto label_1e80a8;
            case 0x1E80ACu: goto label_1e80ac;
            case 0x1E80B0u: goto label_1e80b0;
            case 0x1E80B4u: goto label_1e80b4;
            case 0x1E80B8u: goto label_1e80b8;
            case 0x1E80BCu: goto label_1e80bc;
            case 0x1E80C0u: goto label_1e80c0;
            case 0x1E80C4u: goto label_1e80c4;
            case 0x1E80C8u: goto label_1e80c8;
            case 0x1E80CCu: goto label_1e80cc;
            case 0x1E80D0u: goto label_1e80d0;
            case 0x1E80D4u: goto label_1e80d4;
            case 0x1E80D8u: goto label_1e80d8;
            case 0x1E80DCu: goto label_1e80dc;
            case 0x1E80E0u: goto label_1e80e0;
            case 0x1E80E4u: goto label_1e80e4;
            case 0x1E80E8u: goto label_1e80e8;
            case 0x1E80ECu: goto label_1e80ec;
            case 0x1E80F0u: goto label_1e80f0;
            case 0x1E80F4u: goto label_1e80f4;
            case 0x1E80F8u: goto label_1e80f8;
            case 0x1E80FCu: goto label_1e80fc;
            case 0x1E8100u: goto label_1e8100;
            case 0x1E8104u: goto label_1e8104;
            case 0x1E8108u: goto label_1e8108;
            case 0x1E810Cu: goto label_1e810c;
            case 0x1E8110u: goto label_1e8110;
            case 0x1E8114u: goto label_1e8114;
            case 0x1E8118u: goto label_1e8118;
            case 0x1E811Cu: goto label_1e811c;
            case 0x1E8120u: goto label_1e8120;
            case 0x1E8124u: goto label_1e8124;
            case 0x1E8128u: goto label_1e8128;
            case 0x1E812Cu: goto label_1e812c;
            case 0x1E8130u: goto label_1e8130;
            case 0x1E8134u: goto label_1e8134;
            case 0x1E8138u: goto label_1e8138;
            case 0x1E813Cu: goto label_1e813c;
            case 0x1E8140u: goto label_1e8140;
            case 0x1E8144u: goto label_1e8144;
            case 0x1E8148u: goto label_1e8148;
            case 0x1E814Cu: goto label_1e814c;
            case 0x1E8150u: goto label_1e8150;
            case 0x1E8154u: goto label_1e8154;
            case 0x1E8158u: goto label_1e8158;
            case 0x1E815Cu: goto label_1e815c;
            case 0x1E8160u: goto label_1e8160;
            case 0x1E8164u: goto label_1e8164;
            case 0x1E8168u: goto label_1e8168;
            case 0x1E816Cu: goto label_1e816c;
            case 0x1E8170u: goto label_1e8170;
            case 0x1E8174u: goto label_1e8174;
            case 0x1E8178u: goto label_1e8178;
            case 0x1E817Cu: goto label_1e817c;
            case 0x1E8180u: goto label_1e8180;
            case 0x1E8184u: goto label_1e8184;
            case 0x1E8188u: goto label_1e8188;
            case 0x1E818Cu: goto label_1e818c;
            case 0x1E8190u: goto label_1e8190;
            case 0x1E8194u: goto label_1e8194;
            case 0x1E8198u: goto label_1e8198;
            case 0x1E819Cu: goto label_1e819c;
            case 0x1E81A0u: goto label_1e81a0;
            case 0x1E81A4u: goto label_1e81a4;
            case 0x1E81A8u: goto label_1e81a8;
            case 0x1E81ACu: goto label_1e81ac;
            case 0x1E81B0u: goto label_1e81b0;
            case 0x1E81B4u: goto label_1e81b4;
            case 0x1E81B8u: goto label_1e81b8;
            case 0x1E81BCu: goto label_1e81bc;
            case 0x1E81C0u: goto label_1e81c0;
            case 0x1E81C4u: goto label_1e81c4;
            case 0x1E81C8u: goto label_1e81c8;
            case 0x1E81CCu: goto label_1e81cc;
            case 0x1E81D0u: goto label_1e81d0;
            case 0x1E81D4u: goto label_1e81d4;
            case 0x1E81D8u: goto label_1e81d8;
            case 0x1E81DCu: goto label_1e81dc;
            case 0x1E81E0u: goto label_1e81e0;
            case 0x1E81E4u: goto label_1e81e4;
            case 0x1E81E8u: goto label_1e81e8;
            case 0x1E81ECu: goto label_1e81ec;
            case 0x1E81F0u: goto label_1e81f0;
            case 0x1E81F4u: goto label_1e81f4;
            case 0x1E81F8u: goto label_1e81f8;
            case 0x1E81FCu: goto label_1e81fc;
            case 0x1E8200u: goto label_1e8200;
            case 0x1E8204u: goto label_1e8204;
            case 0x1E8208u: goto label_1e8208;
            case 0x1E820Cu: goto label_1e820c;
            case 0x1E8210u: goto label_1e8210;
            case 0x1E8214u: goto label_1e8214;
            case 0x1E8218u: goto label_1e8218;
            case 0x1E821Cu: goto label_1e821c;
            case 0x1E8220u: goto label_1e8220;
            case 0x1E8224u: goto label_1e8224;
            case 0x1E8228u: goto label_1e8228;
            case 0x1E822Cu: goto label_1e822c;
            case 0x1E8230u: goto label_1e8230;
            case 0x1E8234u: goto label_1e8234;
            case 0x1E8238u: goto label_1e8238;
            case 0x1E823Cu: goto label_1e823c;
            case 0x1E8240u: goto label_1e8240;
            case 0x1E8244u: goto label_1e8244;
            case 0x1E8248u: goto label_1e8248;
            case 0x1E824Cu: goto label_1e824c;
            case 0x1E8250u: goto label_1e8250;
            case 0x1E8254u: goto label_1e8254;
            case 0x1E8258u: goto label_1e8258;
            case 0x1E825Cu: goto label_1e825c;
            case 0x1E8260u: goto label_1e8260;
            case 0x1E8264u: goto label_1e8264;
            case 0x1E8268u: goto label_1e8268;
            case 0x1E826Cu: goto label_1e826c;
            case 0x1E8270u: goto label_1e8270;
            case 0x1E8274u: goto label_1e8274;
            case 0x1E8278u: goto label_1e8278;
            case 0x1E827Cu: goto label_1e827c;
            case 0x1E8280u: goto label_1e8280;
            case 0x1E8284u: goto label_1e8284;
            case 0x1E8288u: goto label_1e8288;
            case 0x1E828Cu: goto label_1e828c;
            case 0x1E8290u: goto label_1e8290;
            case 0x1E8294u: goto label_1e8294;
            case 0x1E8298u: goto label_1e8298;
            case 0x1E829Cu: goto label_1e829c;
            case 0x1E82A0u: goto label_1e82a0;
            case 0x1E82A4u: goto label_1e82a4;
            case 0x1E82A8u: goto label_1e82a8;
            case 0x1E82ACu: goto label_1e82ac;
            case 0x1E82B0u: goto label_1e82b0;
            case 0x1E82B4u: goto label_1e82b4;
            case 0x1E82B8u: goto label_1e82b8;
            case 0x1E82BCu: goto label_1e82bc;
            case 0x1E82C0u: goto label_1e82c0;
            case 0x1E82C4u: goto label_1e82c4;
            case 0x1E82C8u: goto label_1e82c8;
            case 0x1E82CCu: goto label_1e82cc;
            case 0x1E82D0u: goto label_1e82d0;
            case 0x1E82D4u: goto label_1e82d4;
            case 0x1E82D8u: goto label_1e82d8;
            case 0x1E82DCu: goto label_1e82dc;
            case 0x1E82E0u: goto label_1e82e0;
            case 0x1E82E4u: goto label_1e82e4;
            case 0x1E82E8u: goto label_1e82e8;
            case 0x1E82ECu: goto label_1e82ec;
            case 0x1E82F0u: goto label_1e82f0;
            case 0x1E82F4u: goto label_1e82f4;
            case 0x1E82F8u: goto label_1e82f8;
            case 0x1E82FCu: goto label_1e82fc;
            case 0x1E8300u: goto label_1e8300;
            case 0x1E8304u: goto label_1e8304;
            case 0x1E8308u: goto label_1e8308;
            case 0x1E830Cu: goto label_1e830c;
            case 0x1E8310u: goto label_1e8310;
            case 0x1E8314u: goto label_1e8314;
            case 0x1E8318u: goto label_1e8318;
            case 0x1E831Cu: goto label_1e831c;
            case 0x1E8320u: goto label_1e8320;
            case 0x1E8324u: goto label_1e8324;
            case 0x1E8328u: goto label_1e8328;
            case 0x1E832Cu: goto label_1e832c;
            case 0x1E8330u: goto label_1e8330;
            case 0x1E8334u: goto label_1e8334;
            case 0x1E8338u: goto label_1e8338;
            case 0x1E833Cu: goto label_1e833c;
            case 0x1E8340u: goto label_1e8340;
            case 0x1E8344u: goto label_1e8344;
            case 0x1E8348u: goto label_1e8348;
            case 0x1E834Cu: goto label_1e834c;
            case 0x1E8350u: goto label_1e8350;
            case 0x1E8354u: goto label_1e8354;
            case 0x1E8358u: goto label_1e8358;
            case 0x1E835Cu: goto label_1e835c;
            case 0x1E8360u: goto label_1e8360;
            case 0x1E8364u: goto label_1e8364;
            case 0x1E8368u: goto label_1e8368;
            case 0x1E836Cu: goto label_1e836c;
            case 0x1E8370u: goto label_1e8370;
            case 0x1E8374u: goto label_1e8374;
            case 0x1E8378u: goto label_1e8378;
            case 0x1E837Cu: goto label_1e837c;
            case 0x1E8380u: goto label_1e8380;
            case 0x1E8384u: goto label_1e8384;
            case 0x1E8388u: goto label_1e8388;
            case 0x1E838Cu: goto label_1e838c;
            case 0x1E8390u: goto label_1e8390;
            case 0x1E8394u: goto label_1e8394;
            case 0x1E8398u: goto label_1e8398;
            case 0x1E839Cu: goto label_1e839c;
            case 0x1E83A0u: goto label_1e83a0;
            case 0x1E83A4u: goto label_1e83a4;
            case 0x1E83A8u: goto label_1e83a8;
            case 0x1E83ACu: goto label_1e83ac;
            case 0x1E83B0u: goto label_1e83b0;
            case 0x1E83B4u: goto label_1e83b4;
            case 0x1E83B8u: goto label_1e83b8;
            case 0x1E83BCu: goto label_1e83bc;
            case 0x1E83C0u: goto label_1e83c0;
            case 0x1E83C4u: goto label_1e83c4;
            case 0x1E83C8u: goto label_1e83c8;
            case 0x1E83CCu: goto label_1e83cc;
            case 0x1E83D0u: goto label_1e83d0;
            case 0x1E83D4u: goto label_1e83d4;
            case 0x1E83D8u: goto label_1e83d8;
            case 0x1E83DCu: goto label_1e83dc;
            case 0x1E83E0u: goto label_1e83e0;
            case 0x1E83E4u: goto label_1e83e4;
            case 0x1E83E8u: goto label_1e83e8;
            case 0x1E83ECu: goto label_1e83ec;
            case 0x1E83F0u: goto label_1e83f0;
            case 0x1E83F4u: goto label_1e83f4;
            case 0x1E83F8u: goto label_1e83f8;
            case 0x1E83FCu: goto label_1e83fc;
            case 0x1E8400u: goto label_1e8400;
            case 0x1E8404u: goto label_1e8404;
            case 0x1E8408u: goto label_1e8408;
            case 0x1E840Cu: goto label_1e840c;
            case 0x1E8410u: goto label_1e8410;
            case 0x1E8414u: goto label_1e8414;
            case 0x1E8418u: goto label_1e8418;
            case 0x1E841Cu: goto label_1e841c;
            case 0x1E8420u: goto label_1e8420;
            case 0x1E8424u: goto label_1e8424;
            case 0x1E8428u: goto label_1e8428;
            case 0x1E842Cu: goto label_1e842c;
            case 0x1E8430u: goto label_1e8430;
            case 0x1E8434u: goto label_1e8434;
            case 0x1E8438u: goto label_1e8438;
            case 0x1E843Cu: goto label_1e843c;
            case 0x1E8440u: goto label_1e8440;
            case 0x1E8444u: goto label_1e8444;
            case 0x1E8448u: goto label_1e8448;
            case 0x1E844Cu: goto label_1e844c;
            case 0x1E8450u: goto label_1e8450;
            case 0x1E8454u: goto label_1e8454;
            case 0x1E8458u: goto label_1e8458;
            case 0x1E845Cu: goto label_1e845c;
            case 0x1E8460u: goto label_1e8460;
            case 0x1E8464u: goto label_1e8464;
            case 0x1E8468u: goto label_1e8468;
            case 0x1E846Cu: goto label_1e846c;
            case 0x1E8470u: goto label_1e8470;
            case 0x1E8474u: goto label_1e8474;
            case 0x1E8478u: goto label_1e8478;
            case 0x1E847Cu: goto label_1e847c;
            case 0x1E8480u: goto label_1e8480;
            case 0x1E8484u: goto label_1e8484;
            case 0x1E8488u: goto label_1e8488;
            case 0x1E848Cu: goto label_1e848c;
            case 0x1E8490u: goto label_1e8490;
            case 0x1E8494u: goto label_1e8494;
            case 0x1E8498u: goto label_1e8498;
            case 0x1E849Cu: goto label_1e849c;
            case 0x1E84A0u: goto label_1e84a0;
            case 0x1E84A4u: goto label_1e84a4;
            case 0x1E84A8u: goto label_1e84a8;
            case 0x1E84ACu: goto label_1e84ac;
            case 0x1E84B0u: goto label_1e84b0;
            case 0x1E84B4u: goto label_1e84b4;
            case 0x1E84B8u: goto label_1e84b8;
            case 0x1E84BCu: goto label_1e84bc;
            case 0x1E84C0u: goto label_1e84c0;
            case 0x1E84C4u: goto label_1e84c4;
            case 0x1E84C8u: goto label_1e84c8;
            case 0x1E84CCu: goto label_1e84cc;
            case 0x1E84D0u: goto label_1e84d0;
            case 0x1E84D4u: goto label_1e84d4;
            case 0x1E84D8u: goto label_1e84d8;
            case 0x1E84DCu: goto label_1e84dc;
            case 0x1E84E0u: goto label_1e84e0;
            case 0x1E84E4u: goto label_1e84e4;
            case 0x1E84E8u: goto label_1e84e8;
            case 0x1E84ECu: goto label_1e84ec;
            case 0x1E84F0u: goto label_1e84f0;
            case 0x1E84F4u: goto label_1e84f4;
            case 0x1E84F8u: goto label_1e84f8;
            case 0x1E84FCu: goto label_1e84fc;
            case 0x1E8500u: goto label_1e8500;
            case 0x1E8504u: goto label_1e8504;
            case 0x1E8508u: goto label_1e8508;
            case 0x1E850Cu: goto label_1e850c;
            case 0x1E8510u: goto label_1e8510;
            case 0x1E8514u: goto label_1e8514;
            case 0x1E8518u: goto label_1e8518;
            case 0x1E851Cu: goto label_1e851c;
            case 0x1E8520u: goto label_1e8520;
            case 0x1E8524u: goto label_1e8524;
            case 0x1E8528u: goto label_1e8528;
            case 0x1E852Cu: goto label_1e852c;
            case 0x1E8530u: goto label_1e8530;
            case 0x1E8534u: goto label_1e8534;
            case 0x1E8538u: goto label_1e8538;
            case 0x1E853Cu: goto label_1e853c;
            case 0x1E8540u: goto label_1e8540;
            case 0x1E8544u: goto label_1e8544;
            case 0x1E8548u: goto label_1e8548;
            case 0x1E854Cu: goto label_1e854c;
            case 0x1E8550u: goto label_1e8550;
            case 0x1E8554u: goto label_1e8554;
            case 0x1E8558u: goto label_1e8558;
            case 0x1E855Cu: goto label_1e855c;
            case 0x1E8560u: goto label_1e8560;
            case 0x1E8564u: goto label_1e8564;
            case 0x1E8568u: goto label_1e8568;
            case 0x1E856Cu: goto label_1e856c;
            case 0x1E8570u: goto label_1e8570;
            case 0x1E8574u: goto label_1e8574;
            case 0x1E8578u: goto label_1e8578;
            case 0x1E857Cu: goto label_1e857c;
            case 0x1E8580u: goto label_1e8580;
            case 0x1E8584u: goto label_1e8584;
            case 0x1E8588u: goto label_1e8588;
            case 0x1E858Cu: goto label_1e858c;
            case 0x1E8590u: goto label_1e8590;
            case 0x1E8594u: goto label_1e8594;
            case 0x1E8598u: goto label_1e8598;
            case 0x1E859Cu: goto label_1e859c;
            case 0x1E85A0u: goto label_1e85a0;
            case 0x1E85A4u: goto label_1e85a4;
            case 0x1E85A8u: goto label_1e85a8;
            case 0x1E85ACu: goto label_1e85ac;
            case 0x1E85B0u: goto label_1e85b0;
            case 0x1E85B4u: goto label_1e85b4;
            case 0x1E85B8u: goto label_1e85b8;
            case 0x1E85BCu: goto label_1e85bc;
            case 0x1E85C0u: goto label_1e85c0;
            case 0x1E85C4u: goto label_1e85c4;
            case 0x1E85C8u: goto label_1e85c8;
            case 0x1E85CCu: goto label_1e85cc;
            case 0x1E85D0u: goto label_1e85d0;
            case 0x1E85D4u: goto label_1e85d4;
            case 0x1E85D8u: goto label_1e85d8;
            case 0x1E85DCu: goto label_1e85dc;
            case 0x1E85E0u: goto label_1e85e0;
            case 0x1E85E4u: goto label_1e85e4;
            case 0x1E85E8u: goto label_1e85e8;
            case 0x1E85ECu: goto label_1e85ec;
            case 0x1E85F0u: goto label_1e85f0;
            case 0x1E85F4u: goto label_1e85f4;
            case 0x1E85F8u: goto label_1e85f8;
            case 0x1E85FCu: goto label_1e85fc;
            case 0x1E8600u: goto label_1e8600;
            case 0x1E8604u: goto label_1e8604;
            case 0x1E8608u: goto label_1e8608;
            case 0x1E860Cu: goto label_1e860c;
            case 0x1E8610u: goto label_1e8610;
            case 0x1E8614u: goto label_1e8614;
            case 0x1E8618u: goto label_1e8618;
            case 0x1E861Cu: goto label_1e861c;
            case 0x1E8620u: goto label_1e8620;
            case 0x1E8624u: goto label_1e8624;
            case 0x1E8628u: goto label_1e8628;
            case 0x1E862Cu: goto label_1e862c;
            case 0x1E8630u: goto label_1e8630;
            case 0x1E8634u: goto label_1e8634;
            case 0x1E8638u: goto label_1e8638;
            case 0x1E863Cu: goto label_1e863c;
            case 0x1E8640u: goto label_1e8640;
            case 0x1E8644u: goto label_1e8644;
            case 0x1E8648u: goto label_1e8648;
            case 0x1E864Cu: goto label_1e864c;
            case 0x1E8650u: goto label_1e8650;
            case 0x1E8654u: goto label_1e8654;
            case 0x1E8658u: goto label_1e8658;
            case 0x1E865Cu: goto label_1e865c;
            case 0x1E8660u: goto label_1e8660;
            case 0x1E8664u: goto label_1e8664;
            case 0x1E8668u: goto label_1e8668;
            case 0x1E866Cu: goto label_1e866c;
            case 0x1E8670u: goto label_1e8670;
            case 0x1E8674u: goto label_1e8674;
            case 0x1E8678u: goto label_1e8678;
            case 0x1E867Cu: goto label_1e867c;
            case 0x1E8680u: goto label_1e8680;
            case 0x1E8684u: goto label_1e8684;
            case 0x1E8688u: goto label_1e8688;
            case 0x1E868Cu: goto label_1e868c;
            case 0x1E8690u: goto label_1e8690;
            case 0x1E8694u: goto label_1e8694;
            case 0x1E8698u: goto label_1e8698;
            case 0x1E869Cu: goto label_1e869c;
            case 0x1E86A0u: goto label_1e86a0;
            case 0x1E86A4u: goto label_1e86a4;
            case 0x1E86A8u: goto label_1e86a8;
            case 0x1E86ACu: goto label_1e86ac;
            case 0x1E86B0u: goto label_1e86b0;
            case 0x1E86B4u: goto label_1e86b4;
            case 0x1E86B8u: goto label_1e86b8;
            case 0x1E86BCu: goto label_1e86bc;
            case 0x1E86C0u: goto label_1e86c0;
            case 0x1E86C4u: goto label_1e86c4;
            case 0x1E86C8u: goto label_1e86c8;
            case 0x1E86CCu: goto label_1e86cc;
            case 0x1E86D0u: goto label_1e86d0;
            case 0x1E86D4u: goto label_1e86d4;
            case 0x1E86D8u: goto label_1e86d8;
            case 0x1E86DCu: goto label_1e86dc;
            case 0x1E86E0u: goto label_1e86e0;
            case 0x1E86E4u: goto label_1e86e4;
            case 0x1E86E8u: goto label_1e86e8;
            case 0x1E86ECu: goto label_1e86ec;
            case 0x1E86F0u: goto label_1e86f0;
            case 0x1E86F4u: goto label_1e86f4;
            case 0x1E86F8u: goto label_1e86f8;
            case 0x1E86FCu: goto label_1e86fc;
            case 0x1E8700u: goto label_1e8700;
            case 0x1E8704u: goto label_1e8704;
            case 0x1E8708u: goto label_1e8708;
            case 0x1E870Cu: goto label_1e870c;
            case 0x1E8710u: goto label_1e8710;
            case 0x1E8714u: goto label_1e8714;
            case 0x1E8718u: goto label_1e8718;
            case 0x1E871Cu: goto label_1e871c;
            case 0x1E8720u: goto label_1e8720;
            case 0x1E8724u: goto label_1e8724;
            case 0x1E8728u: goto label_1e8728;
            case 0x1E872Cu: goto label_1e872c;
            case 0x1E8730u: goto label_1e8730;
            case 0x1E8734u: goto label_1e8734;
            case 0x1E8738u: goto label_1e8738;
            case 0x1E873Cu: goto label_1e873c;
            case 0x1E8740u: goto label_1e8740;
            case 0x1E8744u: goto label_1e8744;
            case 0x1E8748u: goto label_1e8748;
            case 0x1E874Cu: goto label_1e874c;
            case 0x1E8750u: goto label_1e8750;
            case 0x1E8754u: goto label_1e8754;
            case 0x1E8758u: goto label_1e8758;
            case 0x1E875Cu: goto label_1e875c;
            case 0x1E8760u: goto label_1e8760;
            case 0x1E8764u: goto label_1e8764;
            case 0x1E8768u: goto label_1e8768;
            case 0x1E876Cu: goto label_1e876c;
            case 0x1E8770u: goto label_1e8770;
            case 0x1E8774u: goto label_1e8774;
            case 0x1E8778u: goto label_1e8778;
            case 0x1E877Cu: goto label_1e877c;
            case 0x1E8780u: goto label_1e8780;
            case 0x1E8784u: goto label_1e8784;
            case 0x1E8788u: goto label_1e8788;
            case 0x1E878Cu: goto label_1e878c;
            case 0x1E8790u: goto label_1e8790;
            case 0x1E8794u: goto label_1e8794;
            case 0x1E8798u: goto label_1e8798;
            case 0x1E879Cu: goto label_1e879c;
            case 0x1E87A0u: goto label_1e87a0;
            case 0x1E87A4u: goto label_1e87a4;
            case 0x1E87A8u: goto label_1e87a8;
            case 0x1E87ACu: goto label_1e87ac;
            case 0x1E87B0u: goto label_1e87b0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1e87ac:
    ctx->pc = 0x1E87B4u;
}
