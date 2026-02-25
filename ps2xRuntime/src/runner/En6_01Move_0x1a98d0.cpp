#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En6_01Move
// Address: 0x1a98d0 - 0x1aa078
void En6_01Move_0x1a98d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En6_01Move_0x1a98d0");
#endif

    ctx->pc = 0x1a98d0u;

label_1a98d0:
    // 0x1a98d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a98d4:
    // 0x1a98d4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a98d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a98d8:
    // 0x1a98d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a98dc:
    // 0x1a98dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a98dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a98e0:
    // 0x1a98e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a98e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a98e4:
    // 0x1a98e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a98e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a98e8:
    // 0x1a98e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a98e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a98ec:
    // 0x1a98ec: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1a98ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a98f0:
    // 0x1a98f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a98f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a98f4:
    // 0x1a98f4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a98f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a98f8:
    // 0x1a98f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a98f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a98fc:
    // 0x1a98fc: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1a98fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1a9900:
    // 0x1a9900: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9904:
    // 0x1a9904: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1a9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9908:
    // 0x1a9908: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1a9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a990c:
    // 0x1a990c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a990cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a9910:
    // 0x1a9910: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1a9910u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1a9914:
    // 0x1a9914: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9918:
    // 0x1a9918: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1a9918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a991c:
    // 0x1a991c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9920:
    // 0x1a9920: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a9920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a9924:
    // 0x1a9924: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1a9924u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1a9928:
    // 0x1a9928: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a992c:
    // 0x1a992c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1a992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9930:
    // 0x1a9930: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1a9930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9934:
    // 0x1a9934: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a9934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a9938:
    // 0x1a9938: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1a9938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1a993c:
    // 0x1a993c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9940:
    // 0x1a9940: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1a9940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a9944:
    // 0x1a9944: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1a9944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9948:
    // 0x1a9948: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1a9948u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1a994c:
    // 0x1a994c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1a994cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_1a9950:
    // 0x1a9950: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9954:
    // 0x1a9954: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1a9954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9958:
    // 0x1a9958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a995c:
    // 0x1a995c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a9960:
    if (ctx->pc == 0x1A9960u) {
        ctx->pc = 0x1A9960u;
            // 0x1a9960: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1A9964u;
        goto label_1a9964;
    }
    ctx->pc = 0x1A995Cu;
    {
        const bool branch_taken_0x1a995c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A995Cu;
            // 0x1a9960: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a995c) {
            ctx->pc = 0x1A9980u;
            goto label_1a9980;
        }
    }
    ctx->pc = 0x1A9964u;
label_1a9964:
    // 0x1a9964: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a9964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a9968:
    // 0x1a9968: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9968u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a996c:
    // 0x1a996c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a996cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9970:
    // 0x1a9970: 0x0  nop
    ctx->pc = 0x1a9970u;
    // NOP
label_1a9974:
    // 0x1a9974: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a9974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a9978:
    // 0x1a9978: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a9978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1a997c:
    // 0x1a997c: 0x0  nop
    ctx->pc = 0x1a997cu;
    // NOP
label_1a9980:
    // 0x1a9980: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9984:
    // 0x1a9984: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a9988:
    // 0x1a9988: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9988u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a998c:
    // 0x1a998c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a998cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9990:
    // 0x1a9990: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1a9990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9994:
    // 0x1a9994: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9994u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9998:
    // 0x1a9998: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a999c:
    if (ctx->pc == 0x1A999Cu) {
        ctx->pc = 0x1A999Cu;
            // 0x1a999c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1A99A0u;
        goto label_1a99a0;
    }
    ctx->pc = 0x1A9998u;
    {
        const bool branch_taken_0x1a9998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9998u;
            // 0x1a999c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9998) {
            ctx->pc = 0x1A99B8u;
            goto label_1a99b8;
        }
    }
    ctx->pc = 0x1A99A0u;
label_1a99a0:
    // 0x1a99a0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a99a4:
    // 0x1a99a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a99a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a99a8:
    // 0x1a99a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a99a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a99ac:
    // 0x1a99ac: 0x0  nop
    ctx->pc = 0x1a99acu;
    // NOP
label_1a99b0:
    // 0x1a99b0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a99b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a99b4:
    // 0x1a99b4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a99b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a99b8:
    // 0x1a99b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a99b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a99bc:
    // 0x1a99bc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a99c0:
    // 0x1a99c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a99c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a99c4:
    // 0x1a99c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a99c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a99c8:
    // 0x1a99c8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a99c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a99cc:
    // 0x1a99cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a99ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a99d0:
    // 0x1a99d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a99d4:
    if (ctx->pc == 0x1A99D4u) {
        ctx->pc = 0x1A99D4u;
            // 0x1a99d4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A99D8u;
        goto label_1a99d8;
    }
    ctx->pc = 0x1A99D0u;
    {
        const bool branch_taken_0x1a99d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A99D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A99D0u;
            // 0x1a99d4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99d0) {
            ctx->pc = 0x1A99F0u;
            goto label_1a99f0;
        }
    }
    ctx->pc = 0x1A99D8u;
label_1a99d8:
    // 0x1a99d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a99d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a99dc:
    // 0x1a99dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a99dcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a99e0:
    // 0x1a99e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a99e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a99e4:
    // 0x1a99e4: 0x0  nop
    ctx->pc = 0x1a99e4u;
    // NOP
label_1a99e8:
    // 0x1a99e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a99e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a99ec:
    // 0x1a99ec: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a99ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a99f0:
    // 0x1a99f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a99f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a99f4:
    // 0x1a99f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a99f8:
    // 0x1a99f8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a99f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a99fc:
    // 0x1a99fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a99fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a00:
    // 0x1a9a00: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1a9a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9a04:
    // 0x1a9a04: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9a04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9a08:
    // 0x1a9a08: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a9a0c:
    if (ctx->pc == 0x1A9A0Cu) {
        ctx->pc = 0x1A9A0Cu;
            // 0x1a9a0c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1A9A10u;
        goto label_1a9a10;
    }
    ctx->pc = 0x1A9A08u;
    {
        const bool branch_taken_0x1a9a08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A08u;
            // 0x1a9a0c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a08) {
            ctx->pc = 0x1A9A28u;
            goto label_1a9a28;
        }
    }
    ctx->pc = 0x1A9A10u;
label_1a9a10:
    // 0x1a9a10: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a9a14:
    // 0x1a9a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9a14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a9a18:
    // 0x1a9a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a1c:
    // 0x1a9a1c: 0x0  nop
    ctx->pc = 0x1a9a1cu;
    // NOP
label_1a9a20:
    // 0x1a9a20: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9a20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a9a24:
    // 0x1a9a24: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a9a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a9a28:
    // 0x1a9a28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9a2c:
    // 0x1a9a2c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1a9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1a9a30:
    // 0x1a9a30: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9a30u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a9a34:
    // 0x1a9a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a38:
    // 0x1a9a38: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a9a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9a3c:
    // 0x1a9a3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9a40:
    // 0x1a9a40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a9a44:
    if (ctx->pc == 0x1A9A44u) {
        ctx->pc = 0x1A9A44u;
            // 0x1a9a44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A9A48u;
        goto label_1a9a48;
    }
    ctx->pc = 0x1A9A40u;
    {
        const bool branch_taken_0x1a9a40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A40u;
            // 0x1a9a44: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a40) {
            ctx->pc = 0x1A9A60u;
            goto label_1a9a60;
        }
    }
    ctx->pc = 0x1A9A48u;
label_1a9a48:
    // 0x1a9a48: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a9a4c:
    // 0x1a9a4c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9a4cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a9a50:
    // 0x1a9a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a54:
    // 0x1a9a54: 0x0  nop
    ctx->pc = 0x1a9a54u;
    // NOP
label_1a9a58:
    // 0x1a9a58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a9a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a9a5c:
    // 0x1a9a5c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a9a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a9a60:
    // 0x1a9a60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9a64:
    // 0x1a9a64: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1a9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1a9a68:
    // 0x1a9a68: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9a68u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a9a6c:
    // 0x1a9a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a70:
    // 0x1a9a70: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1a9a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9a74:
    // 0x1a9a74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9a74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9a78:
    // 0x1a9a78: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1a9a7c:
    if (ctx->pc == 0x1A9A7Cu) {
        ctx->pc = 0x1A9A7Cu;
            // 0x1a9a7c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x1A9A80u;
        goto label_1a9a80;
    }
    ctx->pc = 0x1A9A78u;
    {
        const bool branch_taken_0x1a9a78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9A78u;
            // 0x1a9a7c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9a78) {
            ctx->pc = 0x1A9A98u;
            goto label_1a9a98;
        }
    }
    ctx->pc = 0x1A9A80u;
label_1a9a80:
    // 0x1a9a80: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1a9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1a9a84:
    // 0x1a9a84: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1a9a84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1a9a88:
    // 0x1a9a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9a8c:
    // 0x1a9a8c: 0x0  nop
    ctx->pc = 0x1a9a8cu;
    // NOP
label_1a9a90:
    // 0x1a9a90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a9a94:
    // 0x1a9a94: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1a9a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1a9a98:
    // 0x1a9a98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9a9c:
    // 0x1a9a9c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x1a9a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_1a9aa0:
    // 0x1a9aa0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1a9aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9aa4:
    // 0x1a9aa4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1a9aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1a9aa8:
    // 0x1a9aa8: 0xc06a820  jal         func_1AA080
label_1a9aac:
    if (ctx->pc == 0x1A9AACu) {
        ctx->pc = 0x1A9AACu;
            // 0x1a9aac: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x1A9AB0u;
        goto label_1a9ab0;
    }
    ctx->pc = 0x1A9AA8u;
    SET_GPR_U32(ctx, 31, 0x1A9AB0u);
    ctx->pc = 0x1A9AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9AA8u;
            // 0x1a9aac: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA080u;
    if (runtime->hasFunction(0x1AA080u)) {
        auto targetFn = runtime->lookupFunction(0x1AA080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AB0u; }
        if (ctx->pc != 0x1A9AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1aa080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9AB0u; }
        if (ctx->pc != 0x1A9AB0u) { return; }
    }
    ctx->pc = 0x1A9AB0u;
label_1a9ab0:
    // 0x1a9ab0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9ab4:
    // 0x1a9ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9ab8:
    // 0x1a9ab8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1a9ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_1a9abc:
    // 0x1a9abc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1a9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9ac0:
    // 0x1a9ac0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1a9ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_1a9ac4:
    // 0x1a9ac4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1a9ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a9ac8:
    // 0x1a9ac8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1a9acc:
    if (ctx->pc == 0x1A9ACCu) {
        ctx->pc = 0x1A9AD0u;
        goto label_1a9ad0;
    }
    ctx->pc = 0x1A9AC8u;
    {
        const bool branch_taken_0x1a9ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a9ac8) {
            ctx->pc = 0x1A9AE0u;
            goto label_1a9ae0;
        }
    }
    ctx->pc = 0x1A9AD0u;
label_1a9ad0:
    // 0x1a9ad0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1a9ad4:
    if (ctx->pc == 0x1A9AD4u) {
        ctx->pc = 0x1A9AD8u;
        goto label_1a9ad8;
    }
    ctx->pc = 0x1A9AD0u;
    {
        const bool branch_taken_0x1a9ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ad0) {
            ctx->pc = 0x1A9AE0u;
            goto label_1a9ae0;
        }
    }
    ctx->pc = 0x1A9AD8u;
label_1a9ad8:
    // 0x1a9ad8: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1a9adc:
    if (ctx->pc == 0x1A9ADCu) {
        ctx->pc = 0x1A9AE0u;
        goto label_1a9ae0;
    }
    ctx->pc = 0x1A9AD8u;
    {
        const bool branch_taken_0x1a9ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ad8) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9AE0u;
label_1a9ae0:
    // 0x1a9ae0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1a9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_1a9ae4:
    // 0x1a9ae4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_1a9ae8:
    if (ctx->pc == 0x1A9AE8u) {
        ctx->pc = 0x1A9AECu;
        goto label_1a9aec;
    }
    ctx->pc = 0x1A9AE4u;
    {
        const bool branch_taken_0x1a9ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9ae4) {
            ctx->pc = 0x1A9B88u;
            goto label_1a9b88;
        }
    }
    ctx->pc = 0x1A9AECu;
label_1a9aec:
    // 0x1a9aec: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a9aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9af0:
    // 0x1a9af0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a9af4:
    // 0x1a9af4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a9af4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a9af8:
    // 0x1a9af8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9afc:
    // 0x1a9afc: 0x0  nop
    ctx->pc = 0x1a9afcu;
    // NOP
label_1a9b00:
    // 0x1a9b00: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1a9b00u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a9b04:
    // 0x1a9b04: 0xc040d72  jal         func_1035C8
label_1a9b08:
    if (ctx->pc == 0x1A9B08u) {
        ctx->pc = 0x1A9B08u;
            // 0x1a9b08: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A9B0Cu;
        goto label_1a9b0c;
    }
    ctx->pc = 0x1A9B04u;
    SET_GPR_U32(ctx, 31, 0x1A9B0Cu);
    ctx->pc = 0x1A9B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B04u;
            // 0x1a9b08: 0xe60c00d4  swc1        $f12, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B0Cu; }
        if (ctx->pc != 0x1A9B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B0Cu; }
        if (ctx->pc != 0x1A9B0Cu) { return; }
    }
    ctx->pc = 0x1A9B0Cu;
label_1a9b0c:
    // 0x1a9b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a9b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9b10:
    // 0x1a9b10: 0xc040078  jal         func_1001E0
label_1a9b14:
    if (ctx->pc == 0x1A9B14u) {
        ctx->pc = 0x1A9B14u;
            // 0x1a9b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B18u;
        goto label_1a9b18;
    }
    ctx->pc = 0x1A9B10u;
    SET_GPR_U32(ctx, 31, 0x1A9B18u);
    ctx->pc = 0x1A9B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B10u;
            // 0x1a9b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1001E0u;
    if (runtime->hasFunction(0x1001E0u)) {
        auto targetFn = runtime->lookupFunction(0x1001E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B18u; }
        if (ctx->pc != 0x1A9B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dpfge_0x1001e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B18u; }
        if (ctx->pc != 0x1A9B18u) { return; }
    }
    ctx->pc = 0x1A9B18u;
label_1a9b18:
    // 0x1a9b18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a9b1c:
    if (ctx->pc == 0x1A9B1Cu) {
        ctx->pc = 0x1A9B20u;
        goto label_1a9b20;
    }
    ctx->pc = 0x1A9B18u;
    {
        const bool branch_taken_0x1a9b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b18) {
            ctx->pc = 0x1A9B40u;
            goto label_1a9b40;
        }
    }
    ctx->pc = 0x1A9B20u;
label_1a9b20:
    // 0x1a9b20: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1a9b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9b24:
    // 0x1a9b24: 0x3c023b65  lui         $v0, 0x3B65
    ctx->pc = 0x1a9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15205 << 16));
label_1a9b28:
    // 0x1a9b28: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x1a9b28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_1a9b2c:
    // 0x1a9b2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9b30:
    // 0x1a9b30: 0x0  nop
    ctx->pc = 0x1a9b30u;
    // NOP
label_1a9b34:
    // 0x1a9b34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a9b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a9b38:
    // 0x1a9b38: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a9b3c:
    if (ctx->pc == 0x1A9B3Cu) {
        ctx->pc = 0x1A9B3Cu;
            // 0x1a9b3c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x1A9B40u;
        goto label_1a9b40;
    }
    ctx->pc = 0x1A9B38u;
    {
        const bool branch_taken_0x1a9b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B38u;
            // 0x1a9b3c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9b38) {
            ctx->pc = 0x1A9B50u;
            goto label_1a9b50;
        }
    }
    ctx->pc = 0x1A9B40u;
label_1a9b40:
    // 0x1a9b40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b44:
    // 0x1a9b44: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a9b48:
    // 0x1a9b48: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a9b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a9b4c:
    // 0x1a9b4c: 0x0  nop
    ctx->pc = 0x1a9b4cu;
    // NOP
label_1a9b50:
    // 0x1a9b50: 0xc065d00  jal         func_197400
label_1a9b54:
    if (ctx->pc == 0x1A9B54u) {
        ctx->pc = 0x1A9B58u;
        goto label_1a9b58;
    }
    ctx->pc = 0x1A9B50u;
    SET_GPR_U32(ctx, 31, 0x1A9B58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B58u; }
        if (ctx->pc != 0x1A9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B58u; }
        if (ctx->pc != 0x1A9B58u) { return; }
    }
    ctx->pc = 0x1A9B58u;
label_1a9b58:
    // 0x1a9b58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9b5c:
    // 0x1a9b5c: 0x1443009c  bne         $v0, $v1, . + 4 + (0x9C << 2)
label_1a9b60:
    if (ctx->pc == 0x1A9B60u) {
        ctx->pc = 0x1A9B64u;
        goto label_1a9b64;
    }
    ctx->pc = 0x1A9B5Cu;
    {
        const bool branch_taken_0x1a9b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9b5c) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9B64u;
label_1a9b64:
    // 0x1a9b64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9b68:
    // 0x1a9b68: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a9b6c:
    // 0x1a9b6c: 0x14620098  bne         $v1, $v0, . + 4 + (0x98 << 2)
label_1a9b70:
    if (ctx->pc == 0x1A9B70u) {
        ctx->pc = 0x1A9B74u;
        goto label_1a9b74;
    }
    ctx->pc = 0x1A9B6Cu;
    {
        const bool branch_taken_0x1a9b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b6c) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9B74u;
label_1a9b74:
    // 0x1a9b74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9b78:
    // 0x1a9b78: 0xc06560c  jal         func_195830
label_1a9b7c:
    if (ctx->pc == 0x1A9B7Cu) {
        ctx->pc = 0x1A9B7Cu;
            // 0x1a9b7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9B80u;
        goto label_1a9b80;
    }
    ctx->pc = 0x1A9B78u;
    SET_GPR_U32(ctx, 31, 0x1A9B80u);
    ctx->pc = 0x1A9B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9B78u;
            // 0x1a9b7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B80u; }
        if (ctx->pc != 0x1A9B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9B80u; }
        if (ctx->pc != 0x1A9B80u) { return; }
    }
    ctx->pc = 0x1A9B80u;
label_1a9b80:
    // 0x1a9b80: 0x10000093  b           . + 4 + (0x93 << 2)
label_1a9b84:
    if (ctx->pc == 0x1A9B84u) {
        ctx->pc = 0x1A9B88u;
        goto label_1a9b88;
    }
    ctx->pc = 0x1A9B80u;
    {
        const bool branch_taken_0x1a9b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9b80) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9B88u;
label_1a9b88:
    // 0x1a9b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9b8c:
    // 0x1a9b8c: 0x14620058  bne         $v1, $v0, . + 4 + (0x58 << 2)
