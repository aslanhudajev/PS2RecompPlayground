#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage7BossMove
// Address: 0x1bac60 - 0x1bb7a4
void Stage7BossMove_0x1bac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage7BossMove_0x1bac60");
#endif

    ctx->pc = 0x1bac60u;

    // 0x1bac60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bac60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1bac64: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1bac64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bac68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bac6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bac6cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bac70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1bac70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1bac74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bac74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bac78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bac7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bac7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bac80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bac80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bac84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bac84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bac88: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1bac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bac8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bac8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bac90: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1bac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bac94: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bac94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bac98: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1bac98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1bac9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1baca0: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1baca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1baca4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1baca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baca8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1baca8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bacac: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1bacacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1bacb0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bacb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bacb4: 0xc48200d8  lwc1        $f2, 0xD8($a0)
    ctx->pc = 0x1bacb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bacb8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1bacb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacbc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bacbcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bacc0: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1bacc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1bacc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bacc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bacc8: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1bacc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1baccc: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1bacccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacd0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bacd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bacd4: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1bacd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1bacd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bacdc: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1bacdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bace0: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1bace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bace4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bace4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bace8: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1bace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1bacec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bacf0: 0xc48200e8  lwc1        $f2, 0xE8($a0)
    ctx->pc = 0x1bacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bacf4: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1bacf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bacf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1bacf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1bacfc: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1bacfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1bad00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bad04: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1bad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bad08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad0c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1BAD0Cu;
    {
        const bool branch_taken_0x1bad0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD0Cu;
            // 0x1bad10: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad0c) {
            ctx->pc = 0x1BAD30u;
            goto label_1bad30;
        }
    }
    ctx->pc = 0x1BAD14u;
    // 0x1bad14: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bad14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bad18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bad18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bad1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad20: 0x0  nop
    ctx->pc = 0x1bad20u;
    // NOP
    // 0x1bad24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bad24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bad28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1bad28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1bad2c: 0x0  nop
    ctx->pc = 0x1bad2cu;
    // NOP
label_1bad30:
    // 0x1bad30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bad30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bad34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bad34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bad38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bad38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bad3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad40: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1bad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad44: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bad44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad48: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD48u;
    {
        const bool branch_taken_0x1bad48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD48u;
            // 0x1bad4c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad48) {
            ctx->pc = 0x1BAD68u;
            goto label_1bad68;
        }
    }
    ctx->pc = 0x1BAD50u;
    // 0x1bad50: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bad50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bad54: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bad54u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bad58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad5c: 0x0  nop
    ctx->pc = 0x1bad5cu;
    // NOP
    // 0x1bad60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bad60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bad64: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bad64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bad68:
    // 0x1bad68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bad6c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1bad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bad70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bad70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bad74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad78: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1bad78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bad7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bad7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bad80: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAD80u;
    {
        const bool branch_taken_0x1bad80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAD80u;
            // 0x1bad84: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bad80) {
            ctx->pc = 0x1BADA0u;
            goto label_1bada0;
        }
    }
    ctx->pc = 0x1BAD88u;
    // 0x1bad88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bad88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bad8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bad8cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bad90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bad90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bad94: 0x0  nop
    ctx->pc = 0x1bad94u;
    // NOP
    // 0x1bad98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bad98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bad9c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bad9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bada0:
    // 0x1bada0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bada0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bada4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bada4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bada8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bada8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1badac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1badacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badb0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1badb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badb4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1badb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1badb8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADB8u;
    {
        const bool branch_taken_0x1badb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BADBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADB8u;
            // 0x1badbc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badb8) {
            ctx->pc = 0x1BADD8u;
            goto label_1badd8;
        }
    }
    ctx->pc = 0x1BADC0u;
    // 0x1badc0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1badc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1badc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1badc4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1badc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1badc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1badcc: 0x0  nop
    ctx->pc = 0x1badccu;
    // NOP
    // 0x1badd0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1badd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1badd4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1badd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1badd8:
    // 0x1badd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1badd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baddc: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1baddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1bade0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bade0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bade4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bade4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bade8: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1bade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1badec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1badecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1badf0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BADF0u;
    {
        const bool branch_taken_0x1badf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BADF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BADF0u;
            // 0x1badf4: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1badf0) {
            ctx->pc = 0x1BAE10u;
            goto label_1bae10;
        }
    }
    ctx->pc = 0x1BADF8u;
    // 0x1badf8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1badf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1badfc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1badfcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bae00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bae00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae04: 0x0  nop
    ctx->pc = 0x1bae04u;
    // NOP
    // 0x1bae08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1bae08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1bae0c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bae0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bae10:
    // 0x1bae10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bae10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bae14: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1bae14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1bae18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bae18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bae1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bae1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae20: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1bae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bae24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1bae24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bae28: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1BAE28u;
    {
        const bool branch_taken_0x1bae28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE28u;
            // 0x1bae2c: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae28) {
            ctx->pc = 0x1BAE48u;
            goto label_1bae48;
        }
    }
    ctx->pc = 0x1BAE30u;
    // 0x1bae30: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1bae30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1bae34: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1bae34u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1bae38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bae38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bae3c: 0x0  nop
    ctx->pc = 0x1bae3cu;
    // NOP
    // 0x1bae40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bae40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bae44: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1bae44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1bae48:
    // 0x1bae48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bae4c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bae50: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bae54: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bae58: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1BAE58u;
    SET_GPR_U32(ctx, 31, 0x1BAE60u);
    ctx->pc = 0x1BAE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE58u;
            // 0x1bae5c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE60u; }
        if (ctx->pc != 0x1BAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAE60u; }
        if (ctx->pc != 0x1BAE60u) { return; }
    }
    ctx->pc = 0x1BAE60u;
    // 0x1bae60: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1bae60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bae64: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1bae64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1bae68: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1bae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bae6c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1bae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1bae70: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1bae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1bae74: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1bae74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1bae78: 0x102001f3  beqz        $at, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x1BAE78u;
    {
        const bool branch_taken_0x1bae78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAE78u;
            // 0x1bae7c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae78) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAE80u;
    // 0x1bae80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bae80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bae84: 0x24632a50  addiu       $v1, $v1, 0x2A50
    ctx->pc = 0x1bae84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10832));
    // 0x1bae88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bae88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bae8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bae8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bae90: 0x400008  jr          $v0
    ctx->pc = 0x1BAE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAE98u: goto label_1bae98;
            case 0x1BAF28u: goto label_1baf28;
            case 0x1BAF48u: goto label_1baf48;
            case 0x1BAF68u: goto label_1baf68;
            case 0x1BAF88u: goto label_1baf88;
            case 0x1BAFA8u: goto label_1bafa8;
            case 0x1BB4C8u: goto label_1bb4c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BAE98u;
