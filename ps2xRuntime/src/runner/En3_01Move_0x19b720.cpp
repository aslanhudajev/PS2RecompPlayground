#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En3_01Move
// Address: 0x19b720 - 0x19bd40
void En3_01Move_0x19b720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En3_01Move_0x19b720");
#endif

    ctx->pc = 0x19b720u;

label_19b720:
    // 0x19b720: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19b720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19b724:
    // 0x19b724: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19b724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19b728:
    // 0x19b728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_19b72c:
    // 0x19b72c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b72cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b730:
    // 0x19b730: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19b734:
    // 0x19b734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b738:
    // 0x19b738: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19b738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b73c:
    // 0x19b73c: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x19b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b740:
    // 0x19b740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19b740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19b744:
    // 0x19b744: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x19b744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b748:
    // 0x19b748: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19b748u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19b74c:
    // 0x19b74c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x19b74cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
label_19b750:
    // 0x19b750: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b754:
    // 0x19b754: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x19b754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b758:
    // 0x19b758: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19b758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b75c:
    // 0x19b75c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19b75cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19b760:
    // 0x19b760: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x19b760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
label_19b764:
    // 0x19b764: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b768:
    // 0x19b768: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x19b768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b76c:
    // 0x19b76c: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19b76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b770:
    // 0x19b770: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19b770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19b774:
    // 0x19b774: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x19b774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
label_19b778:
    // 0x19b778: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b77c:
    // 0x19b77c: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x19b77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b780:
    // 0x19b780: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x19b780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b784:
    // 0x19b784: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19b784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19b788:
    // 0x19b788: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x19b788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
label_19b78c:
    // 0x19b78c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b790:
    // 0x19b790: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x19b790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b794:
    // 0x19b794: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x19b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b798:
    // 0x19b798: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x19b798u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_19b79c:
    // 0x19b79c: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x19b79cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
label_19b7a0:
    // 0x19b7a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b7a4:
    // 0x19b7a4: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x19b7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b7a8:
    // 0x19b7a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b7a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b7ac:
    // 0x19b7ac: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19b7b0:
    if (ctx->pc == 0x19B7B0u) {
        ctx->pc = 0x19B7B0u;
            // 0x19b7b0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->pc = 0x19B7B4u;
        goto label_19b7b4;
    }
    ctx->pc = 0x19B7ACu;
    {
        const bool branch_taken_0x19b7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7ACu;
            // 0x19b7b0: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7ac) {
            ctx->pc = 0x19B7D0u;
            goto label_19b7d0;
        }
    }
    ctx->pc = 0x19B7B4u;
label_19b7b4:
    // 0x19b7b4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b7b8:
    // 0x19b7b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b7b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b7bc:
    // 0x19b7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b7c0:
    // 0x19b7c0: 0x0  nop
    ctx->pc = 0x19b7c0u;
    // NOP
label_19b7c4:
    // 0x19b7c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b7c8:
    // 0x19b7c8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x19b7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_19b7cc:
    // 0x19b7cc: 0x0  nop
    ctx->pc = 0x19b7ccu;
    // NOP
label_19b7d0:
    // 0x19b7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b7d4:
    // 0x19b7d4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19b7d8:
    // 0x19b7d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b7d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b7dc:
    // 0x19b7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b7e0:
    // 0x19b7e0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x19b7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b7e4:
    // 0x19b7e4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b7e8:
    // 0x19b7e8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19b7ec:
    if (ctx->pc == 0x19B7ECu) {
        ctx->pc = 0x19B7ECu;
            // 0x19b7ec: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->pc = 0x19B7F0u;
        goto label_19b7f0;
    }
    ctx->pc = 0x19B7E8u;
    {
        const bool branch_taken_0x19b7e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7E8u;
            // 0x19b7ec: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b7e8) {
            ctx->pc = 0x19B808u;
            goto label_19b808;
        }
    }
    ctx->pc = 0x19B7F0u;
label_19b7f0:
    // 0x19b7f0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b7f4:
    // 0x19b7f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b7f4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b7f8:
    // 0x19b7f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b7f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b7fc:
    // 0x19b7fc: 0x0  nop
    ctx->pc = 0x19b7fcu;
    // NOP
label_19b800:
    // 0x19b800: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b804:
    // 0x19b804: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19b804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19b808:
    // 0x19b808: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b80c:
    // 0x19b80c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19b810:
    // 0x19b810: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b810u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b814:
    // 0x19b814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b818:
    // 0x19b818: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19b818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b81c:
    // 0x19b81c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b81cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b820:
    // 0x19b820: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19b824:
    if (ctx->pc == 0x19B824u) {
        ctx->pc = 0x19B824u;
            // 0x19b824: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19B828u;
        goto label_19b828;
    }
    ctx->pc = 0x19B820u;
    {
        const bool branch_taken_0x19b820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B820u;
            // 0x19b824: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b820) {
            ctx->pc = 0x19B840u;
            goto label_19b840;
        }
    }
    ctx->pc = 0x19B828u;
label_19b828:
    // 0x19b828: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b82c:
    // 0x19b82c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b82cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b830:
    // 0x19b830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b834:
    // 0x19b834: 0x0  nop
    ctx->pc = 0x19b834u;
    // NOP
label_19b838:
    // 0x19b838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b83c:
    // 0x19b83c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19b83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19b840:
    // 0x19b840: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b844:
    // 0x19b844: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19b848:
    // 0x19b848: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b848u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b84c:
    // 0x19b84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b850:
    // 0x19b850: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x19b850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b854:
    // 0x19b854: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b858:
    // 0x19b858: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19b85c:
    if (ctx->pc == 0x19B85Cu) {
        ctx->pc = 0x19B85Cu;
            // 0x19b85c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->pc = 0x19B860u;
        goto label_19b860;
    }
    ctx->pc = 0x19B858u;
    {
        const bool branch_taken_0x19b858 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B858u;
            // 0x19b85c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b858) {
            ctx->pc = 0x19B878u;
            goto label_19b878;
        }
    }
    ctx->pc = 0x19B860u;
label_19b860:
    // 0x19b860: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b864:
    // 0x19b864: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b864u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b868:
    // 0x19b868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b86c:
    // 0x19b86c: 0x0  nop
    ctx->pc = 0x19b86cu;
    // NOP
label_19b870:
    // 0x19b870: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b870u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b874:
    // 0x19b874: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19b874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19b878:
    // 0x19b878: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b87c:
    // 0x19b87c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x19b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_19b880:
    // 0x19b880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b880u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b884:
    // 0x19b884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b888:
    // 0x19b888: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b88c:
    // 0x19b88c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19b88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b890:
    // 0x19b890: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19b894:
    if (ctx->pc == 0x19B894u) {
        ctx->pc = 0x19B894u;
            // 0x19b894: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19B898u;
        goto label_19b898;
    }
    ctx->pc = 0x19B890u;
    {
        const bool branch_taken_0x19b890 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B890u;
            // 0x19b894: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b890) {
            ctx->pc = 0x19B8B0u;
            goto label_19b8b0;
        }
    }
    ctx->pc = 0x19B898u;
label_19b898:
    // 0x19b898: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b89c:
    // 0x19b89c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b89cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b8a0:
    // 0x19b8a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b8a4:
    // 0x19b8a4: 0x0  nop
    ctx->pc = 0x19b8a4u;
    // NOP
label_19b8a8:
    // 0x19b8a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b8ac:
    // 0x19b8ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19b8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19b8b0:
    // 0x19b8b0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19b8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b8b4:
    // 0x19b8b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x19b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_19b8b8:
    // 0x19b8b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b8b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b8bc:
    // 0x19b8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b8c0:
    // 0x19b8c0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x19b8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b8c4:
    // 0x19b8c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19b8c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b8c8:
    // 0x19b8c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_19b8cc:
    if (ctx->pc == 0x19B8CCu) {
        ctx->pc = 0x19B8CCu;
            // 0x19b8cc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->pc = 0x19B8D0u;
        goto label_19b8d0;
    }
    ctx->pc = 0x19B8C8u;
    {
        const bool branch_taken_0x19b8c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8C8u;
            // 0x19b8cc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b8c8) {
            ctx->pc = 0x19B8E8u;
            goto label_19b8e8;
        }
    }
    ctx->pc = 0x19B8D0u;
label_19b8d0:
    // 0x19b8d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_19b8d4:
    // 0x19b8d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19b8d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
label_19b8d8:
    // 0x19b8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b8dc:
    // 0x19b8dc: 0x0  nop
    ctx->pc = 0x19b8dcu;
    // NOP
label_19b8e0:
    // 0x19b8e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b8e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b8e4:
    // 0x19b8e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x19b8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_19b8e8:
    // 0x19b8e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19b8ec:
    // 0x19b8ec: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x19b8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_19b8f0:
    // 0x19b8f0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x19b8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19b8f4:
    // 0x19b8f4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19b8f8:
    // 0x19b8f8: 0xc066f50  jal         func_19BD40
label_19b8fc:
    if (ctx->pc == 0x19B8FCu) {
        ctx->pc = 0x19B8FCu;
            // 0x19b8fc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->pc = 0x19B900u;
        goto label_19b900;
    }
    ctx->pc = 0x19B8F8u;
    SET_GPR_U32(ctx, 31, 0x19B900u);
    ctx->pc = 0x19B8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B8F8u;
            // 0x19b8fc: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BD40u;
    if (runtime->hasFunction(0x19BD40u)) {
        auto targetFn = runtime->lookupFunction(0x19BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B900u; }
        if (ctx->pc != 0x19B900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x19bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B900u; }
        if (ctx->pc != 0x19B900u) { return; }
    }
    ctx->pc = 0x19B900u;
label_19b900:
    // 0x19b900: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x19b900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_19b904:
    // 0x19b904: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19b908:
    // 0x19b908: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x19b908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
label_19b90c:
    // 0x19b90c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19b910:
    // 0x19b910: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x19b910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_19b914:
    // 0x19b914: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x19b914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_19b918:
    // 0x19b918: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_19b91c:
    if (ctx->pc == 0x19B91Cu) {
        ctx->pc = 0x19B91Cu;
            // 0x19b91c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x19B920u;
        goto label_19b920;
    }
    ctx->pc = 0x19B918u;
    {
        const bool branch_taken_0x19b918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19B91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B918u;
            // 0x19b91c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b918) {
            ctx->pc = 0x19B9F0u;
            goto label_19b9f0;
        }
    }
    ctx->pc = 0x19B920u;
label_19b920:
    // 0x19b920: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
label_19b924:
    if (ctx->pc == 0x19B924u) {
        ctx->pc = 0x19B928u;
        goto label_19b928;
    }
    ctx->pc = 0x19B920u;
    {
        const bool branch_taken_0x19b920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b920) {
            ctx->pc = 0x19B9B8u;
            goto label_19b9b8;
        }
    }
    ctx->pc = 0x19B928u;
label_19b928:
    // 0x19b928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19b928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b92c:
    // 0x19b92c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_19b930:
    if (ctx->pc == 0x19B930u) {
        ctx->pc = 0x19B934u;
        goto label_19b934;
    }
    ctx->pc = 0x19B92Cu;
    {
        const bool branch_taken_0x19b92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19b92c) {
            ctx->pc = 0x19B980u;
            goto label_19b980;
        }
    }
    ctx->pc = 0x19B934u;
label_19b934:
    // 0x19b934: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_19b938:
    if (ctx->pc == 0x19B938u) {
        ctx->pc = 0x19B93Cu;
        goto label_19b93c;
    }
    ctx->pc = 0x19B934u;
    {
        const bool branch_taken_0x19b934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b934) {
            ctx->pc = 0x19B948u;
            goto label_19b948;
        }
    }
    ctx->pc = 0x19B93Cu;
label_19b93c:
    // 0x19b93c: 0x1000003a  b           . + 4 + (0x3A << 2)
label_19b940:
    if (ctx->pc == 0x19B940u) {
        ctx->pc = 0x19B944u;
        goto label_19b944;
    }
    ctx->pc = 0x19B93Cu;
    {
        const bool branch_taken_0x19b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b93c) {
            ctx->pc = 0x19BA28u;
            goto label_19ba28;
        }
    }
    ctx->pc = 0x19B944u;
label_19b944:
    // 0x19b944: 0x0  nop
    ctx->pc = 0x19b944u;
    // NOP
label_19b948:
    // 0x19b948: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x19b948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_19b94c:
    // 0x19b94c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19b94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b950:
    // 0x19b950: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19b950u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_19b954:
    // 0x19b954: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b954u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b958:
    // 0x19b958: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19b958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19b95c:
    // 0x19b95c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b95cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19b960:
    // 0x19b960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b964:
    // 0x19b964: 0x0  nop
    ctx->pc = 0x19b964u;
    // NOP
label_19b968:
    // 0x19b968: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x19b968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_19b96c:
    // 0x19b96c: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x19b96cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19b970:
    // 0x19b970: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19b970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b974:
    // 0x19b974: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b974u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b978:
    // 0x19b978: 0x1000002b  b           . + 4 + (0x2B << 2)
label_19b97c:
    if (ctx->pc == 0x19B97Cu) {
        ctx->pc = 0x19B97Cu;
            // 0x19b97c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x19B980u;
        goto label_19b980;
    }
    ctx->pc = 0x19B978u;
    {
        const bool branch_taken_0x19b978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B978u;
            // 0x19b97c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b978) {
            ctx->pc = 0x19BA28u;
            goto label_19ba28;
        }
    }
    ctx->pc = 0x19B980u;
label_19b980:
    // 0x19b980: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x19b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
label_19b984:
    // 0x19b984: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19b984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b988:
    // 0x19b988: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x19b988u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
label_19b98c:
    // 0x19b98c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b98cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b990:
    // 0x19b990: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x19b990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_19b994:
    // 0x19b994: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19b994u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