label_1a9b90:
    if (ctx->pc == 0x1A9B90u) {
        ctx->pc = 0x1A9B94u;
        goto label_1a9b94;
    }
    ctx->pc = 0x1A9B8Cu;
    {
        const bool branch_taken_0x1a9b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b8c) {
            ctx->pc = 0x1A9CF0u;
            goto label_1a9cf0;
        }
    }
    ctx->pc = 0x1A9B94u;
label_1a9b94:
    // 0x1a9b94: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9b98:
    // 0x1a9b98: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1a9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1a9b9c:
    // 0x1a9b9c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_1a9ba0:
    if (ctx->pc == 0x1A9BA0u) {
        ctx->pc = 0x1A9BA4u;
        goto label_1a9ba4;
    }
    ctx->pc = 0x1A9B9Cu;
    {
        const bool branch_taken_0x1a9b9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9b9c) {
            ctx->pc = 0x1A9BE8u;
            goto label_1a9be8;
        }
    }
    ctx->pc = 0x1A9BA4u;
label_1a9ba4:
    // 0x1a9ba4: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9ba8:
    // 0x1a9ba8: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1a9ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_1a9bac:
    // 0x1a9bac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9bb0:
    // 0x1a9bb0: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x1a9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_1a9bb4:
    // 0x1a9bb4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1a9bb8:
    // 0x1a9bb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1a9bb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9bbc:
    // 0x1a9bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9bc0:
    // 0x1a9bc0: 0x0  nop
    ctx->pc = 0x1a9bc0u;
    // NOP
label_1a9bc4:
    // 0x1a9bc4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a9bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a9bc8:
    // 0x1a9bc8: 0xc05d080  jal         func_174200
label_1a9bcc:
    if (ctx->pc == 0x1A9BCCu) {
        ctx->pc = 0x1A9BCCu;
            // 0x1a9bcc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A9BD0u;
        goto label_1a9bd0;
    }
    ctx->pc = 0x1A9BC8u;
    SET_GPR_U32(ctx, 31, 0x1A9BD0u);
    ctx->pc = 0x1A9BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BC8u;
            // 0x1a9bcc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BD0u; }
        if (ctx->pc != 0x1A9BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BD0u; }
        if (ctx->pc != 0x1A9BD0u) { return; }
    }
    ctx->pc = 0x1A9BD0u;
label_1a9bd0:
    // 0x1a9bd0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1a9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9bd4:
    // 0x1a9bd4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9bd8:
    // 0x1a9bd8: 0x2464fff4  addiu       $a0, $v1, -0xC
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_1a9bdc:
    // 0x1a9bdc: 0xc065234  jal         func_1948D0
label_1a9be0:
    if (ctx->pc == 0x1A9BE0u) {
        ctx->pc = 0x1A9BE0u;
            // 0x1a9be0: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1A9BE4u;
        goto label_1a9be4;
    }
    ctx->pc = 0x1A9BDCu;
    SET_GPR_U32(ctx, 31, 0x1A9BE4u);
    ctx->pc = 0x1A9BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9BDCu;
            // 0x1a9be0: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1948D0u;
    if (runtime->hasFunction(0x1948D0u)) {
        auto targetFn = runtime->lookupFunction(0x1948D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BE4u; }
        if (ctx->pc != 0x1A9BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nobiru_0x1948d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BE4u; }
        if (ctx->pc != 0x1A9BE4u) { return; }
    }
    ctx->pc = 0x1A9BE4u;
label_1a9be4:
    // 0x1a9be4: 0x0  nop
    ctx->pc = 0x1a9be4u;
    // NOP
label_1a9be8:
    // 0x1a9be8: 0xc065d00  jal         func_197400
label_1a9bec:
    if (ctx->pc == 0x1A9BECu) {
        ctx->pc = 0x1A9BF0u;
        goto label_1a9bf0;
    }
    ctx->pc = 0x1A9BE8u;
    SET_GPR_U32(ctx, 31, 0x1A9BF0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BF0u; }
        if (ctx->pc != 0x1A9BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9BF0u; }
        if (ctx->pc != 0x1A9BF0u) { return; }
    }
    ctx->pc = 0x1A9BF0u;
label_1a9bf0:
    // 0x1a9bf0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9bf4:
    // 0x1a9bf4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_1a9bf8:
    if (ctx->pc == 0x1A9BF8u) {
        ctx->pc = 0x1A9BFCu;
        goto label_1a9bfc;
    }
    ctx->pc = 0x1A9BF4u;
    {
        const bool branch_taken_0x1a9bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9bf4) {
            ctx->pc = 0x1A9C20u;
            goto label_1a9c20;
        }
    }
    ctx->pc = 0x1A9BFCu;
label_1a9bfc:
    // 0x1a9bfc: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9c00:
    // 0x1a9c00: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1a9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_1a9c04:
    // 0x1a9c04: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1a9c08:
    if (ctx->pc == 0x1A9C08u) {
        ctx->pc = 0x1A9C0Cu;
        goto label_1a9c0c;
    }
    ctx->pc = 0x1A9C04u;
    {
        const bool branch_taken_0x1a9c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9c04) {
            ctx->pc = 0x1A9C20u;
            goto label_1a9c20;
        }
    }
    ctx->pc = 0x1A9C0Cu;
label_1a9c0c:
    // 0x1a9c0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a9c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9c10:
    // 0x1a9c10: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9c14:
    // 0x1a9c14: 0xc0655b0  jal         func_1956C0
label_1a9c18:
    if (ctx->pc == 0x1A9C18u) {
        ctx->pc = 0x1A9C18u;
            // 0x1a9c18: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9C1Cu;
        goto label_1a9c1c;
    }
    ctx->pc = 0x1A9C14u;
    SET_GPR_U32(ctx, 31, 0x1A9C1Cu);
    ctx->pc = 0x1A9C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C14u;
            // 0x1a9c18: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C1Cu; }
        if (ctx->pc != 0x1A9C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C1Cu; }
        if (ctx->pc != 0x1A9C1Cu) { return; }
    }
    ctx->pc = 0x1A9C1Cu;
label_1a9c1c:
    // 0x1a9c1c: 0x0  nop
    ctx->pc = 0x1a9c1cu;
    // NOP
label_1a9c20:
    // 0x1a9c20: 0xc065d00  jal         func_197400
label_1a9c24:
    if (ctx->pc == 0x1A9C24u) {
        ctx->pc = 0x1A9C28u;
        goto label_1a9c28;
    }
    ctx->pc = 0x1A9C20u;
    SET_GPR_U32(ctx, 31, 0x1A9C28u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C28u; }
        if (ctx->pc != 0x1A9C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C28u; }
        if (ctx->pc != 0x1A9C28u) { return; }
    }
    ctx->pc = 0x1A9C28u;
label_1a9c28:
    // 0x1a9c28: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a9c28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9c2c:
    // 0x1a9c2c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_1a9c30:
    if (ctx->pc == 0x1A9C30u) {
        ctx->pc = 0x1A9C34u;
        goto label_1a9c34;
    }
    ctx->pc = 0x1A9C2Cu;
    {
        const bool branch_taken_0x1a9c2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c2c) {
            ctx->pc = 0x1A9C58u;
            goto label_1a9c58;
        }
    }
    ctx->pc = 0x1A9C34u;
label_1a9c34:
    // 0x1a9c34: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9c38:
    // 0x1a9c38: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9c3c:
    // 0x1a9c3c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1a9c40:
    if (ctx->pc == 0x1A9C40u) {
        ctx->pc = 0x1A9C44u;
        goto label_1a9c44;
    }
    ctx->pc = 0x1A9C3Cu;
    {
        const bool branch_taken_0x1a9c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9c3c) {
            ctx->pc = 0x1A9C58u;
            goto label_1a9c58;
        }
    }
    ctx->pc = 0x1A9C44u;
label_1a9c44:
    // 0x1a9c44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a9c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9c48:
    // 0x1a9c48: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9c4c:
    // 0x1a9c4c: 0xc0655b0  jal         func_1956C0
label_1a9c50:
    if (ctx->pc == 0x1A9C50u) {
        ctx->pc = 0x1A9C50u;
            // 0x1a9c50: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9C54u;
        goto label_1a9c54;
    }
    ctx->pc = 0x1A9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1A9C54u);
    ctx->pc = 0x1A9C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C4Cu;
            // 0x1a9c50: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C54u; }
        if (ctx->pc != 0x1A9C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C54u; }
        if (ctx->pc != 0x1A9C54u) { return; }
    }
    ctx->pc = 0x1A9C54u;
label_1a9c54:
    // 0x1a9c54: 0x0  nop
    ctx->pc = 0x1a9c54u;
    // NOP
label_1a9c58:
    // 0x1a9c58: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9c5c:
    // 0x1a9c5c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x1a9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1a9c60:
    // 0x1a9c60: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a9c64:
    if (ctx->pc == 0x1A9C64u) {
        ctx->pc = 0x1A9C68u;
        goto label_1a9c68;
    }
    ctx->pc = 0x1A9C60u;
    {
        const bool branch_taken_0x1a9c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9c60) {
            ctx->pc = 0x1A9C78u;
            goto label_1a9c78;
        }
    }
    ctx->pc = 0x1A9C68u;
label_1a9c68:
    // 0x1a9c68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a9c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a9c6c:
    // 0x1a9c6c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9c70:
    // 0x1a9c70: 0xc0655b0  jal         func_1956C0
label_1a9c74:
    if (ctx->pc == 0x1A9C74u) {
        ctx->pc = 0x1A9C74u;
            // 0x1a9c74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9C78u;
        goto label_1a9c78;
    }
    ctx->pc = 0x1A9C70u;
    SET_GPR_U32(ctx, 31, 0x1A9C78u);
    ctx->pc = 0x1A9C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C70u;
            // 0x1a9c74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C78u; }
        if (ctx->pc != 0x1A9C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C78u; }
        if (ctx->pc != 0x1A9C78u) { return; }
    }
    ctx->pc = 0x1A9C78u;
label_1a9c78:
    // 0x1a9c78: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9c7c:
    // 0x1a9c7c: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x1a9c7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_1a9c80:
    // 0x1a9c80: 0x14200053  bnez        $at, . + 4 + (0x53 << 2)
label_1a9c84:
    if (ctx->pc == 0x1A9C84u) {
        ctx->pc = 0x1A9C88u;
        goto label_1a9c88;
    }
    ctx->pc = 0x1A9C80u;
    {
        const bool branch_taken_0x1a9c80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9c80) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9C88u;
label_1a9c88:
    // 0x1a9c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9c8c:
    // 0x1a9c8c: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x1a9c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9c90:
    // 0x1a9c90: 0xc065598  jal         func_195660
label_1a9c94:
    if (ctx->pc == 0x1A9C94u) {
        ctx->pc = 0x1A9C94u;
            // 0x1a9c94: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->pc = 0x1A9C98u;
        goto label_1a9c98;
    }
    ctx->pc = 0x1A9C90u;
    SET_GPR_U32(ctx, 31, 0x1A9C98u);
    ctx->pc = 0x1A9C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C90u;
            // 0x1a9c94: 0x2445ffec  addiu       $a1, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195660u;
    if (runtime->hasFunction(0x195660u)) {
        auto targetFn = runtime->lookupFunction(0x195660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C98u; }
        if (ctx->pc != 0x1A9C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Small_0x195660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C98u; }
        if (ctx->pc != 0x1A9C98u) { return; }
    }
    ctx->pc = 0x1A9C98u;
label_1a9c98:
    // 0x1a9c98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9c9c:
    // 0x1a9c9c: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x1a9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
label_1a9ca0:
    // 0x1a9ca0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a9ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a9ca4:
    // 0x1a9ca4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1a9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a9ca8:
    // 0x1a9ca8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1a9cac:
    if (ctx->pc == 0x1A9CACu) {
        ctx->pc = 0x1A9CACu;
            // 0x1a9cac: 0x3c03bd75  lui         $v1, 0xBD75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
        ctx->pc = 0x1A9CB0u;
        goto label_1a9cb0;
    }
    ctx->pc = 0x1A9CA8u;
    {
        const bool branch_taken_0x1a9ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CA8u;
            // 0x1a9cac: 0x3c03bd75  lui         $v1, 0xBD75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48501 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ca8) {
            ctx->pc = 0x1A9CC8u;
            goto label_1a9cc8;
        }
    }
    ctx->pc = 0x1A9CB0u;
label_1a9cb0:
    // 0x1a9cb0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1a9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1a9cb4:
    // 0x1a9cb4: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x1a9cb4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
label_1a9cb8:
    // 0x1a9cb8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a9cb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a9cbc:
    // 0x1a9cbc: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1a9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1a9cc0:
    // 0x1a9cc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a9cc4:
    if (ctx->pc == 0x1A9CC4u) {
        ctx->pc = 0x1A9CC4u;
            // 0x1a9cc4: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9CC8u;
        goto label_1a9cc8;
    }
    ctx->pc = 0x1A9CC0u;
    {
        const bool branch_taken_0x1a9cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CC0u;
            // 0x1a9cc4: 0xae0200e4  sw          $v0, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9cc0) {
            ctx->pc = 0x1A9CE0u;
            goto label_1a9ce0;
        }
    }
    ctx->pc = 0x1A9CC8u;
label_1a9cc8:
    // 0x1a9cc8: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x1a9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
label_1a9ccc:
    // 0x1a9ccc: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1a9cccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1a9cd0:
    // 0x1a9cd0: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x1a9cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
label_1a9cd4:
    // 0x1a9cd4: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x1a9cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_1a9cd8:
    // 0x1a9cd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a9cd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a9cdc:
    // 0x1a9cdc: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1a9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_1a9ce0:
    // 0x1a9ce0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1a9ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_1a9ce4:
    // 0x1a9ce4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1a9ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_1a9ce8:
    // 0x1a9ce8: 0x10000039  b           . + 4 + (0x39 << 2)
label_1a9cec:
    if (ctx->pc == 0x1A9CECu) {
        ctx->pc = 0x1A9CECu;
            // 0x1a9cec: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->pc = 0x1A9CF0u;
        goto label_1a9cf0;
    }
    ctx->pc = 0x1A9CE8u;
    {
        const bool branch_taken_0x1a9ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9CE8u;
            // 0x1a9cec: 0xae0000e8  sw          $zero, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ce8) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9CF0u;
label_1a9cf0:
    // 0x1a9cf0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9cf4:
    // 0x1a9cf4: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
label_1a9cf8:
    if (ctx->pc == 0x1A9CF8u) {
        ctx->pc = 0x1A9CFCu;
        goto label_1a9cfc;
    }
    ctx->pc = 0x1A9CF4u;
    {
        const bool branch_taken_0x1a9cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9cf4) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9CFCu;
label_1a9cfc:
    // 0x1a9cfc: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9d00:
    // 0x1a9d00: 0x3c023f83  lui         $v0, 0x3F83
    ctx->pc = 0x1a9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16259 << 16));
label_1a9d04:
    // 0x1a9d04: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1a9d04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1a9d08:
    // 0x1a9d08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9d0c:
    // 0x1a9d0c: 0x0  nop
    ctx->pc = 0x1a9d0cu;
    // NOP
label_1a9d10:
    // 0x1a9d10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a9d14:
    // 0x1a9d14: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1a9d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_1a9d18:
    // 0x1a9d18: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x1a9d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9d1c:
    // 0x1a9d1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a9d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1a9d20:
    // 0x1a9d20: 0xc065d00  jal         func_197400
label_1a9d24:
    if (ctx->pc == 0x1A9D24u) {
        ctx->pc = 0x1A9D24u;
            // 0x1a9d24: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->pc = 0x1A9D28u;
        goto label_1a9d28;
    }
    ctx->pc = 0x1A9D20u;
    SET_GPR_U32(ctx, 31, 0x1A9D28u);
    ctx->pc = 0x1A9D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D20u;
            // 0x1a9d24: 0xe60000e4  swc1        $f0, 0xE4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D28u; }
        if (ctx->pc != 0x1A9D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D28u; }
        if (ctx->pc != 0x1A9D28u) { return; }
    }
    ctx->pc = 0x1A9D28u;
label_1a9d28:
    // 0x1a9d28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a9d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9d2c:
    // 0x1a9d2c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a9d30:
    if (ctx->pc == 0x1A9D30u) {
        ctx->pc = 0x1A9D34u;
        goto label_1a9d34;
    }
    ctx->pc = 0x1A9D2Cu;
    {
        const bool branch_taken_0x1a9d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9d2c) {
            ctx->pc = 0x1A9D50u;
            goto label_1a9d50;
        }
    }
    ctx->pc = 0x1A9D34u;
label_1a9d34:
    // 0x1a9d34: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9d38:
    // 0x1a9d38: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1a9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1a9d3c:
    // 0x1a9d3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a9d40:
    if (ctx->pc == 0x1A9D40u) {
        ctx->pc = 0x1A9D44u;
        goto label_1a9d44;
    }
    ctx->pc = 0x1A9D3Cu;
    {
        const bool branch_taken_0x1a9d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d3c) {
            ctx->pc = 0x1A9D50u;
            goto label_1a9d50;
        }
    }
    ctx->pc = 0x1A9D44u;
label_1a9d44:
    // 0x1a9d44: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9d48:
    // 0x1a9d48: 0xc06560c  jal         func_195830
label_1a9d4c:
    if (ctx->pc == 0x1A9D4Cu) {
        ctx->pc = 0x1A9D4Cu;
            // 0x1a9d4c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9D50u;
        goto label_1a9d50;
    }
    ctx->pc = 0x1A9D48u;
    SET_GPR_U32(ctx, 31, 0x1A9D50u);
    ctx->pc = 0x1A9D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D48u;
            // 0x1a9d4c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D50u; }
        if (ctx->pc != 0x1A9D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D50u; }
        if (ctx->pc != 0x1A9D50u) { return; }
    }
    ctx->pc = 0x1A9D50u;
label_1a9d50:
    // 0x1a9d50: 0xc065d00  jal         func_197400
label_1a9d54:
    if (ctx->pc == 0x1A9D54u) {
        ctx->pc = 0x1A9D58u;
        goto label_1a9d58;
    }
    ctx->pc = 0x1A9D50u;
    SET_GPR_U32(ctx, 31, 0x1A9D58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D58u; }
        if (ctx->pc != 0x1A9D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D58u; }
        if (ctx->pc != 0x1A9D58u) { return; }
    }
    ctx->pc = 0x1A9D58u;
label_1a9d58:
    // 0x1a9d58: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a9d5c:
    // 0x1a9d5c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_1a9d60:
    if (ctx->pc == 0x1A9D60u) {
        ctx->pc = 0x1A9D64u;
        goto label_1a9d64;
    }
    ctx->pc = 0x1A9D5Cu;
    {
        const bool branch_taken_0x1a9d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a9d5c) {
            ctx->pc = 0x1A9D80u;
            goto label_1a9d80;
        }
    }
    ctx->pc = 0x1A9D64u;