label_1bae98:
    // 0x1bae98: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1bae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1bae9c: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1bae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1baea0: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1baea0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4059u)));
    // 0x1baea4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1baea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1baea8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1baea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baeac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baeacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baeb0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1baeb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1baeb4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1baeb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1baeb8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1baeb8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1baebc: 0x0  nop
    ctx->pc = 0x1baebcu;
    // NOP
    // 0x1baec0: 0x0  nop
    ctx->pc = 0x1baec0u;
    // NOP
    // 0x1baec4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1BAEC4u;
    SET_GPR_U32(ctx, 31, 0x1BAECCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAECCu; }
        if (ctx->pc != 0x1BAECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAECCu; }
        if (ctx->pc != 0x1BAECCu) { return; }
    }
    ctx->pc = 0x1BAECCu;
    // 0x1baecc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x1baeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x1baed0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1baed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1baed4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1baed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1baed8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1baed8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1baedc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1baedcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1baee0: 0x0  nop
    ctx->pc = 0x1baee0u;
    // NOP
    // 0x1baee4: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1baee4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1baee8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1baee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baeec: 0x3c024337  lui         $v0, 0x4337
    ctx->pc = 0x1baeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17207 << 16));
    // 0x1baef0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x1baef0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)13107u)));
    // 0x1baef4: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1baef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baef8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1baef8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1baefc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1baefcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1baf00: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1baf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1baf04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf08: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1baf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1baf0c: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1baf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1baf10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1baf10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1baf14: 0x450101cc  bc1t        . + 4 + (0x1CC << 2)
    ctx->pc = 0x1BAF14u;
    {
        const bool branch_taken_0x1baf14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BAF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF14u;
            // 0x1baf18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf14) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF1Cu;
    // 0x1baf1c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1baf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1baf20: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1BAF20u;
    {
        const bool branch_taken_0x1baf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF20u;
            // 0x1baf24: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf20) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF28u;
label_1baf28:
    // 0x1baf28: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1baf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1baf2c: 0x28420258  slti        $v0, $v0, 0x258
    ctx->pc = 0x1baf2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1baf30: 0x144001c5  bnez        $v0, . + 4 + (0x1C5 << 2)
    ctx->pc = 0x1BAF30u;
    {
        const bool branch_taken_0x1baf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF30u;
            // 0x1baf34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf30) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF38u;
    // 0x1baf38: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1baf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1baf3c: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x1BAF3Cu;
    {
        const bool branch_taken_0x1baf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF3Cu;
            // 0x1baf40: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf3c) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF44u;
    // 0x1baf44: 0x0  nop
    ctx->pc = 0x1baf44u;
    // NOP
label_1baf48:
    // 0x1baf48: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1baf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1baf4c: 0x284200b4  slti        $v0, $v0, 0xB4
    ctx->pc = 0x1baf4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)180) ? 1 : 0);
    // 0x1baf50: 0x144001bd  bnez        $v0, . + 4 + (0x1BD << 2)
    ctx->pc = 0x1BAF50u;
    {
        const bool branch_taken_0x1baf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF50u;
            // 0x1baf54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf50) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF58u;
    // 0x1baf58: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1baf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1baf5c: 0x100001ba  b           . + 4 + (0x1BA << 2)
    ctx->pc = 0x1BAF5Cu;
    {
        const bool branch_taken_0x1baf5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF5Cu;
            // 0x1baf60: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf5c) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF64u;
    // 0x1baf64: 0x0  nop
    ctx->pc = 0x1baf64u;
    // NOP
label_1baf68:
    // 0x1baf68: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1baf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1baf6c: 0x284200c8  slti        $v0, $v0, 0xC8
    ctx->pc = 0x1baf6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)200) ? 1 : 0);
    // 0x1baf70: 0x144001b5  bnez        $v0, . + 4 + (0x1B5 << 2)
    ctx->pc = 0x1BAF70u;
    {
        const bool branch_taken_0x1baf70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF70u;
            // 0x1baf74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf70) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF78u;
    // 0x1baf78: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1baf78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1baf7c: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF7Cu;
            // 0x1baf80: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF84u;
    // 0x1baf84: 0x0  nop
    ctx->pc = 0x1baf84u;
    // NOP
label_1baf88:
    // 0x1baf88: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1baf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1baf8c: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1baf8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1baf90: 0x144001ad  bnez        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x1BAF90u;
    {
        const bool branch_taken_0x1baf90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BAF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF90u;
            // 0x1baf94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf90) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAF98u;
    // 0x1baf98: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1baf98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1baf9c: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x1BAF9Cu;
    {
        const bool branch_taken_0x1baf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAF9Cu;
            // 0x1bafa0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf9c) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BAFA4u;
    // 0x1bafa4: 0x0  nop
    ctx->pc = 0x1bafa4u;
    // NOP
label_1bafa8:
    // 0x1bafa8: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1BAFA8u;
    SET_GPR_U32(ctx, 31, 0x1BAFB0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB0u; }
        if (ctx->pc != 0x1BAFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB0u; }
        if (ctx->pc != 0x1BAFB0u) { return; }
    }
    ctx->pc = 0x1BAFB0u;
    // 0x1bafb0: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1BAFB0u;
    SET_GPR_U32(ctx, 31, 0x1BAFB8u);
    ctx->pc = 0x1BAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFB0u;
            // 0x1bafb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB8u; }
        if (ctx->pc != 0x1BAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFB8u; }
        if (ctx->pc != 0x1BAFB8u) { return; }
    }
    ctx->pc = 0x1BAFB8u;
    // 0x1bafb8: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1BAFB8u;
    SET_GPR_U32(ctx, 31, 0x1BAFC0u);
    ctx->pc = 0x1BAFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BAFB8u;
            // 0x1bafbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFC0u; }
        if (ctx->pc != 0x1BAFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BAFC0u; }
        if (ctx->pc != 0x1BAFC0u) { return; }
    }
    ctx->pc = 0x1BAFC0u;
    // 0x1bafc0: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1bafc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bafc4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1bafc8: 0x3443e148  ori         $v1, $v0, 0xE148
    ctx->pc = 0x1bafc8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1bafcc: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1bafccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1bafd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bafd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bafd4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1bafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1bafd8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1bafd8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1bafdc: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1bafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1bafe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bafe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bafe4: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1bafe4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1bafe8: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1bafe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1bafec: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1baff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1baff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1baff4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1baff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1baff8: 0xae0300d8  sw          $v1, 0xD8($s0)
    ctx->pc = 0x1baff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 3));
    // 0x1baffc: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x1baffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
    // 0x1bb000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb004: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1bb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb008: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1bb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1bb00c: 0xc06edf8  jal         func_1BB7E0
    ctx->pc = 0x1BB00Cu;
    SET_GPR_U32(ctx, 31, 0x1BB014u);
    ctx->pc = 0x1BB010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB00Cu;
            // 0x1bb010: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7E0u;
    if (runtime->hasFunction(0x1BB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB014u; }
        if (ctx->pc != 0x1BB014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1bb7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB014u; }
        if (ctx->pc != 0x1BB014u) { return; }
    }
    ctx->pc = 0x1BB014u;
    // 0x1bb014: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1bb014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1bb018: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bb018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb01c: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1bb01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1bb020: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb024: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1bb024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1bb028: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb02c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1bb02cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1bb030: 0x0  nop
    ctx->pc = 0x1bb030u;
    // NOP
    // 0x1bb034: 0x0  nop
    ctx->pc = 0x1bb034u;
    // NOP
    // 0x1bb038: 0x1010  mfhi        $v0
    ctx->pc = 0x1bb038u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1bb03c: 0x14400094  bnez        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x1BB03Cu;
    {
        const bool branch_taken_0x1bb03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bb03c) {
            ctx->pc = 0x1BB290u;
            goto label_1bb290;
        }
    }
    ctx->pc = 0x1BB044u;
    // 0x1bb044: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB044u;
    SET_GPR_U32(ctx, 31, 0x1BB04Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB04Cu; }
        if (ctx->pc != 0x1BB04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB04Cu; }
        if (ctx->pc != 0x1BB04Cu) { return; }
    }
    ctx->pc = 0x1BB04Cu;
    // 0x1bb04c: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1bb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bb050: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bb050u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bb054: 0x0  nop
    ctx->pc = 0x1bb054u;
    // NOP
    // 0x1bb058: 0x0  nop
    ctx->pc = 0x1bb058u;
    // NOP
    // 0x1bb05c: 0x9010  mfhi        $s2
    ctx->pc = 0x1bb05cu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1bb060: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB060u;
    SET_GPR_U32(ctx, 31, 0x1BB068u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB068u; }
        if (ctx->pc != 0x1BB068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB068u; }
        if (ctx->pc != 0x1BB068u) { return; }
    }
    ctx->pc = 0x1BB068u;
    // 0x1bb068: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1bb068u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1bb06c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bb06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb070: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bb070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb074: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1bb074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb078: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb078u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb07c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bb07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb080: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1bb080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1bb084: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb088: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bb088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb08c: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1bb08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1bb090: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1bb090u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bb094: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1bb094u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb098: 0x2462fc1e  addiu       $v0, $v1, -0x3E2
    ctx->pc = 0x1bb098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966302));
    // 0x1bb09c: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1bb09cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb0a0: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BB0A0u;
    SET_GPR_U32(ctx, 31, 0x1BB0A8u);
    ctx->pc = 0x1BB0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0A0u;
            // 0x1bb0a4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A8u; }
        if (ctx->pc != 0x1BB0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0A8u; }
        if (ctx->pc != 0x1BB0A8u) { return; }
    }
    ctx->pc = 0x1BB0A8u;
    // 0x1bb0a8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bb0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb0ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bb0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb0b0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb0b4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1bb0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb0b8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb0bc: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1bb0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1bb0c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb0c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb0c4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bb0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb0c8: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1bb0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1bb0cc: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1bb0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bb0d0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1bb0d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb0d4: 0x2462fc1e  addiu       $v0, $v1, -0x3E2
    ctx->pc = 0x1bb0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966302));
    // 0x1bb0d8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1bb0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb0dc: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1BB0DCu;
    SET_GPR_U32(ctx, 31, 0x1BB0E4u);
    ctx->pc = 0x1BB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB0DCu;
            // 0x1bb0e0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0E4u; }
        if (ctx->pc != 0x1BB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0E4u; }
        if (ctx->pc != 0x1BB0E4u) { return; }
    }
    ctx->pc = 0x1BB0E4u;
    // 0x1bb0e4: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB0E4u;
    SET_GPR_U32(ctx, 31, 0x1BB0ECu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0ECu; }
        if (ctx->pc != 0x1BB0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB0ECu; }
        if (ctx->pc != 0x1BB0ECu) { return; }
    }
    ctx->pc = 0x1BB0ECu;
    // 0x1bb0ec: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1bb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bb0f0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bb0f0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bb0f4: 0x0  nop
    ctx->pc = 0x1bb0f4u;
    // NOP
    // 0x1bb0f8: 0x0  nop
    ctx->pc = 0x1bb0f8u;
    // NOP
    // 0x1bb0fc: 0x9010  mfhi        $s2
    ctx->pc = 0x1bb0fcu;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1bb100: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB100u;
    SET_GPR_U32(ctx, 31, 0x1BB108u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB108u; }
        if (ctx->pc != 0x1BB108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB108u; }
        if (ctx->pc != 0x1BB108u) { return; }
    }
    ctx->pc = 0x1BB108u;
    // 0x1bb108: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1bb108u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1bb10c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb110: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bb110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb114: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1bb114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb118: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb11c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bb11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb120: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1bb120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1bb124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb128: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bb128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb12c: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1bb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1bb130: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1bb130u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bb134: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1bb134u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb138: 0x2462fc1e  addiu       $v0, $v1, -0x3E2
    ctx->pc = 0x1bb138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966302));
    // 0x1bb13c: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1bb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb140: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BB140u;
    SET_GPR_U32(ctx, 31, 0x1BB148u);
    ctx->pc = 0x1BB144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB140u;
            // 0x1bb144: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB148u; }
        if (ctx->pc != 0x1BB148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB148u; }
        if (ctx->pc != 0x1BB148u) { return; }
    }
    ctx->pc = 0x1BB148u;
    // 0x1bb148: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1bb148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb14c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1bb14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1bb150: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1bb150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb154: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1bb154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1bb158: 0x2442fc1e  addiu       $v0, $v0, -0x3E2
    ctx->pc = 0x1bb158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966302));
    // 0x1bb15c: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1bb15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bb160: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1bb160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb164: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb168: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb16c: 0x0  nop
    ctx->pc = 0x1bb16cu;
    // NOP
    // 0x1bb170: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bb170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bb174: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BB174u;
    SET_GPR_U32(ctx, 31, 0x1BB17Cu);
    ctx->pc = 0x1BB178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB174u;
            // 0x1bb178: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB17Cu; }
        if (ctx->pc != 0x1BB17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB17Cu; }
        if (ctx->pc != 0x1BB17Cu) { return; }
    }
    ctx->pc = 0x1BB17Cu;
    // 0x1bb17c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB17Cu;
    SET_GPR_U32(ctx, 31, 0x1BB184u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB184u; }
        if (ctx->pc != 0x1BB184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB184u; }
        if (ctx->pc != 0x1BB184u) { return; }
    }
    ctx->pc = 0x1BB184u;
    // 0x1bb184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb184u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1bb188: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB188u;
    {
        const bool branch_taken_0x1bb188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb188) {
            ctx->pc = 0x1BB1C8u;
            goto label_1bb1c8;
        }
    }
    ctx->pc = 0x1BB190u;
    // 0x1bb190: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1bb190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb194: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1bb194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1bb198: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1bb198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb19c: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1bb19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1bb1a0: 0x2442fc1e  addiu       $v0, $v0, -0x3E2
    ctx->pc = 0x1bb1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966302));
    // 0x1bb1a4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1bb1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bb1a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1bb1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb1ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb1acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb1b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb1b4: 0x0  nop
    ctx->pc = 0x1bb1b4u;
    // NOP
    // 0x1bb1b8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bb1b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bb1bc: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BB1BCu;
    SET_GPR_U32(ctx, 31, 0x1BB1C4u);
    ctx->pc = 0x1BB1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB1BCu;
            // 0x1bb1c0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1C4u; }
        if (ctx->pc != 0x1BB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1C4u; }
        if (ctx->pc != 0x1BB1C4u) { return; }
    }
    ctx->pc = 0x1BB1C4u;
    // 0x1bb1c4: 0x0  nop
    ctx->pc = 0x1bb1c4u;
    // NOP