label_19b998:
    // 0x19b998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b99c:
    // 0x19b99c: 0x0  nop
    ctx->pc = 0x19b99cu;
    // NOP
label_19b9a0:
    // 0x19b9a0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x19b9a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_19b9a4:
    // 0x19b9a4: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x19b9a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19b9a8:
    // 0x19b9a8: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19b9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b9ac:
    // 0x19b9ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19b9acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_19b9b0:
    // 0x19b9b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19b9b4:
    if (ctx->pc == 0x19B9B4u) {
        ctx->pc = 0x19B9B4u;
            // 0x19b9b4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x19B9B8u;
        goto label_19b9b8;
    }
    ctx->pc = 0x19B9B0u;
    {
        const bool branch_taken_0x19b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9B0u;
            // 0x19b9b4: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9b0) {
            ctx->pc = 0x19BA28u;
            goto label_19ba28;
        }
    }
    ctx->pc = 0x19B9B8u;
label_19b9b8:
    // 0x19b9b8: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x19b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
label_19b9bc:
    // 0x19b9bc: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19b9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b9c0:
    // 0x19b9c0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x19b9c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_19b9c4:
    // 0x19b9c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b9c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b9c8:
    // 0x19b9c8: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x19b9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
label_19b9cc:
    // 0x19b9cc: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x19b9ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_19b9d0:
    // 0x19b9d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b9d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b9d4:
    // 0x19b9d4: 0x0  nop
    ctx->pc = 0x19b9d4u;
    // NOP
label_19b9d8:
    // 0x19b9d8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x19b9d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_19b9dc:
    // 0x19b9dc: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x19b9dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19b9e0:
    // 0x19b9e0: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19b9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b9e4:
    // 0x19b9e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b9e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b9e8:
    // 0x19b9e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_19b9ec:
    if (ctx->pc == 0x19B9ECu) {
        ctx->pc = 0x19B9ECu;
            // 0x19b9ec: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->pc = 0x19B9F0u;
        goto label_19b9f0;
    }
    ctx->pc = 0x19B9E8u;
    {
        const bool branch_taken_0x19b9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9E8u;
            // 0x19b9ec: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9e8) {
            ctx->pc = 0x19BA28u;
            goto label_19ba28;
        }
    }
    ctx->pc = 0x19B9F0u;
label_19b9f0:
    // 0x19b9f0: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x19b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
label_19b9f4:
    // 0x19b9f4: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x19b9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19b9f8:
    // 0x19b9f8: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x19b9f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4719u)));
label_19b9fc:
    // 0x19b9fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19b9fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19ba00:
    // 0x19ba00: 0x3c023be5  lui         $v0, 0x3BE5
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15333 << 16));
label_19ba04:
    // 0x19ba04: 0x34426042  ori         $v0, $v0, 0x6042
    ctx->pc = 0x19ba04u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)24642u)));
label_19ba08:
    // 0x19ba08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ba08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ba0c:
    // 0x19ba0c: 0x0  nop
    ctx->pc = 0x19ba0cu;
    // NOP
label_19ba10:
    // 0x19ba10: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x19ba10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_19ba14:
    // 0x19ba14: 0xe60100d0  swc1        $f1, 0xD0($s0)
    ctx->pc = 0x19ba14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
label_19ba18:
    // 0x19ba18: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x19ba18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19ba1c:
    // 0x19ba1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19ba1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19ba20:
    // 0x19ba20: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x19ba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
label_19ba24:
    // 0x19ba24: 0x0  nop
    ctx->pc = 0x19ba24u;
    // NOP
label_19ba28:
    // 0x19ba28: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x19ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19ba2c:
    // 0x19ba2c: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x19ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_19ba30:
    // 0x19ba30: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_19ba34:
    if (ctx->pc == 0x19BA34u) {
        ctx->pc = 0x19BA34u;
            // 0x19ba34: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x19BA38u;
        goto label_19ba38;
    }
    ctx->pc = 0x19BA30u;
    {
        const bool branch_taken_0x19ba30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19BA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA30u;
            // 0x19ba34: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba30) {
            ctx->pc = 0x19BAA8u;
            goto label_19baa8;
        }
    }
    ctx->pc = 0x19BA38u;
label_19ba38:
    // 0x19ba38: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_19ba3c:
    if (ctx->pc == 0x19BA3Cu) {
        ctx->pc = 0x19BA40u;
        goto label_19ba40;
    }
    ctx->pc = 0x19BA38u;
    {
        const bool branch_taken_0x19ba38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ba38) {
            ctx->pc = 0x19BA80u;
            goto label_19ba80;
        }
    }
    ctx->pc = 0x19BA40u;
label_19ba40:
    // 0x19ba40: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_19ba44:
    // 0x19ba44: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_19ba48:
    if (ctx->pc == 0x19BA48u) {
        ctx->pc = 0x19BA4Cu;
        goto label_19ba4c;
    }
    ctx->pc = 0x19BA44u;
    {
        const bool branch_taken_0x19ba44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ba44) {
            ctx->pc = 0x19BA58u;
            goto label_19ba58;
        }
    }
    ctx->pc = 0x19BA4Cu;
label_19ba4c:
    // 0x19ba4c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_19ba50:
    if (ctx->pc == 0x19BA50u) {
        ctx->pc = 0x19BA54u;
        goto label_19ba54;
    }
    ctx->pc = 0x19BA4Cu;
    {
        const bool branch_taken_0x19ba4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba4c) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BA54u;
label_19ba54:
    // 0x19ba54: 0x0  nop
    ctx->pc = 0x19ba54u;
    // NOP
label_19ba58:
    // 0x19ba58: 0xc065d00  jal         func_197400
label_19ba5c:
    if (ctx->pc == 0x19BA5Cu) {
        ctx->pc = 0x19BA60u;
        goto label_19ba60;
    }
    ctx->pc = 0x19BA58u;
    SET_GPR_U32(ctx, 31, 0x19BA60u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA60u; }
        if (ctx->pc != 0x19BA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA60u; }
        if (ctx->pc != 0x19BA60u) { return; }
    }
    ctx->pc = 0x19BA60u;
label_19ba60:
    // 0x19ba60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ba64:
    // 0x19ba64: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
label_19ba68:
    if (ctx->pc == 0x19BA68u) {
        ctx->pc = 0x19BA6Cu;
        goto label_19ba6c;
    }
    ctx->pc = 0x19BA64u;
    {
        const bool branch_taken_0x19ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19ba64) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BA6Cu;
label_19ba6c:
    // 0x19ba6c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19ba70:
    // 0x19ba70: 0xc06560c  jal         func_195830
label_19ba74:
    if (ctx->pc == 0x19BA74u) {
        ctx->pc = 0x19BA74u;
            // 0x19ba74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x19BA78u;
        goto label_19ba78;
    }
    ctx->pc = 0x19BA70u;
    SET_GPR_U32(ctx, 31, 0x19BA78u);
    ctx->pc = 0x19BA74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA70u;
            // 0x19ba74: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA78u; }
        if (ctx->pc != 0x19BA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA78u; }
        if (ctx->pc != 0x19BA78u) { return; }
    }
    ctx->pc = 0x19BA78u;
label_19ba78:
    // 0x19ba78: 0x10000013  b           . + 4 + (0x13 << 2)
label_19ba7c:
    if (ctx->pc == 0x19BA7Cu) {
        ctx->pc = 0x19BA80u;
        goto label_19ba80;
    }
    ctx->pc = 0x19BA78u;
    {
        const bool branch_taken_0x19ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba78) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BA80u;
label_19ba80:
    // 0x19ba80: 0xc065d00  jal         func_197400
label_19ba84:
    if (ctx->pc == 0x19BA84u) {
        ctx->pc = 0x19BA88u;
        goto label_19ba88;
    }
    ctx->pc = 0x19BA80u;
    SET_GPR_U32(ctx, 31, 0x19BA88u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA88u; }
        if (ctx->pc != 0x19BA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA88u; }
        if (ctx->pc != 0x19BA88u) { return; }
    }
    ctx->pc = 0x19BA88u;
label_19ba88:
    // 0x19ba88: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_19ba8c:
    if (ctx->pc == 0x19BA8Cu) {
        ctx->pc = 0x19BA90u;
        goto label_19ba90;
    }
    ctx->pc = 0x19BA88u;
    {
        const bool branch_taken_0x19ba88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19ba88) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BA90u;
label_19ba90:
    // 0x19ba90: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x19ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19ba94:
    // 0x19ba94: 0xc06560c  jal         func_195830
label_19ba98:
    if (ctx->pc == 0x19BA98u) {
        ctx->pc = 0x19BA98u;
            // 0x19ba98: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x19BA9Cu;
        goto label_19ba9c;
    }
    ctx->pc = 0x19BA94u;
    SET_GPR_U32(ctx, 31, 0x19BA9Cu);
    ctx->pc = 0x19BA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA94u;
            // 0x19ba98: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA9Cu; }
        if (ctx->pc != 0x19BA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BA9Cu; }
        if (ctx->pc != 0x19BA9Cu) { return; }
    }
    ctx->pc = 0x19BA9Cu;
label_19ba9c:
    // 0x19ba9c: 0x1000000a  b           . + 4 + (0xA << 2)
label_19baa0:
    if (ctx->pc == 0x19BAA0u) {
        ctx->pc = 0x19BAA4u;
        goto label_19baa4;
    }
    ctx->pc = 0x19BA9Cu;
    {
        const bool branch_taken_0x19ba9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ba9c) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BAA4u;
label_19baa4:
    // 0x19baa4: 0x0  nop
    ctx->pc = 0x19baa4u;
    // NOP
label_19baa8:
    // 0x19baa8: 0xc065d00  jal         func_197400
label_19baac:
    if (ctx->pc == 0x19BAACu) {
        ctx->pc = 0x19BAB0u;
        goto label_19bab0;
    }
    ctx->pc = 0x19BAA8u;
    SET_GPR_U32(ctx, 31, 0x19BAB0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAB0u; }
        if (ctx->pc != 0x19BAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAB0u; }
        if (ctx->pc != 0x19BAB0u) { return; }
    }
    ctx->pc = 0x19BAB0u;
label_19bab0:
    // 0x19bab0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x19bab0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19bab4:
    // 0x19bab4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_19bab8:
    if (ctx->pc == 0x19BAB8u) {
        ctx->pc = 0x19BABCu;
        goto label_19babc;
    }
    ctx->pc = 0x19BAB4u;
    {
        const bool branch_taken_0x19bab4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bab4) {
            ctx->pc = 0x19BAC8u;
            goto label_19bac8;
        }
    }
    ctx->pc = 0x19BABCu;
label_19babc:
    // 0x19babc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x19babcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19bac0:
    // 0x19bac0: 0xc06560c  jal         func_195830
label_19bac4:
    if (ctx->pc == 0x19BAC4u) {
        ctx->pc = 0x19BAC4u;
            // 0x19bac4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->pc = 0x19BAC8u;
        goto label_19bac8;
    }
    ctx->pc = 0x19BAC0u;
    SET_GPR_U32(ctx, 31, 0x19BAC8u);
    ctx->pc = 0x19BAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAC0u;
            // 0x19bac4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAC8u; }
        if (ctx->pc != 0x19BAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAC8u; }
        if (ctx->pc != 0x19BAC8u) { return; }
    }
    ctx->pc = 0x19BAC8u;
label_19bac8:
    // 0x19bac8: 0xc04b788  jal         func_12DE20
label_19bacc:
    if (ctx->pc == 0x19BACCu) {
        ctx->pc = 0x19BACCu;
            // 0x19bacc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19BAD0u;
        goto label_19bad0;
    }
    ctx->pc = 0x19BAC8u;
    SET_GPR_U32(ctx, 31, 0x19BAD0u);
    ctx->pc = 0x19BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAC8u;
            // 0x19bacc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAD0u; }
        if (ctx->pc != 0x19BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAD0u; }
        if (ctx->pc != 0x19BAD0u) { return; }
    }
    ctx->pc = 0x19BAD0u;
label_19bad0:
    // 0x19bad0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19bad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bad4:
    // 0x19bad4: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x19bad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19bad8:
    // 0x19bad8: 0xc04b7da  jal         func_12DF68
label_19badc:
    if (ctx->pc == 0x19BADCu) {
        ctx->pc = 0x19BADCu;
            // 0x19badc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BAE0u;
        goto label_19bae0;
    }
    ctx->pc = 0x19BAD8u;
    SET_GPR_U32(ctx, 31, 0x19BAE0u);
    ctx->pc = 0x19BADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAD8u;
            // 0x19badc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAE0u; }
        if (ctx->pc != 0x19BAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAE0u; }
        if (ctx->pc != 0x19BAE0u) { return; }
    }
    ctx->pc = 0x19BAE0u;
label_19bae0:
    // 0x19bae0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bae4:
    // 0x19bae4: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x19bae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19bae8:
    // 0x19bae8: 0xc04b804  jal         func_12E010
label_19baec:
    if (ctx->pc == 0x19BAECu) {
        ctx->pc = 0x19BAECu;
            // 0x19baec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BAF0u;
        goto label_19baf0;
    }
    ctx->pc = 0x19BAE8u;
    SET_GPR_U32(ctx, 31, 0x19BAF0u);
    ctx->pc = 0x19BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAE8u;
            // 0x19baec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAF0u; }
        if (ctx->pc != 0x19BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAF0u; }
        if (ctx->pc != 0x19BAF0u) { return; }
    }
    ctx->pc = 0x19BAF0u;
label_19baf0:
    // 0x19baf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19baf4:
    // 0x19baf4: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x19baf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19baf8:
    // 0x19baf8: 0xc04b7b0  jal         func_12DEC0
