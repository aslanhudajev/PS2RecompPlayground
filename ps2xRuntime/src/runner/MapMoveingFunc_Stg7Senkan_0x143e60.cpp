#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MapMoveingFunc_Stg7Senkan
// Address: 0x143e60 - 0x144054
void MapMoveingFunc_Stg7Senkan_0x143e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MapMoveingFunc_Stg7Senkan_0x143e60");
#endif

    ctx->pc = 0x143e60u;

    // 0x143e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143e64: 0x3c053e09  lui         $a1, 0x3E09
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15881 << 16));
    // 0x143e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143e6c: 0x34a6d037  ori         $a2, $a1, 0xD037
    ctx->pc = 0x143e6cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)53303u)));
    // 0x143e70: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143e74: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x143e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x143e78: 0x3465369d  ori         $a1, $v1, 0x369D
    ctx->pc = 0x143e78u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13981u)));
    // 0x143e7c: 0x3c033ec3  lui         $v1, 0x3EC3
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16067 << 16));
    // 0x143e80: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x143e80u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)55050u)));
    // 0x143e84: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x143e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x143e88: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x143e88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x143e8c: 0xc4e50120  lwc1        $f5, 0x120($a3)
    ctx->pc = 0x143e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x143e90: 0x3c0339cd  lui         $v1, 0x39CD
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14797 << 16));
    // 0x143e94: 0x3463bc83  ori         $v1, $v1, 0xBC83
    ctx->pc = 0x143e94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)48259u)));
    // 0x143e98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x143e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143e9c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x143e9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143ea0: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143ea4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143ea4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143ea8: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x143ea8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x143eac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143eacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143eb0: 0xe4e40120  swc1        $f4, 0x120($a3)
    ctx->pc = 0x143eb0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 288), bits); }
    // 0x143eb4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143eb8: 0xc4640124  lwc1        $f4, 0x124($v1)
    ctx->pc = 0x143eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x143ebc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x143ebcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x143ec0: 0xe4630124  swc1        $f3, 0x124($v1)
    ctx->pc = 0x143ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x143ec4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143ec8: 0xc4630128  lwc1        $f3, 0x128($v1)
    ctx->pc = 0x143ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x143ecc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x143eccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x143ed0: 0xe4620128  swc1        $f2, 0x128($v1)
    ctx->pc = 0x143ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x143ed4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143ed8: 0xc4620114  lwc1        $f2, 0x114($v1)
    ctx->pc = 0x143ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143edc: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x143edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x143ee0: 0xe4610114  swc1        $f1, 0x114($v1)
    ctx->pc = 0x143ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x143ee4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143ee8: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x143ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143eec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143eecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143ef0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143EF0u;
    {
        const bool branch_taken_0x143ef0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143EF0u;
            // 0x143ef4: 0x24650114  addiu       $a1, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ef0) {
            ctx->pc = 0x143F10u;
            goto label_143f10;
        }
    }
    ctx->pc = 0x143EF8u;
    // 0x143ef8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143efc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143efcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f04: 0x0  nop
    ctx->pc = 0x143f04u;
    // NOP
    // 0x143f08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143f0c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x143f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143f10:
    // 0x143f10: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143f14: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143f18: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143f18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f20: 0xc4a10114  lwc1        $f1, 0x114($a1)
    ctx->pc = 0x143f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143f24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143F28u;
    {
        const bool branch_taken_0x143f28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F28u;
            // 0x143f2c: 0x24a60114  addiu       $a2, $a1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f28) {
            ctx->pc = 0x143F48u;
            goto label_143f48;
        }
    }
    ctx->pc = 0x143F30u;
    // 0x143f30: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143f34: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143f34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f3c: 0x0  nop
    ctx->pc = 0x143f3cu;
    // NOP
    // 0x143f40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143f40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143f44: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143f48:
    // 0x143f48: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143f4c: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143f50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143f50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f58: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x143f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f60: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143F60u;
    {
        const bool branch_taken_0x143f60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F60u;
            // 0x143f64: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f60) {
            ctx->pc = 0x143F80u;
            goto label_143f80;
        }
    }
    ctx->pc = 0x143F68u;
    // 0x143f68: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143f6c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143f6cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f74: 0x0  nop
    ctx->pc = 0x143f74u;
    // NOP
    // 0x143f78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143f78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143f7c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143f80:
    // 0x143f80: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143f84: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143f88: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143f88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143f90: 0xc4a10110  lwc1        $f1, 0x110($a1)
    ctx->pc = 0x143f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143f94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x143f94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143f98: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x143F98u;
    {
        const bool branch_taken_0x143f98 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x143F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F98u;
            // 0x143f9c: 0x24a60110  addiu       $a2, $a1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f98) {
            ctx->pc = 0x143FB8u;
            goto label_143fb8;
        }
    }
    ctx->pc = 0x143FA0u;
    // 0x143fa0: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143fa4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143fa4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fac: 0x0  nop
    ctx->pc = 0x143facu;
    // NOP
    // 0x143fb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x143fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x143fb4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143fb8:
    // 0x143fb8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143fbc: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x143fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x143fc0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143fc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fc8: 0xc4a10118  lwc1        $f1, 0x118($a1)
    ctx->pc = 0x143fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143fcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143fccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143fd0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x143FD0u;
    {
        const bool branch_taken_0x143fd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FD0u;
            // 0x143fd4: 0x24a60118  addiu       $a2, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fd0) {
            ctx->pc = 0x143FF0u;
            goto label_143ff0;
        }
    }
    ctx->pc = 0x143FD8u;
    // 0x143fd8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x143fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x143fdc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143fdcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143fe4: 0x0  nop
    ctx->pc = 0x143fe4u;
    // NOP
    // 0x143fe8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x143fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x143fec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x143fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_143ff0:
    // 0x143ff0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143ff4: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x143ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x143ff8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x143ff8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x143ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x144000: 0xc4a10118  lwc1        $f1, 0x118($a1)
    ctx->pc = 0x144000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144004: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x144004u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144008: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x144008u;
    {
        const bool branch_taken_0x144008 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14400Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144008u;
            // 0x14400c: 0x24a60118  addiu       $a2, $a1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144008) {
            ctx->pc = 0x144028u;
            goto label_144028;
        }
    }
    ctx->pc = 0x144010u;
    // 0x144010: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x144010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x144014: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x144014u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x144018: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x144018u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14401c: 0x0  nop
    ctx->pc = 0x14401cu;
    // NOP
    // 0x144020: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x144020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144024: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x144024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_144028:
    // 0x144028: 0x8c85003c  lw          $a1, 0x3C($a0)
    ctx->pc = 0x144028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x14402c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x14402cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x144030: 0x28a11f41  slti        $at, $a1, 0x1F41
    ctx->pc = 0x144030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8001) ? 1 : 0);
    // 0x144034: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x144034u;
    {
        const bool branch_taken_0x144034 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144034u;
            // 0x144038: 0xac83003c  sw          $v1, 0x3C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144034) {
            ctx->pc = 0x144048u;
            goto label_144048;
        }
    }
    ctx->pc = 0x14403Cu;
    // 0x14403c: 0xc053348  jal         func_14CD20
    ctx->pc = 0x14403Cu;
    SET_GPR_U32(ctx, 31, 0x144044u);
    ctx->pc = 0x14CD20u;
    if (runtime->hasFunction(0x14CD20u)) {
        auto targetFn = runtime->lookupFunction(0x14CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144044u; }
        if (ctx->pc != 0x144044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MapItemFree_0x14cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144044u; }
        if (ctx->pc != 0x144044u) { return; }
    }
    ctx->pc = 0x144044u;
    // 0x144044: 0x0  nop
    ctx->pc = 0x144044u;
    // NOP
label_144048:
    // 0x144048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14404c: 0x3e00008  jr          $ra
    ctx->pc = 0x14404Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14404Cu;
            // 0x144050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143F10u: goto label_143f10;
            case 0x143F48u: goto label_143f48;
            case 0x143F80u: goto label_143f80;
            case 0x143FB8u: goto label_143fb8;
            case 0x143FF0u: goto label_143ff0;
            case 0x144028u: goto label_144028;
            case 0x144048u: goto label_144048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144054u;
}