label_1bb1c8:
    // 0x1bb1c8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB1C8u;
    SET_GPR_U32(ctx, 31, 0x1BB1D0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1D0u; }
        if (ctx->pc != 0x1BB1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB1D0u; }
        if (ctx->pc != 0x1BB1D0u) { return; }
    }
    ctx->pc = 0x1BB1D0u;
    // 0x1bb1d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bb1d0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1bb1d4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BB1D4u;
    {
        const bool branch_taken_0x1bb1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb1d4) {
            ctx->pc = 0x1BB210u;
            goto label_1bb210;
        }
    }
    ctx->pc = 0x1BB1DCu;
    // 0x1bb1dc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1bb1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb1e0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1bb1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1bb1e4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1bb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb1e8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1bb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1bb1ec: 0x2442fc1e  addiu       $v0, $v0, -0x3E2
    ctx->pc = 0x1bb1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966302));
    // 0x1bb1f0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x1bb1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1bb1f4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1bb1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb1f8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bb1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1bb1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb200: 0x0  nop
    ctx->pc = 0x1bb200u;
    // NOP
    // 0x1bb204: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1bb204u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1bb208: 0xc05d080  jal         func_174200
    ctx->pc = 0x1BB208u;
    SET_GPR_U32(ctx, 31, 0x1BB210u);
    ctx->pc = 0x1BB20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB208u;
            // 0x1bb20c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB210u; }
        if (ctx->pc != 0x1BB210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB210u; }
        if (ctx->pc != 0x1BB210u) { return; }
    }
    ctx->pc = 0x1BB210u;
label_1bb210:
    // 0x1bb210: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1bb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb214: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1bb214u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1bb218: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BB218u;
    {
        const bool branch_taken_0x1bb218 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB218u;
            // 0x1bb21c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb218) {
            ctx->pc = 0x1BB290u;
            goto label_1bb290;
        }
    }
    ctx->pc = 0x1BB220u;
    // 0x1bb220: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB228u; }
        if (ctx->pc != 0x1BB228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB228u; }
        if (ctx->pc != 0x1BB228u) { return; }
    }
    ctx->pc = 0x1BB228u;
    // 0x1bb228: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB228u;
    {
        const bool branch_taken_0x1bb228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb228) {
            ctx->pc = 0x1BB258u;
            goto label_1bb258;
        }
    }
    ctx->pc = 0x1BB230u;
    // 0x1bb230: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB230u;
    SET_GPR_U32(ctx, 31, 0x1BB238u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB238u; }
        if (ctx->pc != 0x1BB238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB238u; }
        if (ctx->pc != 0x1BB238u) { return; }
    }
    ctx->pc = 0x1BB238u;
    // 0x1bb238: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bb23c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bb23cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bb240: 0x0  nop
    ctx->pc = 0x1bb240u;
    // NOP
    // 0x1bb244: 0x0  nop
    ctx->pc = 0x1bb244u;
    // NOP
    // 0x1bb248: 0x2810  mfhi        $a1
    ctx->pc = 0x1bb248u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bb24c: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB24Cu;
    SET_GPR_U32(ctx, 31, 0x1BB254u);
    ctx->pc = 0x1BB250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB24Cu;
            // 0x1bb250: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB254u; }
        if (ctx->pc != 0x1BB254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB254u; }
        if (ctx->pc != 0x1BB254u) { return; }
    }
    ctx->pc = 0x1BB254u;
    // 0x1bb254: 0x0  nop
    ctx->pc = 0x1bb254u;
    // NOP