label_19bafc:
    if (ctx->pc == 0x19BAFCu) {
        ctx->pc = 0x19BAFCu;
            // 0x19bafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BB00u;
        goto label_19bb00;
    }
    ctx->pc = 0x19BAF8u;
    SET_GPR_U32(ctx, 31, 0x19BB00u);
    ctx->pc = 0x19BAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAF8u;
            // 0x19bafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB00u; }
        if (ctx->pc != 0x19BB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB00u; }
        if (ctx->pc != 0x19BB00u) { return; }
    }
    ctx->pc = 0x19BB00u;
label_19bb00:
    // 0x19bb00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bb04:
    // 0x19bb04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x19bb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bb08:
    // 0x19bb08: 0xc04b75e  jal         func_12DD78
label_19bb0c:
    if (ctx->pc == 0x19BB0Cu) {
        ctx->pc = 0x19BB0Cu;
            // 0x19bb0c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->pc = 0x19BB10u;
        goto label_19bb10;
    }
    ctx->pc = 0x19BB08u;
    SET_GPR_U32(ctx, 31, 0x19BB10u);
    ctx->pc = 0x19BB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB08u;
            // 0x19bb0c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB10u; }
        if (ctx->pc != 0x19BB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB10u; }
        if (ctx->pc != 0x19BB10u) { return; }
    }
    ctx->pc = 0x19BB10u;
label_19bb10:
    // 0x19bb10: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19bb14:
    // 0x19bb14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_19bb18:
    // 0x19bb18: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_19bb1c:
    // 0x19bb1c: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_19bb20:
    if (ctx->pc == 0x19BB20u) {
        ctx->pc = 0x19BB24u;
        goto label_19bb24;
    }
    ctx->pc = 0x19BB1Cu;
    {
        const bool branch_taken_0x19bb1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb1c) {
            ctx->pc = 0x19BB70u;
            goto label_19bb70;
        }
    }
    ctx->pc = 0x19BB24u;
label_19bb24:
    // 0x19bb24: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x19bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19bb28:
    // 0x19bb28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19bb2c:
    if (ctx->pc == 0x19BB2Cu) {
        ctx->pc = 0x19BB30u;
        goto label_19bb30;
    }
    ctx->pc = 0x19BB28u;
    {
        const bool branch_taken_0x19bb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb28) {
            ctx->pc = 0x19BB40u;
            goto label_19bb40;
        }
    }
    ctx->pc = 0x19BB30u;
label_19bb30:
    // 0x19bb30: 0xc0604f0  jal         func_1813C0
label_19bb34:
    if (ctx->pc == 0x19BB34u) {
        ctx->pc = 0x19BB34u;
            // 0x19bb34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19BB38u;
        goto label_19bb38;
    }
    ctx->pc = 0x19BB30u;
    SET_GPR_U32(ctx, 31, 0x19BB38u);
    ctx->pc = 0x19BB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB30u;
            // 0x19bb34: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB38u; }
        if (ctx->pc != 0x19BB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB38u; }
        if (ctx->pc != 0x19BB38u) { return; }
    }
    ctx->pc = 0x19BB38u;
label_19bb38:
    // 0x19bb38: 0x10000003  b           . + 4 + (0x3 << 2)
label_19bb3c:
    if (ctx->pc == 0x19BB3Cu) {
        ctx->pc = 0x19BB40u;
        goto label_19bb40;
    }
    ctx->pc = 0x19BB38u;
    {
        const bool branch_taken_0x19bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb38) {
            ctx->pc = 0x19BB48u;
            goto label_19bb48;
        }
    }
    ctx->pc = 0x19BB40u;
label_19bb40:
    // 0x19bb40: 0xc0604dc  jal         func_181370
label_19bb44:
    if (ctx->pc == 0x19BB44u) {
        ctx->pc = 0x19BB44u;
            // 0x19bb44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19BB48u;
        goto label_19bb48;
    }
    ctx->pc = 0x19BB40u;
    SET_GPR_U32(ctx, 31, 0x19BB48u);
    ctx->pc = 0x19BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB40u;
            // 0x19bb44: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB48u; }
        if (ctx->pc != 0x19BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB48u; }
        if (ctx->pc != 0x19BB48u) { return; }
    }
    ctx->pc = 0x19BB48u;
label_19bb48:
    // 0x19bb48: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_19bb4c:
    // 0x19bb4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19bb50:
    if (ctx->pc == 0x19BB50u) {
        ctx->pc = 0x19BB54u;
        goto label_19bb54;
    }
    ctx->pc = 0x19BB4Cu;
    {
        const bool branch_taken_0x19bb4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bb4c) {
            ctx->pc = 0x19BB60u;
            goto label_19bb60;
        }
    }
    ctx->pc = 0x19BB54u;
label_19bb54:
    // 0x19bb54: 0x1000000a  b           . + 4 + (0xA << 2)
label_19bb58:
    if (ctx->pc == 0x19BB58u) {
        ctx->pc = 0x19BB58u;
            // 0x19bb58: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x19BB5Cu;
        goto label_19bb5c;
    }
    ctx->pc = 0x19BB54u;
    {
        const bool branch_taken_0x19bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB54u;
            // 0x19bb58: 0xae000110  sw          $zero, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb54) {
            ctx->pc = 0x19BB80u;
            goto label_19bb80;
        }
    }
    ctx->pc = 0x19BB5Cu;
label_19bb5c:
    // 0x19bb5c: 0x0  nop
    ctx->pc = 0x19bb5cu;
    // NOP
label_19bb60:
    // 0x19bb60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bb64:
    // 0x19bb64: 0x10000006  b           . + 4 + (0x6 << 2)
label_19bb68:
    if (ctx->pc == 0x19BB68u) {
        ctx->pc = 0x19BB68u;
            // 0x19bb68: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->pc = 0x19BB6Cu;
        goto label_19bb6c;
    }
    ctx->pc = 0x19BB64u;
    {
        const bool branch_taken_0x19bb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB64u;
            // 0x19bb68: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb64) {
            ctx->pc = 0x19BB80u;
            goto label_19bb80;
        }
    }
    ctx->pc = 0x19BB6Cu;
label_19bb6c:
    // 0x19bb6c: 0x0  nop
    ctx->pc = 0x19bb6cu;
    // NOP
label_19bb70:
    // 0x19bb70: 0xc0604dc  jal         func_181370
label_19bb74:
    if (ctx->pc == 0x19BB74u) {
        ctx->pc = 0x19BB74u;
            // 0x19bb74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x19BB78u;
        goto label_19bb78;
    }
    ctx->pc = 0x19BB70u;
    SET_GPR_U32(ctx, 31, 0x19BB78u);
    ctx->pc = 0x19BB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB70u;
            // 0x19bb74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB78u; }
        if (ctx->pc != 0x19BB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB78u; }
        if (ctx->pc != 0x19BB78u) { return; }
    }
    ctx->pc = 0x19BB78u;
label_19bb78:
    // 0x19bb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19bb7c:
    // 0x19bb7c: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x19bb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
label_19bb80:
    // 0x19bb80: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19bb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19bb84:
    // 0x19bb84: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_19bb88:
    // 0x19bb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19bb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19bb8c:
    // 0x19bb8c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x19bb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_19bb90:
    // 0x19bb90: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_19bb94:
    // 0x19bb94: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19bb98:
    // 0x19bb98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bb98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bb9c:
    // 0x19bb9c: 0x0  nop
    ctx->pc = 0x19bb9cu;
    // NOP
label_19bba0:
    // 0x19bba0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19bba4:
    // 0x19bba4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x19bba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_19bba8:
    // 0x19bba8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19bbac:
    // 0x19bbac: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_19bbb0:
    // 0x19bbb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bbb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bbb4:
    // 0x19bbb4: 0x0  nop
    ctx->pc = 0x19bbb4u;
    // NOP
label_19bbb8:
    // 0x19bbb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bbb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19bbbc:
    // 0x19bbbc: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x19bbbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_19bbc0:
    // 0x19bbc0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x19bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_19bbc4:
    // 0x19bbc4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19bbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19bbc8:
    // 0x19bbc8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bbc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bbcc:
    // 0x19bbcc: 0x0  nop
    ctx->pc = 0x19bbccu;
    // NOP
label_19bbd0:
    // 0x19bbd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bbd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19bbd4:
    // 0x19bbd4: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x19bbd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_19bbd8:
    // 0x19bbd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_19bbdc:
    // 0x19bbdc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19bbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19bbe0:
    // 0x19bbe0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19bbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19bbe4:
    // 0x19bbe4: 0x0  nop
    ctx->pc = 0x19bbe4u;
    // NOP
label_19bbe8:
    // 0x19bbe8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19bbe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19bbec:
    // 0x19bbec: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x19bbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_19bbf0:
    // 0x19bbf0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_19bbf4:
    // 0x19bbf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19bbf8:
    // 0x19bbf8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x19bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_19bbfc:
    // 0x19bbfc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19bc00:
    // 0x19bc00: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bc04:
    // 0x19bc04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19bc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19bc08:
    // 0x19bc08: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19bc0c:
    if (ctx->pc == 0x19BC0Cu) {
        ctx->pc = 0x19BC0Cu;
            // 0x19bc0c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->pc = 0x19BC10u;
        goto label_19bc10;
    }
    ctx->pc = 0x19BC08u;
    {
        const bool branch_taken_0x19bc08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19BC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC08u;
            // 0x19bc0c: 0x3c02c248  lui         $v0, 0xC248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49736 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc08) {
            ctx->pc = 0x19BC28u;
            goto label_19bc28;
        }
    }
    ctx->pc = 0x19BC10u;
label_19bc10:
    // 0x19bc10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19bc10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19bc14:
    // 0x19bc14: 0x0  nop
    ctx->pc = 0x19bc14u;
    // NOP
label_19bc18:
    // 0x19bc18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19bc18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19bc1c:
    // 0x19bc1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_19bc20:
    if (ctx->pc == 0x19BC20u) {
        ctx->pc = 0x19BC24u;
        goto label_19bc24;
    }
    ctx->pc = 0x19BC1Cu;
    {
        const bool branch_taken_0x19bc1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19bc1c) {
            ctx->pc = 0x19BC40u;
            goto label_19bc40;
        }
    }
    ctx->pc = 0x19BC24u;
label_19bc24:
    // 0x19bc24: 0x0  nop
    ctx->pc = 0x19bc24u;
    // NOP
label_19bc28:
    // 0x19bc28: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19bc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19bc2c:
    // 0x19bc2c: 0x40f809  jalr        $v0