label_1a9d64:
    // 0x1a9d64: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9d68:
    // 0x1a9d68: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1a9d6c:
    // 0x1a9d6c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a9d70:
    if (ctx->pc == 0x1A9D70u) {
        ctx->pc = 0x1A9D74u;
        goto label_1a9d74;
    }
    ctx->pc = 0x1A9D6Cu;
    {
        const bool branch_taken_0x1a9d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d6c) {
            ctx->pc = 0x1A9D80u;
            goto label_1a9d80;
        }
    }
    ctx->pc = 0x1A9D74u;
label_1a9d74:
    // 0x1a9d74: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9d78:
    // 0x1a9d78: 0xc06560c  jal         func_195830
label_1a9d7c:
    if (ctx->pc == 0x1A9D7Cu) {
        ctx->pc = 0x1A9D7Cu;
            // 0x1a9d7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9D80u;
        goto label_1a9d80;
    }
    ctx->pc = 0x1A9D78u;
    SET_GPR_U32(ctx, 31, 0x1A9D80u);
    ctx->pc = 0x1A9D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D78u;
            // 0x1a9d7c: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D80u; }
        if (ctx->pc != 0x1A9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D80u; }
        if (ctx->pc != 0x1A9D80u) { return; }
    }
    ctx->pc = 0x1A9D80u;
label_1a9d80:
    // 0x1a9d80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9d84:
    // 0x1a9d84: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1a9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1a9d88:
    // 0x1a9d88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1a9d8c:
    if (ctx->pc == 0x1A9D8Cu) {
        ctx->pc = 0x1A9D90u;
        goto label_1a9d90;
    }
    ctx->pc = 0x1A9D88u;
    {
        const bool branch_taken_0x1a9d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d88) {
            ctx->pc = 0x1A9DA0u;
            goto label_1a9da0;
        }
    }
    ctx->pc = 0x1A9D90u;
label_1a9d90:
    // 0x1a9d90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9d94:
    // 0x1a9d94: 0xc06560c  jal         func_195830
label_1a9d98:
    if (ctx->pc == 0x1A9D98u) {
        ctx->pc = 0x1A9D98u;
            // 0x1a9d98: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9D9Cu;
        goto label_1a9d9c;
    }
    ctx->pc = 0x1A9D94u;
    SET_GPR_U32(ctx, 31, 0x1A9D9Cu);
    ctx->pc = 0x1A9D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9D94u;
            // 0x1a9d98: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D9Cu; }
        if (ctx->pc != 0x1A9D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9D9Cu; }
        if (ctx->pc != 0x1A9D9Cu) { return; }
    }
    ctx->pc = 0x1A9D9Cu;
label_1a9d9c:
    // 0x1a9d9c: 0x0  nop
    ctx->pc = 0x1a9d9cu;
    // NOP
label_1a9da0:
    // 0x1a9da0: 0xc065d00  jal         func_197400
label_1a9da4:
    if (ctx->pc == 0x1A9DA4u) {
        ctx->pc = 0x1A9DA8u;
        goto label_1a9da8;
    }
    ctx->pc = 0x1A9DA0u;
    SET_GPR_U32(ctx, 31, 0x1A9DA8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DA8u; }
        if (ctx->pc != 0x1A9DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DA8u; }
        if (ctx->pc != 0x1A9DA8u) { return; }
    }
    ctx->pc = 0x1A9DA8u;
label_1a9da8:
    // 0x1a9da8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1a9da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a9dac:
    // 0x1a9dac: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
label_1a9db0:
    if (ctx->pc == 0x1A9DB0u) {
        ctx->pc = 0x1A9DB4u;
        goto label_1a9db4;
    }
    ctx->pc = 0x1A9DACu;
    {
        const bool branch_taken_0x1a9dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a9dac) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9DB4u;
label_1a9db4:
    // 0x1a9db4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1a9db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9db8:
    // 0x1a9db8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1a9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1a9dbc:
    // 0x1a9dbc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1a9dc0:
    if (ctx->pc == 0x1A9DC0u) {
        ctx->pc = 0x1A9DC4u;
        goto label_1a9dc4;
    }
    ctx->pc = 0x1A9DBCu;
    {
        const bool branch_taken_0x1a9dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9dbc) {
            ctx->pc = 0x1A9DD0u;
            goto label_1a9dd0;
        }
    }
    ctx->pc = 0x1A9DC4u;
label_1a9dc4:
    // 0x1a9dc4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1a9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9dc8:
    // 0x1a9dc8: 0xc06560c  jal         func_195830
label_1a9dcc:
    if (ctx->pc == 0x1A9DCCu) {
        ctx->pc = 0x1A9DCCu;
            // 0x1a9dcc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x1A9DD0u;
        goto label_1a9dd0;
    }
    ctx->pc = 0x1A9DC8u;
    SET_GPR_U32(ctx, 31, 0x1A9DD0u);
    ctx->pc = 0x1A9DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DC8u;
            // 0x1a9dcc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD0u; }
        if (ctx->pc != 0x1A9DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD0u; }
        if (ctx->pc != 0x1A9DD0u) { return; }
    }
    ctx->pc = 0x1A9DD0u;
label_1a9dd0:
    // 0x1a9dd0: 0xc04b788  jal         func_12DE20
label_1a9dd4:
    if (ctx->pc == 0x1A9DD4u) {
        ctx->pc = 0x1A9DD4u;
            // 0x1a9dd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A9DD8u;
        goto label_1a9dd8;
    }
    ctx->pc = 0x1A9DD0u;
    SET_GPR_U32(ctx, 31, 0x1A9DD8u);
    ctx->pc = 0x1A9DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DD0u;
            // 0x1a9dd4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD8u; }
        if (ctx->pc != 0x1A9DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DD8u; }
        if (ctx->pc != 0x1A9DD8u) { return; }
    }
    ctx->pc = 0x1A9DD8u;
label_1a9dd8:
    // 0x1a9dd8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9ddc:
    // 0x1a9ddc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1a9ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9de0:
    // 0x1a9de0: 0xc04b7da  jal         func_12DF68
label_1a9de4:
    if (ctx->pc == 0x1A9DE4u) {
        ctx->pc = 0x1A9DE4u;
            // 0x1a9de4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DE8u;
        goto label_1a9de8;
    }
    ctx->pc = 0x1A9DE0u;
    SET_GPR_U32(ctx, 31, 0x1A9DE8u);
    ctx->pc = 0x1A9DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DE0u;
            // 0x1a9de4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DE8u; }
        if (ctx->pc != 0x1A9DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DE8u; }
        if (ctx->pc != 0x1A9DE8u) { return; }
    }
    ctx->pc = 0x1A9DE8u;
label_1a9de8:
    // 0x1a9de8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9dec:
    // 0x1a9dec: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1a9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9df0:
    // 0x1a9df0: 0xc04b804  jal         func_12E010
label_1a9df4:
    if (ctx->pc == 0x1A9DF4u) {
        ctx->pc = 0x1A9DF4u;
            // 0x1a9df4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9DF8u;
        goto label_1a9df8;
    }
    ctx->pc = 0x1A9DF0u;
    SET_GPR_U32(ctx, 31, 0x1A9DF8u);
    ctx->pc = 0x1A9DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9DF0u;
            // 0x1a9df4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DF8u; }
        if (ctx->pc != 0x1A9DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9DF8u; }
        if (ctx->pc != 0x1A9DF8u) { return; }
    }
    ctx->pc = 0x1A9DF8u;
label_1a9df8:
    // 0x1a9df8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9dfc:
    // 0x1a9dfc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1a9dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a9e00:
    // 0x1a9e00: 0xc04b7b0  jal         func_12DEC0
label_1a9e04:
    if (ctx->pc == 0x1A9E04u) {
        ctx->pc = 0x1A9E04u;
            // 0x1a9e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E08u;
        goto label_1a9e08;
    }
    ctx->pc = 0x1A9E00u;
    SET_GPR_U32(ctx, 31, 0x1A9E08u);
    ctx->pc = 0x1A9E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E00u;
            // 0x1a9e04: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E08u; }
        if (ctx->pc != 0x1A9E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E08u; }
        if (ctx->pc != 0x1A9E08u) { return; }
    }
    ctx->pc = 0x1A9E08u;
label_1a9e08:
    // 0x1a9e08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a9e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9e0c:
    // 0x1a9e0c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a9e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e10:
    // 0x1a9e10: 0xc04b75e  jal         func_12DD78
label_1a9e14:
    if (ctx->pc == 0x1A9E14u) {
        ctx->pc = 0x1A9E14u;
            // 0x1a9e14: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1A9E18u;
        goto label_1a9e18;
    }
    ctx->pc = 0x1A9E10u;
    SET_GPR_U32(ctx, 31, 0x1A9E18u);
    ctx->pc = 0x1A9E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E10u;
            // 0x1a9e14: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E18u; }
        if (ctx->pc != 0x1A9E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E18u; }
        if (ctx->pc != 0x1A9E18u) { return; }
    }
    ctx->pc = 0x1A9E18u;
label_1a9e18:
    // 0x1a9e18: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a9e1c:
    // 0x1a9e1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a9e20:
    // 0x1a9e20: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1a9e20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1a9e24:
    // 0x1a9e24: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1a9e28:
    if (ctx->pc == 0x1A9E28u) {
        ctx->pc = 0x1A9E2Cu;
        goto label_1a9e2c;
    }
    ctx->pc = 0x1A9E24u;
    {
        const bool branch_taken_0x1a9e24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e24) {
            ctx->pc = 0x1A9E78u;
            goto label_1a9e78;
        }
    }
    ctx->pc = 0x1A9E2Cu;
label_1a9e2c:
    // 0x1a9e2c: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a9e30:
    // 0x1a9e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9e34:
    if (ctx->pc == 0x1A9E34u) {
        ctx->pc = 0x1A9E38u;
        goto label_1a9e38;
    }
    ctx->pc = 0x1A9E30u;
    {
        const bool branch_taken_0x1a9e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e30) {
            ctx->pc = 0x1A9E48u;
            goto label_1a9e48;
        }
    }
    ctx->pc = 0x1A9E38u;
label_1a9e38:
    // 0x1a9e38: 0xc0604f0  jal         func_1813C0
label_1a9e3c:
    if (ctx->pc == 0x1A9E3Cu) {
        ctx->pc = 0x1A9E3Cu;
            // 0x1a9e3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A9E40u;
        goto label_1a9e40;
    }
    ctx->pc = 0x1A9E38u;
    SET_GPR_U32(ctx, 31, 0x1A9E40u);
    ctx->pc = 0x1A9E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E38u;
            // 0x1a9e3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E40u; }
        if (ctx->pc != 0x1A9E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E40u; }
        if (ctx->pc != 0x1A9E40u) { return; }
    }
    ctx->pc = 0x1A9E40u;
label_1a9e40:
    // 0x1a9e40: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a9e44:
    if (ctx->pc == 0x1A9E44u) {
        ctx->pc = 0x1A9E48u;
        goto label_1a9e48;
    }
    ctx->pc = 0x1A9E40u;
    {
        const bool branch_taken_0x1a9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e40) {
            ctx->pc = 0x1A9E50u;
            goto label_1a9e50;
        }
    }
    ctx->pc = 0x1A9E48u;
label_1a9e48:
    // 0x1a9e48: 0xc0604dc  jal         func_181370
label_1a9e4c:
    if (ctx->pc == 0x1A9E4Cu) {
        ctx->pc = 0x1A9E4Cu;
            // 0x1a9e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A9E50u;
        goto label_1a9e50;
    }
    ctx->pc = 0x1A9E48u;
    SET_GPR_U32(ctx, 31, 0x1A9E50u);
    ctx->pc = 0x1A9E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E48u;
            // 0x1a9e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E50u; }
        if (ctx->pc != 0x1A9E50u) { return; }
    }
    ctx->pc = 0x1A9E50u;
label_1a9e50:
    // 0x1a9e50: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1a9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_1a9e54:
    // 0x1a9e54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a9e58:
    if (ctx->pc == 0x1A9E58u) {
        ctx->pc = 0x1A9E5Cu;
        goto label_1a9e5c;
    }
    ctx->pc = 0x1A9E54u;
    {
        const bool branch_taken_0x1a9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e54) {
            ctx->pc = 0x1A9E68u;
            goto label_1a9e68;
        }
    }
    ctx->pc = 0x1A9E5Cu;
label_1a9e5c:
    // 0x1a9e5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a9e60:
    if (ctx->pc == 0x1A9E60u) {
        ctx->pc = 0x1A9E60u;
            // 0x1a9e60: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x1A9E64u;
        goto label_1a9e64;
    }
    ctx->pc = 0x1A9E5Cu;
    {
        const bool branch_taken_0x1a9e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E5Cu;
            // 0x1a9e60: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e5c) {
            ctx->pc = 0x1A9E88u;
            goto label_1a9e88;
        }
    }
    ctx->pc = 0x1A9E64u;
label_1a9e64:
    // 0x1a9e64: 0x0  nop
    ctx->pc = 0x1a9e64u;
    // NOP
label_1a9e68:
    // 0x1a9e68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9e6c:
    // 0x1a9e6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a9e70:
    if (ctx->pc == 0x1A9E70u) {
        ctx->pc = 0x1A9E70u;
            // 0x1a9e70: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9E74u;
        goto label_1a9e74;
    }
    ctx->pc = 0x1A9E6Cu;
    {
        const bool branch_taken_0x1a9e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E6Cu;
            // 0x1a9e70: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e6c) {
            ctx->pc = 0x1A9E88u;
            goto label_1a9e88;
        }
    }
    ctx->pc = 0x1A9E74u;
label_1a9e74:
    // 0x1a9e74: 0x0  nop
    ctx->pc = 0x1a9e74u;
    // NOP
label_1a9e78:
    // 0x1a9e78: 0xc0604dc  jal         func_181370
label_1a9e7c:
    if (ctx->pc == 0x1A9E7Cu) {
        ctx->pc = 0x1A9E7Cu;
            // 0x1a9e7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A9E80u;
        goto label_1a9e80;
    }
    ctx->pc = 0x1A9E78u;
    SET_GPR_U32(ctx, 31, 0x1A9E80u);
    ctx->pc = 0x1A9E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9E78u;
            // 0x1a9e7c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E80u; }
        if (ctx->pc != 0x1A9E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9E80u; }
        if (ctx->pc != 0x1A9E80u) { return; }
    }
    ctx->pc = 0x1A9E80u;
label_1a9e80:
    // 0x1a9e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9e84:
    // 0x1a9e84: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1a9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_1a9e88:
    // 0x1a9e88: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a9e8c:
    // 0x1a9e8c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1a9e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1a9e90:
    // 0x1a9e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9e94:
    // 0x1a9e94: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1a9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_1a9e98:
    // 0x1a9e98: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a9e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9e9c:
    // 0x1a9e9c: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a9ea0:
    // 0x1a9ea0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9ea4:
    // 0x1a9ea4: 0x0  nop
    ctx->pc = 0x1a9ea4u;
    // NOP
label_1a9ea8:
    // 0x1a9ea8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a9eac:
    // 0x1a9eac: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1a9eacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_1a9eb0:
    // 0x1a9eb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9eb4:
    // 0x1a9eb4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1a9eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1a9eb8:
    // 0x1a9eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9ebc:
    // 0x1a9ebc: 0x0  nop
    ctx->pc = 0x1a9ebcu;
    // NOP
label_1a9ec0:
    // 0x1a9ec0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a9ec4:
    // 0x1a9ec4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x1a9ec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1a9ec8:
    // 0x1a9ec8: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1a9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_1a9ecc:
    // 0x1a9ecc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a9eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a9ed0:
    // 0x1a9ed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9ed4:
    // 0x1a9ed4: 0x0  nop
    ctx->pc = 0x1a9ed4u;
    // NOP
label_1a9ed8:
    // 0x1a9ed8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a9edc:
    // 0x1a9edc: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x1a9edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1a9ee0:
    // 0x1a9ee0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1a9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9ee4:
    // 0x1a9ee4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1a9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1a9ee8:
    // 0x1a9ee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a9ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a9eec:
    // 0x1a9eec: 0x0  nop
    ctx->pc = 0x1a9eecu;
    // NOP
label_1a9ef0:
    // 0x1a9ef0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a9ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a9ef4:
    // 0x1a9ef4: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1a9ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a9ef8:
    // 0x1a9ef8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1a9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1a9efc:
    // 0x1a9efc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a9f00:
    // 0x1a9f00: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x1a9f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_1a9f04:
    // 0x1a9f04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a9f08:
    // 0x1a9f08: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1a9f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9f0c:
    // 0x1a9f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9f10:
    // 0x1a9f10: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1a9f14:
    if (ctx->pc == 0x1A9F14u) {
        ctx->pc = 0x1A9F14u;
            // 0x1a9f14: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->pc = 0x1A9F18u;
        goto label_1a9f18;
    }
    ctx->pc = 0x1A9F10u;
    {
        const bool branch_taken_0x1a9f10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F10u;
            // 0x1a9f14: 0x3c02c220  lui         $v0, 0xC220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f10) {
            ctx->pc = 0x1A9F60u;
            goto label_1a9f60;
        }
    }
    ctx->pc = 0x1A9F18u;
label_1a9f18:
    // 0x1a9f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9f1c:
    // 0x1a9f1c: 0x0  nop
    ctx->pc = 0x1a9f1cu;
    // NOP
label_1a9f20:
    // 0x1a9f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9f24:
    // 0x1a9f24: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1a9f28:
    if (ctx->pc == 0x1A9F28u) {
        ctx->pc = 0x1A9F2Cu;
        goto label_1a9f2c;
    }
    ctx->pc = 0x1A9F24u;
    {
        const bool branch_taken_0x1a9f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f24) {
            ctx->pc = 0x1A9F60u;
            goto label_1a9f60;
        }
    }
    ctx->pc = 0x1A9F2Cu;
label_1a9f2c:
    // 0x1a9f2c: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1a9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9f30:
    // 0x1a9f30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1a9f34:
    // 0x1a9f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9f38:
    // 0x1a9f38: 0x0  nop
    ctx->pc = 0x1a9f38u;
    // NOP
label_1a9f3c:
    // 0x1a9f3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a9f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9f40:
    // 0x1a9f40: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1a9f44:
    if (ctx->pc == 0x1A9F44u) {
        ctx->pc = 0x1A9F44u;
            // 0x1a9f44: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x1A9F48u;
        goto label_1a9f48;
    }
    ctx->pc = 0x1A9F40u;
    {
        const bool branch_taken_0x1a9f40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A9F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F40u;
            // 0x1a9f44: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f40) {
            ctx->pc = 0x1A9F60u;
            goto label_1a9f60;
        }
    }
    ctx->pc = 0x1A9F48u;
label_1a9f48:
    // 0x1a9f48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a9f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a9f4c:
    // 0x1a9f4c: 0x0  nop
    ctx->pc = 0x1a9f4cu;
    // NOP