label_1bb258:
    // 0x1bb258: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB258u;
    SET_GPR_U32(ctx, 31, 0x1BB260u);
    ctx->pc = 0x1BB25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB258u;
            // 0x1bb25c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB260u; }
        if (ctx->pc != 0x1BB260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB260u; }
        if (ctx->pc != 0x1BB260u) { return; }
    }
    ctx->pc = 0x1BB260u;
    // 0x1bb260: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB260u;
    {
        const bool branch_taken_0x1bb260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb260) {
            ctx->pc = 0x1BB290u;
            goto label_1bb290;
        }
    }
    ctx->pc = 0x1BB268u;
    // 0x1bb268: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB268u;
    SET_GPR_U32(ctx, 31, 0x1BB270u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB270u; }
        if (ctx->pc != 0x1BB270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB270u; }
        if (ctx->pc != 0x1BB270u) { return; }
    }
    ctx->pc = 0x1BB270u;
    // 0x1bb270: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1bb270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1bb274: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bb274u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bb278: 0x0  nop
    ctx->pc = 0x1bb278u;
    // NOP
    // 0x1bb27c: 0x0  nop
    ctx->pc = 0x1bb27cu;
    // NOP
    // 0x1bb280: 0x2810  mfhi        $a1
    ctx->pc = 0x1bb280u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bb284: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB284u;
    SET_GPR_U32(ctx, 31, 0x1BB28Cu);
    ctx->pc = 0x1BB288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB284u;
            // 0x1bb288: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB28Cu; }
        if (ctx->pc != 0x1BB28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB28Cu; }
        if (ctx->pc != 0x1BB28Cu) { return; }
    }
    ctx->pc = 0x1BB28Cu;
    // 0x1bb28c: 0x0  nop
    ctx->pc = 0x1bb28cu;
    // NOP
label_1bb290:
    // 0x1bb290: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb294: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1bb294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1bb298: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB298u;
    {
        const bool branch_taken_0x1bb298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB298u;
            // 0x1bb29c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb298) {
            ctx->pc = 0x1BB2E0u;
            goto label_1bb2e0;
        }
    }
    ctx->pc = 0x1BB2A0u;
    // 0x1bb2a0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB2A0u;
    SET_GPR_U32(ctx, 31, 0x1BB2A8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2A8u; }
        if (ctx->pc != 0x1BB2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2A8u; }
        if (ctx->pc != 0x1BB2A8u) { return; }
    }
    ctx->pc = 0x1BB2A8u;
    // 0x1bb2a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB2A8u;
    SET_GPR_U32(ctx, 31, 0x1BB2B0u);
    ctx->pc = 0x1BB2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2A8u;
            // 0x1bb2ac: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B0u; }
        if (ctx->pc != 0x1BB2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B0u; }
        if (ctx->pc != 0x1BB2B0u) { return; }
    }
    ctx->pc = 0x1BB2B0u;
    // 0x1bb2b0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB2B0u;
    SET_GPR_U32(ctx, 31, 0x1BB2B8u);
    ctx->pc = 0x1BB2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2B0u;
            // 0x1bb2b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B8u; }
        if (ctx->pc != 0x1BB2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2B8u; }
        if (ctx->pc != 0x1BB2B8u) { return; }
    }
    ctx->pc = 0x1BB2B8u;
    // 0x1bb2b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB2B8u;
    {
        const bool branch_taken_0x1bb2b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2B8u;
            // 0x1bb2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2b8) {
            ctx->pc = 0x1BB2C8u;
            goto label_1bb2c8;
        }
    }
    ctx->pc = 0x1BB2C0u;
    // 0x1bb2c0: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB2C0u;
    SET_GPR_U32(ctx, 31, 0x1BB2C8u);
    ctx->pc = 0x1BB2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2C0u;
            // 0x1bb2c4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C8u; }
        if (ctx->pc != 0x1BB2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2C8u; }
        if (ctx->pc != 0x1BB2C8u) { return; }
    }
    ctx->pc = 0x1BB2C8u;
label_1bb2c8:
    // 0x1bb2c8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB2C8u;
    SET_GPR_U32(ctx, 31, 0x1BB2D0u);
    ctx->pc = 0x1BB2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2C8u;
            // 0x1bb2cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2D0u; }
        if (ctx->pc != 0x1BB2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2D0u; }
        if (ctx->pc != 0x1BB2D0u) { return; }
    }
    ctx->pc = 0x1BB2D0u;
    // 0x1bb2d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB2D0u;
    {
        const bool branch_taken_0x1bb2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2D0u;
            // 0x1bb2d4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2d0) {
            ctx->pc = 0x1BB2E0u;
            goto label_1bb2e0;
        }
    }
    ctx->pc = 0x1BB2D8u;
    // 0x1bb2d8: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB2D8u;
    SET_GPR_U32(ctx, 31, 0x1BB2E0u);
    ctx->pc = 0x1BB2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2D8u;
            // 0x1bb2dc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2E0u; }
        if (ctx->pc != 0x1BB2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2E0u; }
        if (ctx->pc != 0x1BB2E0u) { return; }
    }
    ctx->pc = 0x1BB2E0u;
label_1bb2e0:
    // 0x1bb2e0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb2e4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1bb2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1bb2e8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB2E8u;
    {
        const bool branch_taken_0x1bb2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2E8u;
            // 0x1bb2ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb2e8) {
            ctx->pc = 0x1BB328u;
            goto label_1bb328;
        }
    }
    ctx->pc = 0x1BB2F0u;
    // 0x1bb2f0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB2F0u;
    SET_GPR_U32(ctx, 31, 0x1BB2F8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F8u; }
        if (ctx->pc != 0x1BB2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB2F8u; }
        if (ctx->pc != 0x1BB2F8u) { return; }
    }
    ctx->pc = 0x1BB2F8u;
    // 0x1bb2f8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB2F8u;
    SET_GPR_U32(ctx, 31, 0x1BB300u);
    ctx->pc = 0x1BB2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB2F8u;
            // 0x1bb2fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB300u; }
        if (ctx->pc != 0x1BB300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB300u; }
        if (ctx->pc != 0x1BB300u) { return; }
    }
    ctx->pc = 0x1BB300u;
    // 0x1bb300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB300u;
    {
        const bool branch_taken_0x1bb300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB300u;
            // 0x1bb304: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb300) {
            ctx->pc = 0x1BB310u;
            goto label_1bb310;
        }
    }
    ctx->pc = 0x1BB308u;
    // 0x1bb308: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB308u;
    SET_GPR_U32(ctx, 31, 0x1BB310u);
    ctx->pc = 0x1BB30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB308u;
            // 0x1bb30c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB310u; }
        if (ctx->pc != 0x1BB310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB310u; }
        if (ctx->pc != 0x1BB310u) { return; }
    }
    ctx->pc = 0x1BB310u;
label_1bb310:
    // 0x1bb310: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB310u;
    SET_GPR_U32(ctx, 31, 0x1BB318u);
    ctx->pc = 0x1BB314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB310u;
            // 0x1bb314: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB318u; }
        if (ctx->pc != 0x1BB318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB318u; }
        if (ctx->pc != 0x1BB318u) { return; }
    }
    ctx->pc = 0x1BB318u;
    // 0x1bb318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB318u;
    {
        const bool branch_taken_0x1bb318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB318u;
            // 0x1bb31c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb318) {
            ctx->pc = 0x1BB328u;
            goto label_1bb328;
        }
    }
    ctx->pc = 0x1BB320u;
    // 0x1bb320: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB320u;
    SET_GPR_U32(ctx, 31, 0x1BB328u);
    ctx->pc = 0x1BB324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB320u;
            // 0x1bb324: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB328u; }
        if (ctx->pc != 0x1BB328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB328u; }
        if (ctx->pc != 0x1BB328u) { return; }
    }
    ctx->pc = 0x1BB328u;