label_19bc30:
    if (ctx->pc == 0x19BC30u) {
        ctx->pc = 0x19BC30u;
            // 0x19bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BC34u;
        goto label_19bc34;
    }
    ctx->pc = 0x19BC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BC34u);
        ctx->pc = 0x19BC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC2Cu;
            // 0x19bc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B720u: goto label_19b720;
            case 0x19B724u: goto label_19b724;
            case 0x19B728u: goto label_19b728;
            case 0x19B72Cu: goto label_19b72c;
            case 0x19B730u: goto label_19b730;
            case 0x19B734u: goto label_19b734;
            case 0x19B738u: goto label_19b738;
            case 0x19B73Cu: goto label_19b73c;
            case 0x19B740u: goto label_19b740;
            case 0x19B744u: goto label_19b744;
            case 0x19B748u: goto label_19b748;
            case 0x19B74Cu: goto label_19b74c;
            case 0x19B750u: goto label_19b750;
            case 0x19B754u: goto label_19b754;
            case 0x19B758u: goto label_19b758;
            case 0x19B75Cu: goto label_19b75c;
            case 0x19B760u: goto label_19b760;
            case 0x19B764u: goto label_19b764;
            case 0x19B768u: goto label_19b768;
            case 0x19B76Cu: goto label_19b76c;
            case 0x19B770u: goto label_19b770;
            case 0x19B774u: goto label_19b774;
            case 0x19B778u: goto label_19b778;
            case 0x19B77Cu: goto label_19b77c;
            case 0x19B780u: goto label_19b780;
            case 0x19B784u: goto label_19b784;
            case 0x19B788u: goto label_19b788;
            case 0x19B78Cu: goto label_19b78c;
            case 0x19B790u: goto label_19b790;
            case 0x19B794u: goto label_19b794;
            case 0x19B798u: goto label_19b798;
            case 0x19B79Cu: goto label_19b79c;
            case 0x19B7A0u: goto label_19b7a0;
            case 0x19B7A4u: goto label_19b7a4;
            case 0x19B7A8u: goto label_19b7a8;
            case 0x19B7ACu: goto label_19b7ac;
            case 0x19B7B0u: goto label_19b7b0;
            case 0x19B7B4u: goto label_19b7b4;
            case 0x19B7B8u: goto label_19b7b8;
            case 0x19B7BCu: goto label_19b7bc;
            case 0x19B7C0u: goto label_19b7c0;
            case 0x19B7C4u: goto label_19b7c4;
            case 0x19B7C8u: goto label_19b7c8;
            case 0x19B7CCu: goto label_19b7cc;
            case 0x19B7D0u: goto label_19b7d0;
            case 0x19B7D4u: goto label_19b7d4;
            case 0x19B7D8u: goto label_19b7d8;
            case 0x19B7DCu: goto label_19b7dc;
            case 0x19B7E0u: goto label_19b7e0;
            case 0x19B7E4u: goto label_19b7e4;
            case 0x19B7E8u: goto label_19b7e8;
            case 0x19B7ECu: goto label_19b7ec;
            case 0x19B7F0u: goto label_19b7f0;
            case 0x19B7F4u: goto label_19b7f4;
            case 0x19B7F8u: goto label_19b7f8;
            case 0x19B7FCu: goto label_19b7fc;
            case 0x19B800u: goto label_19b800;
            case 0x19B804u: goto label_19b804;
            case 0x19B808u: goto label_19b808;
            case 0x19B80Cu: goto label_19b80c;
            case 0x19B810u: goto label_19b810;
            case 0x19B814u: goto label_19b814;
            case 0x19B818u: goto label_19b818;
            case 0x19B81Cu: goto label_19b81c;
            case 0x19B820u: goto label_19b820;
            case 0x19B824u: goto label_19b824;
            case 0x19B828u: goto label_19b828;
            case 0x19B82Cu: goto label_19b82c;
            case 0x19B830u: goto label_19b830;
            case 0x19B834u: goto label_19b834;
            case 0x19B838u: goto label_19b838;
            case 0x19B83Cu: goto label_19b83c;
            case 0x19B840u: goto label_19b840;
            case 0x19B844u: goto label_19b844;
            case 0x19B848u: goto label_19b848;
            case 0x19B84Cu: goto label_19b84c;
            case 0x19B850u: goto label_19b850;
            case 0x19B854u: goto label_19b854;
            case 0x19B858u: goto label_19b858;
            case 0x19B85Cu: goto label_19b85c;
            case 0x19B860u: goto label_19b860;
            case 0x19B864u: goto label_19b864;
            case 0x19B868u: goto label_19b868;
            case 0x19B86Cu: goto label_19b86c;
            case 0x19B870u: goto label_19b870;
            case 0x19B874u: goto label_19b874;
            case 0x19B878u: goto label_19b878;
            case 0x19B87Cu: goto label_19b87c;
            case 0x19B880u: goto label_19b880;
            case 0x19B884u: goto label_19b884;
            case 0x19B888u: goto label_19b888;
            case 0x19B88Cu: goto label_19b88c;
            case 0x19B890u: goto label_19b890;
            case 0x19B894u: goto label_19b894;
            case 0x19B898u: goto label_19b898;
            case 0x19B89Cu: goto label_19b89c;
            case 0x19B8A0u: goto label_19b8a0;
            case 0x19B8A4u: goto label_19b8a4;
            case 0x19B8A8u: goto label_19b8a8;
            case 0x19B8ACu: goto label_19b8ac;
            case 0x19B8B0u: goto label_19b8b0;
            case 0x19B8B4u: goto label_19b8b4;
            case 0x19B8B8u: goto label_19b8b8;
            case 0x19B8BCu: goto label_19b8bc;
            case 0x19B8C0u: goto label_19b8c0;
            case 0x19B8C4u: goto label_19b8c4;
            case 0x19B8C8u: goto label_19b8c8;
            case 0x19B8CCu: goto label_19b8cc;
            case 0x19B8D0u: goto label_19b8d0;
            case 0x19B8D4u: goto label_19b8d4;
            case 0x19B8D8u: goto label_19b8d8;
            case 0x19B8DCu: goto label_19b8dc;
            case 0x19B8E0u: goto label_19b8e0;
            case 0x19B8E4u: goto label_19b8e4;
            case 0x19B8E8u: goto label_19b8e8;
            case 0x19B8ECu: goto label_19b8ec;
            case 0x19B8F0u: goto label_19b8f0;
            case 0x19B8F4u: goto label_19b8f4;
            case 0x19B8F8u: goto label_19b8f8;
            case 0x19B8FCu: goto label_19b8fc;
            case 0x19B900u: goto label_19b900;
            case 0x19B904u: goto label_19b904;
            case 0x19B908u: goto label_19b908;
            case 0x19B90Cu: goto label_19b90c;
            case 0x19B910u: goto label_19b910;
            case 0x19B914u: goto label_19b914;
            case 0x19B918u: goto label_19b918;
            case 0x19B91Cu: goto label_19b91c;
            case 0x19B920u: goto label_19b920;
            case 0x19B924u: goto label_19b924;
            case 0x19B928u: goto label_19b928;
            case 0x19B92Cu: goto label_19b92c;
            case 0x19B930u: goto label_19b930;
            case 0x19B934u: goto label_19b934;
            case 0x19B938u: goto label_19b938;
            case 0x19B93Cu: goto label_19b93c;
            case 0x19B940u: goto label_19b940;
            case 0x19B944u: goto label_19b944;
            case 0x19B948u: goto label_19b948;
            case 0x19B94Cu: goto label_19b94c;
            case 0x19B950u: goto label_19b950;
            case 0x19B954u: goto label_19b954;
            case 0x19B958u: goto label_19b958;
            case 0x19B95Cu: goto label_19b95c;
            case 0x19B960u: goto label_19b960;
            case 0x19B964u: goto label_19b964;
            case 0x19B968u: goto label_19b968;
            case 0x19B96Cu: goto label_19b96c;
            case 0x19B970u: goto label_19b970;
            case 0x19B974u: goto label_19b974;
            case 0x19B978u: goto label_19b978;
            case 0x19B97Cu: goto label_19b97c;
            case 0x19B980u: goto label_19b980;
            case 0x19B984u: goto label_19b984;
            case 0x19B988u: goto label_19b988;
            case 0x19B98Cu: goto label_19b98c;
            case 0x19B990u: goto label_19b990;
            case 0x19B994u: goto label_19b994;
            case 0x19B998u: goto label_19b998;
            case 0x19B99Cu: goto label_19b99c;
            case 0x19B9A0u: goto label_19b9a0;
            case 0x19B9A4u: goto label_19b9a4;
            case 0x19B9A8u: goto label_19b9a8;
            case 0x19B9ACu: goto label_19b9ac;
            case 0x19B9B0u: goto label_19b9b0;
            case 0x19B9B4u: goto label_19b9b4;
            case 0x19B9B8u: goto label_19b9b8;
            case 0x19B9BCu: goto label_19b9bc;
            case 0x19B9C0u: goto label_19b9c0;
            case 0x19B9C4u: goto label_19b9c4;
            case 0x19B9C8u: goto label_19b9c8;
            case 0x19B9CCu: goto label_19b9cc;
            case 0x19B9D0u: goto label_19b9d0;
            case 0x19B9D4u: goto label_19b9d4;
            case 0x19B9D8u: goto label_19b9d8;
            case 0x19B9DCu: goto label_19b9dc;
            case 0x19B9E0u: goto label_19b9e0;
            case 0x19B9E4u: goto label_19b9e4;
            case 0x19B9E8u: goto label_19b9e8;
            case 0x19B9ECu: goto label_19b9ec;
            case 0x19B9F0u: goto label_19b9f0;
            case 0x19B9F4u: goto label_19b9f4;
            case 0x19B9F8u: goto label_19b9f8;
            case 0x19B9FCu: goto label_19b9fc;
            case 0x19BA00u: goto label_19ba00;
            case 0x19BA04u: goto label_19ba04;
            case 0x19BA08u: goto label_19ba08;
            case 0x19BA0Cu: goto label_19ba0c;
            case 0x19BA10u: goto label_19ba10;
            case 0x19BA14u: goto label_19ba14;
            case 0x19BA18u: goto label_19ba18;
            case 0x19BA1Cu: goto label_19ba1c;
            case 0x19BA20u: goto label_19ba20;
            case 0x19BA24u: goto label_19ba24;
            case 0x19BA28u: goto label_19ba28;
            case 0x19BA2Cu: goto label_19ba2c;
            case 0x19BA30u: goto label_19ba30;
            case 0x19BA34u: goto label_19ba34;
            case 0x19BA38u: goto label_19ba38;
            case 0x19BA3Cu: goto label_19ba3c;
            case 0x19BA40u: goto label_19ba40;
            case 0x19BA44u: goto label_19ba44;
            case 0x19BA48u: goto label_19ba48;
            case 0x19BA4Cu: goto label_19ba4c;
            case 0x19BA50u: goto label_19ba50;
            case 0x19BA54u: goto label_19ba54;
            case 0x19BA58u: goto label_19ba58;
            case 0x19BA5Cu: goto label_19ba5c;
            case 0x19BA60u: goto label_19ba60;
            case 0x19BA64u: goto label_19ba64;
            case 0x19BA68u: goto label_19ba68;
            case 0x19BA6Cu: goto label_19ba6c;
            case 0x19BA70u: goto label_19ba70;
            case 0x19BA74u: goto label_19ba74;
            case 0x19BA78u: goto label_19ba78;
            case 0x19BA7Cu: goto label_19ba7c;
            case 0x19BA80u: goto label_19ba80;
            case 0x19BA84u: goto label_19ba84;
            case 0x19BA88u: goto label_19ba88;
            case 0x19BA8Cu: goto label_19ba8c;
            case 0x19BA90u: goto label_19ba90;
            case 0x19BA94u: goto label_19ba94;
            case 0x19BA98u: goto label_19ba98;
            case 0x19BA9Cu: goto label_19ba9c;
            case 0x19BAA0u: goto label_19baa0;
            case 0x19BAA4u: goto label_19baa4;
            case 0x19BAA8u: goto label_19baa8;
            case 0x19BAACu: goto label_19baac;
            case 0x19BAB0u: goto label_19bab0;
            case 0x19BAB4u: goto label_19bab4;
            case 0x19BAB8u: goto label_19bab8;
            case 0x19BABCu: goto label_19babc;
            case 0x19BAC0u: goto label_19bac0;
            case 0x19BAC4u: goto label_19bac4;
            case 0x19BAC8u: goto label_19bac8;
            case 0x19BACCu: goto label_19bacc;
            case 0x19BAD0u: goto label_19bad0;
            case 0x19BAD4u: goto label_19bad4;
            case 0x19BAD8u: goto label_19bad8;
            case 0x19BADCu: goto label_19badc;
            case 0x19BAE0u: goto label_19bae0;
            case 0x19BAE4u: goto label_19bae4;
            case 0x19BAE8u: goto label_19bae8;
            case 0x19BAECu: goto label_19baec;
            case 0x19BAF0u: goto label_19baf0;
            case 0x19BAF4u: goto label_19baf4;
            case 0x19BAF8u: goto label_19baf8;
            case 0x19BAFCu: goto label_19bafc;
            case 0x19BB00u: goto label_19bb00;
            case 0x19BB04u: goto label_19bb04;
            case 0x19BB08u: goto label_19bb08;
            case 0x19BB0Cu: goto label_19bb0c;
            case 0x19BB10u: goto label_19bb10;
            case 0x19BB14u: goto label_19bb14;
            case 0x19BB18u: goto label_19bb18;
            case 0x19BB1Cu: goto label_19bb1c;
            case 0x19BB20u: goto label_19bb20;
            case 0x19BB24u: goto label_19bb24;
            case 0x19BB28u: goto label_19bb28;
            case 0x19BB2Cu: goto label_19bb2c;
            case 0x19BB30u: goto label_19bb30;
            case 0x19BB34u: goto label_19bb34;
            case 0x19BB38u: goto label_19bb38;
            case 0x19BB3Cu: goto label_19bb3c;
            case 0x19BB40u: goto label_19bb40;
            case 0x19BB44u: goto label_19bb44;
            case 0x19BB48u: goto label_19bb48;
            case 0x19BB4Cu: goto label_19bb4c;
            case 0x19BB50u: goto label_19bb50;
            case 0x19BB54u: goto label_19bb54;
            case 0x19BB58u: goto label_19bb58;
            case 0x19BB5Cu: goto label_19bb5c;
            case 0x19BB60u: goto label_19bb60;
            case 0x19BB64u: goto label_19bb64;
            case 0x19BB68u: goto label_19bb68;
            case 0x19BB6Cu: goto label_19bb6c;
            case 0x19BB70u: goto label_19bb70;
            case 0x19BB74u: goto label_19bb74;
            case 0x19BB78u: goto label_19bb78;
            case 0x19BB7Cu: goto label_19bb7c;
            case 0x19BB80u: goto label_19bb80;
            case 0x19BB84u: goto label_19bb84;
            case 0x19BB88u: goto label_19bb88;
            case 0x19BB8Cu: goto label_19bb8c;
            case 0x19BB90u: goto label_19bb90;
            case 0x19BB94u: goto label_19bb94;
            case 0x19BB98u: goto label_19bb98;
            case 0x19BB9Cu: goto label_19bb9c;
            case 0x19BBA0u: goto label_19bba0;
            case 0x19BBA4u: goto label_19bba4;
            case 0x19BBA8u: goto label_19bba8;
            case 0x19BBACu: goto label_19bbac;
            case 0x19BBB0u: goto label_19bbb0;
            case 0x19BBB4u: goto label_19bbb4;
            case 0x19BBB8u: goto label_19bbb8;
            case 0x19BBBCu: goto label_19bbbc;
            case 0x19BBC0u: goto label_19bbc0;
            case 0x19BBC4u: goto label_19bbc4;
            case 0x19BBC8u: goto label_19bbc8;
            case 0x19BBCCu: goto label_19bbcc;
            case 0x19BBD0u: goto label_19bbd0;
            case 0x19BBD4u: goto label_19bbd4;
            case 0x19BBD8u: goto label_19bbd8;
            case 0x19BBDCu: goto label_19bbdc;
            case 0x19BBE0u: goto label_19bbe0;
            case 0x19BBE4u: goto label_19bbe4;
            case 0x19BBE8u: goto label_19bbe8;
            case 0x19BBECu: goto label_19bbec;
            case 0x19BBF0u: goto label_19bbf0;
            case 0x19BBF4u: goto label_19bbf4;
            case 0x19BBF8u: goto label_19bbf8;
            case 0x19BBFCu: goto label_19bbfc;
            case 0x19BC00u: goto label_19bc00;
            case 0x19BC04u: goto label_19bc04;
            case 0x19BC08u: goto label_19bc08;
            case 0x19BC0Cu: goto label_19bc0c;
            case 0x19BC10u: goto label_19bc10;
            case 0x19BC14u: goto label_19bc14;
            case 0x19BC18u: goto label_19bc18;
            case 0x19BC1Cu: goto label_19bc1c;
            case 0x19BC20u: goto label_19bc20;
            case 0x19BC24u: goto label_19bc24;
            case 0x19BC28u: goto label_19bc28;
            case 0x19BC2Cu: goto label_19bc2c;
            case 0x19BC30u: goto label_19bc30;
            case 0x19BC34u: goto label_19bc34;
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC40u: goto label_19bc40;
            case 0x19BC44u: goto label_19bc44;
            case 0x19BC48u: goto label_19bc48;
            case 0x19BC4Cu: goto label_19bc4c;
            case 0x19BC50u: goto label_19bc50;
            case 0x19BC54u: goto label_19bc54;
            case 0x19BC58u: goto label_19bc58;
            case 0x19BC5Cu: goto label_19bc5c;
            case 0x19BC60u: goto label_19bc60;
            case 0x19BC64u: goto label_19bc64;
            case 0x19BC68u: goto label_19bc68;
            case 0x19BC6Cu: goto label_19bc6c;
            case 0x19BC70u: goto label_19bc70;
            case 0x19BC74u: goto label_19bc74;
            case 0x19BC78u: goto label_19bc78;
            case 0x19BC7Cu: goto label_19bc7c;
            case 0x19BC80u: goto label_19bc80;
            case 0x19BC84u: goto label_19bc84;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BC8Cu: goto label_19bc8c;
            case 0x19BC90u: goto label_19bc90;
            case 0x19BC94u: goto label_19bc94;
            case 0x19BC98u: goto label_19bc98;
            case 0x19BC9Cu: goto label_19bc9c;
            case 0x19BCA0u: goto label_19bca0;
            case 0x19BCA4u: goto label_19bca4;
            case 0x19BCA8u: goto label_19bca8;
            case 0x19BCACu: goto label_19bcac;
            case 0x19BCB0u: goto label_19bcb0;
            case 0x19BCB4u: goto label_19bcb4;
            case 0x19BCB8u: goto label_19bcb8;
            case 0x19BCBCu: goto label_19bcbc;
            case 0x19BCC0u: goto label_19bcc0;
            case 0x19BCC4u: goto label_19bcc4;
            case 0x19BCC8u: goto label_19bcc8;
            case 0x19BCCCu: goto label_19bccc;
            case 0x19BCD0u: goto label_19bcd0;
            case 0x19BCD4u: goto label_19bcd4;
            case 0x19BCD8u: goto label_19bcd8;
            case 0x19BCDCu: goto label_19bcdc;
            case 0x19BCE0u: goto label_19bce0;
            case 0x19BCE4u: goto label_19bce4;
            case 0x19BCE8u: goto label_19bce8;
            case 0x19BCECu: goto label_19bcec;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BCF4u: goto label_19bcf4;
            case 0x19BCF8u: goto label_19bcf8;
            case 0x19BCFCu: goto label_19bcfc;
            case 0x19BD00u: goto label_19bd00;
            case 0x19BD04u: goto label_19bd04;
            case 0x19BD08u: goto label_19bd08;
            case 0x19BD0Cu: goto label_19bd0c;
            case 0x19BD10u: goto label_19bd10;
            case 0x19BD14u: goto label_19bd14;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD1Cu: goto label_19bd1c;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD28u: goto label_19bd28;
            case 0x19BD2Cu: goto label_19bd2c;
            case 0x19BD30u: goto label_19bd30;
            case 0x19BD34u: goto label_19bd34;
            case 0x19BD38u: goto label_19bd38;
            case 0x19BD3Cu: goto label_19bd3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BC34u; }
            if (ctx->pc != 0x19BC34u) { return; }
        }
    }
    ctx->pc = 0x19BC34u;
