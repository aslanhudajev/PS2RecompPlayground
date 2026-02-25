#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_KUMO
// Address: 0x147ab0 - 0x147c28
void MapMoveingFunc_KUMO_0x147ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_KUMO_0x147ab0");
#endif

    ctx->pc = 0x147ab0u;

    // 0x147ab0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x147ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147ab4: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x147ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x147ab8: 0x34a5d70a  ori         $a1, $a1, 0xD70A
    ctx->pc = 0x147ab8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)55050u)));
    // 0x147abc: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147ac0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147ac0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ac4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x147ac4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147acc: 0xc4c20110  lwc1        $f2, 0x110($a2)
    ctx->pc = 0x147accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147ad0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x147ad0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x147ad4: 0xe4c10110  swc1        $f1, 0x110($a2)
    ctx->pc = 0x147ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x147ad8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x147ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147adc: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x147adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147ae0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147ae4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x147AE4u;
    {
        const bool branch_taken_0x147ae4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147AE4u;
            // 0x147ae8: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ae4) {
            ctx->pc = 0x147B08u;
            goto label_147b08;
        }
    }
    ctx->pc = 0x147AECu;
    // 0x147aec: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147aecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147af0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147af0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147af4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147af4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147af8: 0x0  nop
    ctx->pc = 0x147af8u;
    // NOP
    // 0x147afc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147afcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147b00: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x147b04: 0x0  nop
    ctx->pc = 0x147b04u;
    // NOP
label_147b08:
    // 0x147b08: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147b0c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147b10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b18: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x147b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147b1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147b20: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147B20u;
    {
        const bool branch_taken_0x147b20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B20u;
            // 0x147b24: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b20) {
            ctx->pc = 0x147B40u;
            goto label_147b40;
        }
    }
    ctx->pc = 0x147B28u;
    // 0x147b28: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147b2c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b2cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147b30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b34: 0x0  nop
    ctx->pc = 0x147b34u;
    // NOP
    // 0x147b38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147b3c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147b40:
    // 0x147b40: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147b44: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147b48: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b48u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b50: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x147b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147b54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147b58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147B58u;
    {
        const bool branch_taken_0x147b58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B58u;
            // 0x147b5c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b58) {
            ctx->pc = 0x147B78u;
            goto label_147b78;
        }
    }
    ctx->pc = 0x147B60u;
    // 0x147b60: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147b64: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b64u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b6c: 0x0  nop
    ctx->pc = 0x147b6cu;
    // NOP
    // 0x147b70: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147b70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147b74: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147b78:
    // 0x147b78: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147b7c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147b80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b88: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x147b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147b8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147b8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147b90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147B90u;
    {
        const bool branch_taken_0x147b90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B90u;
            // 0x147b94: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b90) {
            ctx->pc = 0x147BB0u;
            goto label_147bb0;
        }
    }
    ctx->pc = 0x147B98u;
    // 0x147b98: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147b9c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147b9cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147ba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147ba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147ba4: 0x0  nop
    ctx->pc = 0x147ba4u;
    // NOP
    // 0x147ba8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147bac: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147bb0:
    // 0x147bb0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147bb4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x147bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x147bb8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147bb8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147bbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147bbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147bc0: 0xc4a10118  lwc1        $f1, 0x118($a1)
    ctx->pc = 0x147bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147bc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147bc8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x147BC8u;
    {
        const bool branch_taken_0x147bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x147BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147BC8u;
            // 0x147bcc: 0x24a60118  addiu       $a2, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bc8) {
            ctx->pc = 0x147BE8u;
            goto label_147be8;
        }
    }
    ctx->pc = 0x147BD0u;
    // 0x147bd0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147bd4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147bd4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147bdc: 0x0  nop
    ctx->pc = 0x147bdcu;
    // NOP
    // 0x147be0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x147be0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x147be4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x147be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_147be8:
    // 0x147be8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x147be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147bec: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x147becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x147bf0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147bf0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147bf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147bf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147bf8: 0xc4810118  lwc1        $f1, 0x118($a0)
    ctx->pc = 0x147bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147bfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147c00: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147C00u;
    {
        const bool branch_taken_0x147c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147C00u;
            // 0x147c04: 0x24850118  addiu       $a1, $a0, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147c00) {
            ctx->pc = 0x147C20u;
            goto label_147c20;
        }
    }
    ctx->pc = 0x147C08u;
    // 0x147c08: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x147c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x147c0c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x147c0cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x147c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147c14: 0x0  nop
    ctx->pc = 0x147c14u;
    // NOP
    // 0x147c18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x147c18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x147c1c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x147c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_147c20:
    // 0x147c20: 0x3e00008  jr          $ra
    ctx->pc = 0x147C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147B08u: goto label_147b08;
            case 0x147B40u: goto label_147b40;
            case 0x147B78u: goto label_147b78;
            case 0x147BB0u: goto label_147bb0;
            case 0x147BE8u: goto label_147be8;
            case 0x147C20u: goto label_147c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147C28u;
}