label_1a9f50:
    // 0x1a9f50: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a9f50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a9f54:
    // 0x1a9f54: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a9f58:
    if (ctx->pc == 0x1A9F58u) {
        ctx->pc = 0x1A9F5Cu;
        goto label_1a9f5c;
    }
    ctx->pc = 0x1A9F54u;
    {
        const bool branch_taken_0x1a9f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a9f54) {
            ctx->pc = 0x1A9F78u;
            goto label_1a9f78;
        }
    }
    ctx->pc = 0x1A9F5Cu;
label_1a9f5c:
    // 0x1a9f5c: 0x0  nop
    ctx->pc = 0x1a9f5cu;
    // NOP
label_1a9f60:
    // 0x1a9f60: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1a9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1a9f64:
    // 0x1a9f64: 0x40f809  jalr        $v0
label_1a9f68:
    if (ctx->pc == 0x1A9F68u) {
        ctx->pc = 0x1A9F68u;
            // 0x1a9f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F6Cu;
        goto label_1a9f6c;
    }
    ctx->pc = 0x1A9F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9F6Cu);
        ctx->pc = 0x1A9F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F64u;
            // 0x1a9f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A98D0u: goto label_1a98d0;
            case 0x1A98D4u: goto label_1a98d4;
            case 0x1A98D8u: goto label_1a98d8;
            case 0x1A98DCu: goto label_1a98dc;
            case 0x1A98E0u: goto label_1a98e0;
            case 0x1A98E4u: goto label_1a98e4;
            case 0x1A98E8u: goto label_1a98e8;
            case 0x1A98ECu: goto label_1a98ec;
            case 0x1A98F0u: goto label_1a98f0;
            case 0x1A98F4u: goto label_1a98f4;
            case 0x1A98F8u: goto label_1a98f8;
            case 0x1A98FCu: goto label_1a98fc;
            case 0x1A9900u: goto label_1a9900;
            case 0x1A9904u: goto label_1a9904;
            case 0x1A9908u: goto label_1a9908;
            case 0x1A990Cu: goto label_1a990c;
            case 0x1A9910u: goto label_1a9910;
            case 0x1A9914u: goto label_1a9914;
            case 0x1A9918u: goto label_1a9918;
            case 0x1A991Cu: goto label_1a991c;
            case 0x1A9920u: goto label_1a9920;
            case 0x1A9924u: goto label_1a9924;
            case 0x1A9928u: goto label_1a9928;
            case 0x1A992Cu: goto label_1a992c;
            case 0x1A9930u: goto label_1a9930;
            case 0x1A9934u: goto label_1a9934;
            case 0x1A9938u: goto label_1a9938;
            case 0x1A993Cu: goto label_1a993c;
            case 0x1A9940u: goto label_1a9940;
            case 0x1A9944u: goto label_1a9944;
            case 0x1A9948u: goto label_1a9948;
            case 0x1A994Cu: goto label_1a994c;
            case 0x1A9950u: goto label_1a9950;
            case 0x1A9954u: goto label_1a9954;
            case 0x1A9958u: goto label_1a9958;
            case 0x1A995Cu: goto label_1a995c;
            case 0x1A9960u: goto label_1a9960;
            case 0x1A9964u: goto label_1a9964;
            case 0x1A9968u: goto label_1a9968;
            case 0x1A996Cu: goto label_1a996c;
            case 0x1A9970u: goto label_1a9970;
            case 0x1A9974u: goto label_1a9974;
            case 0x1A9978u: goto label_1a9978;
            case 0x1A997Cu: goto label_1a997c;
            case 0x1A9980u: goto label_1a9980;
            case 0x1A9984u: goto label_1a9984;
            case 0x1A9988u: goto label_1a9988;
            case 0x1A998Cu: goto label_1a998c;
            case 0x1A9990u: goto label_1a9990;
            case 0x1A9994u: goto label_1a9994;
            case 0x1A9998u: goto label_1a9998;
            case 0x1A999Cu: goto label_1a999c;
            case 0x1A99A0u: goto label_1a99a0;
            case 0x1A99A4u: goto label_1a99a4;
            case 0x1A99A8u: goto label_1a99a8;
            case 0x1A99ACu: goto label_1a99ac;
            case 0x1A99B0u: goto label_1a99b0;
            case 0x1A99B4u: goto label_1a99b4;
            case 0x1A99B8u: goto label_1a99b8;
            case 0x1A99BCu: goto label_1a99bc;
            case 0x1A99C0u: goto label_1a99c0;
            case 0x1A99C4u: goto label_1a99c4;
            case 0x1A99C8u: goto label_1a99c8;
            case 0x1A99CCu: goto label_1a99cc;
            case 0x1A99D0u: goto label_1a99d0;
            case 0x1A99D4u: goto label_1a99d4;
            case 0x1A99D8u: goto label_1a99d8;
            case 0x1A99DCu: goto label_1a99dc;
            case 0x1A99E0u: goto label_1a99e0;
            case 0x1A99E4u: goto label_1a99e4;
            case 0x1A99E8u: goto label_1a99e8;
            case 0x1A99ECu: goto label_1a99ec;
            case 0x1A99F0u: goto label_1a99f0;
            case 0x1A99F4u: goto label_1a99f4;
            case 0x1A99F8u: goto label_1a99f8;
            case 0x1A99FCu: goto label_1a99fc;
            case 0x1A9A00u: goto label_1a9a00;
            case 0x1A9A04u: goto label_1a9a04;
            case 0x1A9A08u: goto label_1a9a08;
            case 0x1A9A0Cu: goto label_1a9a0c;
            case 0x1A9A10u: goto label_1a9a10;
            case 0x1A9A14u: goto label_1a9a14;
            case 0x1A9A18u: goto label_1a9a18;
            case 0x1A9A1Cu: goto label_1a9a1c;
            case 0x1A9A20u: goto label_1a9a20;
            case 0x1A9A24u: goto label_1a9a24;
            case 0x1A9A28u: goto label_1a9a28;
            case 0x1A9A2Cu: goto label_1a9a2c;
            case 0x1A9A30u: goto label_1a9a30;
            case 0x1A9A34u: goto label_1a9a34;
            case 0x1A9A38u: goto label_1a9a38;
            case 0x1A9A3Cu: goto label_1a9a3c;
            case 0x1A9A40u: goto label_1a9a40;
            case 0x1A9A44u: goto label_1a9a44;
            case 0x1A9A48u: goto label_1a9a48;
            case 0x1A9A4Cu: goto label_1a9a4c;
            case 0x1A9A50u: goto label_1a9a50;
            case 0x1A9A54u: goto label_1a9a54;
            case 0x1A9A58u: goto label_1a9a58;
            case 0x1A9A5Cu: goto label_1a9a5c;
            case 0x1A9A60u: goto label_1a9a60;
            case 0x1A9A64u: goto label_1a9a64;
            case 0x1A9A68u: goto label_1a9a68;
            case 0x1A9A6Cu: goto label_1a9a6c;
            case 0x1A9A70u: goto label_1a9a70;
            case 0x1A9A74u: goto label_1a9a74;
            case 0x1A9A78u: goto label_1a9a78;
            case 0x1A9A7Cu: goto label_1a9a7c;
            case 0x1A9A80u: goto label_1a9a80;
            case 0x1A9A84u: goto label_1a9a84;
            case 0x1A9A88u: goto label_1a9a88;
            case 0x1A9A8Cu: goto label_1a9a8c;
            case 0x1A9A90u: goto label_1a9a90;
            case 0x1A9A94u: goto label_1a9a94;
            case 0x1A9A98u: goto label_1a9a98;
            case 0x1A9A9Cu: goto label_1a9a9c;
            case 0x1A9AA0u: goto label_1a9aa0;
            case 0x1A9AA4u: goto label_1a9aa4;
            case 0x1A9AA8u: goto label_1a9aa8;
            case 0x1A9AACu: goto label_1a9aac;
            case 0x1A9AB0u: goto label_1a9ab0;
            case 0x1A9AB4u: goto label_1a9ab4;
            case 0x1A9AB8u: goto label_1a9ab8;
            case 0x1A9ABCu: goto label_1a9abc;
            case 0x1A9AC0u: goto label_1a9ac0;
            case 0x1A9AC4u: goto label_1a9ac4;
            case 0x1A9AC8u: goto label_1a9ac8;
            case 0x1A9ACCu: goto label_1a9acc;
            case 0x1A9AD0u: goto label_1a9ad0;
            case 0x1A9AD4u: goto label_1a9ad4;
            case 0x1A9AD8u: goto label_1a9ad8;
            case 0x1A9ADCu: goto label_1a9adc;
            case 0x1A9AE0u: goto label_1a9ae0;
            case 0x1A9AE4u: goto label_1a9ae4;
            case 0x1A9AE8u: goto label_1a9ae8;
            case 0x1A9AECu: goto label_1a9aec;
            case 0x1A9AF0u: goto label_1a9af0;
            case 0x1A9AF4u: goto label_1a9af4;
            case 0x1A9AF8u: goto label_1a9af8;
            case 0x1A9AFCu: goto label_1a9afc;
            case 0x1A9B00u: goto label_1a9b00;
            case 0x1A9B04u: goto label_1a9b04;
            case 0x1A9B08u: goto label_1a9b08;
            case 0x1A9B0Cu: goto label_1a9b0c;
            case 0x1A9B10u: goto label_1a9b10;
            case 0x1A9B14u: goto label_1a9b14;
            case 0x1A9B18u: goto label_1a9b18;
            case 0x1A9B1Cu: goto label_1a9b1c;
            case 0x1A9B20u: goto label_1a9b20;
            case 0x1A9B24u: goto label_1a9b24;
            case 0x1A9B28u: goto label_1a9b28;
            case 0x1A9B2Cu: goto label_1a9b2c;
            case 0x1A9B30u: goto label_1a9b30;
            case 0x1A9B34u: goto label_1a9b34;
            case 0x1A9B38u: goto label_1a9b38;
            case 0x1A9B3Cu: goto label_1a9b3c;
            case 0x1A9B40u: goto label_1a9b40;
            case 0x1A9B44u: goto label_1a9b44;
            case 0x1A9B48u: goto label_1a9b48;
            case 0x1A9B4Cu: goto label_1a9b4c;
            case 0x1A9B50u: goto label_1a9b50;
            case 0x1A9B54u: goto label_1a9b54;
            case 0x1A9B58u: goto label_1a9b58;
            case 0x1A9B5Cu: goto label_1a9b5c;
            case 0x1A9B60u: goto label_1a9b60;
            case 0x1A9B64u: goto label_1a9b64;
            case 0x1A9B68u: goto label_1a9b68;
            case 0x1A9B6Cu: goto label_1a9b6c;
            case 0x1A9B70u: goto label_1a9b70;
            case 0x1A9B74u: goto label_1a9b74;
            case 0x1A9B78u: goto label_1a9b78;
            case 0x1A9B7Cu: goto label_1a9b7c;
            case 0x1A9B80u: goto label_1a9b80;
            case 0x1A9B84u: goto label_1a9b84;
            case 0x1A9B88u: goto label_1a9b88;
            case 0x1A9B8Cu: goto label_1a9b8c;
            case 0x1A9B90u: goto label_1a9b90;
            case 0x1A9B94u: goto label_1a9b94;
            case 0x1A9B98u: goto label_1a9b98;
            case 0x1A9B9Cu: goto label_1a9b9c;
            case 0x1A9BA0u: goto label_1a9ba0;
            case 0x1A9BA4u: goto label_1a9ba4;
            case 0x1A9BA8u: goto label_1a9ba8;
            case 0x1A9BACu: goto label_1a9bac;
            case 0x1A9BB0u: goto label_1a9bb0;
            case 0x1A9BB4u: goto label_1a9bb4;
            case 0x1A9BB8u: goto label_1a9bb8;
            case 0x1A9BBCu: goto label_1a9bbc;
            case 0x1A9BC0u: goto label_1a9bc0;
            case 0x1A9BC4u: goto label_1a9bc4;
            case 0x1A9BC8u: goto label_1a9bc8;
            case 0x1A9BCCu: goto label_1a9bcc;
            case 0x1A9BD0u: goto label_1a9bd0;
            case 0x1A9BD4u: goto label_1a9bd4;
            case 0x1A9BD8u: goto label_1a9bd8;
            case 0x1A9BDCu: goto label_1a9bdc;
            case 0x1A9BE0u: goto label_1a9be0;
            case 0x1A9BE4u: goto label_1a9be4;
            case 0x1A9BE8u: goto label_1a9be8;
            case 0x1A9BECu: goto label_1a9bec;
            case 0x1A9BF0u: goto label_1a9bf0;
            case 0x1A9BF4u: goto label_1a9bf4;
            case 0x1A9BF8u: goto label_1a9bf8;
            case 0x1A9BFCu: goto label_1a9bfc;
            case 0x1A9C00u: goto label_1a9c00;
            case 0x1A9C04u: goto label_1a9c04;
            case 0x1A9C08u: goto label_1a9c08;
            case 0x1A9C0Cu: goto label_1a9c0c;
            case 0x1A9C10u: goto label_1a9c10;
            case 0x1A9C14u: goto label_1a9c14;
            case 0x1A9C18u: goto label_1a9c18;
            case 0x1A9C1Cu: goto label_1a9c1c;
            case 0x1A9C20u: goto label_1a9c20;
            case 0x1A9C24u: goto label_1a9c24;
            case 0x1A9C28u: goto label_1a9c28;
            case 0x1A9C2Cu: goto label_1a9c2c;
            case 0x1A9C30u: goto label_1a9c30;
            case 0x1A9C34u: goto label_1a9c34;
            case 0x1A9C38u: goto label_1a9c38;
            case 0x1A9C3Cu: goto label_1a9c3c;
            case 0x1A9C40u: goto label_1a9c40;
            case 0x1A9C44u: goto label_1a9c44;
            case 0x1A9C48u: goto label_1a9c48;
            case 0x1A9C4Cu: goto label_1a9c4c;
            case 0x1A9C50u: goto label_1a9c50;
            case 0x1A9C54u: goto label_1a9c54;
            case 0x1A9C58u: goto label_1a9c58;
            case 0x1A9C5Cu: goto label_1a9c5c;
            case 0x1A9C60u: goto label_1a9c60;
            case 0x1A9C64u: goto label_1a9c64;
            case 0x1A9C68u: goto label_1a9c68;
            case 0x1A9C6Cu: goto label_1a9c6c;
            case 0x1A9C70u: goto label_1a9c70;
            case 0x1A9C74u: goto label_1a9c74;
            case 0x1A9C78u: goto label_1a9c78;
            case 0x1A9C7Cu: goto label_1a9c7c;
            case 0x1A9C80u: goto label_1a9c80;
            case 0x1A9C84u: goto label_1a9c84;
            case 0x1A9C88u: goto label_1a9c88;
            case 0x1A9C8Cu: goto label_1a9c8c;
            case 0x1A9C90u: goto label_1a9c90;
            case 0x1A9C94u: goto label_1a9c94;
            case 0x1A9C98u: goto label_1a9c98;
            case 0x1A9C9Cu: goto label_1a9c9c;
            case 0x1A9CA0u: goto label_1a9ca0;
            case 0x1A9CA4u: goto label_1a9ca4;
            case 0x1A9CA8u: goto label_1a9ca8;
            case 0x1A9CACu: goto label_1a9cac;
            case 0x1A9CB0u: goto label_1a9cb0;
            case 0x1A9CB4u: goto label_1a9cb4;
            case 0x1A9CB8u: goto label_1a9cb8;
            case 0x1A9CBCu: goto label_1a9cbc;
            case 0x1A9CC0u: goto label_1a9cc0;
            case 0x1A9CC4u: goto label_1a9cc4;
            case 0x1A9CC8u: goto label_1a9cc8;
            case 0x1A9CCCu: goto label_1a9ccc;
            case 0x1A9CD0u: goto label_1a9cd0;
            case 0x1A9CD4u: goto label_1a9cd4;
            case 0x1A9CD8u: goto label_1a9cd8;
            case 0x1A9CDCu: goto label_1a9cdc;
            case 0x1A9CE0u: goto label_1a9ce0;
            case 0x1A9CE4u: goto label_1a9ce4;
            case 0x1A9CE8u: goto label_1a9ce8;
            case 0x1A9CECu: goto label_1a9cec;
            case 0x1A9CF0u: goto label_1a9cf0;
            case 0x1A9CF4u: goto label_1a9cf4;
            case 0x1A9CF8u: goto label_1a9cf8;
            case 0x1A9CFCu: goto label_1a9cfc;
            case 0x1A9D00u: goto label_1a9d00;
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D08u: goto label_1a9d08;
            case 0x1A9D0Cu: goto label_1a9d0c;
            case 0x1A9D10u: goto label_1a9d10;
            case 0x1A9D14u: goto label_1a9d14;
            case 0x1A9D18u: goto label_1a9d18;
            case 0x1A9D1Cu: goto label_1a9d1c;
            case 0x1A9D20u: goto label_1a9d20;
            case 0x1A9D24u: goto label_1a9d24;
            case 0x1A9D28u: goto label_1a9d28;
            case 0x1A9D2Cu: goto label_1a9d2c;
            case 0x1A9D30u: goto label_1a9d30;
            case 0x1A9D34u: goto label_1a9d34;
            case 0x1A9D38u: goto label_1a9d38;
            case 0x1A9D3Cu: goto label_1a9d3c;
            case 0x1A9D40u: goto label_1a9d40;
            case 0x1A9D44u: goto label_1a9d44;
            case 0x1A9D48u: goto label_1a9d48;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9D54u: goto label_1a9d54;
            case 0x1A9D58u: goto label_1a9d58;
            case 0x1A9D5Cu: goto label_1a9d5c;
            case 0x1A9D60u: goto label_1a9d60;
            case 0x1A9D64u: goto label_1a9d64;
            case 0x1A9D68u: goto label_1a9d68;
            case 0x1A9D6Cu: goto label_1a9d6c;
            case 0x1A9D70u: goto label_1a9d70;
            case 0x1A9D74u: goto label_1a9d74;
            case 0x1A9D78u: goto label_1a9d78;
            case 0x1A9D7Cu: goto label_1a9d7c;
            case 0x1A9D80u: goto label_1a9d80;
            case 0x1A9D84u: goto label_1a9d84;
            case 0x1A9D88u: goto label_1a9d88;
            case 0x1A9D8Cu: goto label_1a9d8c;
            case 0x1A9D90u: goto label_1a9d90;
            case 0x1A9D94u: goto label_1a9d94;
            case 0x1A9D98u: goto label_1a9d98;
            case 0x1A9D9Cu: goto label_1a9d9c;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DA4u: goto label_1a9da4;
            case 0x1A9DA8u: goto label_1a9da8;
            case 0x1A9DACu: goto label_1a9dac;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9DB8u: goto label_1a9db8;
            case 0x1A9DBCu: goto label_1a9dbc;
            case 0x1A9DC0u: goto label_1a9dc0;
            case 0x1A9DC4u: goto label_1a9dc4;
            case 0x1A9DC8u: goto label_1a9dc8;
            case 0x1A9DCCu: goto label_1a9dcc;
            case 0x1A9DD0u: goto label_1a9dd0;
            case 0x1A9DD4u: goto label_1a9dd4;
            case 0x1A9DD8u: goto label_1a9dd8;
            case 0x1A9DDCu: goto label_1a9ddc;
            case 0x1A9DE0u: goto label_1a9de0;
            case 0x1A9DE4u: goto label_1a9de4;
            case 0x1A9DE8u: goto label_1a9de8;
            case 0x1A9DECu: goto label_1a9dec;
            case 0x1A9DF0u: goto label_1a9df0;
            case 0x1A9DF4u: goto label_1a9df4;
            case 0x1A9DF8u: goto label_1a9df8;
            case 0x1A9DFCu: goto label_1a9dfc;
            case 0x1A9E00u: goto label_1a9e00;
            case 0x1A9E04u: goto label_1a9e04;
            case 0x1A9E08u: goto label_1a9e08;
            case 0x1A9E0Cu: goto label_1a9e0c;
            case 0x1A9E10u: goto label_1a9e10;
            case 0x1A9E14u: goto label_1a9e14;
            case 0x1A9E18u: goto label_1a9e18;
            case 0x1A9E1Cu: goto label_1a9e1c;
            case 0x1A9E20u: goto label_1a9e20;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E2Cu: goto label_1a9e2c;
            case 0x1A9E30u: goto label_1a9e30;
            case 0x1A9E34u: goto label_1a9e34;
            case 0x1A9E38u: goto label_1a9e38;
            case 0x1A9E3Cu: goto label_1a9e3c;
            case 0x1A9E40u: goto label_1a9e40;
            case 0x1A9E44u: goto label_1a9e44;
            case 0x1A9E48u: goto label_1a9e48;
            case 0x1A9E4Cu: goto label_1a9e4c;
            case 0x1A9E50u: goto label_1a9e50;
            case 0x1A9E54u: goto label_1a9e54;
            case 0x1A9E58u: goto label_1a9e58;
            case 0x1A9E5Cu: goto label_1a9e5c;
            case 0x1A9E60u: goto label_1a9e60;
            case 0x1A9E64u: goto label_1a9e64;
            case 0x1A9E68u: goto label_1a9e68;
            case 0x1A9E6Cu: goto label_1a9e6c;
            case 0x1A9E70u: goto label_1a9e70;
            case 0x1A9E74u: goto label_1a9e74;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E7Cu: goto label_1a9e7c;
            case 0x1A9E80u: goto label_1a9e80;
            case 0x1A9E84u: goto label_1a9e84;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9E90u: goto label_1a9e90;
            case 0x1A9E94u: goto label_1a9e94;
            case 0x1A9E98u: goto label_1a9e98;
            case 0x1A9E9Cu: goto label_1a9e9c;
            case 0x1A9EA0u: goto label_1a9ea0;
            case 0x1A9EA4u: goto label_1a9ea4;
            case 0x1A9EA8u: goto label_1a9ea8;
            case 0x1A9EACu: goto label_1a9eac;
            case 0x1A9EB0u: goto label_1a9eb0;
            case 0x1A9EB4u: goto label_1a9eb4;
            case 0x1A9EB8u: goto label_1a9eb8;
            case 0x1A9EBCu: goto label_1a9ebc;
            case 0x1A9EC0u: goto label_1a9ec0;
            case 0x1A9EC4u: goto label_1a9ec4;
            case 0x1A9EC8u: goto label_1a9ec8;
            case 0x1A9ECCu: goto label_1a9ecc;
            case 0x1A9ED0u: goto label_1a9ed0;
            case 0x1A9ED4u: goto label_1a9ed4;
            case 0x1A9ED8u: goto label_1a9ed8;
            case 0x1A9EDCu: goto label_1a9edc;
            case 0x1A9EE0u: goto label_1a9ee0;
            case 0x1A9EE4u: goto label_1a9ee4;
            case 0x1A9EE8u: goto label_1a9ee8;
            case 0x1A9EECu: goto label_1a9eec;
            case 0x1A9EF0u: goto label_1a9ef0;
            case 0x1A9EF4u: goto label_1a9ef4;
            case 0x1A9EF8u: goto label_1a9ef8;
            case 0x1A9EFCu: goto label_1a9efc;
            case 0x1A9F00u: goto label_1a9f00;
            case 0x1A9F04u: goto label_1a9f04;
            case 0x1A9F08u: goto label_1a9f08;
            case 0x1A9F0Cu: goto label_1a9f0c;
            case 0x1A9F10u: goto label_1a9f10;
            case 0x1A9F14u: goto label_1a9f14;
            case 0x1A9F18u: goto label_1a9f18;
            case 0x1A9F1Cu: goto label_1a9f1c;
            case 0x1A9F20u: goto label_1a9f20;
            case 0x1A9F24u: goto label_1a9f24;
            case 0x1A9F28u: goto label_1a9f28;
            case 0x1A9F2Cu: goto label_1a9f2c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F34u: goto label_1a9f34;
            case 0x1A9F38u: goto label_1a9f38;
            case 0x1A9F3Cu: goto label_1a9f3c;
            case 0x1A9F40u: goto label_1a9f40;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F48u: goto label_1a9f48;
            case 0x1A9F4Cu: goto label_1a9f4c;
            case 0x1A9F50u: goto label_1a9f50;
            case 0x1A9F54u: goto label_1a9f54;
            case 0x1A9F58u: goto label_1a9f58;
            case 0x1A9F5Cu: goto label_1a9f5c;
            case 0x1A9F60u: goto label_1a9f60;
            case 0x1A9F64u: goto label_1a9f64;
            case 0x1A9F68u: goto label_1a9f68;
            case 0x1A9F6Cu: goto label_1a9f6c;
            case 0x1A9F70u: goto label_1a9f70;
            case 0x1A9F74u: goto label_1a9f74;
            case 0x1A9F78u: goto label_1a9f78;
            case 0x1A9F7Cu: goto label_1a9f7c;
            case 0x1A9F80u: goto label_1a9f80;
            case 0x1A9F84u: goto label_1a9f84;
            case 0x1A9F88u: goto label_1a9f88;
            case 0x1A9F8Cu: goto label_1a9f8c;
            case 0x1A9F90u: goto label_1a9f90;
            case 0x1A9F94u: goto label_1a9f94;
            case 0x1A9F98u: goto label_1a9f98;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FA0u: goto label_1a9fa0;
            case 0x1A9FA4u: goto label_1a9fa4;
            case 0x1A9FA8u: goto label_1a9fa8;
            case 0x1A9FACu: goto label_1a9fac;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FB4u: goto label_1a9fb4;
            case 0x1A9FB8u: goto label_1a9fb8;
            case 0x1A9FBCu: goto label_1a9fbc;
            case 0x1A9FC0u: goto label_1a9fc0;
            case 0x1A9FC4u: goto label_1a9fc4;
            case 0x1A9FC8u: goto label_1a9fc8;
            case 0x1A9FCCu: goto label_1a9fcc;
            case 0x1A9FD0u: goto label_1a9fd0;
            case 0x1A9FD4u: goto label_1a9fd4;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1A9FDCu: goto label_1a9fdc;
            case 0x1A9FE0u: goto label_1a9fe0;
            case 0x1A9FE4u: goto label_1a9fe4;
            case 0x1A9FE8u: goto label_1a9fe8;
            case 0x1A9FECu: goto label_1a9fec;
            case 0x1A9FF0u: goto label_1a9ff0;
            case 0x1A9FF4u: goto label_1a9ff4;
            case 0x1A9FF8u: goto label_1a9ff8;
            case 0x1A9FFCu: goto label_1a9ffc;
            case 0x1AA000u: goto label_1aa000;
            case 0x1AA004u: goto label_1aa004;
            case 0x1AA008u: goto label_1aa008;
            case 0x1AA00Cu: goto label_1aa00c;
            case 0x1AA010u: goto label_1aa010;
            case 0x1AA014u: goto label_1aa014;
            case 0x1AA018u: goto label_1aa018;
            case 0x1AA01Cu: goto label_1aa01c;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA024u: goto label_1aa024;
            case 0x1AA028u: goto label_1aa028;
            case 0x1AA02Cu: goto label_1aa02c;
            case 0x1AA030u: goto label_1aa030;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA038u: goto label_1aa038;
            case 0x1AA03Cu: goto label_1aa03c;
            case 0x1AA040u: goto label_1aa040;
            case 0x1AA044u: goto label_1aa044;
            case 0x1AA048u: goto label_1aa048;
            case 0x1AA04Cu: goto label_1aa04c;
            case 0x1AA050u: goto label_1aa050;
            case 0x1AA054u: goto label_1aa054;
            case 0x1AA058u: goto label_1aa058;
            case 0x1AA05Cu: goto label_1aa05c;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA064u: goto label_1aa064;
            case 0x1AA068u: goto label_1aa068;
            case 0x1AA06Cu: goto label_1aa06c;
            case 0x1AA070u: goto label_1aa070;
            case 0x1AA074u: goto label_1aa074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F6Cu; }
            if (ctx->pc != 0x1A9F6Cu) { return; }
        }
    }
    ctx->pc = 0x1A9F6Cu;