label_19bc34:
    // 0x19bc34: 0x1000003e  b           . + 4 + (0x3E << 2)
label_19bc38:
    if (ctx->pc == 0x19BC38u) {
        ctx->pc = 0x19BC3Cu;
        goto label_19bc3c;
    }
    ctx->pc = 0x19BC34u;
    {
        const bool branch_taken_0x19bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc34) {
            ctx->pc = 0x19BD30u;
            goto label_19bd30;
        }
    }
    ctx->pc = 0x19BC3Cu;
label_19bc3c:
    // 0x19bc3c: 0x0  nop
    ctx->pc = 0x19bc3cu;
    // NOP
label_19bc40:
    // 0x19bc40: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x19bc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_19bc44:
    // 0x19bc44: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_19bc48:
    if (ctx->pc == 0x19BC48u) {
        ctx->pc = 0x19BC4Cu;
        goto label_19bc4c;
    }
    ctx->pc = 0x19BC44u;
    {
        const bool branch_taken_0x19bc44 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19bc44) {
            ctx->pc = 0x19BD10u;
            goto label_19bd10;
        }
    }
    ctx->pc = 0x19BC4Cu;
label_19bc4c:
    // 0x19bc4c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19bc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bc50:
    // 0x19bc50: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_19bc54:
    // 0x19bc54: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19bc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bc58:
    // 0x19bc58: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19bc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19bc5c:
    // 0x19bc5c: 0xc05d080  jal         func_174200
label_19bc60:
    if (ctx->pc == 0x19BC60u) {
        ctx->pc = 0x19BC60u;
            // 0x19bc60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19BC64u;
        goto label_19bc64;
    }
    ctx->pc = 0x19BC5Cu;
    SET_GPR_U32(ctx, 31, 0x19BC64u);
    ctx->pc = 0x19BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC5Cu;
            // 0x19bc60: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC64u; }
        if (ctx->pc != 0x19BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC64u; }
        if (ctx->pc != 0x19BC64u) { return; }
    }
    ctx->pc = 0x19BC64u;
label_19bc64:
    // 0x19bc64: 0xc050bb4  jal         func_142ED0
label_19bc68:
    if (ctx->pc == 0x19BC68u) {
        ctx->pc = 0x19BC6Cu;
        goto label_19bc6c;
    }
    ctx->pc = 0x19BC64u;
    SET_GPR_U32(ctx, 31, 0x19BC6Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC6Cu; }
        if (ctx->pc != 0x19BC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC6Cu; }
        if (ctx->pc != 0x19BC6Cu) { return; }
    }
    ctx->pc = 0x19BC6Cu;
label_19bc6c:
    // 0x19bc6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bc6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19bc70:
    // 0x19bc70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19bc74:
    if (ctx->pc == 0x19BC74u) {
        ctx->pc = 0x19BC78u;
        goto label_19bc78;
    }
    ctx->pc = 0x19BC70u;
    {
        const bool branch_taken_0x19bc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc70) {
            ctx->pc = 0x19BC90u;
            goto label_19bc90;
        }
    }
    ctx->pc = 0x19BC78u;
label_19bc78:
    // 0x19bc78: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bc7c:
    // 0x19bc7c: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x19bc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_19bc80:
    // 0x19bc80: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19bc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bc84:
    // 0x19bc84: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19bc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19bc88:
    // 0x19bc88: 0xc05d080  jal         func_174200
label_19bc8c:
    if (ctx->pc == 0x19BC8Cu) {
        ctx->pc = 0x19BC8Cu;
            // 0x19bc8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19BC90u;
        goto label_19bc90;
    }
    ctx->pc = 0x19BC88u;
    SET_GPR_U32(ctx, 31, 0x19BC90u);
    ctx->pc = 0x19BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC88u;
            // 0x19bc8c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC90u; }
        if (ctx->pc != 0x19BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC90u; }
        if (ctx->pc != 0x19BC90u) { return; }
    }
    ctx->pc = 0x19BC90u;
label_19bc90:
    // 0x19bc90: 0xc050bb4  jal         func_142ED0
label_19bc94:
    if (ctx->pc == 0x19BC94u) {
        ctx->pc = 0x19BC98u;
        goto label_19bc98;
    }
    ctx->pc = 0x19BC90u;
    SET_GPR_U32(ctx, 31, 0x19BC98u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC98u; }
        if (ctx->pc != 0x19BC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC98u; }
        if (ctx->pc != 0x19BC98u) { return; }
    }
    ctx->pc = 0x19BC98u;
label_19bc98:
    // 0x19bc98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19bc98u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_19bc9c:
    // 0x19bc9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_19bca0:
    if (ctx->pc == 0x19BCA0u) {
        ctx->pc = 0x19BCA4u;
        goto label_19bca4;
    }
    ctx->pc = 0x19BC9Cu;
    {
        const bool branch_taken_0x19bc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bc9c) {
            ctx->pc = 0x19BCC0u;
            goto label_19bcc0;
        }
    }
    ctx->pc = 0x19BCA4u;
label_19bca4:
    // 0x19bca4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x19bca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bca8:
    // 0x19bca8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_19bcac:
    // 0x19bcac: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x19bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bcb0:
    // 0x19bcb0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x19bcb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_19bcb4:
    // 0x19bcb4: 0xc05d080  jal         func_174200
label_19bcb8:
    if (ctx->pc == 0x19BCB8u) {
        ctx->pc = 0x19BCB8u;
            // 0x19bcb8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x19BCBCu;
        goto label_19bcbc;
    }
    ctx->pc = 0x19BCB4u;
    SET_GPR_U32(ctx, 31, 0x19BCBCu);
    ctx->pc = 0x19BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCB4u;
            // 0x19bcb8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    }
    ctx->pc = 0x19BCBCu;
label_19bcbc:
    // 0x19bcbc: 0x0  nop
    ctx->pc = 0x19bcbcu;
    // NOP
label_19bcc0:
    // 0x19bcc0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_19bcc4:
    // 0x19bcc4: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x19bcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19bcc8:
    // 0x19bcc8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x19bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19bccc:
    // 0x19bccc: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x19bcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19bcd0:
    // 0x19bcd0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19bcd4:
    // 0x19bcd4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19bcd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19bcd8:
    // 0x19bcd8: 0x0  nop
    ctx->pc = 0x19bcd8u;
    // NOP
label_19bcdc:
    // 0x19bcdc: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x19bcdcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_19bce0:
    // 0x19bce0: 0xc053740  jal         func_14DD00
label_19bce4:
    if (ctx->pc == 0x19BCE4u) {
        ctx->pc = 0x19BCE4u;
            // 0x19bce4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x19BCE8u;
        goto label_19bce8;
    }
    ctx->pc = 0x19BCE0u;
    SET_GPR_U32(ctx, 31, 0x19BCE8u);
    ctx->pc = 0x19BCE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCE0u;
            // 0x19bce4: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCE8u; }
        if (ctx->pc != 0x19BCE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCE8u; }
        if (ctx->pc != 0x19BCE8u) { return; }
    }
    ctx->pc = 0x19BCE8u;
label_19bce8:
    // 0x19bce8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_19bcec:
    // 0x19bcec: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x19bcecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_19bcf0:
    // 0x19bcf0: 0xc07b0fc  jal         func_1EC3F0
label_19bcf4:
    if (ctx->pc == 0x19BCF4u) {
        ctx->pc = 0x19BCF4u;
            // 0x19bcf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BCF8u;
        goto label_19bcf8;
    }
    ctx->pc = 0x19BCF0u;
    SET_GPR_U32(ctx, 31, 0x19BCF8u);
    ctx->pc = 0x19BCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCF0u;
            // 0x19bcf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EC3F0u;
    if (runtime->hasFunction(0x1EC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x1EC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCF8u; }
        if (ctx->pc != 0x19BCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateChip_0x1ec3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCF8u; }
        if (ctx->pc != 0x19BCF8u) { return; }
    }
    ctx->pc = 0x19BCF8u;
label_19bcf8:
    // 0x19bcf8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x19bcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_19bcfc:
    // 0x19bcfc: 0x40f809  jalr        $v0
