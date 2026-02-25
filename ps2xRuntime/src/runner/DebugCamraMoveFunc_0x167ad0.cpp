#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DebugCamraMoveFunc
// Address: 0x167ad0 - 0x167c80
void DebugCamraMoveFunc_0x167ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DebugCamraMoveFunc_0x167ad0");
#endif

    ctx->pc = 0x167ad0u;

    // 0x167ad0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167ad4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167ad8: 0x8c244c50  lw          $a0, 0x4C50($at)
    ctx->pc = 0x167ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19536)));
    // 0x167adc: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x167ADCu;
    {
        const bool branch_taken_0x167adc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x167AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167ADCu;
            // 0x167ae0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167adc) {
            ctx->pc = 0x167C68u;
            goto label_167c68;
        }
    }
    ctx->pc = 0x167AE4u;
    // 0x167ae4: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x167AE4u;
    {
        const bool branch_taken_0x167ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x167ae4) {
            ctx->pc = 0x167B48u;
            goto label_167b48;
        }
    }
    ctx->pc = 0x167AECu;
    // 0x167aec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x167AECu;
    {
        const bool branch_taken_0x167aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x167aec) {
            ctx->pc = 0x167B00u;
            goto label_167b00;
        }
    }
    ctx->pc = 0x167AF4u;
    // 0x167af4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x167AF4u;
    {
        const bool branch_taken_0x167af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167af4) {
            ctx->pc = 0x167C78u;
            goto label_167c78;
        }
    }
    ctx->pc = 0x167AFCu;
    // 0x167afc: 0x0  nop
    ctx->pc = 0x167afcu;
    // NOP
label_167b00:
    // 0x167b00: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x167b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x167b04: 0xac239d90  sw          $v1, -0x6270($at)
    ctx->pc = 0x167b04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942096), GPR_U32(ctx, 3));
    // 0x167b08: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x167b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x167b0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x167b14: 0xac244c30  sw          $a0, 0x4C30($at)
    ctx->pc = 0x167b14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19504), GPR_U32(ctx, 4));
    // 0x167b18: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b1c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x167b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x167b20: 0xac234c50  sw          $v1, 0x4C50($at)
    ctx->pc = 0x167b20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19536), GPR_U32(ctx, 3));
    // 0x167b24: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x167b24u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)55050u)));
    // 0x167b28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b2c: 0xac234c38  sw          $v1, 0x4C38($at)
    ctx->pc = 0x167b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19512), GPR_U32(ctx, 3));
    // 0x167b30: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x167b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x167b34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b38: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x167b38u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x167b3c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x167B3Cu;
    {
        const bool branch_taken_0x167b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B3Cu;
            // 0x167b40: 0xac234c80  sw          $v1, 0x4C80($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b3c) {
            ctx->pc = 0x167C78u;
            goto label_167c78;
        }
    }
    ctx->pc = 0x167B44u;
    // 0x167b44: 0x0  nop
    ctx->pc = 0x167b44u;
    // NOP
label_167b48:
    // 0x167b48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b4c: 0xc4244c30  lwc1        $f4, 0x4C30($at)
    ctx->pc = 0x167b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167b50: 0x3c033b1d  lui         $v1, 0x3B1D
    ctx->pc = 0x167b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15133 << 16));
    // 0x167b54: 0x34634952  ori         $v1, $v1, 0x4952
    ctx->pc = 0x167b54u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)18770u)));
    // 0x167b58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x167b58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x167b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167b60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b64: 0xc4224c38  lwc1        $f2, 0x4C38($at)
    ctx->pc = 0x167b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167b68: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x167b68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x167b6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b70: 0xc4214c80  lwc1        $f1, 0x4C80($at)
    ctx->pc = 0x167b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167b74: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x167b74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x167b78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b7c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x167b7cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x167b80: 0xe4234c30  swc1        $f3, 0x4C30($at)
    ctx->pc = 0x167b80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19504), bits); }
    // 0x167b84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167b8c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x167B8Cu;
    {
        const bool branch_taken_0x167b8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167B8Cu;
            // 0x167b90: 0xe4224c38  swc1        $f2, 0x4C38($at) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b8c) {
            ctx->pc = 0x167BB0u;
            goto label_167bb0;
        }
    }
    ctx->pc = 0x167B94u;
    // 0x167b94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167b98: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x167b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x167b9c: 0xe4204c30  swc1        $f0, 0x4C30($at)
    ctx->pc = 0x167b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19504), bits); }
    // 0x167ba0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167ba4: 0xac234c50  sw          $v1, 0x4C50($at)
    ctx->pc = 0x167ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19536), GPR_U32(ctx, 3));
    // 0x167ba8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x167ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x167bac: 0xac209d90  sw          $zero, -0x6270($at)
    ctx->pc = 0x167bacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294942096), GPR_U32(ctx, 0));