label_1a9f6c:
    // 0x1a9f6c: 0x1000003e  b           . + 4 + (0x3E << 2)
label_1a9f70:
    if (ctx->pc == 0x1A9F70u) {
        ctx->pc = 0x1A9F74u;
        goto label_1a9f74;
    }
    ctx->pc = 0x1A9F6Cu;
    {
        const bool branch_taken_0x1a9f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9f6c) {
            ctx->pc = 0x1AA068u;
            goto label_1aa068;
        }
    }
    ctx->pc = 0x1A9F74u;
label_1a9f74:
    // 0x1a9f74: 0x0  nop
    ctx->pc = 0x1a9f74u;
    // NOP
label_1a9f78:
    // 0x1a9f78: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a9f7c:
    // 0x1a9f7c: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_1a9f80:
    if (ctx->pc == 0x1A9F80u) {
        ctx->pc = 0x1A9F84u;
        goto label_1a9f84;
    }
    ctx->pc = 0x1A9F7Cu;
    {
        const bool branch_taken_0x1a9f7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1a9f7c) {
            ctx->pc = 0x1AA048u;
            goto label_1aa048;
        }
    }
    ctx->pc = 0x1A9F84u;
label_1a9f84:
    // 0x1a9f84: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a9f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9f88:
    // 0x1a9f88: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1a9f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1a9f8c:
    // 0x1a9f8c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a9f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9f90:
    // 0x1a9f90: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a9f90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a9f94:
    // 0x1a9f94: 0xc05d080  jal         func_174200
label_1a9f98:
    if (ctx->pc == 0x1A9F98u) {
        ctx->pc = 0x1A9F98u;
            // 0x1a9f98: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A9F9Cu;
        goto label_1a9f9c;
    }
    ctx->pc = 0x1A9F94u;
    SET_GPR_U32(ctx, 31, 0x1A9F9Cu);
    ctx->pc = 0x1A9F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F94u;
            // 0x1a9f98: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
        if (ctx->pc != 0x1A9F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
        if (ctx->pc != 0x1A9F9Cu) { return; }
    }
    ctx->pc = 0x1A9F9Cu;
label_1a9f9c:
    // 0x1a9f9c: 0xc050bb4  jal         func_142ED0
label_1a9fa0:
    if (ctx->pc == 0x1A9FA0u) {
        ctx->pc = 0x1A9FA4u;
        goto label_1a9fa4;
    }
    ctx->pc = 0x1A9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1A9FA4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FA4u; }
        if (ctx->pc != 0x1A9FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FA4u; }
        if (ctx->pc != 0x1A9FA4u) { return; }
    }
    ctx->pc = 0x1A9FA4u;
label_1a9fa4:
    // 0x1a9fa4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a9fa4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a9fa8:
    // 0x1a9fa8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a9fac:
    if (ctx->pc == 0x1A9FACu) {
        ctx->pc = 0x1A9FB0u;
        goto label_1a9fb0;
    }
    ctx->pc = 0x1A9FA8u;
    {
        const bool branch_taken_0x1a9fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fa8) {
            ctx->pc = 0x1A9FC8u;
            goto label_1a9fc8;
        }
    }
    ctx->pc = 0x1A9FB0u;
label_1a9fb0:
    // 0x1a9fb0: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a9fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9fb4:
    // 0x1a9fb4: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1a9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1a9fb8:
    // 0x1a9fb8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a9fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9fbc:
    // 0x1a9fbc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a9fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a9fc0:
    // 0x1a9fc0: 0xc05d080  jal         func_174200
label_1a9fc4:
    if (ctx->pc == 0x1A9FC4u) {
        ctx->pc = 0x1A9FC4u;
            // 0x1a9fc4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A9FC8u;
        goto label_1a9fc8;
    }
    ctx->pc = 0x1A9FC0u;
    SET_GPR_U32(ctx, 31, 0x1A9FC8u);
    ctx->pc = 0x1A9FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FC0u;
            // 0x1a9fc4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FC8u; }
        if (ctx->pc != 0x1A9FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FC8u; }
        if (ctx->pc != 0x1A9FC8u) { return; }
    }
    ctx->pc = 0x1A9FC8u;
label_1a9fc8:
    // 0x1a9fc8: 0xc050bb4  jal         func_142ED0
label_1a9fcc:
    if (ctx->pc == 0x1A9FCCu) {
        ctx->pc = 0x1A9FD0u;
        goto label_1a9fd0;
    }
    ctx->pc = 0x1A9FC8u;
    SET_GPR_U32(ctx, 31, 0x1A9FD0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD0u; }
        if (ctx->pc != 0x1A9FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD0u; }
        if (ctx->pc != 0x1A9FD0u) { return; }
    }
    ctx->pc = 0x1A9FD0u;
label_1a9fd0:
    // 0x1a9fd0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a9fd0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1a9fd4:
    // 0x1a9fd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1a9fd8:
    if (ctx->pc == 0x1A9FD8u) {
        ctx->pc = 0x1A9FDCu;
        goto label_1a9fdc;
    }
    ctx->pc = 0x1A9FD4u;
    {
        const bool branch_taken_0x1a9fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9fd4) {
            ctx->pc = 0x1A9FF8u;
            goto label_1a9ff8;
        }
    }
    ctx->pc = 0x1A9FDCu;
label_1a9fdc:
    // 0x1a9fdc: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1a9fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9fe0:
    // 0x1a9fe0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1a9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1a9fe4:
    // 0x1a9fe4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1a9fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9fe8:
    // 0x1a9fe8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1a9fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1a9fec:
    // 0x1a9fec: 0xc05d080  jal         func_174200
label_1a9ff0:
    if (ctx->pc == 0x1A9FF0u) {
        ctx->pc = 0x1A9FF0u;
            // 0x1a9ff0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1A9FF4u;
        goto label_1a9ff4;
    }
    ctx->pc = 0x1A9FECu;
    SET_GPR_U32(ctx, 31, 0x1A9FF4u);
    ctx->pc = 0x1A9FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FECu;
            // 0x1a9ff0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    }
    ctx->pc = 0x1A9FF4u;
label_1a9ff4:
    // 0x1a9ff4: 0x0  nop
    ctx->pc = 0x1a9ff4u;
    // NOP
label_1a9ff8:
    // 0x1a9ff8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1a9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1a9ffc:
    // 0x1a9ffc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x1a9ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1aa000:
    // 0x1aa000: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1aa000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aa004:
    // 0x1aa004: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1aa004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1aa008:
    // 0x1aa008: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1aa008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aa00c:
    // 0x1aa00c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1aa00cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1aa010:
    // 0x1aa010: 0x0  nop
    ctx->pc = 0x1aa010u;
    // NOP
label_1aa014:
    // 0x1aa014: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1aa014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1aa018:
    // 0x1aa018: 0xc053740  jal         func_14DD00
label_1aa01c:
    if (ctx->pc == 0x1AA01Cu) {
        ctx->pc = 0x1AA01Cu;
            // 0x1aa01c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x1AA020u;
        goto label_1aa020;
    }
    ctx->pc = 0x1AA018u;
    SET_GPR_U32(ctx, 31, 0x1AA020u);
    ctx->pc = 0x1AA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA018u;
            // 0x1aa01c: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA020u; }
        if (ctx->pc != 0x1AA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA020u; }
        if (ctx->pc != 0x1AA020u) { return; }
    }
    ctx->pc = 0x1AA020u;
label_1aa020:
    // 0x1aa020: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1aa020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1aa024:
    // 0x1aa024: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1aa024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aa028:
    // 0x1aa028: 0xc07b0fc  jal         func_1EC3F0
label_1aa02c:
    if (ctx->pc == 0x1AA02Cu) {
        ctx->pc = 0x1AA02Cu;
            // 0x1aa02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA030u;
        goto label_1aa030;
    }
    ctx->pc = 0x1AA028u;
    SET_GPR_U32(ctx, 31, 0x1AA030u);
    ctx->pc = 0x1AA02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA028u;
            // 0x1aa02c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA030u; }
        if (ctx->pc != 0x1AA030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA030u; }
        if (ctx->pc != 0x1AA030u) { return; }
    }
    ctx->pc = 0x1AA030u;
label_1aa030:
    // 0x1aa030: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1aa030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_1aa034:
    // 0x1aa034: 0x40f809  jalr        $v0
