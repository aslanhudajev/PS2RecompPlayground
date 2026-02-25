#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enex1_02Move
// Address: 0x1cc790 - 0x1cd9d4
void Enex1_02Move_0x1cc790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enex1_02Move_0x1cc790");
#endif

    ctx->pc = 0x1cc790u;

label_1cc790:
    // 0x1cc790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1cc790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1cc794:
    // 0x1cc794: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cc794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cc798:
    // 0x1cc798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cc798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1cc79c:
    // 0x1cc79c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc79cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc7a0:
    // 0x1cc7a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cc7a4:
    // 0x1cc7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc7a8:
    // 0x1cc7a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc7ac:
    // 0x1cc7ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cc7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc7b0:
    // 0x1cc7b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc7b4:
    // 0x1cc7b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cc7b8:
    // 0x1cc7b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc7bc:
    // 0x1cc7bc: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1cc7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc7c0:
    // 0x1cc7c0: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1cc7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc7c4:
    // 0x1cc7c4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cc7c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cc7c8:
    // 0x1cc7c8: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1cc7c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_1cc7cc:
    // 0x1cc7cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc7d0:
    // 0x1cc7d0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1cc7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc7d4:
    // 0x1cc7d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cc7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc7d8:
    // 0x1cc7d8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cc7d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cc7dc:
    // 0x1cc7dc: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1cc7dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_1cc7e0:
    // 0x1cc7e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc7e4:
    // 0x1cc7e4: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1cc7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc7e8:
    // 0x1cc7e8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cc7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc7ec:
    // 0x1cc7ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cc7ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cc7f0:
    // 0x1cc7f0: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1cc7f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_1cc7f4:
    // 0x1cc7f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc7f8:
    // 0x1cc7f8: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1cc7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc7fc:
    // 0x1cc7fc: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1cc7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc800:
    // 0x1cc800: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1cc800u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cc804:
    // 0x1cc804: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1cc804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_1cc808:
    // 0x1cc808: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc80c:
    // 0x1cc80c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1cc80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc810:
    // 0x1cc810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc814:
    // 0x1cc814: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1cc818:
    if (ctx->pc == 0x1CC818u) {
        ctx->pc = 0x1CC818u;
            // 0x1cc818: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x1CC81Cu;
        goto label_1cc81c;
    }
    ctx->pc = 0x1CC814u;
    {
        const bool branch_taken_0x1cc814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC814u;
            // 0x1cc818: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc814) {
            ctx->pc = 0x1CC838u;
            goto label_1cc838;
        }
    }
    ctx->pc = 0x1CC81Cu;
label_1cc81c:
    // 0x1cc81c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cc81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cc820:
    // 0x1cc820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc820u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc824:
    // 0x1cc824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc828:
    // 0x1cc828: 0x0  nop
    ctx->pc = 0x1cc828u;
    // NOP
label_1cc82c:
    // 0x1cc82c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc830:
    // 0x1cc830: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1cc830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1cc834:
    // 0x1cc834: 0x0  nop
    ctx->pc = 0x1cc834u;
    // NOP
label_1cc838:
    // 0x1cc838: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cc838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc83c:
    // 0x1cc83c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cc83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cc840:
    // 0x1cc840: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc840u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc844:
    // 0x1cc844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc848:
    // 0x1cc848: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1cc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc84c:
    // 0x1cc84c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc84cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc850:
    // 0x1cc850: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cc854:
    if (ctx->pc == 0x1CC854u) {
        ctx->pc = 0x1CC854u;
            // 0x1cc854: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x1CC858u;
        goto label_1cc858;
    }
    ctx->pc = 0x1CC850u;
    {
        const bool branch_taken_0x1cc850 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC850u;
            // 0x1cc854: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc850) {
            ctx->pc = 0x1CC870u;
            goto label_1cc870;
        }
    }
    ctx->pc = 0x1CC858u;
label_1cc858:
    // 0x1cc858: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cc858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cc85c:
    // 0x1cc85c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc85cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc860:
    // 0x1cc860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc864:
    // 0x1cc864: 0x0  nop
    ctx->pc = 0x1cc864u;
    // NOP
label_1cc868:
    // 0x1cc868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cc868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cc86c:
    // 0x1cc86c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cc86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cc870:
    // 0x1cc870: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cc870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc874:
    // 0x1cc874: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_1cc878:
    // 0x1cc878: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc878u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc87c:
    // 0x1cc87c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc87cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc880:
    // 0x1cc880: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1cc880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc884:
    // 0x1cc884: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc888:
    // 0x1cc888: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1cc88c:
    if (ctx->pc == 0x1CC88Cu) {
        ctx->pc = 0x1CC88Cu;
            // 0x1cc88c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CC890u;
        goto label_1cc890;
    }
    ctx->pc = 0x1CC888u;
    {
        const bool branch_taken_0x1cc888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC888u;
            // 0x1cc88c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc888) {
            ctx->pc = 0x1CC8A8u;
            goto label_1cc8a8;
        }
    }
    ctx->pc = 0x1CC890u;
label_1cc890:
    // 0x1cc890: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cc890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cc894:
    // 0x1cc894: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc894u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc898:
    // 0x1cc898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc89c:
    // 0x1cc89c: 0x0  nop
    ctx->pc = 0x1cc89cu;
    // NOP
label_1cc8a0:
    // 0x1cc8a0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc8a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc8a4:
    // 0x1cc8a4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cc8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cc8a8:
    // 0x1cc8a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc8ac:
    // 0x1cc8ac: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cc8b0:
    // 0x1cc8b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc8b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc8b4:
    // 0x1cc8b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc8b8:
    // 0x1cc8b8: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1cc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc8bc:
    // 0x1cc8bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cc8bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc8c0:
    // 0x1cc8c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cc8c4:
    if (ctx->pc == 0x1CC8C4u) {
        ctx->pc = 0x1CC8C4u;
            // 0x1cc8c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x1CC8C8u;
        goto label_1cc8c8;
    }
    ctx->pc = 0x1CC8C0u;
    {
        const bool branch_taken_0x1cc8c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC8C0u;
            // 0x1cc8c4: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc8c0) {
            ctx->pc = 0x1CC8E0u;
            goto label_1cc8e0;
        }
    }
    ctx->pc = 0x1CC8C8u;
label_1cc8c8:
    // 0x1cc8c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1cc8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_1cc8cc:
    // 0x1cc8cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc8ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_1cc8d0:
    // 0x1cc8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc8d4:
    // 0x1cc8d4: 0x0  nop
    ctx->pc = 0x1cc8d4u;
    // NOP
label_1cc8d8:
    // 0x1cc8d8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cc8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cc8dc:
    // 0x1cc8dc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cc8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cc8e0:
    // 0x1cc8e0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc8e4:
    // 0x1cc8e4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_1cc8e8:
    // 0x1cc8e8: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1cc8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc8ec:
    // 0x1cc8ec: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1cc8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cc8f0:
    // 0x1cc8f0: 0xc073678  jal         func_1CD9E0
label_1cc8f4:
    if (ctx->pc == 0x1CC8F4u) {
        ctx->pc = 0x1CC8F4u;
            // 0x1cc8f4: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->pc = 0x1CC8F8u;
        goto label_1cc8f8;
    }
    ctx->pc = 0x1CC8F0u;
    SET_GPR_U32(ctx, 31, 0x1CC8F8u);
    ctx->pc = 0x1CC8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC8F0u;
            // 0x1cc8f4: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD9E0u;
    if (runtime->hasFunction(0x1CD9E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CD9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC8F8u; }
        if (ctx->pc != 0x1CC8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1cd9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC8F8u; }
        if (ctx->pc != 0x1CC8F8u) { return; }
    }
    ctx->pc = 0x1CC8F8u;
label_1cc8f8:
    // 0x1cc8f8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cc8fc:
    // 0x1cc8fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cc8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cc900:
    // 0x1cc900: 0x27b10054  addiu       $s1, $sp, 0x54
    ctx->pc = 0x1cc900u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1cc904:
    // 0x1cc904: 0x27b00058  addiu       $s0, $sp, 0x58
    ctx->pc = 0x1cc904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_1cc908:
    // 0x1cc908: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cc908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1cc90c:
    // 0x1cc90c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1cc90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1cc910:
    // 0x1cc910: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1cc910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_1cc914:
    // 0x1cc914: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cc918:
    // 0x1cc918: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x1cc918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_1cc91c:
    // 0x1cc91c: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1cc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1cc920:
    // 0x1cc920: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1cc920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cc924:
    // 0x1cc924: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1cc924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1cc928:
    // 0x1cc928: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cc928u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cc92c:
    // 0x1cc92c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1cc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1cc930:
    // 0x1cc930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc934:
    // 0x1cc934: 0x0  nop
    ctx->pc = 0x1cc934u;
    // NOP
label_1cc938:
    // 0x1cc938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cc93c:
    // 0x1cc93c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1cc93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1cc940:
    // 0x1cc940: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cc940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cc944:
    // 0x1cc944: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc948:
    // 0x1cc948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc94c:
    // 0x1cc94c: 0x0  nop
    ctx->pc = 0x1cc94cu;
    // NOP
label_1cc950:
    // 0x1cc950: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cc950u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cc954:
    // 0x1cc954: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1cc954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1cc958:
    // 0x1cc958: 0xc04b6ee  jal         func_12DBB8
label_1cc95c:
    if (ctx->pc == 0x1CC95Cu) {
        ctx->pc = 0x1CC95Cu;
            // 0x1cc95c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1CC960u;
        goto label_1cc960;
    }
    ctx->pc = 0x1CC958u;
    SET_GPR_U32(ctx, 31, 0x1CC960u);
    ctx->pc = 0x1CC95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC958u;
            // 0x1cc95c: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC960u; }
        if (ctx->pc != 0x1CC960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC960u; }
        if (ctx->pc != 0x1CC960u) { return; }
    }
    ctx->pc = 0x1CC960u;
label_1cc960:
    // 0x1cc960: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cc964:
    // 0x1cc964: 0x18400252  blez        $v0, . + 4 + (0x252 << 2)
label_1cc968:
    if (ctx->pc == 0x1CC968u) {
        ctx->pc = 0x1CC96Cu;
        goto label_1cc96c;
    }
    ctx->pc = 0x1CC964u;
    {
        const bool branch_taken_0x1cc964 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1cc964) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CC96Cu;
label_1cc96c:
    // 0x1cc96c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cc970:
    // 0x1cc970: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1cc974:
    if (ctx->pc == 0x1CC974u) {
        ctx->pc = 0x1CC978u;
        goto label_1cc978;
    }
    ctx->pc = 0x1CC970u;
    {
        const bool branch_taken_0x1cc970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc970) {
            ctx->pc = 0x1CC9E8u;
            goto label_1cc9e8;
        }
    }
    ctx->pc = 0x1CC978u;
label_1cc978:
    // 0x1cc978: 0xc050bb4  jal         func_142ED0
label_1cc97c:
    if (ctx->pc == 0x1CC97Cu) {
        ctx->pc = 0x1CC980u;
        goto label_1cc980;
    }
    ctx->pc = 0x1CC978u;
    SET_GPR_U32(ctx, 31, 0x1CC980u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC980u; }
        if (ctx->pc != 0x1CC980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC980u; }
        if (ctx->pc != 0x1CC980u) { return; }
    }
    ctx->pc = 0x1CC980u;
label_1cc980:
    // 0x1cc980: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1cc980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cc984:
    // 0x1cc984: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cc984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cc988:
    // 0x1cc988: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cc988u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cc98c:
    // 0x1cc98c: 0x0  nop
    ctx->pc = 0x1cc98cu;
    // NOP
label_1cc990:
    // 0x1cc990: 0x0  nop
    ctx->pc = 0x1cc990u;
    // NOP
label_1cc994:
    // 0x1cc994: 0x1010  mfhi        $v0
    ctx->pc = 0x1cc994u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cc998:
    // 0x1cc998: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cc998u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cc99c:
    // 0x1cc99c: 0xc050bb4  jal         func_142ED0
label_1cc9a0:
    if (ctx->pc == 0x1CC9A0u) {
        ctx->pc = 0x1CC9A0u;
            // 0x1cc9a0: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC9A4u;
        goto label_1cc9a4;
    }
    ctx->pc = 0x1CC99Cu;
    SET_GPR_U32(ctx, 31, 0x1CC9A4u);
    ctx->pc = 0x1CC9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC99Cu;
            // 0x1cc9a0: 0xae620110  sw          $v0, 0x110($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9A4u; }
        if (ctx->pc != 0x1CC9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9A4u; }
        if (ctx->pc != 0x1CC9A4u) { return; }
    }
    ctx->pc = 0x1CC9A4u;
label_1cc9a4:
    // 0x1cc9a4: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1cc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cc9a8:
    // 0x1cc9a8: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1cc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cc9ac:
    // 0x1cc9ac: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cc9acu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cc9b0:
    // 0x1cc9b0: 0x0  nop
    ctx->pc = 0x1cc9b0u;
    // NOP
label_1cc9b4:
    // 0x1cc9b4: 0x0  nop
    ctx->pc = 0x1cc9b4u;
    // NOP
label_1cc9b8:
    // 0x1cc9b8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cc9b8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cc9bc:
    // 0x1cc9bc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1cc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cc9c0:
    // 0x1cc9c0: 0xc050bb4  jal         func_142ED0
label_1cc9c4:
    if (ctx->pc == 0x1CC9C4u) {
        ctx->pc = 0x1CC9C4u;
            // 0x1cc9c4: 0xae620114  sw          $v0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC9C8u;
        goto label_1cc9c8;
    }
    ctx->pc = 0x1CC9C0u;
    SET_GPR_U32(ctx, 31, 0x1CC9C8u);
    ctx->pc = 0x1CC9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9C0u;
            // 0x1cc9c4: 0xae620114  sw          $v0, 0x114($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9C8u; }
        if (ctx->pc != 0x1CC9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9C8u; }
        if (ctx->pc != 0x1CC9C8u) { return; }
    }
    ctx->pc = 0x1CC9C8u;
label_1cc9c8:
    // 0x1cc9c8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1cc9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1cc9cc:
    // 0x1cc9cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cc9ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cc9d0:
    // 0x1cc9d0: 0x0  nop
    ctx->pc = 0x1cc9d0u;
    // NOP
label_1cc9d4:
    // 0x1cc9d4: 0x0  nop
    ctx->pc = 0x1cc9d4u;
    // NOP
label_1cc9d8:
    // 0x1cc9d8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cc9d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cc9dc:
    // 0x1cc9dc: 0x10000234  b           . + 4 + (0x234 << 2)
label_1cc9e0:
    if (ctx->pc == 0x1CC9E0u) {
        ctx->pc = 0x1CC9E0u;
            // 0x1cc9e0: 0xae62011c  sw          $v0, 0x11C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC9E4u;
        goto label_1cc9e4;
    }
    ctx->pc = 0x1CC9DCu;
    {
        const bool branch_taken_0x1cc9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9DCu;
            // 0x1cc9e0: 0xae62011c  sw          $v0, 0x11C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9dc) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CC9E4u;
label_1cc9e4:
    // 0x1cc9e4: 0x0  nop
    ctx->pc = 0x1cc9e4u;
    // NOP
label_1cc9e8:
    // 0x1cc9e8: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1cc9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_1cc9ec:
    // 0x1cc9ec: 0x14400230  bnez        $v0, . + 4 + (0x230 << 2)
label_1cc9f0:
    if (ctx->pc == 0x1CC9F0u) {
        ctx->pc = 0x1CC9F0u;
            // 0x1cc9f0: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->pc = 0x1CC9F4u;
        goto label_1cc9f4;
    }
    ctx->pc = 0x1CC9ECu;
    {
        const bool branch_taken_0x1cc9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9ECu;
            // 0x1cc9f0: 0x28610050  slti        $at, $v1, 0x50 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)80) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc9ec) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CC9F4u;
label_1cc9f4:
    // 0x1cc9f4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_1cc9f8:
    if (ctx->pc == 0x1CC9F8u) {
        ctx->pc = 0x1CC9FCu;
        goto label_1cc9fc;
    }
    ctx->pc = 0x1CC9F4u;
    {
        const bool branch_taken_0x1cc9f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc9f4) {
            ctx->pc = 0x1CCA88u;
            goto label_1cca88;
        }
    }
    ctx->pc = 0x1CC9FCu;
label_1cc9fc:
    // 0x1cc9fc: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1cc9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cca00:
    // 0x1cca00: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x1cca00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
label_1cca04:
    // 0x1cca04: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x1cca04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
label_1cca08:
    // 0x1cca08: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1cca08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cca0c:
    // 0x1cca0c: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1cca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1cca10:
    // 0x1cca10: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1cca10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1cca14:
    // 0x1cca14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cca14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cca18:
    // 0x1cca18: 0x0  nop
    ctx->pc = 0x1cca18u;
    // NOP
label_1cca1c:
    // 0x1cca1c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cca1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1cca20:
    // 0x1cca20: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1cca20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1cca24:
    // 0x1cca24: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cca24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cca28:
    // 0x1cca28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cca28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cca2c:
    // 0x1cca2c: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cca2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1cca30:
    // 0x1cca30: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cca30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cca34:
    // 0x1cca34: 0x28610046  slti        $at, $v1, 0x46
    ctx->pc = 0x1cca34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
label_1cca38:
    // 0x1cca38: 0x1020021d  beqz        $at, . + 4 + (0x21D << 2)
label_1cca3c:
    if (ctx->pc == 0x1CCA3Cu) {
        ctx->pc = 0x1CCA3Cu;
            // 0x1cca3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1CCA40u;
        goto label_1cca40;
    }
    ctx->pc = 0x1CCA38u;
    {
        const bool branch_taken_0x1cca38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA38u;
            // 0x1cca3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca38) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CCA40u;
label_1cca40:
    // 0x1cca40: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cca40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cca44:
    // 0x1cca44: 0x0  nop
    ctx->pc = 0x1cca44u;
    // NOP
label_1cca48:
    // 0x1cca48: 0x0  nop
    ctx->pc = 0x1cca48u;
    // NOP
label_1cca4c:
    // 0x1cca4c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cca4cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cca50:
    // 0x1cca50: 0x14400217  bnez        $v0, . + 4 + (0x217 << 2)
label_1cca54:
    if (ctx->pc == 0x1CCA54u) {
        ctx->pc = 0x1CCA58u;
        goto label_1cca58;
    }
    ctx->pc = 0x1CCA50u;
    {
        const bool branch_taken_0x1cca50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cca50) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CCA58u;
label_1cca58:
    // 0x1cca58: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cca58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cca5c:
    // 0x1cca5c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cca60:
    // 0x1cca60: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1cca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1cca64:
    // 0x1cca64: 0xc0655a0  jal         func_195680
label_1cca68:
    if (ctx->pc == 0x1CCA68u) {
        ctx->pc = 0x1CCA68u;
            // 0x1cca68: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CCA6Cu;
        goto label_1cca6c;
    }
    ctx->pc = 0x1CCA64u;
    SET_GPR_U32(ctx, 31, 0x1CCA6Cu);
    ctx->pc = 0x1CCA68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA64u;
            // 0x1cca68: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA6Cu; }
        if (ctx->pc != 0x1CCA6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA6Cu; }
        if (ctx->pc != 0x1CCA6Cu) { return; }
    }
    ctx->pc = 0x1CCA6Cu;
label_1cca6c:
    // 0x1cca6c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cca70:
    // 0x1cca70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cca74:
    // 0x1cca74: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1cca78:
    // 0x1cca78: 0xc0655a0  jal         func_195680
label_1cca7c:
    if (ctx->pc == 0x1CCA7Cu) {
        ctx->pc = 0x1CCA7Cu;
            // 0x1cca7c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CCA80u;
        goto label_1cca80;
    }
    ctx->pc = 0x1CCA78u;
    SET_GPR_U32(ctx, 31, 0x1CCA80u);
    ctx->pc = 0x1CCA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA78u;
            // 0x1cca7c: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA80u; }
        if (ctx->pc != 0x1CCA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA80u; }
        if (ctx->pc != 0x1CCA80u) { return; }
    }
    ctx->pc = 0x1CCA80u;
label_1cca80:
    // 0x1cca80: 0x1000020b  b           . + 4 + (0x20B << 2)
label_1cca84:
    if (ctx->pc == 0x1CCA84u) {
        ctx->pc = 0x1CCA88u;
        goto label_1cca88;
    }
    ctx->pc = 0x1CCA80u;
    {
        const bool branch_taken_0x1cca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca80) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CCA88u;
label_1cca88:
    // 0x1cca88: 0x28610104  slti        $at, $v1, 0x104
    ctx->pc = 0x1cca88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)260) ? 1 : 0);
label_1cca8c:
    // 0x1cca8c: 0x10200182  beqz        $at, . + 4 + (0x182 << 2)
label_1cca90:
    if (ctx->pc == 0x1CCA90u) {
        ctx->pc = 0x1CCA90u;
            // 0x1cca90: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->pc = 0x1CCA94u;
        goto label_1cca94;
    }
    ctx->pc = 0x1CCA8Cu;
    {
        const bool branch_taken_0x1cca8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA8Cu;
            // 0x1cca90: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca8c) {
            ctx->pc = 0x1CD098u;
            goto label_1cd098;
        }
    }
    ctx->pc = 0x1CCA94u;
label_1cca94:
    // 0x1cca94: 0x106200a2  beq         $v1, $v0, . + 4 + (0xA2 << 2)
label_1cca98:
    if (ctx->pc == 0x1CCA98u) {
        ctx->pc = 0x1CCA9Cu;
        goto label_1cca9c;
    }
    ctx->pc = 0x1CCA94u;
    {
        const bool branch_taken_0x1cca94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cca94) {
            ctx->pc = 0x1CCD20u;
            goto label_1ccd20;
        }
    }
    ctx->pc = 0x1CCA9Cu;
label_1cca9c:
    // 0x1cca9c: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1cca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1ccaa0:
    // 0x1ccaa0: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_1ccaa4:
    if (ctx->pc == 0x1CCAA4u) {
        ctx->pc = 0x1CCAA4u;
            // 0x1ccaa4: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->pc = 0x1CCAA8u;
        goto label_1ccaa8;
    }
    ctx->pc = 0x1CCAA0u;
    {
        const bool branch_taken_0x1ccaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAA0u;
            // 0x1ccaa4: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccaa0) {
            ctx->pc = 0x1CCD20u;
            goto label_1ccd20;
        }
    }
    ctx->pc = 0x1CCAA8u;
label_1ccaa8:
    // 0x1ccaa8: 0x1062009d  beq         $v1, $v0, . + 4 + (0x9D << 2)
label_1ccaac:
    if (ctx->pc == 0x1CCAACu) {
        ctx->pc = 0x1CCAB0u;
        goto label_1ccab0;
    }
    ctx->pc = 0x1CCAA8u;
    {
        const bool branch_taken_0x1ccaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccaa8) {
            ctx->pc = 0x1CCD20u;
            goto label_1ccd20;
        }
    }
    ctx->pc = 0x1CCAB0u;
label_1ccab0:
    // 0x1ccab0: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x1ccab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1ccab4:
    // 0x1ccab4: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
label_1ccab8:
    if (ctx->pc == 0x1CCAB8u) {
        ctx->pc = 0x1CCAB8u;
            // 0x1ccab8: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x1CCABCu;
        goto label_1ccabc;
    }
    ctx->pc = 0x1CCAB4u;
    {
        const bool branch_taken_0x1ccab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAB4u;
            // 0x1ccab8: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccab4) {
            ctx->pc = 0x1CCCA8u;
            goto label_1ccca8;
        }
    }
    ctx->pc = 0x1CCABCu;
label_1ccabc:
    // 0x1ccabc: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
label_1ccac0:
    if (ctx->pc == 0x1CCAC0u) {
        ctx->pc = 0x1CCAC4u;
        goto label_1ccac4;
    }
    ctx->pc = 0x1CCABCu;
    {
        const bool branch_taken_0x1ccabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccabc) {
            ctx->pc = 0x1CCC28u;
            goto label_1ccc28;
        }
    }
    ctx->pc = 0x1CCAC4u;
label_1ccac4:
    // 0x1ccac4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1ccac8:
    // 0x1ccac8: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_1ccacc:
    if (ctx->pc == 0x1CCACCu) {
        ctx->pc = 0x1CCACCu;
            // 0x1ccacc: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->pc = 0x1CCAD0u;
        goto label_1ccad0;
    }
    ctx->pc = 0x1CCAC8u;
    {
        const bool branch_taken_0x1ccac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CCACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAC8u;
            // 0x1ccacc: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccac8) {
            ctx->pc = 0x1CCBC0u;
            goto label_1ccbc0;
        }
    }
    ctx->pc = 0x1CCAD0u;
label_1ccad0:
    // 0x1ccad0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1ccad4:
    if (ctx->pc == 0x1CCAD4u) {
        ctx->pc = 0x1CCAD8u;
        goto label_1ccad8;
    }
    ctx->pc = 0x1CCAD0u;
    {
        const bool branch_taken_0x1ccad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccad0) {
            ctx->pc = 0x1CCB58u;
            goto label_1ccb58;
        }
    }
    ctx->pc = 0x1CCAD8u;
label_1ccad8:
    // 0x1ccad8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1ccad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ccadc:
    // 0x1ccadc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1ccae0:
    if (ctx->pc == 0x1CCAE0u) {
        ctx->pc = 0x1CCAE4u;
        goto label_1ccae4;
    }
    ctx->pc = 0x1CCADCu;
    {
        const bool branch_taken_0x1ccadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ccadc) {
            ctx->pc = 0x1CCAF0u;
            goto label_1ccaf0;
        }
    }
    ctx->pc = 0x1CCAE4u;
label_1ccae4:
    // 0x1ccae4: 0x1000013a  b           . + 4 + (0x13A << 2)
label_1ccae8:
    if (ctx->pc == 0x1CCAE8u) {
        ctx->pc = 0x1CCAECu;
        goto label_1ccaec;
    }
    ctx->pc = 0x1CCAE4u;
    {
        const bool branch_taken_0x1ccae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccae4) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCAECu;
label_1ccaec:
    // 0x1ccaec: 0x0  nop
    ctx->pc = 0x1ccaecu;
    // NOP
label_1ccaf0:
    // 0x1ccaf0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccaf4:
    // 0x1ccaf4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccaf8:
    // 0x1ccaf8: 0xc0655a8  jal         func_1956A0
label_1ccafc:
    if (ctx->pc == 0x1CCAFCu) {
        ctx->pc = 0x1CCAFCu;
            // 0x1ccafc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CCB00u;
        goto label_1ccb00;
    }
    ctx->pc = 0x1CCAF8u;
    SET_GPR_U32(ctx, 31, 0x1CCB00u);
    ctx->pc = 0x1CCAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAF8u;
            // 0x1ccafc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB00u; }
        if (ctx->pc != 0x1CCB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB00u; }
        if (ctx->pc != 0x1CCB00u) { return; }
    }
    ctx->pc = 0x1CCB00u;
label_1ccb00:
    // 0x1ccb00: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb04:
    // 0x1ccb04: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb08:
    // 0x1ccb08: 0xc0655a8  jal         func_1956A0
label_1ccb0c:
    if (ctx->pc == 0x1CCB0Cu) {
        ctx->pc = 0x1CCB0Cu;
            // 0x1ccb0c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CCB10u;
        goto label_1ccb10;
    }
    ctx->pc = 0x1CCB08u;
    SET_GPR_U32(ctx, 31, 0x1CCB10u);
    ctx->pc = 0x1CCB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB08u;
            // 0x1ccb0c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB10u; }
        if (ctx->pc != 0x1CCB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB10u; }
        if (ctx->pc != 0x1CCB10u) { return; }
    }
    ctx->pc = 0x1CCB10u;
label_1ccb10:
    // 0x1ccb10: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb14:
    // 0x1ccb14: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ccb18:
    // 0x1ccb18: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb1c:
    // 0x1ccb1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccb20:
    // 0x1ccb20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ccb24:
    // 0x1ccb24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccb24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccb28:
    // 0x1ccb28: 0xc0655dc  jal         func_195770
label_1ccb2c:
    if (ctx->pc == 0x1CCB2Cu) {
        ctx->pc = 0x1CCB2Cu;
            // 0x1ccb2c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CCB30u;
        goto label_1ccb30;
    }
    ctx->pc = 0x1CCB28u;
    SET_GPR_U32(ctx, 31, 0x1CCB30u);
    ctx->pc = 0x1CCB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB28u;
            // 0x1ccb2c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB30u; }
        if (ctx->pc != 0x1CCB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB30u; }
        if (ctx->pc != 0x1CCB30u) { return; }
    }
    ctx->pc = 0x1CCB30u;
label_1ccb30:
    // 0x1ccb30: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb34:
    // 0x1ccb34: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1ccb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1ccb38:
    // 0x1ccb38: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb3c:
    // 0x1ccb3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccb40:
    // 0x1ccb40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccb40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ccb44:
    // 0x1ccb44: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccb44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccb48:
    // 0x1ccb48: 0xc0655dc  jal         func_195770
label_1ccb4c:
    if (ctx->pc == 0x1CCB4Cu) {
        ctx->pc = 0x1CCB4Cu;
            // 0x1ccb4c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CCB50u;
        goto label_1ccb50;
    }
    ctx->pc = 0x1CCB48u;
    SET_GPR_U32(ctx, 31, 0x1CCB50u);
    ctx->pc = 0x1CCB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB48u;
            // 0x1ccb4c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB50u; }
        if (ctx->pc != 0x1CCB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB50u; }
        if (ctx->pc != 0x1CCB50u) { return; }
    }
    ctx->pc = 0x1CCB50u;
label_1ccb50:
    // 0x1ccb50: 0x1000011f  b           . + 4 + (0x11F << 2)
label_1ccb54:
    if (ctx->pc == 0x1CCB54u) {
        ctx->pc = 0x1CCB58u;
        goto label_1ccb58;
    }
    ctx->pc = 0x1CCB50u;
    {
        const bool branch_taken_0x1ccb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccb50) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCB58u;
label_1ccb58:
    // 0x1ccb58: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb5c:
    // 0x1ccb5c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb60:
    // 0x1ccb60: 0xc0655a8  jal         func_1956A0
label_1ccb64:
    if (ctx->pc == 0x1CCB64u) {
        ctx->pc = 0x1CCB64u;
            // 0x1ccb64: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CCB68u;
        goto label_1ccb68;
    }
    ctx->pc = 0x1CCB60u;
    SET_GPR_U32(ctx, 31, 0x1CCB68u);
    ctx->pc = 0x1CCB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB60u;
            // 0x1ccb64: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB68u; }
        if (ctx->pc != 0x1CCB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB68u; }
        if (ctx->pc != 0x1CCB68u) { return; }
    }
    ctx->pc = 0x1CCB68u;
label_1ccb68:
    // 0x1ccb68: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb6c:
    // 0x1ccb6c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb70:
    // 0x1ccb70: 0xc0655a8  jal         func_1956A0
label_1ccb74:
    if (ctx->pc == 0x1CCB74u) {
        ctx->pc = 0x1CCB74u;
            // 0x1ccb74: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CCB78u;
        goto label_1ccb78;
    }
    ctx->pc = 0x1CCB70u;
    SET_GPR_U32(ctx, 31, 0x1CCB78u);
    ctx->pc = 0x1CCB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB70u;
            // 0x1ccb74: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB78u; }
        if (ctx->pc != 0x1CCB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB78u; }
        if (ctx->pc != 0x1CCB78u) { return; }
    }
    ctx->pc = 0x1CCB78u;
label_1ccb78:
    // 0x1ccb78: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb7c:
    // 0x1ccb7c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ccb80:
    // 0x1ccb80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccb84:
    // 0x1ccb84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccb84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccb88:
    // 0x1ccb88: 0x0  nop
    ctx->pc = 0x1ccb88u;
    // NOP
label_1ccb8c:
    // 0x1ccb8c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1ccb8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1ccb90:
    // 0x1ccb90: 0xc0655dc  jal         func_195770
label_1ccb94:
    if (ctx->pc == 0x1CCB94u) {
        ctx->pc = 0x1CCB94u;
            // 0x1ccb94: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CCB98u;
        goto label_1ccb98;
    }
    ctx->pc = 0x1CCB90u;
    SET_GPR_U32(ctx, 31, 0x1CCB98u);
    ctx->pc = 0x1CCB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB90u;
            // 0x1ccb94: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB98u; }
        if (ctx->pc != 0x1CCB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB98u; }
        if (ctx->pc != 0x1CCB98u) { return; }
    }
    ctx->pc = 0x1CCB98u;
label_1ccb98:
    // 0x1ccb98: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccb9c:
    // 0x1ccb9c: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1ccb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1ccba0:
    // 0x1ccba0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccba4:
    // 0x1ccba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccba8:
    // 0x1ccba8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1ccbac:
    // 0x1ccbac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccbacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccbb0:
    // 0x1ccbb0: 0xc0655dc  jal         func_195770
label_1ccbb4:
    if (ctx->pc == 0x1CCBB4u) {
        ctx->pc = 0x1CCBB4u;
            // 0x1ccbb4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CCBB8u;
        goto label_1ccbb8;
    }
    ctx->pc = 0x1CCBB0u;
    SET_GPR_U32(ctx, 31, 0x1CCBB8u);
    ctx->pc = 0x1CCBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBB0u;
            // 0x1ccbb4: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBB8u; }
        if (ctx->pc != 0x1CCBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBB8u; }
        if (ctx->pc != 0x1CCBB8u) { return; }
    }
    ctx->pc = 0x1CCBB8u;
label_1ccbb8:
    // 0x1ccbb8: 0x10000105  b           . + 4 + (0x105 << 2)
label_1ccbbc:
    if (ctx->pc == 0x1CCBBCu) {
        ctx->pc = 0x1CCBC0u;
        goto label_1ccbc0;
    }
    ctx->pc = 0x1CCBB8u;
    {
        const bool branch_taken_0x1ccbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbb8) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCBC0u;
label_1ccbc0:
    // 0x1ccbc0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccbc4:
    // 0x1ccbc4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccbc8:
    // 0x1ccbc8: 0xc0655a8  jal         func_1956A0
label_1ccbcc:
    if (ctx->pc == 0x1CCBCCu) {
        ctx->pc = 0x1CCBCCu;
            // 0x1ccbcc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CCBD0u;
        goto label_1ccbd0;
    }
    ctx->pc = 0x1CCBC8u;
    SET_GPR_U32(ctx, 31, 0x1CCBD0u);
    ctx->pc = 0x1CCBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBC8u;
            // 0x1ccbcc: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBD0u; }
        if (ctx->pc != 0x1CCBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBD0u; }
        if (ctx->pc != 0x1CCBD0u) { return; }
    }
    ctx->pc = 0x1CCBD0u;
label_1ccbd0:
    // 0x1ccbd0: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccbd4:
    // 0x1ccbd4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccbd8:
    // 0x1ccbd8: 0xc0655a8  jal         func_1956A0
label_1ccbdc:
    if (ctx->pc == 0x1CCBDCu) {
        ctx->pc = 0x1CCBDCu;
            // 0x1ccbdc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CCBE0u;
        goto label_1ccbe0;
    }
    ctx->pc = 0x1CCBD8u;
    SET_GPR_U32(ctx, 31, 0x1CCBE0u);
    ctx->pc = 0x1CCBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBD8u;
            // 0x1ccbdc: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBE0u; }
        if (ctx->pc != 0x1CCBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBE0u; }
        if (ctx->pc != 0x1CCBE0u) { return; }
    }
    ctx->pc = 0x1CCBE0u;
label_1ccbe0:
    // 0x1ccbe0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccbe4:
    // 0x1ccbe4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ccbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ccbe8:
    // 0x1ccbe8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccbec:
    // 0x1ccbec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccbecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccbf0:
    // 0x1ccbf0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ccbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ccbf4:
    // 0x1ccbf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccbf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccbf8:
    // 0x1ccbf8: 0xc0655dc  jal         func_195770
label_1ccbfc:
    if (ctx->pc == 0x1CCBFCu) {
        ctx->pc = 0x1CCBFCu;
            // 0x1ccbfc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CCC00u;
        goto label_1ccc00;
    }
    ctx->pc = 0x1CCBF8u;
    SET_GPR_U32(ctx, 31, 0x1CCC00u);
    ctx->pc = 0x1CCBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBF8u;
            // 0x1ccbfc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC00u; }
        if (ctx->pc != 0x1CCC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC00u; }
        if (ctx->pc != 0x1CCC00u) { return; }
    }
    ctx->pc = 0x1CCC00u;
label_1ccc00:
    // 0x1ccc00: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccc04:
    // 0x1ccc04: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ccc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ccc08:
    // 0x1ccc08: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccc0c:
    // 0x1ccc0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccc0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccc10:
    // 0x1ccc10: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ccc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1ccc14:
    // 0x1ccc14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccc14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccc18:
    // 0x1ccc18: 0xc0655dc  jal         func_195770
label_1ccc1c:
    if (ctx->pc == 0x1CCC1Cu) {
        ctx->pc = 0x1CCC1Cu;
            // 0x1ccc1c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CCC20u;
        goto label_1ccc20;
    }
    ctx->pc = 0x1CCC18u;
    SET_GPR_U32(ctx, 31, 0x1CCC20u);
    ctx->pc = 0x1CCC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC18u;
            // 0x1ccc1c: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC20u; }
        if (ctx->pc != 0x1CCC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC20u; }
        if (ctx->pc != 0x1CCC20u) { return; }
    }
    ctx->pc = 0x1CCC20u;
label_1ccc20:
    // 0x1ccc20: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1ccc24:
    if (ctx->pc == 0x1CCC24u) {
        ctx->pc = 0x1CCC28u;
        goto label_1ccc28;
    }
    ctx->pc = 0x1CCC20u;
    {
        const bool branch_taken_0x1ccc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc20) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCC28u;
label_1ccc28:
    // 0x1ccc28: 0xc065d00  jal         func_197400
label_1ccc2c:
    if (ctx->pc == 0x1CCC2Cu) {
        ctx->pc = 0x1CCC30u;
        goto label_1ccc30;
    }
    ctx->pc = 0x1CCC28u;
    SET_GPR_U32(ctx, 31, 0x1CCC30u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC30u; }
        if (ctx->pc != 0x1CCC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC30u; }
        if (ctx->pc != 0x1CCC30u) { return; }
    }
    ctx->pc = 0x1CCC30u;
label_1ccc30:
    // 0x1ccc30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ccc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ccc34:
    // 0x1ccc34: 0x144300e6  bne         $v0, $v1, . + 4 + (0xE6 << 2)
label_1ccc38:
    if (ctx->pc == 0x1CCC38u) {
        ctx->pc = 0x1CCC3Cu;
        goto label_1ccc3c;
    }
    ctx->pc = 0x1CCC34u;
    {
        const bool branch_taken_0x1ccc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ccc34) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCC3Cu;
label_1ccc3c:
    // 0x1ccc3c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccc40:
    // 0x1ccc40: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccc44:
    // 0x1ccc44: 0xc0655a8  jal         func_1956A0
label_1ccc48:
    if (ctx->pc == 0x1CCC48u) {
        ctx->pc = 0x1CCC48u;
            // 0x1ccc48: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CCC4Cu;
        goto label_1ccc4c;
    }
    ctx->pc = 0x1CCC44u;
    SET_GPR_U32(ctx, 31, 0x1CCC4Cu);
    ctx->pc = 0x1CCC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC44u;
            // 0x1ccc48: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC4Cu; }
        if (ctx->pc != 0x1CCC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC4Cu; }
        if (ctx->pc != 0x1CCC4Cu) { return; }
    }
    ctx->pc = 0x1CCC4Cu;
label_1ccc4c:
    // 0x1ccc4c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccc50:
    // 0x1ccc50: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccc54:
    // 0x1ccc54: 0xc0655a8  jal         func_1956A0
label_1ccc58:
    if (ctx->pc == 0x1CCC58u) {
        ctx->pc = 0x1CCC58u;
            // 0x1ccc58: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CCC5Cu;
        goto label_1ccc5c;
    }
    ctx->pc = 0x1CCC54u;
    SET_GPR_U32(ctx, 31, 0x1CCC5Cu);
    ctx->pc = 0x1CCC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC54u;
            // 0x1ccc58: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC5Cu; }
        if (ctx->pc != 0x1CCC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC5Cu; }
        if (ctx->pc != 0x1CCC5Cu) { return; }
    }
    ctx->pc = 0x1CCC5Cu;
label_1ccc5c:
    // 0x1ccc5c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccc60:
    // 0x1ccc60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ccc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ccc64:
    // 0x1ccc64: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccc68:
    // 0x1ccc68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccc68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccc6c:
    // 0x1ccc6c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1ccc70:
    // 0x1ccc70: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccc70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccc74:
    // 0x1ccc74: 0xc0655dc  jal         func_195770
label_1ccc78:
    if (ctx->pc == 0x1CCC78u) {
        ctx->pc = 0x1CCC78u;
            // 0x1ccc78: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CCC7Cu;
        goto label_1ccc7c;
    }
    ctx->pc = 0x1CCC74u;
    SET_GPR_U32(ctx, 31, 0x1CCC7Cu);
    ctx->pc = 0x1CCC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC74u;
            // 0x1ccc78: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC7Cu; }
        if (ctx->pc != 0x1CCC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC7Cu; }
        if (ctx->pc != 0x1CCC7Cu) { return; }
    }
    ctx->pc = 0x1CCC7Cu;
label_1ccc7c:
    // 0x1ccc7c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccc80:
    // 0x1ccc80: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x1ccc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_1ccc84:
    // 0x1ccc84: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccc88:
    // 0x1ccc88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccc8c:
    // 0x1ccc8c: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1ccc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1ccc90:
    // 0x1ccc90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccc94:
    // 0x1ccc94: 0xc0655dc  jal         func_195770
label_1ccc98:
    if (ctx->pc == 0x1CCC98u) {
        ctx->pc = 0x1CCC98u;
            // 0x1ccc98: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CCC9Cu;
        goto label_1ccc9c;
    }
    ctx->pc = 0x1CCC94u;
    SET_GPR_U32(ctx, 31, 0x1CCC9Cu);
    ctx->pc = 0x1CCC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC94u;
            // 0x1ccc98: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC9Cu; }
        if (ctx->pc != 0x1CCC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC9Cu; }
        if (ctx->pc != 0x1CCC9Cu) { return; }
    }
    ctx->pc = 0x1CCC9Cu;
label_1ccc9c:
    // 0x1ccc9c: 0x100000cc  b           . + 4 + (0xCC << 2)
label_1ccca0:
    if (ctx->pc == 0x1CCCA0u) {
        ctx->pc = 0x1CCCA4u;
        goto label_1ccca4;
    }
    ctx->pc = 0x1CCC9Cu;
    {
        const bool branch_taken_0x1ccc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc9c) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCCA4u;
label_1ccca4:
    // 0x1ccca4: 0x0  nop
    ctx->pc = 0x1ccca4u;
    // NOP
label_1ccca8:
    // 0x1ccca8: 0xc065d00  jal         func_197400
label_1cccac:
    if (ctx->pc == 0x1CCCACu) {
        ctx->pc = 0x1CCCB0u;
        goto label_1cccb0;
    }
    ctx->pc = 0x1CCCA8u;
    SET_GPR_U32(ctx, 31, 0x1CCCB0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB0u; }
        if (ctx->pc != 0x1CCCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB0u; }
        if (ctx->pc != 0x1CCCB0u) { return; }
    }
    ctx->pc = 0x1CCCB0u;
label_1cccb0:
    // 0x1cccb0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cccb4:
    // 0x1cccb4: 0x144300c6  bne         $v0, $v1, . + 4 + (0xC6 << 2)
label_1cccb8:
    if (ctx->pc == 0x1CCCB8u) {
        ctx->pc = 0x1CCCBCu;
        goto label_1cccbc;
    }
    ctx->pc = 0x1CCCB4u;
    {
        const bool branch_taken_0x1cccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cccb4) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCCBCu;
label_1cccbc:
    // 0x1cccbc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cccc0:
    // 0x1cccc0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cccc4:
    // 0x1cccc4: 0xc0655a8  jal         func_1956A0
label_1cccc8:
    if (ctx->pc == 0x1CCCC8u) {
        ctx->pc = 0x1CCCC8u;
            // 0x1cccc8: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CCCCCu;
        goto label_1ccccc;
    }
    ctx->pc = 0x1CCCC4u;
    SET_GPR_U32(ctx, 31, 0x1CCCCCu);
    ctx->pc = 0x1CCCC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCC4u;
            // 0x1cccc8: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCCCu; }
        if (ctx->pc != 0x1CCCCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCCCu; }
        if (ctx->pc != 0x1CCCCCu) { return; }
    }
    ctx->pc = 0x1CCCCCu;
label_1ccccc:
    // 0x1ccccc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cccd0:
    // 0x1cccd0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cccd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cccd4:
    // 0x1cccd4: 0xc0655a8  jal         func_1956A0
label_1cccd8:
    if (ctx->pc == 0x1CCCD8u) {
        ctx->pc = 0x1CCCD8u;
            // 0x1cccd8: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CCCDCu;
        goto label_1cccdc;
    }
    ctx->pc = 0x1CCCD4u;
    SET_GPR_U32(ctx, 31, 0x1CCCDCu);
    ctx->pc = 0x1CCCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCD4u;
            // 0x1cccd8: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCDCu; }
        if (ctx->pc != 0x1CCCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCDCu; }
        if (ctx->pc != 0x1CCCDCu) { return; }
    }
    ctx->pc = 0x1CCCDCu;
label_1cccdc:
    // 0x1cccdc: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cccdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccce0:
    // 0x1ccce0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ccce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ccce4:
    // 0x1ccce4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccce8:
    // 0x1ccce8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccce8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cccec:
    // 0x1cccec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cccecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cccf0:
    // 0x1cccf0: 0xc0655dc  jal         func_195770
label_1cccf4:
    if (ctx->pc == 0x1CCCF4u) {
        ctx->pc = 0x1CCCF4u;
            // 0x1cccf4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CCCF8u;
        goto label_1cccf8;
    }
    ctx->pc = 0x1CCCF0u;
    SET_GPR_U32(ctx, 31, 0x1CCCF8u);
    ctx->pc = 0x1CCCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCF0u;
            // 0x1cccf4: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF8u; }
        if (ctx->pc != 0x1CCCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF8u; }
        if (ctx->pc != 0x1CCCF8u) { return; }
    }
    ctx->pc = 0x1CCCF8u;
label_1cccf8:
    // 0x1cccf8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cccf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cccfc:
    // 0x1cccfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1cccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ccd00:
    // 0x1ccd00: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccd04:
    // 0x1ccd04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccd08:
    // 0x1ccd08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ccd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ccd0c:
    // 0x1ccd0c: 0xc0655dc  jal         func_195770
label_1ccd10:
    if (ctx->pc == 0x1CCD10u) {
        ctx->pc = 0x1CCD10u;
            // 0x1ccd10: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CCD14u;
        goto label_1ccd14;
    }
    ctx->pc = 0x1CCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD14u);
    ctx->pc = 0x1CCD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD0Cu;
            // 0x1ccd10: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD14u; }
        if (ctx->pc != 0x1CCD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD14u; }
        if (ctx->pc != 0x1CCD14u) { return; }
    }
    ctx->pc = 0x1CCD14u;
label_1ccd14:
    // 0x1ccd14: 0x100000ae  b           . + 4 + (0xAE << 2)
label_1ccd18:
    if (ctx->pc == 0x1CCD18u) {
        ctx->pc = 0x1CCD1Cu;
        goto label_1ccd1c;
    }
    ctx->pc = 0x1CCD14u;
    {
        const bool branch_taken_0x1ccd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd14) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCD1Cu;
label_1ccd1c:
    // 0x1ccd1c: 0x0  nop
    ctx->pc = 0x1ccd1cu;
    // NOP
label_1ccd20:
    // 0x1ccd20: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1ccd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_1ccd24:
    // 0x1ccd24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1ccd28:
    if (ctx->pc == 0x1CCD28u) {
        ctx->pc = 0x1CCD2Cu;
        goto label_1ccd2c;
    }
    ctx->pc = 0x1CCD24u;
    {
        const bool branch_taken_0x1ccd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ccd24) {
            ctx->pc = 0x1CCD40u;
            goto label_1ccd40;
        }
    }
    ctx->pc = 0x1CCD2Cu;
label_1ccd2c:
    // 0x1ccd2c: 0xc065d00  jal         func_197400
label_1ccd30:
    if (ctx->pc == 0x1CCD30u) {
        ctx->pc = 0x1CCD34u;
        goto label_1ccd34;
    }
    ctx->pc = 0x1CCD2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD34u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD34u; }
        if (ctx->pc != 0x1CCD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD34u; }
        if (ctx->pc != 0x1CCD34u) { return; }
    }
    ctx->pc = 0x1CCD34u;
label_1ccd34:
    // 0x1ccd34: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1ccd34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1ccd38:
    // 0x1ccd38: 0x142000a5  bnez        $at, . + 4 + (0xA5 << 2)
label_1ccd3c:
    if (ctx->pc == 0x1CCD3Cu) {
        ctx->pc = 0x1CCD40u;
        goto label_1ccd40;
    }
    ctx->pc = 0x1CCD38u;
    {
        const bool branch_taken_0x1ccd38 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd38) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCD40u;
label_1ccd40:
    // 0x1ccd40: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1ccd44:
    // 0x1ccd44: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x1ccd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
label_1ccd48:
    // 0x1ccd48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_1ccd4c:
    if (ctx->pc == 0x1CCD4Cu) {
        ctx->pc = 0x1CCD50u;
        goto label_1ccd50;
    }
    ctx->pc = 0x1CCD48u;
    {
        const bool branch_taken_0x1ccd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ccd48) {
            ctx->pc = 0x1CCD60u;
            goto label_1ccd60;
        }
    }
    ctx->pc = 0x1CCD50u;
label_1ccd50:
    // 0x1ccd50: 0xc065d00  jal         func_197400
label_1ccd54:
    if (ctx->pc == 0x1CCD54u) {
        ctx->pc = 0x1CCD58u;
        goto label_1ccd58;
    }
    ctx->pc = 0x1CCD50u;
    SET_GPR_U32(ctx, 31, 0x1CCD58u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD58u; }
        if (ctx->pc != 0x1CCD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD58u; }
        if (ctx->pc != 0x1CCD58u) { return; }
    }
    ctx->pc = 0x1CCD58u;
label_1ccd58:
    // 0x1ccd58: 0x1840009d  blez        $v0, . + 4 + (0x9D << 2)
label_1ccd5c:
    if (ctx->pc == 0x1CCD5Cu) {
        ctx->pc = 0x1CCD60u;
        goto label_1ccd60;
    }
    ctx->pc = 0x1CCD58u;
    {
        const bool branch_taken_0x1ccd58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ccd58) {
            ctx->pc = 0x1CCFD0u;
            goto label_1ccfd0;
        }
    }
    ctx->pc = 0x1CCD60u;
label_1ccd60:
    // 0x1ccd60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ccd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1ccd64:
    // 0x1ccd64: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1ccd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1ccd68:
    // 0x1ccd68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1ccd6c:
    // 0x1ccd6c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1ccd70:
    // 0x1ccd70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ccd74:
    // 0x1ccd74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1ccd78:
    // 0x1ccd78: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1ccd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ccd7c:
    // 0x1ccd7c: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1ccd80:
    // 0x1ccd80: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ccd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ccd84:
    // 0x1ccd84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccd84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccd88:
    // 0x1ccd88: 0x0  nop
    ctx->pc = 0x1ccd88u;
    // NOP
label_1ccd8c:
    // 0x1ccd8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccd8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ccd90:
    // 0x1ccd90: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1ccd90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1ccd94:
    // 0x1ccd94: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1ccd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1ccd98:
    // 0x1ccd98: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ccd98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ccd9c:
    // 0x1ccd9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccda0:
    // 0x1ccda0: 0x0  nop
    ctx->pc = 0x1ccda0u;
    // NOP
label_1ccda4:
    // 0x1ccda4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccda4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ccda8:
    // 0x1ccda8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1ccda8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1ccdac:
    // 0x1ccdac: 0xc04b6ee  jal         func_12DBB8
label_1ccdb0:
    if (ctx->pc == 0x1CCDB0u) {
        ctx->pc = 0x1CCDB0u;
            // 0x1ccdb0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1CCDB4u;
        goto label_1ccdb4;
    }
    ctx->pc = 0x1CCDACu;
    SET_GPR_U32(ctx, 31, 0x1CCDB4u);
    ctx->pc = 0x1CCDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDACu;
            // 0x1ccdb0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDB4u; }
        if (ctx->pc != 0x1CCDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDB4u; }
        if (ctx->pc != 0x1CCDB4u) { return; }
    }
    ctx->pc = 0x1CCDB4u;
label_1ccdb4:
    // 0x1ccdb4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x1ccdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ccdb8:
    // 0x1ccdb8: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_1ccdbc:
    // 0x1ccdbc: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1ccdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ccdc0:
    // 0x1ccdc0: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1ccdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1ccdc4:
    // 0x1ccdc4: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1ccdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ccdc8:
    // 0x1ccdc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1ccdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ccdcc:
    // 0x1ccdcc: 0x0  nop
    ctx->pc = 0x1ccdccu;
    // NOP
label_1ccdd0:
    // 0x1ccdd0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1ccdd0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1ccdd4:
    // 0x1ccdd4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1ccdd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1ccdd8:
    // 0x1ccdd8: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ccdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1ccddc:
    // 0x1ccddc: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1ccddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1ccde0:
    // 0x1ccde0: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x1ccde0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_1ccde4:
    // 0x1ccde4: 0xc05d080  jal         func_174200
label_1ccde8:
    if (ctx->pc == 0x1CCDE8u) {
        ctx->pc = 0x1CCDE8u;
            // 0x1ccde8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CCDECu;
        goto label_1ccdec;
    }
    ctx->pc = 0x1CCDE4u;
    SET_GPR_U32(ctx, 31, 0x1CCDECu);
    ctx->pc = 0x1CCDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDE4u;
            // 0x1ccde8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDECu; }
        if (ctx->pc != 0x1CCDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDECu; }
        if (ctx->pc != 0x1CCDECu) { return; }
    }
    ctx->pc = 0x1CCDECu;
label_1ccdec:
    // 0x1ccdec: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccdf0:
    // 0x1ccdf0: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccdf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccdf4:
    // 0x1ccdf4: 0xc0655a8  jal         func_1956A0
label_1ccdf8:
    if (ctx->pc == 0x1CCDF8u) {
        ctx->pc = 0x1CCDF8u;
            // 0x1ccdf8: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1CCDFCu;
        goto label_1ccdfc;
    }
    ctx->pc = 0x1CCDF4u;
    SET_GPR_U32(ctx, 31, 0x1CCDFCu);
    ctx->pc = 0x1CCDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDF4u;
            // 0x1ccdf8: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDFCu; }
        if (ctx->pc != 0x1CCDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDFCu; }
        if (ctx->pc != 0x1CCDFCu) { return; }
    }
    ctx->pc = 0x1CCDFCu;
label_1ccdfc:
    // 0x1ccdfc: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce00:
    // 0x1cce00: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1cce00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1cce04:
    // 0x1cce04: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce08:
    // 0x1cce08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce0c:
    // 0x1cce0c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce10:
    // 0x1cce10: 0xc065480  jal         func_195200
label_1cce14:
    if (ctx->pc == 0x1CCE14u) {
        ctx->pc = 0x1CCE14u;
            // 0x1cce14: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCE18u;
        goto label_1cce18;
    }
    ctx->pc = 0x1CCE10u;
    SET_GPR_U32(ctx, 31, 0x1CCE18u);
    ctx->pc = 0x1CCE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE10u;
            // 0x1cce14: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE18u; }
        if (ctx->pc != 0x1CCE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE18u; }
        if (ctx->pc != 0x1CCE18u) { return; }
    }
    ctx->pc = 0x1CCE18u;
label_1cce18:
    // 0x1cce18: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cce18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce1c:
    // 0x1cce1c: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1cce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_1cce20:
    // 0x1cce20: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce24:
    // 0x1cce24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce28:
    // 0x1cce28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce2c:
    // 0x1cce2c: 0xc065480  jal         func_195200
label_1cce30:
    if (ctx->pc == 0x1CCE30u) {
        ctx->pc = 0x1CCE30u;
            // 0x1cce30: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCE34u;
        goto label_1cce34;
    }
    ctx->pc = 0x1CCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCE34u);
    ctx->pc = 0x1CCE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE2Cu;
            // 0x1cce30: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE34u; }
        if (ctx->pc != 0x1CCE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE34u; }
        if (ctx->pc != 0x1CCE34u) { return; }
    }
    ctx->pc = 0x1CCE34u;
label_1cce34:
    // 0x1cce34: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cce34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce38:
    // 0x1cce38: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1cce3c:
    // 0x1cce3c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce40:
    // 0x1cce40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce44:
    // 0x1cce44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce48:
    // 0x1cce48: 0xc065480  jal         func_195200
label_1cce4c:
    if (ctx->pc == 0x1CCE4Cu) {
        ctx->pc = 0x1CCE4Cu;
            // 0x1cce4c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCE50u;
        goto label_1cce50;
    }
    ctx->pc = 0x1CCE48u;
    SET_GPR_U32(ctx, 31, 0x1CCE50u);
    ctx->pc = 0x1CCE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE48u;
            // 0x1cce4c: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE50u; }
        if (ctx->pc != 0x1CCE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE50u; }
        if (ctx->pc != 0x1CCE50u) { return; }
    }
    ctx->pc = 0x1CCE50u;
label_1cce50:
    // 0x1cce50: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce54:
    // 0x1cce54: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_1cce58:
    // 0x1cce58: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce5c:
    // 0x1cce5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce60:
    // 0x1cce60: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce64:
    // 0x1cce64: 0xc065480  jal         func_195200
label_1cce68:
    if (ctx->pc == 0x1CCE68u) {
        ctx->pc = 0x1CCE68u;
            // 0x1cce68: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCE6Cu;
        goto label_1cce6c;
    }
    ctx->pc = 0x1CCE64u;
    SET_GPR_U32(ctx, 31, 0x1CCE6Cu);
    ctx->pc = 0x1CCE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE64u;
            // 0x1cce68: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE6Cu; }
        if (ctx->pc != 0x1CCE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE6Cu; }
        if (ctx->pc != 0x1CCE6Cu) { return; }
    }
    ctx->pc = 0x1CCE6Cu;
label_1cce6c:
    // 0x1cce6c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce70:
    // 0x1cce70: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1cce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1cce74:
    // 0x1cce74: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce78:
    // 0x1cce78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce7c:
    // 0x1cce7c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce80:
    // 0x1cce80: 0xc065480  jal         func_195200
label_1cce84:
    if (ctx->pc == 0x1CCE84u) {
        ctx->pc = 0x1CCE84u;
            // 0x1cce84: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCE88u;
        goto label_1cce88;
    }
    ctx->pc = 0x1CCE80u;
    SET_GPR_U32(ctx, 31, 0x1CCE88u);
    ctx->pc = 0x1CCE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE80u;
            // 0x1cce84: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE88u; }
        if (ctx->pc != 0x1CCE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE88u; }
        if (ctx->pc != 0x1CCE88u) { return; }
    }
    ctx->pc = 0x1CCE88u;
label_1cce88:
    // 0x1cce88: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cce8c:
    // 0x1cce8c: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_1cce90:
    // 0x1cce90: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cce90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cce94:
    // 0x1cce94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cce94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cce98:
    // 0x1cce98: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cce98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cce9c:
    // 0x1cce9c: 0xc065480  jal         func_195200
label_1ccea0:
    if (ctx->pc == 0x1CCEA0u) {
        ctx->pc = 0x1CCEA0u;
            // 0x1ccea0: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->pc = 0x1CCEA4u;
        goto label_1ccea4;
    }
    ctx->pc = 0x1CCE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCEA4u);
    ctx->pc = 0x1CCEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE9Cu;
            // 0x1ccea0: 0x2464fff8  addiu       $a0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEA4u; }
        if (ctx->pc != 0x1CCEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEA4u; }
        if (ctx->pc != 0x1CCEA4u) { return; }
    }
    ctx->pc = 0x1CCEA4u;
label_1ccea4:
    // 0x1ccea4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ccea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1ccea8:
    // 0x1ccea8: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x1ccea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cceac:
    // 0x1cceac: 0x8c233528  lw          $v1, 0x3528($at)
    ctx->pc = 0x1cceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13608)));
label_1cceb0:
    // 0x1cceb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1cceb4:
    // 0x1cceb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1cceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1cceb8:
    // 0x1cceb8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1cceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ccebc:
    // 0x1ccebc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1ccebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1ccec0:
    // 0x1ccec0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x1ccec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1ccec4:
    // 0x1ccec4: 0x8c22352c  lw          $v0, 0x352C($at)
    ctx->pc = 0x1ccec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13612)));
label_1ccec8:
    // 0x1ccec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ccec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccecc:
    // 0x1ccecc: 0x0  nop
    ctx->pc = 0x1cceccu;
    // NOP
label_1cced0:
    // 0x1cced0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1cced0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cced4:
    // 0x1cced4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1cced4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1cced8:
    // 0x1cced8: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cced8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1ccedc:
    // 0x1ccedc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ccee0:
    // 0x1ccee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ccee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ccee4:
    // 0x1ccee4: 0x0  nop
    ctx->pc = 0x1ccee4u;
    // NOP
label_1ccee8:
    // 0x1ccee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ccee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1cceec:
    // 0x1cceec: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1cceecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1ccef0:
    // 0x1ccef0: 0xc04b6ee  jal         func_12DBB8
label_1ccef4:
    if (ctx->pc == 0x1CCEF4u) {
        ctx->pc = 0x1CCEF4u;
            // 0x1ccef4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1CCEF8u;
        goto label_1ccef8;
    }
    ctx->pc = 0x1CCEF0u;
    SET_GPR_U32(ctx, 31, 0x1CCEF8u);
    ctx->pc = 0x1CCEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEF0u;
            // 0x1ccef4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEF8u; }
        if (ctx->pc != 0x1CCEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEF8u; }
        if (ctx->pc != 0x1CCEF8u) { return; }
    }
    ctx->pc = 0x1CCEF8u;
label_1ccef8:
    // 0x1ccef8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1ccef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ccefc:
    // 0x1ccefc: 0x3c0241b8  lui         $v0, 0x41B8
    ctx->pc = 0x1ccefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16824 << 16));
label_1ccf00:
    // 0x1ccf00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ccf00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ccf04:
    // 0x1ccf04: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccf08:
    // 0x1ccf08: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1ccf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf0c:
    // 0x1ccf0c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1ccf0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1ccf10:
    // 0x1ccf10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ccf10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ccf14:
    // 0x1ccf14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ccf14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ccf18:
    // 0x1ccf18: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x1ccf18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1ccf1c:
    // 0x1ccf1c: 0xc0655a8  jal         func_1956A0
label_1ccf20:
    if (ctx->pc == 0x1CCF20u) {
        ctx->pc = 0x1CCF20u;
            // 0x1ccf20: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1CCF24u;
        goto label_1ccf24;
    }
    ctx->pc = 0x1CCF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF24u);
    ctx->pc = 0x1CCF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF1Cu;
            // 0x1ccf20: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF24u; }
        if (ctx->pc != 0x1CCF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF24u; }
        if (ctx->pc != 0x1CCF24u) { return; }
    }
    ctx->pc = 0x1CCF24u;
label_1ccf24:
    // 0x1ccf24: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf28:
    // 0x1ccf28: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1ccf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1ccf2c:
    // 0x1ccf2c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccf30:
    // 0x1ccf30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccf34:
    // 0x1ccf34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf38:
    // 0x1ccf38: 0xc065480  jal         func_195200
label_1ccf3c:
    if (ctx->pc == 0x1CCF3Cu) {
        ctx->pc = 0x1CCF3Cu;
            // 0x1ccf3c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCF40u;
        goto label_1ccf40;
    }
    ctx->pc = 0x1CCF38u;
    SET_GPR_U32(ctx, 31, 0x1CCF40u);
    ctx->pc = 0x1CCF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF38u;
            // 0x1ccf3c: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF40u; }
        if (ctx->pc != 0x1CCF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF40u; }
        if (ctx->pc != 0x1CCF40u) { return; }
    }
    ctx->pc = 0x1CCF40u;
label_1ccf40:
    // 0x1ccf40: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf44:
    // 0x1ccf44: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1ccf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
label_1ccf48:
    // 0x1ccf48: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccf4c:
    // 0x1ccf4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccf50:
    // 0x1ccf50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf54:
    // 0x1ccf54: 0xc065480  jal         func_195200
label_1ccf58:
    if (ctx->pc == 0x1CCF58u) {
        ctx->pc = 0x1CCF58u;
            // 0x1ccf58: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCF5Cu;
        goto label_1ccf5c;
    }
    ctx->pc = 0x1CCF54u;
    SET_GPR_U32(ctx, 31, 0x1CCF5Cu);
    ctx->pc = 0x1CCF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF54u;
            // 0x1ccf58: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF5Cu; }
        if (ctx->pc != 0x1CCF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF5Cu; }
        if (ctx->pc != 0x1CCF5Cu) { return; }
    }
    ctx->pc = 0x1CCF5Cu;
label_1ccf5c:
    // 0x1ccf5c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf60:
    // 0x1ccf60: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ccf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1ccf64:
    // 0x1ccf64: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccf68:
    // 0x1ccf68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccf6c:
    // 0x1ccf6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccf6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf70:
    // 0x1ccf70: 0xc065480  jal         func_195200
label_1ccf74:
    if (ctx->pc == 0x1CCF74u) {
        ctx->pc = 0x1CCF74u;
            // 0x1ccf74: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCF78u;
        goto label_1ccf78;
    }
    ctx->pc = 0x1CCF70u;
    SET_GPR_U32(ctx, 31, 0x1CCF78u);
    ctx->pc = 0x1CCF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF70u;
            // 0x1ccf74: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF78u; }
        if (ctx->pc != 0x1CCF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF78u; }
        if (ctx->pc != 0x1CCF78u) { return; }
    }
    ctx->pc = 0x1CCF78u;
label_1ccf78:
    // 0x1ccf78: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf7c:
    // 0x1ccf7c: 0x3c0240b0  lui         $v0, 0x40B0
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16560 << 16));
label_1ccf80:
    // 0x1ccf80: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccf84:
    // 0x1ccf84: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccf88:
    // 0x1ccf88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccf88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf8c:
    // 0x1ccf8c: 0xc065480  jal         func_195200
label_1ccf90:
    if (ctx->pc == 0x1CCF90u) {
        ctx->pc = 0x1CCF90u;
            // 0x1ccf90: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCF94u;
        goto label_1ccf94;
    }
    ctx->pc = 0x1CCF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF94u);
    ctx->pc = 0x1CCF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF8Cu;
            // 0x1ccf90: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF94u; }
        if (ctx->pc != 0x1CCF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF94u; }
        if (ctx->pc != 0x1CCF94u) { return; }
    }
    ctx->pc = 0x1CCF94u;
label_1ccf94:
    // 0x1ccf94: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccf98:
    // 0x1ccf98: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_1ccf9c:
    // 0x1ccf9c: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccfa0:
    // 0x1ccfa0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccfa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccfa4:
    // 0x1ccfa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccfa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfa8:
    // 0x1ccfa8: 0xc065480  jal         func_195200
label_1ccfac:
    if (ctx->pc == 0x1CCFACu) {
        ctx->pc = 0x1CCFACu;
            // 0x1ccfac: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCFB0u;
        goto label_1ccfb0;
    }
    ctx->pc = 0x1CCFA8u;
    SET_GPR_U32(ctx, 31, 0x1CCFB0u);
    ctx->pc = 0x1CCFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFA8u;
            // 0x1ccfac: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFB0u; }
        if (ctx->pc != 0x1CCFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFB0u; }
        if (ctx->pc != 0x1CCFB0u) { return; }
    }
    ctx->pc = 0x1CCFB0u;
label_1ccfb0:
    // 0x1ccfb0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1ccfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1ccfb4:
    // 0x1ccfb4: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1ccfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_1ccfb8:
    // 0x1ccfb8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1ccfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1ccfbc:
    // 0x1ccfbc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ccfbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ccfc0:
    // 0x1ccfc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ccfc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfc4:
    // 0x1ccfc4: 0xc065480  jal         func_195200
label_1ccfc8:
    if (ctx->pc == 0x1CCFC8u) {
        ctx->pc = 0x1CCFC8u;
            // 0x1ccfc8: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x1CCFCCu;
        goto label_1ccfcc;
    }
    ctx->pc = 0x1CCFC4u;
    SET_GPR_U32(ctx, 31, 0x1CCFCCu);
    ctx->pc = 0x1CCFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFC4u;
            // 0x1ccfc8: 0x24640008  addiu       $a0, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFCCu; }
        if (ctx->pc != 0x1CCFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFCCu; }
        if (ctx->pc != 0x1CCFCCu) { return; }
    }
    ctx->pc = 0x1CCFCCu;
label_1ccfcc:
    // 0x1ccfcc: 0x0  nop
    ctx->pc = 0x1ccfccu;
    // NOP
label_1ccfd0:
    // 0x1ccfd0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1ccfd4:
    // 0x1ccfd4: 0x28620096  slti        $v0, $v1, 0x96
    ctx->pc = 0x1ccfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
label_1ccfd8:
    // 0x1ccfd8: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
label_1ccfdc:
    if (ctx->pc == 0x1CCFDCu) {
        ctx->pc = 0x1CCFDCu;
            // 0x1ccfdc: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->pc = 0x1CCFE0u;
        goto label_1ccfe0;
    }
    ctx->pc = 0x1CCFD8u;
    {
        const bool branch_taken_0x1ccfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFD8u;
            // 0x1ccfdc: 0x286100c9  slti        $at, $v1, 0xC9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfd8) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CCFE0u;
label_1ccfe0:
    // 0x1ccfe0: 0x102000b3  beqz        $at, . + 4 + (0xB3 << 2)
label_1ccfe4:
    if (ctx->pc == 0x1CCFE4u) {
        ctx->pc = 0x1CCFE4u;
            // 0x1ccfe4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1CCFE8u;
        goto label_1ccfe8;
    }
    ctx->pc = 0x1CCFE0u;
    {
        const bool branch_taken_0x1ccfe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFE0u;
            // 0x1ccfe4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccfe0) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CCFE8u;
label_1ccfe8:
    // 0x1ccfe8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1ccfe8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ccfec:
    // 0x1ccfec: 0x0  nop
    ctx->pc = 0x1ccfecu;
    // NOP
label_1ccff0:
    // 0x1ccff0: 0x0  nop
    ctx->pc = 0x1ccff0u;
    // NOP
label_1ccff4:
    // 0x1ccff4: 0x1010  mfhi        $v0
    ctx->pc = 0x1ccff4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1ccff8:
    // 0x1ccff8: 0x144000ad  bnez        $v0, . + 4 + (0xAD << 2)
label_1ccffc:
    if (ctx->pc == 0x1CCFFCu) {
        ctx->pc = 0x1CD000u;
        goto label_1cd000;
    }
    ctx->pc = 0x1CCFF8u;
    {
        const bool branch_taken_0x1ccff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccff8) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD000u;
label_1cd000:
    // 0x1cd000: 0xc065d00  jal         func_197400
label_1cd004:
    if (ctx->pc == 0x1CD004u) {
        ctx->pc = 0x1CD008u;
        goto label_1cd008;
    }
    ctx->pc = 0x1CD000u;
    SET_GPR_U32(ctx, 31, 0x1CD008u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD008u; }
        if (ctx->pc != 0x1CD008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD008u; }
        if (ctx->pc != 0x1CD008u) { return; }
    }
    ctx->pc = 0x1CD008u;
label_1cd008:
    // 0x1cd008: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cd008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cd00c:
    // 0x1cd00c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
label_1cd010:
    if (ctx->pc == 0x1CD010u) {
        ctx->pc = 0x1CD014u;
        goto label_1cd014;
    }
    ctx->pc = 0x1CD00Cu;
    {
        const bool branch_taken_0x1cd00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cd00c) {
            ctx->pc = 0x1CD088u;
            goto label_1cd088;
        }
    }
    ctx->pc = 0x1CD014u;
label_1cd014:
    // 0x1cd014: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1cd014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd018:
    // 0x1cd018: 0x24040026  addiu       $a0, $zero, 0x26
    ctx->pc = 0x1cd018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1cd01c:
    // 0x1cd01c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1cd01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd020:
    // 0x1cd020: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cd020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cd024:
    // 0x1cd024: 0xc05d080  jal         func_174200
label_1cd028:
    if (ctx->pc == 0x1CD028u) {
        ctx->pc = 0x1CD028u;
            // 0x1cd028: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CD02Cu;
        goto label_1cd02c;
    }
    ctx->pc = 0x1CD024u;
    SET_GPR_U32(ctx, 31, 0x1CD02Cu);
    ctx->pc = 0x1CD028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD024u;
            // 0x1cd028: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD02Cu; }
        if (ctx->pc != 0x1CD02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD02Cu; }
        if (ctx->pc != 0x1CD02Cu) { return; }
    }
    ctx->pc = 0x1CD02Cu;
label_1cd02c:
    // 0x1cd02c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd030:
    // 0x1cd030: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd034:
    // 0x1cd034: 0xc0655a8  jal         func_1956A0
label_1cd038:
    if (ctx->pc == 0x1CD038u) {
        ctx->pc = 0x1CD038u;
            // 0x1cd038: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->pc = 0x1CD03Cu;
        goto label_1cd03c;
    }
    ctx->pc = 0x1CD034u;
    SET_GPR_U32(ctx, 31, 0x1CD03Cu);
    ctx->pc = 0x1CD038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD034u;
            // 0x1cd038: 0x2444fff8  addiu       $a0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD03Cu; }
        if (ctx->pc != 0x1CD03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD03Cu; }
        if (ctx->pc != 0x1CD03Cu) { return; }
    }
    ctx->pc = 0x1CD03Cu;
label_1cd03c:
    // 0x1cd03c: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd040:
    // 0x1cd040: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1cd044:
    // 0x1cd044: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd048:
    // 0x1cd048: 0x2464fff8  addiu       $a0, $v1, -0x8
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1cd04c:
    // 0x1cd04c: 0xc065508  jal         func_195420
label_1cd050:
    if (ctx->pc == 0x1CD050u) {
        ctx->pc = 0x1CD050u;
            // 0x1cd050: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1CD054u;
        goto label_1cd054;
    }
    ctx->pc = 0x1CD04Cu;
    SET_GPR_U32(ctx, 31, 0x1CD054u);
    ctx->pc = 0x1CD050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD04Cu;
            // 0x1cd050: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD054u; }
        if (ctx->pc != 0x1CD054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD054u; }
        if (ctx->pc != 0x1CD054u) { return; }
    }
    ctx->pc = 0x1CD054u;
label_1cd054:
    // 0x1cd054: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd058:
    // 0x1cd058: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd05c:
    // 0x1cd05c: 0xc0655a8  jal         func_1956A0
label_1cd060:
    if (ctx->pc == 0x1CD060u) {
        ctx->pc = 0x1CD060u;
            // 0x1cd060: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->pc = 0x1CD064u;
        goto label_1cd064;
    }
    ctx->pc = 0x1CD05Cu;
    SET_GPR_U32(ctx, 31, 0x1CD064u);
    ctx->pc = 0x1CD060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD05Cu;
            // 0x1cd060: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD064u; }
        if (ctx->pc != 0x1CD064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD064u; }
        if (ctx->pc != 0x1CD064u) { return; }
    }
    ctx->pc = 0x1CD064u;
label_1cd064:
    // 0x1cd064: 0x8e630118  lw          $v1, 0x118($s3)
    ctx->pc = 0x1cd064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1cd068:
    // 0x1cd068: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1cd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1cd06c:
    // 0x1cd06c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x1cd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd070:
    // 0x1cd070: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd074:
    // 0x1cd074: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cd078:
    // 0x1cd078: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cd078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1cd07c:
    // 0x1cd07c: 0xc065508  jal         func_195420
label_1cd080:
    if (ctx->pc == 0x1CD080u) {
        ctx->pc = 0x1CD080u;
            // 0x1cd080: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CD084u;
        goto label_1cd084;
    }
    ctx->pc = 0x1CD07Cu;
    SET_GPR_U32(ctx, 31, 0x1CD084u);
    ctx->pc = 0x1CD080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD07Cu;
            // 0x1cd080: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195420u;
    if (runtime->hasFunction(0x195420u)) {
        auto targetFn = runtime->lookupFunction(0x195420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD084u; }
        if (ctx->pc != 0x1CD084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_0x195420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD084u; }
        if (ctx->pc != 0x1CD084u) { return; }
    }
    ctx->pc = 0x1CD084u;
label_1cd084:
    // 0x1cd084: 0x0  nop
    ctx->pc = 0x1cd084u;
    // NOP
label_1cd088:
    // 0x1cd088: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x1cd088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_1cd08c:
    // 0x1cd08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd090:
    // 0x1cd090: 0x10000087  b           . + 4 + (0x87 << 2)
label_1cd094:
    if (ctx->pc == 0x1CD094u) {
        ctx->pc = 0x1CD094u;
            // 0x1cd094: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1CD098u;
        goto label_1cd098;
    }
    ctx->pc = 0x1CD090u;
    {
        const bool branch_taken_0x1cd090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD090u;
            // 0x1cd094: 0xae620118  sw          $v0, 0x118($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd090) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD098u;
label_1cd098:
    // 0x1cd098: 0x28610105  slti        $at, $v1, 0x105
    ctx->pc = 0x1cd098u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)261) ? 1 : 0);
label_1cd09c:
    // 0x1cd09c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_1cd0a0:
    if (ctx->pc == 0x1CD0A0u) {
        ctx->pc = 0x1CD0A0u;
            // 0x1cd0a0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->pc = 0x1CD0A4u;
        goto label_1cd0a4;
    }
    ctx->pc = 0x1CD09Cu;
    {
        const bool branch_taken_0x1cd09c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD09Cu;
            // 0x1cd0a0: 0x3c023c23  lui         $v0, 0x3C23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd09c) {
            ctx->pc = 0x1CD0E0u;
            goto label_1cd0e0;
        }
    }
    ctx->pc = 0x1CD0A4u;
label_1cd0a4:
    // 0x1cd0a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1cd0a4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_1cd0a8:
    // 0x1cd0a8: 0xae6200d4  sw          $v0, 0xD4($s3)
    ctx->pc = 0x1cd0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 212), GPR_U32(ctx, 2));
label_1cd0ac:
    // 0x1cd0ac: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd0b0:
    // 0x1cd0b0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd0b4:
    // 0x1cd0b4: 0x24640019  addiu       $a0, $v1, 0x19
    ctx->pc = 0x1cd0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
label_1cd0b8:
    // 0x1cd0b8: 0xc065590  jal         func_195640
label_1cd0bc:
    if (ctx->pc == 0x1CD0BCu) {
        ctx->pc = 0x1CD0BCu;
            // 0x1cd0bc: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CD0C0u;
        goto label_1cd0c0;
    }
    ctx->pc = 0x1CD0B8u;
    SET_GPR_U32(ctx, 31, 0x1CD0C0u);
    ctx->pc = 0x1CD0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0B8u;
            // 0x1cd0bc: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C0u; }
        if (ctx->pc != 0x1CD0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C0u; }
        if (ctx->pc != 0x1CD0C0u) { return; }
    }
    ctx->pc = 0x1CD0C0u;
label_1cd0c0:
    // 0x1cd0c0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd0c4:
    // 0x1cd0c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd0c8:
    // 0x1cd0c8: 0x2464ffe7  addiu       $a0, $v1, -0x19
    ctx->pc = 0x1cd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
label_1cd0cc:
    // 0x1cd0cc: 0xc065590  jal         func_195640
label_1cd0d0:
    if (ctx->pc == 0x1CD0D0u) {
        ctx->pc = 0x1CD0D0u;
            // 0x1cd0d0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->pc = 0x1CD0D4u;
        goto label_1cd0d4;
    }
    ctx->pc = 0x1CD0CCu;
    SET_GPR_U32(ctx, 31, 0x1CD0D4u);
    ctx->pc = 0x1CD0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0CCu;
            // 0x1cd0d0: 0x2445000a  addiu       $a1, $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0D4u; }
        if (ctx->pc != 0x1CD0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0D4u; }
        if (ctx->pc != 0x1CD0D4u) { return; }
    }
    ctx->pc = 0x1CD0D4u;
label_1cd0d4:
    // 0x1cd0d4: 0x10000076  b           . + 4 + (0x76 << 2)
label_1cd0d8:
    if (ctx->pc == 0x1CD0D8u) {
        ctx->pc = 0x1CD0DCu;
        goto label_1cd0dc;
    }
    ctx->pc = 0x1CD0D4u;
    {
        const bool branch_taken_0x1cd0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0d4) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD0DCu;
label_1cd0dc:
    // 0x1cd0dc: 0x0  nop
    ctx->pc = 0x1cd0dcu;
    // NOP
label_1cd0e0:
    // 0x1cd0e0: 0x3c023f82  lui         $v0, 0x3F82
    ctx->pc = 0x1cd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16258 << 16));
label_1cd0e4:
    // 0x1cd0e4: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1cd0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd0e8:
    // 0x1cd0e8: 0x34428f5c  ori         $v0, $v0, 0x8F5C
    ctx->pc = 0x1cd0e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)36700u)));
label_1cd0ec:
    // 0x1cd0ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cd0ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd0f0:
    // 0x1cd0f0: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x1cd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
label_1cd0f4:
    // 0x1cd0f4: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x1cd0f4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)20972u)));
label_1cd0f8:
    // 0x1cd0f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cd0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd0fc:
    // 0x1cd0fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd100:
    // 0x1cd100: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1cd100u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1cd104:
    // 0x1cd104: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x1cd104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_1cd108:
    // 0x1cd108: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cd108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd10c:
    // 0x1cd10c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd10cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd110:
    // 0x1cd110: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cd110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1cd114:
    // 0x1cd114: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cd114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cd118:
    // 0x1cd118: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cd118u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cd11c:
    // 0x1cd11c: 0x0  nop
    ctx->pc = 0x1cd11cu;
    // NOP
label_1cd120:
    // 0x1cd120: 0x0  nop
    ctx->pc = 0x1cd120u;
    // NOP
label_1cd124:
    // 0x1cd124: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd124u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd128:
    // 0x1cd128: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1cd12c:
    if (ctx->pc == 0x1CD12Cu) {
        ctx->pc = 0x1CD130u;
        goto label_1cd130;
    }
    ctx->pc = 0x1CD128u;
    {
        const bool branch_taken_0x1cd128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd128) {
            ctx->pc = 0x1CD150u;
            goto label_1cd150;
        }
    }
    ctx->pc = 0x1CD130u;
label_1cd130:
    // 0x1cd130: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd134:
    // 0x1cd134: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd138:
    // 0x1cd138: 0xc0655a0  jal         func_195680
label_1cd13c:
    if (ctx->pc == 0x1CD13Cu) {
        ctx->pc = 0x1CD13Cu;
            // 0x1cd13c: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->pc = 0x1CD140u;
        goto label_1cd140;
    }
    ctx->pc = 0x1CD138u;
    SET_GPR_U32(ctx, 31, 0x1CD140u);
    ctx->pc = 0x1CD13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD138u;
            // 0x1cd13c: 0x24440019  addiu       $a0, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD140u; }
        if (ctx->pc != 0x1CD140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD140u; }
        if (ctx->pc != 0x1CD140u) { return; }
    }
    ctx->pc = 0x1CD140u;
label_1cd140:
    // 0x1cd140: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd144:
    // 0x1cd144: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd148:
    // 0x1cd148: 0xc0655a0  jal         func_195680
label_1cd14c:
    if (ctx->pc == 0x1CD14Cu) {
        ctx->pc = 0x1CD14Cu;
            // 0x1cd14c: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->pc = 0x1CD150u;
        goto label_1cd150;
    }
    ctx->pc = 0x1CD148u;
    SET_GPR_U32(ctx, 31, 0x1CD150u);
    ctx->pc = 0x1CD14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD148u;
            // 0x1cd14c: 0x2444ffe7  addiu       $a0, $v0, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195680u;
    if (runtime->hasFunction(0x195680u)) {
        auto targetFn = runtime->lookupFunction(0x195680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD150u; }
        if (ctx->pc != 0x1CD150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_0x195680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD150u; }
        if (ctx->pc != 0x1CD150u) { return; }
    }
    ctx->pc = 0x1CD150u;
label_1cd150:
    // 0x1cd150: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cd150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cd154:
    // 0x1cd154: 0x240201e0  addiu       $v0, $zero, 0x1E0
    ctx->pc = 0x1cd154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
label_1cd158:
    // 0x1cd158: 0x1062003d  beq         $v1, $v0, . + 4 + (0x3D << 2)
label_1cd15c:
    if (ctx->pc == 0x1CD15Cu) {
        ctx->pc = 0x1CD15Cu;
            // 0x1cd15c: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->pc = 0x1CD160u;
        goto label_1cd160;
    }
    ctx->pc = 0x1CD158u;
    {
        const bool branch_taken_0x1cd158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD158u;
            // 0x1cd15c: 0x240201d6  addiu       $v0, $zero, 0x1D6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd158) {
            ctx->pc = 0x1CD250u;
            goto label_1cd250;
        }
    }
    ctx->pc = 0x1CD160u;
label_1cd160:
    // 0x1cd160: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_1cd164:
    if (ctx->pc == 0x1CD164u) {
        ctx->pc = 0x1CD168u;
        goto label_1cd168;
    }
    ctx->pc = 0x1CD160u;
    {
        const bool branch_taken_0x1cd160 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd160) {
            ctx->pc = 0x1CD1E8u;
            goto label_1cd1e8;
        }
    }
    ctx->pc = 0x1CD168u;
label_1cd168:
    // 0x1cd168: 0x240201cc  addiu       $v0, $zero, 0x1CC
    ctx->pc = 0x1cd168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 460));
label_1cd16c:
    // 0x1cd16c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1cd170:
    if (ctx->pc == 0x1CD170u) {
        ctx->pc = 0x1CD174u;
        goto label_1cd174;
    }
    ctx->pc = 0x1CD16Cu;
    {
        const bool branch_taken_0x1cd16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cd16c) {
            ctx->pc = 0x1CD180u;
            goto label_1cd180;
        }
    }
    ctx->pc = 0x1CD174u;
label_1cd174:
    // 0x1cd174: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1cd178:
    if (ctx->pc == 0x1CD178u) {
        ctx->pc = 0x1CD17Cu;
        goto label_1cd17c;
    }
    ctx->pc = 0x1CD174u;
    {
        const bool branch_taken_0x1cd174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd174) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD17Cu;
label_1cd17c:
    // 0x1cd17c: 0x0  nop
    ctx->pc = 0x1cd17cu;
    // NOP
label_1cd180:
    // 0x1cd180: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd184:
    // 0x1cd184: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd188:
    // 0x1cd188: 0xc0655a8  jal         func_1956A0
label_1cd18c:
    if (ctx->pc == 0x1CD18Cu) {
        ctx->pc = 0x1CD18Cu;
            // 0x1cd18c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CD190u;
        goto label_1cd190;
    }
    ctx->pc = 0x1CD188u;
    SET_GPR_U32(ctx, 31, 0x1CD190u);
    ctx->pc = 0x1CD18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD188u;
            // 0x1cd18c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD190u; }
        if (ctx->pc != 0x1CD190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD190u; }
        if (ctx->pc != 0x1CD190u) { return; }
    }
    ctx->pc = 0x1CD190u;
label_1cd190:
    // 0x1cd190: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd194:
    // 0x1cd194: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd198:
    // 0x1cd198: 0xc0655a8  jal         func_1956A0
label_1cd19c:
    if (ctx->pc == 0x1CD19Cu) {
        ctx->pc = 0x1CD19Cu;
            // 0x1cd19c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CD1A0u;
        goto label_1cd1a0;
    }
    ctx->pc = 0x1CD198u;
    SET_GPR_U32(ctx, 31, 0x1CD1A0u);
    ctx->pc = 0x1CD19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD198u;
            // 0x1cd19c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1A0u; }
        if (ctx->pc != 0x1CD1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1A0u; }
        if (ctx->pc != 0x1CD1A0u) { return; }
    }
    ctx->pc = 0x1CD1A0u;
label_1cd1a0:
    // 0x1cd1a0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd1a4:
    // 0x1cd1a4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cd1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cd1a8:
    // 0x1cd1a8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd1ac:
    // 0x1cd1ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd1b0:
    // 0x1cd1b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cd1b4:
    // 0x1cd1b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd1b8:
    // 0x1cd1b8: 0xc0655dc  jal         func_195770
label_1cd1bc:
    if (ctx->pc == 0x1CD1BCu) {
        ctx->pc = 0x1CD1BCu;
            // 0x1cd1bc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CD1C0u;
        goto label_1cd1c0;
    }
    ctx->pc = 0x1CD1B8u;
    SET_GPR_U32(ctx, 31, 0x1CD1C0u);
    ctx->pc = 0x1CD1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1B8u;
            // 0x1cd1bc: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1C0u; }
        if (ctx->pc != 0x1CD1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1C0u; }
        if (ctx->pc != 0x1CD1C0u) { return; }
    }
    ctx->pc = 0x1CD1C0u;
label_1cd1c0:
    // 0x1cd1c0: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd1c4:
    // 0x1cd1c4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd1c8:
    // 0x1cd1c8: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd1cc:
    // 0x1cd1cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd1d0:
    // 0x1cd1d0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cd1d4:
    // 0x1cd1d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd1d8:
    // 0x1cd1d8: 0xc0655dc  jal         func_195770
label_1cd1dc:
    if (ctx->pc == 0x1CD1DCu) {
        ctx->pc = 0x1CD1DCu;
            // 0x1cd1dc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CD1E0u;
        goto label_1cd1e0;
    }
    ctx->pc = 0x1CD1D8u;
    SET_GPR_U32(ctx, 31, 0x1CD1E0u);
    ctx->pc = 0x1CD1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1D8u;
            // 0x1cd1dc: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1E0u; }
        if (ctx->pc != 0x1CD1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1E0u; }
        if (ctx->pc != 0x1CD1E0u) { return; }
    }
    ctx->pc = 0x1CD1E0u;
label_1cd1e0:
    // 0x1cd1e0: 0x10000033  b           . + 4 + (0x33 << 2)
label_1cd1e4:
    if (ctx->pc == 0x1CD1E4u) {
        ctx->pc = 0x1CD1E8u;
        goto label_1cd1e8;
    }
    ctx->pc = 0x1CD1E0u;
    {
        const bool branch_taken_0x1cd1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd1e0) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD1E8u;
label_1cd1e8:
    // 0x1cd1e8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd1ec:
    // 0x1cd1ec: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd1f0:
    // 0x1cd1f0: 0xc0655a8  jal         func_1956A0
label_1cd1f4:
    if (ctx->pc == 0x1CD1F4u) {
        ctx->pc = 0x1CD1F4u;
            // 0x1cd1f4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CD1F8u;
        goto label_1cd1f8;
    }
    ctx->pc = 0x1CD1F0u;
    SET_GPR_U32(ctx, 31, 0x1CD1F8u);
    ctx->pc = 0x1CD1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1F0u;
            // 0x1cd1f4: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1F8u; }
        if (ctx->pc != 0x1CD1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1F8u; }
        if (ctx->pc != 0x1CD1F8u) { return; }
    }
    ctx->pc = 0x1CD1F8u;
label_1cd1f8:
    // 0x1cd1f8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd1fc:
    // 0x1cd1fc: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd200:
    // 0x1cd200: 0xc0655a8  jal         func_1956A0
label_1cd204:
    if (ctx->pc == 0x1CD204u) {
        ctx->pc = 0x1CD204u;
            // 0x1cd204: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CD208u;
        goto label_1cd208;
    }
    ctx->pc = 0x1CD200u;
    SET_GPR_U32(ctx, 31, 0x1CD208u);
    ctx->pc = 0x1CD204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD200u;
            // 0x1cd204: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD208u; }
        if (ctx->pc != 0x1CD208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD208u; }
        if (ctx->pc != 0x1CD208u) { return; }
    }
    ctx->pc = 0x1CD208u;
label_1cd208:
    // 0x1cd208: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd20c:
    // 0x1cd20c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cd210:
    // 0x1cd210: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd214:
    // 0x1cd214: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd218:
    // 0x1cd218: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cd218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cd21c:
    // 0x1cd21c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd220:
    // 0x1cd220: 0xc0655dc  jal         func_195770
label_1cd224:
    if (ctx->pc == 0x1CD224u) {
        ctx->pc = 0x1CD224u;
            // 0x1cd224: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CD228u;
        goto label_1cd228;
    }
    ctx->pc = 0x1CD220u;
    SET_GPR_U32(ctx, 31, 0x1CD228u);
    ctx->pc = 0x1CD224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD220u;
            // 0x1cd224: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD228u; }
        if (ctx->pc != 0x1CD228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD228u; }
        if (ctx->pc != 0x1CD228u) { return; }
    }
    ctx->pc = 0x1CD228u;
label_1cd228:
    // 0x1cd228: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd22c:
    // 0x1cd22c: 0x3c02bfc0  lui         $v0, 0xBFC0
    ctx->pc = 0x1cd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49088 << 16));
label_1cd230:
    // 0x1cd230: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd234:
    // 0x1cd234: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd238:
    // 0x1cd238: 0x0  nop
    ctx->pc = 0x1cd238u;
    // NOP
label_1cd23c:
    // 0x1cd23c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd23cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd240:
    // 0x1cd240: 0xc0655dc  jal         func_195770
label_1cd244:
    if (ctx->pc == 0x1CD244u) {
        ctx->pc = 0x1CD244u;
            // 0x1cd244: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CD248u;
        goto label_1cd248;
    }
    ctx->pc = 0x1CD240u;
    SET_GPR_U32(ctx, 31, 0x1CD248u);
    ctx->pc = 0x1CD244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD240u;
            // 0x1cd244: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD248u; }
        if (ctx->pc != 0x1CD248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD248u; }
        if (ctx->pc != 0x1CD248u) { return; }
    }
    ctx->pc = 0x1CD248u;
label_1cd248:
    // 0x1cd248: 0x10000019  b           . + 4 + (0x19 << 2)
label_1cd24c:
    if (ctx->pc == 0x1CD24Cu) {
        ctx->pc = 0x1CD250u;
        goto label_1cd250;
    }
    ctx->pc = 0x1CD248u;
    {
        const bool branch_taken_0x1cd248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd248) {
            ctx->pc = 0x1CD2B0u;
            goto label_1cd2b0;
        }
    }
    ctx->pc = 0x1CD250u;
label_1cd250:
    // 0x1cd250: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd254:
    // 0x1cd254: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd258:
    // 0x1cd258: 0xc0655a8  jal         func_1956A0
label_1cd25c:
    if (ctx->pc == 0x1CD25Cu) {
        ctx->pc = 0x1CD25Cu;
            // 0x1cd25c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1CD260u;
        goto label_1cd260;
    }
    ctx->pc = 0x1CD258u;
    SET_GPR_U32(ctx, 31, 0x1CD260u);
    ctx->pc = 0x1CD25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD258u;
            // 0x1cd25c: 0x24440028  addiu       $a0, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD260u; }
        if (ctx->pc != 0x1CD260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD260u; }
        if (ctx->pc != 0x1CD260u) { return; }
    }
    ctx->pc = 0x1CD260u;
label_1cd260:
    // 0x1cd260: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd264:
    // 0x1cd264: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd268:
    // 0x1cd268: 0xc0655a8  jal         func_1956A0
label_1cd26c:
    if (ctx->pc == 0x1CD26Cu) {
        ctx->pc = 0x1CD26Cu;
            // 0x1cd26c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->pc = 0x1CD270u;
        goto label_1cd270;
    }
    ctx->pc = 0x1CD268u;
    SET_GPR_U32(ctx, 31, 0x1CD270u);
    ctx->pc = 0x1CD26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD268u;
            // 0x1cd26c: 0x2444ffd8  addiu       $a0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD270u; }
        if (ctx->pc != 0x1CD270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD270u; }
        if (ctx->pc != 0x1CD270u) { return; }
    }
    ctx->pc = 0x1CD270u;
label_1cd270:
    // 0x1cd270: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd274:
    // 0x1cd274: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cd274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cd278:
    // 0x1cd278: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd27c:
    // 0x1cd27c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd27cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd280:
    // 0x1cd280: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd284:
    // 0x1cd284: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd288:
    // 0x1cd288: 0xc0655dc  jal         func_195770
label_1cd28c:
    if (ctx->pc == 0x1CD28Cu) {
        ctx->pc = 0x1CD28Cu;
            // 0x1cd28c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->pc = 0x1CD290u;
        goto label_1cd290;
    }
    ctx->pc = 0x1CD288u;
    SET_GPR_U32(ctx, 31, 0x1CD290u);
    ctx->pc = 0x1CD28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD288u;
            // 0x1cd28c: 0x24640028  addiu       $a0, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD290u; }
        if (ctx->pc != 0x1CD290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD290u; }
        if (ctx->pc != 0x1CD290u) { return; }
    }
    ctx->pc = 0x1CD290u;
label_1cd290:
    // 0x1cd290: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1cd290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd294:
    // 0x1cd294: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cd298:
    // 0x1cd298: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd29c:
    // 0x1cd29c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd2a0:
    // 0x1cd2a0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd2a4:
    // 0x1cd2a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd2a8:
    // 0x1cd2a8: 0xc0655dc  jal         func_195770
label_1cd2ac:
    if (ctx->pc == 0x1CD2ACu) {
        ctx->pc = 0x1CD2ACu;
            // 0x1cd2ac: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x1CD2B0u;
        goto label_1cd2b0;
    }
    ctx->pc = 0x1CD2A8u;
    SET_GPR_U32(ctx, 31, 0x1CD2B0u);
    ctx->pc = 0x1CD2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2A8u;
            // 0x1cd2ac: 0x2464ffd8  addiu       $a0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195770u;
    if (runtime->hasFunction(0x195770u)) {
        auto targetFn = runtime->lookupFunction(0x195770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B0u; }
        if (ctx->pc != 0x1CD2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_0x195770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B0u; }
        if (ctx->pc != 0x1CD2B0u) { return; }
    }
    ctx->pc = 0x1CD2B0u;
label_1cd2b0:
    // 0x1cd2b0: 0xc04b788  jal         func_12DE20
label_1cd2b4:
    if (ctx->pc == 0x1CD2B4u) {
        ctx->pc = 0x1CD2B4u;
            // 0x1cd2b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD2B8u;
        goto label_1cd2b8;
    }
    ctx->pc = 0x1CD2B0u;
    SET_GPR_U32(ctx, 31, 0x1CD2B8u);
    ctx->pc = 0x1CD2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2B0u;
            // 0x1cd2b4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B8u; }
        if (ctx->pc != 0x1CD2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B8u; }
        if (ctx->pc != 0x1CD2B8u) { return; }
    }
    ctx->pc = 0x1CD2B8u;
label_1cd2b8:
    // 0x1cd2b8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cd2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cd2bc:
    // 0x1cd2bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1cd2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd2c0:
    // 0x1cd2c0: 0xc04b7da  jal         func_12DF68
label_1cd2c4:
    if (ctx->pc == 0x1CD2C4u) {
        ctx->pc = 0x1CD2C4u;
            // 0x1cd2c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2C8u;
        goto label_1cd2c8;
    }
    ctx->pc = 0x1CD2C0u;
    SET_GPR_U32(ctx, 31, 0x1CD2C8u);
    ctx->pc = 0x1CD2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2C0u;
            // 0x1cd2c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C8u; }
        if (ctx->pc != 0x1CD2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C8u; }
        if (ctx->pc != 0x1CD2C8u) { return; }
    }
    ctx->pc = 0x1CD2C8u;
label_1cd2c8:
    // 0x1cd2c8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cd2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cd2cc:
    // 0x1cd2cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1cd2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd2d0:
    // 0x1cd2d0: 0xc04b804  jal         func_12E010
label_1cd2d4:
    if (ctx->pc == 0x1CD2D4u) {
        ctx->pc = 0x1CD2D4u;
            // 0x1cd2d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2D8u;
        goto label_1cd2d8;
    }
    ctx->pc = 0x1CD2D0u;
    SET_GPR_U32(ctx, 31, 0x1CD2D8u);
    ctx->pc = 0x1CD2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2D0u;
            // 0x1cd2d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2D8u; }
        if (ctx->pc != 0x1CD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2D8u; }
        if (ctx->pc != 0x1CD2D8u) { return; }
    }
    ctx->pc = 0x1CD2D8u;
label_1cd2d8:
    // 0x1cd2d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cd2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cd2dc:
    // 0x1cd2dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1cd2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cd2e0:
    // 0x1cd2e0: 0xc04b7b0  jal         func_12DEC0
label_1cd2e4:
    if (ctx->pc == 0x1CD2E4u) {
        ctx->pc = 0x1CD2E4u;
            // 0x1cd2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2E8u;
        goto label_1cd2e8;
    }
    ctx->pc = 0x1CD2E0u;
    SET_GPR_U32(ctx, 31, 0x1CD2E8u);
    ctx->pc = 0x1CD2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2E0u;
            // 0x1cd2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2E8u; }
        if (ctx->pc != 0x1CD2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2E8u; }
        if (ctx->pc != 0x1CD2E8u) { return; }
    }
    ctx->pc = 0x1CD2E8u;
label_1cd2e8:
    // 0x1cd2e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1cd2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cd2ec:
    // 0x1cd2ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1cd2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cd2f0:
    // 0x1cd2f0: 0xc04b75e  jal         func_12DD78
label_1cd2f4:
    if (ctx->pc == 0x1CD2F4u) {
        ctx->pc = 0x1CD2F4u;
            // 0x1cd2f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x1CD2F8u;
        goto label_1cd2f8;
    }
    ctx->pc = 0x1CD2F0u;
    SET_GPR_U32(ctx, 31, 0x1CD2F8u);
    ctx->pc = 0x1CD2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2F0u;
            // 0x1cd2f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2F8u; }
        if (ctx->pc != 0x1CD2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2F8u; }
        if (ctx->pc != 0x1CD2F8u) { return; }
    }
    ctx->pc = 0x1CD2F8u;
label_1cd2f8:
    // 0x1cd2f8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1cd2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cd2fc:
    // 0x1cd2fc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1cd2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1cd300:
    // 0x1cd300: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1cd300u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cd304:
    // 0x1cd304: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cd308:
    if (ctx->pc == 0x1CD308u) {
        ctx->pc = 0x1CD30Cu;
        goto label_1cd30c;
    }
    ctx->pc = 0x1CD304u;
    {
        const bool branch_taken_0x1cd304 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd304) {
            ctx->pc = 0x1CD358u;
            goto label_1cd358;
        }
    }
    ctx->pc = 0x1CD30Cu;
label_1cd30c:
    // 0x1cd30c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1cd30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1cd310:
    // 0x1cd310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cd314:
    if (ctx->pc == 0x1CD314u) {
        ctx->pc = 0x1CD318u;
        goto label_1cd318;
    }
    ctx->pc = 0x1CD310u;
    {
        const bool branch_taken_0x1cd310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd310) {
            ctx->pc = 0x1CD328u;
            goto label_1cd328;
        }
    }
    ctx->pc = 0x1CD318u;
label_1cd318:
    // 0x1cd318: 0xc0604f0  jal         func_1813C0
label_1cd31c:
    if (ctx->pc == 0x1CD31Cu) {
        ctx->pc = 0x1CD31Cu;
            // 0x1cd31c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD320u;
        goto label_1cd320;
    }
    ctx->pc = 0x1CD318u;
    SET_GPR_U32(ctx, 31, 0x1CD320u);
    ctx->pc = 0x1CD31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD318u;
            // 0x1cd31c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD320u; }
        if (ctx->pc != 0x1CD320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD320u; }
        if (ctx->pc != 0x1CD320u) { return; }
    }
    ctx->pc = 0x1CD320u;
label_1cd320:
    // 0x1cd320: 0x10000003  b           . + 4 + (0x3 << 2)
label_1cd324:
    if (ctx->pc == 0x1CD324u) {
        ctx->pc = 0x1CD328u;
        goto label_1cd328;
    }
    ctx->pc = 0x1CD320u;
    {
        const bool branch_taken_0x1cd320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd320) {
            ctx->pc = 0x1CD330u;
            goto label_1cd330;
        }
    }
    ctx->pc = 0x1CD328u;
label_1cd328:
    // 0x1cd328: 0xc0604dc  jal         func_181370
label_1cd32c:
    if (ctx->pc == 0x1CD32Cu) {
        ctx->pc = 0x1CD32Cu;
            // 0x1cd32c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD330u;
        goto label_1cd330;
    }
    ctx->pc = 0x1CD328u;
    SET_GPR_U32(ctx, 31, 0x1CD330u);
    ctx->pc = 0x1CD32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD328u;
            // 0x1cd32c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD330u; }
        if (ctx->pc != 0x1CD330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD330u; }
        if (ctx->pc != 0x1CD330u) { return; }
    }
    ctx->pc = 0x1CD330u;
label_1cd330:
    // 0x1cd330: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x1cd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_1cd334:
    // 0x1cd334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cd338:
    if (ctx->pc == 0x1CD338u) {
        ctx->pc = 0x1CD33Cu;
        goto label_1cd33c;
    }
    ctx->pc = 0x1CD334u;
    {
        const bool branch_taken_0x1cd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd334) {
            ctx->pc = 0x1CD348u;
            goto label_1cd348;
        }
    }
    ctx->pc = 0x1CD33Cu;
label_1cd33c:
    // 0x1cd33c: 0x10000022  b           . + 4 + (0x22 << 2)
label_1cd340:
    if (ctx->pc == 0x1CD340u) {
        ctx->pc = 0x1CD340u;
            // 0x1cd340: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->pc = 0x1CD344u;
        goto label_1cd344;
    }
    ctx->pc = 0x1CD33Cu;
    {
        const bool branch_taken_0x1cd33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD33Cu;
            // 0x1cd340: 0xae60010c  sw          $zero, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd33c) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD344u;
label_1cd344:
    // 0x1cd344: 0x0  nop
    ctx->pc = 0x1cd344u;
    // NOP
label_1cd348:
    // 0x1cd348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd34c:
    // 0x1cd34c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1cd350:
    if (ctx->pc == 0x1CD350u) {
        ctx->pc = 0x1CD350u;
            // 0x1cd350: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->pc = 0x1CD354u;
        goto label_1cd354;
    }
    ctx->pc = 0x1CD34Cu;
    {
        const bool branch_taken_0x1cd34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD34Cu;
            // 0x1cd350: 0xae62010c  sw          $v0, 0x10C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd34c) {
            ctx->pc = 0x1CD3C8u;
            goto label_1cd3c8;
        }
    }
    ctx->pc = 0x1CD354u;
label_1cd354:
    // 0x1cd354: 0x0  nop
    ctx->pc = 0x1cd354u;
    // NOP
label_1cd358:
    // 0x1cd358: 0x28610028  slti        $at, $v1, 0x28
    ctx->pc = 0x1cd358u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)40) ? 1 : 0);
label_1cd35c:
    // 0x1cd35c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_1cd360:
    if (ctx->pc == 0x1CD360u) {
        ctx->pc = 0x1CD364u;
        goto label_1cd364;
    }
    ctx->pc = 0x1CD35Cu;
    {
        const bool branch_taken_0x1cd35c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd35c) {
            ctx->pc = 0x1CD3B8u;
            goto label_1cd3b8;
        }
    }
    ctx->pc = 0x1CD364u;
label_1cd364:
    // 0x1cd364: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1cd364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cd368:
    // 0x1cd368: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cd368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cd36c:
    // 0x1cd36c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cd36cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cd370:
    // 0x1cd370: 0x0  nop
    ctx->pc = 0x1cd370u;
    // NOP
label_1cd374:
    // 0x1cd374: 0x0  nop
    ctx->pc = 0x1cd374u;
    // NOP
label_1cd378:
    // 0x1cd378: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd378u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd37c:
    // 0x1cd37c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1cd380:
    if (ctx->pc == 0x1CD380u) {
        ctx->pc = 0x1CD384u;
        goto label_1cd384;
    }
    ctx->pc = 0x1CD37Cu;
    {
        const bool branch_taken_0x1cd37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd37c) {
            ctx->pc = 0x1CD3B8u;
            goto label_1cd3b8;
        }
    }
    ctx->pc = 0x1CD384u;
label_1cd384:
    // 0x1cd384: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd388:
    // 0x1cd388: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd38c:
    // 0x1cd38c: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_1cd390:
    // 0x1cd390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd394:
    // 0x1cd394: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1cd394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd398:
    // 0x1cd398: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd39c:
    // 0x1cd39c: 0xc0536d8  jal         func_14DB60
label_1cd3a0:
    if (ctx->pc == 0x1CD3A0u) {
        ctx->pc = 0x1CD3A0u;
            // 0x1cd3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CD3A4u;
        goto label_1cd3a4;
    }
    ctx->pc = 0x1CD39Cu;
    SET_GPR_U32(ctx, 31, 0x1CD3A4u);
    ctx->pc = 0x1CD3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD39Cu;
            // 0x1cd3a0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3A4u; }
        if (ctx->pc != 0x1CD3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3A4u; }
        if (ctx->pc != 0x1CD3A4u) { return; }
    }
    ctx->pc = 0x1CD3A4u;
label_1cd3a4:
    // 0x1cd3a4: 0xc060500  jal         func_181400
label_1cd3a8:
    if (ctx->pc == 0x1CD3A8u) {
        ctx->pc = 0x1CD3A8u;
            // 0x1cd3a8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD3ACu;
        goto label_1cd3ac;
    }
    ctx->pc = 0x1CD3A4u;
    SET_GPR_U32(ctx, 31, 0x1CD3ACu);
    ctx->pc = 0x1CD3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3A4u;
            // 0x1cd3a8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3ACu; }
        if (ctx->pc != 0x1CD3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3ACu; }
        if (ctx->pc != 0x1CD3ACu) { return; }
    }
    ctx->pc = 0x1CD3ACu;
label_1cd3ac:
    // 0x1cd3ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_1cd3b0:
    if (ctx->pc == 0x1CD3B0u) {
        ctx->pc = 0x1CD3B4u;
        goto label_1cd3b4;
    }
    ctx->pc = 0x1CD3ACu;
    {
        const bool branch_taken_0x1cd3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd3ac) {
            ctx->pc = 0x1CD3C0u;
            goto label_1cd3c0;
        }
    }
    ctx->pc = 0x1CD3B4u;
label_1cd3b4:
    // 0x1cd3b4: 0x0  nop
    ctx->pc = 0x1cd3b4u;
    // NOP
label_1cd3b8:
    // 0x1cd3b8: 0xc0604dc  jal         func_181370
label_1cd3bc:
    if (ctx->pc == 0x1CD3BCu) {
        ctx->pc = 0x1CD3BCu;
            // 0x1cd3bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD3C0u;
        goto label_1cd3c0;
    }
    ctx->pc = 0x1CD3B8u;
    SET_GPR_U32(ctx, 31, 0x1CD3C0u);
    ctx->pc = 0x1CD3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3B8u;
            // 0x1cd3bc: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3C0u; }
        if (ctx->pc != 0x1CD3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3C0u; }
        if (ctx->pc != 0x1CD3C0u) { return; }
    }
    ctx->pc = 0x1CD3C0u;
label_1cd3c0:
    // 0x1cd3c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd3c4:
    // 0x1cd3c4: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x1cd3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
label_1cd3c8:
    // 0x1cd3c8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1cd3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cd3cc:
    // 0x1cd3cc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1cd3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1cd3d0:
    // 0x1cd3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cd3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cd3d4:
    // 0x1cd3d4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x1cd3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_1cd3d8:
    // 0x1cd3d8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd3dc:
    // 0x1cd3dc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x1cd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_1cd3e0:
    // 0x1cd3e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd3e4:
    // 0x1cd3e4: 0x0  nop
    ctx->pc = 0x1cd3e4u;
    // NOP
label_1cd3e8:
    // 0x1cd3e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd3ec:
    // 0x1cd3ec: 0xe661002c  swc1        $f1, 0x2C($s3)
    ctx->pc = 0x1cd3ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_1cd3f0:
    // 0x1cd3f0: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd3f4:
    // 0x1cd3f4: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x1cd3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_1cd3f8:
    // 0x1cd3f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd3fc:
    // 0x1cd3fc: 0x0  nop
    ctx->pc = 0x1cd3fcu;
    // NOP
label_1cd400:
    // 0x1cd400: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd404:
    // 0x1cd404: 0xe6610030  swc1        $f1, 0x30($s3)
    ctx->pc = 0x1cd404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_1cd408:
    // 0x1cd408: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1cd408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_1cd40c:
    // 0x1cd40c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1cd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1cd410:
    // 0x1cd410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd414:
    // 0x1cd414: 0x0  nop
    ctx->pc = 0x1cd414u;
    // NOP
label_1cd418:
    // 0x1cd418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd41c:
    // 0x1cd41c: 0xe6610034  swc1        $f1, 0x34($s3)
    ctx->pc = 0x1cd41cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
label_1cd420:
    // 0x1cd420: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1cd420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1cd424:
    // 0x1cd424: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cd424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cd428:
    // 0x1cd428: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd42c:
    // 0x1cd42c: 0x0  nop
    ctx->pc = 0x1cd42cu;
    // NOP
label_1cd430:
    // 0x1cd430: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1cd434:
    // 0x1cd434: 0xe6610038  swc1        $f1, 0x38($s3)
    ctx->pc = 0x1cd434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
label_1cd438:
    // 0x1cd438: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_1cd43c:
    // 0x1cd43c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd440:
    // 0x1cd440: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x1cd440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_1cd444:
    // 0x1cd444: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cd448:
    // 0x1cd448: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cd448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd44c:
    // 0x1cd44c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cd44cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cd450:
    // 0x1cd450: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1cd454:
    if (ctx->pc == 0x1CD454u) {
        ctx->pc = 0x1CD458u;
        goto label_1cd458;
    }
    ctx->pc = 0x1CD450u;
    {
        const bool branch_taken_0x1cd450 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cd450) {
            ctx->pc = 0x1CD470u;
            goto label_1cd470;
        }
    }
    ctx->pc = 0x1CD458u;
label_1cd458:
    // 0x1cd458: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1cd45c:
    // 0x1cd45c: 0x40f809  jalr        $v0
label_1cd460:
    if (ctx->pc == 0x1CD460u) {
        ctx->pc = 0x1CD460u;
            // 0x1cd460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD464u;
        goto label_1cd464;
    }
    ctx->pc = 0x1CD45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD464u);
        ctx->pc = 0x1CD460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD45Cu;
            // 0x1cd460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC790u: goto label_1cc790;
            case 0x1CC794u: goto label_1cc794;
            case 0x1CC798u: goto label_1cc798;
            case 0x1CC79Cu: goto label_1cc79c;
            case 0x1CC7A0u: goto label_1cc7a0;
            case 0x1CC7A4u: goto label_1cc7a4;
            case 0x1CC7A8u: goto label_1cc7a8;
            case 0x1CC7ACu: goto label_1cc7ac;
            case 0x1CC7B0u: goto label_1cc7b0;
            case 0x1CC7B4u: goto label_1cc7b4;
            case 0x1CC7B8u: goto label_1cc7b8;
            case 0x1CC7BCu: goto label_1cc7bc;
            case 0x1CC7C0u: goto label_1cc7c0;
            case 0x1CC7C4u: goto label_1cc7c4;
            case 0x1CC7C8u: goto label_1cc7c8;
            case 0x1CC7CCu: goto label_1cc7cc;
            case 0x1CC7D0u: goto label_1cc7d0;
            case 0x1CC7D4u: goto label_1cc7d4;
            case 0x1CC7D8u: goto label_1cc7d8;
            case 0x1CC7DCu: goto label_1cc7dc;
            case 0x1CC7E0u: goto label_1cc7e0;
            case 0x1CC7E4u: goto label_1cc7e4;
            case 0x1CC7E8u: goto label_1cc7e8;
            case 0x1CC7ECu: goto label_1cc7ec;
            case 0x1CC7F0u: goto label_1cc7f0;
            case 0x1CC7F4u: goto label_1cc7f4;
            case 0x1CC7F8u: goto label_1cc7f8;
            case 0x1CC7FCu: goto label_1cc7fc;
            case 0x1CC800u: goto label_1cc800;
            case 0x1CC804u: goto label_1cc804;
            case 0x1CC808u: goto label_1cc808;
            case 0x1CC80Cu: goto label_1cc80c;
            case 0x1CC810u: goto label_1cc810;
            case 0x1CC814u: goto label_1cc814;
            case 0x1CC818u: goto label_1cc818;
            case 0x1CC81Cu: goto label_1cc81c;
            case 0x1CC820u: goto label_1cc820;
            case 0x1CC824u: goto label_1cc824;
            case 0x1CC828u: goto label_1cc828;
            case 0x1CC82Cu: goto label_1cc82c;
            case 0x1CC830u: goto label_1cc830;
            case 0x1CC834u: goto label_1cc834;
            case 0x1CC838u: goto label_1cc838;
            case 0x1CC83Cu: goto label_1cc83c;
            case 0x1CC840u: goto label_1cc840;
            case 0x1CC844u: goto label_1cc844;
            case 0x1CC848u: goto label_1cc848;
            case 0x1CC84Cu: goto label_1cc84c;
            case 0x1CC850u: goto label_1cc850;
            case 0x1CC854u: goto label_1cc854;
            case 0x1CC858u: goto label_1cc858;
            case 0x1CC85Cu: goto label_1cc85c;
            case 0x1CC860u: goto label_1cc860;
            case 0x1CC864u: goto label_1cc864;
            case 0x1CC868u: goto label_1cc868;
            case 0x1CC86Cu: goto label_1cc86c;
            case 0x1CC870u: goto label_1cc870;
            case 0x1CC874u: goto label_1cc874;
            case 0x1CC878u: goto label_1cc878;
            case 0x1CC87Cu: goto label_1cc87c;
            case 0x1CC880u: goto label_1cc880;
            case 0x1CC884u: goto label_1cc884;
            case 0x1CC888u: goto label_1cc888;
            case 0x1CC88Cu: goto label_1cc88c;
            case 0x1CC890u: goto label_1cc890;
            case 0x1CC894u: goto label_1cc894;
            case 0x1CC898u: goto label_1cc898;
            case 0x1CC89Cu: goto label_1cc89c;
            case 0x1CC8A0u: goto label_1cc8a0;
            case 0x1CC8A4u: goto label_1cc8a4;
            case 0x1CC8A8u: goto label_1cc8a8;
            case 0x1CC8ACu: goto label_1cc8ac;
            case 0x1CC8B0u: goto label_1cc8b0;
            case 0x1CC8B4u: goto label_1cc8b4;
            case 0x1CC8B8u: goto label_1cc8b8;
            case 0x1CC8BCu: goto label_1cc8bc;
            case 0x1CC8C0u: goto label_1cc8c0;
            case 0x1CC8C4u: goto label_1cc8c4;
            case 0x1CC8C8u: goto label_1cc8c8;
            case 0x1CC8CCu: goto label_1cc8cc;
            case 0x1CC8D0u: goto label_1cc8d0;
            case 0x1CC8D4u: goto label_1cc8d4;
            case 0x1CC8D8u: goto label_1cc8d8;
            case 0x1CC8DCu: goto label_1cc8dc;
            case 0x1CC8E0u: goto label_1cc8e0;
            case 0x1CC8E4u: goto label_1cc8e4;
            case 0x1CC8E8u: goto label_1cc8e8;
            case 0x1CC8ECu: goto label_1cc8ec;
            case 0x1CC8F0u: goto label_1cc8f0;
            case 0x1CC8F4u: goto label_1cc8f4;
            case 0x1CC8F8u: goto label_1cc8f8;
            case 0x1CC8FCu: goto label_1cc8fc;
            case 0x1CC900u: goto label_1cc900;
            case 0x1CC904u: goto label_1cc904;
            case 0x1CC908u: goto label_1cc908;
            case 0x1CC90Cu: goto label_1cc90c;
            case 0x1CC910u: goto label_1cc910;
            case 0x1CC914u: goto label_1cc914;
            case 0x1CC918u: goto label_1cc918;
            case 0x1CC91Cu: goto label_1cc91c;
            case 0x1CC920u: goto label_1cc920;
            case 0x1CC924u: goto label_1cc924;
            case 0x1CC928u: goto label_1cc928;
            case 0x1CC92Cu: goto label_1cc92c;
            case 0x1CC930u: goto label_1cc930;
            case 0x1CC934u: goto label_1cc934;
            case 0x1CC938u: goto label_1cc938;
            case 0x1CC93Cu: goto label_1cc93c;
            case 0x1CC940u: goto label_1cc940;
            case 0x1CC944u: goto label_1cc944;
            case 0x1CC948u: goto label_1cc948;
            case 0x1CC94Cu: goto label_1cc94c;
            case 0x1CC950u: goto label_1cc950;
            case 0x1CC954u: goto label_1cc954;
            case 0x1CC958u: goto label_1cc958;
            case 0x1CC95Cu: goto label_1cc95c;
            case 0x1CC960u: goto label_1cc960;
            case 0x1CC964u: goto label_1cc964;
            case 0x1CC968u: goto label_1cc968;
            case 0x1CC96Cu: goto label_1cc96c;
            case 0x1CC970u: goto label_1cc970;
            case 0x1CC974u: goto label_1cc974;
            case 0x1CC978u: goto label_1cc978;
            case 0x1CC97Cu: goto label_1cc97c;
            case 0x1CC980u: goto label_1cc980;
            case 0x1CC984u: goto label_1cc984;
            case 0x1CC988u: goto label_1cc988;
            case 0x1CC98Cu: goto label_1cc98c;
            case 0x1CC990u: goto label_1cc990;
            case 0x1CC994u: goto label_1cc994;
            case 0x1CC998u: goto label_1cc998;
            case 0x1CC99Cu: goto label_1cc99c;
            case 0x1CC9A0u: goto label_1cc9a0;
            case 0x1CC9A4u: goto label_1cc9a4;
            case 0x1CC9A8u: goto label_1cc9a8;
            case 0x1CC9ACu: goto label_1cc9ac;
            case 0x1CC9B0u: goto label_1cc9b0;
            case 0x1CC9B4u: goto label_1cc9b4;
            case 0x1CC9B8u: goto label_1cc9b8;
            case 0x1CC9BCu: goto label_1cc9bc;
            case 0x1CC9C0u: goto label_1cc9c0;
            case 0x1CC9C4u: goto label_1cc9c4;
            case 0x1CC9C8u: goto label_1cc9c8;
            case 0x1CC9CCu: goto label_1cc9cc;
            case 0x1CC9D0u: goto label_1cc9d0;
            case 0x1CC9D4u: goto label_1cc9d4;
            case 0x1CC9D8u: goto label_1cc9d8;
            case 0x1CC9DCu: goto label_1cc9dc;
            case 0x1CC9E0u: goto label_1cc9e0;
            case 0x1CC9E4u: goto label_1cc9e4;
            case 0x1CC9E8u: goto label_1cc9e8;
            case 0x1CC9ECu: goto label_1cc9ec;
            case 0x1CC9F0u: goto label_1cc9f0;
            case 0x1CC9F4u: goto label_1cc9f4;
            case 0x1CC9F8u: goto label_1cc9f8;
            case 0x1CC9FCu: goto label_1cc9fc;
            case 0x1CCA00u: goto label_1cca00;
            case 0x1CCA04u: goto label_1cca04;
            case 0x1CCA08u: goto label_1cca08;
            case 0x1CCA0Cu: goto label_1cca0c;
            case 0x1CCA10u: goto label_1cca10;
            case 0x1CCA14u: goto label_1cca14;
            case 0x1CCA18u: goto label_1cca18;
            case 0x1CCA1Cu: goto label_1cca1c;
            case 0x1CCA20u: goto label_1cca20;
            case 0x1CCA24u: goto label_1cca24;
            case 0x1CCA28u: goto label_1cca28;
            case 0x1CCA2Cu: goto label_1cca2c;
            case 0x1CCA30u: goto label_1cca30;
            case 0x1CCA34u: goto label_1cca34;
            case 0x1CCA38u: goto label_1cca38;
            case 0x1CCA3Cu: goto label_1cca3c;
            case 0x1CCA40u: goto label_1cca40;
            case 0x1CCA44u: goto label_1cca44;
            case 0x1CCA48u: goto label_1cca48;
            case 0x1CCA4Cu: goto label_1cca4c;
            case 0x1CCA50u: goto label_1cca50;
            case 0x1CCA54u: goto label_1cca54;
            case 0x1CCA58u: goto label_1cca58;
            case 0x1CCA5Cu: goto label_1cca5c;
            case 0x1CCA60u: goto label_1cca60;
            case 0x1CCA64u: goto label_1cca64;
            case 0x1CCA68u: goto label_1cca68;
            case 0x1CCA6Cu: goto label_1cca6c;
            case 0x1CCA70u: goto label_1cca70;
            case 0x1CCA74u: goto label_1cca74;
            case 0x1CCA78u: goto label_1cca78;
            case 0x1CCA7Cu: goto label_1cca7c;
            case 0x1CCA80u: goto label_1cca80;
            case 0x1CCA84u: goto label_1cca84;
            case 0x1CCA88u: goto label_1cca88;
            case 0x1CCA8Cu: goto label_1cca8c;
            case 0x1CCA90u: goto label_1cca90;
            case 0x1CCA94u: goto label_1cca94;
            case 0x1CCA98u: goto label_1cca98;
            case 0x1CCA9Cu: goto label_1cca9c;
            case 0x1CCAA0u: goto label_1ccaa0;
            case 0x1CCAA4u: goto label_1ccaa4;
            case 0x1CCAA8u: goto label_1ccaa8;
            case 0x1CCAACu: goto label_1ccaac;
            case 0x1CCAB0u: goto label_1ccab0;
            case 0x1CCAB4u: goto label_1ccab4;
            case 0x1CCAB8u: goto label_1ccab8;
            case 0x1CCABCu: goto label_1ccabc;
            case 0x1CCAC0u: goto label_1ccac0;
            case 0x1CCAC4u: goto label_1ccac4;
            case 0x1CCAC8u: goto label_1ccac8;
            case 0x1CCACCu: goto label_1ccacc;
            case 0x1CCAD0u: goto label_1ccad0;
            case 0x1CCAD4u: goto label_1ccad4;
            case 0x1CCAD8u: goto label_1ccad8;
            case 0x1CCADCu: goto label_1ccadc;
            case 0x1CCAE0u: goto label_1ccae0;
            case 0x1CCAE4u: goto label_1ccae4;
            case 0x1CCAE8u: goto label_1ccae8;
            case 0x1CCAECu: goto label_1ccaec;
            case 0x1CCAF0u: goto label_1ccaf0;
            case 0x1CCAF4u: goto label_1ccaf4;
            case 0x1CCAF8u: goto label_1ccaf8;
            case 0x1CCAFCu: goto label_1ccafc;
            case 0x1CCB00u: goto label_1ccb00;
            case 0x1CCB04u: goto label_1ccb04;
            case 0x1CCB08u: goto label_1ccb08;
            case 0x1CCB0Cu: goto label_1ccb0c;
            case 0x1CCB10u: goto label_1ccb10;
            case 0x1CCB14u: goto label_1ccb14;
            case 0x1CCB18u: goto label_1ccb18;
            case 0x1CCB1Cu: goto label_1ccb1c;
            case 0x1CCB20u: goto label_1ccb20;
            case 0x1CCB24u: goto label_1ccb24;
            case 0x1CCB28u: goto label_1ccb28;
            case 0x1CCB2Cu: goto label_1ccb2c;
            case 0x1CCB30u: goto label_1ccb30;
            case 0x1CCB34u: goto label_1ccb34;
            case 0x1CCB38u: goto label_1ccb38;
            case 0x1CCB3Cu: goto label_1ccb3c;
            case 0x1CCB40u: goto label_1ccb40;
            case 0x1CCB44u: goto label_1ccb44;
            case 0x1CCB48u: goto label_1ccb48;
            case 0x1CCB4Cu: goto label_1ccb4c;
            case 0x1CCB50u: goto label_1ccb50;
            case 0x1CCB54u: goto label_1ccb54;
            case 0x1CCB58u: goto label_1ccb58;
            case 0x1CCB5Cu: goto label_1ccb5c;
            case 0x1CCB60u: goto label_1ccb60;
            case 0x1CCB64u: goto label_1ccb64;
            case 0x1CCB68u: goto label_1ccb68;
            case 0x1CCB6Cu: goto label_1ccb6c;
            case 0x1CCB70u: goto label_1ccb70;
            case 0x1CCB74u: goto label_1ccb74;
            case 0x1CCB78u: goto label_1ccb78;
            case 0x1CCB7Cu: goto label_1ccb7c;
            case 0x1CCB80u: goto label_1ccb80;
            case 0x1CCB84u: goto label_1ccb84;
            case 0x1CCB88u: goto label_1ccb88;
            case 0x1CCB8Cu: goto label_1ccb8c;
            case 0x1CCB90u: goto label_1ccb90;
            case 0x1CCB94u: goto label_1ccb94;
            case 0x1CCB98u: goto label_1ccb98;
            case 0x1CCB9Cu: goto label_1ccb9c;
            case 0x1CCBA0u: goto label_1ccba0;
            case 0x1CCBA4u: goto label_1ccba4;
            case 0x1CCBA8u: goto label_1ccba8;
            case 0x1CCBACu: goto label_1ccbac;
            case 0x1CCBB0u: goto label_1ccbb0;
            case 0x1CCBB4u: goto label_1ccbb4;
            case 0x1CCBB8u: goto label_1ccbb8;
            case 0x1CCBBCu: goto label_1ccbbc;
            case 0x1CCBC0u: goto label_1ccbc0;
            case 0x1CCBC4u: goto label_1ccbc4;
            case 0x1CCBC8u: goto label_1ccbc8;
            case 0x1CCBCCu: goto label_1ccbcc;
            case 0x1CCBD0u: goto label_1ccbd0;
            case 0x1CCBD4u: goto label_1ccbd4;
            case 0x1CCBD8u: goto label_1ccbd8;
            case 0x1CCBDCu: goto label_1ccbdc;
            case 0x1CCBE0u: goto label_1ccbe0;
            case 0x1CCBE4u: goto label_1ccbe4;
            case 0x1CCBE8u: goto label_1ccbe8;
            case 0x1CCBECu: goto label_1ccbec;
            case 0x1CCBF0u: goto label_1ccbf0;
            case 0x1CCBF4u: goto label_1ccbf4;
            case 0x1CCBF8u: goto label_1ccbf8;
            case 0x1CCBFCu: goto label_1ccbfc;
            case 0x1CCC00u: goto label_1ccc00;
            case 0x1CCC04u: goto label_1ccc04;
            case 0x1CCC08u: goto label_1ccc08;
            case 0x1CCC0Cu: goto label_1ccc0c;
            case 0x1CCC10u: goto label_1ccc10;
            case 0x1CCC14u: goto label_1ccc14;
            case 0x1CCC18u: goto label_1ccc18;
            case 0x1CCC1Cu: goto label_1ccc1c;
            case 0x1CCC20u: goto label_1ccc20;
            case 0x1CCC24u: goto label_1ccc24;
            case 0x1CCC28u: goto label_1ccc28;
            case 0x1CCC2Cu: goto label_1ccc2c;
            case 0x1CCC30u: goto label_1ccc30;
            case 0x1CCC34u: goto label_1ccc34;
            case 0x1CCC38u: goto label_1ccc38;
            case 0x1CCC3Cu: goto label_1ccc3c;
            case 0x1CCC40u: goto label_1ccc40;
            case 0x1CCC44u: goto label_1ccc44;
            case 0x1CCC48u: goto label_1ccc48;
            case 0x1CCC4Cu: goto label_1ccc4c;
            case 0x1CCC50u: goto label_1ccc50;
            case 0x1CCC54u: goto label_1ccc54;
            case 0x1CCC58u: goto label_1ccc58;
            case 0x1CCC5Cu: goto label_1ccc5c;
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC64u: goto label_1ccc64;
            case 0x1CCC68u: goto label_1ccc68;
            case 0x1CCC6Cu: goto label_1ccc6c;
            case 0x1CCC70u: goto label_1ccc70;
            case 0x1CCC74u: goto label_1ccc74;
            case 0x1CCC78u: goto label_1ccc78;
            case 0x1CCC7Cu: goto label_1ccc7c;
            case 0x1CCC80u: goto label_1ccc80;
            case 0x1CCC84u: goto label_1ccc84;
            case 0x1CCC88u: goto label_1ccc88;
            case 0x1CCC8Cu: goto label_1ccc8c;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCC94u: goto label_1ccc94;
            case 0x1CCC98u: goto label_1ccc98;
            case 0x1CCC9Cu: goto label_1ccc9c;
            case 0x1CCCA0u: goto label_1ccca0;
            case 0x1CCCA4u: goto label_1ccca4;
            case 0x1CCCA8u: goto label_1ccca8;
            case 0x1CCCACu: goto label_1cccac;
            case 0x1CCCB0u: goto label_1cccb0;
            case 0x1CCCB4u: goto label_1cccb4;
            case 0x1CCCB8u: goto label_1cccb8;
            case 0x1CCCBCu: goto label_1cccbc;
            case 0x1CCCC0u: goto label_1cccc0;
            case 0x1CCCC4u: goto label_1cccc4;
            case 0x1CCCC8u: goto label_1cccc8;
            case 0x1CCCCCu: goto label_1ccccc;
            case 0x1CCCD0u: goto label_1cccd0;
            case 0x1CCCD4u: goto label_1cccd4;
            case 0x1CCCD8u: goto label_1cccd8;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCCE0u: goto label_1ccce0;
            case 0x1CCCE4u: goto label_1ccce4;
            case 0x1CCCE8u: goto label_1ccce8;
            case 0x1CCCECu: goto label_1cccec;
            case 0x1CCCF0u: goto label_1cccf0;
            case 0x1CCCF4u: goto label_1cccf4;
            case 0x1CCCF8u: goto label_1cccf8;
            case 0x1CCCFCu: goto label_1cccfc;
            case 0x1CCD00u: goto label_1ccd00;
            case 0x1CCD04u: goto label_1ccd04;
            case 0x1CCD08u: goto label_1ccd08;
            case 0x1CCD0Cu: goto label_1ccd0c;
            case 0x1CCD10u: goto label_1ccd10;
            case 0x1CCD14u: goto label_1ccd14;
            case 0x1CCD18u: goto label_1ccd18;
            case 0x1CCD1Cu: goto label_1ccd1c;
            case 0x1CCD20u: goto label_1ccd20;
            case 0x1CCD24u: goto label_1ccd24;
            case 0x1CCD28u: goto label_1ccd28;
            case 0x1CCD2Cu: goto label_1ccd2c;
            case 0x1CCD30u: goto label_1ccd30;
            case 0x1CCD34u: goto label_1ccd34;
            case 0x1CCD38u: goto label_1ccd38;
            case 0x1CCD3Cu: goto label_1ccd3c;
            case 0x1CCD40u: goto label_1ccd40;
            case 0x1CCD44u: goto label_1ccd44;
            case 0x1CCD48u: goto label_1ccd48;
            case 0x1CCD4Cu: goto label_1ccd4c;
            case 0x1CCD50u: goto label_1ccd50;
            case 0x1CCD54u: goto label_1ccd54;
            case 0x1CCD58u: goto label_1ccd58;
            case 0x1CCD5Cu: goto label_1ccd5c;
            case 0x1CCD60u: goto label_1ccd60;
            case 0x1CCD64u: goto label_1ccd64;
            case 0x1CCD68u: goto label_1ccd68;
            case 0x1CCD6Cu: goto label_1ccd6c;
            case 0x1CCD70u: goto label_1ccd70;
            case 0x1CCD74u: goto label_1ccd74;
            case 0x1CCD78u: goto label_1ccd78;
            case 0x1CCD7Cu: goto label_1ccd7c;
            case 0x1CCD80u: goto label_1ccd80;
            case 0x1CCD84u: goto label_1ccd84;
            case 0x1CCD88u: goto label_1ccd88;
            case 0x1CCD8Cu: goto label_1ccd8c;
            case 0x1CCD90u: goto label_1ccd90;
            case 0x1CCD94u: goto label_1ccd94;
            case 0x1CCD98u: goto label_1ccd98;
            case 0x1CCD9Cu: goto label_1ccd9c;
            case 0x1CCDA0u: goto label_1ccda0;
            case 0x1CCDA4u: goto label_1ccda4;
            case 0x1CCDA8u: goto label_1ccda8;
            case 0x1CCDACu: goto label_1ccdac;
            case 0x1CCDB0u: goto label_1ccdb0;
            case 0x1CCDB4u: goto label_1ccdb4;
            case 0x1CCDB8u: goto label_1ccdb8;
            case 0x1CCDBCu: goto label_1ccdbc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDC8u: goto label_1ccdc8;
            case 0x1CCDCCu: goto label_1ccdcc;
            case 0x1CCDD0u: goto label_1ccdd0;
            case 0x1CCDD4u: goto label_1ccdd4;
            case 0x1CCDD8u: goto label_1ccdd8;
            case 0x1CCDDCu: goto label_1ccddc;
            case 0x1CCDE0u: goto label_1ccde0;
            case 0x1CCDE4u: goto label_1ccde4;
            case 0x1CCDE8u: goto label_1ccde8;
            case 0x1CCDECu: goto label_1ccdec;
            case 0x1CCDF0u: goto label_1ccdf0;
            case 0x1CCDF4u: goto label_1ccdf4;
            case 0x1CCDF8u: goto label_1ccdf8;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE00u: goto label_1cce00;
            case 0x1CCE04u: goto label_1cce04;
            case 0x1CCE08u: goto label_1cce08;
            case 0x1CCE0Cu: goto label_1cce0c;
            case 0x1CCE10u: goto label_1cce10;
            case 0x1CCE14u: goto label_1cce14;
            case 0x1CCE18u: goto label_1cce18;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE20u: goto label_1cce20;
            case 0x1CCE24u: goto label_1cce24;
            case 0x1CCE28u: goto label_1cce28;
            case 0x1CCE2Cu: goto label_1cce2c;
            case 0x1CCE30u: goto label_1cce30;
            case 0x1CCE34u: goto label_1cce34;
            case 0x1CCE38u: goto label_1cce38;
            case 0x1CCE3Cu: goto label_1cce3c;
            case 0x1CCE40u: goto label_1cce40;
            case 0x1CCE44u: goto label_1cce44;
            case 0x1CCE48u: goto label_1cce48;
            case 0x1CCE4Cu: goto label_1cce4c;
            case 0x1CCE50u: goto label_1cce50;
            case 0x1CCE54u: goto label_1cce54;
            case 0x1CCE58u: goto label_1cce58;
            case 0x1CCE5Cu: goto label_1cce5c;
            case 0x1CCE60u: goto label_1cce60;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE6Cu: goto label_1cce6c;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE74u: goto label_1cce74;
            case 0x1CCE78u: goto label_1cce78;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCE84u: goto label_1cce84;
            case 0x1CCE88u: goto label_1cce88;
            case 0x1CCE8Cu: goto label_1cce8c;
            case 0x1CCE90u: goto label_1cce90;
            case 0x1CCE94u: goto label_1cce94;
            case 0x1CCE98u: goto label_1cce98;
            case 0x1CCE9Cu: goto label_1cce9c;
            case 0x1CCEA0u: goto label_1ccea0;
            case 0x1CCEA4u: goto label_1ccea4;
            case 0x1CCEA8u: goto label_1ccea8;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEB4u: goto label_1cceb4;
            case 0x1CCEB8u: goto label_1cceb8;
            case 0x1CCEBCu: goto label_1ccebc;
            case 0x1CCEC0u: goto label_1ccec0;
            case 0x1CCEC4u: goto label_1ccec4;
            case 0x1CCEC8u: goto label_1ccec8;
            case 0x1CCECCu: goto label_1ccecc;
            case 0x1CCED0u: goto label_1cced0;
            case 0x1CCED4u: goto label_1cced4;
            case 0x1CCED8u: goto label_1cced8;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCEE4u: goto label_1ccee4;
            case 0x1CCEE8u: goto label_1ccee8;
            case 0x1CCEECu: goto label_1cceec;
            case 0x1CCEF0u: goto label_1ccef0;
            case 0x1CCEF4u: goto label_1ccef4;
            case 0x1CCEF8u: goto label_1ccef8;
            case 0x1CCEFCu: goto label_1ccefc;
            case 0x1CCF00u: goto label_1ccf00;
            case 0x1CCF04u: goto label_1ccf04;
            case 0x1CCF08u: goto label_1ccf08;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF10u: goto label_1ccf10;
            case 0x1CCF14u: goto label_1ccf14;
            case 0x1CCF18u: goto label_1ccf18;
            case 0x1CCF1Cu: goto label_1ccf1c;
            case 0x1CCF20u: goto label_1ccf20;
            case 0x1CCF24u: goto label_1ccf24;
            case 0x1CCF28u: goto label_1ccf28;
            case 0x1CCF2Cu: goto label_1ccf2c;
            case 0x1CCF30u: goto label_1ccf30;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF38u: goto label_1ccf38;
            case 0x1CCF3Cu: goto label_1ccf3c;
            case 0x1CCF40u: goto label_1ccf40;
            case 0x1CCF44u: goto label_1ccf44;
            case 0x1CCF48u: goto label_1ccf48;
            case 0x1CCF4Cu: goto label_1ccf4c;
            case 0x1CCF50u: goto label_1ccf50;
            case 0x1CCF54u: goto label_1ccf54;
            case 0x1CCF58u: goto label_1ccf58;
            case 0x1CCF5Cu: goto label_1ccf5c;
            case 0x1CCF60u: goto label_1ccf60;
            case 0x1CCF64u: goto label_1ccf64;
            case 0x1CCF68u: goto label_1ccf68;
            case 0x1CCF6Cu: goto label_1ccf6c;
            case 0x1CCF70u: goto label_1ccf70;
            case 0x1CCF74u: goto label_1ccf74;
            case 0x1CCF78u: goto label_1ccf78;
            case 0x1CCF7Cu: goto label_1ccf7c;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF84u: goto label_1ccf84;
            case 0x1CCF88u: goto label_1ccf88;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCF90u: goto label_1ccf90;
            case 0x1CCF94u: goto label_1ccf94;
            case 0x1CCF98u: goto label_1ccf98;
            case 0x1CCF9Cu: goto label_1ccf9c;
            case 0x1CCFA0u: goto label_1ccfa0;
            case 0x1CCFA4u: goto label_1ccfa4;
            case 0x1CCFA8u: goto label_1ccfa8;
            case 0x1CCFACu: goto label_1ccfac;
            case 0x1CCFB0u: goto label_1ccfb0;
            case 0x1CCFB4u: goto label_1ccfb4;
            case 0x1CCFB8u: goto label_1ccfb8;
            case 0x1CCFBCu: goto label_1ccfbc;
            case 0x1CCFC0u: goto label_1ccfc0;
            case 0x1CCFC4u: goto label_1ccfc4;
            case 0x1CCFC8u: goto label_1ccfc8;
            case 0x1CCFCCu: goto label_1ccfcc;
            case 0x1CCFD0u: goto label_1ccfd0;
            case 0x1CCFD4u: goto label_1ccfd4;
            case 0x1CCFD8u: goto label_1ccfd8;
            case 0x1CCFDCu: goto label_1ccfdc;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CCFE4u: goto label_1ccfe4;
            case 0x1CCFE8u: goto label_1ccfe8;
            case 0x1CCFECu: goto label_1ccfec;
            case 0x1CCFF0u: goto label_1ccff0;
            case 0x1CCFF4u: goto label_1ccff4;
            case 0x1CCFF8u: goto label_1ccff8;
            case 0x1CCFFCu: goto label_1ccffc;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            case 0x1CD008u: goto label_1cd008;
            case 0x1CD00Cu: goto label_1cd00c;
            case 0x1CD010u: goto label_1cd010;
            case 0x1CD014u: goto label_1cd014;
            case 0x1CD018u: goto label_1cd018;
            case 0x1CD01Cu: goto label_1cd01c;
            case 0x1CD020u: goto label_1cd020;
            case 0x1CD024u: goto label_1cd024;
            case 0x1CD028u: goto label_1cd028;
            case 0x1CD02Cu: goto label_1cd02c;
            case 0x1CD030u: goto label_1cd030;
            case 0x1CD034u: goto label_1cd034;
            case 0x1CD038u: goto label_1cd038;
            case 0x1CD03Cu: goto label_1cd03c;
            case 0x1CD040u: goto label_1cd040;
            case 0x1CD044u: goto label_1cd044;
            case 0x1CD048u: goto label_1cd048;
            case 0x1CD04Cu: goto label_1cd04c;
            case 0x1CD050u: goto label_1cd050;
            case 0x1CD054u: goto label_1cd054;
            case 0x1CD058u: goto label_1cd058;
            case 0x1CD05Cu: goto label_1cd05c;
            case 0x1CD060u: goto label_1cd060;
            case 0x1CD064u: goto label_1cd064;
            case 0x1CD068u: goto label_1cd068;
            case 0x1CD06Cu: goto label_1cd06c;
            case 0x1CD070u: goto label_1cd070;
            case 0x1CD074u: goto label_1cd074;
            case 0x1CD078u: goto label_1cd078;
            case 0x1CD07Cu: goto label_1cd07c;
            case 0x1CD080u: goto label_1cd080;
            case 0x1CD084u: goto label_1cd084;
            case 0x1CD088u: goto label_1cd088;
            case 0x1CD08Cu: goto label_1cd08c;
            case 0x1CD090u: goto label_1cd090;
            case 0x1CD094u: goto label_1cd094;
            case 0x1CD098u: goto label_1cd098;
            case 0x1CD09Cu: goto label_1cd09c;
            case 0x1CD0A0u: goto label_1cd0a0;
            case 0x1CD0A4u: goto label_1cd0a4;
            case 0x1CD0A8u: goto label_1cd0a8;
            case 0x1CD0ACu: goto label_1cd0ac;
            case 0x1CD0B0u: goto label_1cd0b0;
            case 0x1CD0B4u: goto label_1cd0b4;
            case 0x1CD0B8u: goto label_1cd0b8;
            case 0x1CD0BCu: goto label_1cd0bc;
            case 0x1CD0C0u: goto label_1cd0c0;
            case 0x1CD0C4u: goto label_1cd0c4;
            case 0x1CD0C8u: goto label_1cd0c8;
            case 0x1CD0CCu: goto label_1cd0cc;
            case 0x1CD0D0u: goto label_1cd0d0;
            case 0x1CD0D4u: goto label_1cd0d4;
            case 0x1CD0D8u: goto label_1cd0d8;
            case 0x1CD0DCu: goto label_1cd0dc;
            case 0x1CD0E0u: goto label_1cd0e0;
            case 0x1CD0E4u: goto label_1cd0e4;
            case 0x1CD0E8u: goto label_1cd0e8;
            case 0x1CD0ECu: goto label_1cd0ec;
            case 0x1CD0F0u: goto label_1cd0f0;
            case 0x1CD0F4u: goto label_1cd0f4;
            case 0x1CD0F8u: goto label_1cd0f8;
            case 0x1CD0FCu: goto label_1cd0fc;
            case 0x1CD100u: goto label_1cd100;
            case 0x1CD104u: goto label_1cd104;
            case 0x1CD108u: goto label_1cd108;
            case 0x1CD10Cu: goto label_1cd10c;
            case 0x1CD110u: goto label_1cd110;
            case 0x1CD114u: goto label_1cd114;
            case 0x1CD118u: goto label_1cd118;
            case 0x1CD11Cu: goto label_1cd11c;
            case 0x1CD120u: goto label_1cd120;
            case 0x1CD124u: goto label_1cd124;
            case 0x1CD128u: goto label_1cd128;
            case 0x1CD12Cu: goto label_1cd12c;
            case 0x1CD130u: goto label_1cd130;
            case 0x1CD134u: goto label_1cd134;
            case 0x1CD138u: goto label_1cd138;
            case 0x1CD13Cu: goto label_1cd13c;
            case 0x1CD140u: goto label_1cd140;
            case 0x1CD144u: goto label_1cd144;
            case 0x1CD148u: goto label_1cd148;
            case 0x1CD14Cu: goto label_1cd14c;
            case 0x1CD150u: goto label_1cd150;
            case 0x1CD154u: goto label_1cd154;
            case 0x1CD158u: goto label_1cd158;
            case 0x1CD15Cu: goto label_1cd15c;
            case 0x1CD160u: goto label_1cd160;
            case 0x1CD164u: goto label_1cd164;
            case 0x1CD168u: goto label_1cd168;
            case 0x1CD16Cu: goto label_1cd16c;
            case 0x1CD170u: goto label_1cd170;
            case 0x1CD174u: goto label_1cd174;
            case 0x1CD178u: goto label_1cd178;
            case 0x1CD17Cu: goto label_1cd17c;
            case 0x1CD180u: goto label_1cd180;
            case 0x1CD184u: goto label_1cd184;
            case 0x1CD188u: goto label_1cd188;
            case 0x1CD18Cu: goto label_1cd18c;
            case 0x1CD190u: goto label_1cd190;
            case 0x1CD194u: goto label_1cd194;
            case 0x1CD198u: goto label_1cd198;
            case 0x1CD19Cu: goto label_1cd19c;
            case 0x1CD1A0u: goto label_1cd1a0;
            case 0x1CD1A4u: goto label_1cd1a4;
            case 0x1CD1A8u: goto label_1cd1a8;
            case 0x1CD1ACu: goto label_1cd1ac;
            case 0x1CD1B0u: goto label_1cd1b0;
            case 0x1CD1B4u: goto label_1cd1b4;
            case 0x1CD1B8u: goto label_1cd1b8;
            case 0x1CD1BCu: goto label_1cd1bc;
            case 0x1CD1C0u: goto label_1cd1c0;
            case 0x1CD1C4u: goto label_1cd1c4;
            case 0x1CD1C8u: goto label_1cd1c8;
            case 0x1CD1CCu: goto label_1cd1cc;
            case 0x1CD1D0u: goto label_1cd1d0;
            case 0x1CD1D4u: goto label_1cd1d4;
            case 0x1CD1D8u: goto label_1cd1d8;
            case 0x1CD1DCu: goto label_1cd1dc;
            case 0x1CD1E0u: goto label_1cd1e0;
            case 0x1CD1E4u: goto label_1cd1e4;
            case 0x1CD1E8u: goto label_1cd1e8;
            case 0x1CD1ECu: goto label_1cd1ec;
            case 0x1CD1F0u: goto label_1cd1f0;
            case 0x1CD1F4u: goto label_1cd1f4;
            case 0x1CD1F8u: goto label_1cd1f8;
            case 0x1CD1FCu: goto label_1cd1fc;
            case 0x1CD200u: goto label_1cd200;
            case 0x1CD204u: goto label_1cd204;
            case 0x1CD208u: goto label_1cd208;
            case 0x1CD20Cu: goto label_1cd20c;
            case 0x1CD210u: goto label_1cd210;
            case 0x1CD214u: goto label_1cd214;
            case 0x1CD218u: goto label_1cd218;
            case 0x1CD21Cu: goto label_1cd21c;
            case 0x1CD220u: goto label_1cd220;
            case 0x1CD224u: goto label_1cd224;
            case 0x1CD228u: goto label_1cd228;
            case 0x1CD22Cu: goto label_1cd22c;
            case 0x1CD230u: goto label_1cd230;
            case 0x1CD234u: goto label_1cd234;
            case 0x1CD238u: goto label_1cd238;
            case 0x1CD23Cu: goto label_1cd23c;
            case 0x1CD240u: goto label_1cd240;
            case 0x1CD244u: goto label_1cd244;
            case 0x1CD248u: goto label_1cd248;
            case 0x1CD24Cu: goto label_1cd24c;
            case 0x1CD250u: goto label_1cd250;
            case 0x1CD254u: goto label_1cd254;
            case 0x1CD258u: goto label_1cd258;
            case 0x1CD25Cu: goto label_1cd25c;
            case 0x1CD260u: goto label_1cd260;
            case 0x1CD264u: goto label_1cd264;
            case 0x1CD268u: goto label_1cd268;
            case 0x1CD26Cu: goto label_1cd26c;
            case 0x1CD270u: goto label_1cd270;
            case 0x1CD274u: goto label_1cd274;
            case 0x1CD278u: goto label_1cd278;
            case 0x1CD27Cu: goto label_1cd27c;
            case 0x1CD280u: goto label_1cd280;
            case 0x1CD284u: goto label_1cd284;
            case 0x1CD288u: goto label_1cd288;
            case 0x1CD28Cu: goto label_1cd28c;
            case 0x1CD290u: goto label_1cd290;
            case 0x1CD294u: goto label_1cd294;
            case 0x1CD298u: goto label_1cd298;
            case 0x1CD29Cu: goto label_1cd29c;
            case 0x1CD2A0u: goto label_1cd2a0;
            case 0x1CD2A4u: goto label_1cd2a4;
            case 0x1CD2A8u: goto label_1cd2a8;
            case 0x1CD2ACu: goto label_1cd2ac;
            case 0x1CD2B0u: goto label_1cd2b0;
            case 0x1CD2B4u: goto label_1cd2b4;
            case 0x1CD2B8u: goto label_1cd2b8;
            case 0x1CD2BCu: goto label_1cd2bc;
            case 0x1CD2C0u: goto label_1cd2c0;
            case 0x1CD2C4u: goto label_1cd2c4;
            case 0x1CD2C8u: goto label_1cd2c8;
            case 0x1CD2CCu: goto label_1cd2cc;
            case 0x1CD2D0u: goto label_1cd2d0;
            case 0x1CD2D4u: goto label_1cd2d4;
            case 0x1CD2D8u: goto label_1cd2d8;
            case 0x1CD2DCu: goto label_1cd2dc;
            case 0x1CD2E0u: goto label_1cd2e0;
            case 0x1CD2E4u: goto label_1cd2e4;
            case 0x1CD2E8u: goto label_1cd2e8;
            case 0x1CD2ECu: goto label_1cd2ec;
            case 0x1CD2F0u: goto label_1cd2f0;
            case 0x1CD2F4u: goto label_1cd2f4;
            case 0x1CD2F8u: goto label_1cd2f8;
            case 0x1CD2FCu: goto label_1cd2fc;
            case 0x1CD300u: goto label_1cd300;
            case 0x1CD304u: goto label_1cd304;
            case 0x1CD308u: goto label_1cd308;
            case 0x1CD30Cu: goto label_1cd30c;
            case 0x1CD310u: goto label_1cd310;
            case 0x1CD314u: goto label_1cd314;
            case 0x1CD318u: goto label_1cd318;
            case 0x1CD31Cu: goto label_1cd31c;
            case 0x1CD320u: goto label_1cd320;
            case 0x1CD324u: goto label_1cd324;
            case 0x1CD328u: goto label_1cd328;
            case 0x1CD32Cu: goto label_1cd32c;
            case 0x1CD330u: goto label_1cd330;
            case 0x1CD334u: goto label_1cd334;
            case 0x1CD338u: goto label_1cd338;
            case 0x1CD33Cu: goto label_1cd33c;
            case 0x1CD340u: goto label_1cd340;
            case 0x1CD344u: goto label_1cd344;
            case 0x1CD348u: goto label_1cd348;
            case 0x1CD34Cu: goto label_1cd34c;
            case 0x1CD350u: goto label_1cd350;
            case 0x1CD354u: goto label_1cd354;
            case 0x1CD358u: goto label_1cd358;
            case 0x1CD35Cu: goto label_1cd35c;
            case 0x1CD360u: goto label_1cd360;
            case 0x1CD364u: goto label_1cd364;
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD36Cu: goto label_1cd36c;
            case 0x1CD370u: goto label_1cd370;
            case 0x1CD374u: goto label_1cd374;
            case 0x1CD378u: goto label_1cd378;
            case 0x1CD37Cu: goto label_1cd37c;
            case 0x1CD380u: goto label_1cd380;
            case 0x1CD384u: goto label_1cd384;
            case 0x1CD388u: goto label_1cd388;
            case 0x1CD38Cu: goto label_1cd38c;
            case 0x1CD390u: goto label_1cd390;
            case 0x1CD394u: goto label_1cd394;
            case 0x1CD398u: goto label_1cd398;
            case 0x1CD39Cu: goto label_1cd39c;
            case 0x1CD3A0u: goto label_1cd3a0;
            case 0x1CD3A4u: goto label_1cd3a4;
            case 0x1CD3A8u: goto label_1cd3a8;
            case 0x1CD3ACu: goto label_1cd3ac;
            case 0x1CD3B0u: goto label_1cd3b0;
            case 0x1CD3B4u: goto label_1cd3b4;
            case 0x1CD3B8u: goto label_1cd3b8;
            case 0x1CD3BCu: goto label_1cd3bc;
            case 0x1CD3C0u: goto label_1cd3c0;
            case 0x1CD3C4u: goto label_1cd3c4;
            case 0x1CD3C8u: goto label_1cd3c8;
            case 0x1CD3CCu: goto label_1cd3cc;
            case 0x1CD3D0u: goto label_1cd3d0;
            case 0x1CD3D4u: goto label_1cd3d4;
            case 0x1CD3D8u: goto label_1cd3d8;
            case 0x1CD3DCu: goto label_1cd3dc;
            case 0x1CD3E0u: goto label_1cd3e0;
            case 0x1CD3E4u: goto label_1cd3e4;
            case 0x1CD3E8u: goto label_1cd3e8;
            case 0x1CD3ECu: goto label_1cd3ec;
            case 0x1CD3F0u: goto label_1cd3f0;
            case 0x1CD3F4u: goto label_1cd3f4;
            case 0x1CD3F8u: goto label_1cd3f8;
            case 0x1CD3FCu: goto label_1cd3fc;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD404u: goto label_1cd404;
            case 0x1CD408u: goto label_1cd408;
            case 0x1CD40Cu: goto label_1cd40c;
            case 0x1CD410u: goto label_1cd410;
            case 0x1CD414u: goto label_1cd414;
            case 0x1CD418u: goto label_1cd418;
            case 0x1CD41Cu: goto label_1cd41c;
            case 0x1CD420u: goto label_1cd420;
            case 0x1CD424u: goto label_1cd424;
            case 0x1CD428u: goto label_1cd428;
            case 0x1CD42Cu: goto label_1cd42c;
            case 0x1CD430u: goto label_1cd430;
            case 0x1CD434u: goto label_1cd434;
            case 0x1CD438u: goto label_1cd438;
            case 0x1CD43Cu: goto label_1cd43c;
            case 0x1CD440u: goto label_1cd440;
            case 0x1CD444u: goto label_1cd444;
            case 0x1CD448u: goto label_1cd448;
            case 0x1CD44Cu: goto label_1cd44c;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD458u: goto label_1cd458;
            case 0x1CD45Cu: goto label_1cd45c;
            case 0x1CD460u: goto label_1cd460;
            case 0x1CD464u: goto label_1cd464;
            case 0x1CD468u: goto label_1cd468;
            case 0x1CD46Cu: goto label_1cd46c;
            case 0x1CD470u: goto label_1cd470;
            case 0x1CD474u: goto label_1cd474;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD47Cu: goto label_1cd47c;
            case 0x1CD480u: goto label_1cd480;
            case 0x1CD484u: goto label_1cd484;
            case 0x1CD488u: goto label_1cd488;
            case 0x1CD48Cu: goto label_1cd48c;
            case 0x1CD490u: goto label_1cd490;
            case 0x1CD494u: goto label_1cd494;
            case 0x1CD498u: goto label_1cd498;
            case 0x1CD49Cu: goto label_1cd49c;
            case 0x1CD4A0u: goto label_1cd4a0;
            case 0x1CD4A4u: goto label_1cd4a4;
            case 0x1CD4A8u: goto label_1cd4a8;
            case 0x1CD4ACu: goto label_1cd4ac;
            case 0x1CD4B0u: goto label_1cd4b0;
            case 0x1CD4B4u: goto label_1cd4b4;
            case 0x1CD4B8u: goto label_1cd4b8;
            case 0x1CD4BCu: goto label_1cd4bc;
            case 0x1CD4C0u: goto label_1cd4c0;
            case 0x1CD4C4u: goto label_1cd4c4;
            case 0x1CD4C8u: goto label_1cd4c8;
            case 0x1CD4CCu: goto label_1cd4cc;
            case 0x1CD4D0u: goto label_1cd4d0;
            case 0x1CD4D4u: goto label_1cd4d4;
            case 0x1CD4D8u: goto label_1cd4d8;
            case 0x1CD4DCu: goto label_1cd4dc;
            case 0x1CD4E0u: goto label_1cd4e0;
            case 0x1CD4E4u: goto label_1cd4e4;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD4ECu: goto label_1cd4ec;
            case 0x1CD4F0u: goto label_1cd4f0;
            case 0x1CD4F4u: goto label_1cd4f4;
            case 0x1CD4F8u: goto label_1cd4f8;
            case 0x1CD4FCu: goto label_1cd4fc;
            case 0x1CD500u: goto label_1cd500;
            case 0x1CD504u: goto label_1cd504;
            case 0x1CD508u: goto label_1cd508;
            case 0x1CD50Cu: goto label_1cd50c;
            case 0x1CD510u: goto label_1cd510;
            case 0x1CD514u: goto label_1cd514;
            case 0x1CD518u: goto label_1cd518;
            case 0x1CD51Cu: goto label_1cd51c;
            case 0x1CD520u: goto label_1cd520;
            case 0x1CD524u: goto label_1cd524;
            case 0x1CD528u: goto label_1cd528;
            case 0x1CD52Cu: goto label_1cd52c;
            case 0x1CD530u: goto label_1cd530;
            case 0x1CD534u: goto label_1cd534;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD53Cu: goto label_1cd53c;
            case 0x1CD540u: goto label_1cd540;
            case 0x1CD544u: goto label_1cd544;
            case 0x1CD548u: goto label_1cd548;
            case 0x1CD54Cu: goto label_1cd54c;
            case 0x1CD550u: goto label_1cd550;
            case 0x1CD554u: goto label_1cd554;
            case 0x1CD558u: goto label_1cd558;
            case 0x1CD55Cu: goto label_1cd55c;
            case 0x1CD560u: goto label_1cd560;
            case 0x1CD564u: goto label_1cd564;
            case 0x1CD568u: goto label_1cd568;
            case 0x1CD56Cu: goto label_1cd56c;
            case 0x1CD570u: goto label_1cd570;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD578u: goto label_1cd578;
            case 0x1CD57Cu: goto label_1cd57c;
            case 0x1CD580u: goto label_1cd580;
            case 0x1CD584u: goto label_1cd584;
            case 0x1CD588u: goto label_1cd588;
            case 0x1CD58Cu: goto label_1cd58c;
            case 0x1CD590u: goto label_1cd590;
            case 0x1CD594u: goto label_1cd594;
            case 0x1CD598u: goto label_1cd598;
            case 0x1CD59Cu: goto label_1cd59c;
            case 0x1CD5A0u: goto label_1cd5a0;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5ACu: goto label_1cd5ac;
            case 0x1CD5B0u: goto label_1cd5b0;
            case 0x1CD5B4u: goto label_1cd5b4;
            case 0x1CD5B8u: goto label_1cd5b8;
            case 0x1CD5BCu: goto label_1cd5bc;
            case 0x1CD5C0u: goto label_1cd5c0;
            case 0x1CD5C4u: goto label_1cd5c4;
            case 0x1CD5C8u: goto label_1cd5c8;
            case 0x1CD5CCu: goto label_1cd5cc;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5D8u: goto label_1cd5d8;
            case 0x1CD5DCu: goto label_1cd5dc;
            case 0x1CD5E0u: goto label_1cd5e0;
            case 0x1CD5E4u: goto label_1cd5e4;
            case 0x1CD5E8u: goto label_1cd5e8;
            case 0x1CD5ECu: goto label_1cd5ec;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD5F4u: goto label_1cd5f4;
            case 0x1CD5F8u: goto label_1cd5f8;
            case 0x1CD5FCu: goto label_1cd5fc;
            case 0x1CD600u: goto label_1cd600;
            case 0x1CD604u: goto label_1cd604;
            case 0x1CD608u: goto label_1cd608;
            case 0x1CD60Cu: goto label_1cd60c;
            case 0x1CD610u: goto label_1cd610;
            case 0x1CD614u: goto label_1cd614;
            case 0x1CD618u: goto label_1cd618;
            case 0x1CD61Cu: goto label_1cd61c;
            case 0x1CD620u: goto label_1cd620;
            case 0x1CD624u: goto label_1cd624;
            case 0x1CD628u: goto label_1cd628;
            case 0x1CD62Cu: goto label_1cd62c;
            case 0x1CD630u: goto label_1cd630;
            case 0x1CD634u: goto label_1cd634;
            case 0x1CD638u: goto label_1cd638;
            case 0x1CD63Cu: goto label_1cd63c;
            case 0x1CD640u: goto label_1cd640;
            case 0x1CD644u: goto label_1cd644;
            case 0x1CD648u: goto label_1cd648;
            case 0x1CD64Cu: goto label_1cd64c;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            case 0x1CD65Cu: goto label_1cd65c;
            case 0x1CD660u: goto label_1cd660;
            case 0x1CD664u: goto label_1cd664;
            case 0x1CD668u: goto label_1cd668;
            case 0x1CD66Cu: goto label_1cd66c;
            case 0x1CD670u: goto label_1cd670;
            case 0x1CD674u: goto label_1cd674;
            case 0x1CD678u: goto label_1cd678;
            case 0x1CD67Cu: goto label_1cd67c;
            case 0x1CD680u: goto label_1cd680;
            case 0x1CD684u: goto label_1cd684;
            case 0x1CD688u: goto label_1cd688;
            case 0x1CD68Cu: goto label_1cd68c;
            case 0x1CD690u: goto label_1cd690;
            case 0x1CD694u: goto label_1cd694;
            case 0x1CD698u: goto label_1cd698;
            case 0x1CD69Cu: goto label_1cd69c;
            case 0x1CD6A0u: goto label_1cd6a0;
            case 0x1CD6A4u: goto label_1cd6a4;
            case 0x1CD6A8u: goto label_1cd6a8;
            case 0x1CD6ACu: goto label_1cd6ac;
            case 0x1CD6B0u: goto label_1cd6b0;
            case 0x1CD6B4u: goto label_1cd6b4;
            case 0x1CD6B8u: goto label_1cd6b8;
            case 0x1CD6BCu: goto label_1cd6bc;
            case 0x1CD6C0u: goto label_1cd6c0;
            case 0x1CD6C4u: goto label_1cd6c4;
            case 0x1CD6C8u: goto label_1cd6c8;
            case 0x1CD6CCu: goto label_1cd6cc;
            case 0x1CD6D0u: goto label_1cd6d0;
            case 0x1CD6D4u: goto label_1cd6d4;
            case 0x1CD6D8u: goto label_1cd6d8;
            case 0x1CD6DCu: goto label_1cd6dc;
            case 0x1CD6E0u: goto label_1cd6e0;
            case 0x1CD6E4u: goto label_1cd6e4;
            case 0x1CD6E8u: goto label_1cd6e8;
            case 0x1CD6ECu: goto label_1cd6ec;
            case 0x1CD6F0u: goto label_1cd6f0;
            case 0x1CD6F4u: goto label_1cd6f4;
            case 0x1CD6F8u: goto label_1cd6f8;
            case 0x1CD6FCu: goto label_1cd6fc;
            case 0x1CD700u: goto label_1cd700;
            case 0x1CD704u: goto label_1cd704;
            case 0x1CD708u: goto label_1cd708;
            case 0x1CD70Cu: goto label_1cd70c;
            case 0x1CD710u: goto label_1cd710;
            case 0x1CD714u: goto label_1cd714;
            case 0x1CD718u: goto label_1cd718;
            case 0x1CD71Cu: goto label_1cd71c;
            case 0x1CD720u: goto label_1cd720;
            case 0x1CD724u: goto label_1cd724;
            case 0x1CD728u: goto label_1cd728;
            case 0x1CD72Cu: goto label_1cd72c;
            case 0x1CD730u: goto label_1cd730;
            case 0x1CD734u: goto label_1cd734;
            case 0x1CD738u: goto label_1cd738;
            case 0x1CD73Cu: goto label_1cd73c;
            case 0x1CD740u: goto label_1cd740;
            case 0x1CD744u: goto label_1cd744;
            case 0x1CD748u: goto label_1cd748;
            case 0x1CD74Cu: goto label_1cd74c;
            case 0x1CD750u: goto label_1cd750;
            case 0x1CD754u: goto label_1cd754;
            case 0x1CD758u: goto label_1cd758;
            case 0x1CD75Cu: goto label_1cd75c;
            case 0x1CD760u: goto label_1cd760;
            case 0x1CD764u: goto label_1cd764;
            case 0x1CD768u: goto label_1cd768;
            case 0x1CD76Cu: goto label_1cd76c;
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD774u: goto label_1cd774;
            case 0x1CD778u: goto label_1cd778;
            case 0x1CD77Cu: goto label_1cd77c;
            case 0x1CD780u: goto label_1cd780;
            case 0x1CD784u: goto label_1cd784;
            case 0x1CD788u: goto label_1cd788;
            case 0x1CD78Cu: goto label_1cd78c;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD794u: goto label_1cd794;
            case 0x1CD798u: goto label_1cd798;
            case 0x1CD79Cu: goto label_1cd79c;
            case 0x1CD7A0u: goto label_1cd7a0;
            case 0x1CD7A4u: goto label_1cd7a4;
            case 0x1CD7A8u: goto label_1cd7a8;
            case 0x1CD7ACu: goto label_1cd7ac;
            case 0x1CD7B0u: goto label_1cd7b0;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7B8u: goto label_1cd7b8;
            case 0x1CD7BCu: goto label_1cd7bc;
            case 0x1CD7C0u: goto label_1cd7c0;
            case 0x1CD7C4u: goto label_1cd7c4;
            case 0x1CD7C8u: goto label_1cd7c8;
            case 0x1CD7CCu: goto label_1cd7cc;
            case 0x1CD7D0u: goto label_1cd7d0;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD7D8u: goto label_1cd7d8;
            case 0x1CD7DCu: goto label_1cd7dc;
            case 0x1CD7E0u: goto label_1cd7e0;
            case 0x1CD7E4u: goto label_1cd7e4;
            case 0x1CD7E8u: goto label_1cd7e8;
            case 0x1CD7ECu: goto label_1cd7ec;
            case 0x1CD7F0u: goto label_1cd7f0;
            case 0x1CD7F4u: goto label_1cd7f4;
            case 0x1CD7F8u: goto label_1cd7f8;
            case 0x1CD7FCu: goto label_1cd7fc;
            case 0x1CD800u: goto label_1cd800;
            case 0x1CD804u: goto label_1cd804;
            case 0x1CD808u: goto label_1cd808;
            case 0x1CD80Cu: goto label_1cd80c;
            case 0x1CD810u: goto label_1cd810;
            case 0x1CD814u: goto label_1cd814;
            case 0x1CD818u: goto label_1cd818;
            case 0x1CD81Cu: goto label_1cd81c;
            case 0x1CD820u: goto label_1cd820;
            case 0x1CD824u: goto label_1cd824;
            case 0x1CD828u: goto label_1cd828;
            case 0x1CD82Cu: goto label_1cd82c;
            case 0x1CD830u: goto label_1cd830;
            case 0x1CD834u: goto label_1cd834;
            case 0x1CD838u: goto label_1cd838;
            case 0x1CD83Cu: goto label_1cd83c;
            case 0x1CD840u: goto label_1cd840;
            case 0x1CD844u: goto label_1cd844;
            case 0x1CD848u: goto label_1cd848;
            case 0x1CD84Cu: goto label_1cd84c;
            case 0x1CD850u: goto label_1cd850;
            case 0x1CD854u: goto label_1cd854;
            case 0x1CD858u: goto label_1cd858;
            case 0x1CD85Cu: goto label_1cd85c;
            case 0x1CD860u: goto label_1cd860;
            case 0x1CD864u: goto label_1cd864;
            case 0x1CD868u: goto label_1cd868;
            case 0x1CD86Cu: goto label_1cd86c;
            case 0x1CD870u: goto label_1cd870;
            case 0x1CD874u: goto label_1cd874;
            case 0x1CD878u: goto label_1cd878;
            case 0x1CD87Cu: goto label_1cd87c;
            case 0x1CD880u: goto label_1cd880;
            case 0x1CD884u: goto label_1cd884;
            case 0x1CD888u: goto label_1cd888;
            case 0x1CD88Cu: goto label_1cd88c;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD894u: goto label_1cd894;
            case 0x1CD898u: goto label_1cd898;
            case 0x1CD89Cu: goto label_1cd89c;
            case 0x1CD8A0u: goto label_1cd8a0;
            case 0x1CD8A4u: goto label_1cd8a4;
            case 0x1CD8A8u: goto label_1cd8a8;
            case 0x1CD8ACu: goto label_1cd8ac;
            case 0x1CD8B0u: goto label_1cd8b0;
            case 0x1CD8B4u: goto label_1cd8b4;
            case 0x1CD8B8u: goto label_1cd8b8;
            case 0x1CD8BCu: goto label_1cd8bc;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8C8u: goto label_1cd8c8;
            case 0x1CD8CCu: goto label_1cd8cc;
            case 0x1CD8D0u: goto label_1cd8d0;
            case 0x1CD8D4u: goto label_1cd8d4;
            case 0x1CD8D8u: goto label_1cd8d8;
            case 0x1CD8DCu: goto label_1cd8dc;
            case 0x1CD8E0u: goto label_1cd8e0;
            case 0x1CD8E4u: goto label_1cd8e4;
            case 0x1CD8E8u: goto label_1cd8e8;
            case 0x1CD8ECu: goto label_1cd8ec;
            case 0x1CD8F0u: goto label_1cd8f0;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD8F8u: goto label_1cd8f8;
            case 0x1CD8FCu: goto label_1cd8fc;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD904u: goto label_1cd904;
            case 0x1CD908u: goto label_1cd908;
            case 0x1CD90Cu: goto label_1cd90c;
            case 0x1CD910u: goto label_1cd910;
            case 0x1CD914u: goto label_1cd914;
            case 0x1CD918u: goto label_1cd918;
            case 0x1CD91Cu: goto label_1cd91c;
            case 0x1CD920u: goto label_1cd920;
            case 0x1CD924u: goto label_1cd924;
            case 0x1CD928u: goto label_1cd928;
            case 0x1CD92Cu: goto label_1cd92c;
            case 0x1CD930u: goto label_1cd930;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD938u: goto label_1cd938;
            case 0x1CD93Cu: goto label_1cd93c;
            case 0x1CD940u: goto label_1cd940;
            case 0x1CD944u: goto label_1cd944;
            case 0x1CD948u: goto label_1cd948;
            case 0x1CD94Cu: goto label_1cd94c;
            case 0x1CD950u: goto label_1cd950;
            case 0x1CD954u: goto label_1cd954;
            case 0x1CD958u: goto label_1cd958;
            case 0x1CD95Cu: goto label_1cd95c;
            case 0x1CD960u: goto label_1cd960;
            case 0x1CD964u: goto label_1cd964;
            case 0x1CD968u: goto label_1cd968;
            case 0x1CD96Cu: goto label_1cd96c;
            case 0x1CD970u: goto label_1cd970;
            case 0x1CD974u: goto label_1cd974;
            case 0x1CD978u: goto label_1cd978;
            case 0x1CD97Cu: goto label_1cd97c;
            case 0x1CD980u: goto label_1cd980;
            case 0x1CD984u: goto label_1cd984;
            case 0x1CD988u: goto label_1cd988;
            case 0x1CD98Cu: goto label_1cd98c;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD994u: goto label_1cd994;
            case 0x1CD998u: goto label_1cd998;
            case 0x1CD99Cu: goto label_1cd99c;
            case 0x1CD9A0u: goto label_1cd9a0;
            case 0x1CD9A4u: goto label_1cd9a4;
            case 0x1CD9A8u: goto label_1cd9a8;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9B0u: goto label_1cd9b0;
            case 0x1CD9B4u: goto label_1cd9b4;
            case 0x1CD9B8u: goto label_1cd9b8;
            case 0x1CD9BCu: goto label_1cd9bc;
            case 0x1CD9C0u: goto label_1cd9c0;
            case 0x1CD9C4u: goto label_1cd9c4;
            case 0x1CD9C8u: goto label_1cd9c8;
            case 0x1CD9CCu: goto label_1cd9cc;
            case 0x1CD9D0u: goto label_1cd9d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD464u; }
            if (ctx->pc != 0x1CD464u) { return; }
        }
    }
    ctx->pc = 0x1CD464u;
label_1cd464:
    // 0x1cd464: 0x10000154  b           . + 4 + (0x154 << 2)
label_1cd468:
    if (ctx->pc == 0x1CD468u) {
        ctx->pc = 0x1CD46Cu;
        goto label_1cd46c;
    }
    ctx->pc = 0x1CD464u;
    {
        const bool branch_taken_0x1cd464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd464) {
            ctx->pc = 0x1CD9B8u;
            goto label_1cd9b8;
        }
    }
    ctx->pc = 0x1CD46Cu;
label_1cd46c:
    // 0x1cd46c: 0x0  nop
    ctx->pc = 0x1cd46cu;
    // NOP
label_1cd470:
    // 0x1cd470: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1cd474:
    // 0x1cd474: 0x1c400148  bgtz        $v0, . + 4 + (0x148 << 2)
label_1cd478:
    if (ctx->pc == 0x1CD478u) {
        ctx->pc = 0x1CD47Cu;
        goto label_1cd47c;
    }
    ctx->pc = 0x1CD474u;
    {
        const bool branch_taken_0x1cd474 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1cd474) {
            ctx->pc = 0x1CD998u;
            goto label_1cd998;
        }
    }
    ctx->pc = 0x1CD47Cu;
label_1cd47c:
    // 0x1cd47c: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x1cd47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_1cd480:
    // 0x1cd480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd484:
    // 0x1cd484: 0xae62011c  sw          $v0, 0x11C($s3)
    ctx->pc = 0x1cd484u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
label_1cd488:
    // 0x1cd488: 0x8e620120  lw          $v0, 0x120($s3)
    ctx->pc = 0x1cd488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1cd48c:
    // 0x1cd48c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd490:
    // 0x1cd490: 0xae620120  sw          $v0, 0x120($s3)
    ctx->pc = 0x1cd490u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 2));
label_1cd494:
    // 0x1cd494: 0x8e650120  lw          $a1, 0x120($s3)
    ctx->pc = 0x1cd494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_1cd498:
    // 0x1cd498: 0xc0604b0  jal         func_1812C0
label_1cd49c:
    if (ctx->pc == 0x1CD49Cu) {
        ctx->pc = 0x1CD49Cu;
            // 0x1cd49c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x1CD4A0u;
        goto label_1cd4a0;
    }
    ctx->pc = 0x1CD498u;
    SET_GPR_U32(ctx, 31, 0x1CD4A0u);
    ctx->pc = 0x1CD49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD498u;
            // 0x1cd49c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4A0u; }
        if (ctx->pc != 0x1CD4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4A0u; }
        if (ctx->pc != 0x1CD4A0u) { return; }
    }
    ctx->pc = 0x1CD4A0u;
label_1cd4a0:
    // 0x1cd4a0: 0xc66000d0  lwc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cd4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd4a4:
    // 0x1cd4a4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1cd4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
label_1cd4a8:
    // 0x1cd4a8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1cd4a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
label_1cd4ac:
    // 0x1cd4ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cd4b0:
    // 0x1cd4b0: 0x0  nop
    ctx->pc = 0x1cd4b0u;
    // NOP
label_1cd4b4:
    // 0x1cd4b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd4b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd4b8:
    // 0x1cd4b8: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x1cd4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_1cd4bc:
    // 0x1cd4bc: 0xc66000d4  lwc1        $f0, 0xD4($s3)
    ctx->pc = 0x1cd4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd4c0:
    // 0x1cd4c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1cd4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cd4c4:
    // 0x1cd4c4: 0xc050ba4  jal         func_142E90
label_1cd4c8:
    if (ctx->pc == 0x1CD4C8u) {
        ctx->pc = 0x1CD4C8u;
            // 0x1cd4c8: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->pc = 0x1CD4CCu;
        goto label_1cd4cc;
    }
    ctx->pc = 0x1CD4C4u;
    SET_GPR_U32(ctx, 31, 0x1CD4CCu);
    ctx->pc = 0x1CD4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4C4u;
            // 0x1cd4c8: 0xe66000d4  swc1        $f0, 0xD4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4CCu; }
        if (ctx->pc != 0x1CD4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4CCu; }
        if (ctx->pc != 0x1CD4CCu) { return; }
    }
    ctx->pc = 0x1CD4CCu;
label_1cd4cc:
    // 0x1cd4cc: 0xc040d72  jal         func_1035C8
label_1cd4d0:
    if (ctx->pc == 0x1CD4D0u) {
        ctx->pc = 0x1CD4D0u;
            // 0x1cd4d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1CD4D4u;
        goto label_1cd4d4;
    }
    ctx->pc = 0x1CD4CCu;
    SET_GPR_U32(ctx, 31, 0x1CD4D4u);
    ctx->pc = 0x1CD4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4CCu;
            // 0x1cd4d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4D4u; }
        if (ctx->pc != 0x1CD4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4D4u; }
        if (ctx->pc != 0x1CD4D4u) { return; }
    }
    ctx->pc = 0x1CD4D4u;
label_1cd4d4:
    // 0x1cd4d4: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1cd4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1cd4d8:
    // 0x1cd4d8: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1cd4d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1cd4dc:
    // 0x1cd4dc: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1cd4dcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1cd4e0:
    // 0x1cd4e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cd4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1cd4e4:
    // 0x1cd4e4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd4e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cd4e8:
    // 0x1cd4e8: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1cd4e8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1cd4ec:
    // 0x1cd4ec: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd4ecu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1cd4f0:
    // 0x1cd4f0: 0xc040880  jal         func_102200
label_1cd4f4:
    if (ctx->pc == 0x1CD4F4u) {
        ctx->pc = 0x1CD4F4u;
            // 0x1cd4f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD4F8u;
        goto label_1cd4f8;
    }
    ctx->pc = 0x1CD4F0u;
    SET_GPR_U32(ctx, 31, 0x1CD4F8u);
    ctx->pc = 0x1CD4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4F0u;
            // 0x1cd4f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4F8u; }
        if (ctx->pc != 0x1CD4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4F8u; }
        if (ctx->pc != 0x1CD4F8u) { return; }
    }
    ctx->pc = 0x1CD4F8u;
label_1cd4f8:
    // 0x1cd4f8: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1cd4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1cd4fc:
    // 0x1cd4fc: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1cd4fcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1cd500:
    // 0x1cd500: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1cd500u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1cd504:
    // 0x1cd504: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cd504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1cd508:
    // 0x1cd508: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cd50c:
    // 0x1cd50c: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1cd50cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1cd510:
    // 0x1cd510: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd510u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1cd514:
    // 0x1cd514: 0xc040866  jal         func_102198
label_1cd518:
    if (ctx->pc == 0x1CD518u) {
        ctx->pc = 0x1CD518u;
            // 0x1cd518: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD51Cu;
        goto label_1cd51c;
    }
    ctx->pc = 0x1CD514u;
    SET_GPR_U32(ctx, 31, 0x1CD51Cu);
    ctx->pc = 0x1CD518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD514u;
            // 0x1cd518: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD51Cu; }
        if (ctx->pc != 0x1CD51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD51Cu; }
        if (ctx->pc != 0x1CD51Cu) { return; }
    }
    ctx->pc = 0x1CD51Cu;
label_1cd51c:
    // 0x1cd51c: 0xc040a74  jal         func_1029D0
label_1cd520:
    if (ctx->pc == 0x1CD520u) {
        ctx->pc = 0x1CD520u;
            // 0x1cd520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD524u;
        goto label_1cd524;
    }
    ctx->pc = 0x1CD51Cu;
    SET_GPR_U32(ctx, 31, 0x1CD524u);
    ctx->pc = 0x1CD520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD51Cu;
            // 0x1cd520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD524u; }
        if (ctx->pc != 0x1CD524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD524u; }
        if (ctx->pc != 0x1CD524u) { return; }
    }
    ctx->pc = 0x1CD524u;
label_1cd524:
    // 0x1cd524: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x1cd524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd528:
    // 0x1cd528: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cd528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cd52c:
    // 0x1cd52c: 0xc050ba4  jal         func_142E90
label_1cd530:
    if (ctx->pc == 0x1CD530u) {
        ctx->pc = 0x1CD530u;
            // 0x1cd530: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->pc = 0x1CD534u;
        goto label_1cd534;
    }
    ctx->pc = 0x1CD52Cu;
    SET_GPR_U32(ctx, 31, 0x1CD534u);
    ctx->pc = 0x1CD530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD52Cu;
            // 0x1cd530: 0xe66000e4  swc1        $f0, 0xE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD534u; }
        if (ctx->pc != 0x1CD534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD534u; }
        if (ctx->pc != 0x1CD534u) { return; }
    }
    ctx->pc = 0x1CD534u;
label_1cd534:
    // 0x1cd534: 0xc040d72  jal         func_1035C8
label_1cd538:
    if (ctx->pc == 0x1CD538u) {
        ctx->pc = 0x1CD538u;
            // 0x1cd538: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x1CD53Cu;
        goto label_1cd53c;
    }
    ctx->pc = 0x1CD534u;
    SET_GPR_U32(ctx, 31, 0x1CD53Cu);
    ctx->pc = 0x1CD538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD534u;
            // 0x1cd538: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD53Cu; }
        if (ctx->pc != 0x1CD53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD53Cu; }
        if (ctx->pc != 0x1CD53Cu) { return; }
    }
    ctx->pc = 0x1CD53Cu;
label_1cd53c:
    // 0x1cd53c: 0x3c043f70  lui         $a0, 0x3F70
    ctx->pc = 0x1cd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16240 << 16));
label_1cd540:
    // 0x1cd540: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1cd540u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1cd544:
    // 0x1cd544: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1cd544u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1cd548:
    // 0x1cd548: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cd548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1cd54c:
    // 0x1cd54c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd54cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cd550:
    // 0x1cd550: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1cd550u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1cd554:
    // 0x1cd554: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd554u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1cd558:
    // 0x1cd558: 0xc040880  jal         func_102200
label_1cd55c:
    if (ctx->pc == 0x1CD55Cu) {
        ctx->pc = 0x1CD55Cu;
            // 0x1cd55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD560u;
        goto label_1cd560;
    }
    ctx->pc = 0x1CD558u;
    SET_GPR_U32(ctx, 31, 0x1CD560u);
    ctx->pc = 0x1CD55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD558u;
            // 0x1cd55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD560u; }
        if (ctx->pc != 0x1CD560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD560u; }
        if (ctx->pc != 0x1CD560u) { return; }
    }
    ctx->pc = 0x1CD560u;
label_1cd560:
    // 0x1cd560: 0x3c043f60  lui         $a0, 0x3F60
    ctx->pc = 0x1cd560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16224 << 16));
label_1cd564:
    // 0x1cd564: 0x3403d2f1  ori         $v1, $zero, 0xD2F1
    ctx->pc = 0x1cd564u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)54001u)));
label_1cd568:
    // 0x1cd568: 0x3484624d  ori         $a0, $a0, 0x624D
    ctx->pc = 0x1cd568u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)25165u)));
label_1cd56c:
    // 0x1cd56c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1cd56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_1cd570:
    // 0x1cd570: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1cd570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1cd574:
    // 0x1cd574: 0x3463a9fc  ori         $v1, $v1, 0xA9FC
    ctx->pc = 0x1cd574u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)43516u)));
label_1cd578:
    // 0x1cd578: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cd578u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
label_1cd57c:
    // 0x1cd57c: 0xc040866  jal         func_102198
label_1cd580:
    if (ctx->pc == 0x1CD580u) {
        ctx->pc = 0x1CD580u;
            // 0x1cd580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD584u;
        goto label_1cd584;
    }
    ctx->pc = 0x1CD57Cu;
    SET_GPR_U32(ctx, 31, 0x1CD584u);
    ctx->pc = 0x1CD580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD57Cu;
            // 0x1cd580: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102198u;
    if (runtime->hasFunction(0x102198u)) {
        auto targetFn = runtime->lookupFunction(0x102198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD584u; }
        if (ctx->pc != 0x1CD584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x102198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD584u; }
        if (ctx->pc != 0x1CD584u) { return; }
    }
    ctx->pc = 0x1CD584u;
label_1cd584:
    // 0x1cd584: 0xc040a74  jal         func_1029D0
label_1cd588:
    if (ctx->pc == 0x1CD588u) {
        ctx->pc = 0x1CD588u;
            // 0x1cd588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD58Cu;
        goto label_1cd58c;
    }
    ctx->pc = 0x1CD584u;
    SET_GPR_U32(ctx, 31, 0x1CD58Cu);
    ctx->pc = 0x1CD588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD584u;
            // 0x1cd588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD58Cu; }
        if (ctx->pc != 0x1CD58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD58Cu; }
        if (ctx->pc != 0x1CD58Cu) { return; }
    }
    ctx->pc = 0x1CD58Cu;
label_1cd58c:
    // 0x1cd58c: 0xc66100e0  lwc1        $f1, 0xE0($s3)
    ctx->pc = 0x1cd58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd590:
    // 0x1cd590: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cd590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cd594:
    // 0x1cd594: 0xe66000e0  swc1        $f0, 0xE0($s3)
    ctx->pc = 0x1cd594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_1cd598:
    // 0x1cd598: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_1cd59c:
    // 0x1cd59c: 0x28610079  slti        $at, $v1, 0x79
    ctx->pc = 0x1cd59cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)121) ? 1 : 0);
label_1cd5a0:
    // 0x1cd5a0: 0x14200105  bnez        $at, . + 4 + (0x105 << 2)
label_1cd5a4:
    if (ctx->pc == 0x1CD5A4u) {
        ctx->pc = 0x1CD5A8u;
        goto label_1cd5a8;
    }
    ctx->pc = 0x1CD5A0u;
    {
        const bool branch_taken_0x1cd5a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5a0) {
            ctx->pc = 0x1CD9B8u;
            goto label_1cd9b8;
        }
    }
    ctx->pc = 0x1CD5A8u;
label_1cd5a8:
    // 0x1cd5a8: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1cd5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd5ac:
    // 0x1cd5ac: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cd5b0:
    // 0x1cd5b0: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1cd5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd5b4:
    // 0x1cd5b4: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cd5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cd5b8:
    // 0x1cd5b8: 0xc05d080  jal         func_174200
label_1cd5bc:
    if (ctx->pc == 0x1CD5BCu) {
        ctx->pc = 0x1CD5BCu;
            // 0x1cd5bc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CD5C0u;
        goto label_1cd5c0;
    }
    ctx->pc = 0x1CD5B8u;
    SET_GPR_U32(ctx, 31, 0x1CD5C0u);
    ctx->pc = 0x1CD5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5B8u;
            // 0x1cd5bc: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C0u; }
        if (ctx->pc != 0x1CD5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C0u; }
        if (ctx->pc != 0x1CD5C0u) { return; }
    }
    ctx->pc = 0x1CD5C0u;
label_1cd5c0:
    // 0x1cd5c0: 0xc050bb4  jal         func_142ED0
label_1cd5c4:
    if (ctx->pc == 0x1CD5C4u) {
        ctx->pc = 0x1CD5C8u;
        goto label_1cd5c8;
    }
    ctx->pc = 0x1CD5C0u;
    SET_GPR_U32(ctx, 31, 0x1CD5C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C8u; }
        if (ctx->pc != 0x1CD5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5C8u; }
        if (ctx->pc != 0x1CD5C8u) { return; }
    }
    ctx->pc = 0x1CD5C8u;
label_1cd5c8:
    // 0x1cd5c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cd5c8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1cd5cc:
    // 0x1cd5cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cd5d0:
    if (ctx->pc == 0x1CD5D0u) {
        ctx->pc = 0x1CD5D4u;
        goto label_1cd5d4;
    }
    ctx->pc = 0x1CD5CCu;
    {
        const bool branch_taken_0x1cd5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5cc) {
            ctx->pc = 0x1CD5F0u;
            goto label_1cd5f0;
        }
    }
    ctx->pc = 0x1CD5D4u;
label_1cd5d4:
    // 0x1cd5d4: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1cd5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd5d8:
    // 0x1cd5d8: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x1cd5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1cd5dc:
    // 0x1cd5dc: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1cd5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd5e0:
    // 0x1cd5e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cd5e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cd5e4:
    // 0x1cd5e4: 0xc05d080  jal         func_174200
label_1cd5e8:
    if (ctx->pc == 0x1CD5E8u) {
        ctx->pc = 0x1CD5E8u;
            // 0x1cd5e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CD5ECu;
        goto label_1cd5ec;
    }
    ctx->pc = 0x1CD5E4u;
    SET_GPR_U32(ctx, 31, 0x1CD5ECu);
    ctx->pc = 0x1CD5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5E4u;
            // 0x1cd5e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ECu; }
        if (ctx->pc != 0x1CD5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ECu; }
        if (ctx->pc != 0x1CD5ECu) { return; }
    }
    ctx->pc = 0x1CD5ECu;
label_1cd5ec:
    // 0x1cd5ec: 0x0  nop
    ctx->pc = 0x1cd5ecu;
    // NOP
label_1cd5f0:
    // 0x1cd5f0: 0xc050bb4  jal         func_142ED0
label_1cd5f4:
    if (ctx->pc == 0x1CD5F4u) {
        ctx->pc = 0x1CD5F8u;
        goto label_1cd5f8;
    }
    ctx->pc = 0x1CD5F0u;
    SET_GPR_U32(ctx, 31, 0x1CD5F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5F8u; }
        if (ctx->pc != 0x1CD5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5F8u; }
        if (ctx->pc != 0x1CD5F8u) { return; }
    }
    ctx->pc = 0x1CD5F8u;
label_1cd5f8:
    // 0x1cd5f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cd5f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1cd5fc:
    // 0x1cd5fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1cd600:
    if (ctx->pc == 0x1CD600u) {
        ctx->pc = 0x1CD604u;
        goto label_1cd604;
    }
    ctx->pc = 0x1CD5FCu;
    {
        const bool branch_taken_0x1cd5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd5fc) {
            ctx->pc = 0x1CD620u;
            goto label_1cd620;
        }
    }
    ctx->pc = 0x1CD604u;
label_1cd604:
    // 0x1cd604: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x1cd604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd608:
    // 0x1cd608: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cd60c:
    // 0x1cd60c: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x1cd60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd610:
    // 0x1cd610: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1cd610u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1cd614:
    // 0x1cd614: 0xc05d080  jal         func_174200
label_1cd618:
    if (ctx->pc == 0x1CD618u) {
        ctx->pc = 0x1CD618u;
            // 0x1cd618: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1CD61Cu;
        goto label_1cd61c;
    }
    ctx->pc = 0x1CD614u;
    SET_GPR_U32(ctx, 31, 0x1CD61Cu);
    ctx->pc = 0x1CD618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD614u;
            // 0x1cd618: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD61Cu; }
        if (ctx->pc != 0x1CD61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD61Cu; }
        if (ctx->pc != 0x1CD61Cu) { return; }
    }
    ctx->pc = 0x1CD61Cu;
label_1cd61c:
    // 0x1cd61c: 0x0  nop
    ctx->pc = 0x1cd61cu;
    // NOP
label_1cd620:
    // 0x1cd620: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd624:
    // 0x1cd624: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd628:
    // 0x1cd628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd62c:
    // 0x1cd62c: 0xc053740  jal         func_14DD00
label_1cd630:
    if (ctx->pc == 0x1CD630u) {
        ctx->pc = 0x1CD630u;
            // 0x1cd630: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CD634u;
        goto label_1cd634;
    }
    ctx->pc = 0x1CD62Cu;
    SET_GPR_U32(ctx, 31, 0x1CD634u);
    ctx->pc = 0x1CD630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD62Cu;
            // 0x1cd630: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD634u; }
        if (ctx->pc != 0x1CD634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD634u; }
        if (ctx->pc != 0x1CD634u) { return; }
    }
    ctx->pc = 0x1CD634u;
label_1cd634:
    // 0x1cd634: 0xc050bb4  jal         func_142ED0
label_1cd638:
    if (ctx->pc == 0x1CD638u) {
        ctx->pc = 0x1CD63Cu;
        goto label_1cd63c;
    }
    ctx->pc = 0x1CD634u;
    SET_GPR_U32(ctx, 31, 0x1CD63Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD63Cu; }
        if (ctx->pc != 0x1CD63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD63Cu; }
        if (ctx->pc != 0x1CD63Cu) { return; }
    }
    ctx->pc = 0x1CD63Cu;
label_1cd63c:
    // 0x1cd63c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd640:
    // 0x1cd640: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd644:
    // 0x1cd644: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd644u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd648:
    // 0x1cd648: 0x0  nop
    ctx->pc = 0x1cd648u;
    // NOP
label_1cd64c:
    // 0x1cd64c: 0x0  nop
    ctx->pc = 0x1cd64cu;
    // NOP
label_1cd650:
    // 0x1cd650: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd650u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd654:
    // 0x1cd654: 0xc050bb4  jal         func_142ED0
label_1cd658:
    if (ctx->pc == 0x1CD658u) {
        ctx->pc = 0x1CD658u;
            // 0x1cd658: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD65Cu;
        goto label_1cd65c;
    }
    ctx->pc = 0x1CD654u;
    SET_GPR_U32(ctx, 31, 0x1CD65Cu);
    ctx->pc = 0x1CD658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD654u;
            // 0x1cd658: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD65Cu; }
        if (ctx->pc != 0x1CD65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD65Cu; }
        if (ctx->pc != 0x1CD65Cu) { return; }
    }
    ctx->pc = 0x1CD65Cu;
label_1cd65c:
    // 0x1cd65c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd660:
    // 0x1cd660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd664:
    // 0x1cd664: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd664u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd668:
    // 0x1cd668: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd66c:
    // 0x1cd66c: 0x0  nop
    ctx->pc = 0x1cd66cu;
    // NOP
label_1cd670:
    // 0x1cd670: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd670u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd674:
    // 0x1cd674: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd678:
    // 0x1cd678: 0x1810  mfhi        $v1
    ctx->pc = 0x1cd678u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cd67c:
    // 0x1cd67c: 0xc053740  jal         func_14DD00
label_1cd680:
    if (ctx->pc == 0x1CD680u) {
        ctx->pc = 0x1CD680u;
            // 0x1cd680: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CD684u;
        goto label_1cd684;
    }
    ctx->pc = 0x1CD67Cu;
    SET_GPR_U32(ctx, 31, 0x1CD684u);
    ctx->pc = 0x1CD680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD67Cu;
            // 0x1cd680: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD684u; }
        if (ctx->pc != 0x1CD684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD684u; }
        if (ctx->pc != 0x1CD684u) { return; }
    }
    ctx->pc = 0x1CD684u;
label_1cd684:
    // 0x1cd684: 0xc050bb4  jal         func_142ED0
label_1cd688:
    if (ctx->pc == 0x1CD688u) {
        ctx->pc = 0x1CD68Cu;
        goto label_1cd68c;
    }
    ctx->pc = 0x1CD684u;
    SET_GPR_U32(ctx, 31, 0x1CD68Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD68Cu; }
        if (ctx->pc != 0x1CD68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD68Cu; }
        if (ctx->pc != 0x1CD68Cu) { return; }
    }
    ctx->pc = 0x1CD68Cu;
label_1cd68c:
    // 0x1cd68c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd690:
    // 0x1cd690: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd694:
    // 0x1cd694: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd694u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd698:
    // 0x1cd698: 0x0  nop
    ctx->pc = 0x1cd698u;
    // NOP
label_1cd69c:
    // 0x1cd69c: 0x0  nop
    ctx->pc = 0x1cd69cu;
    // NOP
label_1cd6a0:
    // 0x1cd6a0: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd6a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd6a4:
    // 0x1cd6a4: 0xc050bb4  jal         func_142ED0
label_1cd6a8:
    if (ctx->pc == 0x1CD6A8u) {
        ctx->pc = 0x1CD6A8u;
            // 0x1cd6a8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD6ACu;
        goto label_1cd6ac;
    }
    ctx->pc = 0x1CD6A4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ACu);
    ctx->pc = 0x1CD6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6A4u;
            // 0x1cd6a8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6ACu; }
        if (ctx->pc != 0x1CD6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6ACu; }
        if (ctx->pc != 0x1CD6ACu) { return; }
    }
    ctx->pc = 0x1CD6ACu;
label_1cd6ac:
    // 0x1cd6ac: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd6b0:
    // 0x1cd6b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6b4:
    // 0x1cd6b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd6b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd6b8:
    // 0x1cd6b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd6b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd6bc:
    // 0x1cd6bc: 0x0  nop
    ctx->pc = 0x1cd6bcu;
    // NOP
label_1cd6c0:
    // 0x1cd6c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd6c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd6c4:
    // 0x1cd6c4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1cd6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd6c8:
    // 0x1cd6c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1cd6c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1cd6cc:
    // 0x1cd6cc: 0xc053740  jal         func_14DD00
label_1cd6d0:
    if (ctx->pc == 0x1CD6D0u) {
        ctx->pc = 0x1CD6D0u;
            // 0x1cd6d0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CD6D4u;
        goto label_1cd6d4;
    }
    ctx->pc = 0x1CD6CCu;
    SET_GPR_U32(ctx, 31, 0x1CD6D4u);
    ctx->pc = 0x1CD6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6CCu;
            // 0x1cd6d0: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6D4u; }
        if (ctx->pc != 0x1CD6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6D4u; }
        if (ctx->pc != 0x1CD6D4u) { return; }
    }
    ctx->pc = 0x1CD6D4u;
label_1cd6d4:
    // 0x1cd6d4: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1cd6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd6d8:
    // 0x1cd6d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cd6d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd6dc:
    // 0x1cd6dc: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1cd6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd6e0:
    // 0x1cd6e0: 0xc053740  jal         func_14DD00
label_1cd6e4:
    if (ctx->pc == 0x1CD6E4u) {
        ctx->pc = 0x1CD6E4u;
            // 0x1cd6e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CD6E8u;
        goto label_1cd6e8;
    }
    ctx->pc = 0x1CD6E0u;
    SET_GPR_U32(ctx, 31, 0x1CD6E8u);
    ctx->pc = 0x1CD6E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6E0u;
            // 0x1cd6e4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6E8u; }
        if (ctx->pc != 0x1CD6E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6E8u; }
        if (ctx->pc != 0x1CD6E8u) { return; }
    }
    ctx->pc = 0x1CD6E8u;
label_1cd6e8:
    // 0x1cd6e8: 0xc050bb4  jal         func_142ED0
label_1cd6ec:
    if (ctx->pc == 0x1CD6ECu) {
        ctx->pc = 0x1CD6F0u;
        goto label_1cd6f0;
    }
    ctx->pc = 0x1CD6E8u;
    SET_GPR_U32(ctx, 31, 0x1CD6F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6F0u; }
        if (ctx->pc != 0x1CD6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6F0u; }
        if (ctx->pc != 0x1CD6F0u) { return; }
    }
    ctx->pc = 0x1CD6F0u;
label_1cd6f0:
    // 0x1cd6f0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd6f4:
    // 0x1cd6f4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd6f8:
    // 0x1cd6f8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd6f8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd6fc:
    // 0x1cd6fc: 0x0  nop
    ctx->pc = 0x1cd6fcu;
    // NOP
label_1cd700:
    // 0x1cd700: 0x0  nop
    ctx->pc = 0x1cd700u;
    // NOP
label_1cd704:
    // 0x1cd704: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd704u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd708:
    // 0x1cd708: 0xc050bb4  jal         func_142ED0
label_1cd70c:
    if (ctx->pc == 0x1CD70Cu) {
        ctx->pc = 0x1CD70Cu;
            // 0x1cd70c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD710u;
        goto label_1cd710;
    }
    ctx->pc = 0x1CD708u;
    SET_GPR_U32(ctx, 31, 0x1CD710u);
    ctx->pc = 0x1CD70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD708u;
            // 0x1cd70c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD710u; }
        if (ctx->pc != 0x1CD710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD710u; }
        if (ctx->pc != 0x1CD710u) { return; }
    }
    ctx->pc = 0x1CD710u;
label_1cd710:
    // 0x1cd710: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd714:
    // 0x1cd714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd718:
    // 0x1cd718: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd718u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd71c:
    // 0x1cd71c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cd720:
    // 0x1cd720: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd724:
    // 0x1cd724: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd728:
    // 0x1cd728: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd728u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd72c:
    // 0x1cd72c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd72cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd730:
    // 0x1cd730: 0xc053740  jal         func_14DD00
label_1cd734:
    if (ctx->pc == 0x1CD734u) {
        ctx->pc = 0x1CD734u;
            // 0x1cd734: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD738u;
        goto label_1cd738;
    }
    ctx->pc = 0x1CD730u;
    SET_GPR_U32(ctx, 31, 0x1CD738u);
    ctx->pc = 0x1CD734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD730u;
            // 0x1cd734: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD738u; }
        if (ctx->pc != 0x1CD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD738u; }
        if (ctx->pc != 0x1CD738u) { return; }
    }
    ctx->pc = 0x1CD738u;
label_1cd738:
    // 0x1cd738: 0xc050bb4  jal         func_142ED0
label_1cd73c:
    if (ctx->pc == 0x1CD73Cu) {
        ctx->pc = 0x1CD740u;
        goto label_1cd740;
    }
    ctx->pc = 0x1CD738u;
    SET_GPR_U32(ctx, 31, 0x1CD740u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD740u; }
        if (ctx->pc != 0x1CD740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD740u; }
        if (ctx->pc != 0x1CD740u) { return; }
    }
    ctx->pc = 0x1CD740u;
label_1cd740:
    // 0x1cd740: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd744:
    // 0x1cd744: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd748:
    // 0x1cd748: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd748u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd74c:
    // 0x1cd74c: 0x0  nop
    ctx->pc = 0x1cd74cu;
    // NOP
label_1cd750:
    // 0x1cd750: 0x0  nop
    ctx->pc = 0x1cd750u;
    // NOP
label_1cd754:
    // 0x1cd754: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd754u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd758:
    // 0x1cd758: 0xc050bb4  jal         func_142ED0
label_1cd75c:
    if (ctx->pc == 0x1CD75Cu) {
        ctx->pc = 0x1CD75Cu;
            // 0x1cd75c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD760u;
        goto label_1cd760;
    }
    ctx->pc = 0x1CD758u;
    SET_GPR_U32(ctx, 31, 0x1CD760u);
    ctx->pc = 0x1CD75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD758u;
            // 0x1cd75c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD760u; }
        if (ctx->pc != 0x1CD760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD760u; }
        if (ctx->pc != 0x1CD760u) { return; }
    }
    ctx->pc = 0x1CD760u;
label_1cd760:
    // 0x1cd760: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd764:
    // 0x1cd764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd768:
    // 0x1cd768: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd768u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd76c:
    // 0x1cd76c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cd770:
    // 0x1cd770: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd774:
    // 0x1cd774: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd778:
    // 0x1cd778: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd778u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd77c:
    // 0x1cd77c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd77cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd780:
    // 0x1cd780: 0xc053740  jal         func_14DD00
label_1cd784:
    if (ctx->pc == 0x1CD784u) {
        ctx->pc = 0x1CD784u;
            // 0x1cd784: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD788u;
        goto label_1cd788;
    }
    ctx->pc = 0x1CD780u;
    SET_GPR_U32(ctx, 31, 0x1CD788u);
    ctx->pc = 0x1CD784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD780u;
            // 0x1cd784: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD788u; }
        if (ctx->pc != 0x1CD788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD788u; }
        if (ctx->pc != 0x1CD788u) { return; }
    }
    ctx->pc = 0x1CD788u;
label_1cd788:
    // 0x1cd788: 0xc050bb4  jal         func_142ED0
label_1cd78c:
    if (ctx->pc == 0x1CD78Cu) {
        ctx->pc = 0x1CD790u;
        goto label_1cd790;
    }
    ctx->pc = 0x1CD788u;
    SET_GPR_U32(ctx, 31, 0x1CD790u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD790u; }
        if (ctx->pc != 0x1CD790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD790u; }
        if (ctx->pc != 0x1CD790u) { return; }
    }
    ctx->pc = 0x1CD790u;
label_1cd790:
    // 0x1cd790: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd794:
    // 0x1cd794: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd798:
    // 0x1cd798: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd798u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd79c:
    // 0x1cd79c: 0x0  nop
    ctx->pc = 0x1cd79cu;
    // NOP
label_1cd7a0:
    // 0x1cd7a0: 0x0  nop
    ctx->pc = 0x1cd7a0u;
    // NOP
label_1cd7a4:
    // 0x1cd7a4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd7a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd7a8:
    // 0x1cd7a8: 0xc050bb4  jal         func_142ED0
label_1cd7ac:
    if (ctx->pc == 0x1CD7ACu) {
        ctx->pc = 0x1CD7ACu;
            // 0x1cd7ac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD7B0u;
        goto label_1cd7b0;
    }
    ctx->pc = 0x1CD7A8u;
    SET_GPR_U32(ctx, 31, 0x1CD7B0u);
    ctx->pc = 0x1CD7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7A8u;
            // 0x1cd7ac: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7B0u; }
        if (ctx->pc != 0x1CD7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7B0u; }
        if (ctx->pc != 0x1CD7B0u) { return; }
    }
    ctx->pc = 0x1CD7B0u;
label_1cd7b0:
    // 0x1cd7b0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd7b4:
    // 0x1cd7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7b8:
    // 0x1cd7b8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd7b8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd7bc:
    // 0x1cd7bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cd7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cd7c0:
    // 0x1cd7c0: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd7c4:
    // 0x1cd7c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd7c8:
    // 0x1cd7c8: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd7cc:
    // 0x1cd7cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd7ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd7d0:
    // 0x1cd7d0: 0xc053740  jal         func_14DD00
label_1cd7d4:
    if (ctx->pc == 0x1CD7D4u) {
        ctx->pc = 0x1CD7D4u;
            // 0x1cd7d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD7D8u;
        goto label_1cd7d8;
    }
    ctx->pc = 0x1CD7D0u;
    SET_GPR_U32(ctx, 31, 0x1CD7D8u);
    ctx->pc = 0x1CD7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7D0u;
            // 0x1cd7d4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7D8u; }
        if (ctx->pc != 0x1CD7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7D8u; }
        if (ctx->pc != 0x1CD7D8u) { return; }
    }
    ctx->pc = 0x1CD7D8u;
label_1cd7d8:
    // 0x1cd7d8: 0xc050bb4  jal         func_142ED0
label_1cd7dc:
    if (ctx->pc == 0x1CD7DCu) {
        ctx->pc = 0x1CD7E0u;
        goto label_1cd7e0;
    }
    ctx->pc = 0x1CD7D8u;
    SET_GPR_U32(ctx, 31, 0x1CD7E0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    }
    ctx->pc = 0x1CD7E0u;
label_1cd7e0:
    // 0x1cd7e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd7e4:
    // 0x1cd7e4: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd7e8:
    // 0x1cd7e8: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd7e8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd7ec:
    // 0x1cd7ec: 0x0  nop
    ctx->pc = 0x1cd7ecu;
    // NOP
label_1cd7f0:
    // 0x1cd7f0: 0x0  nop
    ctx->pc = 0x1cd7f0u;
    // NOP
label_1cd7f4:
    // 0x1cd7f4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd7f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd7f8:
    // 0x1cd7f8: 0xc050bb4  jal         func_142ED0
label_1cd7fc:
    if (ctx->pc == 0x1CD7FCu) {
        ctx->pc = 0x1CD7FCu;
            // 0x1cd7fc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD800u;
        goto label_1cd800;
    }
    ctx->pc = 0x1CD7F8u;
    SET_GPR_U32(ctx, 31, 0x1CD800u);
    ctx->pc = 0x1CD7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7F8u;
            // 0x1cd7fc: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD800u; }
        if (ctx->pc != 0x1CD800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD800u; }
        if (ctx->pc != 0x1CD800u) { return; }
    }
    ctx->pc = 0x1CD800u;
label_1cd800:
    // 0x1cd800: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd804:
    // 0x1cd804: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd808:
    // 0x1cd808: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd808u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd80c:
    // 0x1cd80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd810:
    // 0x1cd810: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd814:
    // 0x1cd814: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_1cd818:
    // 0x1cd818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd81c:
    // 0x1cd81c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cd81cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd820:
    // 0x1cd820: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd820u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd824:
    // 0x1cd824: 0xc053740  jal         func_14DD00
label_1cd828:
    if (ctx->pc == 0x1CD828u) {
        ctx->pc = 0x1CD828u;
            // 0x1cd828: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD82Cu;
        goto label_1cd82c;
    }
    ctx->pc = 0x1CD824u;
    SET_GPR_U32(ctx, 31, 0x1CD82Cu);
    ctx->pc = 0x1CD828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD824u;
            // 0x1cd828: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD82Cu; }
        if (ctx->pc != 0x1CD82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD82Cu; }
        if (ctx->pc != 0x1CD82Cu) { return; }
    }
    ctx->pc = 0x1CD82Cu;
label_1cd82c:
    // 0x1cd82c: 0xc050bb4  jal         func_142ED0
label_1cd830:
    if (ctx->pc == 0x1CD830u) {
        ctx->pc = 0x1CD834u;
        goto label_1cd834;
    }
    ctx->pc = 0x1CD82Cu;
    SET_GPR_U32(ctx, 31, 0x1CD834u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD834u; }
        if (ctx->pc != 0x1CD834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD834u; }
        if (ctx->pc != 0x1CD834u) { return; }
    }
    ctx->pc = 0x1CD834u;
label_1cd834:
    // 0x1cd834: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd838:
    // 0x1cd838: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd83c:
    // 0x1cd83c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd83cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd840:
    // 0x1cd840: 0x0  nop
    ctx->pc = 0x1cd840u;
    // NOP
label_1cd844:
    // 0x1cd844: 0x0  nop
    ctx->pc = 0x1cd844u;
    // NOP
label_1cd848:
    // 0x1cd848: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd848u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd84c:
    // 0x1cd84c: 0xc050bb4  jal         func_142ED0
label_1cd850:
    if (ctx->pc == 0x1CD850u) {
        ctx->pc = 0x1CD850u;
            // 0x1cd850: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD854u;
        goto label_1cd854;
    }
    ctx->pc = 0x1CD84Cu;
    SET_GPR_U32(ctx, 31, 0x1CD854u);
    ctx->pc = 0x1CD850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD84Cu;
            // 0x1cd850: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD854u; }
        if (ctx->pc != 0x1CD854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD854u; }
        if (ctx->pc != 0x1CD854u) { return; }
    }
    ctx->pc = 0x1CD854u;
label_1cd854:
    // 0x1cd854: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd858:
    // 0x1cd858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd85c:
    // 0x1cd85c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd85cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd860:
    // 0x1cd860: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd864:
    // 0x1cd864: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd868:
    // 0x1cd868: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd86c:
    // 0x1cd86c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd86cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd870:
    // 0x1cd870: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd870u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd874:
    // 0x1cd874: 0xc053740  jal         func_14DD00
label_1cd878:
    if (ctx->pc == 0x1CD878u) {
        ctx->pc = 0x1CD878u;
            // 0x1cd878: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD87Cu;
        goto label_1cd87c;
    }
    ctx->pc = 0x1CD874u;
    SET_GPR_U32(ctx, 31, 0x1CD87Cu);
    ctx->pc = 0x1CD878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD874u;
            // 0x1cd878: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD87Cu; }
        if (ctx->pc != 0x1CD87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD87Cu; }
        if (ctx->pc != 0x1CD87Cu) { return; }
    }
    ctx->pc = 0x1CD87Cu;
label_1cd87c:
    // 0x1cd87c: 0xc050bb4  jal         func_142ED0
label_1cd880:
    if (ctx->pc == 0x1CD880u) {
        ctx->pc = 0x1CD884u;
        goto label_1cd884;
    }
    ctx->pc = 0x1CD87Cu;
    SET_GPR_U32(ctx, 31, 0x1CD884u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD884u; }
        if (ctx->pc != 0x1CD884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD884u; }
        if (ctx->pc != 0x1CD884u) { return; }
    }
    ctx->pc = 0x1CD884u;
label_1cd884:
    // 0x1cd884: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd888:
    // 0x1cd888: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd88c:
    // 0x1cd88c: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd88cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd890:
    // 0x1cd890: 0x0  nop
    ctx->pc = 0x1cd890u;
    // NOP
label_1cd894:
    // 0x1cd894: 0x0  nop
    ctx->pc = 0x1cd894u;
    // NOP
label_1cd898:
    // 0x1cd898: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd898u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd89c:
    // 0x1cd89c: 0xc050bb4  jal         func_142ED0
label_1cd8a0:
    if (ctx->pc == 0x1CD8A0u) {
        ctx->pc = 0x1CD8A0u;
            // 0x1cd8a0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD8A4u;
        goto label_1cd8a4;
    }
    ctx->pc = 0x1CD89Cu;
    SET_GPR_U32(ctx, 31, 0x1CD8A4u);
    ctx->pc = 0x1CD8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD89Cu;
            // 0x1cd8a0: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8A4u; }
        if (ctx->pc != 0x1CD8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8A4u; }
        if (ctx->pc != 0x1CD8A4u) { return; }
    }
    ctx->pc = 0x1CD8A4u;
label_1cd8a4:
    // 0x1cd8a4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd8a8:
    // 0x1cd8a8: 0x8e650020  lw          $a1, 0x20($s3)
    ctx->pc = 0x1cd8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd8ac:
    // 0x1cd8ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd8acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd8b0:
    // 0x1cd8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8b4:
    // 0x1cd8b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cd8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cd8b8:
    // 0x1cd8b8: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x1cd8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_1cd8bc:
    // 0x1cd8bc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cd8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cd8c0:
    // 0x1cd8c0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cd8c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd8c4:
    // 0x1cd8c4: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd8c4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd8c8:
    // 0x1cd8c8: 0xc053740  jal         func_14DD00
label_1cd8cc:
    if (ctx->pc == 0x1CD8CCu) {
        ctx->pc = 0x1CD8CCu;
            // 0x1cd8cc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD8D0u;
        goto label_1cd8d0;
    }
    ctx->pc = 0x1CD8C8u;
    SET_GPR_U32(ctx, 31, 0x1CD8D0u);
    ctx->pc = 0x1CD8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8C8u;
            // 0x1cd8cc: 0xa22823  subu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D0u; }
        if (ctx->pc != 0x1CD8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D0u; }
        if (ctx->pc != 0x1CD8D0u) { return; }
    }
    ctx->pc = 0x1CD8D0u;
label_1cd8d0:
    // 0x1cd8d0: 0xc050bb4  jal         func_142ED0
label_1cd8d4:
    if (ctx->pc == 0x1CD8D4u) {
        ctx->pc = 0x1CD8D8u;
        goto label_1cd8d8;
    }
    ctx->pc = 0x1CD8D0u;
    SET_GPR_U32(ctx, 31, 0x1CD8D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D8u; }
        if (ctx->pc != 0x1CD8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D8u; }
        if (ctx->pc != 0x1CD8D8u) { return; }
    }
    ctx->pc = 0x1CD8D8u;
label_1cd8d8:
    // 0x1cd8d8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd8dc:
    // 0x1cd8dc: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd8e0:
    // 0x1cd8e0: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd8e0u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd8e4:
    // 0x1cd8e4: 0x0  nop
    ctx->pc = 0x1cd8e4u;
    // NOP
label_1cd8e8:
    // 0x1cd8e8: 0x0  nop
    ctx->pc = 0x1cd8e8u;
    // NOP
label_1cd8ec:
    // 0x1cd8ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd8f0:
    // 0x1cd8f0: 0xc050bb4  jal         func_142ED0
label_1cd8f4:
    if (ctx->pc == 0x1CD8F4u) {
        ctx->pc = 0x1CD8F4u;
            // 0x1cd8f4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD8F8u;
        goto label_1cd8f8;
    }
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8F0u;
            // 0x1cd8f4: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8F8u; }
        if (ctx->pc != 0x1CD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8F8u; }
        if (ctx->pc != 0x1CD8F8u) { return; }
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd8fc:
    // 0x1cd8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd900:
    // 0x1cd900: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd900u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd904:
    // 0x1cd904: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd908:
    // 0x1cd908: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd90c:
    // 0x1cd90c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd90cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd910:
    // 0x1cd910: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd910u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd914:
    // 0x1cd914: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd914u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd918:
    // 0x1cd918: 0xc053740  jal         func_14DD00
label_1cd91c:
    if (ctx->pc == 0x1CD91Cu) {
        ctx->pc = 0x1CD91Cu;
            // 0x1cd91c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD920u;
        goto label_1cd920;
    }
    ctx->pc = 0x1CD918u;
    SET_GPR_U32(ctx, 31, 0x1CD920u);
    ctx->pc = 0x1CD91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD918u;
            // 0x1cd91c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD920u; }
        if (ctx->pc != 0x1CD920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD920u; }
        if (ctx->pc != 0x1CD920u) { return; }
    }
    ctx->pc = 0x1CD920u;
label_1cd920:
    // 0x1cd920: 0xc050bb4  jal         func_142ED0
label_1cd924:
    if (ctx->pc == 0x1CD924u) {
        ctx->pc = 0x1CD928u;
        goto label_1cd928;
    }
    ctx->pc = 0x1CD920u;
    SET_GPR_U32(ctx, 31, 0x1CD928u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD928u; }
        if (ctx->pc != 0x1CD928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD928u; }
        if (ctx->pc != 0x1CD928u) { return; }
    }
    ctx->pc = 0x1CD928u;
label_1cd928:
    // 0x1cd928: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1cd928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd92c:
    // 0x1cd92c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd930:
    // 0x1cd930: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1cd930u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd934:
    // 0x1cd934: 0x0  nop
    ctx->pc = 0x1cd934u;
    // NOP
label_1cd938:
    // 0x1cd938: 0x0  nop
    ctx->pc = 0x1cd938u;
    // NOP
label_1cd93c:
    // 0x1cd93c: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd93cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd940:
    // 0x1cd940: 0xc050bb4  jal         func_142ED0
label_1cd944:
    if (ctx->pc == 0x1CD944u) {
        ctx->pc = 0x1CD944u;
            // 0x1cd944: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD948u;
        goto label_1cd948;
    }
    ctx->pc = 0x1CD940u;
    SET_GPR_U32(ctx, 31, 0x1CD948u);
    ctx->pc = 0x1CD944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD940u;
            // 0x1cd944: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD948u; }
        if (ctx->pc != 0x1CD948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD948u; }
        if (ctx->pc != 0x1CD948u) { return; }
    }
    ctx->pc = 0x1CD948u;
label_1cd948:
    // 0x1cd948: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1cd948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1cd94c:
    // 0x1cd94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd950:
    // 0x1cd950: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1cd950u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1cd954:
    // 0x1cd954: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1cd954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_1cd958:
    // 0x1cd958: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x1cd958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd95c:
    // 0x1cd95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cd95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cd960:
    // 0x1cd960: 0x1010  mfhi        $v0
    ctx->pc = 0x1cd960u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cd964:
    // 0x1cd964: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cd964u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cd968:
    // 0x1cd968: 0xc053740  jal         func_14DD00
label_1cd96c:
    if (ctx->pc == 0x1CD96Cu) {
        ctx->pc = 0x1CD96Cu;
            // 0x1cd96c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x1CD970u;
        goto label_1cd970;
    }
    ctx->pc = 0x1CD968u;
    SET_GPR_U32(ctx, 31, 0x1CD970u);
    ctx->pc = 0x1CD96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD968u;
            // 0x1cd96c: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD970u; }
        if (ctx->pc != 0x1CD970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD970u; }
        if (ctx->pc != 0x1CD970u) { return; }
    }
    ctx->pc = 0x1CD970u;
label_1cd970:
    // 0x1cd970: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x1cd970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_1cd974:
    // 0x1cd974: 0x8e660020  lw          $a2, 0x20($s3)
    ctx->pc = 0x1cd974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1cd978:
    // 0x1cd978: 0xc07b0ac  jal         func_1EC2B0
label_1cd97c:
    if (ctx->pc == 0x1CD97Cu) {
        ctx->pc = 0x1CD97Cu;
            // 0x1cd97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CD980u;
        goto label_1cd980;
    }
    ctx->pc = 0x1CD978u;
    SET_GPR_U32(ctx, 31, 0x1CD980u);
    ctx->pc = 0x1CD97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD978u;
            // 0x1cd97c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC2B0u;
    if (runtime->hasFunction(0x1EC2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD980u; }
        if (ctx->pc != 0x1CD980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_Mid_0x1ec2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD980u; }
        if (ctx->pc != 0x1CD980u) { return; }
    }
    ctx->pc = 0x1CD980u;
label_1cd980:
    // 0x1cd980: 0x8e6200fc  lw          $v0, 0xFC($s3)
    ctx->pc = 0x1cd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_1cd984:
    // 0x1cd984: 0x40f809  jalr        $v0
label_1cd988:
    if (ctx->pc == 0x1CD988u) {
        ctx->pc = 0x1CD988u;
            // 0x1cd988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD98Cu;
        goto label_1cd98c;
    }
    ctx->pc = 0x1CD984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD98Cu);
        ctx->pc = 0x1CD988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD984u;
            // 0x1cd988: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC790u: goto label_1cc790;
            case 0x1CC794u: goto label_1cc794;
            case 0x1CC798u: goto label_1cc798;
            case 0x1CC79Cu: goto label_1cc79c;
            case 0x1CC7A0u: goto label_1cc7a0;
            case 0x1CC7A4u: goto label_1cc7a4;
            case 0x1CC7A8u: goto label_1cc7a8;
            case 0x1CC7ACu: goto label_1cc7ac;
            case 0x1CC7B0u: goto label_1cc7b0;
            case 0x1CC7B4u: goto label_1cc7b4;
            case 0x1CC7B8u: goto label_1cc7b8;
            case 0x1CC7BCu: goto label_1cc7bc;
            case 0x1CC7C0u: goto label_1cc7c0;
            case 0x1CC7C4u: goto label_1cc7c4;
            case 0x1CC7C8u: goto label_1cc7c8;
            case 0x1CC7CCu: goto label_1cc7cc;
            case 0x1CC7D0u: goto label_1cc7d0;
            case 0x1CC7D4u: goto label_1cc7d4;
            case 0x1CC7D8u: goto label_1cc7d8;
            case 0x1CC7DCu: goto label_1cc7dc;
            case 0x1CC7E0u: goto label_1cc7e0;
            case 0x1CC7E4u: goto label_1cc7e4;
            case 0x1CC7E8u: goto label_1cc7e8;
            case 0x1CC7ECu: goto label_1cc7ec;
            case 0x1CC7F0u: goto label_1cc7f0;
            case 0x1CC7F4u: goto label_1cc7f4;
            case 0x1CC7F8u: goto label_1cc7f8;
            case 0x1CC7FCu: goto label_1cc7fc;
            case 0x1CC800u: goto label_1cc800;
            case 0x1CC804u: goto label_1cc804;
            case 0x1CC808u: goto label_1cc808;
            case 0x1CC80Cu: goto label_1cc80c;
            case 0x1CC810u: goto label_1cc810;
            case 0x1CC814u: goto label_1cc814;
            case 0x1CC818u: goto label_1cc818;
            case 0x1CC81Cu: goto label_1cc81c;
            case 0x1CC820u: goto label_1cc820;
            case 0x1CC824u: goto label_1cc824;
            case 0x1CC828u: goto label_1cc828;
            case 0x1CC82Cu: goto label_1cc82c;
            case 0x1CC830u: goto label_1cc830;
            case 0x1CC834u: goto label_1cc834;
            case 0x1CC838u: goto label_1cc838;
            case 0x1CC83Cu: goto label_1cc83c;
            case 0x1CC840u: goto label_1cc840;
            case 0x1CC844u: goto label_1cc844;
            case 0x1CC848u: goto label_1cc848;
            case 0x1CC84Cu: goto label_1cc84c;
            case 0x1CC850u: goto label_1cc850;
            case 0x1CC854u: goto label_1cc854;
            case 0x1CC858u: goto label_1cc858;
            case 0x1CC85Cu: goto label_1cc85c;
            case 0x1CC860u: goto label_1cc860;
            case 0x1CC864u: goto label_1cc864;
            case 0x1CC868u: goto label_1cc868;
            case 0x1CC86Cu: goto label_1cc86c;
            case 0x1CC870u: goto label_1cc870;
            case 0x1CC874u: goto label_1cc874;
            case 0x1CC878u: goto label_1cc878;
            case 0x1CC87Cu: goto label_1cc87c;
            case 0x1CC880u: goto label_1cc880;
            case 0x1CC884u: goto label_1cc884;
            case 0x1CC888u: goto label_1cc888;
            case 0x1CC88Cu: goto label_1cc88c;
            case 0x1CC890u: goto label_1cc890;
            case 0x1CC894u: goto label_1cc894;
            case 0x1CC898u: goto label_1cc898;
            case 0x1CC89Cu: goto label_1cc89c;
            case 0x1CC8A0u: goto label_1cc8a0;
            case 0x1CC8A4u: goto label_1cc8a4;
            case 0x1CC8A8u: goto label_1cc8a8;
            case 0x1CC8ACu: goto label_1cc8ac;
            case 0x1CC8B0u: goto label_1cc8b0;
            case 0x1CC8B4u: goto label_1cc8b4;
            case 0x1CC8B8u: goto label_1cc8b8;
            case 0x1CC8BCu: goto label_1cc8bc;
            case 0x1CC8C0u: goto label_1cc8c0;
            case 0x1CC8C4u: goto label_1cc8c4;
            case 0x1CC8C8u: goto label_1cc8c8;
            case 0x1CC8CCu: goto label_1cc8cc;
            case 0x1CC8D0u: goto label_1cc8d0;
            case 0x1CC8D4u: goto label_1cc8d4;
            case 0x1CC8D8u: goto label_1cc8d8;
            case 0x1CC8DCu: goto label_1cc8dc;
            case 0x1CC8E0u: goto label_1cc8e0;
            case 0x1CC8E4u: goto label_1cc8e4;
            case 0x1CC8E8u: goto label_1cc8e8;
            case 0x1CC8ECu: goto label_1cc8ec;
            case 0x1CC8F0u: goto label_1cc8f0;
            case 0x1CC8F4u: goto label_1cc8f4;
            case 0x1CC8F8u: goto label_1cc8f8;
            case 0x1CC8FCu: goto label_1cc8fc;
            case 0x1CC900u: goto label_1cc900;
            case 0x1CC904u: goto label_1cc904;
            case 0x1CC908u: goto label_1cc908;
            case 0x1CC90Cu: goto label_1cc90c;
            case 0x1CC910u: goto label_1cc910;
            case 0x1CC914u: goto label_1cc914;
            case 0x1CC918u: goto label_1cc918;
            case 0x1CC91Cu: goto label_1cc91c;
            case 0x1CC920u: goto label_1cc920;
            case 0x1CC924u: goto label_1cc924;
            case 0x1CC928u: goto label_1cc928;
            case 0x1CC92Cu: goto label_1cc92c;
            case 0x1CC930u: goto label_1cc930;
            case 0x1CC934u: goto label_1cc934;
            case 0x1CC938u: goto label_1cc938;
            case 0x1CC93Cu: goto label_1cc93c;
            case 0x1CC940u: goto label_1cc940;
            case 0x1CC944u: goto label_1cc944;
            case 0x1CC948u: goto label_1cc948;
            case 0x1CC94Cu: goto label_1cc94c;
            case 0x1CC950u: goto label_1cc950;
            case 0x1CC954u: goto label_1cc954;
            case 0x1CC958u: goto label_1cc958;
            case 0x1CC95Cu: goto label_1cc95c;
            case 0x1CC960u: goto label_1cc960;
            case 0x1CC964u: goto label_1cc964;
            case 0x1CC968u: goto label_1cc968;
            case 0x1CC96Cu: goto label_1cc96c;
            case 0x1CC970u: goto label_1cc970;
            case 0x1CC974u: goto label_1cc974;
            case 0x1CC978u: goto label_1cc978;
            case 0x1CC97Cu: goto label_1cc97c;
            case 0x1CC980u: goto label_1cc980;
            case 0x1CC984u: goto label_1cc984;
            case 0x1CC988u: goto label_1cc988;
            case 0x1CC98Cu: goto label_1cc98c;
            case 0x1CC990u: goto label_1cc990;
            case 0x1CC994u: goto label_1cc994;
            case 0x1CC998u: goto label_1cc998;
            case 0x1CC99Cu: goto label_1cc99c;
            case 0x1CC9A0u: goto label_1cc9a0;
            case 0x1CC9A4u: goto label_1cc9a4;
            case 0x1CC9A8u: goto label_1cc9a8;
            case 0x1CC9ACu: goto label_1cc9ac;
            case 0x1CC9B0u: goto label_1cc9b0;
            case 0x1CC9B4u: goto label_1cc9b4;
            case 0x1CC9B8u: goto label_1cc9b8;
            case 0x1CC9BCu: goto label_1cc9bc;
            case 0x1CC9C0u: goto label_1cc9c0;
            case 0x1CC9C4u: goto label_1cc9c4;
            case 0x1CC9C8u: goto label_1cc9c8;
            case 0x1CC9CCu: goto label_1cc9cc;
            case 0x1CC9D0u: goto label_1cc9d0;
            case 0x1CC9D4u: goto label_1cc9d4;
            case 0x1CC9D8u: goto label_1cc9d8;
            case 0x1CC9DCu: goto label_1cc9dc;
            case 0x1CC9E0u: goto label_1cc9e0;
            case 0x1CC9E4u: goto label_1cc9e4;
            case 0x1CC9E8u: goto label_1cc9e8;
            case 0x1CC9ECu: goto label_1cc9ec;
            case 0x1CC9F0u: goto label_1cc9f0;
            case 0x1CC9F4u: goto label_1cc9f4;
            case 0x1CC9F8u: goto label_1cc9f8;
            case 0x1CC9FCu: goto label_1cc9fc;
            case 0x1CCA00u: goto label_1cca00;
            case 0x1CCA04u: goto label_1cca04;
            case 0x1CCA08u: goto label_1cca08;
            case 0x1CCA0Cu: goto label_1cca0c;
            case 0x1CCA10u: goto label_1cca10;
            case 0x1CCA14u: goto label_1cca14;
            case 0x1CCA18u: goto label_1cca18;
            case 0x1CCA1Cu: goto label_1cca1c;
            case 0x1CCA20u: goto label_1cca20;
            case 0x1CCA24u: goto label_1cca24;
            case 0x1CCA28u: goto label_1cca28;
            case 0x1CCA2Cu: goto label_1cca2c;
            case 0x1CCA30u: goto label_1cca30;
            case 0x1CCA34u: goto label_1cca34;
            case 0x1CCA38u: goto label_1cca38;
            case 0x1CCA3Cu: goto label_1cca3c;
            case 0x1CCA40u: goto label_1cca40;
            case 0x1CCA44u: goto label_1cca44;
            case 0x1CCA48u: goto label_1cca48;
            case 0x1CCA4Cu: goto label_1cca4c;
            case 0x1CCA50u: goto label_1cca50;
            case 0x1CCA54u: goto label_1cca54;
            case 0x1CCA58u: goto label_1cca58;
            case 0x1CCA5Cu: goto label_1cca5c;
            case 0x1CCA60u: goto label_1cca60;
            case 0x1CCA64u: goto label_1cca64;
            case 0x1CCA68u: goto label_1cca68;
            case 0x1CCA6Cu: goto label_1cca6c;
            case 0x1CCA70u: goto label_1cca70;
            case 0x1CCA74u: goto label_1cca74;
            case 0x1CCA78u: goto label_1cca78;
            case 0x1CCA7Cu: goto label_1cca7c;
            case 0x1CCA80u: goto label_1cca80;
            case 0x1CCA84u: goto label_1cca84;
            case 0x1CCA88u: goto label_1cca88;
            case 0x1CCA8Cu: goto label_1cca8c;
            case 0x1CCA90u: goto label_1cca90;
            case 0x1CCA94u: goto label_1cca94;
            case 0x1CCA98u: goto label_1cca98;
            case 0x1CCA9Cu: goto label_1cca9c;
            case 0x1CCAA0u: goto label_1ccaa0;
            case 0x1CCAA4u: goto label_1ccaa4;
            case 0x1CCAA8u: goto label_1ccaa8;
            case 0x1CCAACu: goto label_1ccaac;
            case 0x1CCAB0u: goto label_1ccab0;
            case 0x1CCAB4u: goto label_1ccab4;
            case 0x1CCAB8u: goto label_1ccab8;
            case 0x1CCABCu: goto label_1ccabc;
            case 0x1CCAC0u: goto label_1ccac0;
            case 0x1CCAC4u: goto label_1ccac4;
            case 0x1CCAC8u: goto label_1ccac8;
            case 0x1CCACCu: goto label_1ccacc;
            case 0x1CCAD0u: goto label_1ccad0;
            case 0x1CCAD4u: goto label_1ccad4;
            case 0x1CCAD8u: goto label_1ccad8;
            case 0x1CCADCu: goto label_1ccadc;
            case 0x1CCAE0u: goto label_1ccae0;
            case 0x1CCAE4u: goto label_1ccae4;
            case 0x1CCAE8u: goto label_1ccae8;
            case 0x1CCAECu: goto label_1ccaec;
            case 0x1CCAF0u: goto label_1ccaf0;
            case 0x1CCAF4u: goto label_1ccaf4;
            case 0x1CCAF8u: goto label_1ccaf8;
            case 0x1CCAFCu: goto label_1ccafc;
            case 0x1CCB00u: goto label_1ccb00;
            case 0x1CCB04u: goto label_1ccb04;
            case 0x1CCB08u: goto label_1ccb08;
            case 0x1CCB0Cu: goto label_1ccb0c;
            case 0x1CCB10u: goto label_1ccb10;
            case 0x1CCB14u: goto label_1ccb14;
            case 0x1CCB18u: goto label_1ccb18;
            case 0x1CCB1Cu: goto label_1ccb1c;
            case 0x1CCB20u: goto label_1ccb20;
            case 0x1CCB24u: goto label_1ccb24;
            case 0x1CCB28u: goto label_1ccb28;
            case 0x1CCB2Cu: goto label_1ccb2c;
            case 0x1CCB30u: goto label_1ccb30;
            case 0x1CCB34u: goto label_1ccb34;
            case 0x1CCB38u: goto label_1ccb38;
            case 0x1CCB3Cu: goto label_1ccb3c;
            case 0x1CCB40u: goto label_1ccb40;
            case 0x1CCB44u: goto label_1ccb44;
            case 0x1CCB48u: goto label_1ccb48;
            case 0x1CCB4Cu: goto label_1ccb4c;
            case 0x1CCB50u: goto label_1ccb50;
            case 0x1CCB54u: goto label_1ccb54;
            case 0x1CCB58u: goto label_1ccb58;
            case 0x1CCB5Cu: goto label_1ccb5c;
            case 0x1CCB60u: goto label_1ccb60;
            case 0x1CCB64u: goto label_1ccb64;
            case 0x1CCB68u: goto label_1ccb68;
            case 0x1CCB6Cu: goto label_1ccb6c;
            case 0x1CCB70u: goto label_1ccb70;
            case 0x1CCB74u: goto label_1ccb74;
            case 0x1CCB78u: goto label_1ccb78;
            case 0x1CCB7Cu: goto label_1ccb7c;
            case 0x1CCB80u: goto label_1ccb80;
            case 0x1CCB84u: goto label_1ccb84;
            case 0x1CCB88u: goto label_1ccb88;
            case 0x1CCB8Cu: goto label_1ccb8c;
            case 0x1CCB90u: goto label_1ccb90;
            case 0x1CCB94u: goto label_1ccb94;
            case 0x1CCB98u: goto label_1ccb98;
            case 0x1CCB9Cu: goto label_1ccb9c;
            case 0x1CCBA0u: goto label_1ccba0;
            case 0x1CCBA4u: goto label_1ccba4;
            case 0x1CCBA8u: goto label_1ccba8;
            case 0x1CCBACu: goto label_1ccbac;
            case 0x1CCBB0u: goto label_1ccbb0;
            case 0x1CCBB4u: goto label_1ccbb4;
            case 0x1CCBB8u: goto label_1ccbb8;
            case 0x1CCBBCu: goto label_1ccbbc;
            case 0x1CCBC0u: goto label_1ccbc0;
            case 0x1CCBC4u: goto label_1ccbc4;
            case 0x1CCBC8u: goto label_1ccbc8;
            case 0x1CCBCCu: goto label_1ccbcc;
            case 0x1CCBD0u: goto label_1ccbd0;
            case 0x1CCBD4u: goto label_1ccbd4;
            case 0x1CCBD8u: goto label_1ccbd8;
            case 0x1CCBDCu: goto label_1ccbdc;
            case 0x1CCBE0u: goto label_1ccbe0;
            case 0x1CCBE4u: goto label_1ccbe4;
            case 0x1CCBE8u: goto label_1ccbe8;
            case 0x1CCBECu: goto label_1ccbec;
            case 0x1CCBF0u: goto label_1ccbf0;
            case 0x1CCBF4u: goto label_1ccbf4;
            case 0x1CCBF8u: goto label_1ccbf8;
            case 0x1CCBFCu: goto label_1ccbfc;
            case 0x1CCC00u: goto label_1ccc00;
            case 0x1CCC04u: goto label_1ccc04;
            case 0x1CCC08u: goto label_1ccc08;
            case 0x1CCC0Cu: goto label_1ccc0c;
            case 0x1CCC10u: goto label_1ccc10;
            case 0x1CCC14u: goto label_1ccc14;
            case 0x1CCC18u: goto label_1ccc18;
            case 0x1CCC1Cu: goto label_1ccc1c;
            case 0x1CCC20u: goto label_1ccc20;
            case 0x1CCC24u: goto label_1ccc24;
            case 0x1CCC28u: goto label_1ccc28;
            case 0x1CCC2Cu: goto label_1ccc2c;
            case 0x1CCC30u: goto label_1ccc30;
            case 0x1CCC34u: goto label_1ccc34;
            case 0x1CCC38u: goto label_1ccc38;
            case 0x1CCC3Cu: goto label_1ccc3c;
            case 0x1CCC40u: goto label_1ccc40;
            case 0x1CCC44u: goto label_1ccc44;
            case 0x1CCC48u: goto label_1ccc48;
            case 0x1CCC4Cu: goto label_1ccc4c;
            case 0x1CCC50u: goto label_1ccc50;
            case 0x1CCC54u: goto label_1ccc54;
            case 0x1CCC58u: goto label_1ccc58;
            case 0x1CCC5Cu: goto label_1ccc5c;
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC64u: goto label_1ccc64;
            case 0x1CCC68u: goto label_1ccc68;
            case 0x1CCC6Cu: goto label_1ccc6c;
            case 0x1CCC70u: goto label_1ccc70;
            case 0x1CCC74u: goto label_1ccc74;
            case 0x1CCC78u: goto label_1ccc78;
            case 0x1CCC7Cu: goto label_1ccc7c;
            case 0x1CCC80u: goto label_1ccc80;
            case 0x1CCC84u: goto label_1ccc84;
            case 0x1CCC88u: goto label_1ccc88;
            case 0x1CCC8Cu: goto label_1ccc8c;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCC94u: goto label_1ccc94;
            case 0x1CCC98u: goto label_1ccc98;
            case 0x1CCC9Cu: goto label_1ccc9c;
            case 0x1CCCA0u: goto label_1ccca0;
            case 0x1CCCA4u: goto label_1ccca4;
            case 0x1CCCA8u: goto label_1ccca8;
            case 0x1CCCACu: goto label_1cccac;
            case 0x1CCCB0u: goto label_1cccb0;
            case 0x1CCCB4u: goto label_1cccb4;
            case 0x1CCCB8u: goto label_1cccb8;
            case 0x1CCCBCu: goto label_1cccbc;
            case 0x1CCCC0u: goto label_1cccc0;
            case 0x1CCCC4u: goto label_1cccc4;
            case 0x1CCCC8u: goto label_1cccc8;
            case 0x1CCCCCu: goto label_1ccccc;
            case 0x1CCCD0u: goto label_1cccd0;
            case 0x1CCCD4u: goto label_1cccd4;
            case 0x1CCCD8u: goto label_1cccd8;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCCE0u: goto label_1ccce0;
            case 0x1CCCE4u: goto label_1ccce4;
            case 0x1CCCE8u: goto label_1ccce8;
            case 0x1CCCECu: goto label_1cccec;
            case 0x1CCCF0u: goto label_1cccf0;
            case 0x1CCCF4u: goto label_1cccf4;
            case 0x1CCCF8u: goto label_1cccf8;
            case 0x1CCCFCu: goto label_1cccfc;
            case 0x1CCD00u: goto label_1ccd00;
            case 0x1CCD04u: goto label_1ccd04;
            case 0x1CCD08u: goto label_1ccd08;
            case 0x1CCD0Cu: goto label_1ccd0c;
            case 0x1CCD10u: goto label_1ccd10;
            case 0x1CCD14u: goto label_1ccd14;
            case 0x1CCD18u: goto label_1ccd18;
            case 0x1CCD1Cu: goto label_1ccd1c;
            case 0x1CCD20u: goto label_1ccd20;
            case 0x1CCD24u: goto label_1ccd24;
            case 0x1CCD28u: goto label_1ccd28;
            case 0x1CCD2Cu: goto label_1ccd2c;
            case 0x1CCD30u: goto label_1ccd30;
            case 0x1CCD34u: goto label_1ccd34;
            case 0x1CCD38u: goto label_1ccd38;
            case 0x1CCD3Cu: goto label_1ccd3c;
            case 0x1CCD40u: goto label_1ccd40;
            case 0x1CCD44u: goto label_1ccd44;
            case 0x1CCD48u: goto label_1ccd48;
            case 0x1CCD4Cu: goto label_1ccd4c;
            case 0x1CCD50u: goto label_1ccd50;
            case 0x1CCD54u: goto label_1ccd54;
            case 0x1CCD58u: goto label_1ccd58;
            case 0x1CCD5Cu: goto label_1ccd5c;
            case 0x1CCD60u: goto label_1ccd60;
            case 0x1CCD64u: goto label_1ccd64;
            case 0x1CCD68u: goto label_1ccd68;
            case 0x1CCD6Cu: goto label_1ccd6c;
            case 0x1CCD70u: goto label_1ccd70;
            case 0x1CCD74u: goto label_1ccd74;
            case 0x1CCD78u: goto label_1ccd78;
            case 0x1CCD7Cu: goto label_1ccd7c;
            case 0x1CCD80u: goto label_1ccd80;
            case 0x1CCD84u: goto label_1ccd84;
            case 0x1CCD88u: goto label_1ccd88;
            case 0x1CCD8Cu: goto label_1ccd8c;
            case 0x1CCD90u: goto label_1ccd90;
            case 0x1CCD94u: goto label_1ccd94;
            case 0x1CCD98u: goto label_1ccd98;
            case 0x1CCD9Cu: goto label_1ccd9c;
            case 0x1CCDA0u: goto label_1ccda0;
            case 0x1CCDA4u: goto label_1ccda4;
            case 0x1CCDA8u: goto label_1ccda8;
            case 0x1CCDACu: goto label_1ccdac;
            case 0x1CCDB0u: goto label_1ccdb0;
            case 0x1CCDB4u: goto label_1ccdb4;
            case 0x1CCDB8u: goto label_1ccdb8;
            case 0x1CCDBCu: goto label_1ccdbc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDC8u: goto label_1ccdc8;
            case 0x1CCDCCu: goto label_1ccdcc;
            case 0x1CCDD0u: goto label_1ccdd0;
            case 0x1CCDD4u: goto label_1ccdd4;
            case 0x1CCDD8u: goto label_1ccdd8;
            case 0x1CCDDCu: goto label_1ccddc;
            case 0x1CCDE0u: goto label_1ccde0;
            case 0x1CCDE4u: goto label_1ccde4;
            case 0x1CCDE8u: goto label_1ccde8;
            case 0x1CCDECu: goto label_1ccdec;
            case 0x1CCDF0u: goto label_1ccdf0;
            case 0x1CCDF4u: goto label_1ccdf4;
            case 0x1CCDF8u: goto label_1ccdf8;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE00u: goto label_1cce00;
            case 0x1CCE04u: goto label_1cce04;
            case 0x1CCE08u: goto label_1cce08;
            case 0x1CCE0Cu: goto label_1cce0c;
            case 0x1CCE10u: goto label_1cce10;
            case 0x1CCE14u: goto label_1cce14;
            case 0x1CCE18u: goto label_1cce18;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE20u: goto label_1cce20;
            case 0x1CCE24u: goto label_1cce24;
            case 0x1CCE28u: goto label_1cce28;
            case 0x1CCE2Cu: goto label_1cce2c;
            case 0x1CCE30u: goto label_1cce30;
            case 0x1CCE34u: goto label_1cce34;
            case 0x1CCE38u: goto label_1cce38;
            case 0x1CCE3Cu: goto label_1cce3c;
            case 0x1CCE40u: goto label_1cce40;
            case 0x1CCE44u: goto label_1cce44;
            case 0x1CCE48u: goto label_1cce48;
            case 0x1CCE4Cu: goto label_1cce4c;
            case 0x1CCE50u: goto label_1cce50;
            case 0x1CCE54u: goto label_1cce54;
            case 0x1CCE58u: goto label_1cce58;
            case 0x1CCE5Cu: goto label_1cce5c;
            case 0x1CCE60u: goto label_1cce60;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE6Cu: goto label_1cce6c;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE74u: goto label_1cce74;
            case 0x1CCE78u: goto label_1cce78;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCE84u: goto label_1cce84;
            case 0x1CCE88u: goto label_1cce88;
            case 0x1CCE8Cu: goto label_1cce8c;
            case 0x1CCE90u: goto label_1cce90;
            case 0x1CCE94u: goto label_1cce94;
            case 0x1CCE98u: goto label_1cce98;
            case 0x1CCE9Cu: goto label_1cce9c;
            case 0x1CCEA0u: goto label_1ccea0;
            case 0x1CCEA4u: goto label_1ccea4;
            case 0x1CCEA8u: goto label_1ccea8;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEB4u: goto label_1cceb4;
            case 0x1CCEB8u: goto label_1cceb8;
            case 0x1CCEBCu: goto label_1ccebc;
            case 0x1CCEC0u: goto label_1ccec0;
            case 0x1CCEC4u: goto label_1ccec4;
            case 0x1CCEC8u: goto label_1ccec8;
            case 0x1CCECCu: goto label_1ccecc;
            case 0x1CCED0u: goto label_1cced0;
            case 0x1CCED4u: goto label_1cced4;
            case 0x1CCED8u: goto label_1cced8;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCEE4u: goto label_1ccee4;
            case 0x1CCEE8u: goto label_1ccee8;
            case 0x1CCEECu: goto label_1cceec;
            case 0x1CCEF0u: goto label_1ccef0;
            case 0x1CCEF4u: goto label_1ccef4;
            case 0x1CCEF8u: goto label_1ccef8;
            case 0x1CCEFCu: goto label_1ccefc;
            case 0x1CCF00u: goto label_1ccf00;
            case 0x1CCF04u: goto label_1ccf04;
            case 0x1CCF08u: goto label_1ccf08;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF10u: goto label_1ccf10;
            case 0x1CCF14u: goto label_1ccf14;
            case 0x1CCF18u: goto label_1ccf18;
            case 0x1CCF1Cu: goto label_1ccf1c;
            case 0x1CCF20u: goto label_1ccf20;
            case 0x1CCF24u: goto label_1ccf24;
            case 0x1CCF28u: goto label_1ccf28;
            case 0x1CCF2Cu: goto label_1ccf2c;
            case 0x1CCF30u: goto label_1ccf30;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF38u: goto label_1ccf38;
            case 0x1CCF3Cu: goto label_1ccf3c;
            case 0x1CCF40u: goto label_1ccf40;
            case 0x1CCF44u: goto label_1ccf44;
            case 0x1CCF48u: goto label_1ccf48;
            case 0x1CCF4Cu: goto label_1ccf4c;
            case 0x1CCF50u: goto label_1ccf50;
            case 0x1CCF54u: goto label_1ccf54;
            case 0x1CCF58u: goto label_1ccf58;
            case 0x1CCF5Cu: goto label_1ccf5c;
            case 0x1CCF60u: goto label_1ccf60;
            case 0x1CCF64u: goto label_1ccf64;
            case 0x1CCF68u: goto label_1ccf68;
            case 0x1CCF6Cu: goto label_1ccf6c;
            case 0x1CCF70u: goto label_1ccf70;
            case 0x1CCF74u: goto label_1ccf74;
            case 0x1CCF78u: goto label_1ccf78;
            case 0x1CCF7Cu: goto label_1ccf7c;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF84u: goto label_1ccf84;
            case 0x1CCF88u: goto label_1ccf88;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCF90u: goto label_1ccf90;
            case 0x1CCF94u: goto label_1ccf94;
            case 0x1CCF98u: goto label_1ccf98;
            case 0x1CCF9Cu: goto label_1ccf9c;
            case 0x1CCFA0u: goto label_1ccfa0;
            case 0x1CCFA4u: goto label_1ccfa4;
            case 0x1CCFA8u: goto label_1ccfa8;
            case 0x1CCFACu: goto label_1ccfac;
            case 0x1CCFB0u: goto label_1ccfb0;
            case 0x1CCFB4u: goto label_1ccfb4;
            case 0x1CCFB8u: goto label_1ccfb8;
            case 0x1CCFBCu: goto label_1ccfbc;
            case 0x1CCFC0u: goto label_1ccfc0;
            case 0x1CCFC4u: goto label_1ccfc4;
            case 0x1CCFC8u: goto label_1ccfc8;
            case 0x1CCFCCu: goto label_1ccfcc;
            case 0x1CCFD0u: goto label_1ccfd0;
            case 0x1CCFD4u: goto label_1ccfd4;
            case 0x1CCFD8u: goto label_1ccfd8;
            case 0x1CCFDCu: goto label_1ccfdc;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CCFE4u: goto label_1ccfe4;
            case 0x1CCFE8u: goto label_1ccfe8;
            case 0x1CCFECu: goto label_1ccfec;
            case 0x1CCFF0u: goto label_1ccff0;
            case 0x1CCFF4u: goto label_1ccff4;
            case 0x1CCFF8u: goto label_1ccff8;
            case 0x1CCFFCu: goto label_1ccffc;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            case 0x1CD008u: goto label_1cd008;
            case 0x1CD00Cu: goto label_1cd00c;
            case 0x1CD010u: goto label_1cd010;
            case 0x1CD014u: goto label_1cd014;
            case 0x1CD018u: goto label_1cd018;
            case 0x1CD01Cu: goto label_1cd01c;
            case 0x1CD020u: goto label_1cd020;
            case 0x1CD024u: goto label_1cd024;
            case 0x1CD028u: goto label_1cd028;
            case 0x1CD02Cu: goto label_1cd02c;
            case 0x1CD030u: goto label_1cd030;
            case 0x1CD034u: goto label_1cd034;
            case 0x1CD038u: goto label_1cd038;
            case 0x1CD03Cu: goto label_1cd03c;
            case 0x1CD040u: goto label_1cd040;
            case 0x1CD044u: goto label_1cd044;
            case 0x1CD048u: goto label_1cd048;
            case 0x1CD04Cu: goto label_1cd04c;
            case 0x1CD050u: goto label_1cd050;
            case 0x1CD054u: goto label_1cd054;
            case 0x1CD058u: goto label_1cd058;
            case 0x1CD05Cu: goto label_1cd05c;
            case 0x1CD060u: goto label_1cd060;
            case 0x1CD064u: goto label_1cd064;
            case 0x1CD068u: goto label_1cd068;
            case 0x1CD06Cu: goto label_1cd06c;
            case 0x1CD070u: goto label_1cd070;
            case 0x1CD074u: goto label_1cd074;
            case 0x1CD078u: goto label_1cd078;
            case 0x1CD07Cu: goto label_1cd07c;
            case 0x1CD080u: goto label_1cd080;
            case 0x1CD084u: goto label_1cd084;
            case 0x1CD088u: goto label_1cd088;
            case 0x1CD08Cu: goto label_1cd08c;
            case 0x1CD090u: goto label_1cd090;
            case 0x1CD094u: goto label_1cd094;
            case 0x1CD098u: goto label_1cd098;
            case 0x1CD09Cu: goto label_1cd09c;
            case 0x1CD0A0u: goto label_1cd0a0;
            case 0x1CD0A4u: goto label_1cd0a4;
            case 0x1CD0A8u: goto label_1cd0a8;
            case 0x1CD0ACu: goto label_1cd0ac;
            case 0x1CD0B0u: goto label_1cd0b0;
            case 0x1CD0B4u: goto label_1cd0b4;
            case 0x1CD0B8u: goto label_1cd0b8;
            case 0x1CD0BCu: goto label_1cd0bc;
            case 0x1CD0C0u: goto label_1cd0c0;
            case 0x1CD0C4u: goto label_1cd0c4;
            case 0x1CD0C8u: goto label_1cd0c8;
            case 0x1CD0CCu: goto label_1cd0cc;
            case 0x1CD0D0u: goto label_1cd0d0;
            case 0x1CD0D4u: goto label_1cd0d4;
            case 0x1CD0D8u: goto label_1cd0d8;
            case 0x1CD0DCu: goto label_1cd0dc;
            case 0x1CD0E0u: goto label_1cd0e0;
            case 0x1CD0E4u: goto label_1cd0e4;
            case 0x1CD0E8u: goto label_1cd0e8;
            case 0x1CD0ECu: goto label_1cd0ec;
            case 0x1CD0F0u: goto label_1cd0f0;
            case 0x1CD0F4u: goto label_1cd0f4;
            case 0x1CD0F8u: goto label_1cd0f8;
            case 0x1CD0FCu: goto label_1cd0fc;
            case 0x1CD100u: goto label_1cd100;
            case 0x1CD104u: goto label_1cd104;
            case 0x1CD108u: goto label_1cd108;
            case 0x1CD10Cu: goto label_1cd10c;
            case 0x1CD110u: goto label_1cd110;
            case 0x1CD114u: goto label_1cd114;
            case 0x1CD118u: goto label_1cd118;
            case 0x1CD11Cu: goto label_1cd11c;
            case 0x1CD120u: goto label_1cd120;
            case 0x1CD124u: goto label_1cd124;
            case 0x1CD128u: goto label_1cd128;
            case 0x1CD12Cu: goto label_1cd12c;
            case 0x1CD130u: goto label_1cd130;
            case 0x1CD134u: goto label_1cd134;
            case 0x1CD138u: goto label_1cd138;
            case 0x1CD13Cu: goto label_1cd13c;
            case 0x1CD140u: goto label_1cd140;
            case 0x1CD144u: goto label_1cd144;
            case 0x1CD148u: goto label_1cd148;
            case 0x1CD14Cu: goto label_1cd14c;
            case 0x1CD150u: goto label_1cd150;
            case 0x1CD154u: goto label_1cd154;
            case 0x1CD158u: goto label_1cd158;
            case 0x1CD15Cu: goto label_1cd15c;
            case 0x1CD160u: goto label_1cd160;
            case 0x1CD164u: goto label_1cd164;
            case 0x1CD168u: goto label_1cd168;
            case 0x1CD16Cu: goto label_1cd16c;
            case 0x1CD170u: goto label_1cd170;
            case 0x1CD174u: goto label_1cd174;
            case 0x1CD178u: goto label_1cd178;
            case 0x1CD17Cu: goto label_1cd17c;
            case 0x1CD180u: goto label_1cd180;
            case 0x1CD184u: goto label_1cd184;
            case 0x1CD188u: goto label_1cd188;
            case 0x1CD18Cu: goto label_1cd18c;
            case 0x1CD190u: goto label_1cd190;
            case 0x1CD194u: goto label_1cd194;
            case 0x1CD198u: goto label_1cd198;
            case 0x1CD19Cu: goto label_1cd19c;
            case 0x1CD1A0u: goto label_1cd1a0;
            case 0x1CD1A4u: goto label_1cd1a4;
            case 0x1CD1A8u: goto label_1cd1a8;
            case 0x1CD1ACu: goto label_1cd1ac;
            case 0x1CD1B0u: goto label_1cd1b0;
            case 0x1CD1B4u: goto label_1cd1b4;
            case 0x1CD1B8u: goto label_1cd1b8;
            case 0x1CD1BCu: goto label_1cd1bc;
            case 0x1CD1C0u: goto label_1cd1c0;
            case 0x1CD1C4u: goto label_1cd1c4;
            case 0x1CD1C8u: goto label_1cd1c8;
            case 0x1CD1CCu: goto label_1cd1cc;
            case 0x1CD1D0u: goto label_1cd1d0;
            case 0x1CD1D4u: goto label_1cd1d4;
            case 0x1CD1D8u: goto label_1cd1d8;
            case 0x1CD1DCu: goto label_1cd1dc;
            case 0x1CD1E0u: goto label_1cd1e0;
            case 0x1CD1E4u: goto label_1cd1e4;
            case 0x1CD1E8u: goto label_1cd1e8;
            case 0x1CD1ECu: goto label_1cd1ec;
            case 0x1CD1F0u: goto label_1cd1f0;
            case 0x1CD1F4u: goto label_1cd1f4;
            case 0x1CD1F8u: goto label_1cd1f8;
            case 0x1CD1FCu: goto label_1cd1fc;
            case 0x1CD200u: goto label_1cd200;
            case 0x1CD204u: goto label_1cd204;
            case 0x1CD208u: goto label_1cd208;
            case 0x1CD20Cu: goto label_1cd20c;
            case 0x1CD210u: goto label_1cd210;
            case 0x1CD214u: goto label_1cd214;
            case 0x1CD218u: goto label_1cd218;
            case 0x1CD21Cu: goto label_1cd21c;
            case 0x1CD220u: goto label_1cd220;
            case 0x1CD224u: goto label_1cd224;
            case 0x1CD228u: goto label_1cd228;
            case 0x1CD22Cu: goto label_1cd22c;
            case 0x1CD230u: goto label_1cd230;
            case 0x1CD234u: goto label_1cd234;
            case 0x1CD238u: goto label_1cd238;
            case 0x1CD23Cu: goto label_1cd23c;
            case 0x1CD240u: goto label_1cd240;
            case 0x1CD244u: goto label_1cd244;
            case 0x1CD248u: goto label_1cd248;
            case 0x1CD24Cu: goto label_1cd24c;
            case 0x1CD250u: goto label_1cd250;
            case 0x1CD254u: goto label_1cd254;
            case 0x1CD258u: goto label_1cd258;
            case 0x1CD25Cu: goto label_1cd25c;
            case 0x1CD260u: goto label_1cd260;
            case 0x1CD264u: goto label_1cd264;
            case 0x1CD268u: goto label_1cd268;
            case 0x1CD26Cu: goto label_1cd26c;
            case 0x1CD270u: goto label_1cd270;
            case 0x1CD274u: goto label_1cd274;
            case 0x1CD278u: goto label_1cd278;
            case 0x1CD27Cu: goto label_1cd27c;
            case 0x1CD280u: goto label_1cd280;
            case 0x1CD284u: goto label_1cd284;
            case 0x1CD288u: goto label_1cd288;
            case 0x1CD28Cu: goto label_1cd28c;
            case 0x1CD290u: goto label_1cd290;
            case 0x1CD294u: goto label_1cd294;
            case 0x1CD298u: goto label_1cd298;
            case 0x1CD29Cu: goto label_1cd29c;
            case 0x1CD2A0u: goto label_1cd2a0;
            case 0x1CD2A4u: goto label_1cd2a4;
            case 0x1CD2A8u: goto label_1cd2a8;
            case 0x1CD2ACu: goto label_1cd2ac;
            case 0x1CD2B0u: goto label_1cd2b0;
            case 0x1CD2B4u: goto label_1cd2b4;
            case 0x1CD2B8u: goto label_1cd2b8;
            case 0x1CD2BCu: goto label_1cd2bc;
            case 0x1CD2C0u: goto label_1cd2c0;
            case 0x1CD2C4u: goto label_1cd2c4;
            case 0x1CD2C8u: goto label_1cd2c8;
            case 0x1CD2CCu: goto label_1cd2cc;
            case 0x1CD2D0u: goto label_1cd2d0;
            case 0x1CD2D4u: goto label_1cd2d4;
            case 0x1CD2D8u: goto label_1cd2d8;
            case 0x1CD2DCu: goto label_1cd2dc;
            case 0x1CD2E0u: goto label_1cd2e0;
            case 0x1CD2E4u: goto label_1cd2e4;
            case 0x1CD2E8u: goto label_1cd2e8;
            case 0x1CD2ECu: goto label_1cd2ec;
            case 0x1CD2F0u: goto label_1cd2f0;
            case 0x1CD2F4u: goto label_1cd2f4;
            case 0x1CD2F8u: goto label_1cd2f8;
            case 0x1CD2FCu: goto label_1cd2fc;
            case 0x1CD300u: goto label_1cd300;
            case 0x1CD304u: goto label_1cd304;
            case 0x1CD308u: goto label_1cd308;
            case 0x1CD30Cu: goto label_1cd30c;
            case 0x1CD310u: goto label_1cd310;
            case 0x1CD314u: goto label_1cd314;
            case 0x1CD318u: goto label_1cd318;
            case 0x1CD31Cu: goto label_1cd31c;
            case 0x1CD320u: goto label_1cd320;
            case 0x1CD324u: goto label_1cd324;
            case 0x1CD328u: goto label_1cd328;
            case 0x1CD32Cu: goto label_1cd32c;
            case 0x1CD330u: goto label_1cd330;
            case 0x1CD334u: goto label_1cd334;
            case 0x1CD338u: goto label_1cd338;
            case 0x1CD33Cu: goto label_1cd33c;
            case 0x1CD340u: goto label_1cd340;
            case 0x1CD344u: goto label_1cd344;
            case 0x1CD348u: goto label_1cd348;
            case 0x1CD34Cu: goto label_1cd34c;
            case 0x1CD350u: goto label_1cd350;
            case 0x1CD354u: goto label_1cd354;
            case 0x1CD358u: goto label_1cd358;
            case 0x1CD35Cu: goto label_1cd35c;
            case 0x1CD360u: goto label_1cd360;
            case 0x1CD364u: goto label_1cd364;
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD36Cu: goto label_1cd36c;
            case 0x1CD370u: goto label_1cd370;
            case 0x1CD374u: goto label_1cd374;
            case 0x1CD378u: goto label_1cd378;
            case 0x1CD37Cu: goto label_1cd37c;
            case 0x1CD380u: goto label_1cd380;
            case 0x1CD384u: goto label_1cd384;
            case 0x1CD388u: goto label_1cd388;
            case 0x1CD38Cu: goto label_1cd38c;
            case 0x1CD390u: goto label_1cd390;
            case 0x1CD394u: goto label_1cd394;
            case 0x1CD398u: goto label_1cd398;
            case 0x1CD39Cu: goto label_1cd39c;
            case 0x1CD3A0u: goto label_1cd3a0;
            case 0x1CD3A4u: goto label_1cd3a4;
            case 0x1CD3A8u: goto label_1cd3a8;
            case 0x1CD3ACu: goto label_1cd3ac;
            case 0x1CD3B0u: goto label_1cd3b0;
            case 0x1CD3B4u: goto label_1cd3b4;
            case 0x1CD3B8u: goto label_1cd3b8;
            case 0x1CD3BCu: goto label_1cd3bc;
            case 0x1CD3C0u: goto label_1cd3c0;
            case 0x1CD3C4u: goto label_1cd3c4;
            case 0x1CD3C8u: goto label_1cd3c8;
            case 0x1CD3CCu: goto label_1cd3cc;
            case 0x1CD3D0u: goto label_1cd3d0;
            case 0x1CD3D4u: goto label_1cd3d4;
            case 0x1CD3D8u: goto label_1cd3d8;
            case 0x1CD3DCu: goto label_1cd3dc;
            case 0x1CD3E0u: goto label_1cd3e0;
            case 0x1CD3E4u: goto label_1cd3e4;
            case 0x1CD3E8u: goto label_1cd3e8;
            case 0x1CD3ECu: goto label_1cd3ec;
            case 0x1CD3F0u: goto label_1cd3f0;
            case 0x1CD3F4u: goto label_1cd3f4;
            case 0x1CD3F8u: goto label_1cd3f8;
            case 0x1CD3FCu: goto label_1cd3fc;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD404u: goto label_1cd404;
            case 0x1CD408u: goto label_1cd408;
            case 0x1CD40Cu: goto label_1cd40c;
            case 0x1CD410u: goto label_1cd410;
            case 0x1CD414u: goto label_1cd414;
            case 0x1CD418u: goto label_1cd418;
            case 0x1CD41Cu: goto label_1cd41c;
            case 0x1CD420u: goto label_1cd420;
            case 0x1CD424u: goto label_1cd424;
            case 0x1CD428u: goto label_1cd428;
            case 0x1CD42Cu: goto label_1cd42c;
            case 0x1CD430u: goto label_1cd430;
            case 0x1CD434u: goto label_1cd434;
            case 0x1CD438u: goto label_1cd438;
            case 0x1CD43Cu: goto label_1cd43c;
            case 0x1CD440u: goto label_1cd440;
            case 0x1CD444u: goto label_1cd444;
            case 0x1CD448u: goto label_1cd448;
            case 0x1CD44Cu: goto label_1cd44c;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD458u: goto label_1cd458;
            case 0x1CD45Cu: goto label_1cd45c;
            case 0x1CD460u: goto label_1cd460;
            case 0x1CD464u: goto label_1cd464;
            case 0x1CD468u: goto label_1cd468;
            case 0x1CD46Cu: goto label_1cd46c;
            case 0x1CD470u: goto label_1cd470;
            case 0x1CD474u: goto label_1cd474;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD47Cu: goto label_1cd47c;
            case 0x1CD480u: goto label_1cd480;
            case 0x1CD484u: goto label_1cd484;
            case 0x1CD488u: goto label_1cd488;
            case 0x1CD48Cu: goto label_1cd48c;
            case 0x1CD490u: goto label_1cd490;
            case 0x1CD494u: goto label_1cd494;
            case 0x1CD498u: goto label_1cd498;
            case 0x1CD49Cu: goto label_1cd49c;
            case 0x1CD4A0u: goto label_1cd4a0;
            case 0x1CD4A4u: goto label_1cd4a4;
            case 0x1CD4A8u: goto label_1cd4a8;
            case 0x1CD4ACu: goto label_1cd4ac;
            case 0x1CD4B0u: goto label_1cd4b0;
            case 0x1CD4B4u: goto label_1cd4b4;
            case 0x1CD4B8u: goto label_1cd4b8;
            case 0x1CD4BCu: goto label_1cd4bc;
            case 0x1CD4C0u: goto label_1cd4c0;
            case 0x1CD4C4u: goto label_1cd4c4;
            case 0x1CD4C8u: goto label_1cd4c8;
            case 0x1CD4CCu: goto label_1cd4cc;
            case 0x1CD4D0u: goto label_1cd4d0;
            case 0x1CD4D4u: goto label_1cd4d4;
            case 0x1CD4D8u: goto label_1cd4d8;
            case 0x1CD4DCu: goto label_1cd4dc;
            case 0x1CD4E0u: goto label_1cd4e0;
            case 0x1CD4E4u: goto label_1cd4e4;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD4ECu: goto label_1cd4ec;
            case 0x1CD4F0u: goto label_1cd4f0;
            case 0x1CD4F4u: goto label_1cd4f4;
            case 0x1CD4F8u: goto label_1cd4f8;
            case 0x1CD4FCu: goto label_1cd4fc;
            case 0x1CD500u: goto label_1cd500;
            case 0x1CD504u: goto label_1cd504;
            case 0x1CD508u: goto label_1cd508;
            case 0x1CD50Cu: goto label_1cd50c;
            case 0x1CD510u: goto label_1cd510;
            case 0x1CD514u: goto label_1cd514;
            case 0x1CD518u: goto label_1cd518;
            case 0x1CD51Cu: goto label_1cd51c;
            case 0x1CD520u: goto label_1cd520;
            case 0x1CD524u: goto label_1cd524;
            case 0x1CD528u: goto label_1cd528;
            case 0x1CD52Cu: goto label_1cd52c;
            case 0x1CD530u: goto label_1cd530;
            case 0x1CD534u: goto label_1cd534;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD53Cu: goto label_1cd53c;
            case 0x1CD540u: goto label_1cd540;
            case 0x1CD544u: goto label_1cd544;
            case 0x1CD548u: goto label_1cd548;
            case 0x1CD54Cu: goto label_1cd54c;
            case 0x1CD550u: goto label_1cd550;
            case 0x1CD554u: goto label_1cd554;
            case 0x1CD558u: goto label_1cd558;
            case 0x1CD55Cu: goto label_1cd55c;
            case 0x1CD560u: goto label_1cd560;
            case 0x1CD564u: goto label_1cd564;
            case 0x1CD568u: goto label_1cd568;
            case 0x1CD56Cu: goto label_1cd56c;
            case 0x1CD570u: goto label_1cd570;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD578u: goto label_1cd578;
            case 0x1CD57Cu: goto label_1cd57c;
            case 0x1CD580u: goto label_1cd580;
            case 0x1CD584u: goto label_1cd584;
            case 0x1CD588u: goto label_1cd588;
            case 0x1CD58Cu: goto label_1cd58c;
            case 0x1CD590u: goto label_1cd590;
            case 0x1CD594u: goto label_1cd594;
            case 0x1CD598u: goto label_1cd598;
            case 0x1CD59Cu: goto label_1cd59c;
            case 0x1CD5A0u: goto label_1cd5a0;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5ACu: goto label_1cd5ac;
            case 0x1CD5B0u: goto label_1cd5b0;
            case 0x1CD5B4u: goto label_1cd5b4;
            case 0x1CD5B8u: goto label_1cd5b8;
            case 0x1CD5BCu: goto label_1cd5bc;
            case 0x1CD5C0u: goto label_1cd5c0;
            case 0x1CD5C4u: goto label_1cd5c4;
            case 0x1CD5C8u: goto label_1cd5c8;
            case 0x1CD5CCu: goto label_1cd5cc;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5D8u: goto label_1cd5d8;
            case 0x1CD5DCu: goto label_1cd5dc;
            case 0x1CD5E0u: goto label_1cd5e0;
            case 0x1CD5E4u: goto label_1cd5e4;
            case 0x1CD5E8u: goto label_1cd5e8;
            case 0x1CD5ECu: goto label_1cd5ec;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD5F4u: goto label_1cd5f4;
            case 0x1CD5F8u: goto label_1cd5f8;
            case 0x1CD5FCu: goto label_1cd5fc;
            case 0x1CD600u: goto label_1cd600;
            case 0x1CD604u: goto label_1cd604;
            case 0x1CD608u: goto label_1cd608;
            case 0x1CD60Cu: goto label_1cd60c;
            case 0x1CD610u: goto label_1cd610;
            case 0x1CD614u: goto label_1cd614;
            case 0x1CD618u: goto label_1cd618;
            case 0x1CD61Cu: goto label_1cd61c;
            case 0x1CD620u: goto label_1cd620;
            case 0x1CD624u: goto label_1cd624;
            case 0x1CD628u: goto label_1cd628;
            case 0x1CD62Cu: goto label_1cd62c;
            case 0x1CD630u: goto label_1cd630;
            case 0x1CD634u: goto label_1cd634;
            case 0x1CD638u: goto label_1cd638;
            case 0x1CD63Cu: goto label_1cd63c;
            case 0x1CD640u: goto label_1cd640;
            case 0x1CD644u: goto label_1cd644;
            case 0x1CD648u: goto label_1cd648;
            case 0x1CD64Cu: goto label_1cd64c;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            case 0x1CD65Cu: goto label_1cd65c;
            case 0x1CD660u: goto label_1cd660;
            case 0x1CD664u: goto label_1cd664;
            case 0x1CD668u: goto label_1cd668;
            case 0x1CD66Cu: goto label_1cd66c;
            case 0x1CD670u: goto label_1cd670;
            case 0x1CD674u: goto label_1cd674;
            case 0x1CD678u: goto label_1cd678;
            case 0x1CD67Cu: goto label_1cd67c;
            case 0x1CD680u: goto label_1cd680;
            case 0x1CD684u: goto label_1cd684;
            case 0x1CD688u: goto label_1cd688;
            case 0x1CD68Cu: goto label_1cd68c;
            case 0x1CD690u: goto label_1cd690;
            case 0x1CD694u: goto label_1cd694;
            case 0x1CD698u: goto label_1cd698;
            case 0x1CD69Cu: goto label_1cd69c;
            case 0x1CD6A0u: goto label_1cd6a0;
            case 0x1CD6A4u: goto label_1cd6a4;
            case 0x1CD6A8u: goto label_1cd6a8;
            case 0x1CD6ACu: goto label_1cd6ac;
            case 0x1CD6B0u: goto label_1cd6b0;
            case 0x1CD6B4u: goto label_1cd6b4;
            case 0x1CD6B8u: goto label_1cd6b8;
            case 0x1CD6BCu: goto label_1cd6bc;
            case 0x1CD6C0u: goto label_1cd6c0;
            case 0x1CD6C4u: goto label_1cd6c4;
            case 0x1CD6C8u: goto label_1cd6c8;
            case 0x1CD6CCu: goto label_1cd6cc;
            case 0x1CD6D0u: goto label_1cd6d0;
            case 0x1CD6D4u: goto label_1cd6d4;
            case 0x1CD6D8u: goto label_1cd6d8;
            case 0x1CD6DCu: goto label_1cd6dc;
            case 0x1CD6E0u: goto label_1cd6e0;
            case 0x1CD6E4u: goto label_1cd6e4;
            case 0x1CD6E8u: goto label_1cd6e8;
            case 0x1CD6ECu: goto label_1cd6ec;
            case 0x1CD6F0u: goto label_1cd6f0;
            case 0x1CD6F4u: goto label_1cd6f4;
            case 0x1CD6F8u: goto label_1cd6f8;
            case 0x1CD6FCu: goto label_1cd6fc;
            case 0x1CD700u: goto label_1cd700;
            case 0x1CD704u: goto label_1cd704;
            case 0x1CD708u: goto label_1cd708;
            case 0x1CD70Cu: goto label_1cd70c;
            case 0x1CD710u: goto label_1cd710;
            case 0x1CD714u: goto label_1cd714;
            case 0x1CD718u: goto label_1cd718;
            case 0x1CD71Cu: goto label_1cd71c;
            case 0x1CD720u: goto label_1cd720;
            case 0x1CD724u: goto label_1cd724;
            case 0x1CD728u: goto label_1cd728;
            case 0x1CD72Cu: goto label_1cd72c;
            case 0x1CD730u: goto label_1cd730;
            case 0x1CD734u: goto label_1cd734;
            case 0x1CD738u: goto label_1cd738;
            case 0x1CD73Cu: goto label_1cd73c;
            case 0x1CD740u: goto label_1cd740;
            case 0x1CD744u: goto label_1cd744;
            case 0x1CD748u: goto label_1cd748;
            case 0x1CD74Cu: goto label_1cd74c;
            case 0x1CD750u: goto label_1cd750;
            case 0x1CD754u: goto label_1cd754;
            case 0x1CD758u: goto label_1cd758;
            case 0x1CD75Cu: goto label_1cd75c;
            case 0x1CD760u: goto label_1cd760;
            case 0x1CD764u: goto label_1cd764;
            case 0x1CD768u: goto label_1cd768;
            case 0x1CD76Cu: goto label_1cd76c;
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD774u: goto label_1cd774;
            case 0x1CD778u: goto label_1cd778;
            case 0x1CD77Cu: goto label_1cd77c;
            case 0x1CD780u: goto label_1cd780;
            case 0x1CD784u: goto label_1cd784;
            case 0x1CD788u: goto label_1cd788;
            case 0x1CD78Cu: goto label_1cd78c;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD794u: goto label_1cd794;
            case 0x1CD798u: goto label_1cd798;
            case 0x1CD79Cu: goto label_1cd79c;
            case 0x1CD7A0u: goto label_1cd7a0;
            case 0x1CD7A4u: goto label_1cd7a4;
            case 0x1CD7A8u: goto label_1cd7a8;
            case 0x1CD7ACu: goto label_1cd7ac;
            case 0x1CD7B0u: goto label_1cd7b0;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7B8u: goto label_1cd7b8;
            case 0x1CD7BCu: goto label_1cd7bc;
            case 0x1CD7C0u: goto label_1cd7c0;
            case 0x1CD7C4u: goto label_1cd7c4;
            case 0x1CD7C8u: goto label_1cd7c8;
            case 0x1CD7CCu: goto label_1cd7cc;
            case 0x1CD7D0u: goto label_1cd7d0;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD7D8u: goto label_1cd7d8;
            case 0x1CD7DCu: goto label_1cd7dc;
            case 0x1CD7E0u: goto label_1cd7e0;
            case 0x1CD7E4u: goto label_1cd7e4;
            case 0x1CD7E8u: goto label_1cd7e8;
            case 0x1CD7ECu: goto label_1cd7ec;
            case 0x1CD7F0u: goto label_1cd7f0;
            case 0x1CD7F4u: goto label_1cd7f4;
            case 0x1CD7F8u: goto label_1cd7f8;
            case 0x1CD7FCu: goto label_1cd7fc;
            case 0x1CD800u: goto label_1cd800;
            case 0x1CD804u: goto label_1cd804;
            case 0x1CD808u: goto label_1cd808;
            case 0x1CD80Cu: goto label_1cd80c;
            case 0x1CD810u: goto label_1cd810;
            case 0x1CD814u: goto label_1cd814;
            case 0x1CD818u: goto label_1cd818;
            case 0x1CD81Cu: goto label_1cd81c;
            case 0x1CD820u: goto label_1cd820;
            case 0x1CD824u: goto label_1cd824;
            case 0x1CD828u: goto label_1cd828;
            case 0x1CD82Cu: goto label_1cd82c;
            case 0x1CD830u: goto label_1cd830;
            case 0x1CD834u: goto label_1cd834;
            case 0x1CD838u: goto label_1cd838;
            case 0x1CD83Cu: goto label_1cd83c;
            case 0x1CD840u: goto label_1cd840;
            case 0x1CD844u: goto label_1cd844;
            case 0x1CD848u: goto label_1cd848;
            case 0x1CD84Cu: goto label_1cd84c;
            case 0x1CD850u: goto label_1cd850;
            case 0x1CD854u: goto label_1cd854;
            case 0x1CD858u: goto label_1cd858;
            case 0x1CD85Cu: goto label_1cd85c;
            case 0x1CD860u: goto label_1cd860;
            case 0x1CD864u: goto label_1cd864;
            case 0x1CD868u: goto label_1cd868;
            case 0x1CD86Cu: goto label_1cd86c;
            case 0x1CD870u: goto label_1cd870;
            case 0x1CD874u: goto label_1cd874;
            case 0x1CD878u: goto label_1cd878;
            case 0x1CD87Cu: goto label_1cd87c;
            case 0x1CD880u: goto label_1cd880;
            case 0x1CD884u: goto label_1cd884;
            case 0x1CD888u: goto label_1cd888;
            case 0x1CD88Cu: goto label_1cd88c;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD894u: goto label_1cd894;
            case 0x1CD898u: goto label_1cd898;
            case 0x1CD89Cu: goto label_1cd89c;
            case 0x1CD8A0u: goto label_1cd8a0;
            case 0x1CD8A4u: goto label_1cd8a4;
            case 0x1CD8A8u: goto label_1cd8a8;
            case 0x1CD8ACu: goto label_1cd8ac;
            case 0x1CD8B0u: goto label_1cd8b0;
            case 0x1CD8B4u: goto label_1cd8b4;
            case 0x1CD8B8u: goto label_1cd8b8;
            case 0x1CD8BCu: goto label_1cd8bc;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8C8u: goto label_1cd8c8;
            case 0x1CD8CCu: goto label_1cd8cc;
            case 0x1CD8D0u: goto label_1cd8d0;
            case 0x1CD8D4u: goto label_1cd8d4;
            case 0x1CD8D8u: goto label_1cd8d8;
            case 0x1CD8DCu: goto label_1cd8dc;
            case 0x1CD8E0u: goto label_1cd8e0;
            case 0x1CD8E4u: goto label_1cd8e4;
            case 0x1CD8E8u: goto label_1cd8e8;
            case 0x1CD8ECu: goto label_1cd8ec;
            case 0x1CD8F0u: goto label_1cd8f0;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD8F8u: goto label_1cd8f8;
            case 0x1CD8FCu: goto label_1cd8fc;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD904u: goto label_1cd904;
            case 0x1CD908u: goto label_1cd908;
            case 0x1CD90Cu: goto label_1cd90c;
            case 0x1CD910u: goto label_1cd910;
            case 0x1CD914u: goto label_1cd914;
            case 0x1CD918u: goto label_1cd918;
            case 0x1CD91Cu: goto label_1cd91c;
            case 0x1CD920u: goto label_1cd920;
            case 0x1CD924u: goto label_1cd924;
            case 0x1CD928u: goto label_1cd928;
            case 0x1CD92Cu: goto label_1cd92c;
            case 0x1CD930u: goto label_1cd930;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD938u: goto label_1cd938;
            case 0x1CD93Cu: goto label_1cd93c;
            case 0x1CD940u: goto label_1cd940;
            case 0x1CD944u: goto label_1cd944;
            case 0x1CD948u: goto label_1cd948;
            case 0x1CD94Cu: goto label_1cd94c;
            case 0x1CD950u: goto label_1cd950;
            case 0x1CD954u: goto label_1cd954;
            case 0x1CD958u: goto label_1cd958;
            case 0x1CD95Cu: goto label_1cd95c;
            case 0x1CD960u: goto label_1cd960;
            case 0x1CD964u: goto label_1cd964;
            case 0x1CD968u: goto label_1cd968;
            case 0x1CD96Cu: goto label_1cd96c;
            case 0x1CD970u: goto label_1cd970;
            case 0x1CD974u: goto label_1cd974;
            case 0x1CD978u: goto label_1cd978;
            case 0x1CD97Cu: goto label_1cd97c;
            case 0x1CD980u: goto label_1cd980;
            case 0x1CD984u: goto label_1cd984;
            case 0x1CD988u: goto label_1cd988;
            case 0x1CD98Cu: goto label_1cd98c;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD994u: goto label_1cd994;
            case 0x1CD998u: goto label_1cd998;
            case 0x1CD99Cu: goto label_1cd99c;
            case 0x1CD9A0u: goto label_1cd9a0;
            case 0x1CD9A4u: goto label_1cd9a4;
            case 0x1CD9A8u: goto label_1cd9a8;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9B0u: goto label_1cd9b0;
            case 0x1CD9B4u: goto label_1cd9b4;
            case 0x1CD9B8u: goto label_1cd9b8;
            case 0x1CD9BCu: goto label_1cd9bc;
            case 0x1CD9C0u: goto label_1cd9c0;
            case 0x1CD9C4u: goto label_1cd9c4;
            case 0x1CD9C8u: goto label_1cd9c8;
            case 0x1CD9CCu: goto label_1cd9cc;
            case 0x1CD9D0u: goto label_1cd9d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD98Cu; }
            if (ctx->pc != 0x1CD98Cu) { return; }
        }
    }
    ctx->pc = 0x1CD98Cu;
label_1cd98c:
    // 0x1cd98c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1cd990:
    if (ctx->pc == 0x1CD990u) {
        ctx->pc = 0x1CD994u;
        goto label_1cd994;
    }
    ctx->pc = 0x1CD98Cu;
    {
        const bool branch_taken_0x1cd98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd98c) {
            ctx->pc = 0x1CD9B8u;
            goto label_1cd9b8;
        }
    }
    ctx->pc = 0x1CD994u;
label_1cd994:
    // 0x1cd994: 0x0  nop
    ctx->pc = 0x1cd994u;
    // NOP
label_1cd998:
    // 0x1cd998: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cd998u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
label_1cd99c:
    // 0x1cd99c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cd9a0:
    // 0x1cd9a0: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1cd9a4:
    // 0x1cd9a4: 0x24c6c4a0  addiu       $a2, $a2, -0x3B60
    ctx->pc = 0x1cd9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952096));
label_1cd9a8:
    // 0x1cd9a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cd9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cd9ac:
    // 0x1cd9ac: 0xc053ca4  jal         func_14F290
label_1cd9b0:
    if (ctx->pc == 0x1CD9B0u) {
        ctx->pc = 0x1CD9B0u;
            // 0x1cd9b0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9B4u;
        goto label_1cd9b4;
    }
    ctx->pc = 0x1CD9ACu;
    SET_GPR_U32(ctx, 31, 0x1CD9B4u);
    ctx->pc = 0x1CD9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9ACu;
            // 0x1cd9b0: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9B4u; }
        if (ctx->pc != 0x1CD9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9B4u; }
        if (ctx->pc != 0x1CD9B4u) { return; }
    }
    ctx->pc = 0x1CD9B4u;
label_1cd9b4:
    // 0x1cd9b4: 0x0  nop
    ctx->pc = 0x1cd9b4u;
    // NOP
label_1cd9b8:
    // 0x1cd9b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cd9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd9bc:
    // 0x1cd9bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cd9bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd9c0:
    // 0x1cd9c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cd9c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd9c4:
    // 0x1cd9c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd9c8:
    // 0x1cd9c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cd9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd9cc:
    // 0x1cd9cc: 0x3e00008  jr          $ra
label_1cd9d0:
    if (ctx->pc == 0x1CD9D0u) {
        ctx->pc = 0x1CD9D0u;
            // 0x1cd9d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1CD9D4u;
        goto label_fallthrough_0x1cd9cc;
    }
    ctx->pc = 0x1CD9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9CCu;
            // 0x1cd9d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC790u: goto label_1cc790;
            case 0x1CC794u: goto label_1cc794;
            case 0x1CC798u: goto label_1cc798;
            case 0x1CC79Cu: goto label_1cc79c;
            case 0x1CC7A0u: goto label_1cc7a0;
            case 0x1CC7A4u: goto label_1cc7a4;
            case 0x1CC7A8u: goto label_1cc7a8;
            case 0x1CC7ACu: goto label_1cc7ac;
            case 0x1CC7B0u: goto label_1cc7b0;
            case 0x1CC7B4u: goto label_1cc7b4;
            case 0x1CC7B8u: goto label_1cc7b8;
            case 0x1CC7BCu: goto label_1cc7bc;
            case 0x1CC7C0u: goto label_1cc7c0;
            case 0x1CC7C4u: goto label_1cc7c4;
            case 0x1CC7C8u: goto label_1cc7c8;
            case 0x1CC7CCu: goto label_1cc7cc;
            case 0x1CC7D0u: goto label_1cc7d0;
            case 0x1CC7D4u: goto label_1cc7d4;
            case 0x1CC7D8u: goto label_1cc7d8;
            case 0x1CC7DCu: goto label_1cc7dc;
            case 0x1CC7E0u: goto label_1cc7e0;
            case 0x1CC7E4u: goto label_1cc7e4;
            case 0x1CC7E8u: goto label_1cc7e8;
            case 0x1CC7ECu: goto label_1cc7ec;
            case 0x1CC7F0u: goto label_1cc7f0;
            case 0x1CC7F4u: goto label_1cc7f4;
            case 0x1CC7F8u: goto label_1cc7f8;
            case 0x1CC7FCu: goto label_1cc7fc;
            case 0x1CC800u: goto label_1cc800;
            case 0x1CC804u: goto label_1cc804;
            case 0x1CC808u: goto label_1cc808;
            case 0x1CC80Cu: goto label_1cc80c;
            case 0x1CC810u: goto label_1cc810;
            case 0x1CC814u: goto label_1cc814;
            case 0x1CC818u: goto label_1cc818;
            case 0x1CC81Cu: goto label_1cc81c;
            case 0x1CC820u: goto label_1cc820;
            case 0x1CC824u: goto label_1cc824;
            case 0x1CC828u: goto label_1cc828;
            case 0x1CC82Cu: goto label_1cc82c;
            case 0x1CC830u: goto label_1cc830;
            case 0x1CC834u: goto label_1cc834;
            case 0x1CC838u: goto label_1cc838;
            case 0x1CC83Cu: goto label_1cc83c;
            case 0x1CC840u: goto label_1cc840;
            case 0x1CC844u: goto label_1cc844;
            case 0x1CC848u: goto label_1cc848;
            case 0x1CC84Cu: goto label_1cc84c;
            case 0x1CC850u: goto label_1cc850;
            case 0x1CC854u: goto label_1cc854;
            case 0x1CC858u: goto label_1cc858;
            case 0x1CC85Cu: goto label_1cc85c;
            case 0x1CC860u: goto label_1cc860;
            case 0x1CC864u: goto label_1cc864;
            case 0x1CC868u: goto label_1cc868;
            case 0x1CC86Cu: goto label_1cc86c;
            case 0x1CC870u: goto label_1cc870;
            case 0x1CC874u: goto label_1cc874;
            case 0x1CC878u: goto label_1cc878;
            case 0x1CC87Cu: goto label_1cc87c;
            case 0x1CC880u: goto label_1cc880;
            case 0x1CC884u: goto label_1cc884;
            case 0x1CC888u: goto label_1cc888;
            case 0x1CC88Cu: goto label_1cc88c;
            case 0x1CC890u: goto label_1cc890;
            case 0x1CC894u: goto label_1cc894;
            case 0x1CC898u: goto label_1cc898;
            case 0x1CC89Cu: goto label_1cc89c;
            case 0x1CC8A0u: goto label_1cc8a0;
            case 0x1CC8A4u: goto label_1cc8a4;
            case 0x1CC8A8u: goto label_1cc8a8;
            case 0x1CC8ACu: goto label_1cc8ac;
            case 0x1CC8B0u: goto label_1cc8b0;
            case 0x1CC8B4u: goto label_1cc8b4;
            case 0x1CC8B8u: goto label_1cc8b8;
            case 0x1CC8BCu: goto label_1cc8bc;
            case 0x1CC8C0u: goto label_1cc8c0;
            case 0x1CC8C4u: goto label_1cc8c4;
            case 0x1CC8C8u: goto label_1cc8c8;
            case 0x1CC8CCu: goto label_1cc8cc;
            case 0x1CC8D0u: goto label_1cc8d0;
            case 0x1CC8D4u: goto label_1cc8d4;
            case 0x1CC8D8u: goto label_1cc8d8;
            case 0x1CC8DCu: goto label_1cc8dc;
            case 0x1CC8E0u: goto label_1cc8e0;
            case 0x1CC8E4u: goto label_1cc8e4;
            case 0x1CC8E8u: goto label_1cc8e8;
            case 0x1CC8ECu: goto label_1cc8ec;
            case 0x1CC8F0u: goto label_1cc8f0;
            case 0x1CC8F4u: goto label_1cc8f4;
            case 0x1CC8F8u: goto label_1cc8f8;
            case 0x1CC8FCu: goto label_1cc8fc;
            case 0x1CC900u: goto label_1cc900;
            case 0x1CC904u: goto label_1cc904;
            case 0x1CC908u: goto label_1cc908;
            case 0x1CC90Cu: goto label_1cc90c;
            case 0x1CC910u: goto label_1cc910;
            case 0x1CC914u: goto label_1cc914;
            case 0x1CC918u: goto label_1cc918;
            case 0x1CC91Cu: goto label_1cc91c;
            case 0x1CC920u: goto label_1cc920;
            case 0x1CC924u: goto label_1cc924;
            case 0x1CC928u: goto label_1cc928;
            case 0x1CC92Cu: goto label_1cc92c;
            case 0x1CC930u: goto label_1cc930;
            case 0x1CC934u: goto label_1cc934;
            case 0x1CC938u: goto label_1cc938;
            case 0x1CC93Cu: goto label_1cc93c;
            case 0x1CC940u: goto label_1cc940;
            case 0x1CC944u: goto label_1cc944;
            case 0x1CC948u: goto label_1cc948;
            case 0x1CC94Cu: goto label_1cc94c;
            case 0x1CC950u: goto label_1cc950;
            case 0x1CC954u: goto label_1cc954;
            case 0x1CC958u: goto label_1cc958;
            case 0x1CC95Cu: goto label_1cc95c;
            case 0x1CC960u: goto label_1cc960;
            case 0x1CC964u: goto label_1cc964;
            case 0x1CC968u: goto label_1cc968;
            case 0x1CC96Cu: goto label_1cc96c;
            case 0x1CC970u: goto label_1cc970;
            case 0x1CC974u: goto label_1cc974;
            case 0x1CC978u: goto label_1cc978;
            case 0x1CC97Cu: goto label_1cc97c;
            case 0x1CC980u: goto label_1cc980;
            case 0x1CC984u: goto label_1cc984;
            case 0x1CC988u: goto label_1cc988;
            case 0x1CC98Cu: goto label_1cc98c;
            case 0x1CC990u: goto label_1cc990;
            case 0x1CC994u: goto label_1cc994;
            case 0x1CC998u: goto label_1cc998;
            case 0x1CC99Cu: goto label_1cc99c;
            case 0x1CC9A0u: goto label_1cc9a0;
            case 0x1CC9A4u: goto label_1cc9a4;
            case 0x1CC9A8u: goto label_1cc9a8;
            case 0x1CC9ACu: goto label_1cc9ac;
            case 0x1CC9B0u: goto label_1cc9b0;
            case 0x1CC9B4u: goto label_1cc9b4;
            case 0x1CC9B8u: goto label_1cc9b8;
            case 0x1CC9BCu: goto label_1cc9bc;
            case 0x1CC9C0u: goto label_1cc9c0;
            case 0x1CC9C4u: goto label_1cc9c4;
            case 0x1CC9C8u: goto label_1cc9c8;
            case 0x1CC9CCu: goto label_1cc9cc;
            case 0x1CC9D0u: goto label_1cc9d0;
            case 0x1CC9D4u: goto label_1cc9d4;
            case 0x1CC9D8u: goto label_1cc9d8;
            case 0x1CC9DCu: goto label_1cc9dc;
            case 0x1CC9E0u: goto label_1cc9e0;
            case 0x1CC9E4u: goto label_1cc9e4;
            case 0x1CC9E8u: goto label_1cc9e8;
            case 0x1CC9ECu: goto label_1cc9ec;
            case 0x1CC9F0u: goto label_1cc9f0;
            case 0x1CC9F4u: goto label_1cc9f4;
            case 0x1CC9F8u: goto label_1cc9f8;
            case 0x1CC9FCu: goto label_1cc9fc;
            case 0x1CCA00u: goto label_1cca00;
            case 0x1CCA04u: goto label_1cca04;
            case 0x1CCA08u: goto label_1cca08;
            case 0x1CCA0Cu: goto label_1cca0c;
            case 0x1CCA10u: goto label_1cca10;
            case 0x1CCA14u: goto label_1cca14;
            case 0x1CCA18u: goto label_1cca18;
            case 0x1CCA1Cu: goto label_1cca1c;
            case 0x1CCA20u: goto label_1cca20;
            case 0x1CCA24u: goto label_1cca24;
            case 0x1CCA28u: goto label_1cca28;
            case 0x1CCA2Cu: goto label_1cca2c;
            case 0x1CCA30u: goto label_1cca30;
            case 0x1CCA34u: goto label_1cca34;
            case 0x1CCA38u: goto label_1cca38;
            case 0x1CCA3Cu: goto label_1cca3c;
            case 0x1CCA40u: goto label_1cca40;
            case 0x1CCA44u: goto label_1cca44;
            case 0x1CCA48u: goto label_1cca48;
            case 0x1CCA4Cu: goto label_1cca4c;
            case 0x1CCA50u: goto label_1cca50;
            case 0x1CCA54u: goto label_1cca54;
            case 0x1CCA58u: goto label_1cca58;
            case 0x1CCA5Cu: goto label_1cca5c;
            case 0x1CCA60u: goto label_1cca60;
            case 0x1CCA64u: goto label_1cca64;
            case 0x1CCA68u: goto label_1cca68;
            case 0x1CCA6Cu: goto label_1cca6c;
            case 0x1CCA70u: goto label_1cca70;
            case 0x1CCA74u: goto label_1cca74;
            case 0x1CCA78u: goto label_1cca78;
            case 0x1CCA7Cu: goto label_1cca7c;
            case 0x1CCA80u: goto label_1cca80;
            case 0x1CCA84u: goto label_1cca84;
            case 0x1CCA88u: goto label_1cca88;
            case 0x1CCA8Cu: goto label_1cca8c;
            case 0x1CCA90u: goto label_1cca90;
            case 0x1CCA94u: goto label_1cca94;
            case 0x1CCA98u: goto label_1cca98;
            case 0x1CCA9Cu: goto label_1cca9c;
            case 0x1CCAA0u: goto label_1ccaa0;
            case 0x1CCAA4u: goto label_1ccaa4;
            case 0x1CCAA8u: goto label_1ccaa8;
            case 0x1CCAACu: goto label_1ccaac;
            case 0x1CCAB0u: goto label_1ccab0;
            case 0x1CCAB4u: goto label_1ccab4;
            case 0x1CCAB8u: goto label_1ccab8;
            case 0x1CCABCu: goto label_1ccabc;
            case 0x1CCAC0u: goto label_1ccac0;
            case 0x1CCAC4u: goto label_1ccac4;
            case 0x1CCAC8u: goto label_1ccac8;
            case 0x1CCACCu: goto label_1ccacc;
            case 0x1CCAD0u: goto label_1ccad0;
            case 0x1CCAD4u: goto label_1ccad4;
            case 0x1CCAD8u: goto label_1ccad8;
            case 0x1CCADCu: goto label_1ccadc;
            case 0x1CCAE0u: goto label_1ccae0;
            case 0x1CCAE4u: goto label_1ccae4;
            case 0x1CCAE8u: goto label_1ccae8;
            case 0x1CCAECu: goto label_1ccaec;
            case 0x1CCAF0u: goto label_1ccaf0;
            case 0x1CCAF4u: goto label_1ccaf4;
            case 0x1CCAF8u: goto label_1ccaf8;
            case 0x1CCAFCu: goto label_1ccafc;
            case 0x1CCB00u: goto label_1ccb00;
            case 0x1CCB04u: goto label_1ccb04;
            case 0x1CCB08u: goto label_1ccb08;
            case 0x1CCB0Cu: goto label_1ccb0c;
            case 0x1CCB10u: goto label_1ccb10;
            case 0x1CCB14u: goto label_1ccb14;
            case 0x1CCB18u: goto label_1ccb18;
            case 0x1CCB1Cu: goto label_1ccb1c;
            case 0x1CCB20u: goto label_1ccb20;
            case 0x1CCB24u: goto label_1ccb24;
            case 0x1CCB28u: goto label_1ccb28;
            case 0x1CCB2Cu: goto label_1ccb2c;
            case 0x1CCB30u: goto label_1ccb30;
            case 0x1CCB34u: goto label_1ccb34;
            case 0x1CCB38u: goto label_1ccb38;
            case 0x1CCB3Cu: goto label_1ccb3c;
            case 0x1CCB40u: goto label_1ccb40;
            case 0x1CCB44u: goto label_1ccb44;
            case 0x1CCB48u: goto label_1ccb48;
            case 0x1CCB4Cu: goto label_1ccb4c;
            case 0x1CCB50u: goto label_1ccb50;
            case 0x1CCB54u: goto label_1ccb54;
            case 0x1CCB58u: goto label_1ccb58;
            case 0x1CCB5Cu: goto label_1ccb5c;
            case 0x1CCB60u: goto label_1ccb60;
            case 0x1CCB64u: goto label_1ccb64;
            case 0x1CCB68u: goto label_1ccb68;
            case 0x1CCB6Cu: goto label_1ccb6c;
            case 0x1CCB70u: goto label_1ccb70;
            case 0x1CCB74u: goto label_1ccb74;
            case 0x1CCB78u: goto label_1ccb78;
            case 0x1CCB7Cu: goto label_1ccb7c;
            case 0x1CCB80u: goto label_1ccb80;
            case 0x1CCB84u: goto label_1ccb84;
            case 0x1CCB88u: goto label_1ccb88;
            case 0x1CCB8Cu: goto label_1ccb8c;
            case 0x1CCB90u: goto label_1ccb90;
            case 0x1CCB94u: goto label_1ccb94;
            case 0x1CCB98u: goto label_1ccb98;
            case 0x1CCB9Cu: goto label_1ccb9c;
            case 0x1CCBA0u: goto label_1ccba0;
            case 0x1CCBA4u: goto label_1ccba4;
            case 0x1CCBA8u: goto label_1ccba8;
            case 0x1CCBACu: goto label_1ccbac;
            case 0x1CCBB0u: goto label_1ccbb0;
            case 0x1CCBB4u: goto label_1ccbb4;
            case 0x1CCBB8u: goto label_1ccbb8;
            case 0x1CCBBCu: goto label_1ccbbc;
            case 0x1CCBC0u: goto label_1ccbc0;
            case 0x1CCBC4u: goto label_1ccbc4;
            case 0x1CCBC8u: goto label_1ccbc8;
            case 0x1CCBCCu: goto label_1ccbcc;
            case 0x1CCBD0u: goto label_1ccbd0;
            case 0x1CCBD4u: goto label_1ccbd4;
            case 0x1CCBD8u: goto label_1ccbd8;
            case 0x1CCBDCu: goto label_1ccbdc;
            case 0x1CCBE0u: goto label_1ccbe0;
            case 0x1CCBE4u: goto label_1ccbe4;
            case 0x1CCBE8u: goto label_1ccbe8;
            case 0x1CCBECu: goto label_1ccbec;
            case 0x1CCBF0u: goto label_1ccbf0;
            case 0x1CCBF4u: goto label_1ccbf4;
            case 0x1CCBF8u: goto label_1ccbf8;
            case 0x1CCBFCu: goto label_1ccbfc;
            case 0x1CCC00u: goto label_1ccc00;
            case 0x1CCC04u: goto label_1ccc04;
            case 0x1CCC08u: goto label_1ccc08;
            case 0x1CCC0Cu: goto label_1ccc0c;
            case 0x1CCC10u: goto label_1ccc10;
            case 0x1CCC14u: goto label_1ccc14;
            case 0x1CCC18u: goto label_1ccc18;
            case 0x1CCC1Cu: goto label_1ccc1c;
            case 0x1CCC20u: goto label_1ccc20;
            case 0x1CCC24u: goto label_1ccc24;
            case 0x1CCC28u: goto label_1ccc28;
            case 0x1CCC2Cu: goto label_1ccc2c;
            case 0x1CCC30u: goto label_1ccc30;
            case 0x1CCC34u: goto label_1ccc34;
            case 0x1CCC38u: goto label_1ccc38;
            case 0x1CCC3Cu: goto label_1ccc3c;
            case 0x1CCC40u: goto label_1ccc40;
            case 0x1CCC44u: goto label_1ccc44;
            case 0x1CCC48u: goto label_1ccc48;
            case 0x1CCC4Cu: goto label_1ccc4c;
            case 0x1CCC50u: goto label_1ccc50;
            case 0x1CCC54u: goto label_1ccc54;
            case 0x1CCC58u: goto label_1ccc58;
            case 0x1CCC5Cu: goto label_1ccc5c;
            case 0x1CCC60u: goto label_1ccc60;
            case 0x1CCC64u: goto label_1ccc64;
            case 0x1CCC68u: goto label_1ccc68;
            case 0x1CCC6Cu: goto label_1ccc6c;
            case 0x1CCC70u: goto label_1ccc70;
            case 0x1CCC74u: goto label_1ccc74;
            case 0x1CCC78u: goto label_1ccc78;
            case 0x1CCC7Cu: goto label_1ccc7c;
            case 0x1CCC80u: goto label_1ccc80;
            case 0x1CCC84u: goto label_1ccc84;
            case 0x1CCC88u: goto label_1ccc88;
            case 0x1CCC8Cu: goto label_1ccc8c;
            case 0x1CCC90u: goto label_1ccc90;
            case 0x1CCC94u: goto label_1ccc94;
            case 0x1CCC98u: goto label_1ccc98;
            case 0x1CCC9Cu: goto label_1ccc9c;
            case 0x1CCCA0u: goto label_1ccca0;
            case 0x1CCCA4u: goto label_1ccca4;
            case 0x1CCCA8u: goto label_1ccca8;
            case 0x1CCCACu: goto label_1cccac;
            case 0x1CCCB0u: goto label_1cccb0;
            case 0x1CCCB4u: goto label_1cccb4;
            case 0x1CCCB8u: goto label_1cccb8;
            case 0x1CCCBCu: goto label_1cccbc;
            case 0x1CCCC0u: goto label_1cccc0;
            case 0x1CCCC4u: goto label_1cccc4;
            case 0x1CCCC8u: goto label_1cccc8;
            case 0x1CCCCCu: goto label_1ccccc;
            case 0x1CCCD0u: goto label_1cccd0;
            case 0x1CCCD4u: goto label_1cccd4;
            case 0x1CCCD8u: goto label_1cccd8;
            case 0x1CCCDCu: goto label_1cccdc;
            case 0x1CCCE0u: goto label_1ccce0;
            case 0x1CCCE4u: goto label_1ccce4;
            case 0x1CCCE8u: goto label_1ccce8;
            case 0x1CCCECu: goto label_1cccec;
            case 0x1CCCF0u: goto label_1cccf0;
            case 0x1CCCF4u: goto label_1cccf4;
            case 0x1CCCF8u: goto label_1cccf8;
            case 0x1CCCFCu: goto label_1cccfc;
            case 0x1CCD00u: goto label_1ccd00;
            case 0x1CCD04u: goto label_1ccd04;
            case 0x1CCD08u: goto label_1ccd08;
            case 0x1CCD0Cu: goto label_1ccd0c;
            case 0x1CCD10u: goto label_1ccd10;
            case 0x1CCD14u: goto label_1ccd14;
            case 0x1CCD18u: goto label_1ccd18;
            case 0x1CCD1Cu: goto label_1ccd1c;
            case 0x1CCD20u: goto label_1ccd20;
            case 0x1CCD24u: goto label_1ccd24;
            case 0x1CCD28u: goto label_1ccd28;
            case 0x1CCD2Cu: goto label_1ccd2c;
            case 0x1CCD30u: goto label_1ccd30;
            case 0x1CCD34u: goto label_1ccd34;
            case 0x1CCD38u: goto label_1ccd38;
            case 0x1CCD3Cu: goto label_1ccd3c;
            case 0x1CCD40u: goto label_1ccd40;
            case 0x1CCD44u: goto label_1ccd44;
            case 0x1CCD48u: goto label_1ccd48;
            case 0x1CCD4Cu: goto label_1ccd4c;
            case 0x1CCD50u: goto label_1ccd50;
            case 0x1CCD54u: goto label_1ccd54;
            case 0x1CCD58u: goto label_1ccd58;
            case 0x1CCD5Cu: goto label_1ccd5c;
            case 0x1CCD60u: goto label_1ccd60;
            case 0x1CCD64u: goto label_1ccd64;
            case 0x1CCD68u: goto label_1ccd68;
            case 0x1CCD6Cu: goto label_1ccd6c;
            case 0x1CCD70u: goto label_1ccd70;
            case 0x1CCD74u: goto label_1ccd74;
            case 0x1CCD78u: goto label_1ccd78;
            case 0x1CCD7Cu: goto label_1ccd7c;
            case 0x1CCD80u: goto label_1ccd80;
            case 0x1CCD84u: goto label_1ccd84;
            case 0x1CCD88u: goto label_1ccd88;
            case 0x1CCD8Cu: goto label_1ccd8c;
            case 0x1CCD90u: goto label_1ccd90;
            case 0x1CCD94u: goto label_1ccd94;
            case 0x1CCD98u: goto label_1ccd98;
            case 0x1CCD9Cu: goto label_1ccd9c;
            case 0x1CCDA0u: goto label_1ccda0;
            case 0x1CCDA4u: goto label_1ccda4;
            case 0x1CCDA8u: goto label_1ccda8;
            case 0x1CCDACu: goto label_1ccdac;
            case 0x1CCDB0u: goto label_1ccdb0;
            case 0x1CCDB4u: goto label_1ccdb4;
            case 0x1CCDB8u: goto label_1ccdb8;
            case 0x1CCDBCu: goto label_1ccdbc;
            case 0x1CCDC0u: goto label_1ccdc0;
            case 0x1CCDC4u: goto label_1ccdc4;
            case 0x1CCDC8u: goto label_1ccdc8;
            case 0x1CCDCCu: goto label_1ccdcc;
            case 0x1CCDD0u: goto label_1ccdd0;
            case 0x1CCDD4u: goto label_1ccdd4;
            case 0x1CCDD8u: goto label_1ccdd8;
            case 0x1CCDDCu: goto label_1ccddc;
            case 0x1CCDE0u: goto label_1ccde0;
            case 0x1CCDE4u: goto label_1ccde4;
            case 0x1CCDE8u: goto label_1ccde8;
            case 0x1CCDECu: goto label_1ccdec;
            case 0x1CCDF0u: goto label_1ccdf0;
            case 0x1CCDF4u: goto label_1ccdf4;
            case 0x1CCDF8u: goto label_1ccdf8;
            case 0x1CCDFCu: goto label_1ccdfc;
            case 0x1CCE00u: goto label_1cce00;
            case 0x1CCE04u: goto label_1cce04;
            case 0x1CCE08u: goto label_1cce08;
            case 0x1CCE0Cu: goto label_1cce0c;
            case 0x1CCE10u: goto label_1cce10;
            case 0x1CCE14u: goto label_1cce14;
            case 0x1CCE18u: goto label_1cce18;
            case 0x1CCE1Cu: goto label_1cce1c;
            case 0x1CCE20u: goto label_1cce20;
            case 0x1CCE24u: goto label_1cce24;
            case 0x1CCE28u: goto label_1cce28;
            case 0x1CCE2Cu: goto label_1cce2c;
            case 0x1CCE30u: goto label_1cce30;
            case 0x1CCE34u: goto label_1cce34;
            case 0x1CCE38u: goto label_1cce38;
            case 0x1CCE3Cu: goto label_1cce3c;
            case 0x1CCE40u: goto label_1cce40;
            case 0x1CCE44u: goto label_1cce44;
            case 0x1CCE48u: goto label_1cce48;
            case 0x1CCE4Cu: goto label_1cce4c;
            case 0x1CCE50u: goto label_1cce50;
            case 0x1CCE54u: goto label_1cce54;
            case 0x1CCE58u: goto label_1cce58;
            case 0x1CCE5Cu: goto label_1cce5c;
            case 0x1CCE60u: goto label_1cce60;
            case 0x1CCE64u: goto label_1cce64;
            case 0x1CCE68u: goto label_1cce68;
            case 0x1CCE6Cu: goto label_1cce6c;
            case 0x1CCE70u: goto label_1cce70;
            case 0x1CCE74u: goto label_1cce74;
            case 0x1CCE78u: goto label_1cce78;
            case 0x1CCE7Cu: goto label_1cce7c;
            case 0x1CCE80u: goto label_1cce80;
            case 0x1CCE84u: goto label_1cce84;
            case 0x1CCE88u: goto label_1cce88;
            case 0x1CCE8Cu: goto label_1cce8c;
            case 0x1CCE90u: goto label_1cce90;
            case 0x1CCE94u: goto label_1cce94;
            case 0x1CCE98u: goto label_1cce98;
            case 0x1CCE9Cu: goto label_1cce9c;
            case 0x1CCEA0u: goto label_1ccea0;
            case 0x1CCEA4u: goto label_1ccea4;
            case 0x1CCEA8u: goto label_1ccea8;
            case 0x1CCEACu: goto label_1cceac;
            case 0x1CCEB0u: goto label_1cceb0;
            case 0x1CCEB4u: goto label_1cceb4;
            case 0x1CCEB8u: goto label_1cceb8;
            case 0x1CCEBCu: goto label_1ccebc;
            case 0x1CCEC0u: goto label_1ccec0;
            case 0x1CCEC4u: goto label_1ccec4;
            case 0x1CCEC8u: goto label_1ccec8;
            case 0x1CCECCu: goto label_1ccecc;
            case 0x1CCED0u: goto label_1cced0;
            case 0x1CCED4u: goto label_1cced4;
            case 0x1CCED8u: goto label_1cced8;
            case 0x1CCEDCu: goto label_1ccedc;
            case 0x1CCEE0u: goto label_1ccee0;
            case 0x1CCEE4u: goto label_1ccee4;
            case 0x1CCEE8u: goto label_1ccee8;
            case 0x1CCEECu: goto label_1cceec;
            case 0x1CCEF0u: goto label_1ccef0;
            case 0x1CCEF4u: goto label_1ccef4;
            case 0x1CCEF8u: goto label_1ccef8;
            case 0x1CCEFCu: goto label_1ccefc;
            case 0x1CCF00u: goto label_1ccf00;
            case 0x1CCF04u: goto label_1ccf04;
            case 0x1CCF08u: goto label_1ccf08;
            case 0x1CCF0Cu: goto label_1ccf0c;
            case 0x1CCF10u: goto label_1ccf10;
            case 0x1CCF14u: goto label_1ccf14;
            case 0x1CCF18u: goto label_1ccf18;
            case 0x1CCF1Cu: goto label_1ccf1c;
            case 0x1CCF20u: goto label_1ccf20;
            case 0x1CCF24u: goto label_1ccf24;
            case 0x1CCF28u: goto label_1ccf28;
            case 0x1CCF2Cu: goto label_1ccf2c;
            case 0x1CCF30u: goto label_1ccf30;
            case 0x1CCF34u: goto label_1ccf34;
            case 0x1CCF38u: goto label_1ccf38;
            case 0x1CCF3Cu: goto label_1ccf3c;
            case 0x1CCF40u: goto label_1ccf40;
            case 0x1CCF44u: goto label_1ccf44;
            case 0x1CCF48u: goto label_1ccf48;
            case 0x1CCF4Cu: goto label_1ccf4c;
            case 0x1CCF50u: goto label_1ccf50;
            case 0x1CCF54u: goto label_1ccf54;
            case 0x1CCF58u: goto label_1ccf58;
            case 0x1CCF5Cu: goto label_1ccf5c;
            case 0x1CCF60u: goto label_1ccf60;
            case 0x1CCF64u: goto label_1ccf64;
            case 0x1CCF68u: goto label_1ccf68;
            case 0x1CCF6Cu: goto label_1ccf6c;
            case 0x1CCF70u: goto label_1ccf70;
            case 0x1CCF74u: goto label_1ccf74;
            case 0x1CCF78u: goto label_1ccf78;
            case 0x1CCF7Cu: goto label_1ccf7c;
            case 0x1CCF80u: goto label_1ccf80;
            case 0x1CCF84u: goto label_1ccf84;
            case 0x1CCF88u: goto label_1ccf88;
            case 0x1CCF8Cu: goto label_1ccf8c;
            case 0x1CCF90u: goto label_1ccf90;
            case 0x1CCF94u: goto label_1ccf94;
            case 0x1CCF98u: goto label_1ccf98;
            case 0x1CCF9Cu: goto label_1ccf9c;
            case 0x1CCFA0u: goto label_1ccfa0;
            case 0x1CCFA4u: goto label_1ccfa4;
            case 0x1CCFA8u: goto label_1ccfa8;
            case 0x1CCFACu: goto label_1ccfac;
            case 0x1CCFB0u: goto label_1ccfb0;
            case 0x1CCFB4u: goto label_1ccfb4;
            case 0x1CCFB8u: goto label_1ccfb8;
            case 0x1CCFBCu: goto label_1ccfbc;
            case 0x1CCFC0u: goto label_1ccfc0;
            case 0x1CCFC4u: goto label_1ccfc4;
            case 0x1CCFC8u: goto label_1ccfc8;
            case 0x1CCFCCu: goto label_1ccfcc;
            case 0x1CCFD0u: goto label_1ccfd0;
            case 0x1CCFD4u: goto label_1ccfd4;
            case 0x1CCFD8u: goto label_1ccfd8;
            case 0x1CCFDCu: goto label_1ccfdc;
            case 0x1CCFE0u: goto label_1ccfe0;
            case 0x1CCFE4u: goto label_1ccfe4;
            case 0x1CCFE8u: goto label_1ccfe8;
            case 0x1CCFECu: goto label_1ccfec;
            case 0x1CCFF0u: goto label_1ccff0;
            case 0x1CCFF4u: goto label_1ccff4;
            case 0x1CCFF8u: goto label_1ccff8;
            case 0x1CCFFCu: goto label_1ccffc;
            case 0x1CD000u: goto label_1cd000;
            case 0x1CD004u: goto label_1cd004;
            case 0x1CD008u: goto label_1cd008;
            case 0x1CD00Cu: goto label_1cd00c;
            case 0x1CD010u: goto label_1cd010;
            case 0x1CD014u: goto label_1cd014;
            case 0x1CD018u: goto label_1cd018;
            case 0x1CD01Cu: goto label_1cd01c;
            case 0x1CD020u: goto label_1cd020;
            case 0x1CD024u: goto label_1cd024;
            case 0x1CD028u: goto label_1cd028;
            case 0x1CD02Cu: goto label_1cd02c;
            case 0x1CD030u: goto label_1cd030;
            case 0x1CD034u: goto label_1cd034;
            case 0x1CD038u: goto label_1cd038;
            case 0x1CD03Cu: goto label_1cd03c;
            case 0x1CD040u: goto label_1cd040;
            case 0x1CD044u: goto label_1cd044;
            case 0x1CD048u: goto label_1cd048;
            case 0x1CD04Cu: goto label_1cd04c;
            case 0x1CD050u: goto label_1cd050;
            case 0x1CD054u: goto label_1cd054;
            case 0x1CD058u: goto label_1cd058;
            case 0x1CD05Cu: goto label_1cd05c;
            case 0x1CD060u: goto label_1cd060;
            case 0x1CD064u: goto label_1cd064;
            case 0x1CD068u: goto label_1cd068;
            case 0x1CD06Cu: goto label_1cd06c;
            case 0x1CD070u: goto label_1cd070;
            case 0x1CD074u: goto label_1cd074;
            case 0x1CD078u: goto label_1cd078;
            case 0x1CD07Cu: goto label_1cd07c;
            case 0x1CD080u: goto label_1cd080;
            case 0x1CD084u: goto label_1cd084;
            case 0x1CD088u: goto label_1cd088;
            case 0x1CD08Cu: goto label_1cd08c;
            case 0x1CD090u: goto label_1cd090;
            case 0x1CD094u: goto label_1cd094;
            case 0x1CD098u: goto label_1cd098;
            case 0x1CD09Cu: goto label_1cd09c;
            case 0x1CD0A0u: goto label_1cd0a0;
            case 0x1CD0A4u: goto label_1cd0a4;
            case 0x1CD0A8u: goto label_1cd0a8;
            case 0x1CD0ACu: goto label_1cd0ac;
            case 0x1CD0B0u: goto label_1cd0b0;
            case 0x1CD0B4u: goto label_1cd0b4;
            case 0x1CD0B8u: goto label_1cd0b8;
            case 0x1CD0BCu: goto label_1cd0bc;
            case 0x1CD0C0u: goto label_1cd0c0;
            case 0x1CD0C4u: goto label_1cd0c4;
            case 0x1CD0C8u: goto label_1cd0c8;
            case 0x1CD0CCu: goto label_1cd0cc;
            case 0x1CD0D0u: goto label_1cd0d0;
            case 0x1CD0D4u: goto label_1cd0d4;
            case 0x1CD0D8u: goto label_1cd0d8;
            case 0x1CD0DCu: goto label_1cd0dc;
            case 0x1CD0E0u: goto label_1cd0e0;
            case 0x1CD0E4u: goto label_1cd0e4;
            case 0x1CD0E8u: goto label_1cd0e8;
            case 0x1CD0ECu: goto label_1cd0ec;
            case 0x1CD0F0u: goto label_1cd0f0;
            case 0x1CD0F4u: goto label_1cd0f4;
            case 0x1CD0F8u: goto label_1cd0f8;
            case 0x1CD0FCu: goto label_1cd0fc;
            case 0x1CD100u: goto label_1cd100;
            case 0x1CD104u: goto label_1cd104;
            case 0x1CD108u: goto label_1cd108;
            case 0x1CD10Cu: goto label_1cd10c;
            case 0x1CD110u: goto label_1cd110;
            case 0x1CD114u: goto label_1cd114;
            case 0x1CD118u: goto label_1cd118;
            case 0x1CD11Cu: goto label_1cd11c;
            case 0x1CD120u: goto label_1cd120;
            case 0x1CD124u: goto label_1cd124;
            case 0x1CD128u: goto label_1cd128;
            case 0x1CD12Cu: goto label_1cd12c;
            case 0x1CD130u: goto label_1cd130;
            case 0x1CD134u: goto label_1cd134;
            case 0x1CD138u: goto label_1cd138;
            case 0x1CD13Cu: goto label_1cd13c;
            case 0x1CD140u: goto label_1cd140;
            case 0x1CD144u: goto label_1cd144;
            case 0x1CD148u: goto label_1cd148;
            case 0x1CD14Cu: goto label_1cd14c;
            case 0x1CD150u: goto label_1cd150;
            case 0x1CD154u: goto label_1cd154;
            case 0x1CD158u: goto label_1cd158;
            case 0x1CD15Cu: goto label_1cd15c;
            case 0x1CD160u: goto label_1cd160;
            case 0x1CD164u: goto label_1cd164;
            case 0x1CD168u: goto label_1cd168;
            case 0x1CD16Cu: goto label_1cd16c;
            case 0x1CD170u: goto label_1cd170;
            case 0x1CD174u: goto label_1cd174;
            case 0x1CD178u: goto label_1cd178;
            case 0x1CD17Cu: goto label_1cd17c;
            case 0x1CD180u: goto label_1cd180;
            case 0x1CD184u: goto label_1cd184;
            case 0x1CD188u: goto label_1cd188;
            case 0x1CD18Cu: goto label_1cd18c;
            case 0x1CD190u: goto label_1cd190;
            case 0x1CD194u: goto label_1cd194;
            case 0x1CD198u: goto label_1cd198;
            case 0x1CD19Cu: goto label_1cd19c;
            case 0x1CD1A0u: goto label_1cd1a0;
            case 0x1CD1A4u: goto label_1cd1a4;
            case 0x1CD1A8u: goto label_1cd1a8;
            case 0x1CD1ACu: goto label_1cd1ac;
            case 0x1CD1B0u: goto label_1cd1b0;
            case 0x1CD1B4u: goto label_1cd1b4;
            case 0x1CD1B8u: goto label_1cd1b8;
            case 0x1CD1BCu: goto label_1cd1bc;
            case 0x1CD1C0u: goto label_1cd1c0;
            case 0x1CD1C4u: goto label_1cd1c4;
            case 0x1CD1C8u: goto label_1cd1c8;
            case 0x1CD1CCu: goto label_1cd1cc;
            case 0x1CD1D0u: goto label_1cd1d0;
            case 0x1CD1D4u: goto label_1cd1d4;
            case 0x1CD1D8u: goto label_1cd1d8;
            case 0x1CD1DCu: goto label_1cd1dc;
            case 0x1CD1E0u: goto label_1cd1e0;
            case 0x1CD1E4u: goto label_1cd1e4;
            case 0x1CD1E8u: goto label_1cd1e8;
            case 0x1CD1ECu: goto label_1cd1ec;
            case 0x1CD1F0u: goto label_1cd1f0;
            case 0x1CD1F4u: goto label_1cd1f4;
            case 0x1CD1F8u: goto label_1cd1f8;
            case 0x1CD1FCu: goto label_1cd1fc;
            case 0x1CD200u: goto label_1cd200;
            case 0x1CD204u: goto label_1cd204;
            case 0x1CD208u: goto label_1cd208;
            case 0x1CD20Cu: goto label_1cd20c;
            case 0x1CD210u: goto label_1cd210;
            case 0x1CD214u: goto label_1cd214;
            case 0x1CD218u: goto label_1cd218;
            case 0x1CD21Cu: goto label_1cd21c;
            case 0x1CD220u: goto label_1cd220;
            case 0x1CD224u: goto label_1cd224;
            case 0x1CD228u: goto label_1cd228;
            case 0x1CD22Cu: goto label_1cd22c;
            case 0x1CD230u: goto label_1cd230;
            case 0x1CD234u: goto label_1cd234;
            case 0x1CD238u: goto label_1cd238;
            case 0x1CD23Cu: goto label_1cd23c;
            case 0x1CD240u: goto label_1cd240;
            case 0x1CD244u: goto label_1cd244;
            case 0x1CD248u: goto label_1cd248;
            case 0x1CD24Cu: goto label_1cd24c;
            case 0x1CD250u: goto label_1cd250;
            case 0x1CD254u: goto label_1cd254;
            case 0x1CD258u: goto label_1cd258;
            case 0x1CD25Cu: goto label_1cd25c;
            case 0x1CD260u: goto label_1cd260;
            case 0x1CD264u: goto label_1cd264;
            case 0x1CD268u: goto label_1cd268;
            case 0x1CD26Cu: goto label_1cd26c;
            case 0x1CD270u: goto label_1cd270;
            case 0x1CD274u: goto label_1cd274;
            case 0x1CD278u: goto label_1cd278;
            case 0x1CD27Cu: goto label_1cd27c;
            case 0x1CD280u: goto label_1cd280;
            case 0x1CD284u: goto label_1cd284;
            case 0x1CD288u: goto label_1cd288;
            case 0x1CD28Cu: goto label_1cd28c;
            case 0x1CD290u: goto label_1cd290;
            case 0x1CD294u: goto label_1cd294;
            case 0x1CD298u: goto label_1cd298;
            case 0x1CD29Cu: goto label_1cd29c;
            case 0x1CD2A0u: goto label_1cd2a0;
            case 0x1CD2A4u: goto label_1cd2a4;
            case 0x1CD2A8u: goto label_1cd2a8;
            case 0x1CD2ACu: goto label_1cd2ac;
            case 0x1CD2B0u: goto label_1cd2b0;
            case 0x1CD2B4u: goto label_1cd2b4;
            case 0x1CD2B8u: goto label_1cd2b8;
            case 0x1CD2BCu: goto label_1cd2bc;
            case 0x1CD2C0u: goto label_1cd2c0;
            case 0x1CD2C4u: goto label_1cd2c4;
            case 0x1CD2C8u: goto label_1cd2c8;
            case 0x1CD2CCu: goto label_1cd2cc;
            case 0x1CD2D0u: goto label_1cd2d0;
            case 0x1CD2D4u: goto label_1cd2d4;
            case 0x1CD2D8u: goto label_1cd2d8;
            case 0x1CD2DCu: goto label_1cd2dc;
            case 0x1CD2E0u: goto label_1cd2e0;
            case 0x1CD2E4u: goto label_1cd2e4;
            case 0x1CD2E8u: goto label_1cd2e8;
            case 0x1CD2ECu: goto label_1cd2ec;
            case 0x1CD2F0u: goto label_1cd2f0;
            case 0x1CD2F4u: goto label_1cd2f4;
            case 0x1CD2F8u: goto label_1cd2f8;
            case 0x1CD2FCu: goto label_1cd2fc;
            case 0x1CD300u: goto label_1cd300;
            case 0x1CD304u: goto label_1cd304;
            case 0x1CD308u: goto label_1cd308;
            case 0x1CD30Cu: goto label_1cd30c;
            case 0x1CD310u: goto label_1cd310;
            case 0x1CD314u: goto label_1cd314;
            case 0x1CD318u: goto label_1cd318;
            case 0x1CD31Cu: goto label_1cd31c;
            case 0x1CD320u: goto label_1cd320;
            case 0x1CD324u: goto label_1cd324;
            case 0x1CD328u: goto label_1cd328;
            case 0x1CD32Cu: goto label_1cd32c;
            case 0x1CD330u: goto label_1cd330;
            case 0x1CD334u: goto label_1cd334;
            case 0x1CD338u: goto label_1cd338;
            case 0x1CD33Cu: goto label_1cd33c;
            case 0x1CD340u: goto label_1cd340;
            case 0x1CD344u: goto label_1cd344;
            case 0x1CD348u: goto label_1cd348;
            case 0x1CD34Cu: goto label_1cd34c;
            case 0x1CD350u: goto label_1cd350;
            case 0x1CD354u: goto label_1cd354;
            case 0x1CD358u: goto label_1cd358;
            case 0x1CD35Cu: goto label_1cd35c;
            case 0x1CD360u: goto label_1cd360;
            case 0x1CD364u: goto label_1cd364;
            case 0x1CD368u: goto label_1cd368;
            case 0x1CD36Cu: goto label_1cd36c;
            case 0x1CD370u: goto label_1cd370;
            case 0x1CD374u: goto label_1cd374;
            case 0x1CD378u: goto label_1cd378;
            case 0x1CD37Cu: goto label_1cd37c;
            case 0x1CD380u: goto label_1cd380;
            case 0x1CD384u: goto label_1cd384;
            case 0x1CD388u: goto label_1cd388;
            case 0x1CD38Cu: goto label_1cd38c;
            case 0x1CD390u: goto label_1cd390;
            case 0x1CD394u: goto label_1cd394;
            case 0x1CD398u: goto label_1cd398;
            case 0x1CD39Cu: goto label_1cd39c;
            case 0x1CD3A0u: goto label_1cd3a0;
            case 0x1CD3A4u: goto label_1cd3a4;
            case 0x1CD3A8u: goto label_1cd3a8;
            case 0x1CD3ACu: goto label_1cd3ac;
            case 0x1CD3B0u: goto label_1cd3b0;
            case 0x1CD3B4u: goto label_1cd3b4;
            case 0x1CD3B8u: goto label_1cd3b8;
            case 0x1CD3BCu: goto label_1cd3bc;
            case 0x1CD3C0u: goto label_1cd3c0;
            case 0x1CD3C4u: goto label_1cd3c4;
            case 0x1CD3C8u: goto label_1cd3c8;
            case 0x1CD3CCu: goto label_1cd3cc;
            case 0x1CD3D0u: goto label_1cd3d0;
            case 0x1CD3D4u: goto label_1cd3d4;
            case 0x1CD3D8u: goto label_1cd3d8;
            case 0x1CD3DCu: goto label_1cd3dc;
            case 0x1CD3E0u: goto label_1cd3e0;
            case 0x1CD3E4u: goto label_1cd3e4;
            case 0x1CD3E8u: goto label_1cd3e8;
            case 0x1CD3ECu: goto label_1cd3ec;
            case 0x1CD3F0u: goto label_1cd3f0;
            case 0x1CD3F4u: goto label_1cd3f4;
            case 0x1CD3F8u: goto label_1cd3f8;
            case 0x1CD3FCu: goto label_1cd3fc;
            case 0x1CD400u: goto label_1cd400;
            case 0x1CD404u: goto label_1cd404;
            case 0x1CD408u: goto label_1cd408;
            case 0x1CD40Cu: goto label_1cd40c;
            case 0x1CD410u: goto label_1cd410;
            case 0x1CD414u: goto label_1cd414;
            case 0x1CD418u: goto label_1cd418;
            case 0x1CD41Cu: goto label_1cd41c;
            case 0x1CD420u: goto label_1cd420;
            case 0x1CD424u: goto label_1cd424;
            case 0x1CD428u: goto label_1cd428;
            case 0x1CD42Cu: goto label_1cd42c;
            case 0x1CD430u: goto label_1cd430;
            case 0x1CD434u: goto label_1cd434;
            case 0x1CD438u: goto label_1cd438;
            case 0x1CD43Cu: goto label_1cd43c;
            case 0x1CD440u: goto label_1cd440;
            case 0x1CD444u: goto label_1cd444;
            case 0x1CD448u: goto label_1cd448;
            case 0x1CD44Cu: goto label_1cd44c;
            case 0x1CD450u: goto label_1cd450;
            case 0x1CD454u: goto label_1cd454;
            case 0x1CD458u: goto label_1cd458;
            case 0x1CD45Cu: goto label_1cd45c;
            case 0x1CD460u: goto label_1cd460;
            case 0x1CD464u: goto label_1cd464;
            case 0x1CD468u: goto label_1cd468;
            case 0x1CD46Cu: goto label_1cd46c;
            case 0x1CD470u: goto label_1cd470;
            case 0x1CD474u: goto label_1cd474;
            case 0x1CD478u: goto label_1cd478;
            case 0x1CD47Cu: goto label_1cd47c;
            case 0x1CD480u: goto label_1cd480;
            case 0x1CD484u: goto label_1cd484;
            case 0x1CD488u: goto label_1cd488;
            case 0x1CD48Cu: goto label_1cd48c;
            case 0x1CD490u: goto label_1cd490;
            case 0x1CD494u: goto label_1cd494;
            case 0x1CD498u: goto label_1cd498;
            case 0x1CD49Cu: goto label_1cd49c;
            case 0x1CD4A0u: goto label_1cd4a0;
            case 0x1CD4A4u: goto label_1cd4a4;
            case 0x1CD4A8u: goto label_1cd4a8;
            case 0x1CD4ACu: goto label_1cd4ac;
            case 0x1CD4B0u: goto label_1cd4b0;
            case 0x1CD4B4u: goto label_1cd4b4;
            case 0x1CD4B8u: goto label_1cd4b8;
            case 0x1CD4BCu: goto label_1cd4bc;
            case 0x1CD4C0u: goto label_1cd4c0;
            case 0x1CD4C4u: goto label_1cd4c4;
            case 0x1CD4C8u: goto label_1cd4c8;
            case 0x1CD4CCu: goto label_1cd4cc;
            case 0x1CD4D0u: goto label_1cd4d0;
            case 0x1CD4D4u: goto label_1cd4d4;
            case 0x1CD4D8u: goto label_1cd4d8;
            case 0x1CD4DCu: goto label_1cd4dc;
            case 0x1CD4E0u: goto label_1cd4e0;
            case 0x1CD4E4u: goto label_1cd4e4;
            case 0x1CD4E8u: goto label_1cd4e8;
            case 0x1CD4ECu: goto label_1cd4ec;
            case 0x1CD4F0u: goto label_1cd4f0;
            case 0x1CD4F4u: goto label_1cd4f4;
            case 0x1CD4F8u: goto label_1cd4f8;
            case 0x1CD4FCu: goto label_1cd4fc;
            case 0x1CD500u: goto label_1cd500;
            case 0x1CD504u: goto label_1cd504;
            case 0x1CD508u: goto label_1cd508;
            case 0x1CD50Cu: goto label_1cd50c;
            case 0x1CD510u: goto label_1cd510;
            case 0x1CD514u: goto label_1cd514;
            case 0x1CD518u: goto label_1cd518;
            case 0x1CD51Cu: goto label_1cd51c;
            case 0x1CD520u: goto label_1cd520;
            case 0x1CD524u: goto label_1cd524;
            case 0x1CD528u: goto label_1cd528;
            case 0x1CD52Cu: goto label_1cd52c;
            case 0x1CD530u: goto label_1cd530;
            case 0x1CD534u: goto label_1cd534;
            case 0x1CD538u: goto label_1cd538;
            case 0x1CD53Cu: goto label_1cd53c;
            case 0x1CD540u: goto label_1cd540;
            case 0x1CD544u: goto label_1cd544;
            case 0x1CD548u: goto label_1cd548;
            case 0x1CD54Cu: goto label_1cd54c;
            case 0x1CD550u: goto label_1cd550;
            case 0x1CD554u: goto label_1cd554;
            case 0x1CD558u: goto label_1cd558;
            case 0x1CD55Cu: goto label_1cd55c;
            case 0x1CD560u: goto label_1cd560;
            case 0x1CD564u: goto label_1cd564;
            case 0x1CD568u: goto label_1cd568;
            case 0x1CD56Cu: goto label_1cd56c;
            case 0x1CD570u: goto label_1cd570;
            case 0x1CD574u: goto label_1cd574;
            case 0x1CD578u: goto label_1cd578;
            case 0x1CD57Cu: goto label_1cd57c;
            case 0x1CD580u: goto label_1cd580;
            case 0x1CD584u: goto label_1cd584;
            case 0x1CD588u: goto label_1cd588;
            case 0x1CD58Cu: goto label_1cd58c;
            case 0x1CD590u: goto label_1cd590;
            case 0x1CD594u: goto label_1cd594;
            case 0x1CD598u: goto label_1cd598;
            case 0x1CD59Cu: goto label_1cd59c;
            case 0x1CD5A0u: goto label_1cd5a0;
            case 0x1CD5A4u: goto label_1cd5a4;
            case 0x1CD5A8u: goto label_1cd5a8;
            case 0x1CD5ACu: goto label_1cd5ac;
            case 0x1CD5B0u: goto label_1cd5b0;
            case 0x1CD5B4u: goto label_1cd5b4;
            case 0x1CD5B8u: goto label_1cd5b8;
            case 0x1CD5BCu: goto label_1cd5bc;
            case 0x1CD5C0u: goto label_1cd5c0;
            case 0x1CD5C4u: goto label_1cd5c4;
            case 0x1CD5C8u: goto label_1cd5c8;
            case 0x1CD5CCu: goto label_1cd5cc;
            case 0x1CD5D0u: goto label_1cd5d0;
            case 0x1CD5D4u: goto label_1cd5d4;
            case 0x1CD5D8u: goto label_1cd5d8;
            case 0x1CD5DCu: goto label_1cd5dc;
            case 0x1CD5E0u: goto label_1cd5e0;
            case 0x1CD5E4u: goto label_1cd5e4;
            case 0x1CD5E8u: goto label_1cd5e8;
            case 0x1CD5ECu: goto label_1cd5ec;
            case 0x1CD5F0u: goto label_1cd5f0;
            case 0x1CD5F4u: goto label_1cd5f4;
            case 0x1CD5F8u: goto label_1cd5f8;
            case 0x1CD5FCu: goto label_1cd5fc;
            case 0x1CD600u: goto label_1cd600;
            case 0x1CD604u: goto label_1cd604;
            case 0x1CD608u: goto label_1cd608;
            case 0x1CD60Cu: goto label_1cd60c;
            case 0x1CD610u: goto label_1cd610;
            case 0x1CD614u: goto label_1cd614;
            case 0x1CD618u: goto label_1cd618;
            case 0x1CD61Cu: goto label_1cd61c;
            case 0x1CD620u: goto label_1cd620;
            case 0x1CD624u: goto label_1cd624;
            case 0x1CD628u: goto label_1cd628;
            case 0x1CD62Cu: goto label_1cd62c;
            case 0x1CD630u: goto label_1cd630;
            case 0x1CD634u: goto label_1cd634;
            case 0x1CD638u: goto label_1cd638;
            case 0x1CD63Cu: goto label_1cd63c;
            case 0x1CD640u: goto label_1cd640;
            case 0x1CD644u: goto label_1cd644;
            case 0x1CD648u: goto label_1cd648;
            case 0x1CD64Cu: goto label_1cd64c;
            case 0x1CD650u: goto label_1cd650;
            case 0x1CD654u: goto label_1cd654;
            case 0x1CD658u: goto label_1cd658;
            case 0x1CD65Cu: goto label_1cd65c;
            case 0x1CD660u: goto label_1cd660;
            case 0x1CD664u: goto label_1cd664;
            case 0x1CD668u: goto label_1cd668;
            case 0x1CD66Cu: goto label_1cd66c;
            case 0x1CD670u: goto label_1cd670;
            case 0x1CD674u: goto label_1cd674;
            case 0x1CD678u: goto label_1cd678;
            case 0x1CD67Cu: goto label_1cd67c;
            case 0x1CD680u: goto label_1cd680;
            case 0x1CD684u: goto label_1cd684;
            case 0x1CD688u: goto label_1cd688;
            case 0x1CD68Cu: goto label_1cd68c;
            case 0x1CD690u: goto label_1cd690;
            case 0x1CD694u: goto label_1cd694;
            case 0x1CD698u: goto label_1cd698;
            case 0x1CD69Cu: goto label_1cd69c;
            case 0x1CD6A0u: goto label_1cd6a0;
            case 0x1CD6A4u: goto label_1cd6a4;
            case 0x1CD6A8u: goto label_1cd6a8;
            case 0x1CD6ACu: goto label_1cd6ac;
            case 0x1CD6B0u: goto label_1cd6b0;
            case 0x1CD6B4u: goto label_1cd6b4;
            case 0x1CD6B8u: goto label_1cd6b8;
            case 0x1CD6BCu: goto label_1cd6bc;
            case 0x1CD6C0u: goto label_1cd6c0;
            case 0x1CD6C4u: goto label_1cd6c4;
            case 0x1CD6C8u: goto label_1cd6c8;
            case 0x1CD6CCu: goto label_1cd6cc;
            case 0x1CD6D0u: goto label_1cd6d0;
            case 0x1CD6D4u: goto label_1cd6d4;
            case 0x1CD6D8u: goto label_1cd6d8;
            case 0x1CD6DCu: goto label_1cd6dc;
            case 0x1CD6E0u: goto label_1cd6e0;
            case 0x1CD6E4u: goto label_1cd6e4;
            case 0x1CD6E8u: goto label_1cd6e8;
            case 0x1CD6ECu: goto label_1cd6ec;
            case 0x1CD6F0u: goto label_1cd6f0;
            case 0x1CD6F4u: goto label_1cd6f4;
            case 0x1CD6F8u: goto label_1cd6f8;
            case 0x1CD6FCu: goto label_1cd6fc;
            case 0x1CD700u: goto label_1cd700;
            case 0x1CD704u: goto label_1cd704;
            case 0x1CD708u: goto label_1cd708;
            case 0x1CD70Cu: goto label_1cd70c;
            case 0x1CD710u: goto label_1cd710;
            case 0x1CD714u: goto label_1cd714;
            case 0x1CD718u: goto label_1cd718;
            case 0x1CD71Cu: goto label_1cd71c;
            case 0x1CD720u: goto label_1cd720;
            case 0x1CD724u: goto label_1cd724;
            case 0x1CD728u: goto label_1cd728;
            case 0x1CD72Cu: goto label_1cd72c;
            case 0x1CD730u: goto label_1cd730;
            case 0x1CD734u: goto label_1cd734;
            case 0x1CD738u: goto label_1cd738;
            case 0x1CD73Cu: goto label_1cd73c;
            case 0x1CD740u: goto label_1cd740;
            case 0x1CD744u: goto label_1cd744;
            case 0x1CD748u: goto label_1cd748;
            case 0x1CD74Cu: goto label_1cd74c;
            case 0x1CD750u: goto label_1cd750;
            case 0x1CD754u: goto label_1cd754;
            case 0x1CD758u: goto label_1cd758;
            case 0x1CD75Cu: goto label_1cd75c;
            case 0x1CD760u: goto label_1cd760;
            case 0x1CD764u: goto label_1cd764;
            case 0x1CD768u: goto label_1cd768;
            case 0x1CD76Cu: goto label_1cd76c;
            case 0x1CD770u: goto label_1cd770;
            case 0x1CD774u: goto label_1cd774;
            case 0x1CD778u: goto label_1cd778;
            case 0x1CD77Cu: goto label_1cd77c;
            case 0x1CD780u: goto label_1cd780;
            case 0x1CD784u: goto label_1cd784;
            case 0x1CD788u: goto label_1cd788;
            case 0x1CD78Cu: goto label_1cd78c;
            case 0x1CD790u: goto label_1cd790;
            case 0x1CD794u: goto label_1cd794;
            case 0x1CD798u: goto label_1cd798;
            case 0x1CD79Cu: goto label_1cd79c;
            case 0x1CD7A0u: goto label_1cd7a0;
            case 0x1CD7A4u: goto label_1cd7a4;
            case 0x1CD7A8u: goto label_1cd7a8;
            case 0x1CD7ACu: goto label_1cd7ac;
            case 0x1CD7B0u: goto label_1cd7b0;
            case 0x1CD7B4u: goto label_1cd7b4;
            case 0x1CD7B8u: goto label_1cd7b8;
            case 0x1CD7BCu: goto label_1cd7bc;
            case 0x1CD7C0u: goto label_1cd7c0;
            case 0x1CD7C4u: goto label_1cd7c4;
            case 0x1CD7C8u: goto label_1cd7c8;
            case 0x1CD7CCu: goto label_1cd7cc;
            case 0x1CD7D0u: goto label_1cd7d0;
            case 0x1CD7D4u: goto label_1cd7d4;
            case 0x1CD7D8u: goto label_1cd7d8;
            case 0x1CD7DCu: goto label_1cd7dc;
            case 0x1CD7E0u: goto label_1cd7e0;
            case 0x1CD7E4u: goto label_1cd7e4;
            case 0x1CD7E8u: goto label_1cd7e8;
            case 0x1CD7ECu: goto label_1cd7ec;
            case 0x1CD7F0u: goto label_1cd7f0;
            case 0x1CD7F4u: goto label_1cd7f4;
            case 0x1CD7F8u: goto label_1cd7f8;
            case 0x1CD7FCu: goto label_1cd7fc;
            case 0x1CD800u: goto label_1cd800;
            case 0x1CD804u: goto label_1cd804;
            case 0x1CD808u: goto label_1cd808;
            case 0x1CD80Cu: goto label_1cd80c;
            case 0x1CD810u: goto label_1cd810;
            case 0x1CD814u: goto label_1cd814;
            case 0x1CD818u: goto label_1cd818;
            case 0x1CD81Cu: goto label_1cd81c;
            case 0x1CD820u: goto label_1cd820;
            case 0x1CD824u: goto label_1cd824;
            case 0x1CD828u: goto label_1cd828;
            case 0x1CD82Cu: goto label_1cd82c;
            case 0x1CD830u: goto label_1cd830;
            case 0x1CD834u: goto label_1cd834;
            case 0x1CD838u: goto label_1cd838;
            case 0x1CD83Cu: goto label_1cd83c;
            case 0x1CD840u: goto label_1cd840;
            case 0x1CD844u: goto label_1cd844;
            case 0x1CD848u: goto label_1cd848;
            case 0x1CD84Cu: goto label_1cd84c;
            case 0x1CD850u: goto label_1cd850;
            case 0x1CD854u: goto label_1cd854;
            case 0x1CD858u: goto label_1cd858;
            case 0x1CD85Cu: goto label_1cd85c;
            case 0x1CD860u: goto label_1cd860;
            case 0x1CD864u: goto label_1cd864;
            case 0x1CD868u: goto label_1cd868;
            case 0x1CD86Cu: goto label_1cd86c;
            case 0x1CD870u: goto label_1cd870;
            case 0x1CD874u: goto label_1cd874;
            case 0x1CD878u: goto label_1cd878;
            case 0x1CD87Cu: goto label_1cd87c;
            case 0x1CD880u: goto label_1cd880;
            case 0x1CD884u: goto label_1cd884;
            case 0x1CD888u: goto label_1cd888;
            case 0x1CD88Cu: goto label_1cd88c;
            case 0x1CD890u: goto label_1cd890;
            case 0x1CD894u: goto label_1cd894;
            case 0x1CD898u: goto label_1cd898;
            case 0x1CD89Cu: goto label_1cd89c;
            case 0x1CD8A0u: goto label_1cd8a0;
            case 0x1CD8A4u: goto label_1cd8a4;
            case 0x1CD8A8u: goto label_1cd8a8;
            case 0x1CD8ACu: goto label_1cd8ac;
            case 0x1CD8B0u: goto label_1cd8b0;
            case 0x1CD8B4u: goto label_1cd8b4;
            case 0x1CD8B8u: goto label_1cd8b8;
            case 0x1CD8BCu: goto label_1cd8bc;
            case 0x1CD8C0u: goto label_1cd8c0;
            case 0x1CD8C4u: goto label_1cd8c4;
            case 0x1CD8C8u: goto label_1cd8c8;
            case 0x1CD8CCu: goto label_1cd8cc;
            case 0x1CD8D0u: goto label_1cd8d0;
            case 0x1CD8D4u: goto label_1cd8d4;
            case 0x1CD8D8u: goto label_1cd8d8;
            case 0x1CD8DCu: goto label_1cd8dc;
            case 0x1CD8E0u: goto label_1cd8e0;
            case 0x1CD8E4u: goto label_1cd8e4;
            case 0x1CD8E8u: goto label_1cd8e8;
            case 0x1CD8ECu: goto label_1cd8ec;
            case 0x1CD8F0u: goto label_1cd8f0;
            case 0x1CD8F4u: goto label_1cd8f4;
            case 0x1CD8F8u: goto label_1cd8f8;
            case 0x1CD8FCu: goto label_1cd8fc;
            case 0x1CD900u: goto label_1cd900;
            case 0x1CD904u: goto label_1cd904;
            case 0x1CD908u: goto label_1cd908;
            case 0x1CD90Cu: goto label_1cd90c;
            case 0x1CD910u: goto label_1cd910;
            case 0x1CD914u: goto label_1cd914;
            case 0x1CD918u: goto label_1cd918;
            case 0x1CD91Cu: goto label_1cd91c;
            case 0x1CD920u: goto label_1cd920;
            case 0x1CD924u: goto label_1cd924;
            case 0x1CD928u: goto label_1cd928;
            case 0x1CD92Cu: goto label_1cd92c;
            case 0x1CD930u: goto label_1cd930;
            case 0x1CD934u: goto label_1cd934;
            case 0x1CD938u: goto label_1cd938;
            case 0x1CD93Cu: goto label_1cd93c;
            case 0x1CD940u: goto label_1cd940;
            case 0x1CD944u: goto label_1cd944;
            case 0x1CD948u: goto label_1cd948;
            case 0x1CD94Cu: goto label_1cd94c;
            case 0x1CD950u: goto label_1cd950;
            case 0x1CD954u: goto label_1cd954;
            case 0x1CD958u: goto label_1cd958;
            case 0x1CD95Cu: goto label_1cd95c;
            case 0x1CD960u: goto label_1cd960;
            case 0x1CD964u: goto label_1cd964;
            case 0x1CD968u: goto label_1cd968;
            case 0x1CD96Cu: goto label_1cd96c;
            case 0x1CD970u: goto label_1cd970;
            case 0x1CD974u: goto label_1cd974;
            case 0x1CD978u: goto label_1cd978;
            case 0x1CD97Cu: goto label_1cd97c;
            case 0x1CD980u: goto label_1cd980;
            case 0x1CD984u: goto label_1cd984;
            case 0x1CD988u: goto label_1cd988;
            case 0x1CD98Cu: goto label_1cd98c;
            case 0x1CD990u: goto label_1cd990;
            case 0x1CD994u: goto label_1cd994;
            case 0x1CD998u: goto label_1cd998;
            case 0x1CD99Cu: goto label_1cd99c;
            case 0x1CD9A0u: goto label_1cd9a0;
            case 0x1CD9A4u: goto label_1cd9a4;
            case 0x1CD9A8u: goto label_1cd9a8;
            case 0x1CD9ACu: goto label_1cd9ac;
            case 0x1CD9B0u: goto label_1cd9b0;
            case 0x1CD9B4u: goto label_1cd9b4;
            case 0x1CD9B8u: goto label_1cd9b8;
            case 0x1CD9BCu: goto label_1cd9bc;
            case 0x1CD9C0u: goto label_1cd9c0;
            case 0x1CD9C4u: goto label_1cd9c4;
            case 0x1CD9C8u: goto label_1cd9c8;
            case 0x1CD9CCu: goto label_1cd9cc;
            case 0x1CD9D0u: goto label_1cd9d0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1cd9cc:
    ctx->pc = 0x1CD9D4u;
}