label_1bb328:
    // 0x1bb328: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb32c: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1bb32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1bb330: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BB330u;
    {
        const bool branch_taken_0x1bb330 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB330u;
            // 0x1bb334: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb330) {
            ctx->pc = 0x1BB378u;
            goto label_1bb378;
        }
    }
    ctx->pc = 0x1BB338u;
    // 0x1bb338: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB338u;
    SET_GPR_U32(ctx, 31, 0x1BB340u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB340u; }
        if (ctx->pc != 0x1BB340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB340u; }
        if (ctx->pc != 0x1BB340u) { return; }
    }
    ctx->pc = 0x1BB340u;
    // 0x1bb340: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB340u;
    SET_GPR_U32(ctx, 31, 0x1BB348u);
    ctx->pc = 0x1BB344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB340u;
            // 0x1bb344: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB348u; }
        if (ctx->pc != 0x1BB348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB348u; }
        if (ctx->pc != 0x1BB348u) { return; }
    }
    ctx->pc = 0x1BB348u;
    // 0x1bb348: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB348u;
    SET_GPR_U32(ctx, 31, 0x1BB350u);
    ctx->pc = 0x1BB34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB348u;
            // 0x1bb34c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB350u; }
        if (ctx->pc != 0x1BB350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB350u; }
        if (ctx->pc != 0x1BB350u) { return; }
    }
    ctx->pc = 0x1BB350u;
    // 0x1bb350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB350u;
    {
        const bool branch_taken_0x1bb350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB350u;
            // 0x1bb354: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb350) {
            ctx->pc = 0x1BB360u;
            goto label_1bb360;
        }
    }
    ctx->pc = 0x1BB358u;
    // 0x1bb358: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB358u;
    SET_GPR_U32(ctx, 31, 0x1BB360u);
    ctx->pc = 0x1BB35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB358u;
            // 0x1bb35c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB360u; }
        if (ctx->pc != 0x1BB360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB360u; }
        if (ctx->pc != 0x1BB360u) { return; }
    }
    ctx->pc = 0x1BB360u;
label_1bb360:
    // 0x1bb360: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB360u;
    SET_GPR_U32(ctx, 31, 0x1BB368u);
    ctx->pc = 0x1BB364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB360u;
            // 0x1bb364: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB368u; }
        if (ctx->pc != 0x1BB368u) { return; }
    }
    ctx->pc = 0x1BB368u;
    // 0x1bb368: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB368u;
    {
        const bool branch_taken_0x1bb368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB368u;
            // 0x1bb36c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb368) {
            ctx->pc = 0x1BB378u;
            goto label_1bb378;
        }
    }
    ctx->pc = 0x1BB370u;
    // 0x1bb370: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB370u;
    SET_GPR_U32(ctx, 31, 0x1BB378u);
    ctx->pc = 0x1BB374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB370u;
            // 0x1bb374: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB378u; }
        if (ctx->pc != 0x1BB378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB378u; }
        if (ctx->pc != 0x1BB378u) { return; }
    }
    ctx->pc = 0x1BB378u;
label_1bb378:
    // 0x1bb378: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb37c: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1bb37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1bb380: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BB380u;
    {
        const bool branch_taken_0x1bb380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB380u;
            // 0x1bb384: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb380) {
            ctx->pc = 0x1BB3C0u;
            goto label_1bb3c0;
        }
    }
    ctx->pc = 0x1BB388u;
    // 0x1bb388: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB388u;
    SET_GPR_U32(ctx, 31, 0x1BB390u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB390u; }
        if (ctx->pc != 0x1BB390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB390u; }
        if (ctx->pc != 0x1BB390u) { return; }
    }
    ctx->pc = 0x1BB390u;
    // 0x1bb390: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB390u;
    SET_GPR_U32(ctx, 31, 0x1BB398u);
    ctx->pc = 0x1BB394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB390u;
            // 0x1bb394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB398u; }
        if (ctx->pc != 0x1BB398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB398u; }
        if (ctx->pc != 0x1BB398u) { return; }
    }
    ctx->pc = 0x1BB398u;
    // 0x1bb398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB398u;
    {
        const bool branch_taken_0x1bb398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB398u;
            // 0x1bb39c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb398) {
            ctx->pc = 0x1BB3A8u;
            goto label_1bb3a8;
        }
    }
    ctx->pc = 0x1BB3A0u;
    // 0x1bb3a0: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB3A0u;
    SET_GPR_U32(ctx, 31, 0x1BB3A8u);
    ctx->pc = 0x1BB3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3A0u;
            // 0x1bb3a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3A8u; }
        if (ctx->pc != 0x1BB3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3A8u; }
        if (ctx->pc != 0x1BB3A8u) { return; }
    }
    ctx->pc = 0x1BB3A8u;
label_1bb3a8:
    // 0x1bb3a8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1BB3A8u;
    SET_GPR_U32(ctx, 31, 0x1BB3B0u);
    ctx->pc = 0x1BB3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3A8u;
            // 0x1bb3ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3B0u; }
        if (ctx->pc != 0x1BB3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3B0u; }
        if (ctx->pc != 0x1BB3B0u) { return; }
    }
    ctx->pc = 0x1BB3B0u;
    // 0x1bb3b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB3B0u;
    {
        const bool branch_taken_0x1bb3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3B0u;
            // 0x1bb3b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3b0) {
            ctx->pc = 0x1BB3C0u;
            goto label_1bb3c0;
        }
    }
    ctx->pc = 0x1BB3B8u;
    // 0x1bb3b8: 0xc055124  jal         func_154490
    ctx->pc = 0x1BB3B8u;
    SET_GPR_U32(ctx, 31, 0x1BB3C0u);
    ctx->pc = 0x1BB3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3B8u;
            // 0x1bb3bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3C0u; }
        if (ctx->pc != 0x1BB3C0u) { return; }
    }
    ctx->pc = 0x1BB3C0u;
label_1bb3c0:
    // 0x1bb3c0: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb3c4: 0x240200c7  addiu       $v0, $zero, 0xC7
    ctx->pc = 0x1bb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    // 0x1bb3c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB3C8u;
    {
        const bool branch_taken_0x1bb3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3C8u;
            // 0x1bb3cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3c8) {
            ctx->pc = 0x1BB3D8u;
            goto label_1bb3d8;
        }
    }
    ctx->pc = 0x1BB3D0u;
    // 0x1bb3d0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB3D0u;
    SET_GPR_U32(ctx, 31, 0x1BB3D8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3D8u; }
        if (ctx->pc != 0x1BB3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3D8u; }
        if (ctx->pc != 0x1BB3D8u) { return; }
    }
    ctx->pc = 0x1BB3D8u;
label_1bb3d8:
    // 0x1bb3d8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1bb3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1bb3dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1bb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb3e0: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1bb3e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1bb3e4: 0x14200098  bnez        $at, . + 4 + (0x98 << 2)
    ctx->pc = 0x1BB3E4u;
    {
        const bool branch_taken_0x1bb3e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3E4u;
            // 0x1bb3e8: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb3e4) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BB3ECu;
    // 0x1bb3ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb3f0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB3F0u;
    SET_GPR_U32(ctx, 31, 0x1BB3F8u);
    ctx->pc = 0x1BB3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB3F0u;
            // 0x1bb3f4: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3F8u; }
        if (ctx->pc != 0x1BB3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB3F8u; }
        if (ctx->pc != 0x1BB3F8u) { return; }
    }
    ctx->pc = 0x1BB3F8u;
    // 0x1bb3f8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1bb3f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb3fc: 0x0  nop
    ctx->pc = 0x1bb3fcu;
    // NOP