label_1aa038:
    if (ctx->pc == 0x1AA038u) {
        ctx->pc = 0x1AA038u;
            // 0x1aa038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA03Cu;
        goto label_1aa03c;
    }
    ctx->pc = 0x1AA034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA03Cu);
        ctx->pc = 0x1AA038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA034u;
            // 0x1aa038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A98D0u: goto label_1a98d0;
            case 0x1A98D4u: goto label_1a98d4;
            case 0x1A98D8u: goto label_1a98d8;
            case 0x1A98DCu: goto label_1a98dc;
            case 0x1A98E0u: goto label_1a98e0;
            case 0x1A98E4u: goto label_1a98e4;
            case 0x1A98E8u: goto label_1a98e8;
            case 0x1A98ECu: goto label_1a98ec;
            case 0x1A98F0u: goto label_1a98f0;
            case 0x1A98F4u: goto label_1a98f4;
            case 0x1A98F8u: goto label_1a98f8;
            case 0x1A98FCu: goto label_1a98fc;
            case 0x1A9900u: goto label_1a9900;
            case 0x1A9904u: goto label_1a9904;
            case 0x1A9908u: goto label_1a9908;
            case 0x1A990Cu: goto label_1a990c;
            case 0x1A9910u: goto label_1a9910;
            case 0x1A9914u: goto label_1a9914;
            case 0x1A9918u: goto label_1a9918;
            case 0x1A991Cu: goto label_1a991c;
            case 0x1A9920u: goto label_1a9920;
            case 0x1A9924u: goto label_1a9924;
            case 0x1A9928u: goto label_1a9928;
            case 0x1A992Cu: goto label_1a992c;
            case 0x1A9930u: goto label_1a9930;
            case 0x1A9934u: goto label_1a9934;
            case 0x1A9938u: goto label_1a9938;
            case 0x1A993Cu: goto label_1a993c;
            case 0x1A9940u: goto label_1a9940;
            case 0x1A9944u: goto label_1a9944;
            case 0x1A9948u: goto label_1a9948;
            case 0x1A994Cu: goto label_1a994c;
            case 0x1A9950u: goto label_1a9950;
            case 0x1A9954u: goto label_1a9954;
            case 0x1A9958u: goto label_1a9958;
            case 0x1A995Cu: goto label_1a995c;
            case 0x1A9960u: goto label_1a9960;
            case 0x1A9964u: goto label_1a9964;
            case 0x1A9968u: goto label_1a9968;
            case 0x1A996Cu: goto label_1a996c;
            case 0x1A9970u: goto label_1a9970;
            case 0x1A9974u: goto label_1a9974;
            case 0x1A9978u: goto label_1a9978;
            case 0x1A997Cu: goto label_1a997c;
            case 0x1A9980u: goto label_1a9980;
            case 0x1A9984u: goto label_1a9984;
            case 0x1A9988u: goto label_1a9988;
            case 0x1A998Cu: goto label_1a998c;
            case 0x1A9990u: goto label_1a9990;
            case 0x1A9994u: goto label_1a9994;
            case 0x1A9998u: goto label_1a9998;
            case 0x1A999Cu: goto label_1a999c;
            case 0x1A99A0u: goto label_1a99a0;
            case 0x1A99A4u: goto label_1a99a4;
            case 0x1A99A8u: goto label_1a99a8;
            case 0x1A99ACu: goto label_1a99ac;
            case 0x1A99B0u: goto label_1a99b0;
            case 0x1A99B4u: goto label_1a99b4;
            case 0x1A99B8u: goto label_1a99b8;
            case 0x1A99BCu: goto label_1a99bc;
            case 0x1A99C0u: goto label_1a99c0;
            case 0x1A99C4u: goto label_1a99c4;
            case 0x1A99C8u: goto label_1a99c8;
            case 0x1A99CCu: goto label_1a99cc;
            case 0x1A99D0u: goto label_1a99d0;
            case 0x1A99D4u: goto label_1a99d4;
            case 0x1A99D8u: goto label_1a99d8;
            case 0x1A99DCu: goto label_1a99dc;
            case 0x1A99E0u: goto label_1a99e0;
            case 0x1A99E4u: goto label_1a99e4;
            case 0x1A99E8u: goto label_1a99e8;
            case 0x1A99ECu: goto label_1a99ec;
            case 0x1A99F0u: goto label_1a99f0;
            case 0x1A99F4u: goto label_1a99f4;
            case 0x1A99F8u: goto label_1a99f8;
            case 0x1A99FCu: goto label_1a99fc;
            case 0x1A9A00u: goto label_1a9a00;
            case 0x1A9A04u: goto label_1a9a04;
            case 0x1A9A08u: goto label_1a9a08;
            case 0x1A9A0Cu: goto label_1a9a0c;
            case 0x1A9A10u: goto label_1a9a10;
            case 0x1A9A14u: goto label_1a9a14;
            case 0x1A9A18u: goto label_1a9a18;
            case 0x1A9A1Cu: goto label_1a9a1c;
            case 0x1A9A20u: goto label_1a9a20;
            case 0x1A9A24u: goto label_1a9a24;
            case 0x1A9A28u: goto label_1a9a28;
            case 0x1A9A2Cu: goto label_1a9a2c;
            case 0x1A9A30u: goto label_1a9a30;
            case 0x1A9A34u: goto label_1a9a34;
            case 0x1A9A38u: goto label_1a9a38;
            case 0x1A9A3Cu: goto label_1a9a3c;
            case 0x1A9A40u: goto label_1a9a40;
            case 0x1A9A44u: goto label_1a9a44;
            case 0x1A9A48u: goto label_1a9a48;
            case 0x1A9A4Cu: goto label_1a9a4c;
            case 0x1A9A50u: goto label_1a9a50;
            case 0x1A9A54u: goto label_1a9a54;
            case 0x1A9A58u: goto label_1a9a58;
            case 0x1A9A5Cu: goto label_1a9a5c;
            case 0x1A9A60u: goto label_1a9a60;
            case 0x1A9A64u: goto label_1a9a64;
            case 0x1A9A68u: goto label_1a9a68;
            case 0x1A9A6Cu: goto label_1a9a6c;
            case 0x1A9A70u: goto label_1a9a70;
            case 0x1A9A74u: goto label_1a9a74;
            case 0x1A9A78u: goto label_1a9a78;
            case 0x1A9A7Cu: goto label_1a9a7c;
            case 0x1A9A80u: goto label_1a9a80;
            case 0x1A9A84u: goto label_1a9a84;
            case 0x1A9A88u: goto label_1a9a88;
            case 0x1A9A8Cu: goto label_1a9a8c;
            case 0x1A9A90u: goto label_1a9a90;
            case 0x1A9A94u: goto label_1a9a94;
            case 0x1A9A98u: goto label_1a9a98;
            case 0x1A9A9Cu: goto label_1a9a9c;
            case 0x1A9AA0u: goto label_1a9aa0;
            case 0x1A9AA4u: goto label_1a9aa4;
            case 0x1A9AA8u: goto label_1a9aa8;
            case 0x1A9AACu: goto label_1a9aac;
            case 0x1A9AB0u: goto label_1a9ab0;
            case 0x1A9AB4u: goto label_1a9ab4;
            case 0x1A9AB8u: goto label_1a9ab8;
            case 0x1A9ABCu: goto label_1a9abc;
            case 0x1A9AC0u: goto label_1a9ac0;
            case 0x1A9AC4u: goto label_1a9ac4;
            case 0x1A9AC8u: goto label_1a9ac8;
            case 0x1A9ACCu: goto label_1a9acc;
            case 0x1A9AD0u: goto label_1a9ad0;
            case 0x1A9AD4u: goto label_1a9ad4;
            case 0x1A9AD8u: goto label_1a9ad8;
            case 0x1A9ADCu: goto label_1a9adc;
            case 0x1A9AE0u: goto label_1a9ae0;
            case 0x1A9AE4u: goto label_1a9ae4;
            case 0x1A9AE8u: goto label_1a9ae8;
            case 0x1A9AECu: goto label_1a9aec;
            case 0x1A9AF0u: goto label_1a9af0;
            case 0x1A9AF4u: goto label_1a9af4;
            case 0x1A9AF8u: goto label_1a9af8;
            case 0x1A9AFCu: goto label_1a9afc;
            case 0x1A9B00u: goto label_1a9b00;
            case 0x1A9B04u: goto label_1a9b04;
            case 0x1A9B08u: goto label_1a9b08;
            case 0x1A9B0Cu: goto label_1a9b0c;
            case 0x1A9B10u: goto label_1a9b10;
            case 0x1A9B14u: goto label_1a9b14;
            case 0x1A9B18u: goto label_1a9b18;
            case 0x1A9B1Cu: goto label_1a9b1c;
            case 0x1A9B20u: goto label_1a9b20;
            case 0x1A9B24u: goto label_1a9b24;
            case 0x1A9B28u: goto label_1a9b28;
            case 0x1A9B2Cu: goto label_1a9b2c;
            case 0x1A9B30u: goto label_1a9b30;
            case 0x1A9B34u: goto label_1a9b34;
            case 0x1A9B38u: goto label_1a9b38;
            case 0x1A9B3Cu: goto label_1a9b3c;
            case 0x1A9B40u: goto label_1a9b40;
            case 0x1A9B44u: goto label_1a9b44;
            case 0x1A9B48u: goto label_1a9b48;
            case 0x1A9B4Cu: goto label_1a9b4c;
            case 0x1A9B50u: goto label_1a9b50;
            case 0x1A9B54u: goto label_1a9b54;
            case 0x1A9B58u: goto label_1a9b58;
            case 0x1A9B5Cu: goto label_1a9b5c;
            case 0x1A9B60u: goto label_1a9b60;
            case 0x1A9B64u: goto label_1a9b64;
            case 0x1A9B68u: goto label_1a9b68;
            case 0x1A9B6Cu: goto label_1a9b6c;
            case 0x1A9B70u: goto label_1a9b70;
            case 0x1A9B74u: goto label_1a9b74;
            case 0x1A9B78u: goto label_1a9b78;
            case 0x1A9B7Cu: goto label_1a9b7c;
            case 0x1A9B80u: goto label_1a9b80;
            case 0x1A9B84u: goto label_1a9b84;
            case 0x1A9B88u: goto label_1a9b88;
            case 0x1A9B8Cu: goto label_1a9b8c;
            case 0x1A9B90u: goto label_1a9b90;
            case 0x1A9B94u: goto label_1a9b94;
            case 0x1A9B98u: goto label_1a9b98;
            case 0x1A9B9Cu: goto label_1a9b9c;
            case 0x1A9BA0u: goto label_1a9ba0;
            case 0x1A9BA4u: goto label_1a9ba4;
            case 0x1A9BA8u: goto label_1a9ba8;
            case 0x1A9BACu: goto label_1a9bac;
            case 0x1A9BB0u: goto label_1a9bb0;
            case 0x1A9BB4u: goto label_1a9bb4;
            case 0x1A9BB8u: goto label_1a9bb8;
            case 0x1A9BBCu: goto label_1a9bbc;
            case 0x1A9BC0u: goto label_1a9bc0;
            case 0x1A9BC4u: goto label_1a9bc4;
            case 0x1A9BC8u: goto label_1a9bc8;
            case 0x1A9BCCu: goto label_1a9bcc;
            case 0x1A9BD0u: goto label_1a9bd0;
            case 0x1A9BD4u: goto label_1a9bd4;
            case 0x1A9BD8u: goto label_1a9bd8;
            case 0x1A9BDCu: goto label_1a9bdc;
            case 0x1A9BE0u: goto label_1a9be0;
            case 0x1A9BE4u: goto label_1a9be4;
            case 0x1A9BE8u: goto label_1a9be8;
            case 0x1A9BECu: goto label_1a9bec;
            case 0x1A9BF0u: goto label_1a9bf0;
            case 0x1A9BF4u: goto label_1a9bf4;
            case 0x1A9BF8u: goto label_1a9bf8;
            case 0x1A9BFCu: goto label_1a9bfc;
            case 0x1A9C00u: goto label_1a9c00;
            case 0x1A9C04u: goto label_1a9c04;
            case 0x1A9C08u: goto label_1a9c08;
            case 0x1A9C0Cu: goto label_1a9c0c;
            case 0x1A9C10u: goto label_1a9c10;
            case 0x1A9C14u: goto label_1a9c14;
            case 0x1A9C18u: goto label_1a9c18;
            case 0x1A9C1Cu: goto label_1a9c1c;
            case 0x1A9C20u: goto label_1a9c20;
            case 0x1A9C24u: goto label_1a9c24;
            case 0x1A9C28u: goto label_1a9c28;
            case 0x1A9C2Cu: goto label_1a9c2c;
            case 0x1A9C30u: goto label_1a9c30;
            case 0x1A9C34u: goto label_1a9c34;
            case 0x1A9C38u: goto label_1a9c38;
            case 0x1A9C3Cu: goto label_1a9c3c;
            case 0x1A9C40u: goto label_1a9c40;
            case 0x1A9C44u: goto label_1a9c44;
            case 0x1A9C48u: goto label_1a9c48;
            case 0x1A9C4Cu: goto label_1a9c4c;
            case 0x1A9C50u: goto label_1a9c50;
            case 0x1A9C54u: goto label_1a9c54;
            case 0x1A9C58u: goto label_1a9c58;
            case 0x1A9C5Cu: goto label_1a9c5c;
            case 0x1A9C60u: goto label_1a9c60;
            case 0x1A9C64u: goto label_1a9c64;
            case 0x1A9C68u: goto label_1a9c68;
            case 0x1A9C6Cu: goto label_1a9c6c;
            case 0x1A9C70u: goto label_1a9c70;
            case 0x1A9C74u: goto label_1a9c74;
            case 0x1A9C78u: goto label_1a9c78;
            case 0x1A9C7Cu: goto label_1a9c7c;
            case 0x1A9C80u: goto label_1a9c80;
            case 0x1A9C84u: goto label_1a9c84;
            case 0x1A9C88u: goto label_1a9c88;
            case 0x1A9C8Cu: goto label_1a9c8c;
            case 0x1A9C90u: goto label_1a9c90;
            case 0x1A9C94u: goto label_1a9c94;
            case 0x1A9C98u: goto label_1a9c98;
            case 0x1A9C9Cu: goto label_1a9c9c;
            case 0x1A9CA0u: goto label_1a9ca0;
            case 0x1A9CA4u: goto label_1a9ca4;
            case 0x1A9CA8u: goto label_1a9ca8;
            case 0x1A9CACu: goto label_1a9cac;
            case 0x1A9CB0u: goto label_1a9cb0;
            case 0x1A9CB4u: goto label_1a9cb4;
            case 0x1A9CB8u: goto label_1a9cb8;
            case 0x1A9CBCu: goto label_1a9cbc;
            case 0x1A9CC0u: goto label_1a9cc0;
            case 0x1A9CC4u: goto label_1a9cc4;
            case 0x1A9CC8u: goto label_1a9cc8;
            case 0x1A9CCCu: goto label_1a9ccc;
            case 0x1A9CD0u: goto label_1a9cd0;
            case 0x1A9CD4u: goto label_1a9cd4;
            case 0x1A9CD8u: goto label_1a9cd8;
            case 0x1A9CDCu: goto label_1a9cdc;
            case 0x1A9CE0u: goto label_1a9ce0;
            case 0x1A9CE4u: goto label_1a9ce4;
            case 0x1A9CE8u: goto label_1a9ce8;
            case 0x1A9CECu: goto label_1a9cec;
            case 0x1A9CF0u: goto label_1a9cf0;
            case 0x1A9CF4u: goto label_1a9cf4;
            case 0x1A9CF8u: goto label_1a9cf8;
            case 0x1A9CFCu: goto label_1a9cfc;
            case 0x1A9D00u: goto label_1a9d00;
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D08u: goto label_1a9d08;
            case 0x1A9D0Cu: goto label_1a9d0c;
            case 0x1A9D10u: goto label_1a9d10;
            case 0x1A9D14u: goto label_1a9d14;
            case 0x1A9D18u: goto label_1a9d18;
            case 0x1A9D1Cu: goto label_1a9d1c;
            case 0x1A9D20u: goto label_1a9d20;
            case 0x1A9D24u: goto label_1a9d24;
            case 0x1A9D28u: goto label_1a9d28;
            case 0x1A9D2Cu: goto label_1a9d2c;
            case 0x1A9D30u: goto label_1a9d30;
            case 0x1A9D34u: goto label_1a9d34;
            case 0x1A9D38u: goto label_1a9d38;
            case 0x1A9D3Cu: goto label_1a9d3c;
            case 0x1A9D40u: goto label_1a9d40;
            case 0x1A9D44u: goto label_1a9d44;
            case 0x1A9D48u: goto label_1a9d48;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9D54u: goto label_1a9d54;
            case 0x1A9D58u: goto label_1a9d58;
            case 0x1A9D5Cu: goto label_1a9d5c;
            case 0x1A9D60u: goto label_1a9d60;
            case 0x1A9D64u: goto label_1a9d64;
            case 0x1A9D68u: goto label_1a9d68;
            case 0x1A9D6Cu: goto label_1a9d6c;
            case 0x1A9D70u: goto label_1a9d70;
            case 0x1A9D74u: goto label_1a9d74;
            case 0x1A9D78u: goto label_1a9d78;
            case 0x1A9D7Cu: goto label_1a9d7c;
            case 0x1A9D80u: goto label_1a9d80;
            case 0x1A9D84u: goto label_1a9d84;
            case 0x1A9D88u: goto label_1a9d88;
            case 0x1A9D8Cu: goto label_1a9d8c;
            case 0x1A9D90u: goto label_1a9d90;
            case 0x1A9D94u: goto label_1a9d94;
            case 0x1A9D98u: goto label_1a9d98;
            case 0x1A9D9Cu: goto label_1a9d9c;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DA4u: goto label_1a9da4;
            case 0x1A9DA8u: goto label_1a9da8;
            case 0x1A9DACu: goto label_1a9dac;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9DB8u: goto label_1a9db8;
            case 0x1A9DBCu: goto label_1a9dbc;
            case 0x1A9DC0u: goto label_1a9dc0;
            case 0x1A9DC4u: goto label_1a9dc4;
            case 0x1A9DC8u: goto label_1a9dc8;
            case 0x1A9DCCu: goto label_1a9dcc;
            case 0x1A9DD0u: goto label_1a9dd0;
            case 0x1A9DD4u: goto label_1a9dd4;
            case 0x1A9DD8u: goto label_1a9dd8;
            case 0x1A9DDCu: goto label_1a9ddc;
            case 0x1A9DE0u: goto label_1a9de0;
            case 0x1A9DE4u: goto label_1a9de4;
            case 0x1A9DE8u: goto label_1a9de8;
            case 0x1A9DECu: goto label_1a9dec;
            case 0x1A9DF0u: goto label_1a9df0;
            case 0x1A9DF4u: goto label_1a9df4;
            case 0x1A9DF8u: goto label_1a9df8;
            case 0x1A9DFCu: goto label_1a9dfc;
            case 0x1A9E00u: goto label_1a9e00;
            case 0x1A9E04u: goto label_1a9e04;
            case 0x1A9E08u: goto label_1a9e08;
            case 0x1A9E0Cu: goto label_1a9e0c;
            case 0x1A9E10u: goto label_1a9e10;
            case 0x1A9E14u: goto label_1a9e14;
            case 0x1A9E18u: goto label_1a9e18;
            case 0x1A9E1Cu: goto label_1a9e1c;
            case 0x1A9E20u: goto label_1a9e20;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E2Cu: goto label_1a9e2c;
            case 0x1A9E30u: goto label_1a9e30;
            case 0x1A9E34u: goto label_1a9e34;
            case 0x1A9E38u: goto label_1a9e38;
            case 0x1A9E3Cu: goto label_1a9e3c;
            case 0x1A9E40u: goto label_1a9e40;
            case 0x1A9E44u: goto label_1a9e44;
            case 0x1A9E48u: goto label_1a9e48;
            case 0x1A9E4Cu: goto label_1a9e4c;
            case 0x1A9E50u: goto label_1a9e50;
            case 0x1A9E54u: goto label_1a9e54;
            case 0x1A9E58u: goto label_1a9e58;
            case 0x1A9E5Cu: goto label_1a9e5c;
            case 0x1A9E60u: goto label_1a9e60;
            case 0x1A9E64u: goto label_1a9e64;
            case 0x1A9E68u: goto label_1a9e68;
            case 0x1A9E6Cu: goto label_1a9e6c;
            case 0x1A9E70u: goto label_1a9e70;
            case 0x1A9E74u: goto label_1a9e74;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E7Cu: goto label_1a9e7c;
            case 0x1A9E80u: goto label_1a9e80;
            case 0x1A9E84u: goto label_1a9e84;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9E90u: goto label_1a9e90;
            case 0x1A9E94u: goto label_1a9e94;
            case 0x1A9E98u: goto label_1a9e98;
            case 0x1A9E9Cu: goto label_1a9e9c;
            case 0x1A9EA0u: goto label_1a9ea0;
            case 0x1A9EA4u: goto label_1a9ea4;
            case 0x1A9EA8u: goto label_1a9ea8;
            case 0x1A9EACu: goto label_1a9eac;
            case 0x1A9EB0u: goto label_1a9eb0;
            case 0x1A9EB4u: goto label_1a9eb4;
            case 0x1A9EB8u: goto label_1a9eb8;
            case 0x1A9EBCu: goto label_1a9ebc;
            case 0x1A9EC0u: goto label_1a9ec0;
            case 0x1A9EC4u: goto label_1a9ec4;
            case 0x1A9EC8u: goto label_1a9ec8;
            case 0x1A9ECCu: goto label_1a9ecc;
            case 0x1A9ED0u: goto label_1a9ed0;
            case 0x1A9ED4u: goto label_1a9ed4;
            case 0x1A9ED8u: goto label_1a9ed8;
            case 0x1A9EDCu: goto label_1a9edc;
            case 0x1A9EE0u: goto label_1a9ee0;
            case 0x1A9EE4u: goto label_1a9ee4;
            case 0x1A9EE8u: goto label_1a9ee8;
            case 0x1A9EECu: goto label_1a9eec;
            case 0x1A9EF0u: goto label_1a9ef0;
            case 0x1A9EF4u: goto label_1a9ef4;
            case 0x1A9EF8u: goto label_1a9ef8;
            case 0x1A9EFCu: goto label_1a9efc;
            case 0x1A9F00u: goto label_1a9f00;
            case 0x1A9F04u: goto label_1a9f04;
            case 0x1A9F08u: goto label_1a9f08;
            case 0x1A9F0Cu: goto label_1a9f0c;
            case 0x1A9F10u: goto label_1a9f10;
            case 0x1A9F14u: goto label_1a9f14;
            case 0x1A9F18u: goto label_1a9f18;
            case 0x1A9F1Cu: goto label_1a9f1c;
            case 0x1A9F20u: goto label_1a9f20;
            case 0x1A9F24u: goto label_1a9f24;
            case 0x1A9F28u: goto label_1a9f28;
            case 0x1A9F2Cu: goto label_1a9f2c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F34u: goto label_1a9f34;
            case 0x1A9F38u: goto label_1a9f38;
            case 0x1A9F3Cu: goto label_1a9f3c;
            case 0x1A9F40u: goto label_1a9f40;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F48u: goto label_1a9f48;
            case 0x1A9F4Cu: goto label_1a9f4c;
            case 0x1A9F50u: goto label_1a9f50;
            case 0x1A9F54u: goto label_1a9f54;
            case 0x1A9F58u: goto label_1a9f58;
            case 0x1A9F5Cu: goto label_1a9f5c;
            case 0x1A9F60u: goto label_1a9f60;
            case 0x1A9F64u: goto label_1a9f64;
            case 0x1A9F68u: goto label_1a9f68;
            case 0x1A9F6Cu: goto label_1a9f6c;
            case 0x1A9F70u: goto label_1a9f70;
            case 0x1A9F74u: goto label_1a9f74;
            case 0x1A9F78u: goto label_1a9f78;
            case 0x1A9F7Cu: goto label_1a9f7c;
            case 0x1A9F80u: goto label_1a9f80;
            case 0x1A9F84u: goto label_1a9f84;
            case 0x1A9F88u: goto label_1a9f88;
            case 0x1A9F8Cu: goto label_1a9f8c;
            case 0x1A9F90u: goto label_1a9f90;
            case 0x1A9F94u: goto label_1a9f94;
            case 0x1A9F98u: goto label_1a9f98;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FA0u: goto label_1a9fa0;
            case 0x1A9FA4u: goto label_1a9fa4;
            case 0x1A9FA8u: goto label_1a9fa8;
            case 0x1A9FACu: goto label_1a9fac;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FB4u: goto label_1a9fb4;
            case 0x1A9FB8u: goto label_1a9fb8;
            case 0x1A9FBCu: goto label_1a9fbc;
            case 0x1A9FC0u: goto label_1a9fc0;
            case 0x1A9FC4u: goto label_1a9fc4;
            case 0x1A9FC8u: goto label_1a9fc8;
            case 0x1A9FCCu: goto label_1a9fcc;
            case 0x1A9FD0u: goto label_1a9fd0;
            case 0x1A9FD4u: goto label_1a9fd4;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1A9FDCu: goto label_1a9fdc;
            case 0x1A9FE0u: goto label_1a9fe0;
            case 0x1A9FE4u: goto label_1a9fe4;
            case 0x1A9FE8u: goto label_1a9fe8;
            case 0x1A9FECu: goto label_1a9fec;
            case 0x1A9FF0u: goto label_1a9ff0;
            case 0x1A9FF4u: goto label_1a9ff4;
            case 0x1A9FF8u: goto label_1a9ff8;
            case 0x1A9FFCu: goto label_1a9ffc;
            case 0x1AA000u: goto label_1aa000;
            case 0x1AA004u: goto label_1aa004;
            case 0x1AA008u: goto label_1aa008;
            case 0x1AA00Cu: goto label_1aa00c;
            case 0x1AA010u: goto label_1aa010;
            case 0x1AA014u: goto label_1aa014;
            case 0x1AA018u: goto label_1aa018;
            case 0x1AA01Cu: goto label_1aa01c;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA024u: goto label_1aa024;
            case 0x1AA028u: goto label_1aa028;
            case 0x1AA02Cu: goto label_1aa02c;
            case 0x1AA030u: goto label_1aa030;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA038u: goto label_1aa038;
            case 0x1AA03Cu: goto label_1aa03c;
            case 0x1AA040u: goto label_1aa040;
            case 0x1AA044u: goto label_1aa044;
            case 0x1AA048u: goto label_1aa048;
            case 0x1AA04Cu: goto label_1aa04c;
            case 0x1AA050u: goto label_1aa050;
            case 0x1AA054u: goto label_1aa054;
            case 0x1AA058u: goto label_1aa058;
            case 0x1AA05Cu: goto label_1aa05c;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA064u: goto label_1aa064;
            case 0x1AA068u: goto label_1aa068;
            case 0x1AA06Cu: goto label_1aa06c;
            case 0x1AA070u: goto label_1aa070;
            case 0x1AA074u: goto label_1aa074;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA03Cu; }
            if (ctx->pc != 0x1AA03Cu) { return; }
        }
    }
    ctx->pc = 0x1AA03Cu;