label_167bb0:
    // 0x167bb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167bb4: 0xc4224c38  lwc1        $f2, 0x4C38($at)
    ctx->pc = 0x167bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167bb8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x167bbc: 0x0  nop
    ctx->pc = 0x167bbcu;
    // NOP
    // 0x167bc0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x167bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167bc4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x167BC4u;
    {
        const bool branch_taken_0x167bc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167BC4u;
            // 0x167bc8: 0x3c033c75  lui         $v1, 0x3C75 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bc4) {
            ctx->pc = 0x167BE8u;
            goto label_167be8;
        }
    }
    ctx->pc = 0x167BCCu;
    // 0x167bcc: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x167bccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)49807u)));
    // 0x167bd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167bd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167bd4: 0x0  nop
    ctx->pc = 0x167bd4u;
    // NOP
    // 0x167bd8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x167bd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167bdc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167BDCu;
    {
        const bool branch_taken_0x167bdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167BDCu;
            // 0x167be0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bdc) {
            ctx->pc = 0x167BE8u;
            goto label_167be8;
        }
    }
    ctx->pc = 0x167BE4u;
    // 0x167be4: 0xe4214c38  swc1        $f1, 0x4C38($at)
    ctx->pc = 0x167be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19512), bits); }
label_167be8:
    // 0x167be8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167bec: 0xc4214c38  lwc1        $f1, 0x4C38($at)
    ctx->pc = 0x167becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167bf0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x167bf4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x167bf4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x167bf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167bf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167bfc: 0x0  nop
    ctx->pc = 0x167bfcu;
    // NOP
    // 0x167c00: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167c04: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x167C04u;
    {
        const bool branch_taken_0x167c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C04u;
            // 0x167c08: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c04) {
            ctx->pc = 0x167C28u;
            goto label_167c28;
        }
    }
    ctx->pc = 0x167C0Cu;
    // 0x167c0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167c10: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x167c10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x167c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c18: 0x0  nop
    ctx->pc = 0x167c18u;
    // NOP
    // 0x167c1c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x167c1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x167c20: 0xe4204c38  swc1        $f0, 0x4C38($at)
    ctx->pc = 0x167c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19512), bits); }
    // 0x167c24: 0x0  nop
    ctx->pc = 0x167c24u;
    // NOP
label_167c28:
    // 0x167c28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167c2c: 0xc4214c38  lwc1        $f1, 0x4C38($at)
    ctx->pc = 0x167c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 19512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167c30: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x167c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x167c34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x167c34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x167c38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167c38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c3c: 0x0  nop
    ctx->pc = 0x167c3cu;
    // NOP
    // 0x167c40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167c44: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x167C44u;
    {
        const bool branch_taken_0x167c44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C44u;
            // 0x167c48: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c44) {
            ctx->pc = 0x167C78u;
            goto label_167c78;
        }
    }
    ctx->pc = 0x167C4Cu;
    // 0x167c4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167c50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x167c50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x167c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167c58: 0x0  nop
    ctx->pc = 0x167c58u;
    // NOP
    // 0x167c5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x167c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x167c60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x167C60u;
    {
        const bool branch_taken_0x167c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167C60u;
            // 0x167c64: 0xe4204c38  swc1        $f0, 0x4C38($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 19512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167c60) {
            ctx->pc = 0x167C78u;
            goto label_167c78;
        }
    }
    ctx->pc = 0x167C68u;
label_167c68:
    // 0x167c68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167c6c: 0xac204c38  sw          $zero, 0x4C38($at)
    ctx->pc = 0x167c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19512), GPR_U32(ctx, 0));
    // 0x167c70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167c74: 0xac204c30  sw          $zero, 0x4C30($at)
    ctx->pc = 0x167c74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 19504), GPR_U32(ctx, 0));
label_167c78:
    // 0x167c78: 0x3e00008  jr          $ra
    ctx->pc = 0x167C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167B00u: goto label_167b00;
            case 0x167B48u: goto label_167b48;
            case 0x167BB0u: goto label_167bb0;
            case 0x167BE8u: goto label_167be8;
            case 0x167C28u: goto label_167c28;
            case 0x167C68u: goto label_167c68;
            case 0x167C78u: goto label_167c78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167C80u;
}