label_19bd00:
    if (ctx->pc == 0x19BD00u) {
        ctx->pc = 0x19BD00u;
            // 0x19bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BD04u;
        goto label_19bd04;
    }
    ctx->pc = 0x19BCFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BD04u);
        ctx->pc = 0x19BD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCFCu;
            // 0x19bd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B720u: goto label_19b720;
            case 0x19B724u: goto label_19b724;
            case 0x19B728u: goto label_19b728;
            case 0x19B72Cu: goto label_19b72c;
            case 0x19B730u: goto label_19b730;
            case 0x19B734u: goto label_19b734;
            case 0x19B738u: goto label_19b738;
            case 0x19B73Cu: goto label_19b73c;
            case 0x19B740u: goto label_19b740;
            case 0x19B744u: goto label_19b744;
            case 0x19B748u: goto label_19b748;
            case 0x19B74Cu: goto label_19b74c;
            case 0x19B750u: goto label_19b750;
            case 0x19B754u: goto label_19b754;
            case 0x19B758u: goto label_19b758;
            case 0x19B75Cu: goto label_19b75c;
            case 0x19B760u: goto label_19b760;
            case 0x19B764u: goto label_19b764;
            case 0x19B768u: goto label_19b768;
            case 0x19B76Cu: goto label_19b76c;
            case 0x19B770u: goto label_19b770;
            case 0x19B774u: goto label_19b774;
            case 0x19B778u: goto label_19b778;
            case 0x19B77Cu: goto label_19b77c;
            case 0x19B780u: goto label_19b780;
            case 0x19B784u: goto label_19b784;
            case 0x19B788u: goto label_19b788;
            case 0x19B78Cu: goto label_19b78c;
            case 0x19B790u: goto label_19b790;
            case 0x19B794u: goto label_19b794;
            case 0x19B798u: goto label_19b798;
            case 0x19B79Cu: goto label_19b79c;
            case 0x19B7A0u: goto label_19b7a0;
            case 0x19B7A4u: goto label_19b7a4;
            case 0x19B7A8u: goto label_19b7a8;
            case 0x19B7ACu: goto label_19b7ac;
            case 0x19B7B0u: goto label_19b7b0;
            case 0x19B7B4u: goto label_19b7b4;
            case 0x19B7B8u: goto label_19b7b8;
            case 0x19B7BCu: goto label_19b7bc;
            case 0x19B7C0u: goto label_19b7c0;
            case 0x19B7C4u: goto label_19b7c4;
            case 0x19B7C8u: goto label_19b7c8;
            case 0x19B7CCu: goto label_19b7cc;
            case 0x19B7D0u: goto label_19b7d0;
            case 0x19B7D4u: goto label_19b7d4;
            case 0x19B7D8u: goto label_19b7d8;
            case 0x19B7DCu: goto label_19b7dc;
            case 0x19B7E0u: goto label_19b7e0;
            case 0x19B7E4u: goto label_19b7e4;
            case 0x19B7E8u: goto label_19b7e8;
            case 0x19B7ECu: goto label_19b7ec;
            case 0x19B7F0u: goto label_19b7f0;
            case 0x19B7F4u: goto label_19b7f4;
            case 0x19B7F8u: goto label_19b7f8;
            case 0x19B7FCu: goto label_19b7fc;
            case 0x19B800u: goto label_19b800;
            case 0x19B804u: goto label_19b804;
            case 0x19B808u: goto label_19b808;
            case 0x19B80Cu: goto label_19b80c;
            case 0x19B810u: goto label_19b810;
            case 0x19B814u: goto label_19b814;
            case 0x19B818u: goto label_19b818;
            case 0x19B81Cu: goto label_19b81c;
            case 0x19B820u: goto label_19b820;
            case 0x19B824u: goto label_19b824;
            case 0x19B828u: goto label_19b828;
            case 0x19B82Cu: goto label_19b82c;
            case 0x19B830u: goto label_19b830;
            case 0x19B834u: goto label_19b834;
            case 0x19B838u: goto label_19b838;
            case 0x19B83Cu: goto label_19b83c;
            case 0x19B840u: goto label_19b840;
            case 0x19B844u: goto label_19b844;
            case 0x19B848u: goto label_19b848;
            case 0x19B84Cu: goto label_19b84c;
            case 0x19B850u: goto label_19b850;
            case 0x19B854u: goto label_19b854;
            case 0x19B858u: goto label_19b858;
            case 0x19B85Cu: goto label_19b85c;
            case 0x19B860u: goto label_19b860;
            case 0x19B864u: goto label_19b864;
            case 0x19B868u: goto label_19b868;
            case 0x19B86Cu: goto label_19b86c;
            case 0x19B870u: goto label_19b870;
            case 0x19B874u: goto label_19b874;
            case 0x19B878u: goto label_19b878;
            case 0x19B87Cu: goto label_19b87c;
            case 0x19B880u: goto label_19b880;
            case 0x19B884u: goto label_19b884;
            case 0x19B888u: goto label_19b888;
            case 0x19B88Cu: goto label_19b88c;
            case 0x19B890u: goto label_19b890;
            case 0x19B894u: goto label_19b894;
            case 0x19B898u: goto label_19b898;
            case 0x19B89Cu: goto label_19b89c;
            case 0x19B8A0u: goto label_19b8a0;
            case 0x19B8A4u: goto label_19b8a4;
            case 0x19B8A8u: goto label_19b8a8;
            case 0x19B8ACu: goto label_19b8ac;
            case 0x19B8B0u: goto label_19b8b0;
            case 0x19B8B4u: goto label_19b8b4;
            case 0x19B8B8u: goto label_19b8b8;
            case 0x19B8BCu: goto label_19b8bc;
            case 0x19B8C0u: goto label_19b8c0;
            case 0x19B8C4u: goto label_19b8c4;
            case 0x19B8C8u: goto label_19b8c8;
            case 0x19B8CCu: goto label_19b8cc;
            case 0x19B8D0u: goto label_19b8d0;
            case 0x19B8D4u: goto label_19b8d4;
            case 0x19B8D8u: goto label_19b8d8;
            case 0x19B8DCu: goto label_19b8dc;
            case 0x19B8E0u: goto label_19b8e0;
            case 0x19B8E4u: goto label_19b8e4;
            case 0x19B8E8u: goto label_19b8e8;
            case 0x19B8ECu: goto label_19b8ec;
            case 0x19B8F0u: goto label_19b8f0;
            case 0x19B8F4u: goto label_19b8f4;
            case 0x19B8F8u: goto label_19b8f8;
            case 0x19B8FCu: goto label_19b8fc;
            case 0x19B900u: goto label_19b900;
            case 0x19B904u: goto label_19b904;
            case 0x19B908u: goto label_19b908;
            case 0x19B90Cu: goto label_19b90c;
            case 0x19B910u: goto label_19b910;
            case 0x19B914u: goto label_19b914;
            case 0x19B918u: goto label_19b918;
            case 0x19B91Cu: goto label_19b91c;
            case 0x19B920u: goto label_19b920;
            case 0x19B924u: goto label_19b924;
            case 0x19B928u: goto label_19b928;
            case 0x19B92Cu: goto label_19b92c;
            case 0x19B930u: goto label_19b930;
            case 0x19B934u: goto label_19b934;
            case 0x19B938u: goto label_19b938;
            case 0x19B93Cu: goto label_19b93c;
            case 0x19B940u: goto label_19b940;
            case 0x19B944u: goto label_19b944;
            case 0x19B948u: goto label_19b948;
            case 0x19B94Cu: goto label_19b94c;
            case 0x19B950u: goto label_19b950;
            case 0x19B954u: goto label_19b954;
            case 0x19B958u: goto label_19b958;
            case 0x19B95Cu: goto label_19b95c;
            case 0x19B960u: goto label_19b960;
            case 0x19B964u: goto label_19b964;
            case 0x19B968u: goto label_19b968;
            case 0x19B96Cu: goto label_19b96c;
            case 0x19B970u: goto label_19b970;
            case 0x19B974u: goto label_19b974;
            case 0x19B978u: goto label_19b978;
            case 0x19B97Cu: goto label_19b97c;
            case 0x19B980u: goto label_19b980;
            case 0x19B984u: goto label_19b984;
            case 0x19B988u: goto label_19b988;
            case 0x19B98Cu: goto label_19b98c;
            case 0x19B990u: goto label_19b990;
            case 0x19B994u: goto label_19b994;
            case 0x19B998u: goto label_19b998;
            case 0x19B99Cu: goto label_19b99c;
            case 0x19B9A0u: goto label_19b9a0;
            case 0x19B9A4u: goto label_19b9a4;
            case 0x19B9A8u: goto label_19b9a8;
            case 0x19B9ACu: goto label_19b9ac;
            case 0x19B9B0u: goto label_19b9b0;
            case 0x19B9B4u: goto label_19b9b4;
            case 0x19B9B8u: goto label_19b9b8;
            case 0x19B9BCu: goto label_19b9bc;
            case 0x19B9C0u: goto label_19b9c0;
            case 0x19B9C4u: goto label_19b9c4;
            case 0x19B9C8u: goto label_19b9c8;
            case 0x19B9CCu: goto label_19b9cc;
            case 0x19B9D0u: goto label_19b9d0;
            case 0x19B9D4u: goto label_19b9d4;
            case 0x19B9D8u: goto label_19b9d8;
            case 0x19B9DCu: goto label_19b9dc;
            case 0x19B9E0u: goto label_19b9e0;
            case 0x19B9E4u: goto label_19b9e4;
            case 0x19B9E8u: goto label_19b9e8;
            case 0x19B9ECu: goto label_19b9ec;
            case 0x19B9F0u: goto label_19b9f0;
            case 0x19B9F4u: goto label_19b9f4;
            case 0x19B9F8u: goto label_19b9f8;
            case 0x19B9FCu: goto label_19b9fc;
            case 0x19BA00u: goto label_19ba00;
            case 0x19BA04u: goto label_19ba04;
            case 0x19BA08u: goto label_19ba08;
            case 0x19BA0Cu: goto label_19ba0c;
            case 0x19BA10u: goto label_19ba10;
            case 0x19BA14u: goto label_19ba14;
            case 0x19BA18u: goto label_19ba18;
            case 0x19BA1Cu: goto label_19ba1c;
            case 0x19BA20u: goto label_19ba20;
            case 0x19BA24u: goto label_19ba24;
            case 0x19BA28u: goto label_19ba28;
            case 0x19BA2Cu: goto label_19ba2c;
            case 0x19BA30u: goto label_19ba30;
            case 0x19BA34u: goto label_19ba34;
            case 0x19BA38u: goto label_19ba38;
            case 0x19BA3Cu: goto label_19ba3c;
            case 0x19BA40u: goto label_19ba40;
            case 0x19BA44u: goto label_19ba44;
            case 0x19BA48u: goto label_19ba48;
            case 0x19BA4Cu: goto label_19ba4c;
            case 0x19BA50u: goto label_19ba50;
            case 0x19BA54u: goto label_19ba54;
            case 0x19BA58u: goto label_19ba58;
            case 0x19BA5Cu: goto label_19ba5c;
            case 0x19BA60u: goto label_19ba60;
            case 0x19BA64u: goto label_19ba64;
            case 0x19BA68u: goto label_19ba68;
            case 0x19BA6Cu: goto label_19ba6c;
            case 0x19BA70u: goto label_19ba70;
            case 0x19BA74u: goto label_19ba74;
            case 0x19BA78u: goto label_19ba78;
            case 0x19BA7Cu: goto label_19ba7c;
            case 0x19BA80u: goto label_19ba80;
            case 0x19BA84u: goto label_19ba84;
            case 0x19BA88u: goto label_19ba88;
            case 0x19BA8Cu: goto label_19ba8c;
            case 0x19BA90u: goto label_19ba90;
            case 0x19BA94u: goto label_19ba94;
            case 0x19BA98u: goto label_19ba98;
            case 0x19BA9Cu: goto label_19ba9c;
            case 0x19BAA0u: goto label_19baa0;
            case 0x19BAA4u: goto label_19baa4;
            case 0x19BAA8u: goto label_19baa8;
            case 0x19BAACu: goto label_19baac;
            case 0x19BAB0u: goto label_19bab0;
            case 0x19BAB4u: goto label_19bab4;
            case 0x19BAB8u: goto label_19bab8;
            case 0x19BABCu: goto label_19babc;
            case 0x19BAC0u: goto label_19bac0;
            case 0x19BAC4u: goto label_19bac4;
            case 0x19BAC8u: goto label_19bac8;
            case 0x19BACCu: goto label_19bacc;
            case 0x19BAD0u: goto label_19bad0;
            case 0x19BAD4u: goto label_19bad4;
            case 0x19BAD8u: goto label_19bad8;
            case 0x19BADCu: goto label_19badc;
            case 0x19BAE0u: goto label_19bae0;
            case 0x19BAE4u: goto label_19bae4;
            case 0x19BAE8u: goto label_19bae8;
            case 0x19BAECu: goto label_19baec;
            case 0x19BAF0u: goto label_19baf0;
            case 0x19BAF4u: goto label_19baf4;
            case 0x19BAF8u: goto label_19baf8;
            case 0x19BAFCu: goto label_19bafc;
            case 0x19BB00u: goto label_19bb00;
            case 0x19BB04u: goto label_19bb04;
            case 0x19BB08u: goto label_19bb08;
            case 0x19BB0Cu: goto label_19bb0c;
            case 0x19BB10u: goto label_19bb10;
            case 0x19BB14u: goto label_19bb14;
            case 0x19BB18u: goto label_19bb18;
            case 0x19BB1Cu: goto label_19bb1c;
            case 0x19BB20u: goto label_19bb20;
            case 0x19BB24u: goto label_19bb24;
            case 0x19BB28u: goto label_19bb28;
            case 0x19BB2Cu: goto label_19bb2c;
            case 0x19BB30u: goto label_19bb30;
            case 0x19BB34u: goto label_19bb34;
            case 0x19BB38u: goto label_19bb38;
            case 0x19BB3Cu: goto label_19bb3c;
            case 0x19BB40u: goto label_19bb40;
            case 0x19BB44u: goto label_19bb44;
            case 0x19BB48u: goto label_19bb48;
            case 0x19BB4Cu: goto label_19bb4c;
            case 0x19BB50u: goto label_19bb50;
            case 0x19BB54u: goto label_19bb54;
            case 0x19BB58u: goto label_19bb58;
            case 0x19BB5Cu: goto label_19bb5c;
            case 0x19BB60u: goto label_19bb60;
            case 0x19BB64u: goto label_19bb64;
            case 0x19BB68u: goto label_19bb68;
            case 0x19BB6Cu: goto label_19bb6c;
            case 0x19BB70u: goto label_19bb70;
            case 0x19BB74u: goto label_19bb74;
            case 0x19BB78u: goto label_19bb78;
            case 0x19BB7Cu: goto label_19bb7c;
            case 0x19BB80u: goto label_19bb80;
            case 0x19BB84u: goto label_19bb84;
            case 0x19BB88u: goto label_19bb88;
            case 0x19BB8Cu: goto label_19bb8c;
            case 0x19BB90u: goto label_19bb90;
            case 0x19BB94u: goto label_19bb94;
            case 0x19BB98u: goto label_19bb98;
            case 0x19BB9Cu: goto label_19bb9c;
            case 0x19BBA0u: goto label_19bba0;
            case 0x19BBA4u: goto label_19bba4;
            case 0x19BBA8u: goto label_19bba8;
            case 0x19BBACu: goto label_19bbac;
            case 0x19BBB0u: goto label_19bbb0;
            case 0x19BBB4u: goto label_19bbb4;
            case 0x19BBB8u: goto label_19bbb8;
            case 0x19BBBCu: goto label_19bbbc;
            case 0x19BBC0u: goto label_19bbc0;
            case 0x19BBC4u: goto label_19bbc4;
            case 0x19BBC8u: goto label_19bbc8;
            case 0x19BBCCu: goto label_19bbcc;
            case 0x19BBD0u: goto label_19bbd0;
            case 0x19BBD4u: goto label_19bbd4;
            case 0x19BBD8u: goto label_19bbd8;
            case 0x19BBDCu: goto label_19bbdc;
            case 0x19BBE0u: goto label_19bbe0;
            case 0x19BBE4u: goto label_19bbe4;
            case 0x19BBE8u: goto label_19bbe8;
            case 0x19BBECu: goto label_19bbec;
            case 0x19BBF0u: goto label_19bbf0;
            case 0x19BBF4u: goto label_19bbf4;
            case 0x19BBF8u: goto label_19bbf8;
            case 0x19BBFCu: goto label_19bbfc;
            case 0x19BC00u: goto label_19bc00;
            case 0x19BC04u: goto label_19bc04;
            case 0x19BC08u: goto label_19bc08;
            case 0x19BC0Cu: goto label_19bc0c;
            case 0x19BC10u: goto label_19bc10;
            case 0x19BC14u: goto label_19bc14;
            case 0x19BC18u: goto label_19bc18;
            case 0x19BC1Cu: goto label_19bc1c;
            case 0x19BC20u: goto label_19bc20;
            case 0x19BC24u: goto label_19bc24;
            case 0x19BC28u: goto label_19bc28;
            case 0x19BC2Cu: goto label_19bc2c;
            case 0x19BC30u: goto label_19bc30;
            case 0x19BC34u: goto label_19bc34;
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC40u: goto label_19bc40;
            case 0x19BC44u: goto label_19bc44;
            case 0x19BC48u: goto label_19bc48;
            case 0x19BC4Cu: goto label_19bc4c;
            case 0x19BC50u: goto label_19bc50;
            case 0x19BC54u: goto label_19bc54;
            case 0x19BC58u: goto label_19bc58;
            case 0x19BC5Cu: goto label_19bc5c;
            case 0x19BC60u: goto label_19bc60;
            case 0x19BC64u: goto label_19bc64;
            case 0x19BC68u: goto label_19bc68;
            case 0x19BC6Cu: goto label_19bc6c;
            case 0x19BC70u: goto label_19bc70;
            case 0x19BC74u: goto label_19bc74;
            case 0x19BC78u: goto label_19bc78;
            case 0x19BC7Cu: goto label_19bc7c;
            case 0x19BC80u: goto label_19bc80;
            case 0x19BC84u: goto label_19bc84;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BC8Cu: goto label_19bc8c;
            case 0x19BC90u: goto label_19bc90;
            case 0x19BC94u: goto label_19bc94;
            case 0x19BC98u: goto label_19bc98;
            case 0x19BC9Cu: goto label_19bc9c;
            case 0x19BCA0u: goto label_19bca0;
            case 0x19BCA4u: goto label_19bca4;
            case 0x19BCA8u: goto label_19bca8;
            case 0x19BCACu: goto label_19bcac;
            case 0x19BCB0u: goto label_19bcb0;
            case 0x19BCB4u: goto label_19bcb4;
            case 0x19BCB8u: goto label_19bcb8;
            case 0x19BCBCu: goto label_19bcbc;
            case 0x19BCC0u: goto label_19bcc0;
            case 0x19BCC4u: goto label_19bcc4;
            case 0x19BCC8u: goto label_19bcc8;
            case 0x19BCCCu: goto label_19bccc;
            case 0x19BCD0u: goto label_19bcd0;
            case 0x19BCD4u: goto label_19bcd4;
            case 0x19BCD8u: goto label_19bcd8;
            case 0x19BCDCu: goto label_19bcdc;
            case 0x19BCE0u: goto label_19bce0;
            case 0x19BCE4u: goto label_19bce4;
            case 0x19BCE8u: goto label_19bce8;
            case 0x19BCECu: goto label_19bcec;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BCF4u: goto label_19bcf4;
            case 0x19BCF8u: goto label_19bcf8;
            case 0x19BCFCu: goto label_19bcfc;
            case 0x19BD00u: goto label_19bd00;
            case 0x19BD04u: goto label_19bd04;
            case 0x19BD08u: goto label_19bd08;
            case 0x19BD0Cu: goto label_19bd0c;
            case 0x19BD10u: goto label_19bd10;
            case 0x19BD14u: goto label_19bd14;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD1Cu: goto label_19bd1c;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD28u: goto label_19bd28;
            case 0x19BD2Cu: goto label_19bd2c;
            case 0x19BD30u: goto label_19bd30;
            case 0x19BD34u: goto label_19bd34;
            case 0x19BD38u: goto label_19bd38;
            case 0x19BD3Cu: goto label_19bd3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BD04u; }
            if (ctx->pc != 0x19BD04u) { return; }
        }
    }
    ctx->pc = 0x19BD04u;