label_1aa03c:
    // 0x1aa03c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1aa040:
    if (ctx->pc == 0x1AA040u) {
        ctx->pc = 0x1AA044u;
        goto label_1aa044;
    }
    ctx->pc = 0x1AA03Cu;
    {
        const bool branch_taken_0x1aa03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa03c) {
            ctx->pc = 0x1AA068u;
            goto label_1aa068;
        }
    }
    ctx->pc = 0x1AA044u;
label_1aa044:
    // 0x1aa044: 0x0  nop
    ctx->pc = 0x1aa044u;
    // NOP
label_1aa048:
    // 0x1aa048: 0x3c06001b  lui         $a2, 0x1B
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27 << 16));
label_1aa04c:
    // 0x1aa04c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1aa04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa050:
    // 0x1aa050: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_1aa054:
    // 0x1aa054: 0x24c69660  addiu       $a2, $a2, -0x69A0
    ctx->pc = 0x1aa054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940256));
label_1aa058:
    // 0x1aa058: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1aa058u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa05c:
    // 0x1aa05c: 0xc053ca4  jal         func_14F290
label_1aa060:
    if (ctx->pc == 0x1AA060u) {
        ctx->pc = 0x1AA060u;
            // 0x1aa060: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA064u;
        goto label_1aa064;
    }
    ctx->pc = 0x1AA05Cu;
    SET_GPR_U32(ctx, 31, 0x1AA064u);
    ctx->pc = 0x1AA060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA05Cu;
            // 0x1aa060: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA064u; }
        if (ctx->pc != 0x1AA064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA064u; }
        if (ctx->pc != 0x1AA064u) { return; }
    }
    ctx->pc = 0x1AA064u;
label_1aa064:
    // 0x1aa064: 0x0  nop
    ctx->pc = 0x1aa064u;
    // NOP
label_1aa068:
    // 0x1aa068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1aa068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa06c:
    // 0x1aa06c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1aa06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa070:
    // 0x1aa070: 0x3e00008  jr          $ra