label_1bb400:
    // 0x1bb400: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB400u;
    SET_GPR_U32(ctx, 31, 0x1BB408u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB408u; }
        if (ctx->pc != 0x1BB408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB408u; }
        if (ctx->pc != 0x1BB408u) { return; }
    }
    ctx->pc = 0x1BB408u;
    // 0x1bb408: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1bb408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1bb40c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1bb40cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1bb410: 0x0  nop
    ctx->pc = 0x1bb410u;
    // NOP
    // 0x1bb414: 0x0  nop
    ctx->pc = 0x1bb414u;
    // NOP
    // 0x1bb418: 0x9010  mfhi        $s2
    ctx->pc = 0x1bb418u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1bb41c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1BB41Cu;
    SET_GPR_U32(ctx, 31, 0x1BB424u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB424u; }
        if (ctx->pc != 0x1BB424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB424u; }
        if (ctx->pc != 0x1BB424u) { return; }
    }
    ctx->pc = 0x1BB424u;
    // 0x1bb424: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1bb424u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1bb428: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bb428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb42c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bb42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb430: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1bb430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb434: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb438: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb43c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1bb43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1bb440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb444: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bb444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb448: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1bb448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1bb44c: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1bb44cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bb450: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1bb450u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb454: 0x2462fc1e  addiu       $v0, $v1, -0x3E2
    ctx->pc = 0x1bb454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966302));
    // 0x1bb458: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1bb458u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb45c: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1BB45Cu;
    SET_GPR_U32(ctx, 31, 0x1BB464u);
    ctx->pc = 0x1BB460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB45Cu;
            // 0x1bb460: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB464u; }
        if (ctx->pc != 0x1BB464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB464u; }
        if (ctx->pc != 0x1BB464u) { return; }
    }
    ctx->pc = 0x1BB464u;
    // 0x1bb464: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1bb464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1bb468: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1bb468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1bb46c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1bb46cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1bb470: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1bb470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1bb474: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1bb474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb478: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1bb478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1bb47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bb47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bb480: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1bb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb484: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1bb484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1bb488: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1bb488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bb48c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1bb48cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1bb490: 0x2462fc1e  addiu       $v0, $v1, -0x3E2
    ctx->pc = 0x1bb490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966302));
    // 0x1bb494: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1bb494u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1bb498: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1BB498u;
    SET_GPR_U32(ctx, 31, 0x1BB4A0u);
    ctx->pc = 0x1BB49Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB498u;
            // 0x1bb49c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4A0u; }
        if (ctx->pc != 0x1BB4A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB4A0u; }
        if (ctx->pc != 0x1BB4A0u) { return; }
    }
    ctx->pc = 0x1BB4A0u;
    // 0x1bb4a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1bb4a4: 0x2a620078  slti        $v0, $s3, 0x78
    ctx->pc = 0x1bb4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1bb4a8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1BB4A8u;
    {
        const bool branch_taken_0x1bb4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4A8u;
            // 0x1bb4ac: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4a8) {
            ctx->pc = 0x1BB400u;
            goto label_1bb400;
        }
    }
    ctx->pc = 0x1BB4B0u;
    // 0x1bb4b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1bb4b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1bb4b4: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1bb4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1bb4b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1bb4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1bb4bc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1BB4BCu;
    {
        const bool branch_taken_0x1bb4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4BCu;
            // 0x1bb4c0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4bc) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BB4C4u;
    // 0x1bb4c4: 0x0  nop
    ctx->pc = 0x1bb4c4u;
    // NOP
label_1bb4c8:
    // 0x1bb4c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb4cc: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1bb4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1bb4d0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1bb4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1bb4d4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1bb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1bb4d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb4dc: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1bb4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1bb4e0: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1bb4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1bb4e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb4e8: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1bb4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1bb4ec: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1bb4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1bb4f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb4f4: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1bb4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1bb4f8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1bb4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1bb4fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb500: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1bb500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1bb504: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1bb504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1bb508: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb50c: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x1bb50cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x1bb510: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1bb510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1bb514: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1bb514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb518: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x1bb518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bb51c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB51Cu;
    {
        const bool branch_taken_0x1bb51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB51Cu;
            // 0x1bb520: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb51c) {
            ctx->pc = 0x1BB530u;
            goto label_1bb530;
        }
    }
    ctx->pc = 0x1BB524u;
    // 0x1bb524: 0xc060718  jal         func_181C60
    ctx->pc = 0x1BB524u;
    SET_GPR_U32(ctx, 31, 0x1BB52Cu);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB52Cu; }
        if (ctx->pc != 0x1BB52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB52Cu; }
        if (ctx->pc != 0x1BB52Cu) { return; }
    }
    ctx->pc = 0x1BB52Cu;
    // 0x1bb52c: 0x0  nop
    ctx->pc = 0x1bb52cu;
    // NOP
label_1bb530:
    // 0x1bb530: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb534: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB534u;
    {
        const bool branch_taken_0x1bb534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB534u;
            // 0x1bb538: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb534) {
            ctx->pc = 0x1BB548u;
            goto label_1bb548;
        }
    }
    ctx->pc = 0x1BB53Cu;
    // 0x1bb53c: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB53Cu;
    SET_GPR_U32(ctx, 31, 0x1BB544u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB544u; }
        if (ctx->pc != 0x1BB544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB544u; }
        if (ctx->pc != 0x1BB544u) { return; }
    }
    ctx->pc = 0x1BB544u;
    // 0x1bb544: 0x0  nop
    ctx->pc = 0x1bb544u;
    // NOP
label_1bb548:
    // 0x1bb548: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb54c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb550: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB550u;
    {
        const bool branch_taken_0x1bb550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB550u;
            // 0x1bb554: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb550) {
            ctx->pc = 0x1BB560u;
            goto label_1bb560;
        }
    }
    ctx->pc = 0x1BB558u;
    // 0x1bb558: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB558u;
    SET_GPR_U32(ctx, 31, 0x1BB560u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB560u; }
        if (ctx->pc != 0x1BB560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB560u; }
        if (ctx->pc != 0x1BB560u) { return; }
    }
    ctx->pc = 0x1BB560u;
label_1bb560:
    // 0x1bb560: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bb564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb568: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB568u;
    {
        const bool branch_taken_0x1bb568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB568u;
            // 0x1bb56c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb568) {
            ctx->pc = 0x1BB578u;
            goto label_1bb578;
        }
    }
    ctx->pc = 0x1BB570u;
    // 0x1bb570: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB570u;
    SET_GPR_U32(ctx, 31, 0x1BB578u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB578u; }
        if (ctx->pc != 0x1BB578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB578u; }
        if (ctx->pc != 0x1BB578u) { return; }
    }
    ctx->pc = 0x1BB578u;
label_1bb578:
    // 0x1bb578: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb57c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bb57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb580: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB580u;
    {
        const bool branch_taken_0x1bb580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB580u;
            // 0x1bb584: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb580) {
            ctx->pc = 0x1BB590u;
            goto label_1bb590;
        }
    }
    ctx->pc = 0x1BB588u;
    // 0x1bb588: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB588u;
    SET_GPR_U32(ctx, 31, 0x1BB590u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB590u; }
        if (ctx->pc != 0x1BB590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB590u; }
        if (ctx->pc != 0x1BB590u) { return; }
    }
    ctx->pc = 0x1BB590u;
label_1bb590:
    // 0x1bb590: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb594: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bb594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bb598: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB598u;
    {
        const bool branch_taken_0x1bb598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB598u;
            // 0x1bb59c: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb598) {
            ctx->pc = 0x1BB5A8u;
            goto label_1bb5a8;
        }
    }
    ctx->pc = 0x1BB5A0u;
    // 0x1bb5a0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB5A0u;
    SET_GPR_U32(ctx, 31, 0x1BB5A8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5A8u; }
        if (ctx->pc != 0x1BB5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5A8u; }
        if (ctx->pc != 0x1BB5A8u) { return; }
    }
    ctx->pc = 0x1BB5A8u;
