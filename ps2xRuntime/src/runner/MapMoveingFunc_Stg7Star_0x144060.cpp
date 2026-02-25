#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg7Star
// Address: 0x144060 - 0x144168
void MapMoveingFunc_Stg7Star_0x144060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg7Star_0x144060");
#endif

    ctx->pc = 0x144060u;

    // 0x144060: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x144060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144064: 0x3c053951  lui         $a1, 0x3951
    ctx->pc = 0x144064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14673 << 16));
    // 0x144068: 0x34a5b717  ori         $a1, $a1, 0xB717
    ctx->pc = 0x144068u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46871u)));
    // 0x14406c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14406cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x144070: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144070u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144074: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x144074u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144078: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14407c: 0xc4c20110  lwc1        $f2, 0x110($a2)
    ctx->pc = 0x14407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144080: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x144080u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x144084: 0xe4c10110  swc1        $f1, 0x110($a2)
    ctx->pc = 0x144084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x144088: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x144088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14408c: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x14408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144094: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x144094u;
    {
        const bool branch_taken_0x144094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x144098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144094u;
            // 0x144098: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144094) {
            ctx->pc = 0x1440B8u;
            goto label_1440b8;
        }
    }
    ctx->pc = 0x14409Cu;
    // 0x14409c: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1440a0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1440a0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1440a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1440a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1440a8: 0x0  nop
    ctx->pc = 0x1440a8u;
    // NOP
    // 0x1440ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1440acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1440b0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1440b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1440b4: 0x0  nop
    ctx->pc = 0x1440b4u;
    // NOP
label_1440b8:
    // 0x1440b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1440b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1440bc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1440bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1440c0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1440c0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1440c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1440c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1440c8: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x1440c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1440cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1440ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1440d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1440D0u;
    {
        const bool branch_taken_0x1440d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1440D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440D0u;
            // 0x1440d4: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440d0) {
            ctx->pc = 0x1440F0u;
            goto label_1440f0;
        }
    }
    ctx->pc = 0x1440D8u;
    // 0x1440d8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1440d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1440dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1440dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1440e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1440e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1440e4: 0x0  nop
    ctx->pc = 0x1440e4u;
    // NOP
    // 0x1440e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1440e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1440ec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1440ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1440f0:
    // 0x1440f0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1440f4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x1440f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x1440f8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1440f8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1440fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1440fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144100: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x144100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144108: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x144108u;
    {
        const bool branch_taken_0x144108 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144108u;
            // 0x14410c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144108) {
            ctx->pc = 0x144128u;
            goto label_144128;
        }
    }
    ctx->pc = 0x144110u;
    // 0x144110: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x144110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x144114: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144114u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144118: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144118u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14411c: 0x0  nop
    ctx->pc = 0x14411cu;
    // NOP
    // 0x144120: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144124: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x144124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_144128:
    // 0x144128: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14412c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14412cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x144130: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144130u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144134: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144134u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144138: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x144138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14413c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14413cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144140: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x144140u;
    {
        const bool branch_taken_0x144140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144140u;
            // 0x144144: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144140) {
            ctx->pc = 0x144160u;
            goto label_144160;
        }
    }
    ctx->pc = 0x144148u;
    // 0x144148: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x144148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14414c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14414cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144154: 0x0  nop
    ctx->pc = 0x144154u;
    // NOP
    // 0x144158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x144158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14415c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_144160:
    // 0x144160: 0x3e00008  jr          $ra
    ctx->pc = 0x144160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1440B8u: goto label_1440b8;
            case 0x1440F0u: goto label_1440f0;
            case 0x144128u: goto label_144128;
            case 0x144160u: goto label_144160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144168u;
}
