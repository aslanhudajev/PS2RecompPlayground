#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg7Space
// Address: 0x144170 - 0x144278
void MapMoveingFunc_Stg7Space_0x144170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg7Space_0x144170");
#endif

    ctx->pc = 0x144170u;

    // 0x144170: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x144170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144174: 0x3c0538d1  lui         $a1, 0x38D1
    ctx->pc = 0x144174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14545 << 16));
    // 0x144178: 0x34a5b717  ori         $a1, $a1, 0xB717
    ctx->pc = 0x144178u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46871u)));
    // 0x14417c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x14417cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x144180: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144180u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144184: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x144184u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144188: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144188u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14418c: 0xc4c20110  lwc1        $f2, 0x110($a2)
    ctx->pc = 0x14418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144190: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x144190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x144194: 0xe4c10110  swc1        $f1, 0x110($a2)
    ctx->pc = 0x144194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 272), bits); }
    // 0x144198: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x144198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14419c: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x14419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1441a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1441a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1441a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1441A4u;
    {
        const bool branch_taken_0x1441a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1441A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441A4u;
            // 0x1441a8: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441a4) {
            ctx->pc = 0x1441C8u;
            goto label_1441c8;
        }
    }
    ctx->pc = 0x1441ACu;
    // 0x1441ac: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1441b0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1441b0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1441b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1441b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441b8: 0x0  nop
    ctx->pc = 0x1441b8u;
    // NOP
    // 0x1441bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1441bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1441c0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1441c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1441c4: 0x0  nop
    ctx->pc = 0x1441c4u;
    // NOP
label_1441c8:
    // 0x1441c8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1441c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1441cc: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1441d0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1441d0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1441d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1441d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441d8: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x1441d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1441dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1441dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1441e0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1441E0u;
    {
        const bool branch_taken_0x1441e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1441E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441E0u;
            // 0x1441e4: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441e0) {
            ctx->pc = 0x144200u;
            goto label_144200;
        }
    }
    ctx->pc = 0x1441E8u;
    // 0x1441e8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1441e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1441ec: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1441ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1441f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1441f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1441f4: 0x0  nop
    ctx->pc = 0x1441f4u;
    // NOP
    // 0x1441f8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1441f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1441fc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1441fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_144200:
    // 0x144200: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x144200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x144204: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x144204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x144208: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144208u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x14420c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14420cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144210: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x144210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144214: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144218: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x144218u;
    {
        const bool branch_taken_0x144218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144218u;
            // 0x14421c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144218) {
            ctx->pc = 0x144238u;
            goto label_144238;
        }
    }
    ctx->pc = 0x144220u;
    // 0x144220: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x144220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x144224: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144224u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144228: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144228u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14422c: 0x0  nop
    ctx->pc = 0x14422cu;
    // NOP
    // 0x144230: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x144230u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144234: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x144234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_144238:
    // 0x144238: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14423c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x14423cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x144240: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144240u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144248: 0xc4810110  lwc1        $f1, 0x110($a0)
    ctx->pc = 0x144248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14424c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14424cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144250: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x144250u;
    {
        const bool branch_taken_0x144250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144250u;
            // 0x144254: 0x24850110  addiu       $a1, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144250) {
            ctx->pc = 0x144270u;
            goto label_144270;
        }
    }
    ctx->pc = 0x144258u;
    // 0x144258: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14425c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14425cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144260: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144260u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144264: 0x0  nop
    ctx->pc = 0x144264u;
    // NOP
    // 0x144268: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x144268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14426c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x14426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_144270:
    // 0x144270: 0x3e00008  jr          $ra
    ctx->pc = 0x144270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1441C8u: goto label_1441c8;
            case 0x144200u: goto label_144200;
            case 0x144238u: goto label_144238;
            case 0x144270u: goto label_144270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144278u;
}