label_1bb5a8:
    // 0x1bb5a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb5ac: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1bb5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1bb5b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5B0u;
    {
        const bool branch_taken_0x1bb5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5B0u;
            // 0x1bb5b4: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5b0) {
            ctx->pc = 0x1BB5C0u;
            goto label_1bb5c0;
        }
    }
    ctx->pc = 0x1BB5B8u;
    // 0x1bb5b8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB5B8u;
    SET_GPR_U32(ctx, 31, 0x1BB5C0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5C0u; }
        if (ctx->pc != 0x1BB5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5C0u; }
        if (ctx->pc != 0x1BB5C0u) { return; }
    }
    ctx->pc = 0x1BB5C0u;
label_1bb5c0:
    // 0x1bb5c0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb5c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1bb5c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5C8u;
    {
        const bool branch_taken_0x1bb5c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5C8u;
            // 0x1bb5cc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5c8) {
            ctx->pc = 0x1BB5D8u;
            goto label_1bb5d8;
        }
    }
    ctx->pc = 0x1BB5D0u;
    // 0x1bb5d0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB5D0u;
    SET_GPR_U32(ctx, 31, 0x1BB5D8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5D8u; }
        if (ctx->pc != 0x1BB5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5D8u; }
        if (ctx->pc != 0x1BB5D8u) { return; }
    }
    ctx->pc = 0x1BB5D8u;
label_1bb5d8:
    // 0x1bb5d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb5dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1bb5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bb5e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5E0u;
    {
        const bool branch_taken_0x1bb5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5E0u;
            // 0x1bb5e4: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5e0) {
            ctx->pc = 0x1BB5F0u;
            goto label_1bb5f0;
        }
    }
    ctx->pc = 0x1BB5E8u;
    // 0x1bb5e8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB5E8u;
    SET_GPR_U32(ctx, 31, 0x1BB5F0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5F0u; }
        if (ctx->pc != 0x1BB5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB5F0u; }
        if (ctx->pc != 0x1BB5F0u) { return; }
    }
    ctx->pc = 0x1BB5F0u;
label_1bb5f0:
    // 0x1bb5f0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb5f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1bb5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bb5f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB5F8u;
    {
        const bool branch_taken_0x1bb5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BB5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5F8u;
            // 0x1bb5fc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5f8) {
            ctx->pc = 0x1BB608u;
            goto label_1bb608;
        }
    }
    ctx->pc = 0x1BB600u;
    // 0x1bb600: 0xc05d110  jal         func_174440
    ctx->pc = 0x1BB600u;
    SET_GPR_U32(ctx, 31, 0x1BB608u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB608u; }
        if (ctx->pc != 0x1BB608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB608u; }
        if (ctx->pc != 0x1BB608u) { return; }
    }
    ctx->pc = 0x1BB608u;
label_1bb608:
    // 0x1bb608: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb60c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1bb60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1bb610: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB610u;
    {
        const bool branch_taken_0x1bb610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bb610) {
            ctx->pc = 0x1BB648u;
            goto label_1bb648;
        }
    }
    ctx->pc = 0x1BB618u;
    // 0x1bb618: 0xc056054  jal         func_158150
    ctx->pc = 0x1BB618u;
    SET_GPR_U32(ctx, 31, 0x1BB620u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB620u; }
        if (ctx->pc != 0x1BB620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB620u; }
        if (ctx->pc != 0x1BB620u) { return; }
    }
    ctx->pc = 0x1BB620u;
    // 0x1bb620: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1BB620u;
    SET_GPR_U32(ctx, 31, 0x1BB628u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB628u; }
        if (ctx->pc != 0x1BB628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB628u; }
        if (ctx->pc != 0x1BB628u) { return; }
    }
    ctx->pc = 0x1BB628u;
    // 0x1bb628: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1BB628u;
    SET_GPR_U32(ctx, 31, 0x1BB630u);
    ctx->pc = 0x1BB62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB628u;
            // 0x1bb62c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB630u; }
        if (ctx->pc != 0x1BB630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB630u; }
        if (ctx->pc != 0x1BB630u) { return; }
    }
    ctx->pc = 0x1BB630u;
    // 0x1bb630: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1BB630u;
    SET_GPR_U32(ctx, 31, 0x1BB638u);
    ctx->pc = 0x1BB634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB630u;
            // 0x1bb634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB638u; }
        if (ctx->pc != 0x1BB638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB638u; }
        if (ctx->pc != 0x1BB638u) { return; }
    }
    ctx->pc = 0x1BB638u;
    // 0x1bb638: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1BB638u;
    SET_GPR_U32(ctx, 31, 0x1BB640u);
    ctx->pc = 0x1BB63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB638u;
            // 0x1bb63c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB640u; }
        if (ctx->pc != 0x1BB640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB640u; }
        if (ctx->pc != 0x1BB640u) { return; }
    }
    ctx->pc = 0x1BB640u;
    // 0x1bb640: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1BB640u;
    {
        const bool branch_taken_0x1bb640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb640) {
            ctx->pc = 0x1BB788u;
            goto label_1bb788;
        }
    }
    ctx->pc = 0x1BB648u;
label_1bb648:
    // 0x1bb648: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1BB648u;
    SET_GPR_U32(ctx, 31, 0x1BB650u);
    ctx->pc = 0x1BB64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB648u;
            // 0x1bb64c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB650u; }
        if (ctx->pc != 0x1BB650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB650u; }
        if (ctx->pc != 0x1BB650u) { return; }
    }
    ctx->pc = 0x1BB650u;
    // 0x1bb650: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1BB650u;
    SET_GPR_U32(ctx, 31, 0x1BB658u);
    ctx->pc = 0x1BB654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB650u;
            // 0x1bb654: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB658u; }
        if (ctx->pc != 0x1BB658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB658u; }
        if (ctx->pc != 0x1BB658u) { return; }
    }
    ctx->pc = 0x1BB658u;
    // 0x1bb658: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1BB658u;
    SET_GPR_U32(ctx, 31, 0x1BB660u);
    ctx->pc = 0x1BB65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB658u;
            // 0x1bb65c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB660u; }
        if (ctx->pc != 0x1BB660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB660u; }
        if (ctx->pc != 0x1BB660u) { return; }
    }
    ctx->pc = 0x1BB660u;
    // 0x1bb660: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb664: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1bb664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb668: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1BB668u;
    SET_GPR_U32(ctx, 31, 0x1BB670u);
    ctx->pc = 0x1BB66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB668u;
            // 0x1bb66c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB670u; }
        if (ctx->pc != 0x1BB670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB670u; }
        if (ctx->pc != 0x1BB670u) { return; }
    }
    ctx->pc = 0x1BB670u;
    // 0x1bb670: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb674: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1bb674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb678: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1BB678u;
    SET_GPR_U32(ctx, 31, 0x1BB680u);
    ctx->pc = 0x1BB67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB678u;
            // 0x1bb67c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB680u; }
        if (ctx->pc != 0x1BB680u) { return; }
    }
    ctx->pc = 0x1BB680u;
    // 0x1bb680: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb684: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1bb684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1bb688: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1BB688u;
    SET_GPR_U32(ctx, 31, 0x1BB690u);
    ctx->pc = 0x1BB68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB688u;
            // 0x1bb68c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB690u; }
        if (ctx->pc != 0x1BB690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB690u; }
        if (ctx->pc != 0x1BB690u) { return; }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb694: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1bb694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb698: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1BB698u;
    SET_GPR_U32(ctx, 31, 0x1BB6A0u);
    ctx->pc = 0x1BB69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB698u;
            // 0x1bb69c: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A0u; }
        if (ctx->pc != 0x1BB6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6A0u; }
        if (ctx->pc != 0x1BB6A0u) { return; }
    }
    ctx->pc = 0x1BB6A0u;
    // 0x1bb6a0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1bb6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1bb6a4: 0x8c221bf0  lw          $v0, 0x1BF0($at)
    ctx->pc = 0x1bb6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7152)));
    // 0x1bb6a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB6A8u;
    {
        const bool branch_taken_0x1bb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6a8) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB6B0u;
    // 0x1bb6b0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bb6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb6b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1bb6b4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1bb6b8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6B8u;
    {
        const bool branch_taken_0x1bb6b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bb6b8) {
            ctx->pc = 0x1BB6C8u;
            goto label_1bb6c8;
        }
    }
    ctx->pc = 0x1BB6C0u;
    // 0x1bb6c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1bb6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1bb6c4: 0x0  nop
    ctx->pc = 0x1bb6c4u;
    // NOP