label_1aa074:
    if (ctx->pc == 0x1AA074u) {
        ctx->pc = 0x1AA074u;
            // 0x1aa074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1AA078u;
        goto label_fallthrough_0x1aa070;
    }
    ctx->pc = 0x1AA070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA070u;
            // 0x1aa074: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A98D0u: goto label_1a98d0;
            case 0x1A98D4u: goto label_1a98d4;
            case 0x1A98D8u: goto label_1a98d8;
            case 0x1A98DCu: goto label_1a98dc;
            case 0x1A98E0u: goto label_1a98e0;
            case 0x1A98E4u: goto label_1a98e4;
            case 0x1A98E8u: goto label_1a98e8;
            case 0x1A98ECu: goto label_1a98ec;
            case 0x1A98F0u: goto label_1a98f0;
            case 0x1A98F4u: goto label_1a98f4;
            case 0x1A98F8u: goto label_1a98f8;
            case 0x1A98FCu: goto label_1a98fc;
            case 0x1A9900u: goto label_1a9900;
            case 0x1A9904u: goto label_1a9904;
            case 0x1A9908u: goto label_1a9908;
            case 0x1A990Cu: goto label_1a990c;
            case 0x1A9910u: goto label_1a9910;
            case 0x1A9914u: goto label_1a9914;
            case 0x1A9918u: goto label_1a9918;
            case 0x1A991Cu: goto label_1a991c;
            case 0x1A9920u: goto label_1a9920;
            case 0x1A9924u: goto label_1a9924;
            case 0x1A9928u: goto label_1a9928;
            case 0x1A992Cu: goto label_1a992c;
            case 0x1A9930u: goto label_1a9930;
            case 0x1A9934u: goto label_1a9934;
            case 0x1A9938u: goto label_1a9938;
            case 0x1A993Cu: goto label_1a993c;
            case 0x1A9940u: goto label_1a9940;
            case 0x1A9944u: goto label_1a9944;
            case 0x1A9948u: goto label_1a9948;
            case 0x1A994Cu: goto label_1a994c;
            case 0x1A9950u: goto label_1a9950;
            case 0x1A9954u: goto label_1a9954;
            case 0x1A9958u: goto label_1a9958;
            case 0x1A995Cu: goto label_1a995c;
            case 0x1A9960u: goto label_1a9960;
            case 0x1A9964u: goto label_1a9964;
            case 0x1A9968u: goto label_1a9968;
            case 0x1A996Cu: goto label_1a996c;
            case 0x1A9970u: goto label_1a9970;
            case 0x1A9974u: goto label_1a9974;
            case 0x1A9978u: goto label_1a9978;
            case 0x1A997Cu: goto label_1a997c;
            case 0x1A9980u: goto label_1a9980;
            case 0x1A9984u: goto label_1a9984;
            case 0x1A9988u: goto label_1a9988;
            case 0x1A998Cu: goto label_1a998c;
            case 0x1A9990u: goto label_1a9990;
            case 0x1A9994u: goto label_1a9994;
            case 0x1A9998u: goto label_1a9998;
            case 0x1A999Cu: goto label_1a999c;
            case 0x1A99A0u: goto label_1a99a0;
            case 0x1A99A4u: goto label_1a99a4;
            case 0x1A99A8u: goto label_1a99a8;
            case 0x1A99ACu: goto label_1a99ac;
            case 0x1A99B0u: goto label_1a99b0;
            case 0x1A99B4u: goto label_1a99b4;
            case 0x1A99B8u: goto label_1a99b8;
            case 0x1A99BCu: goto label_1a99bc;
            case 0x1A99C0u: goto label_1a99c0;
            case 0x1A99C4u: goto label_1a99c4;
            case 0x1A99C8u: goto label_1a99c8;
            case 0x1A99CCu: goto label_1a99cc;
            case 0x1A99D0u: goto label_1a99d0;
            case 0x1A99D4u: goto label_1a99d4;
            case 0x1A99D8u: goto label_1a99d8;
            case 0x1A99DCu: goto label_1a99dc;
            case 0x1A99E0u: goto label_1a99e0;
            case 0x1A99E4u: goto label_1a99e4;
            case 0x1A99E8u: goto label_1a99e8;
            case 0x1A99ECu: goto label_1a99ec;
            case 0x1A99F0u: goto label_1a99f0;
            case 0x1A99F4u: goto label_1a99f4;
            case 0x1A99F8u: goto label_1a99f8;
            case 0x1A99FCu: goto label_1a99fc;
            case 0x1A9A00u: goto label_1a9a00;
            case 0x1A9A04u: goto label_1a9a04;
            case 0x1A9A08u: goto label_1a9a08;
            case 0x1A9A0Cu: goto label_1a9a0c;
            case 0x1A9A10u: goto label_1a9a10;
            case 0x1A9A14u: goto label_1a9a14;
            case 0x1A9A18u: goto label_1a9a18;
            case 0x1A9A1Cu: goto label_1a9a1c;
            case 0x1A9A20u: goto label_1a9a20;
            case 0x1A9A24u: goto label_1a9a24;
            case 0x1A9A28u: goto label_1a9a28;
            case 0x1A9A2Cu: goto label_1a9a2c;
            case 0x1A9A30u: goto label_1a9a30;
            case 0x1A9A34u: goto label_1a9a34;
            case 0x1A9A38u: goto label_1a9a38;
            case 0x1A9A3Cu: goto label_1a9a3c;
            case 0x1A9A40u: goto label_1a9a40;
            case 0x1A9A44u: goto label_1a9a44;
            case 0x1A9A48u: goto label_1a9a48;
            case 0x1A9A4Cu: goto label_1a9a4c;
            case 0x1A9A50u: goto label_1a9a50;
            case 0x1A9A54u: goto label_1a9a54;
            case 0x1A9A58u: goto label_1a9a58;
            case 0x1A9A5Cu: goto label_1a9a5c;
            case 0x1A9A60u: goto label_1a9a60;
            case 0x1A9A64u: goto label_1a9a64;
            case 0x1A9A68u: goto label_1a9a68;
            case 0x1A9A6Cu: goto label_1a9a6c;
            case 0x1A9A70u: goto label_1a9a70;
            case 0x1A9A74u: goto label_1a9a74;
            case 0x1A9A78u: goto label_1a9a78;
            case 0x1A9A7Cu: goto label_1a9a7c;
            case 0x1A9A80u: goto label_1a9a80;
            case 0x1A9A84u: goto label_1a9a84;
            case 0x1A9A88u: goto label_1a9a88;
            case 0x1A9A8Cu: goto label_1a9a8c;
            case 0x1A9A90u: goto label_1a9a90;
            case 0x1A9A94u: goto label_1a9a94;
            case 0x1A9A98u: goto label_1a9a98;
            case 0x1A9A9Cu: goto label_1a9a9c;
            case 0x1A9AA0u: goto label_1a9aa0;
            case 0x1A9AA4u: goto label_1a9aa4;
            case 0x1A9AA8u: goto label_1a9aa8;
            case 0x1A9AACu: goto label_1a9aac;
            case 0x1A9AB0u: goto label_1a9ab0;
            case 0x1A9AB4u: goto label_1a9ab4;
            case 0x1A9AB8u: goto label_1a9ab8;
            case 0x1A9ABCu: goto label_1a9abc;
            case 0x1A9AC0u: goto label_1a9ac0;
            case 0x1A9AC4u: goto label_1a9ac4;
            case 0x1A9AC8u: goto label_1a9ac8;
            case 0x1A9ACCu: goto label_1a9acc;
            case 0x1A9AD0u: goto label_1a9ad0;
            case 0x1A9AD4u: goto label_1a9ad4;
            case 0x1A9AD8u: goto label_1a9ad8;
            case 0x1A9ADCu: goto label_1a9adc;
            case 0x1A9AE0u: goto label_1a9ae0;
            case 0x1A9AE4u: goto label_1a9ae4;
            case 0x1A9AE8u: goto label_1a9ae8;
            case 0x1A9AECu: goto label_1a9aec;
            case 0x1A9AF0u: goto label_1a9af0;
            case 0x1A9AF4u: goto label_1a9af4;
            case 0x1A9AF8u: goto label_1a9af8;
            case 0x1A9AFCu: goto label_1a9afc;
            case 0x1A9B00u: goto label_1a9b00;
            case 0x1A9B04u: goto label_1a9b04;
            case 0x1A9B08u: goto label_1a9b08;
            case 0x1A9B0Cu: goto label_1a9b0c;
            case 0x1A9B10u: goto label_1a9b10;
            case 0x1A9B14u: goto label_1a9b14;
            case 0x1A9B18u: goto label_1a9b18;
            case 0x1A9B1Cu: goto label_1a9b1c;
            case 0x1A9B20u: goto label_1a9b20;
            case 0x1A9B24u: goto label_1a9b24;
            case 0x1A9B28u: goto label_1a9b28;
            case 0x1A9B2Cu: goto label_1a9b2c;
            case 0x1A9B30u: goto label_1a9b30;
            case 0x1A9B34u: goto label_1a9b34;
            case 0x1A9B38u: goto label_1a9b38;
            case 0x1A9B3Cu: goto label_1a9b3c;
            case 0x1A9B40u: goto label_1a9b40;
            case 0x1A9B44u: goto label_1a9b44;
            case 0x1A9B48u: goto label_1a9b48;
            case 0x1A9B4Cu: goto label_1a9b4c;
            case 0x1A9B50u: goto label_1a9b50;
            case 0x1A9B54u: goto label_1a9b54;
            case 0x1A9B58u: goto label_1a9b58;
            case 0x1A9B5Cu: goto label_1a9b5c;
            case 0x1A9B60u: goto label_1a9b60;
            case 0x1A9B64u: goto label_1a9b64;
            case 0x1A9B68u: goto label_1a9b68;
            case 0x1A9B6Cu: goto label_1a9b6c;
            case 0x1A9B70u: goto label_1a9b70;
            case 0x1A9B74u: goto label_1a9b74;
            case 0x1A9B78u: goto label_1a9b78;
            case 0x1A9B7Cu: goto label_1a9b7c;
            case 0x1A9B80u: goto label_1a9b80;
            case 0x1A9B84u: goto label_1a9b84;
            case 0x1A9B88u: goto label_1a9b88;
            case 0x1A9B8Cu: goto label_1a9b8c;
            case 0x1A9B90u: goto label_1a9b90;
            case 0x1A9B94u: goto label_1a9b94;
            case 0x1A9B98u: goto label_1a9b98;
            case 0x1A9B9Cu: goto label_1a9b9c;
            case 0x1A9BA0u: goto label_1a9ba0;
            case 0x1A9BA4u: goto label_1a9ba4;
            case 0x1A9BA8u: goto label_1a9ba8;
            case 0x1A9BACu: goto label_1a9bac;
            case 0x1A9BB0u: goto label_1a9bb0;
            case 0x1A9BB4u: goto label_1a9bb4;
            case 0x1A9BB8u: goto label_1a9bb8;
            case 0x1A9BBCu: goto label_1a9bbc;
            case 0x1A9BC0u: goto label_1a9bc0;
            case 0x1A9BC4u: goto label_1a9bc4;
            case 0x1A9BC8u: goto label_1a9bc8;
            case 0x1A9BCCu: goto label_1a9bcc;
            case 0x1A9BD0u: goto label_1a9bd0;
            case 0x1A9BD4u: goto label_1a9bd4;
            case 0x1A9BD8u: goto label_1a9bd8;
            case 0x1A9BDCu: goto label_1a9bdc;
            case 0x1A9BE0u: goto label_1a9be0;
            case 0x1A9BE4u: goto label_1a9be4;
            case 0x1A9BE8u: goto label_1a9be8;
            case 0x1A9BECu: goto label_1a9bec;
            case 0x1A9BF0u: goto label_1a9bf0;
            case 0x1A9BF4u: goto label_1a9bf4;
            case 0x1A9BF8u: goto label_1a9bf8;
            case 0x1A9BFCu: goto label_1a9bfc;
            case 0x1A9C00u: goto label_1a9c00;
            case 0x1A9C04u: goto label_1a9c04;
            case 0x1A9C08u: goto label_1a9c08;
            case 0x1A9C0Cu: goto label_1a9c0c;
            case 0x1A9C10u: goto label_1a9c10;
            case 0x1A9C14u: goto label_1a9c14;
            case 0x1A9C18u: goto label_1a9c18;
            case 0x1A9C1Cu: goto label_1a9c1c;
            case 0x1A9C20u: goto label_1a9c20;
            case 0x1A9C24u: goto label_1a9c24;
            case 0x1A9C28u: goto label_1a9c28;
            case 0x1A9C2Cu: goto label_1a9c2c;
            case 0x1A9C30u: goto label_1a9c30;
            case 0x1A9C34u: goto label_1a9c34;
            case 0x1A9C38u: goto label_1a9c38;
            case 0x1A9C3Cu: goto label_1a9c3c;
            case 0x1A9C40u: goto label_1a9c40;
            case 0x1A9C44u: goto label_1a9c44;
            case 0x1A9C48u: goto label_1a9c48;
            case 0x1A9C4Cu: goto label_1a9c4c;
            case 0x1A9C50u: goto label_1a9c50;
            case 0x1A9C54u: goto label_1a9c54;
            case 0x1A9C58u: goto label_1a9c58;
            case 0x1A9C5Cu: goto label_1a9c5c;
            case 0x1A9C60u: goto label_1a9c60;
            case 0x1A9C64u: goto label_1a9c64;
            case 0x1A9C68u: goto label_1a9c68;
            case 0x1A9C6Cu: goto label_1a9c6c;
            case 0x1A9C70u: goto label_1a9c70;
            case 0x1A9C74u: goto label_1a9c74;
            case 0x1A9C78u: goto label_1a9c78;
            case 0x1A9C7Cu: goto label_1a9c7c;
            case 0x1A9C80u: goto label_1a9c80;
            case 0x1A9C84u: goto label_1a9c84;
            case 0x1A9C88u: goto label_1a9c88;
            case 0x1A9C8Cu: goto label_1a9c8c;
            case 0x1A9C90u: goto label_1a9c90;
            case 0x1A9C94u: goto label_1a9c94;
            case 0x1A9C98u: goto label_1a9c98;
            case 0x1A9C9Cu: goto label_1a9c9c;
            case 0x1A9CA0u: goto label_1a9ca0;
            case 0x1A9CA4u: goto label_1a9ca4;
            case 0x1A9CA8u: goto label_1a9ca8;
            case 0x1A9CACu: goto label_1a9cac;
            case 0x1A9CB0u: goto label_1a9cb0;
            case 0x1A9CB4u: goto label_1a9cb4;
            case 0x1A9CB8u: goto label_1a9cb8;
            case 0x1A9CBCu: goto label_1a9cbc;
            case 0x1A9CC0u: goto label_1a9cc0;
            case 0x1A9CC4u: goto label_1a9cc4;
            case 0x1A9CC8u: goto label_1a9cc8;
            case 0x1A9CCCu: goto label_1a9ccc;
            case 0x1A9CD0u: goto label_1a9cd0;
            case 0x1A9CD4u: goto label_1a9cd4;
            case 0x1A9CD8u: goto label_1a9cd8;
            case 0x1A9CDCu: goto label_1a9cdc;
            case 0x1A9CE0u: goto label_1a9ce0;
            case 0x1A9CE4u: goto label_1a9ce4;
            case 0x1A9CE8u: goto label_1a9ce8;
            case 0x1A9CECu: goto label_1a9cec;
            case 0x1A9CF0u: goto label_1a9cf0;
            case 0x1A9CF4u: goto label_1a9cf4;
            case 0x1A9CF8u: goto label_1a9cf8;
            case 0x1A9CFCu: goto label_1a9cfc;
            case 0x1A9D00u: goto label_1a9d00;
            case 0x1A9D04u: goto label_1a9d04;
            case 0x1A9D08u: goto label_1a9d08;
            case 0x1A9D0Cu: goto label_1a9d0c;
            case 0x1A9D10u: goto label_1a9d10;
            case 0x1A9D14u: goto label_1a9d14;
            case 0x1A9D18u: goto label_1a9d18;
            case 0x1A9D1Cu: goto label_1a9d1c;
            case 0x1A9D20u: goto label_1a9d20;
            case 0x1A9D24u: goto label_1a9d24;
            case 0x1A9D28u: goto label_1a9d28;
            case 0x1A9D2Cu: goto label_1a9d2c;
            case 0x1A9D30u: goto label_1a9d30;
            case 0x1A9D34u: goto label_1a9d34;
            case 0x1A9D38u: goto label_1a9d38;
            case 0x1A9D3Cu: goto label_1a9d3c;
            case 0x1A9D40u: goto label_1a9d40;
            case 0x1A9D44u: goto label_1a9d44;
            case 0x1A9D48u: goto label_1a9d48;
            case 0x1A9D4Cu: goto label_1a9d4c;
            case 0x1A9D50u: goto label_1a9d50;
            case 0x1A9D54u: goto label_1a9d54;
            case 0x1A9D58u: goto label_1a9d58;
            case 0x1A9D5Cu: goto label_1a9d5c;
            case 0x1A9D60u: goto label_1a9d60;
            case 0x1A9D64u: goto label_1a9d64;
            case 0x1A9D68u: goto label_1a9d68;
            case 0x1A9D6Cu: goto label_1a9d6c;
            case 0x1A9D70u: goto label_1a9d70;
            case 0x1A9D74u: goto label_1a9d74;
            case 0x1A9D78u: goto label_1a9d78;
            case 0x1A9D7Cu: goto label_1a9d7c;
            case 0x1A9D80u: goto label_1a9d80;
            case 0x1A9D84u: goto label_1a9d84;
            case 0x1A9D88u: goto label_1a9d88;
            case 0x1A9D8Cu: goto label_1a9d8c;
            case 0x1A9D90u: goto label_1a9d90;
            case 0x1A9D94u: goto label_1a9d94;
            case 0x1A9D98u: goto label_1a9d98;
            case 0x1A9D9Cu: goto label_1a9d9c;
            case 0x1A9DA0u: goto label_1a9da0;
            case 0x1A9DA4u: goto label_1a9da4;
            case 0x1A9DA8u: goto label_1a9da8;
            case 0x1A9DACu: goto label_1a9dac;
            case 0x1A9DB0u: goto label_1a9db0;
            case 0x1A9DB4u: goto label_1a9db4;
            case 0x1A9DB8u: goto label_1a9db8;
            case 0x1A9DBCu: goto label_1a9dbc;
            case 0x1A9DC0u: goto label_1a9dc0;
            case 0x1A9DC4u: goto label_1a9dc4;
            case 0x1A9DC8u: goto label_1a9dc8;
            case 0x1A9DCCu: goto label_1a9dcc;
            case 0x1A9DD0u: goto label_1a9dd0;
            case 0x1A9DD4u: goto label_1a9dd4;
            case 0x1A9DD8u: goto label_1a9dd8;
            case 0x1A9DDCu: goto label_1a9ddc;
            case 0x1A9DE0u: goto label_1a9de0;
            case 0x1A9DE4u: goto label_1a9de4;
            case 0x1A9DE8u: goto label_1a9de8;
            case 0x1A9DECu: goto label_1a9dec;
            case 0x1A9DF0u: goto label_1a9df0;
            case 0x1A9DF4u: goto label_1a9df4;
            case 0x1A9DF8u: goto label_1a9df8;
            case 0x1A9DFCu: goto label_1a9dfc;
            case 0x1A9E00u: goto label_1a9e00;
            case 0x1A9E04u: goto label_1a9e04;
            case 0x1A9E08u: goto label_1a9e08;
            case 0x1A9E0Cu: goto label_1a9e0c;
            case 0x1A9E10u: goto label_1a9e10;
            case 0x1A9E14u: goto label_1a9e14;
            case 0x1A9E18u: goto label_1a9e18;
            case 0x1A9E1Cu: goto label_1a9e1c;
            case 0x1A9E20u: goto label_1a9e20;
            case 0x1A9E24u: goto label_1a9e24;
            case 0x1A9E28u: goto label_1a9e28;
            case 0x1A9E2Cu: goto label_1a9e2c;
            case 0x1A9E30u: goto label_1a9e30;
            case 0x1A9E34u: goto label_1a9e34;
            case 0x1A9E38u: goto label_1a9e38;
            case 0x1A9E3Cu: goto label_1a9e3c;
            case 0x1A9E40u: goto label_1a9e40;
            case 0x1A9E44u: goto label_1a9e44;
            case 0x1A9E48u: goto label_1a9e48;
            case 0x1A9E4Cu: goto label_1a9e4c;
            case 0x1A9E50u: goto label_1a9e50;
            case 0x1A9E54u: goto label_1a9e54;
            case 0x1A9E58u: goto label_1a9e58;
            case 0x1A9E5Cu: goto label_1a9e5c;
            case 0x1A9E60u: goto label_1a9e60;
            case 0x1A9E64u: goto label_1a9e64;
            case 0x1A9E68u: goto label_1a9e68;
            case 0x1A9E6Cu: goto label_1a9e6c;
            case 0x1A9E70u: goto label_1a9e70;
            case 0x1A9E74u: goto label_1a9e74;
            case 0x1A9E78u: goto label_1a9e78;
            case 0x1A9E7Cu: goto label_1a9e7c;
            case 0x1A9E80u: goto label_1a9e80;
            case 0x1A9E84u: goto label_1a9e84;
            case 0x1A9E88u: goto label_1a9e88;
            case 0x1A9E8Cu: goto label_1a9e8c;
            case 0x1A9E90u: goto label_1a9e90;
            case 0x1A9E94u: goto label_1a9e94;
            case 0x1A9E98u: goto label_1a9e98;
            case 0x1A9E9Cu: goto label_1a9e9c;
            case 0x1A9EA0u: goto label_1a9ea0;
            case 0x1A9EA4u: goto label_1a9ea4;
            case 0x1A9EA8u: goto label_1a9ea8;
            case 0x1A9EACu: goto label_1a9eac;
            case 0x1A9EB0u: goto label_1a9eb0;
            case 0x1A9EB4u: goto label_1a9eb4;
            case 0x1A9EB8u: goto label_1a9eb8;
            case 0x1A9EBCu: goto label_1a9ebc;
            case 0x1A9EC0u: goto label_1a9ec0;
            case 0x1A9EC4u: goto label_1a9ec4;
            case 0x1A9EC8u: goto label_1a9ec8;
            case 0x1A9ECCu: goto label_1a9ecc;
            case 0x1A9ED0u: goto label_1a9ed0;
            case 0x1A9ED4u: goto label_1a9ed4;
            case 0x1A9ED8u: goto label_1a9ed8;
            case 0x1A9EDCu: goto label_1a9edc;
            case 0x1A9EE0u: goto label_1a9ee0;
            case 0x1A9EE4u: goto label_1a9ee4;
            case 0x1A9EE8u: goto label_1a9ee8;
            case 0x1A9EECu: goto label_1a9eec;
            case 0x1A9EF0u: goto label_1a9ef0;
            case 0x1A9EF4u: goto label_1a9ef4;
            case 0x1A9EF8u: goto label_1a9ef8;
            case 0x1A9EFCu: goto label_1a9efc;
            case 0x1A9F00u: goto label_1a9f00;
            case 0x1A9F04u: goto label_1a9f04;
            case 0x1A9F08u: goto label_1a9f08;
            case 0x1A9F0Cu: goto label_1a9f0c;
            case 0x1A9F10u: goto label_1a9f10;
            case 0x1A9F14u: goto label_1a9f14;
            case 0x1A9F18u: goto label_1a9f18;
            case 0x1A9F1Cu: goto label_1a9f1c;
            case 0x1A9F20u: goto label_1a9f20;
            case 0x1A9F24u: goto label_1a9f24;
            case 0x1A9F28u: goto label_1a9f28;
            case 0x1A9F2Cu: goto label_1a9f2c;
            case 0x1A9F30u: goto label_1a9f30;
            case 0x1A9F34u: goto label_1a9f34;
            case 0x1A9F38u: goto label_1a9f38;
            case 0x1A9F3Cu: goto label_1a9f3c;
            case 0x1A9F40u: goto label_1a9f40;
            case 0x1A9F44u: goto label_1a9f44;
            case 0x1A9F48u: goto label_1a9f48;
            case 0x1A9F4Cu: goto label_1a9f4c;
            case 0x1A9F50u: goto label_1a9f50;
            case 0x1A9F54u: goto label_1a9f54;
            case 0x1A9F58u: goto label_1a9f58;
            case 0x1A9F5Cu: goto label_1a9f5c;
            case 0x1A9F60u: goto label_1a9f60;
            case 0x1A9F64u: goto label_1a9f64;
            case 0x1A9F68u: goto label_1a9f68;
            case 0x1A9F6Cu: goto label_1a9f6c;
            case 0x1A9F70u: goto label_1a9f70;
            case 0x1A9F74u: goto label_1a9f74;
            case 0x1A9F78u: goto label_1a9f78;
            case 0x1A9F7Cu: goto label_1a9f7c;
            case 0x1A9F80u: goto label_1a9f80;
            case 0x1A9F84u: goto label_1a9f84;
            case 0x1A9F88u: goto label_1a9f88;
            case 0x1A9F8Cu: goto label_1a9f8c;
            case 0x1A9F90u: goto label_1a9f90;
            case 0x1A9F94u: goto label_1a9f94;
            case 0x1A9F98u: goto label_1a9f98;
            case 0x1A9F9Cu: goto label_1a9f9c;
            case 0x1A9FA0u: goto label_1a9fa0;
            case 0x1A9FA4u: goto label_1a9fa4;
            case 0x1A9FA8u: goto label_1a9fa8;
            case 0x1A9FACu: goto label_1a9fac;
            case 0x1A9FB0u: goto label_1a9fb0;
            case 0x1A9FB4u: goto label_1a9fb4;
            case 0x1A9FB8u: goto label_1a9fb8;
            case 0x1A9FBCu: goto label_1a9fbc;
            case 0x1A9FC0u: goto label_1a9fc0;
            case 0x1A9FC4u: goto label_1a9fc4;
            case 0x1A9FC8u: goto label_1a9fc8;
            case 0x1A9FCCu: goto label_1a9fcc;
            case 0x1A9FD0u: goto label_1a9fd0;
            case 0x1A9FD4u: goto label_1a9fd4;
            case 0x1A9FD8u: goto label_1a9fd8;
            case 0x1A9FDCu: goto label_1a9fdc;
            case 0x1A9FE0u: goto label_1a9fe0;
            case 0x1A9FE4u: goto label_1a9fe4;
            case 0x1A9FE8u: goto label_1a9fe8;
            case 0x1A9FECu: goto label_1a9fec;
            case 0x1A9FF0u: goto label_1a9ff0;
            case 0x1A9FF4u: goto label_1a9ff4;
            case 0x1A9FF8u: goto label_1a9ff8;
            case 0x1A9FFCu: goto label_1a9ffc;
            case 0x1AA000u: goto label_1aa000;
            case 0x1AA004u: goto label_1aa004;
            case 0x1AA008u: goto label_1aa008;
            case 0x1AA00Cu: goto label_1aa00c;
            case 0x1AA010u: goto label_1aa010;
            case 0x1AA014u: goto label_1aa014;
            case 0x1AA018u: goto label_1aa018;
            case 0x1AA01Cu: goto label_1aa01c;
            case 0x1AA020u: goto label_1aa020;
            case 0x1AA024u: goto label_1aa024;
            case 0x1AA028u: goto label_1aa028;
            case 0x1AA02Cu: goto label_1aa02c;
            case 0x1AA030u: goto label_1aa030;
            case 0x1AA034u: goto label_1aa034;
            case 0x1AA038u: goto label_1aa038;
            case 0x1AA03Cu: goto label_1aa03c;
            case 0x1AA040u: goto label_1aa040;
            case 0x1AA044u: goto label_1aa044;
            case 0x1AA048u: goto label_1aa048;
            case 0x1AA04Cu: goto label_1aa04c;
            case 0x1AA050u: goto label_1aa050;
            case 0x1AA054u: goto label_1aa054;
            case 0x1AA058u: goto label_1aa058;
            case 0x1AA05Cu: goto label_1aa05c;
            case 0x1AA060u: goto label_1aa060;
            case 0x1AA064u: goto label_1aa064;
            case 0x1AA068u: goto label_1aa068;
            case 0x1AA06Cu: goto label_1aa06c;
            case 0x1AA070u: goto label_1aa070;
            case 0x1AA074u: goto label_1aa074;
            default: break;
        }
        return;
    }
label_fallthrough_0x1aa070:
    ctx->pc = 0x1AA078u;
}