label_19bd04:
    // 0x19bd04: 0x1000000a  b           . + 4 + (0xA << 2)
label_19bd08:
    if (ctx->pc == 0x19BD08u) {
        ctx->pc = 0x19BD0Cu;
        goto label_19bd0c;
    }
    ctx->pc = 0x19BD04u;
    {
        const bool branch_taken_0x19bd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd04) {
            ctx->pc = 0x19BD30u;
            goto label_19bd30;
        }
    }
    ctx->pc = 0x19BD0Cu;
label_19bd0c:
    // 0x19bd0c: 0x0  nop
    ctx->pc = 0x19bd0cu;
    // NOP
label_19bd10:
    // 0x19bd10: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
label_19bd14:
    // 0x19bd14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_19bd18:
    // 0x19bd18: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x19bd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
label_19bd1c:
    // 0x19bd1c: 0x24c6b4b0  addiu       $a2, $a2, -0x4B50
    ctx->pc = 0x19bd1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948016));
label_19bd20:
    // 0x19bd20: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19bd20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19bd24:
    // 0x19bd24: 0xc053ca4  jal         func_14F290
label_19bd28:
    if (ctx->pc == 0x19BD28u) {
        ctx->pc = 0x19BD28u;
            // 0x19bd28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19BD2Cu;
        goto label_19bd2c;
    }
    ctx->pc = 0x19BD24u;
    SET_GPR_U32(ctx, 31, 0x19BD2Cu);
    ctx->pc = 0x19BD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD24u;
            // 0x19bd28: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD2Cu; }
        if (ctx->pc != 0x19BD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD2Cu; }
        if (ctx->pc != 0x19BD2Cu) { return; }
    }
    ctx->pc = 0x19BD2Cu;
label_19bd2c:
    // 0x19bd2c: 0x0  nop
    ctx->pc = 0x19bd2cu;
    // NOP
label_19bd30:
    // 0x19bd30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bd30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bd34:
    // 0x19bd34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19bd38:
    // 0x19bd38: 0x3e00008  jr          $ra