label_1bb6c8:
    // 0x1bb6c8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bb6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb6cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1bb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1bb6d0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1bb6d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb6d4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BB6D4u;
    {
        const bool branch_taken_0x1bb6d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6d4) {
            ctx->pc = 0x1BB728u;
            goto label_1bb728;
        }
    }
    ctx->pc = 0x1BB6DCu;
    // 0x1bb6dc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1bb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1bb6e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB6E0u;
    {
        const bool branch_taken_0x1bb6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6e0) {
            ctx->pc = 0x1BB6F8u;
            goto label_1bb6f8;
        }
    }
    ctx->pc = 0x1BB6E8u;
    // 0x1bb6e8: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1BB6E8u;
    SET_GPR_U32(ctx, 31, 0x1BB6F0u);
    ctx->pc = 0x1BB6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6E8u;
            // 0x1bb6ec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6F0u; }
        if (ctx->pc != 0x1BB6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB6F0u; }
        if (ctx->pc != 0x1BB6F0u) { return; }
    }
    ctx->pc = 0x1BB6F0u;
    // 0x1bb6f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB6F0u;
    {
        const bool branch_taken_0x1bb6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb6f0) {
            ctx->pc = 0x1BB700u;
            goto label_1bb700;
        }
    }
    ctx->pc = 0x1BB6F8u;
label_1bb6f8:
    // 0x1bb6f8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BB6F8u;
    SET_GPR_U32(ctx, 31, 0x1BB700u);
    ctx->pc = 0x1BB6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB6F8u;
            // 0x1bb6fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB700u; }
        if (ctx->pc != 0x1BB700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB700u; }
        if (ctx->pc != 0x1BB700u) { return; }
    }
    ctx->pc = 0x1BB700u;
label_1bb700:
    // 0x1bb700: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1bb700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1bb704: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB704u;
    {
        const bool branch_taken_0x1bb704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb704) {
            ctx->pc = 0x1BB718u;
            goto label_1bb718;
        }
    }
    ctx->pc = 0x1BB70Cu;
    // 0x1bb70c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BB70Cu;
    {
        const bool branch_taken_0x1bb70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB70Cu;
            // 0x1bb710: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb70c) {
            ctx->pc = 0x1BB760u;
            goto label_1bb760;
        }
    }
    ctx->pc = 0x1BB714u;
    // 0x1bb714: 0x0  nop
    ctx->pc = 0x1bb714u;
    // NOP
label_1bb718:
    // 0x1bb718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb71c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BB71Cu;
    {
        const bool branch_taken_0x1bb71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB71Cu;
            // 0x1bb720: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb71c) {
            ctx->pc = 0x1BB760u;
            goto label_1bb760;
        }
    }
    ctx->pc = 0x1BB724u;
    // 0x1bb724: 0x0  nop
    ctx->pc = 0x1bb724u;
    // NOP
label_1bb728:
    // 0x1bb728: 0x1c600009  bgtz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BB728u;
    {
        const bool branch_taken_0x1bb728 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1bb728) {
            ctx->pc = 0x1BB750u;
            goto label_1bb750;
        }
    }
    ctx->pc = 0x1BB730u;
    // 0x1bb730: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1bb730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bb734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bb734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bb738: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1bb738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1bb73c: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1bb73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1bb740: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1BB740u;
    SET_GPR_U32(ctx, 31, 0x1BB748u);
    ctx->pc = 0x1BB744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB740u;
            // 0x1bb744: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB748u; }
        if (ctx->pc != 0x1BB748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB748u; }
        if (ctx->pc != 0x1BB748u) { return; }
    }
    ctx->pc = 0x1BB748u;
    // 0x1bb748: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BB748u;
    {
        const bool branch_taken_0x1bb748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb748) {
            ctx->pc = 0x1BB758u;
            goto label_1bb758;
        }
    }
    ctx->pc = 0x1BB750u;
label_1bb750:
    // 0x1bb750: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1BB750u;
    SET_GPR_U32(ctx, 31, 0x1BB758u);
    ctx->pc = 0x1BB754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB750u;
            // 0x1bb754: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB758u; }
        if (ctx->pc != 0x1BB758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB758u; }
        if (ctx->pc != 0x1BB758u) { return; }
    }
    ctx->pc = 0x1BB758u;
label_1bb758:
    // 0x1bb758: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb75c: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1bb75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1bb760:
    // 0x1bb760: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bb760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb764: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1bb764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1bb768: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1bb768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1bb76c: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BB76Cu;
    {
        const bool branch_taken_0x1bb76c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1BB770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB76Cu;
            // 0x1bb770: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb76c) {
            ctx->pc = 0x1BB778u;
            goto label_1bb778;
        }
    }
    ctx->pc = 0x1BB774u;
    // 0x1bb774: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1bb774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
label_1bb778:
    // 0x1bb778: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1bb778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1bb77c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bb77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bb780: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1bb780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1bb784: 0x0  nop
    ctx->pc = 0x1bb784u;
    // NOP
label_1bb788:
    // 0x1bb788: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bb788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bb78c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bb78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bb790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bb790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bb798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB79Cu;
            // 0x1bb7a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BAD30u: goto label_1bad30;
            case 0x1BAD68u: goto label_1bad68;
            case 0x1BADA0u: goto label_1bada0;
            case 0x1BADD8u: goto label_1badd8;
            case 0x1BAE10u: goto label_1bae10;
            case 0x1BAE48u: goto label_1bae48;
            case 0x1BAE98u: goto label_1bae98;
            case 0x1BAF28u: goto label_1baf28;
            case 0x1BAF48u: goto label_1baf48;
            case 0x1BAF68u: goto label_1baf68;
            case 0x1BAF88u: goto label_1baf88;
            case 0x1BAFA8u: goto label_1bafa8;
            case 0x1BB1C8u: goto label_1bb1c8;
            case 0x1BB210u: goto label_1bb210;
            case 0x1BB258u: goto label_1bb258;
            case 0x1BB290u: goto label_1bb290;
            case 0x1BB2C8u: goto label_1bb2c8;
            case 0x1BB2E0u: goto label_1bb2e0;
            case 0x1BB310u: goto label_1bb310;
            case 0x1BB328u: goto label_1bb328;
            case 0x1BB360u: goto label_1bb360;
            case 0x1BB378u: goto label_1bb378;
            case 0x1BB3A8u: goto label_1bb3a8;
            case 0x1BB3C0u: goto label_1bb3c0;
            case 0x1BB3D8u: goto label_1bb3d8;
            case 0x1BB400u: goto label_1bb400;
            case 0x1BB4C8u: goto label_1bb4c8;
            case 0x1BB530u: goto label_1bb530;
            case 0x1BB548u: goto label_1bb548;
            case 0x1BB560u: goto label_1bb560;
            case 0x1BB578u: goto label_1bb578;
            case 0x1BB590u: goto label_1bb590;
            case 0x1BB5A8u: goto label_1bb5a8;
            case 0x1BB5C0u: goto label_1bb5c0;
            case 0x1BB5D8u: goto label_1bb5d8;
            case 0x1BB5F0u: goto label_1bb5f0;
            case 0x1BB608u: goto label_1bb608;
            case 0x1BB648u: goto label_1bb648;
            case 0x1BB6C8u: goto label_1bb6c8;
            case 0x1BB6F8u: goto label_1bb6f8;
            case 0x1BB700u: goto label_1bb700;
            case 0x1BB718u: goto label_1bb718;
            case 0x1BB728u: goto label_1bb728;
            case 0x1BB750u: goto label_1bb750;
            case 0x1BB758u: goto label_1bb758;
            case 0x1BB760u: goto label_1bb760;
            case 0x1BB778u: goto label_1bb778;
            case 0x1BB788u: goto label_1bb788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB7A4u;
}