label_19bd3c:
    if (ctx->pc == 0x19BD3Cu) {
        ctx->pc = 0x19BD3Cu;
            // 0x19bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x19BD40u;
        goto label_fallthrough_0x19bd38;
    }
    ctx->pc = 0x19BD38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD38u;
            // 0x19bd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B720u: goto label_19b720;
            case 0x19B724u: goto label_19b724;
            case 0x19B728u: goto label_19b728;
            case 0x19B72Cu: goto label_19b72c;
            case 0x19B730u: goto label_19b730;
            case 0x19B734u: goto label_19b734;
            case 0x19B738u: goto label_19b738;
            case 0x19B73Cu: goto label_19b73c;
            case 0x19B740u: goto label_19b740;
            case 0x19B744u: goto label_19b744;
            case 0x19B748u: goto label_19b748;
            case 0x19B74Cu: goto label_19b74c;
            case 0x19B750u: goto label_19b750;
            case 0x19B754u: goto label_19b754;
            case 0x19B758u: goto label_19b758;
            case 0x19B75Cu: goto label_19b75c;
            case 0x19B760u: goto label_19b760;
            case 0x19B764u: goto label_19b764;
            case 0x19B768u: goto label_19b768;
            case 0x19B76Cu: goto label_19b76c;
            case 0x19B770u: goto label_19b770;
            case 0x19B774u: goto label_19b774;
            case 0x19B778u: goto label_19b778;
            case 0x19B77Cu: goto label_19b77c;
            case 0x19B780u: goto label_19b780;
            case 0x19B784u: goto label_19b784;
            case 0x19B788u: goto label_19b788;
            case 0x19B78Cu: goto label_19b78c;
            case 0x19B790u: goto label_19b790;
            case 0x19B794u: goto label_19b794;
            case 0x19B798u: goto label_19b798;
            case 0x19B79Cu: goto label_19b79c;
            case 0x19B7A0u: goto label_19b7a0;
            case 0x19B7A4u: goto label_19b7a4;
            case 0x19B7A8u: goto label_19b7a8;
            case 0x19B7ACu: goto label_19b7ac;
            case 0x19B7B0u: goto label_19b7b0;
            case 0x19B7B4u: goto label_19b7b4;
            case 0x19B7B8u: goto label_19b7b8;
            case 0x19B7BCu: goto label_19b7bc;
            case 0x19B7C0u: goto label_19b7c0;
            case 0x19B7C4u: goto label_19b7c4;
            case 0x19B7C8u: goto label_19b7c8;
            case 0x19B7CCu: goto label_19b7cc;
            case 0x19B7D0u: goto label_19b7d0;
            case 0x19B7D4u: goto label_19b7d4;
            case 0x19B7D8u: goto label_19b7d8;
            case 0x19B7DCu: goto label_19b7dc;
            case 0x19B7E0u: goto label_19b7e0;
            case 0x19B7E4u: goto label_19b7e4;
            case 0x19B7E8u: goto label_19b7e8;
            case 0x19B7ECu: goto label_19b7ec;
            case 0x19B7F0u: goto label_19b7f0;
            case 0x19B7F4u: goto label_19b7f4;
            case 0x19B7F8u: goto label_19b7f8;
            case 0x19B7FCu: goto label_19b7fc;
            case 0x19B800u: goto label_19b800;
            case 0x19B804u: goto label_19b804;
            case 0x19B808u: goto label_19b808;
            case 0x19B80Cu: goto label_19b80c;
            case 0x19B810u: goto label_19b810;
            case 0x19B814u: goto label_19b814;
            case 0x19B818u: goto label_19b818;
            case 0x19B81Cu: goto label_19b81c;
            case 0x19B820u: goto label_19b820;
            case 0x19B824u: goto label_19b824;
            case 0x19B828u: goto label_19b828;
            case 0x19B82Cu: goto label_19b82c;
            case 0x19B830u: goto label_19b830;
            case 0x19B834u: goto label_19b834;
            case 0x19B838u: goto label_19b838;
            case 0x19B83Cu: goto label_19b83c;
            case 0x19B840u: goto label_19b840;
            case 0x19B844u: goto label_19b844;
            case 0x19B848u: goto label_19b848;
            case 0x19B84Cu: goto label_19b84c;
            case 0x19B850u: goto label_19b850;
            case 0x19B854u: goto label_19b854;
            case 0x19B858u: goto label_19b858;
            case 0x19B85Cu: goto label_19b85c;
            case 0x19B860u: goto label_19b860;
            case 0x19B864u: goto label_19b864;
            case 0x19B868u: goto label_19b868;
            case 0x19B86Cu: goto label_19b86c;
            case 0x19B870u: goto label_19b870;
            case 0x19B874u: goto label_19b874;
            case 0x19B878u: goto label_19b878;
            case 0x19B87Cu: goto label_19b87c;
            case 0x19B880u: goto label_19b880;
            case 0x19B884u: goto label_19b884;
            case 0x19B888u: goto label_19b888;
            case 0x19B88Cu: goto label_19b88c;
            case 0x19B890u: goto label_19b890;
            case 0x19B894u: goto label_19b894;
            case 0x19B898u: goto label_19b898;
            case 0x19B89Cu: goto label_19b89c;
            case 0x19B8A0u: goto label_19b8a0;
            case 0x19B8A4u: goto label_19b8a4;
            case 0x19B8A8u: goto label_19b8a8;
            case 0x19B8ACu: goto label_19b8ac;
            case 0x19B8B0u: goto label_19b8b0;
            case 0x19B8B4u: goto label_19b8b4;
            case 0x19B8B8u: goto label_19b8b8;
            case 0x19B8BCu: goto label_19b8bc;
            case 0x19B8C0u: goto label_19b8c0;
            case 0x19B8C4u: goto label_19b8c4;
            case 0x19B8C8u: goto label_19b8c8;
            case 0x19B8CCu: goto label_19b8cc;
            case 0x19B8D0u: goto label_19b8d0;
            case 0x19B8D4u: goto label_19b8d4;
            case 0x19B8D8u: goto label_19b8d8;
            case 0x19B8DCu: goto label_19b8dc;
            case 0x19B8E0u: goto label_19b8e0;
            case 0x19B8E4u: goto label_19b8e4;
            case 0x19B8E8u: goto label_19b8e8;
            case 0x19B8ECu: goto label_19b8ec;
            case 0x19B8F0u: goto label_19b8f0;
            case 0x19B8F4u: goto label_19b8f4;
            case 0x19B8F8u: goto label_19b8f8;
            case 0x19B8FCu: goto label_19b8fc;
            case 0x19B900u: goto label_19b900;
            case 0x19B904u: goto label_19b904;
            case 0x19B908u: goto label_19b908;
            case 0x19B90Cu: goto label_19b90c;
            case 0x19B910u: goto label_19b910;
            case 0x19B914u: goto label_19b914;
            case 0x19B918u: goto label_19b918;
            case 0x19B91Cu: goto label_19b91c;
            case 0x19B920u: goto label_19b920;
            case 0x19B924u: goto label_19b924;
            case 0x19B928u: goto label_19b928;
            case 0x19B92Cu: goto label_19b92c;
            case 0x19B930u: goto label_19b930;
            case 0x19B934u: goto label_19b934;
            case 0x19B938u: goto label_19b938;
            case 0x19B93Cu: goto label_19b93c;
            case 0x19B940u: goto label_19b940;
            case 0x19B944u: goto label_19b944;
            case 0x19B948u: goto label_19b948;
            case 0x19B94Cu: goto label_19b94c;
            case 0x19B950u: goto label_19b950;
            case 0x19B954u: goto label_19b954;
            case 0x19B958u: goto label_19b958;
            case 0x19B95Cu: goto label_19b95c;
            case 0x19B960u: goto label_19b960;
            case 0x19B964u: goto label_19b964;
            case 0x19B968u: goto label_19b968;
            case 0x19B96Cu: goto label_19b96c;
            case 0x19B970u: goto label_19b970;
            case 0x19B974u: goto label_19b974;
            case 0x19B978u: goto label_19b978;
            case 0x19B97Cu: goto label_19b97c;
            case 0x19B980u: goto label_19b980;
            case 0x19B984u: goto label_19b984;
            case 0x19B988u: goto label_19b988;
            case 0x19B98Cu: goto label_19b98c;
            case 0x19B990u: goto label_19b990;
            case 0x19B994u: goto label_19b994;
            case 0x19B998u: goto label_19b998;
            case 0x19B99Cu: goto label_19b99c;
            case 0x19B9A0u: goto label_19b9a0;
            case 0x19B9A4u: goto label_19b9a4;
            case 0x19B9A8u: goto label_19b9a8;
            case 0x19B9ACu: goto label_19b9ac;
            case 0x19B9B0u: goto label_19b9b0;
            case 0x19B9B4u: goto label_19b9b4;
            case 0x19B9B8u: goto label_19b9b8;
            case 0x19B9BCu: goto label_19b9bc;
            case 0x19B9C0u: goto label_19b9c0;
            case 0x19B9C4u: goto label_19b9c4;
            case 0x19B9C8u: goto label_19b9c8;
            case 0x19B9CCu: goto label_19b9cc;
            case 0x19B9D0u: goto label_19b9d0;
            case 0x19B9D4u: goto label_19b9d4;
            case 0x19B9D8u: goto label_19b9d8;
            case 0x19B9DCu: goto label_19b9dc;
            case 0x19B9E0u: goto label_19b9e0;
            case 0x19B9E4u: goto label_19b9e4;
            case 0x19B9E8u: goto label_19b9e8;
            case 0x19B9ECu: goto label_19b9ec;
            case 0x19B9F0u: goto label_19b9f0;
            case 0x19B9F4u: goto label_19b9f4;
            case 0x19B9F8u: goto label_19b9f8;
            case 0x19B9FCu: goto label_19b9fc;
            case 0x19BA00u: goto label_19ba00;
            case 0x19BA04u: goto label_19ba04;
            case 0x19BA08u: goto label_19ba08;
            case 0x19BA0Cu: goto label_19ba0c;
            case 0x19BA10u: goto label_19ba10;
            case 0x19BA14u: goto label_19ba14;
            case 0x19BA18u: goto label_19ba18;
            case 0x19BA1Cu: goto label_19ba1c;
            case 0x19BA20u: goto label_19ba20;
            case 0x19BA24u: goto label_19ba24;
            case 0x19BA28u: goto label_19ba28;
            case 0x19BA2Cu: goto label_19ba2c;
            case 0x19BA30u: goto label_19ba30;
            case 0x19BA34u: goto label_19ba34;
            case 0x19BA38u: goto label_19ba38;
            case 0x19BA3Cu: goto label_19ba3c;
            case 0x19BA40u: goto label_19ba40;
            case 0x19BA44u: goto label_19ba44;
            case 0x19BA48u: goto label_19ba48;
            case 0x19BA4Cu: goto label_19ba4c;
            case 0x19BA50u: goto label_19ba50;
            case 0x19BA54u: goto label_19ba54;
            case 0x19BA58u: goto label_19ba58;
            case 0x19BA5Cu: goto label_19ba5c;
            case 0x19BA60u: goto label_19ba60;
            case 0x19BA64u: goto label_19ba64;
            case 0x19BA68u: goto label_19ba68;
            case 0x19BA6Cu: goto label_19ba6c;
            case 0x19BA70u: goto label_19ba70;
            case 0x19BA74u: goto label_19ba74;
            case 0x19BA78u: goto label_19ba78;
            case 0x19BA7Cu: goto label_19ba7c;
            case 0x19BA80u: goto label_19ba80;
            case 0x19BA84u: goto label_19ba84;
            case 0x19BA88u: goto label_19ba88;
            case 0x19BA8Cu: goto label_19ba8c;
            case 0x19BA90u: goto label_19ba90;
            case 0x19BA94u: goto label_19ba94;
            case 0x19BA98u: goto label_19ba98;
            case 0x19BA9Cu: goto label_19ba9c;
            case 0x19BAA0u: goto label_19baa0;
            case 0x19BAA4u: goto label_19baa4;
            case 0x19BAA8u: goto label_19baa8;
            case 0x19BAACu: goto label_19baac;
            case 0x19BAB0u: goto label_19bab0;
            case 0x19BAB4u: goto label_19bab4;
            case 0x19BAB8u: goto label_19bab8;
            case 0x19BABCu: goto label_19babc;
            case 0x19BAC0u: goto label_19bac0;
            case 0x19BAC4u: goto label_19bac4;
            case 0x19BAC8u: goto label_19bac8;
            case 0x19BACCu: goto label_19bacc;
            case 0x19BAD0u: goto label_19bad0;
            case 0x19BAD4u: goto label_19bad4;
            case 0x19BAD8u: goto label_19bad8;
            case 0x19BADCu: goto label_19badc;
            case 0x19BAE0u: goto label_19bae0;
            case 0x19BAE4u: goto label_19bae4;
            case 0x19BAE8u: goto label_19bae8;
            case 0x19BAECu: goto label_19baec;
            case 0x19BAF0u: goto label_19baf0;
            case 0x19BAF4u: goto label_19baf4;
            case 0x19BAF8u: goto label_19baf8;
            case 0x19BAFCu: goto label_19bafc;
            case 0x19BB00u: goto label_19bb00;
            case 0x19BB04u: goto label_19bb04;
            case 0x19BB08u: goto label_19bb08;
            case 0x19BB0Cu: goto label_19bb0c;
            case 0x19BB10u: goto label_19bb10;
            case 0x19BB14u: goto label_19bb14;
            case 0x19BB18u: goto label_19bb18;
            case 0x19BB1Cu: goto label_19bb1c;
            case 0x19BB20u: goto label_19bb20;
            case 0x19BB24u: goto label_19bb24;
            case 0x19BB28u: goto label_19bb28;
            case 0x19BB2Cu: goto label_19bb2c;
            case 0x19BB30u: goto label_19bb30;
            case 0x19BB34u: goto label_19bb34;
            case 0x19BB38u: goto label_19bb38;
            case 0x19BB3Cu: goto label_19bb3c;
            case 0x19BB40u: goto label_19bb40;
            case 0x19BB44u: goto label_19bb44;
            case 0x19BB48u: goto label_19bb48;
            case 0x19BB4Cu: goto label_19bb4c;
            case 0x19BB50u: goto label_19bb50;
            case 0x19BB54u: goto label_19bb54;
            case 0x19BB58u: goto label_19bb58;
            case 0x19BB5Cu: goto label_19bb5c;
            case 0x19BB60u: goto label_19bb60;
            case 0x19BB64u: goto label_19bb64;
            case 0x19BB68u: goto label_19bb68;
            case 0x19BB6Cu: goto label_19bb6c;
            case 0x19BB70u: goto label_19bb70;
            case 0x19BB74u: goto label_19bb74;
            case 0x19BB78u: goto label_19bb78;
            case 0x19BB7Cu: goto label_19bb7c;
            case 0x19BB80u: goto label_19bb80;
            case 0x19BB84u: goto label_19bb84;
            case 0x19BB88u: goto label_19bb88;
            case 0x19BB8Cu: goto label_19bb8c;
            case 0x19BB90u: goto label_19bb90;
            case 0x19BB94u: goto label_19bb94;
            case 0x19BB98u: goto label_19bb98;
            case 0x19BB9Cu: goto label_19bb9c;
            case 0x19BBA0u: goto label_19bba0;
            case 0x19BBA4u: goto label_19bba4;
            case 0x19BBA8u: goto label_19bba8;
            case 0x19BBACu: goto label_19bbac;
            case 0x19BBB0u: goto label_19bbb0;
            case 0x19BBB4u: goto label_19bbb4;
            case 0x19BBB8u: goto label_19bbb8;
            case 0x19BBBCu: goto label_19bbbc;
            case 0x19BBC0u: goto label_19bbc0;
            case 0x19BBC4u: goto label_19bbc4;
            case 0x19BBC8u: goto label_19bbc8;
            case 0x19BBCCu: goto label_19bbcc;
            case 0x19BBD0u: goto label_19bbd0;
            case 0x19BBD4u: goto label_19bbd4;
            case 0x19BBD8u: goto label_19bbd8;
            case 0x19BBDCu: goto label_19bbdc;
            case 0x19BBE0u: goto label_19bbe0;
            case 0x19BBE4u: goto label_19bbe4;
            case 0x19BBE8u: goto label_19bbe8;
            case 0x19BBECu: goto label_19bbec;
            case 0x19BBF0u: goto label_19bbf0;
            case 0x19BBF4u: goto label_19bbf4;
            case 0x19BBF8u: goto label_19bbf8;
            case 0x19BBFCu: goto label_19bbfc;
            case 0x19BC00u: goto label_19bc00;
            case 0x19BC04u: goto label_19bc04;
            case 0x19BC08u: goto label_19bc08;
            case 0x19BC0Cu: goto label_19bc0c;
            case 0x19BC10u: goto label_19bc10;
            case 0x19BC14u: goto label_19bc14;
            case 0x19BC18u: goto label_19bc18;
            case 0x19BC1Cu: goto label_19bc1c;
            case 0x19BC20u: goto label_19bc20;
            case 0x19BC24u: goto label_19bc24;
            case 0x19BC28u: goto label_19bc28;
            case 0x19BC2Cu: goto label_19bc2c;
            case 0x19BC30u: goto label_19bc30;
            case 0x19BC34u: goto label_19bc34;
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC40u: goto label_19bc40;
            case 0x19BC44u: goto label_19bc44;
            case 0x19BC48u: goto label_19bc48;
            case 0x19BC4Cu: goto label_19bc4c;
            case 0x19BC50u: goto label_19bc50;
            case 0x19BC54u: goto label_19bc54;
            case 0x19BC58u: goto label_19bc58;
            case 0x19BC5Cu: goto label_19bc5c;
            case 0x19BC60u: goto label_19bc60;
            case 0x19BC64u: goto label_19bc64;
            case 0x19BC68u: goto label_19bc68;
            case 0x19BC6Cu: goto label_19bc6c;
            case 0x19BC70u: goto label_19bc70;
            case 0x19BC74u: goto label_19bc74;
            case 0x19BC78u: goto label_19bc78;
            case 0x19BC7Cu: goto label_19bc7c;
            case 0x19BC80u: goto label_19bc80;
            case 0x19BC84u: goto label_19bc84;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BC8Cu: goto label_19bc8c;
            case 0x19BC90u: goto label_19bc90;
            case 0x19BC94u: goto label_19bc94;
            case 0x19BC98u: goto label_19bc98;
            case 0x19BC9Cu: goto label_19bc9c;
            case 0x19BCA0u: goto label_19bca0;
            case 0x19BCA4u: goto label_19bca4;
            case 0x19BCA8u: goto label_19bca8;
            case 0x19BCACu: goto label_19bcac;
            case 0x19BCB0u: goto label_19bcb0;
            case 0x19BCB4u: goto label_19bcb4;
            case 0x19BCB8u: goto label_19bcb8;
            case 0x19BCBCu: goto label_19bcbc;
            case 0x19BCC0u: goto label_19bcc0;
            case 0x19BCC4u: goto label_19bcc4;
            case 0x19BCC8u: goto label_19bcc8;
            case 0x19BCCCu: goto label_19bccc;
            case 0x19BCD0u: goto label_19bcd0;
            case 0x19BCD4u: goto label_19bcd4;
            case 0x19BCD8u: goto label_19bcd8;
            case 0x19BCDCu: goto label_19bcdc;
            case 0x19BCE0u: goto label_19bce0;
            case 0x19BCE4u: goto label_19bce4;
            case 0x19BCE8u: goto label_19bce8;
            case 0x19BCECu: goto label_19bcec;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BCF4u: goto label_19bcf4;
            case 0x19BCF8u: goto label_19bcf8;
            case 0x19BCFCu: goto label_19bcfc;
            case 0x19BD00u: goto label_19bd00;
            case 0x19BD04u: goto label_19bd04;
            case 0x19BD08u: goto label_19bd08;
            case 0x19BD0Cu: goto label_19bd0c;
            case 0x19BD10u: goto label_19bd10;
            case 0x19BD14u: goto label_19bd14;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD1Cu: goto label_19bd1c;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD28u: goto label_19bd28;
            case 0x19BD2Cu: goto label_19bd2c;
            case 0x19BD30u: goto label_19bd30;
            case 0x19BD34u: goto label_19bd34;
            case 0x19BD38u: goto label_19bd38;
            case 0x19BD3Cu: goto label_19bd3c;
            default: break;
        }
        return;
    }
label_fallthrough_0x19bd38:
    ctx->pc = 0x19BD40u;
}
