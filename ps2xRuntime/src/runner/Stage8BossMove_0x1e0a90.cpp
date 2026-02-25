#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stage8BossMove
// Address: 0x1e0a90 - 0x1e23d4
void Stage8BossMove_0x1e0a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stage8BossMove_0x1e0a90");
#endif

    ctx->pc = 0x1e0a90u;

    // 0x1e0a90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e0a94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e0a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e0a98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e0a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e0a9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e0aa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e0aa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e0aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e0aa8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1e0aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e0aac: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E0AACu;
    {
        const bool branch_taken_0x1e0aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AACu;
            // 0x1e0ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0aac) {
            ctx->pc = 0x1E0B20u;
            goto label_1e0b20;
        }
    }
    ctx->pc = 0x1E0AB4u;
    // 0x1e0ab4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e0ab8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E0AB8u;
    {
        const bool branch_taken_0x1e0ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E0ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AB8u;
            // 0x1e0abc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ab8) {
            ctx->pc = 0x1E0B20u;
            goto label_1e0b20;
        }
    }
    ctx->pc = 0x1E0AC0u;
    // 0x1e0ac0: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E0AC0u;
    {
        const bool branch_taken_0x1e0ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e0ac0) {
            ctx->pc = 0x1E0B20u;
            goto label_1e0b20;
        }
    }
    ctx->pc = 0x1E0AC8u;
    // 0x1e0ac8: 0xc6020024  lwc1        $f2, 0x24($s0)
    ctx->pc = 0x1e0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0acc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1e0ad0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1e0ad0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0ad4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1e0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1e0ad8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e0ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0adc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ae0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1e0ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1e0ae4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1e0ae4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1e0ae8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1e0ae8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x1e0aec: 0x0  nop
    ctx->pc = 0x1e0aecu;
    // NOP
    // 0x1e0af0: 0x0  nop
    ctx->pc = 0x1e0af0u;
    // NOP
    // 0x1e0af4: 0xc05012c  jal         func_1404B0
    ctx->pc = 0x1E0AF4u;
    SET_GPR_U32(ctx, 31, 0x1E0AFCu);
    ctx->pc = 0x1404B0u;
    if (runtime->hasFunction(0x1404B0u)) {
        auto targetFn = runtime->lookupFunction(0x1404B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AFCu; }
        if (ctx->pc != 0x1E0AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x1404b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0AFCu; }
        if (ctx->pc != 0x1E0AFCu) { return; }
    }
    ctx->pc = 0x1E0AFCu;
    // 0x1e0afc: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1e0b00: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e0b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b08: 0x0  nop
    ctx->pc = 0x1e0b08u;
    // NOP
    // 0x1e0b0c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1e0b0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x1e0b10: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e0b18: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e0b1c: 0x0  nop
    ctx->pc = 0x1e0b1cu;
    // NOP
label_1e0b20:
    // 0x1e0b20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b24: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1e0b28: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0b28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0b2c: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e0b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b34: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1e0b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b3c: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1e0b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1e0b40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b44: 0xc60200d4  lwc1        $f2, 0xD4($s0)
    ctx->pc = 0x1e0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b48: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1e0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b4c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b50: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1e0b50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1e0b54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b58: 0xc60200d8  lwc1        $f2, 0xD8($s0)
    ctx->pc = 0x1e0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b5c: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x1e0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b60: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b64: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1e0b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1e0b68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b6c: 0xc60200e4  lwc1        $f2, 0xE4($s0)
    ctx->pc = 0x1e0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b70: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e0b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b74: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b78: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1e0b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1e0b7c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b80: 0xc60200e0  lwc1        $f2, 0xE0($s0)
    ctx->pc = 0x1e0b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b84: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1e0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0b8c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1e0b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1e0b90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0b94: 0xc60200e8  lwc1        $f2, 0xE8($s0)
    ctx->pc = 0x1e0b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e0b98: 0xc4410118  lwc1        $f1, 0x118($v0)
    ctx->pc = 0x1e0b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0b9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e0b9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1e0ba0: 0xe4410118  swc1        $f1, 0x118($v0)
    ctx->pc = 0x1e0ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x1e0ba4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0ba8: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1e0ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0bac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0bb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0BB0u;
    {
        const bool branch_taken_0x1e0bb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BB0u;
            // 0x1e0bb4: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bb0) {
            ctx->pc = 0x1E0BD0u;
            goto label_1e0bd0;
        }
    }
    ctx->pc = 0x1E0BB8u;
    // 0x1e0bb8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0bbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0bbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0bc4: 0x0  nop
    ctx->pc = 0x1e0bc4u;
    // NOP
    // 0x1e0bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0bcc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e0bd0:
    // 0x1e0bd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0bd4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1e0bd8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0bd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0bdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0be0: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1e0be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0be4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e0be4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0be8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0BE8u;
    {
        const bool branch_taken_0x1e0be8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0BE8u;
            // 0x1e0bec: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0be8) {
            ctx->pc = 0x1E0C08u;
            goto label_1e0c08;
        }
    }
    ctx->pc = 0x1E0BF0u;
    // 0x1e0bf0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0bf4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0bf4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0bfc: 0x0  nop
    ctx->pc = 0x1e0bfcu;
    // NOP
    // 0x1e0c00: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e0c00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0c04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e0c08:
    // 0x1e0c08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0c0c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e0c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1e0c10: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c18: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e0c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0C20u;
    {
        const bool branch_taken_0x1e0c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C20u;
            // 0x1e0c24: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c20) {
            ctx->pc = 0x1E0C40u;
            goto label_1e0c40;
        }
    }
    ctx->pc = 0x1E0C28u;
    // 0x1e0c28: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0c2c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c2cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0c30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c34: 0x0  nop
    ctx->pc = 0x1e0c34u;
    // NOP
    // 0x1e0c38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0c3c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e0c40:
    // 0x1e0c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0c44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1e0c48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c50: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1e0c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e0c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c58: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0C58u;
    {
        const bool branch_taken_0x1e0c58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C58u;
            // 0x1e0c5c: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c58) {
            ctx->pc = 0x1E0C78u;
            goto label_1e0c78;
        }
    }
    ctx->pc = 0x1E0C60u;
    // 0x1e0c60: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0c64: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c64u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c6c: 0x0  nop
    ctx->pc = 0x1e0c6cu;
    // NOP
    // 0x1e0c70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e0c70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0c74: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e0c78:
    // 0x1e0c78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0c7c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1e0c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1e0c80: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c80u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0c88: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e0c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0c90: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0C90u;
    {
        const bool branch_taken_0x1e0c90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0C90u;
            // 0x1e0c94: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c90) {
            ctx->pc = 0x1E0CB0u;
            goto label_1e0cb0;
        }
    }
    ctx->pc = 0x1E0C98u;
    // 0x1e0c98: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0c9c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0c9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0ca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0ca4: 0x0  nop
    ctx->pc = 0x1e0ca4u;
    // NOP
    // 0x1e0ca8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0cac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e0cb0:
    // 0x1e0cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0cb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1e0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1e0cb8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0cb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0cbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0cbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cc0: 0xc4610118  lwc1        $f1, 0x118($v1)
    ctx->pc = 0x1e0cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0cc4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e0cc4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0cc8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0CC8u;
    {
        const bool branch_taken_0x1e0cc8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CC8u;
            // 0x1e0ccc: 0x24640118  addiu       $a0, $v1, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc8) {
            ctx->pc = 0x1E0CE8u;
            goto label_1e0ce8;
        }
    }
    ctx->pc = 0x1E0CD0u;
    // 0x1e0cd0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1e0cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1e0cd4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1e0cd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1e0cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0cdc: 0x0  nop
    ctx->pc = 0x1e0cdcu;
    // NOP
    // 0x1e0ce0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1e0ce0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e0ce4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1e0ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1e0ce8:
    // 0x1e0ce8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0cec: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1e0cf0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e0cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e0cf4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e0cf8: 0xc07891c  jal         func_1E2470
    ctx->pc = 0x1E0CF8u;
    SET_GPR_U32(ctx, 31, 0x1E0D00u);
    ctx->pc = 0x1E0CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0CF8u;
            // 0x1e0cfc: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2470u;
    if (runtime->hasFunction(0x1E2470u)) {
        auto targetFn = runtime->lookupFunction(0x1E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D00u; }
        if (ctx->pc != 0x1E0D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D00u; }
        if (ctx->pc != 0x1E0D00u) { return; }
    }
    ctx->pc = 0x1E0D00u;
    // 0x1e0d00: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e0d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e0d04: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1e0d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1e0d08: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e0d0c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x1e0d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x1e0d10: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e0d14: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1e0d14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0d18: 0x10200411  beqz        $at, . + 4 + (0x411 << 2)
    ctx->pc = 0x1E0D18u;
    {
        const bool branch_taken_0x1e0d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D18u;
            // 0x1e0d1c: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d18) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0D20u;
    // 0x1e0d20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e0d24: 0x24632db0  addiu       $v1, $v1, 0x2DB0
    ctx->pc = 0x1e0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11696));
    // 0x1e0d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0d2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0d30: 0x400008  jr          $v0
    ctx->pc = 0x1E0D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0D38u: goto label_1e0d38;
            case 0x1E0D88u: goto label_1e0d88;
            case 0x1E0DA0u: goto label_1e0da0;
            case 0x1E0E80u: goto label_1e0e80;
            case 0x1E0F60u: goto label_1e0f60;
            case 0x1E0FF8u: goto label_1e0ff8;
            case 0x1E10C0u: goto label_1e10c0;
            case 0x1E1370u: goto label_1e1370;
            case 0x1E1498u: goto label_1e1498;
            case 0x1E16C8u: goto label_1e16c8;
            case 0x1E1C20u: goto label_1e1c20;
            case 0x1E1D60u: goto label_1e1d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0D38u;
label_1e0d38:
    // 0x1e0d38: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1e0d3c: 0xc60100d4  lwc1        $f1, 0xD4($s0)
    ctx->pc = 0x1e0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0d40: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e0d40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1e0d44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0d44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0d48: 0x0  nop
    ctx->pc = 0x1e0d48u;
    // NOP
    // 0x1e0d4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e0d4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e0d50: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D50u;
            // 0x1e0d54: 0x3c023f7e  lui         $v0, 0x3F7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16254 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D70u;
            goto label_1e0d70;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x1e0d58u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)5243u)));
    // 0x1e0d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0d60: 0x0  nop
    ctx->pc = 0x1e0d60u;
    // NOP
    // 0x1e0d64: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e0d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e0d68: 0x100003fd  b           . + 4 + (0x3FD << 2)
    ctx->pc = 0x1E0D68u;
    {
        const bool branch_taken_0x1e0d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D68u;
            // 0x1e0d6c: 0xe60000d4  swc1        $f0, 0xD4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d68) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0D70u;
label_1e0d70:
    // 0x1e0d70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e0d74: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0d78: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e0d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e0d7c: 0x100003f8  b           . + 4 + (0x3F8 << 2)
    ctx->pc = 0x1E0D7Cu;
    {
        const bool branch_taken_0x1e0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D7Cu;
            // 0x1e0d80: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d7c) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0D84u;
    // 0x1e0d84: 0x0  nop
    ctx->pc = 0x1e0d84u;
    // NOP
label_1e0d88:
    // 0x1e0d88: 0xc078900  jal         func_1E2400
    ctx->pc = 0x1E0D88u;
    SET_GPR_U32(ctx, 31, 0x1E0D90u);
    ctx->pc = 0x1E0D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D88u;
            // 0x1e0d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2400u;
    if (runtime->hasFunction(0x1E2400u)) {
        auto targetFn = runtime->lookupFunction(0x1E2400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D90u; }
        if (ctx->pc != 0x1E0D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stage8BossGetStep_0x1e2400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0D90u; }
        if (ctx->pc != 0x1E0D90u) { return; }
    }
    ctx->pc = 0x1E0D90u;
    // 0x1e0d90: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0d94: 0x100003f2  b           . + 4 + (0x3F2 << 2)
    ctx->pc = 0x1E0D94u;
    {
        const bool branch_taken_0x1e0d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0D94u;
            // 0x1e0d98: 0xae000114  sw          $zero, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d94) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0D9Cu;
    // 0x1e0d9c: 0x0  nop
    ctx->pc = 0x1e0d9cu;
    // NOP
label_1e0da0:
    // 0x1e0da0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0da4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E0DA4u;
    {
        const bool branch_taken_0x1e0da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0da4) {
            ctx->pc = 0x1E0E40u;
            goto label_1e0e40;
        }
    }
    ctx->pc = 0x1E0DACu;
    // 0x1e0dac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0db0: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0db4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0db8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0db8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0dbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0dc0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0dc4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0dc8: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0DC8u;
    SET_GPR_U32(ctx, 31, 0x1E0DD0u);
    ctx->pc = 0x1E0DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DC8u;
            // 0x1e0dcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD0u; }
        if (ctx->pc != 0x1E0DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DD0u; }
        if (ctx->pc != 0x1E0DD0u) { return; }
    }
    ctx->pc = 0x1E0DD0u;
    // 0x1e0dd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0dd4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0dd8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ddc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0ddcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0de0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0de0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0de4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0de4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0de8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0dec: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0DECu;
    SET_GPR_U32(ctx, 31, 0x1E0DF4u);
    ctx->pc = 0x1E0DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0DECu;
            // 0x1e0df0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF4u; }
        if (ctx->pc != 0x1E0DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0DF4u; }
        if (ctx->pc != 0x1E0DF4u) { return; }
    }
    ctx->pc = 0x1E0DF4u;
    // 0x1e0df4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0df8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0dfc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e00: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0e04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0e08: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0e08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0e0c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0e0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0e10: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E0E10u;
    SET_GPR_U32(ctx, 31, 0x1E0E18u);
    ctx->pc = 0x1E0E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E10u;
            // 0x1e0e14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E18u; }
        if (ctx->pc != 0x1E0E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E18u; }
        if (ctx->pc != 0x1E0E18u) { return; }
    }
    ctx->pc = 0x1E0E18u;
    // 0x1e0e18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0e1c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0e20: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e24: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0e28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0e2c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0e30: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0e34: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E0E34u;
    SET_GPR_U32(ctx, 31, 0x1E0E3Cu);
    ctx->pc = 0x1E0E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E34u;
            // 0x1e0e38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E3Cu; }
        if (ctx->pc != 0x1E0E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E3Cu; }
        if (ctx->pc != 0x1E0E3Cu) { return; }
    }
    ctx->pc = 0x1E0E3Cu;
    // 0x1e0e3c: 0x0  nop
    ctx->pc = 0x1e0e3cu;
    // NOP
label_1e0e40:
    // 0x1e0e40: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e0e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0e44: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e0e48: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0E48u;
    {
        const bool branch_taken_0x1e0e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E48u;
            // 0x1e0e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e48) {
            ctx->pc = 0x1E0E58u;
            goto label_1e0e58;
        }
    }
    ctx->pc = 0x1E0E50u;
    // 0x1e0e50: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0e54: 0x0  nop
    ctx->pc = 0x1e0e54u;
    // NOP
label_1e0e58:
    // 0x1e0e58: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0e5c: 0x284107d0  slti        $at, $v0, 0x7D0
    ctx->pc = 0x1e0e5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e0e60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0E60u;
    {
        const bool branch_taken_0x1e0e60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E60u;
            // 0x1e0e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e60) {
            ctx->pc = 0x1E0E70u;
            goto label_1e0e70;
        }
    }
    ctx->pc = 0x1E0E68u;
    // 0x1e0e68: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0e6c: 0x0  nop
    ctx->pc = 0x1e0e6cu;
    // NOP
label_1e0e70:
    // 0x1e0e70: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0e74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0e78: 0x100003b9  b           . + 4 + (0x3B9 << 2)
    ctx->pc = 0x1E0E78u;
    {
        const bool branch_taken_0x1e0e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E78u;
            // 0x1e0e7c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e78) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0E80u;
label_1e0e80:
    // 0x1e0e80: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0e84: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1E0E84u;
    {
        const bool branch_taken_0x1e0e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0e84) {
            ctx->pc = 0x1E0F20u;
            goto label_1e0f20;
        }
    }
    ctx->pc = 0x1E0E8Cu;
    // 0x1e0e8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0e90: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0e94: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0e98: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0e9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0ea0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0ea4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0ea4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0ea8: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0EA8u;
    SET_GPR_U32(ctx, 31, 0x1E0EB0u);
    ctx->pc = 0x1E0EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EA8u;
            // 0x1e0eac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EB0u; }
        if (ctx->pc != 0x1E0EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EB0u; }
        if (ctx->pc != 0x1E0EB0u) { return; }
    }
    ctx->pc = 0x1E0EB0u;
    // 0x1e0eb0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0eb4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0eb8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ebc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0ebcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0ec0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0ec0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0ec4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0ec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0ec8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0ec8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0ecc: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0ECCu;
    SET_GPR_U32(ctx, 31, 0x1E0ED4u);
    ctx->pc = 0x1E0ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0ECCu;
            // 0x1e0ed0: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ED4u; }
        if (ctx->pc != 0x1E0ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0ED4u; }
        if (ctx->pc != 0x1E0ED4u) { return; }
    }
    ctx->pc = 0x1E0ED4u;
    // 0x1e0ed4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0ed8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0edc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0ee0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0ee4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0ee4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0ee8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0ee8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0eec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0eecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0ef0: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0EF0u;
    SET_GPR_U32(ctx, 31, 0x1E0EF8u);
    ctx->pc = 0x1E0EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0EF0u;
            // 0x1e0ef4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EF8u; }
        if (ctx->pc != 0x1E0EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0EF8u; }
        if (ctx->pc != 0x1E0EF8u) { return; }
    }
    ctx->pc = 0x1E0EF8u;
    // 0x1e0ef8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0efc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0f00: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0f04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0f04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0f08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0f08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0f0c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0f0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0f10: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0f10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0f14: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0F14u;
    SET_GPR_U32(ctx, 31, 0x1E0F1Cu);
    ctx->pc = 0x1E0F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F14u;
            // 0x1e0f18: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F1Cu; }
        if (ctx->pc != 0x1E0F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F1Cu; }
        if (ctx->pc != 0x1E0F1Cu) { return; }
    }
    ctx->pc = 0x1E0F1Cu;
    // 0x1e0f1c: 0x0  nop
    ctx->pc = 0x1e0f1cu;
    // NOP
label_1e0f20:
    // 0x1e0f20: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e0f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0f24: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e0f28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F28u;
    {
        const bool branch_taken_0x1e0f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F28u;
            // 0x1e0f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f28) {
            ctx->pc = 0x1E0F38u;
            goto label_1e0f38;
        }
    }
    ctx->pc = 0x1E0F30u;
    // 0x1e0f30: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0f34: 0x0  nop
    ctx->pc = 0x1e0f34u;
    // NOP
label_1e0f38:
    // 0x1e0f38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0f3c: 0x284107d0  slti        $at, $v0, 0x7D0
    ctx->pc = 0x1e0f3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e0f40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0F40u;
    {
        const bool branch_taken_0x1e0f40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F40u;
            // 0x1e0f44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f40) {
            ctx->pc = 0x1E0F50u;
            goto label_1e0f50;
        }
    }
    ctx->pc = 0x1E0F48u;
    // 0x1e0f48: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0f4c: 0x0  nop
    ctx->pc = 0x1e0f4cu;
    // NOP
label_1e0f50:
    // 0x1e0f50: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0f58: 0x10000381  b           . + 4 + (0x381 << 2)
    ctx->pc = 0x1E0F58u;
    {
        const bool branch_taken_0x1e0f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F58u;
            // 0x1e0f5c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f58) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0F60u;
label_1e0f60:
    // 0x1e0f60: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0f64: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E0F64u;
    {
        const bool branch_taken_0x1e0f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f64) {
            ctx->pc = 0x1E0FB8u;
            goto label_1e0fb8;
        }
    }
    ctx->pc = 0x1E0F6Cu;
    // 0x1e0f6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f70: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0f74: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0f78: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0f78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0f7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0f7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0f80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0f84: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0f84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0f88: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0F88u;
    SET_GPR_U32(ctx, 31, 0x1E0F90u);
    ctx->pc = 0x1E0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F88u;
            // 0x1e0f8c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F90u; }
        if (ctx->pc != 0x1E0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F90u; }
        if (ctx->pc != 0x1E0F90u) { return; }
    }
    ctx->pc = 0x1E0F90u;
    // 0x1e0f90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e0f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e0f94: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e0f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0f98: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e0f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0f9c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0f9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e0fa0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e0fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e0fa4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e0fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e0fa8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e0fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e0fac: 0xc078c20  jal         func_1E3080
    ctx->pc = 0x1E0FACu;
    SET_GPR_U32(ctx, 31, 0x1E0FB4u);
    ctx->pc = 0x1E0FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FACu;
            // 0x1e0fb0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3080u;
    if (runtime->hasFunction(0x1E3080u)) {
        auto targetFn = runtime->lookupFunction(0x1E3080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FB4u; }
        if (ctx->pc != 0x1E0FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitB_0x1e3080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FB4u; }
        if (ctx->pc != 0x1E0FB4u) { return; }
    }
    ctx->pc = 0x1E0FB4u;
    // 0x1e0fb4: 0x0  nop
    ctx->pc = 0x1e0fb4u;
    // NOP
label_1e0fb8:
    // 0x1e0fb8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0fbc: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e0fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e0fc0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0FC0u;
    {
        const bool branch_taken_0x1e0fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E0FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FC0u;
            // 0x1e0fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fc0) {
            ctx->pc = 0x1E0FD0u;
            goto label_1e0fd0;
        }
    }
    ctx->pc = 0x1E0FC8u;
    // 0x1e0fc8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0fcc: 0x0  nop
    ctx->pc = 0x1e0fccu;
    // NOP
label_1e0fd0:
    // 0x1e0fd0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e0fd4: 0x284107d0  slti        $at, $v0, 0x7D0
    ctx->pc = 0x1e0fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e0fd8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0FD8u;
    {
        const bool branch_taken_0x1e0fd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FD8u;
            // 0x1e0fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0fd8) {
            ctx->pc = 0x1E0FE8u;
            goto label_1e0fe8;
        }
    }
    ctx->pc = 0x1E0FE0u;
    // 0x1e0fe0: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e0fe4: 0x0  nop
    ctx->pc = 0x1e0fe4u;
    // NOP
label_1e0fe8:
    // 0x1e0fe8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0fec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0ff0: 0x1000035b  b           . + 4 + (0x35B << 2)
    ctx->pc = 0x1E0FF0u;
    {
        const bool branch_taken_0x1e0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FF0u;
            // 0x1e0ff4: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ff0) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E0FF8u;
label_1e0ff8:
    // 0x1e0ff8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e0ffc: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0FFCu;
    {
        const bool branch_taken_0x1e0ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FFCu;
            // 0x1e1000: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ffc) {
            ctx->pc = 0x1E1080u;
            goto label_1e1080;
        }
    }
    ctx->pc = 0x1E1004u;
    // 0x1e1004: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1e1004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1e1008: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1008u;
    SET_GPR_U32(ctx, 31, 0x1E1010u);
    ctx->pc = 0x1E100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1008u;
            // 0x1e100c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1010u; }
        if (ctx->pc != 0x1E1010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1010u; }
        if (ctx->pc != 0x1E1010u) { return; }
    }
    ctx->pc = 0x1E1010u;
    // 0x1e1010: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1014: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1e1014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1e1018: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1018u;
    SET_GPR_U32(ctx, 31, 0x1E1020u);
    ctx->pc = 0x1E101Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1018u;
            // 0x1e101c: 0x2406ffed  addiu       $a2, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1020u; }
        if (ctx->pc != 0x1E1020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1020u; }
        if (ctx->pc != 0x1E1020u) { return; }
    }
    ctx->pc = 0x1E1020u;
    // 0x1e1020: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e1020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1024: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1e1024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1e1028: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1028u;
    SET_GPR_U32(ctx, 31, 0x1E1030u);
    ctx->pc = 0x1E102Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1028u;
            // 0x1e102c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1030u; }
        if (ctx->pc != 0x1E1030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1030u; }
        if (ctx->pc != 0x1E1030u) { return; }
    }
    ctx->pc = 0x1E1030u;
    // 0x1e1030: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e1030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e1034: 0x2405ffd8  addiu       $a1, $zero, -0x28
    ctx->pc = 0x1e1034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967256));
    // 0x1e1038: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1038u;
    SET_GPR_U32(ctx, 31, 0x1E1040u);
    ctx->pc = 0x1E103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1038u;
            // 0x1e103c: 0x2406ffef  addiu       $a2, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1040u; }
        if (ctx->pc != 0x1E1040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1040u; }
        if (ctx->pc != 0x1E1040u) { return; }
    }
    ctx->pc = 0x1E1040u;
    // 0x1e1040: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e1040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1044: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e1044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e1048: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1048u;
    SET_GPR_U32(ctx, 31, 0x1E1050u);
    ctx->pc = 0x1E104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1048u;
            // 0x1e104c: 0x2406ffec  addiu       $a2, $zero, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1050u; }
        if (ctx->pc != 0x1E1050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1050u; }
        if (ctx->pc != 0x1E1050u) { return; }
    }
    ctx->pc = 0x1E1050u;
    // 0x1e1050: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1e1050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e1054: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e1054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e1058: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1058u;
    SET_GPR_U32(ctx, 31, 0x1E1060u);
    ctx->pc = 0x1E105Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1058u;
            // 0x1e105c: 0x2406ffed  addiu       $a2, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1060u; }
        if (ctx->pc != 0x1E1060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1060u; }
        if (ctx->pc != 0x1E1060u) { return; }
    }
    ctx->pc = 0x1E1060u;
    // 0x1e1060: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1e1060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1064: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e1064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e1068: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1068u;
    SET_GPR_U32(ctx, 31, 0x1E1070u);
    ctx->pc = 0x1E106Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1068u;
            // 0x1e106c: 0x2406ffee  addiu       $a2, $zero, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967278));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1070u; }
        if (ctx->pc != 0x1E1070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1070u; }
        if (ctx->pc != 0x1E1070u) { return; }
    }
    ctx->pc = 0x1E1070u;
    // 0x1e1070: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1e1070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e1074: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x1e1074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e1078: 0xc078ba4  jal         func_1E2E90
    ctx->pc = 0x1E1078u;
    SET_GPR_U32(ctx, 31, 0x1E1080u);
    ctx->pc = 0x1E107Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1078u;
            // 0x1e107c: 0x2406ffef  addiu       $a2, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2E90u;
    if (runtime->hasFunction(0x1E2E90u)) {
        auto targetFn = runtime->lookupFunction(0x1E2E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1080u; }
        if (ctx->pc != 0x1E1080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_bitC_0x1e2e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1080u; }
        if (ctx->pc != 0x1E1080u) { return; }
    }
    ctx->pc = 0x1E1080u;
label_1e1080:
    // 0x1e1080: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e1080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1084: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e1084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e1088: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1088u;
    {
        const bool branch_taken_0x1e1088 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1088u;
            // 0x1e108c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1088) {
            ctx->pc = 0x1E1098u;
            goto label_1e1098;
        }
    }
    ctx->pc = 0x1E1090u;
    // 0x1e1090: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e1090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e1094: 0x0  nop
    ctx->pc = 0x1e1094u;
    // NOP
label_1e1098:
    // 0x1e1098: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e1098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e109c: 0x284107d0  slti        $at, $v0, 0x7D0
    ctx->pc = 0x1e109cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e10a0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E10A0u;
    {
        const bool branch_taken_0x1e10a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10A0u;
            // 0x1e10a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10a0) {
            ctx->pc = 0x1E10B0u;
            goto label_1e10b0;
        }
    }
    ctx->pc = 0x1E10A8u;
    // 0x1e10a8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e10a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e10ac: 0x0  nop
    ctx->pc = 0x1e10acu;
    // NOP
label_1e10b0:
    // 0x1e10b0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e10b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e10b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e10b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e10b8: 0x10000329  b           . + 4 + (0x329 << 2)
    ctx->pc = 0x1E10B8u;
    {
        const bool branch_taken_0x1e10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E10BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10B8u;
            // 0x1e10bc: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e10b8) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E10C0u;
label_1e10c0:
    // 0x1e10c0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e10c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e10c4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E10C4u;
    {
        const bool branch_taken_0x1e10c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e10c4) {
            ctx->pc = 0x1E1148u;
            goto label_1e1148;
        }
    }
    ctx->pc = 0x1E10CCu;
    // 0x1e10cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e10d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e10d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e10d4: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e10d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e10d8: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e10dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e10dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e10e0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e10e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e10e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e10e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e10e8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e10e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e10ec: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E10ECu;
    SET_GPR_U32(ctx, 31, 0x1E10F4u);
    ctx->pc = 0x1E10F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E10ECu;
            // 0x1e10f0: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10F4u; }
        if (ctx->pc != 0x1E10F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E10F4u; }
        if (ctx->pc != 0x1E10F4u) { return; }
    }
    ctx->pc = 0x1E10F4u;
    // 0x1e10f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e10f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e10f8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e10fc: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e10fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1100: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1104: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1104u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e1108: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1108u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e110c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e110cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1110: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1114: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1114u;
    SET_GPR_U32(ctx, 31, 0x1E111Cu);
    ctx->pc = 0x1E1118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1114u;
            // 0x1e1118: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E111Cu; }
        if (ctx->pc != 0x1E111Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E111Cu; }
        if (ctx->pc != 0x1E111Cu) { return; }
    }
    ctx->pc = 0x1E111Cu;
    // 0x1e111c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e111cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1120: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e1120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1124: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1128: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e112c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e112cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e1130: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1134: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1138: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e113c: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E113Cu;
    SET_GPR_U32(ctx, 31, 0x1E1144u);
    ctx->pc = 0x1E1140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E113Cu;
            // 0x1e1140: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1144u; }
        if (ctx->pc != 0x1E1144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1144u; }
        if (ctx->pc != 0x1E1144u) { return; }
    }
    ctx->pc = 0x1E1144u;
    // 0x1e1144: 0x0  nop
    ctx->pc = 0x1e1144u;
    // NOP
label_1e1148:
    // 0x1e1148: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e1148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e114c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1e114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1e1150: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E1150u;
    {
        const bool branch_taken_0x1e1150 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1150) {
            ctx->pc = 0x1E11F8u;
            goto label_1e11f8;
        }
    }
    ctx->pc = 0x1E1158u;
    // 0x1e1158: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e115c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e115cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1160: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1164: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1168: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e116c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e116cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1170: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1170u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1174: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1174u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1178: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1178u;
    SET_GPR_U32(ctx, 31, 0x1E1180u);
    ctx->pc = 0x1E117Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1178u;
            // 0x1e117c: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1180u; }
        if (ctx->pc != 0x1E1180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1180u; }
        if (ctx->pc != 0x1E1180u) { return; }
    }
    ctx->pc = 0x1E1180u;
    // 0x1e1180: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1184: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e1184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1188: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e118c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1190: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e1194: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1198: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e119c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e119cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e11a0: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E11A0u;
    SET_GPR_U32(ctx, 31, 0x1E11A8u);
    ctx->pc = 0x1E11A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11A0u;
            // 0x1e11a4: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11A8u; }
        if (ctx->pc != 0x1E11A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11A8u; }
        if (ctx->pc != 0x1E11A8u) { return; }
    }
    ctx->pc = 0x1E11A8u;
    // 0x1e11a8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e11a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e11ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e11acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e11b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e11b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e11b4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e11b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e11b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e11b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e11bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e11bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e11c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e11c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e11c4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e11c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e11c8: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E11C8u;
    SET_GPR_U32(ctx, 31, 0x1E11D0u);
    ctx->pc = 0x1E11CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11C8u;
            // 0x1e11cc: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11D0u; }
        if (ctx->pc != 0x1E11D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11D0u; }
        if (ctx->pc != 0x1E11D0u) { return; }
    }
    ctx->pc = 0x1E11D0u;
    // 0x1e11d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e11d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e11d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e11d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e11d8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e11dc: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e11e0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e11e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e11e4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e11e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e11e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e11e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e11ec: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e11ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e11f0: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E11F0u;
    SET_GPR_U32(ctx, 31, 0x1E11F8u);
    ctx->pc = 0x1E11F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E11F0u;
            // 0x1e11f4: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11F8u; }
        if (ctx->pc != 0x1E11F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E11F8u; }
        if (ctx->pc != 0x1E11F8u) { return; }
    }
    ctx->pc = 0x1E11F8u;
label_1e11f8:
    // 0x1e11f8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e11f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e11fc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e1200: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E1200u;
    {
        const bool branch_taken_0x1e1200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1200) {
            ctx->pc = 0x1E1280u;
            goto label_1e1280;
        }
    }
    ctx->pc = 0x1E1208u;
    // 0x1e1208: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e120c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e120cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1210: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1214: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1218: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1218u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e121c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e121cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1220: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1220u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1224: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1228: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1228u;
    SET_GPR_U32(ctx, 31, 0x1E1230u);
    ctx->pc = 0x1E122Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1228u;
            // 0x1e122c: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1230u; }
        if (ctx->pc != 0x1E1230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1230u; }
        if (ctx->pc != 0x1E1230u) { return; }
    }
    ctx->pc = 0x1E1230u;
    // 0x1e1230: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1234: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1238: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e123c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1240: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1240u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e1244: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1244u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1248: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e124c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e124cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1250: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1250u;
    SET_GPR_U32(ctx, 31, 0x1E1258u);
    ctx->pc = 0x1E1254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1250u;
            // 0x1e1254: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1258u; }
        if (ctx->pc != 0x1E1258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1258u; }
        if (ctx->pc != 0x1E1258u) { return; }
    }
    ctx->pc = 0x1E1258u;
    // 0x1e1258: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e125c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1e125cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1260: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1264: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1268: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e126c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e126cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1270: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1274: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1278: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1278u;
    SET_GPR_U32(ctx, 31, 0x1E1280u);
    ctx->pc = 0x1E127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1278u;
            // 0x1e127c: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1280u; }
        if (ctx->pc != 0x1E1280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1280u; }
        if (ctx->pc != 0x1E1280u) { return; }
    }
    ctx->pc = 0x1E1280u;
label_1e1280:
    // 0x1e1280: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1284: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1e1284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1e1288: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1E1288u;
    {
        const bool branch_taken_0x1e1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e1288) {
            ctx->pc = 0x1E1330u;
            goto label_1e1330;
        }
    }
    ctx->pc = 0x1E1290u;
    // 0x1e1290: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1294: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1298: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e129c: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e12a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e12a4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e12a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e12a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e12ac: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e12acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e12b0: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E12B0u;
    SET_GPR_U32(ctx, 31, 0x1E12B8u);
    ctx->pc = 0x1E12B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12B0u;
            // 0x1e12b4: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12B8u; }
        if (ctx->pc != 0x1E12B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12B8u; }
        if (ctx->pc != 0x1E12B8u) { return; }
    }
    ctx->pc = 0x1E12B8u;
    // 0x1e12b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e12bc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e12bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e12c0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e12c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e12c4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e12c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e12c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e12cc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e12d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e12d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e12d4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e12d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e12d8: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E12D8u;
    SET_GPR_U32(ctx, 31, 0x1E12E0u);
    ctx->pc = 0x1E12DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12D8u;
            // 0x1e12dc: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12E0u; }
        if (ctx->pc != 0x1E12E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E12E0u; }
        if (ctx->pc != 0x1E12E0u) { return; }
    }
    ctx->pc = 0x1E12E0u;
    // 0x1e12e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e12e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1e12e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e12e8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e12e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e12ec: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e12ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e12f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e12f4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e12f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e12f8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e12f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e12fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e12fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1300: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1300u;
    SET_GPR_U32(ctx, 31, 0x1E1308u);
    ctx->pc = 0x1E1304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1300u;
            // 0x1e1304: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1308u; }
        if (ctx->pc != 0x1E1308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1308u; }
        if (ctx->pc != 0x1E1308u) { return; }
    }
    ctx->pc = 0x1E1308u;
    // 0x1e1308: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e130c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1e130cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1310: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1e1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1314: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x1e1314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1318: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1318u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e131c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e131cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e1320: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e1320u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e1324: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1e1324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1328: 0xc07957c  jal         func_1E55F0
    ctx->pc = 0x1E1328u;
    SET_GPR_U32(ctx, 31, 0x1E1330u);
    ctx->pc = 0x1E132Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1328u;
            // 0x1e132c: 0x24460005  addiu       $a2, $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55F0u;
    if (runtime->hasFunction(0x1E55F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1330u; }
        if (ctx->pc != 0x1E1330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn8_kirai_0x1e55f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1330u; }
        if (ctx->pc != 0x1E1330u) { return; }
    }
    ctx->pc = 0x1E1330u;
label_1e1330:
    // 0x1e1330: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e1330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1334: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1e1334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e1338: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1338u;
    {
        const bool branch_taken_0x1e1338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E133Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1338u;
            // 0x1e133c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1338) {
            ctx->pc = 0x1E1348u;
            goto label_1e1348;
        }
    }
    ctx->pc = 0x1E1340u;
    // 0x1e1340: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e1340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e1344: 0x0  nop
    ctx->pc = 0x1e1344u;
    // NOP
label_1e1348:
    // 0x1e1348: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e134c: 0x284107d0  slti        $at, $v0, 0x7D0
    ctx->pc = 0x1e134cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e1350: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1350u;
    {
        const bool branch_taken_0x1e1350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1350u;
            // 0x1e1354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1350) {
            ctx->pc = 0x1E1360u;
            goto label_1e1360;
        }
    }
    ctx->pc = 0x1E1358u;
    // 0x1e1358: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e1358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e135c: 0x0  nop
    ctx->pc = 0x1e135cu;
    // NOP
label_1e1360:
    // 0x1e1360: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e1360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e1368: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x1E1368u;
    {
        const bool branch_taken_0x1e1368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1368u;
            // 0x1e136c: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1368) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1370u;
label_1e1370:
    // 0x1e1370: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e1370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1374: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1E1374u;
    {
        const bool branch_taken_0x1e1374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1374u;
            // 0x1e1378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1374) {
            ctx->pc = 0x1E1470u;
            goto label_1e1470;
        }
    }
    ctx->pc = 0x1E137Cu;
    // 0x1e137c: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1E137Cu;
    SET_GPR_U32(ctx, 31, 0x1E1384u);
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1384u; }
        if (ctx->pc != 0x1E1384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1384u; }
        if (ctx->pc != 0x1E1384u) { return; }
    }
    ctx->pc = 0x1E1384u;
    // 0x1e1384: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1E1384u;
    SET_GPR_U32(ctx, 31, 0x1E138Cu);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E138Cu; }
        if (ctx->pc != 0x1E138Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E138Cu; }
        if (ctx->pc != 0x1E138Cu) { return; }
    }
    ctx->pc = 0x1E138Cu;
    // 0x1e138c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e138cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e1390:
    // 0x1e1390: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1390u;
    SET_GPR_U32(ctx, 31, 0x1E1398u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1398u; }
        if (ctx->pc != 0x1E1398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1398u; }
        if (ctx->pc != 0x1E1398u) { return; }
    }
    ctx->pc = 0x1E1398u;
    // 0x1e1398: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1e139c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e139cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e13a0: 0x0  nop
    ctx->pc = 0x1e13a0u;
    // NOP
    // 0x1e13a4: 0x0  nop
    ctx->pc = 0x1e13a4u;
    // NOP
    // 0x1e13a8: 0x9010  mfhi        $s2
    ctx->pc = 0x1e13a8u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1e13ac: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E13ACu;
    SET_GPR_U32(ctx, 31, 0x1E13B4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13B4u; }
        if (ctx->pc != 0x1E13B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13B4u; }
        if (ctx->pc != 0x1E13B4u) { return; }
    }
    ctx->pc = 0x1E13B4u;
    // 0x1e13b4: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1e13b4u;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1e13b8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e13b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e13bc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e13bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e13c0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e13c4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e13c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e13c8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e13c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e13cc: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e13d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e13d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e13d4: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13d8: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1e13d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1e13dc: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1e13dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e13e0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e13e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e13e4: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1e13e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1e13e8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e13e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e13ec: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1E13ECu;
    SET_GPR_U32(ctx, 31, 0x1E13F4u);
    ctx->pc = 0x1E13F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E13ECu;
            // 0x1e13f0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13F4u; }
        if (ctx->pc != 0x1E13F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E13F4u; }
        if (ctx->pc != 0x1E13F4u) { return; }
    }
    ctx->pc = 0x1E13F4u;
    // 0x1e13f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e13f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e13f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e13fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e13fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1400: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e1404: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e1404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1408: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e140c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e140cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1410: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1414: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1e1414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1e1418: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1e1418u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e141c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e141cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e1420: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1e1424: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1428: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1E1428u;
    SET_GPR_U32(ctx, 31, 0x1E1430u);
    ctx->pc = 0x1E142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1428u;
            // 0x1e142c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1430u; }
        if (ctx->pc != 0x1E1430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1430u; }
        if (ctx->pc != 0x1E1430u) { return; }
    }
    ctx->pc = 0x1E1430u;
    // 0x1e1430: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e1430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e1434: 0x2a620078  slti        $v0, $s3, 0x78
    ctx->pc = 0x1e1434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1e1438: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1E1438u;
    {
        const bool branch_taken_0x1e1438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E143Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1438u;
            // 0x1e143c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1438) {
            ctx->pc = 0x1E1390u;
            goto label_1e1390;
        }
    }
    ctx->pc = 0x1E1440u;
    // 0x1e1440: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1440u;
    SET_GPR_U32(ctx, 31, 0x1E1448u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1448u; }
        if (ctx->pc != 0x1E1448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1448u; }
        if (ctx->pc != 0x1E1448u) { return; }
    }
    ctx->pc = 0x1E1448u;
    // 0x1e1448: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1448u;
    SET_GPR_U32(ctx, 31, 0x1E1450u);
    ctx->pc = 0x1E144Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1448u;
            // 0x1e144c: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1450u; }
        if (ctx->pc != 0x1E1450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1450u; }
        if (ctx->pc != 0x1E1450u) { return; }
    }
    ctx->pc = 0x1E1450u;
    // 0x1e1450: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1450u;
    SET_GPR_U32(ctx, 31, 0x1E1458u);
    ctx->pc = 0x1E1454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1450u;
            // 0x1e1454: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1458u; }
        if (ctx->pc != 0x1E1458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1458u; }
        if (ctx->pc != 0x1E1458u) { return; }
    }
    ctx->pc = 0x1E1458u;
    // 0x1e1458: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1458u;
    SET_GPR_U32(ctx, 31, 0x1E1460u);
    ctx->pc = 0x1E145Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1458u;
            // 0x1e145c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1460u; }
        if (ctx->pc != 0x1E1460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1460u; }
        if (ctx->pc != 0x1E1460u) { return; }
    }
    ctx->pc = 0x1E1460u;
    // 0x1e1460: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1460u;
    SET_GPR_U32(ctx, 31, 0x1E1468u);
    ctx->pc = 0x1E1464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1460u;
            // 0x1e1464: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1468u; }
        if (ctx->pc != 0x1E1468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1468u; }
        if (ctx->pc != 0x1E1468u) { return; }
    }
    ctx->pc = 0x1E1468u;
    // 0x1e1468: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1468u;
    SET_GPR_U32(ctx, 31, 0x1E1470u);
    ctx->pc = 0x1E146Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1468u;
            // 0x1e146c: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1470u; }
        if (ctx->pc != 0x1E1470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1470u; }
        if (ctx->pc != 0x1E1470u) { return; }
    }
    ctx->pc = 0x1E1470u;
label_1e1470:
    // 0x1e1470: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1e1470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e1474: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e1478: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1478u;
    {
        const bool branch_taken_0x1e1478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E147Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1478u;
            // 0x1e147c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1478) {
            ctx->pc = 0x1E1488u;
            goto label_1e1488;
        }
    }
    ctx->pc = 0x1E1480u;
    // 0x1e1480: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e1480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e1484: 0x0  nop
    ctx->pc = 0x1e1484u;
    // NOP
label_1e1488:
    // 0x1e1488: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x1e1488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x1e148c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e148cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e1490: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x1E1490u;
    {
        const bool branch_taken_0x1e1490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1490u;
            // 0x1e1494: 0xae020114  sw          $v0, 0x114($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1490) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1498u;
label_1e1498:
    // 0x1e1498: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E1498u;
    SET_GPR_U32(ctx, 31, 0x1E14A0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A0u; }
        if (ctx->pc != 0x1E14A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14A0u; }
        if (ctx->pc != 0x1E14A0u) { return; }
    }
    ctx->pc = 0x1E14A0u;
    // 0x1e14a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e14a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e14a4: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E14A4u;
    {
        const bool branch_taken_0x1e14a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e14a4) {
            ctx->pc = 0x1E1568u;
            goto label_1e1568;
        }
    }
    ctx->pc = 0x1E14ACu;
    // 0x1e14ac: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e14b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e14b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e14b4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e14b4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e14b8: 0x0  nop
    ctx->pc = 0x1e14b8u;
    // NOP
    // 0x1e14bc: 0x0  nop
    ctx->pc = 0x1e14bcu;
    // NOP
    // 0x1e14c0: 0x1010  mfhi        $v0
    ctx->pc = 0x1e14c0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e14c4: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E14C4u;
    {
        const bool branch_taken_0x1e14c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14c4) {
            ctx->pc = 0x1E1568u;
            goto label_1e1568;
        }
    }
    ctx->pc = 0x1E14CCu;
    // 0x1e14cc: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E14CCu;
    SET_GPR_U32(ctx, 31, 0x1E14D4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D4u; }
        if (ctx->pc != 0x1E14D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14D4u; }
        if (ctx->pc != 0x1E14D4u) { return; }
    }
    ctx->pc = 0x1E14D4u;
    // 0x1e14d4: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e14d4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e14d8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e14dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e14e0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e14e4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e14e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e14e8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1E14E8u;
    SET_GPR_U32(ctx, 31, 0x1E14F0u);
    ctx->pc = 0x1E14ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E14E8u;
            // 0x1e14ec: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F0u; }
        if (ctx->pc != 0x1E14F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F0u; }
        if (ctx->pc != 0x1E14F0u) { return; }
    }
    ctx->pc = 0x1E14F0u;
    // 0x1e14f0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E14F0u;
    SET_GPR_U32(ctx, 31, 0x1E14F8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F8u; }
        if (ctx->pc != 0x1E14F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E14F8u; }
        if (ctx->pc != 0x1E14F8u) { return; }
    }
    ctx->pc = 0x1E14F8u;
    // 0x1e14f8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e14f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e14fc: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e14fcu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e1500: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1504: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e1504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1508: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1e150c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e150cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e1510: 0xc06532c  jal         func_194CB0
    ctx->pc = 0x1E1510u;
    SET_GPR_U32(ctx, 31, 0x1E1518u);
    ctx->pc = 0x1E1514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1510u;
            // 0x1e1514: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1518u; }
        if (ctx->pc != 0x1E1518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1518u; }
        if (ctx->pc != 0x1E1518u) { return; }
    }
    ctx->pc = 0x1E1518u;
    // 0x1e1518: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1518u;
    SET_GPR_U32(ctx, 31, 0x1E1520u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1520u; }
        if (ctx->pc != 0x1E1520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1520u; }
        if (ctx->pc != 0x1E1520u) { return; }
    }
    ctx->pc = 0x1E1520u;
    // 0x1e1520: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e1520u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e1524: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e152c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e152cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1530: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e1530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e1534: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1E1534u;
    SET_GPR_U32(ctx, 31, 0x1E153Cu);
    ctx->pc = 0x1E1538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1534u;
            // 0x1e1538: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E153Cu; }
        if (ctx->pc != 0x1E153Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E153Cu; }
        if (ctx->pc != 0x1E153Cu) { return; }
    }
    ctx->pc = 0x1E153Cu;
    // 0x1e153c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E153Cu;
    SET_GPR_U32(ctx, 31, 0x1E1544u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1544u; }
        if (ctx->pc != 0x1E1544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1544u; }
        if (ctx->pc != 0x1E1544u) { return; }
    }
    ctx->pc = 0x1E1544u;
    // 0x1e1544: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1548: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e1548u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e154c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1550: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e1550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1554: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1e1554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1e1558: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e155c: 0xc06534c  jal         func_194D30
    ctx->pc = 0x1E155Cu;
    SET_GPR_U32(ctx, 31, 0x1E1564u);
    ctx->pc = 0x1E1560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E155Cu;
            // 0x1e1560: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1564u; }
        if (ctx->pc != 0x1E1564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1564u; }
        if (ctx->pc != 0x1E1564u) { return; }
    }
    ctx->pc = 0x1E1564u;
    // 0x1e1564: 0x0  nop
    ctx->pc = 0x1e1564u;
    // NOP
label_1e1568:
    // 0x1e1568: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E1568u;
    SET_GPR_U32(ctx, 31, 0x1E1570u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1570u; }
        if (ctx->pc != 0x1E1570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1570u; }
        if (ctx->pc != 0x1E1570u) { return; }
    }
    ctx->pc = 0x1E1570u;
    // 0x1e1570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1574: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1E1574u;
    {
        const bool branch_taken_0x1e1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e1574) {
            ctx->pc = 0x1E1638u;
            goto label_1e1638;
        }
    }
    ctx->pc = 0x1E157Cu;
    // 0x1e157c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1580: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1580u;
    {
        const bool branch_taken_0x1e1580 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1580u;
            // 0x1e1584: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)3u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1580) {
            ctx->pc = 0x1E1594u;
            goto label_1e1594;
        }
    }
    ctx->pc = 0x1E1588u;
    // 0x1e1588: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E1588u;
    {
        const bool branch_taken_0x1e1588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1588) {
            ctx->pc = 0x1E1594u;
            goto label_1e1594;
        }
    }
    ctx->pc = 0x1E1590u;
    // 0x1e1590: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1e1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_1e1594:
    // 0x1e1594: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1E1594u;
    {
        const bool branch_taken_0x1e1594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1594) {
            ctx->pc = 0x1E1638u;
            goto label_1e1638;
        }
    }
    ctx->pc = 0x1E159Cu;
    // 0x1e159c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E159Cu;
    SET_GPR_U32(ctx, 31, 0x1E15A4u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15A4u; }
        if (ctx->pc != 0x1E15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15A4u; }
        if (ctx->pc != 0x1E15A4u) { return; }
    }
    ctx->pc = 0x1E15A4u;
    // 0x1e15a4: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e15a4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e15a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e15a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e15ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e15acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e15b0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e15b4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e15b8: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1E15B8u;
    SET_GPR_U32(ctx, 31, 0x1E15C0u);
    ctx->pc = 0x1E15BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15B8u;
            // 0x1e15bc: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C0u; }
        if (ctx->pc != 0x1E15C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C0u; }
        if (ctx->pc != 0x1E15C0u) { return; }
    }
    ctx->pc = 0x1E15C0u;
    // 0x1e15c0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E15C0u;
    SET_GPR_U32(ctx, 31, 0x1E15C8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C8u; }
        if (ctx->pc != 0x1E15C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15C8u; }
        if (ctx->pc != 0x1E15C8u) { return; }
    }
    ctx->pc = 0x1E15C8u;
    // 0x1e15c8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e15cc: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e15ccu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e15d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e15d4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e15d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e15d8: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1e15d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1e15dc: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e15dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e15e0: 0xc06532c  jal         func_194CB0
    ctx->pc = 0x1E15E0u;
    SET_GPR_U32(ctx, 31, 0x1E15E8u);
    ctx->pc = 0x1E15E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E15E0u;
            // 0x1e15e4: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15E8u; }
        if (ctx->pc != 0x1E15E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15E8u; }
        if (ctx->pc != 0x1E15E8u) { return; }
    }
    ctx->pc = 0x1E15E8u;
    // 0x1e15e8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E15E8u;
    SET_GPR_U32(ctx, 31, 0x1E15F0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15F0u; }
        if (ctx->pc != 0x1E15F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E15F0u; }
        if (ctx->pc != 0x1E15F0u) { return; }
    }
    ctx->pc = 0x1E15F0u;
    // 0x1e15f0: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e15f0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e15f4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e15f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e15f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e15f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e15fc: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e15fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1600: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e1600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e1604: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1E1604u;
    SET_GPR_U32(ctx, 31, 0x1E160Cu);
    ctx->pc = 0x1E1608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1604u;
            // 0x1e1608: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E160Cu; }
        if (ctx->pc != 0x1E160Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E160Cu; }
        if (ctx->pc != 0x1E160Cu) { return; }
    }
    ctx->pc = 0x1E160Cu;
    // 0x1e160c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E160Cu;
    SET_GPR_U32(ctx, 31, 0x1E1614u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1614u; }
        if (ctx->pc != 0x1E1614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1614u; }
        if (ctx->pc != 0x1E1614u) { return; }
    }
    ctx->pc = 0x1E1614u;
    // 0x1e1614: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1618: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x1e1618u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e161c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e161cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1620: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e1620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1624: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x1e1624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x1e1628: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1e1628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e162c: 0xc06534c  jal         func_194D30
    ctx->pc = 0x1E162Cu;
    SET_GPR_U32(ctx, 31, 0x1E1634u);
    ctx->pc = 0x1E1630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E162Cu;
            // 0x1e1630: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1634u; }
        if (ctx->pc != 0x1E1634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1634u; }
        if (ctx->pc != 0x1E1634u) { return; }
    }
    ctx->pc = 0x1E1634u;
    // 0x1e1634: 0x0  nop
    ctx->pc = 0x1e1634u;
    // NOP
label_1e1638:
    // 0x1e1638: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E1638u;
    SET_GPR_U32(ctx, 31, 0x1E1640u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1640u; }
        if (ctx->pc != 0x1E1640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1640u; }
        if (ctx->pc != 0x1E1640u) { return; }
    }
    ctx->pc = 0x1E1640u;
    // 0x1e1640: 0x144001c7  bnez        $v0, . + 4 + (0x1C7 << 2)
    ctx->pc = 0x1E1640u;
    {
        const bool branch_taken_0x1e1640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1640) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1648u;
    // 0x1e1648: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1e1648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e164c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1650: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x1e1650u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e1654: 0x0  nop
    ctx->pc = 0x1e1654u;
    // NOP
    // 0x1e1658: 0x0  nop
    ctx->pc = 0x1e1658u;
    // NOP
    // 0x1e165c: 0x1010  mfhi        $v0
    ctx->pc = 0x1e165cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e1660: 0x144001bf  bnez        $v0, . + 4 + (0x1BF << 2)
    ctx->pc = 0x1E1660u;
    {
        const bool branch_taken_0x1e1660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1660) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1668u;
    // 0x1e1668: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e166c: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e166cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1670: 0xc0652ec  jal         func_194BB0
    ctx->pc = 0x1E1670u;
    SET_GPR_U32(ctx, 31, 0x1E1678u);
    ctx->pc = 0x1E1674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1670u;
            // 0x1e1674: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194BB0u;
    if (runtime->hasFunction(0x194BB0u)) {
        auto targetFn = runtime->lookupFunction(0x194BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1678u; }
        if (ctx->pc != 0x1E1678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_l_0x194bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1678u; }
        if (ctx->pc != 0x1E1678u) { return; }
    }
    ctx->pc = 0x1E1678u;
    // 0x1e1678: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e1678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e167c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1680: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e1680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1684: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1e1684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1e1688: 0xc06532c  jal         func_194CB0
    ctx->pc = 0x1E1688u;
    SET_GPR_U32(ctx, 31, 0x1E1690u);
    ctx->pc = 0x1E168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1688u;
            // 0x1e168c: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194CB0u;
    if (runtime->hasFunction(0x194CB0u)) {
        auto targetFn = runtime->lookupFunction(0x194CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1690u; }
        if (ctx->pc != 0x1E1690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_l_0x194cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1690u; }
        if (ctx->pc != 0x1E1690u) { return; }
    }
    ctx->pc = 0x1E1690u;
    // 0x1e1690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1694: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e1694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1698: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1e1698u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e169c: 0xc06530c  jal         func_194C30
    ctx->pc = 0x1E169Cu;
    SET_GPR_U32(ctx, 31, 0x1E16A4u);
    ctx->pc = 0x1E16A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E169Cu;
            // 0x1e16a0: 0x24450064  addiu       $a1, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194C30u;
    if (runtime->hasFunction(0x194C30u)) {
        auto targetFn = runtime->lookupFunction(0x194C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A4u; }
        if (ctx->pc != 0x1E16A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Dekatama_rot_r_0x194c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16A4u; }
        if (ctx->pc != 0x1E16A4u) { return; }
    }
    ctx->pc = 0x1E16A4u;
    // 0x1e16a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e16a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e16ac: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x1e16acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e16b0: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1e16b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1e16b4: 0xc06534c  jal         func_194D30
    ctx->pc = 0x1E16B4u;
    SET_GPR_U32(ctx, 31, 0x1E16BCu);
    ctx->pc = 0x1E16B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16B4u;
            // 0x1e16b8: 0x2446003c  addiu       $a2, $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194D30u;
    if (runtime->hasFunction(0x194D30u)) {
        auto targetFn = runtime->lookupFunction(0x194D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16BCu; }
        if (ctx->pc != 0x1E16BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Baramaki_rot_r_0x194d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16BCu; }
        if (ctx->pc != 0x1E16BCu) { return; }
    }
    ctx->pc = 0x1E16BCu;
    // 0x1e16bc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1E16BCu;
    {
        const bool branch_taken_0x1e16bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e16bc) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E16C4u;
    // 0x1e16c4: 0x0  nop
    ctx->pc = 0x1e16c4u;
    // NOP
label_1e16c8:
    // 0x1e16c8: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1E16C8u;
    SET_GPR_U32(ctx, 31, 0x1E16D0u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D0u; }
        if (ctx->pc != 0x1E16D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D0u; }
        if (ctx->pc != 0x1E16D0u) { return; }
    }
    ctx->pc = 0x1E16D0u;
    // 0x1e16d0: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1E16D0u;
    SET_GPR_U32(ctx, 31, 0x1E16D8u);
    ctx->pc = 0x1E16D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16D0u;
            // 0x1e16d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D8u; }
        if (ctx->pc != 0x1E16D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16D8u; }
        if (ctx->pc != 0x1E16D8u) { return; }
    }
    ctx->pc = 0x1E16D8u;
    // 0x1e16d8: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1E16D8u;
    SET_GPR_U32(ctx, 31, 0x1E16E0u);
    ctx->pc = 0x1E16DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E16D8u;
            // 0x1e16dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E0u; }
        if (ctx->pc != 0x1E16E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E16E0u; }
        if (ctx->pc != 0x1E16E0u) { return; }
    }
    ctx->pc = 0x1E16E0u;
    // 0x1e16e0: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e16e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e16e4: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x1e16e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x1e16e8: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x1e16e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57672u)));
    // 0x1e16ec: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1e16ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1e16f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e16f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e16f4: 0x0  nop
    ctx->pc = 0x1e16f4u;
    // NOP
    // 0x1e16f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e16f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e16fc: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x1e16fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x1e1700: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e1704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e1708: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x1e170c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1710: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1e1710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1714: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1e1714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e1718: 0xc07891c  jal         func_1E2470
    ctx->pc = 0x1E1718u;
    SET_GPR_U32(ctx, 31, 0x1E1720u);
    ctx->pc = 0x1E171Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1718u;
            // 0x1e171c: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2470u;
    if (runtime->hasFunction(0x1E2470u)) {
        auto targetFn = runtime->lookupFunction(0x1E2470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1720u; }
        if (ctx->pc != 0x1E1720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1e2470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1720u; }
        if (ctx->pc != 0x1E1720u) { return; }
    }
    ctx->pc = 0x1E1720u;
    // 0x1e1720: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1e1720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1724: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e1724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1728: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x1e1728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1e172c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e172cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1730: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1e1730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1e1734: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1738: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e1738u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e173c: 0x0  nop
    ctx->pc = 0x1e173cu;
    // NOP
    // 0x1e1740: 0x0  nop
    ctx->pc = 0x1e1740u;
    // NOP
    // 0x1e1744: 0x1010  mfhi        $v0
    ctx->pc = 0x1e1744u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e1748: 0x14400089  bnez        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1E1748u;
    {
        const bool branch_taken_0x1e1748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1748) {
            ctx->pc = 0x1E1970u;
            goto label_1e1970;
        }
    }
    ctx->pc = 0x1E1750u;
    // 0x1e1750: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1750u;
    SET_GPR_U32(ctx, 31, 0x1E1758u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1758u; }
        if (ctx->pc != 0x1E1758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1758u; }
        if (ctx->pc != 0x1E1758u) { return; }
    }
    ctx->pc = 0x1E1758u;
    // 0x1e1758: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1e1758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1e175c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e175cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e1760: 0x0  nop
    ctx->pc = 0x1e1760u;
    // NOP
    // 0x1e1764: 0x0  nop
    ctx->pc = 0x1e1764u;
    // NOP
    // 0x1e1768: 0x9010  mfhi        $s2
    ctx->pc = 0x1e1768u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1e176c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E176Cu;
    SET_GPR_U32(ctx, 31, 0x1E1774u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1774u; }
        if (ctx->pc != 0x1E1774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1774u; }
        if (ctx->pc != 0x1E1774u) { return; }
    }
    ctx->pc = 0x1E1774u;
    // 0x1e1774: 0x240300c8  addiu       $v1, $zero, 0xC8
    ctx->pc = 0x1e1774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1e1778: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e1778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e177c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e177cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e1780: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e1780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1784: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1788: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e1788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e178c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e178cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e1790: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e1790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1794: 0x8810  mfhi        $s1
    ctx->pc = 0x1e1794u;
    SET_GPR_U64(ctx, 17, ctx->hi);
    // 0x1e1798: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e1798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e179c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e179cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e17a0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e17a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e17a4: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1e17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x1e17a8: 0x2465ffe7  addiu       $a1, $v1, -0x19
    ctx->pc = 0x1e17a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
    // 0x1e17ac: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1e17acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1e17b0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1E17B0u;
    SET_GPR_U32(ctx, 31, 0x1E17B8u);
    ctx->pc = 0x1E17B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17B0u;
            // 0x1e17b4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17B8u; }
        if (ctx->pc != 0x1E17B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17B8u; }
        if (ctx->pc != 0x1E17B8u) { return; }
    }
    ctx->pc = 0x1E17B8u;
    // 0x1e17b8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e17b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e17bc: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e17bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e17c0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e17c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e17c4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1e17c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e17c8: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e17c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e17cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e17d0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e17d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e17d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e17d8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e17d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e17dc: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e17dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e17e0: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e17e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e17e4: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1e17e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1e17e8: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e17e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e17ec: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1E17ECu;
    SET_GPR_U32(ctx, 31, 0x1E17F4u);
    ctx->pc = 0x1E17F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E17ECu;
            // 0x1e17f0: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17F4u; }
        if (ctx->pc != 0x1E17F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E17F4u; }
        if (ctx->pc != 0x1E17F4u) { return; }
    }
    ctx->pc = 0x1E17F4u;
    // 0x1e17f4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e17f8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1e17f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e17fc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e17fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1800: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x1e1800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e1804: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e1804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1808: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e180c: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e180cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e1810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e1810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1814: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1818: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x1e1818u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1e181c: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e181cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e1820: 0x24620064  addiu       $v0, $v1, 0x64
    ctx->pc = 0x1e1820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1e1824: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e1824u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1828: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1E1828u;
    SET_GPR_U32(ctx, 31, 0x1E1830u);
    ctx->pc = 0x1E182Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1828u;
            // 0x1e182c: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1830u; }
        if (ctx->pc != 0x1E1830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1830u; }
        if (ctx->pc != 0x1E1830u) { return; }
    }
    ctx->pc = 0x1E1830u;
    // 0x1e1830: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e1830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e1834: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1e1834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1e1838: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e1838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e183c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e183cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e1840: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1e1840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1e1844: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1e1844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1e1848: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e1848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e184c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e184cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1850: 0x0  nop
    ctx->pc = 0x1e1850u;
    // NOP
    // 0x1e1854: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e1854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e1858: 0xc05d080  jal         func_174200
    ctx->pc = 0x1E1858u;
    SET_GPR_U32(ctx, 31, 0x1E1860u);
    ctx->pc = 0x1E185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1858u;
            // 0x1e185c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1860u; }
        if (ctx->pc != 0x1E1860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1860u; }
        if (ctx->pc != 0x1E1860u) { return; }
    }
    ctx->pc = 0x1E1860u;
    // 0x1e1860: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1860u;
    SET_GPR_U32(ctx, 31, 0x1E1868u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1868u; }
        if (ctx->pc != 0x1E1868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1868u; }
        if (ctx->pc != 0x1E1868u) { return; }
    }
    ctx->pc = 0x1E1868u;
    // 0x1e1868: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e1868u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e186c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E186Cu;
    {
        const bool branch_taken_0x1e186c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e186c) {
            ctx->pc = 0x1E18A8u;
            goto label_1e18a8;
        }
    }
    ctx->pc = 0x1E1874u;
    // 0x1e1874: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e1874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e1878: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1e1878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1e187c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e187cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e1880: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e1880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e1884: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1e1884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1e1888: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1e1888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1e188c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e188cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1894: 0x0  nop
    ctx->pc = 0x1e1894u;
    // NOP
    // 0x1e1898: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e1898u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e189c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1E189Cu;
    SET_GPR_U32(ctx, 31, 0x1E18A4u);
    ctx->pc = 0x1E18A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E189Cu;
            // 0x1e18a0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18A4u; }
        if (ctx->pc != 0x1E18A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18A4u; }
        if (ctx->pc != 0x1E18A4u) { return; }
    }
    ctx->pc = 0x1E18A4u;
    // 0x1e18a4: 0x0  nop
    ctx->pc = 0x1e18a4u;
    // NOP
label_1e18a8:
    // 0x1e18a8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E18A8u;
    SET_GPR_U32(ctx, 31, 0x1E18B0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18B0u; }
        if (ctx->pc != 0x1E18B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18B0u; }
        if (ctx->pc != 0x1E18B0u) { return; }
    }
    ctx->pc = 0x1E18B0u;
    // 0x1e18b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e18b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1e18b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E18B4u;
    {
        const bool branch_taken_0x1e18b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e18b4) {
            ctx->pc = 0x1E18F0u;
            goto label_1e18f0;
        }
    }
    ctx->pc = 0x1E18BCu;
    // 0x1e18bc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e18bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e18c0: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1e18c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1e18c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1e18c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e18c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1e18c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1e18cc: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1e18d0: 0x2442ffe7  addiu       $v0, $v0, -0x19
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967271));
    // 0x1e18d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e18d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e18d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e18d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e18dc: 0x0  nop
    ctx->pc = 0x1e18dcu;
    // NOP
    // 0x1e18e0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1e18e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e18e4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1E18E4u;
    SET_GPR_U32(ctx, 31, 0x1E18ECu);
    ctx->pc = 0x1E18E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18E4u;
            // 0x1e18e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18ECu; }
        if (ctx->pc != 0x1E18ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E18ECu; }
        if (ctx->pc != 0x1E18ECu) { return; }
    }
    ctx->pc = 0x1E18ECu;
    // 0x1e18ec: 0x0  nop
    ctx->pc = 0x1e18ecu;
    // NOP
label_1e18f0:
    // 0x1e18f0: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1e18f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e18f4: 0x2841005a  slti        $at, $v0, 0x5A
    ctx->pc = 0x1e18f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)90) ? 1 : 0);
    // 0x1e18f8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E18F8u;
    {
        const bool branch_taken_0x1e18f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E18FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E18F8u;
            // 0x1e18fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e18f8) {
            ctx->pc = 0x1E1970u;
            goto label_1e1970;
        }
    }
    ctx->pc = 0x1E1900u;
    // 0x1e1900: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1900u;
    SET_GPR_U32(ctx, 31, 0x1E1908u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1908u; }
        if (ctx->pc != 0x1E1908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1908u; }
        if (ctx->pc != 0x1E1908u) { return; }
    }
    ctx->pc = 0x1E1908u;
    // 0x1e1908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1908u;
    {
        const bool branch_taken_0x1e1908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1908) {
            ctx->pc = 0x1E1938u;
            goto label_1e1938;
        }
    }
    ctx->pc = 0x1E1910u;
    // 0x1e1910: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1910u;
    SET_GPR_U32(ctx, 31, 0x1E1918u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1918u; }
        if (ctx->pc != 0x1E1918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1918u; }
        if (ctx->pc != 0x1E1918u) { return; }
    }
    ctx->pc = 0x1E1918u;
    // 0x1e1918: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e1918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e191c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e191cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e1920: 0x0  nop
    ctx->pc = 0x1e1920u;
    // NOP
    // 0x1e1924: 0x0  nop
    ctx->pc = 0x1e1924u;
    // NOP
    // 0x1e1928: 0x2810  mfhi        $a1
    ctx->pc = 0x1e1928u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e192c: 0xc055124  jal         func_154490
    ctx->pc = 0x1E192Cu;
    SET_GPR_U32(ctx, 31, 0x1E1934u);
    ctx->pc = 0x1E1930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E192Cu;
            // 0x1e1930: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1934u; }
        if (ctx->pc != 0x1E1934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1934u; }
        if (ctx->pc != 0x1E1934u) { return; }
    }
    ctx->pc = 0x1E1934u;
    // 0x1e1934: 0x0  nop
    ctx->pc = 0x1e1934u;
    // NOP
label_1e1938:
    // 0x1e1938: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1938u;
    SET_GPR_U32(ctx, 31, 0x1E1940u);
    ctx->pc = 0x1E193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1938u;
            // 0x1e193c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1940u; }
        if (ctx->pc != 0x1E1940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1940u; }
        if (ctx->pc != 0x1E1940u) { return; }
    }
    ctx->pc = 0x1E1940u;
    // 0x1e1940: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1940u;
    {
        const bool branch_taken_0x1e1940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1940) {
            ctx->pc = 0x1E1970u;
            goto label_1e1970;
        }
    }
    ctx->pc = 0x1E1948u;
    // 0x1e1948: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1948u;
    SET_GPR_U32(ctx, 31, 0x1E1950u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1950u; }
        if (ctx->pc != 0x1E1950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1950u; }
        if (ctx->pc != 0x1E1950u) { return; }
    }
    ctx->pc = 0x1E1950u;
    // 0x1e1950: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1e1950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e1954: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e1954u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e1958: 0x0  nop
    ctx->pc = 0x1e1958u;
    // NOP
    // 0x1e195c: 0x0  nop
    ctx->pc = 0x1e195cu;
    // NOP
    // 0x1e1960: 0x2810  mfhi        $a1
    ctx->pc = 0x1e1960u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e1964: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1964u;
    SET_GPR_U32(ctx, 31, 0x1E196Cu);
    ctx->pc = 0x1E1968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1964u;
            // 0x1e1968: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E196Cu; }
        if (ctx->pc != 0x1E196Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E196Cu; }
        if (ctx->pc != 0x1E196Cu) { return; }
    }
    ctx->pc = 0x1E196Cu;
    // 0x1e196c: 0x0  nop
    ctx->pc = 0x1e196cu;
    // NOP
label_1e1970:
    // 0x1e1970: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e1970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e1974: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1e1974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1e1978: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1978u;
    {
        const bool branch_taken_0x1e1978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1978u;
            // 0x1e197c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1978) {
            ctx->pc = 0x1E19C0u;
            goto label_1e19c0;
        }
    }
    ctx->pc = 0x1E1980u;
    // 0x1e1980: 0xc060718  jal         func_181C60
    ctx->pc = 0x1E1980u;
    SET_GPR_U32(ctx, 31, 0x1E1988u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1988u; }
        if (ctx->pc != 0x1E1988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1988u; }
        if (ctx->pc != 0x1E1988u) { return; }
    }
    ctx->pc = 0x1E1988u;
    // 0x1e1988: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1988u;
    SET_GPR_U32(ctx, 31, 0x1E1990u);
    ctx->pc = 0x1E198Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1988u;
            // 0x1e198c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1990u; }
        if (ctx->pc != 0x1E1990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1990u; }
        if (ctx->pc != 0x1E1990u) { return; }
    }
    ctx->pc = 0x1E1990u;
    // 0x1e1990: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1990u;
    SET_GPR_U32(ctx, 31, 0x1E1998u);
    ctx->pc = 0x1E1994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1990u;
            // 0x1e1994: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1998u; }
        if (ctx->pc != 0x1E1998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1998u; }
        if (ctx->pc != 0x1E1998u) { return; }
    }
    ctx->pc = 0x1E1998u;
    // 0x1e1998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1998u;
    {
        const bool branch_taken_0x1e1998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1998u;
            // 0x1e199c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1998) {
            ctx->pc = 0x1E19A8u;
            goto label_1e19a8;
        }
    }
    ctx->pc = 0x1E19A0u;
    // 0x1e19a0: 0xc055124  jal         func_154490
    ctx->pc = 0x1E19A0u;
    SET_GPR_U32(ctx, 31, 0x1E19A8u);
    ctx->pc = 0x1E19A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19A0u;
            // 0x1e19a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19A8u; }
        if (ctx->pc != 0x1E19A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19A8u; }
        if (ctx->pc != 0x1E19A8u) { return; }
    }
    ctx->pc = 0x1E19A8u;
label_1e19a8:
    // 0x1e19a8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E19A8u;
    SET_GPR_U32(ctx, 31, 0x1E19B0u);
    ctx->pc = 0x1E19ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19A8u;
            // 0x1e19ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19B0u; }
        if (ctx->pc != 0x1E19B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19B0u; }
        if (ctx->pc != 0x1E19B0u) { return; }
    }
    ctx->pc = 0x1E19B0u;
    // 0x1e19b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E19B0u;
    {
        const bool branch_taken_0x1e19b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19B0u;
            // 0x1e19b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19b0) {
            ctx->pc = 0x1E19C0u;
            goto label_1e19c0;
        }
    }
    ctx->pc = 0x1E19B8u;
    // 0x1e19b8: 0xc055124  jal         func_154490
    ctx->pc = 0x1E19B8u;
    SET_GPR_U32(ctx, 31, 0x1E19C0u);
    ctx->pc = 0x1E19BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19B8u;
            // 0x1e19bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19C0u; }
        if (ctx->pc != 0x1E19C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19C0u; }
        if (ctx->pc != 0x1E19C0u) { return; }
    }
    ctx->pc = 0x1E19C0u;
label_1e19c0:
    // 0x1e19c0: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e19c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e19c4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1e19c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1e19c8: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E19C8u;
    {
        const bool branch_taken_0x1e19c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E19CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E19C8u;
            // 0x1e19cc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e19c8) {
            ctx->pc = 0x1E1A40u;
            goto label_1e1a40;
        }
    }
    ctx->pc = 0x1E19D0u;
    // 0x1e19d0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1E19D0u;
    SET_GPR_U32(ctx, 31, 0x1E19D8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19D8u; }
        if (ctx->pc != 0x1E19D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E19D8u; }
        if (ctx->pc != 0x1E19D8u) { return; }
    }
    ctx->pc = 0x1E19D8u;
    // 0x1e19d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e19dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1e19dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1e19e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e19e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e19e4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1e19e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e19e8: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1e19e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e19ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e19ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e19f0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e19f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e19f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e19f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e19f8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1e19f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e19fc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e19fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e1a00: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1E1A00u;
    SET_GPR_U32(ctx, 31, 0x1E1A08u);
    ctx->pc = 0x1E1A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A00u;
            // 0x1e1a04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A08u; }
        if (ctx->pc != 0x1E1A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A08u; }
        if (ctx->pc != 0x1E1A08u) { return; }
    }
    ctx->pc = 0x1E1A08u;
    // 0x1e1a08: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1A08u;
    SET_GPR_U32(ctx, 31, 0x1E1A10u);
    ctx->pc = 0x1E1A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A08u;
            // 0x1e1a0c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A10u; }
        if (ctx->pc != 0x1E1A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A10u; }
        if (ctx->pc != 0x1E1A10u) { return; }
    }
    ctx->pc = 0x1E1A10u;
    // 0x1e1a10: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1A10u;
    SET_GPR_U32(ctx, 31, 0x1E1A18u);
    ctx->pc = 0x1E1A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A10u;
            // 0x1e1a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A18u; }
        if (ctx->pc != 0x1E1A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A18u; }
        if (ctx->pc != 0x1E1A18u) { return; }
    }
    ctx->pc = 0x1E1A18u;
    // 0x1e1a18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A18u;
    {
        const bool branch_taken_0x1e1a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A18u;
            // 0x1e1a1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a18) {
            ctx->pc = 0x1E1A28u;
            goto label_1e1a28;
        }
    }
    ctx->pc = 0x1E1A20u;
    // 0x1e1a20: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1A20u;
    SET_GPR_U32(ctx, 31, 0x1E1A28u);
    ctx->pc = 0x1E1A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A20u;
            // 0x1e1a24: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A28u; }
        if (ctx->pc != 0x1E1A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A28u; }
        if (ctx->pc != 0x1E1A28u) { return; }
    }
    ctx->pc = 0x1E1A28u;
label_1e1a28:
    // 0x1e1a28: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1A28u;
    SET_GPR_U32(ctx, 31, 0x1E1A30u);
    ctx->pc = 0x1E1A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A28u;
            // 0x1e1a2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A30u; }
        if (ctx->pc != 0x1E1A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A30u; }
        if (ctx->pc != 0x1E1A30u) { return; }
    }
    ctx->pc = 0x1E1A30u;
    // 0x1e1a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A30u;
    {
        const bool branch_taken_0x1e1a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A30u;
            // 0x1e1a34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a30) {
            ctx->pc = 0x1E1A40u;
            goto label_1e1a40;
        }
    }
    ctx->pc = 0x1E1A38u;
    // 0x1e1a38: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1A38u;
    SET_GPR_U32(ctx, 31, 0x1E1A40u);
    ctx->pc = 0x1E1A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A38u;
            // 0x1e1a3c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A40u; }
        if (ctx->pc != 0x1E1A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A40u; }
        if (ctx->pc != 0x1E1A40u) { return; }
    }
    ctx->pc = 0x1E1A40u;
label_1e1a40:
    // 0x1e1a40: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e1a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e1a44: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x1e1a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1e1a48: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E1A48u;
    {
        const bool branch_taken_0x1e1a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A48u;
            // 0x1e1a4c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a48) {
            ctx->pc = 0x1E1A90u;
            goto label_1e1a90;
        }
    }
    ctx->pc = 0x1E1A50u;
    // 0x1e1a50: 0xc060718  jal         func_181C60
    ctx->pc = 0x1E1A50u;
    SET_GPR_U32(ctx, 31, 0x1E1A58u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A58u; }
        if (ctx->pc != 0x1E1A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A58u; }
        if (ctx->pc != 0x1E1A58u) { return; }
    }
    ctx->pc = 0x1E1A58u;
    // 0x1e1a58: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1A58u;
    SET_GPR_U32(ctx, 31, 0x1E1A60u);
    ctx->pc = 0x1E1A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A58u;
            // 0x1e1a5c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A60u; }
        if (ctx->pc != 0x1E1A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A60u; }
        if (ctx->pc != 0x1E1A60u) { return; }
    }
    ctx->pc = 0x1E1A60u;
    // 0x1e1a60: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1A60u;
    SET_GPR_U32(ctx, 31, 0x1E1A68u);
    ctx->pc = 0x1E1A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A60u;
            // 0x1e1a64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A68u; }
        if (ctx->pc != 0x1E1A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A68u; }
        if (ctx->pc != 0x1E1A68u) { return; }
    }
    ctx->pc = 0x1E1A68u;
    // 0x1e1a68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A68u;
    {
        const bool branch_taken_0x1e1a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A68u;
            // 0x1e1a6c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a68) {
            ctx->pc = 0x1E1A78u;
            goto label_1e1a78;
        }
    }
    ctx->pc = 0x1E1A70u;
    // 0x1e1a70: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1A70u;
    SET_GPR_U32(ctx, 31, 0x1E1A78u);
    ctx->pc = 0x1E1A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A70u;
            // 0x1e1a74: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A78u; }
        if (ctx->pc != 0x1E1A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A78u; }
        if (ctx->pc != 0x1E1A78u) { return; }
    }
    ctx->pc = 0x1E1A78u;
label_1e1a78:
    // 0x1e1a78: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1A78u;
    SET_GPR_U32(ctx, 31, 0x1E1A80u);
    ctx->pc = 0x1E1A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A78u;
            // 0x1e1a7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A80u; }
        if (ctx->pc != 0x1E1A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A80u; }
        if (ctx->pc != 0x1E1A80u) { return; }
    }
    ctx->pc = 0x1E1A80u;
    // 0x1e1a80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1A80u;
    {
        const bool branch_taken_0x1e1a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A80u;
            // 0x1e1a84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a80) {
            ctx->pc = 0x1E1A90u;
            goto label_1e1a90;
        }
    }
    ctx->pc = 0x1E1A88u;
    // 0x1e1a88: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1A88u;
    SET_GPR_U32(ctx, 31, 0x1E1A90u);
    ctx->pc = 0x1E1A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A88u;
            // 0x1e1a8c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A90u; }
        if (ctx->pc != 0x1E1A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1A90u; }
        if (ctx->pc != 0x1E1A90u) { return; }
    }
    ctx->pc = 0x1E1A90u;
label_1e1a90:
    // 0x1e1a90: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e1a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e1a94: 0x240200af  addiu       $v0, $zero, 0xAF
    ctx->pc = 0x1e1a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 175));
    // 0x1e1a98: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E1A98u;
    {
        const bool branch_taken_0x1e1a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1A98u;
            // 0x1e1a9c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1a98) {
            ctx->pc = 0x1E1B10u;
            goto label_1e1b10;
        }
    }
    ctx->pc = 0x1E1AA0u;
    // 0x1e1aa0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1E1AA0u;
    SET_GPR_U32(ctx, 31, 0x1E1AA8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AA8u; }
        if (ctx->pc != 0x1E1AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AA8u; }
        if (ctx->pc != 0x1E1AA8u) { return; }
    }
    ctx->pc = 0x1E1AA8u;
    // 0x1e1aa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e1aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1aac: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1e1aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1e1ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ab4: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1e1ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e1ab8: 0xc4620120  lwc1        $f2, 0x120($v1)
    ctx->pc = 0x1e1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1abc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e1abcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e1ac0: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1e1ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e1ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e1ac8: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x1e1ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e1acc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1e1accu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1e1ad0: 0xc06fc9c  jal         func_1BF270
    ctx->pc = 0x1E1AD0u;
    SET_GPR_U32(ctx, 31, 0x1E1AD8u);
    ctx->pc = 0x1E1AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AD0u;
            // 0x1e1ad4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF270u;
    if (runtime->hasFunction(0x1BF270u)) {
        auto targetFn = runtime->lookupFunction(0x1BF270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AD8u; }
        if (ctx->pc != 0x1E1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEn_Pika_0x1bf270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AD8u; }
        if (ctx->pc != 0x1E1AD8u) { return; }
    }
    ctx->pc = 0x1E1AD8u;
    // 0x1e1ad8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1AD8u;
    SET_GPR_U32(ctx, 31, 0x1E1AE0u);
    ctx->pc = 0x1E1ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AD8u;
            // 0x1e1adc: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AE0u; }
        if (ctx->pc != 0x1E1AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AE0u; }
        if (ctx->pc != 0x1E1AE0u) { return; }
    }
    ctx->pc = 0x1E1AE0u;
    // 0x1e1ae0: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1AE0u;
    SET_GPR_U32(ctx, 31, 0x1E1AE8u);
    ctx->pc = 0x1E1AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AE0u;
            // 0x1e1ae4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AE8u; }
        if (ctx->pc != 0x1E1AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AE8u; }
        if (ctx->pc != 0x1E1AE8u) { return; }
    }
    ctx->pc = 0x1E1AE8u;
    // 0x1e1ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1AE8u;
    {
        const bool branch_taken_0x1e1ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AE8u;
            // 0x1e1aec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ae8) {
            ctx->pc = 0x1E1AF8u;
            goto label_1e1af8;
        }
    }
    ctx->pc = 0x1E1AF0u;
    // 0x1e1af0: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1AF0u;
    SET_GPR_U32(ctx, 31, 0x1E1AF8u);
    ctx->pc = 0x1E1AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AF0u;
            // 0x1e1af4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AF8u; }
        if (ctx->pc != 0x1E1AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1AF8u; }
        if (ctx->pc != 0x1E1AF8u) { return; }
    }
    ctx->pc = 0x1E1AF8u;
label_1e1af8:
    // 0x1e1af8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1E1AF8u;
    SET_GPR_U32(ctx, 31, 0x1E1B00u);
    ctx->pc = 0x1E1AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1AF8u;
            // 0x1e1afc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B00u; }
        if (ctx->pc != 0x1E1B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B00u; }
        if (ctx->pc != 0x1E1B00u) { return; }
    }
    ctx->pc = 0x1E1B00u;
    // 0x1e1b00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1B00u;
    {
        const bool branch_taken_0x1e1b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B00u;
            // 0x1e1b04: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b00) {
            ctx->pc = 0x1E1B10u;
            goto label_1e1b10;
        }
    }
    ctx->pc = 0x1E1B08u;
    // 0x1e1b08: 0xc055124  jal         func_154490
    ctx->pc = 0x1E1B08u;
    SET_GPR_U32(ctx, 31, 0x1E1B10u);
    ctx->pc = 0x1E1B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B08u;
            // 0x1e1b0c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B10u; }
        if (ctx->pc != 0x1E1B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B10u; }
        if (ctx->pc != 0x1E1B10u) { return; }
    }
    ctx->pc = 0x1E1B10u;
label_1e1b10:
    // 0x1e1b10: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x1e1b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1e1b14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e1b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e1b18: 0x286100c9  slti        $at, $v1, 0xC9
    ctx->pc = 0x1e1b18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)201) ? 1 : 0);
    // 0x1e1b1c: 0x14200090  bnez        $at, . + 4 + (0x90 << 2)
    ctx->pc = 0x1E1B1Cu;
    {
        const bool branch_taken_0x1e1b1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B1Cu;
            // 0x1e1b20: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1b1c) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1B24u;
    // 0x1e1b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1b28: 0xc060718  jal         func_181C60
    ctx->pc = 0x1E1B28u;
    SET_GPR_U32(ctx, 31, 0x1E1B30u);
    ctx->pc = 0x1E1B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B28u;
            // 0x1e1b2c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B30u; }
        if (ctx->pc != 0x1E1B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B30u; }
        if (ctx->pc != 0x1E1B30u) { return; }
    }
    ctx->pc = 0x1E1B30u;
    // 0x1e1b30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1e1b30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1b34: 0x0  nop
    ctx->pc = 0x1e1b34u;
    // NOP
label_1e1b38:
    // 0x1e1b38: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1B38u;
    SET_GPR_U32(ctx, 31, 0x1E1B40u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B40u; }
        if (ctx->pc != 0x1E1B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B40u; }
        if (ctx->pc != 0x1E1B40u) { return; }
    }
    ctx->pc = 0x1E1B40u;
    // 0x1e1b40: 0x240301c0  addiu       $v1, $zero, 0x1C0
    ctx->pc = 0x1e1b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x1e1b44: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e1b44u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e1b48: 0x0  nop
    ctx->pc = 0x1e1b48u;
    // NOP
    // 0x1e1b4c: 0x0  nop
    ctx->pc = 0x1e1b4cu;
    // NOP
    // 0x1e1b50: 0x9010  mfhi        $s2
    ctx->pc = 0x1e1b50u;
    SET_GPR_U64(ctx, 18, ctx->hi);
    // 0x1e1b54: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1E1B54u;
    SET_GPR_U32(ctx, 31, 0x1E1B5Cu);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B5Cu; }
        if (ctx->pc != 0x1E1B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B5Cu; }
        if (ctx->pc != 0x1E1B5Cu) { return; }
    }
    ctx->pc = 0x1E1B5Cu;
    // 0x1e1b5c: 0x305101ff  andi        $s1, $v0, 0x1FF
    ctx->pc = 0x1e1b5cu;
    SET_GPR_VEC(ctx, 17, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x1e1b60: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e1b64: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e1b68: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e1b6c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e1b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1b70: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e1b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1b74: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e1b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e1b78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e1b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1b7c: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1b80: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1e1b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1e1b84: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1e1b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1b88: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e1b88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e1b8c: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1e1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1e1b90: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e1b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1b94: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1E1B94u;
    SET_GPR_U32(ctx, 31, 0x1E1B9Cu);
    ctx->pc = 0x1E1B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1B94u;
            // 0x1e1b98: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B9Cu; }
        if (ctx->pc != 0x1E1B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1B9Cu; }
        if (ctx->pc != 0x1E1B9Cu) { return; }
    }
    ctx->pc = 0x1E1B9Cu;
    // 0x1e1b9c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1e1b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1e1ba0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1e1ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e1ba4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1e1ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e1ba8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1e1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1e1bac: 0xc60200d0  lwc1        $f2, 0xD0($s0)
    ctx->pc = 0x1e1bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e1bb0: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1e1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1e1bb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e1bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1bb8: 0xc60000d4  lwc1        $f0, 0xD4($s0)
    ctx->pc = 0x1e1bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1bbc: 0x248200e0  addiu       $v0, $a0, 0xE0
    ctx->pc = 0x1e1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x1e1bc0: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x1e1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1e1bc4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1e1bc4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1e1bc8: 0x246200fa  addiu       $v0, $v1, 0xFA
    ctx->pc = 0x1e1bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 250));
    // 0x1e1bcc: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1e1bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1bd0: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1E1BD0u;
    SET_GPR_U32(ctx, 31, 0x1E1BD8u);
    ctx->pc = 0x1E1BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BD0u;
            // 0x1e1bd4: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BD8u; }
        if (ctx->pc != 0x1E1BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1BD8u; }
        if (ctx->pc != 0x1E1BD8u) { return; }
    }
    ctx->pc = 0x1E1BD8u;
    // 0x1e1bd8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e1bd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e1bdc: 0x2a620078  slti        $v0, $s3, 0x78
    ctx->pc = 0x1e1bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1e1be0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1E1BE0u;
    {
        const bool branch_taken_0x1e1be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BE0u;
            // 0x1e1be4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1be0) {
            ctx->pc = 0x1E1B38u;
            goto label_1e1b38;
        }
    }
    ctx->pc = 0x1E1BE8u;
    // 0x1e1be8: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1e1be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1e1bec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bf0: 0xac222da8  sw          $v0, 0x2DA8($at)
    ctx->pc = 0x1e1bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11688), GPR_U32(ctx, 2));
    // 0x1e1bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1bf8: 0xc07b3c4  jal         func_1ECF10
    ctx->pc = 0x1E1BF8u;
    SET_GPR_U32(ctx, 31, 0x1E1C00u);
    ctx->pc = 0x1E1BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1BF8u;
            // 0x1e1bfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECF10u;
    if (runtime->hasFunction(0x1ECF10u)) {
        auto targetFn = runtime->lookupFunction(0x1ECF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C00u; }
        if (ctx->pc != 0x1E1C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateStage8TrueBoss_0x1ecf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C00u; }
        if (ctx->pc != 0x1E1C00u) { return; }
    }
    ctx->pc = 0x1E1C00u;
    // 0x1e1c00: 0xc05d004  jal         func_174010
    ctx->pc = 0x1E1C00u;
    SET_GPR_U32(ctx, 31, 0x1E1C08u);
    ctx->pc = 0x1E1C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C00u;
            // 0x1e1c04: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C08u; }
        if (ctx->pc != 0x1E1C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C08u; }
        if (ctx->pc != 0x1E1C08u) { return; }
    }
    ctx->pc = 0x1E1C08u;
    // 0x1e1c08: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1e1c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e1c0c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1e1c0cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1e1c10: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x1e1c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x1e1c14: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e1c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e1c18: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1E1C18u;
    {
        const bool branch_taken_0x1e1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C18u;
            // 0x1e1c1c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c18) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1C20u;
label_1e1c20:
    // 0x1e1c20: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c24: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x1e1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x1e1c28: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x1e1c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
    // 0x1e1c2c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e1c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1e1c30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c34: 0xac430124  sw          $v1, 0x124($v0)
    ctx->pc = 0x1e1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 3));
    // 0x1e1c38: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x1e1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x1e1c3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c40: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1e1c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1e1c44: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e1c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e1c48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c4c: 0xac400114  sw          $zero, 0x114($v0)
    ctx->pc = 0x1e1c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 0));
    // 0x1e1c50: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e1c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e1c54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c58: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x1e1c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
    // 0x1e1c5c: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e1c60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1c64: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x1e1c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
    // 0x1e1c68: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1e1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1e1c6c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1c70: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1C70u;
    {
        const bool branch_taken_0x1e1c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C70u;
            // 0x1e1c74: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c70) {
            ctx->pc = 0x1E1C80u;
            goto label_1e1c80;
        }
    }
    ctx->pc = 0x1E1C78u;
    // 0x1e1c78: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1C78u;
    SET_GPR_U32(ctx, 31, 0x1E1C80u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C80u; }
        if (ctx->pc != 0x1E1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C80u; }
        if (ctx->pc != 0x1E1C80u) { return; }
    }
    ctx->pc = 0x1E1C80u;
label_1e1c80:
    // 0x1e1c80: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e1c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1c88: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1C88u;
    {
        const bool branch_taken_0x1e1c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1C88u;
            // 0x1e1c8c: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1c88) {
            ctx->pc = 0x1E1C98u;
            goto label_1e1c98;
        }
    }
    ctx->pc = 0x1E1C90u;
    // 0x1e1c90: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1C90u;
    SET_GPR_U32(ctx, 31, 0x1E1C98u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C98u; }
        if (ctx->pc != 0x1E1C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1C98u; }
        if (ctx->pc != 0x1E1C98u) { return; }
    }
    ctx->pc = 0x1E1C98u;
label_1e1c98:
    // 0x1e1c98: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1c9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e1c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e1ca0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1CA0u;
    {
        const bool branch_taken_0x1e1ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CA0u;
            // 0x1e1ca4: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ca0) {
            ctx->pc = 0x1E1CB0u;
            goto label_1e1cb0;
        }
    }
    ctx->pc = 0x1E1CA8u;
    // 0x1e1ca8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1CA8u;
    SET_GPR_U32(ctx, 31, 0x1E1CB0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CB0u; }
        if (ctx->pc != 0x1E1CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CB0u; }
        if (ctx->pc != 0x1E1CB0u) { return; }
    }
    ctx->pc = 0x1E1CB0u;
label_1e1cb0:
    // 0x1e1cb0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1cb4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e1cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1cb8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1CB8u;
    {
        const bool branch_taken_0x1e1cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CB8u;
            // 0x1e1cbc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cb8) {
            ctx->pc = 0x1E1CC8u;
            goto label_1e1cc8;
        }
    }
    ctx->pc = 0x1E1CC0u;
    // 0x1e1cc0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1CC0u;
    SET_GPR_U32(ctx, 31, 0x1E1CC8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CC8u; }
        if (ctx->pc != 0x1E1CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CC8u; }
        if (ctx->pc != 0x1E1CC8u) { return; }
    }
    ctx->pc = 0x1E1CC8u;
label_1e1cc8:
    // 0x1e1cc8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1ccc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e1cd0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1CD0u;
    {
        const bool branch_taken_0x1e1cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CD0u;
            // 0x1e1cd4: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cd0) {
            ctx->pc = 0x1E1CE0u;
            goto label_1e1ce0;
        }
    }
    ctx->pc = 0x1E1CD8u;
    // 0x1e1cd8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1CD8u;
    SET_GPR_U32(ctx, 31, 0x1E1CE0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CE0u; }
        if (ctx->pc != 0x1E1CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CE0u; }
        if (ctx->pc != 0x1E1CE0u) { return; }
    }
    ctx->pc = 0x1E1CE0u;
label_1e1ce0:
    // 0x1e1ce0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1ce4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e1ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e1ce8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1CE8u;
    {
        const bool branch_taken_0x1e1ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1CE8u;
            // 0x1e1cec: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ce8) {
            ctx->pc = 0x1E1CF8u;
            goto label_1e1cf8;
        }
    }
    ctx->pc = 0x1E1CF0u;
    // 0x1e1cf0: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1CF0u;
    SET_GPR_U32(ctx, 31, 0x1E1CF8u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CF8u; }
        if (ctx->pc != 0x1E1CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1CF8u; }
        if (ctx->pc != 0x1E1CF8u) { return; }
    }
    ctx->pc = 0x1E1CF8u;
label_1e1cf8:
    // 0x1e1cf8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1cfc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e1d00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1D00u;
    {
        const bool branch_taken_0x1e1d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D00u;
            // 0x1e1d04: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d00) {
            ctx->pc = 0x1E1D10u;
            goto label_1e1d10;
        }
    }
    ctx->pc = 0x1E1D08u;
    // 0x1e1d08: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1D08u;
    SET_GPR_U32(ctx, 31, 0x1E1D10u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D10u; }
        if (ctx->pc != 0x1E1D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D10u; }
        if (ctx->pc != 0x1E1D10u) { return; }
    }
    ctx->pc = 0x1E1D10u;
label_1e1d10:
    // 0x1e1d10: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1d14: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1e1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1e1d18: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1D18u;
    {
        const bool branch_taken_0x1e1d18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D18u;
            // 0x1e1d1c: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d18) {
            ctx->pc = 0x1E1D28u;
            goto label_1e1d28;
        }
    }
    ctx->pc = 0x1E1D20u;
    // 0x1e1d20: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1D20u;
    SET_GPR_U32(ctx, 31, 0x1E1D28u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D28u; }
        if (ctx->pc != 0x1E1D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D28u; }
        if (ctx->pc != 0x1E1D28u) { return; }
    }
    ctx->pc = 0x1E1D28u;
label_1e1d28:
    // 0x1e1d28: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1d2c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1e1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e1d30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1D30u;
    {
        const bool branch_taken_0x1e1d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D30u;
            // 0x1e1d34: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d30) {
            ctx->pc = 0x1E1D40u;
            goto label_1e1d40;
        }
    }
    ctx->pc = 0x1E1D38u;
    // 0x1e1d38: 0xc05d110  jal         func_174440
    ctx->pc = 0x1E1D38u;
    SET_GPR_U32(ctx, 31, 0x1E1D40u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D40u; }
        if (ctx->pc != 0x1E1D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D40u; }
        if (ctx->pc != 0x1E1D40u) { return; }
    }
    ctx->pc = 0x1E1D40u;
label_1e1d40:
    // 0x1e1d40: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1d44: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e1d48: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1D48u;
    {
        const bool branch_taken_0x1e1d48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E1D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D48u;
            // 0x1e1d4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d48) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D50u;
    // 0x1e1d50: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1E1D50u;
    SET_GPR_U32(ctx, 31, 0x1E1D58u);
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D58u; }
        if (ctx->pc != 0x1E1D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D58u; }
        if (ctx->pc != 0x1E1D58u) { return; }
    }
    ctx->pc = 0x1E1D58u;
    // 0x1e1d58: 0x10000197  b           . + 4 + (0x197 << 2)
    ctx->pc = 0x1E1D58u;
    {
        const bool branch_taken_0x1e1d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d58) {
            ctx->pc = 0x1E23B8u;
            goto label_1e23b8;
        }
    }
    ctx->pc = 0x1E1D60u;
label_1e1d60:
    // 0x1e1d60: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1E1D60u;
    SET_GPR_U32(ctx, 31, 0x1E1D68u);
    ctx->pc = 0x1E1D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D60u;
            // 0x1e1d64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D68u; }
        if (ctx->pc != 0x1E1D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D68u; }
        if (ctx->pc != 0x1E1D68u) { return; }
    }
    ctx->pc = 0x1E1D68u;
    // 0x1e1d68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e1d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1d6c: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1e1d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1d70: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1E1D70u;
    SET_GPR_U32(ctx, 31, 0x1E1D78u);
    ctx->pc = 0x1E1D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D70u;
            // 0x1e1d74: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D78u; }
        if (ctx->pc != 0x1E1D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D78u; }
        if (ctx->pc != 0x1E1D78u) { return; }
    }
    ctx->pc = 0x1E1D78u;
    // 0x1e1d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e1d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1d7c: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1e1d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1d80: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1E1D80u;
    SET_GPR_U32(ctx, 31, 0x1E1D88u);
    ctx->pc = 0x1E1D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D80u;
            // 0x1e1d84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D88u; }
        if (ctx->pc != 0x1E1D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D88u; }
        if (ctx->pc != 0x1E1D88u) { return; }
    }
    ctx->pc = 0x1E1D88u;
    // 0x1e1d88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1d8c: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1e1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e1d90: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1E1D90u;
    SET_GPR_U32(ctx, 31, 0x1E1D98u);
    ctx->pc = 0x1E1D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1D90u;
            // 0x1e1d94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D98u; }
        if (ctx->pc != 0x1E1D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1D98u; }
        if (ctx->pc != 0x1E1D98u) { return; }
    }
    ctx->pc = 0x1E1D98u;
    // 0x1e1d98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1e1d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e1d9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1e1d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1da0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1E1DA0u;
    SET_GPR_U32(ctx, 31, 0x1E1DA8u);
    ctx->pc = 0x1E1DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DA0u;
            // 0x1e1da4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DA8u; }
        if (ctx->pc != 0x1E1DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DA8u; }
        if (ctx->pc != 0x1E1DA8u) { return; }
    }
    ctx->pc = 0x1E1DA8u;
    // 0x1e1da8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e1da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e1dac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e1dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e1db0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e1db0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e1db4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E1DB4u;
    {
        const bool branch_taken_0x1e1db4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1db4) {
            ctx->pc = 0x1E1E08u;
            goto label_1e1e08;
        }
    }
    ctx->pc = 0x1E1DBCu;
    // 0x1e1dbc: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x1e1dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1DC0u;
    {
        const bool branch_taken_0x1e1dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1dc0) {
            ctx->pc = 0x1E1DD8u;
            goto label_1e1dd8;
        }
    }
    ctx->pc = 0x1E1DC8u;
    // 0x1e1dc8: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1E1DC8u;
    SET_GPR_U32(ctx, 31, 0x1E1DD0u);
    ctx->pc = 0x1E1DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DC8u;
            // 0x1e1dcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DD0u; }
        if (ctx->pc != 0x1E1DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DD0u; }
        if (ctx->pc != 0x1E1DD0u) { return; }
    }
    ctx->pc = 0x1E1DD0u;
    // 0x1e1dd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E1DD0u;
    {
        const bool branch_taken_0x1e1dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1dd0) {
            ctx->pc = 0x1E1DE0u;
            goto label_1e1de0;
        }
    }
    ctx->pc = 0x1E1DD8u;
label_1e1dd8:
    // 0x1e1dd8: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1E1DD8u;
    SET_GPR_U32(ctx, 31, 0x1E1DE0u);
    ctx->pc = 0x1E1DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DD8u;
            // 0x1e1ddc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DE0u; }
        if (ctx->pc != 0x1E1DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1DE0u; }
        if (ctx->pc != 0x1E1DE0u) { return; }
    }
    ctx->pc = 0x1E1DE0u;
label_1e1de0:
    // 0x1e1de0: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x1e1de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e1de4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1DE4u;
    {
        const bool branch_taken_0x1e1de4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1de4) {
            ctx->pc = 0x1E1DF8u;
            goto label_1e1df8;
        }
    }
    ctx->pc = 0x1E1DECu;
    // 0x1e1dec: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1E1DECu;
    {
        const bool branch_taken_0x1e1dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DECu;
            // 0x1e1df0: 0xae00010c  sw          $zero, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dec) {
            ctx->pc = 0x1E1E58u;
            goto label_1e1e58;
        }
    }
    ctx->pc = 0x1E1DF4u;
    // 0x1e1df4: 0x0  nop
    ctx->pc = 0x1e1df4u;
    // NOP
label_1e1df8:
    // 0x1e1df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1dfc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E1DFCu;
    {
        const bool branch_taken_0x1e1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1DFCu;
            // 0x1e1e00: 0xae03010c  sw          $v1, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1dfc) {
            ctx->pc = 0x1E1E58u;
            goto label_1e1e58;
        }
    }
    ctx->pc = 0x1E1E04u;
    // 0x1e1e04: 0x0  nop
    ctx->pc = 0x1e1e04u;
    // NOP
label_1e1e08:
    // 0x1e1e08: 0x286107d0  slti        $at, $v1, 0x7D0
    ctx->pc = 0x1e1e08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1e1e0c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1E1E0Cu;
    {
        const bool branch_taken_0x1e1e0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e0c) {
            ctx->pc = 0x1E1E48u;
            goto label_1e1e48;
        }
    }
    ctx->pc = 0x1E1E14u;
    // 0x1e1e14: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e1e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e1e18: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e1e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e1e1c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e1e1cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e1e20: 0x0  nop
    ctx->pc = 0x1e1e20u;
    // NOP
    // 0x1e1e24: 0x0  nop
    ctx->pc = 0x1e1e24u;
    // NOP
    // 0x1e1e28: 0x1010  mfhi        $v0
    ctx->pc = 0x1e1e28u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1e1e2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1E2Cu;
    {
        const bool branch_taken_0x1e1e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e2c) {
            ctx->pc = 0x1E1E48u;
            goto label_1e1e48;
        }
    }
    ctx->pc = 0x1E1E34u;
    // 0x1e1e34: 0xc060500  jal         func_181400
    ctx->pc = 0x1E1E34u;
    SET_GPR_U32(ctx, 31, 0x1E1E3Cu);
    ctx->pc = 0x1E1E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E34u;
            // 0x1e1e38: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E3Cu; }
        if (ctx->pc != 0x1E1E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E3Cu; }
        if (ctx->pc != 0x1E1E3Cu) { return; }
    }
    ctx->pc = 0x1E1E3Cu;
    // 0x1e1e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1E3Cu;
    {
        const bool branch_taken_0x1e1e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1e3c) {
            ctx->pc = 0x1E1E50u;
            goto label_1e1e50;
        }
    }
    ctx->pc = 0x1E1E44u;
    // 0x1e1e44: 0x0  nop
    ctx->pc = 0x1e1e44u;
    // NOP
label_1e1e48:
    // 0x1e1e48: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1E1E48u;
    SET_GPR_U32(ctx, 31, 0x1E1E50u);
    ctx->pc = 0x1E1E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E48u;
            // 0x1e1e4c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E50u; }
        if (ctx->pc != 0x1E1E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1E50u; }
        if (ctx->pc != 0x1E1E50u) { return; }
    }
    ctx->pc = 0x1E1E50u;
label_1e1e50:
    // 0x1e1e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e54: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1e1e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
label_1e1e58:
    // 0x1e1e58: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e1e5c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1e1e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e1e60: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1e1e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e1e64: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E1E64u;
    {
        const bool branch_taken_0x1e1e64 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1e1e64) {
            ctx->pc = 0x1E1E80u;
            goto label_1e1e80;
        }
    }
    ctx->pc = 0x1E1E6Cu;
    // 0x1e1e6c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e1e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e1e70: 0x461000d  bgez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1E70u;
    {
        const bool branch_taken_0x1e1e70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E1E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E70u;
            // 0x1e1e74: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e70) {
            ctx->pc = 0x1E1EA8u;
            goto label_1e1ea8;
        }
    }
    ctx->pc = 0x1E1E78u;
    // 0x1e1e78: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1E78u;
    {
        const bool branch_taken_0x1e1e78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1e78) {
            ctx->pc = 0x1E1EA8u;
            goto label_1e1ea8;
        }
    }
    ctx->pc = 0x1E1E80u;
label_1e1e80:
    // 0x1e1e80: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1e1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e1e84: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1e1e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1e1e88: 0x8e020124  lw          $v0, 0x124($s0)
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1e1e8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e1e90: 0xae020124  sw          $v0, 0x124($s0)
    ctx->pc = 0x1e1e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 2));
    // 0x1e1e94: 0x8e050124  lw          $a1, 0x124($s0)
    ctx->pc = 0x1e1e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x1e1e98: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1E1E98u;
    SET_GPR_U32(ctx, 31, 0x1E1EA0u);
    ctx->pc = 0x1E1E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1E98u;
            // 0x1e1e9c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EA0u; }
        if (ctx->pc != 0x1E1EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1EA0u; }
        if (ctx->pc != 0x1E1EA0u) { return; }
    }
    ctx->pc = 0x1E1EA0u;
    // 0x1e1ea0: 0x10000141  b           . + 4 + (0x141 << 2)
    ctx->pc = 0x1E1EA0u;
    {
        const bool branch_taken_0x1e1ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ea0) {
            ctx->pc = 0x1E23A8u;
            goto label_1e23a8;
        }
    }
    ctx->pc = 0x1E1EA8u;
label_1e1ea8:
    // 0x1e1ea8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1e1ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1e1eac: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1e1eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1e1eb0: 0x1083013d  beq         $a0, $v1, . + 4 + (0x13D << 2)
    ctx->pc = 0x1E1EB0u;
    {
        const bool branch_taken_0x1e1eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E1EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1EB0u;
            // 0x1e1eb4: 0x2403000f  addiu       $v1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1eb0) {
            ctx->pc = 0x1E23A8u;
            goto label_1e23a8;
        }
    }
    ctx->pc = 0x1E1EB8u;
    // 0x1e1eb8: 0x1083013b  beq         $a0, $v1, . + 4 + (0x13B << 2)
    ctx->pc = 0x1E1EB8u;
    {
        const bool branch_taken_0x1e1eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e1eb8) {
            ctx->pc = 0x1E23A8u;
            goto label_1e23a8;
        }
    }
    ctx->pc = 0x1E1EC0u;
    // 0x1e1ec0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1ec4: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e1ec8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1ecc: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x1e1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1e1ed0: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e1ed4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e1ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ed8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e1ed8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1edc: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1e1edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1e1ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ee4: 0x0  nop
    ctx->pc = 0x1e1ee4u;
    // NOP
    // 0x1e1ee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1eec: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x1e1eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1e1ef0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1ef4: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e1ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e1ef8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1efc: 0x0  nop
    ctx->pc = 0x1e1efcu;
    // NOP
    // 0x1e1f00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f04: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e1f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e1f08: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1f0c: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1e1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1e1f10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f14: 0x0  nop
    ctx->pc = 0x1e1f14u;
    // NOP
    // 0x1e1f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f1c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e1f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e1f20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1f24: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e1f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e1f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f2c: 0x0  nop
    ctx->pc = 0x1e1f2cu;
    // NOP
    // 0x1e1f30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f34: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E1F34u;
    SET_GPR_U32(ctx, 31, 0x1E1F3Cu);
    ctx->pc = 0x1E1F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1F34u;
            // 0x1e1f38: 0xe6000038  swc1        $f0, 0x38($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F3Cu; }
        if (ctx->pc != 0x1E1F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1F3Cu; }
        if (ctx->pc != 0x1E1F3Cu) { return; }
    }
    ctx->pc = 0x1E1F3Cu;
    // 0x1e1f3c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1f40: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e1f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e1f44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1f48: 0x2605003c  addiu       $a1, $s0, 0x3C
    ctx->pc = 0x1e1f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1e1f4c: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e1f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e1f50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e1f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1f54: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e1f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1f58: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e1f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e1f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f60: 0x0  nop
    ctx->pc = 0x1e1f60u;
    // NOP
    // 0x1e1f64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f68: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1e1f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x1e1f6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1f70: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e1f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e1f74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f78: 0x0  nop
    ctx->pc = 0x1e1f78u;
    // NOP
    // 0x1e1f7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f80: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1e1f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1e1f84: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e1f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1f88: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e1f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e1f8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1f8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1f90: 0x0  nop
    ctx->pc = 0x1e1f90u;
    // NOP
    // 0x1e1f94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1f94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1f98: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1e1f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1e1f9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1fa0: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1e1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1e1fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fa8: 0x0  nop
    ctx->pc = 0x1e1fa8u;
    // NOP
    // 0x1e1fac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1fb0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E1FB0u;
    SET_GPR_U32(ctx, 31, 0x1E1FB8u);
    ctx->pc = 0x1E1FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1FB0u;
            // 0x1e1fb4: 0xe6000048  swc1        $f0, 0x48($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FB8u; }
        if (ctx->pc != 0x1E1FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E1FB8u; }
        if (ctx->pc != 0x1E1FB8u) { return; }
    }
    ctx->pc = 0x1E1FB8u;
    // 0x1e1fb8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e1fbc: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e1fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e1fc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e1fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e1fc4: 0x2605004c  addiu       $a1, $s0, 0x4C
    ctx->pc = 0x1e1fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1e1fc8: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e1fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e1fcc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e1fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fd0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e1fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1fd4: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1e1fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1e1fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1fdc: 0x0  nop
    ctx->pc = 0x1e1fdcu;
    // NOP
    // 0x1e1fe0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1fe4: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1e1fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1e1fe8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e1fec: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e1ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1ff4: 0x0  nop
    ctx->pc = 0x1e1ff4u;
    // NOP
    // 0x1e1ff8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e1ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e1ffc: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1e1ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1e2000: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2004: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x1e2004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1e2008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e200c: 0x0  nop
    ctx->pc = 0x1e200cu;
    // NOP
    // 0x1e2010: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2014: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1e2014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1e2018: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e201c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e201cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e2020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2024: 0x0  nop
    ctx->pc = 0x1e2024u;
    // NOP
    // 0x1e2028: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2028u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e202c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E202Cu;
    SET_GPR_U32(ctx, 31, 0x1E2034u);
    ctx->pc = 0x1E2030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E202Cu;
            // 0x1e2030: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2034u; }
        if (ctx->pc != 0x1E2034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2034u; }
        if (ctx->pc != 0x1E2034u) { return; }
    }
    ctx->pc = 0x1E2034u;
    // 0x1e2034: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2038: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e2038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e203c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e203cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2040: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x1e2040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1e2044: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e2044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e2048: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e2048u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e204c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e204cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2050: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x1e2054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2058: 0x0  nop
    ctx->pc = 0x1e2058u;
    // NOP
    // 0x1e205c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e205cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2060: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1e2060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
    // 0x1e2064: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2068: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e206c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e206cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2070: 0x0  nop
    ctx->pc = 0x1e2070u;
    // NOP
    // 0x1e2074: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2078: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x1e2078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x1e207c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2080: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1e2080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1e2084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2088: 0x0  nop
    ctx->pc = 0x1e2088u;
    // NOP
    // 0x1e208c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e208cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2090: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x1e2090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1e2094: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2098: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x1e2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1e209c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e209cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e20a0: 0x0  nop
    ctx->pc = 0x1e20a0u;
    // NOP
    // 0x1e20a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e20a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e20a8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E20A8u;
    SET_GPR_U32(ctx, 31, 0x1E20B0u);
    ctx->pc = 0x1E20ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E20A8u;
            // 0x1e20ac: 0xe6000068  swc1        $f0, 0x68($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20B0u; }
        if (ctx->pc != 0x1E20B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20B0u; }
        if (ctx->pc != 0x1E20B0u) { return; }
    }
    ctx->pc = 0x1E20B0u;
    // 0x1e20b0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e20b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e20b4: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e20b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e20b8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e20b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e20bc: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x1e20bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x1e20c0: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e20c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e20c4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e20c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e20c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e20cc: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x1e20d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e20d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e20d4: 0x0  nop
    ctx->pc = 0x1e20d4u;
    // NOP
    // 0x1e20d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e20d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e20dc: 0xe600006c  swc1        $f0, 0x6C($s0)
    ctx->pc = 0x1e20dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 108), bits); }
    // 0x1e20e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e20e4: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1e20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1e20e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e20e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e20ec: 0x0  nop
    ctx->pc = 0x1e20ecu;
    // NOP
    // 0x1e20f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e20f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e20f4: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x1e20f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x1e20f8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e20f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e20fc: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x1e20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x1e2100: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2104: 0x0  nop
    ctx->pc = 0x1e2104u;
    // NOP
    // 0x1e2108: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2108u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e210c: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1e210cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1e2110: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2114: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e2118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e211c: 0x0  nop
    ctx->pc = 0x1e211cu;
    // NOP
    // 0x1e2120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2124: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E2124u;
    SET_GPR_U32(ctx, 31, 0x1E212Cu);
    ctx->pc = 0x1E2128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2124u;
            // 0x1e2128: 0xe6000078  swc1        $f0, 0x78($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E212Cu; }
        if (ctx->pc != 0x1E212Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E212Cu; }
        if (ctx->pc != 0x1E212Cu) { return; }
    }
    ctx->pc = 0x1E212Cu;
    // 0x1e212c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2130: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e2130u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e2134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2138: 0x2605007c  addiu       $a1, $s0, 0x7C
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x1e213c: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e213cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e2140: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e2140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2144: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e2144u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2148: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1e2148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1e214c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e214cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2150: 0x0  nop
    ctx->pc = 0x1e2150u;
    // NOP
    // 0x1e2154: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2158: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x1e2158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x1e215c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2160: 0x2442ff88  addiu       $v0, $v0, -0x78
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967176));
    // 0x1e2164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2168: 0x0  nop
    ctx->pc = 0x1e2168u;
    // NOP
    // 0x1e216c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e216cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2170: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1e2170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1e2174: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2178: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x1e2178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x1e217c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e217cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2180: 0x0  nop
    ctx->pc = 0x1e2180u;
    // NOP
    // 0x1e2184: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2188: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1e2188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1e218c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2190: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e2194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2198: 0x0  nop
    ctx->pc = 0x1e2198u;
    // NOP
    // 0x1e219c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e219cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e21a0: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E21A0u;
    SET_GPR_U32(ctx, 31, 0x1E21A8u);
    ctx->pc = 0x1E21A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E21A0u;
            // 0x1e21a4: 0xe6000088  swc1        $f0, 0x88($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21A8u; }
        if (ctx->pc != 0x1E21A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E21A8u; }
        if (ctx->pc != 0x1E21A8u) { return; }
    }
    ctx->pc = 0x1E21A8u;
    // 0x1e21a8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e21a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e21ac: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e21acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e21b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e21b4: 0x2605008c  addiu       $a1, $s0, 0x8C
    ctx->pc = 0x1e21b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x1e21b8: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e21b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e21bc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e21bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21c0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e21c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e21c4: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1e21c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1e21c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e21c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e21cc: 0x0  nop
    ctx->pc = 0x1e21ccu;
    // NOP
    // 0x1e21d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e21d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e21d4: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x1e21d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x1e21d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e21dc: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e21dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e21e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e21e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e21e4: 0x0  nop
    ctx->pc = 0x1e21e4u;
    // NOP
    // 0x1e21e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e21e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e21ec: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x1e21ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x1e21f0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e21f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e21f4: 0x2442ff94  addiu       $v0, $v0, -0x6C
    ctx->pc = 0x1e21f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967188));
    // 0x1e21f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e21f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e21fc: 0x0  nop
    ctx->pc = 0x1e21fcu;
    // NOP
    // 0x1e2200: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2204: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x1e2204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x1e2208: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e220c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1e2210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2214: 0x0  nop
    ctx->pc = 0x1e2214u;
    // NOP
    // 0x1e2218: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e221c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E221Cu;
    SET_GPR_U32(ctx, 31, 0x1E2224u);
    ctx->pc = 0x1E2220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E221Cu;
            // 0x1e2220: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2224u; }
        if (ctx->pc != 0x1E2224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2224u; }
        if (ctx->pc != 0x1E2224u) { return; }
    }
    ctx->pc = 0x1E2224u;
    // 0x1e2224: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2228: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e2228u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e222c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2230: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x1e2230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
    // 0x1e2234: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e2234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e2238: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e2238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e223c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e223cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2240: 0x2442ff65  addiu       $v0, $v0, -0x9B
    ctx->pc = 0x1e2240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967141));
    // 0x1e2244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2248: 0x0  nop
    ctx->pc = 0x1e2248u;
    // NOP
    // 0x1e224c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e224cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2250: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x1e2250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x1e2254: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2258: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e225c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e225cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2260: 0x0  nop
    ctx->pc = 0x1e2260u;
    // NOP
    // 0x1e2264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2268: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x1e2268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x1e226c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2270: 0x2442ff7e  addiu       $v0, $v0, -0x82
    ctx->pc = 0x1e2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967166));
    // 0x1e2274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2278: 0x0  nop
    ctx->pc = 0x1e2278u;
    // NOP
    // 0x1e227c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e227cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2280: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x1e2280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x1e2284: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2288: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e2288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e228c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e228cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2290: 0x0  nop
    ctx->pc = 0x1e2290u;
    // NOP
    // 0x1e2294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2298: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E2298u;
    SET_GPR_U32(ctx, 31, 0x1E22A0u);
    ctx->pc = 0x1E229Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2298u;
            // 0x1e229c: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22A0u; }
        if (ctx->pc != 0x1E22A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E22A0u; }
        if (ctx->pc != 0x1E22A0u) { return; }
    }
    ctx->pc = 0x1E22A0u;
    // 0x1e22a0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e22a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e22a4: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e22a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e22a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e22a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e22ac: 0x260500ac  addiu       $a1, $s0, 0xAC
    ctx->pc = 0x1e22acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x1e22b0: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e22b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e22b4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e22b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e22b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e22bc: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x1e22bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1e22c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e22c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e22c4: 0x0  nop
    ctx->pc = 0x1e22c4u;
    // NOP
    // 0x1e22c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e22c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e22cc: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x1e22ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x1e22d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e22d4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e22d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e22d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e22d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e22dc: 0x0  nop
    ctx->pc = 0x1e22dcu;
    // NOP
    // 0x1e22e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e22e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e22e4: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x1e22e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
    // 0x1e22e8: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e22e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e22ec: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1e22ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1e22f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e22f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e22f4: 0x0  nop
    ctx->pc = 0x1e22f4u;
    // NOP
    // 0x1e22f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e22f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e22fc: 0xe60000b4  swc1        $f0, 0xB4($s0)
    ctx->pc = 0x1e22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 180), bits); }
    // 0x1e2300: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2304: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e2304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1e2308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e230c: 0x0  nop
    ctx->pc = 0x1e230cu;
    // NOP
    // 0x1e2310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2314: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E2314u;
    SET_GPR_U32(ctx, 31, 0x1E231Cu);
    ctx->pc = 0x1E2318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2314u;
            // 0x1e2318: 0xe60000b8  swc1        $f0, 0xB8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E231Cu; }
        if (ctx->pc != 0x1E231Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E231Cu; }
        if (ctx->pc != 0x1E231Cu) { return; }
    }
    ctx->pc = 0x1E231Cu;
    // 0x1e231c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2320: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e2320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e2324: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1e2324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e2328: 0x260500bc  addiu       $a1, $s0, 0xBC
    ctx->pc = 0x1e2328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 188));
    // 0x1e232c: 0x24c60810  addiu       $a2, $a2, 0x810
    ctx->pc = 0x1e232cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2064));
    // 0x1e2330: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e2330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2334: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1e2334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2338: 0x24420082  addiu       $v0, $v0, 0x82
    ctx->pc = 0x1e2338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 130));
    // 0x1e233c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e233cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2340: 0x0  nop
    ctx->pc = 0x1e2340u;
    // NOP
    // 0x1e2344: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2348: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x1e2348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    // 0x1e234c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2350: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x1e2350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e2354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2358: 0x0  nop
    ctx->pc = 0x1e2358u;
    // NOP
    // 0x1e235c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e235cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2360: 0xe60000c0  swc1        $f0, 0xC0($s0)
    ctx->pc = 0x1e2360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1e2364: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1e2364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1e2368: 0x2442009b  addiu       $v0, $v0, 0x9B
    ctx->pc = 0x1e2368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 155));
    // 0x1e236c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e236cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2370: 0x0  nop
    ctx->pc = 0x1e2370u;
    // NOP
    // 0x1e2374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e2374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2378: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e2378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e237c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1e237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1e2380: 0x2442005a  addiu       $v0, $v0, 0x5A
    ctx->pc = 0x1e2380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 90));
    // 0x1e2384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2388: 0x0  nop
    ctx->pc = 0x1e2388u;
    // NOP
    // 0x1e238c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e238cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e2390: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1E2390u;
    SET_GPR_U32(ctx, 31, 0x1E2398u);
    ctx->pc = 0x1E2394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2390u;
            // 0x1e2394: 0xe60000c8  swc1        $f0, 0xC8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2398u; }
        if (ctx->pc != 0x1E2398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2398u; }
        if (ctx->pc != 0x1E2398u) { return; }
    }
    ctx->pc = 0x1E2398u;
    // 0x1e2398: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e2398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e239c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e239cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e23a0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1e23a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1e23a4: 0x0  nop
    ctx->pc = 0x1e23a4u;
    // NOP
label_1e23a8:
    // 0x1e23a8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1e23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1e23ac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e23acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e23b0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x1e23b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1e23b4: 0x0  nop
    ctx->pc = 0x1e23b4u;
    // NOP
label_1e23b8:
    // 0x1e23b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e23b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e23bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e23bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e23c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e23c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e23c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e23c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e23c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e23c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e23cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E23CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E23D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E23CCu;
            // 0x1e23d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0B20u: goto label_1e0b20;
            case 0x1E0BD0u: goto label_1e0bd0;
            case 0x1E0C08u: goto label_1e0c08;
            case 0x1E0C40u: goto label_1e0c40;
            case 0x1E0C78u: goto label_1e0c78;
            case 0x1E0CB0u: goto label_1e0cb0;
            case 0x1E0CE8u: goto label_1e0ce8;
            case 0x1E0D38u: goto label_1e0d38;
            case 0x1E0D70u: goto label_1e0d70;
            case 0x1E0D88u: goto label_1e0d88;
            case 0x1E0DA0u: goto label_1e0da0;
            case 0x1E0E40u: goto label_1e0e40;
            case 0x1E0E58u: goto label_1e0e58;
            case 0x1E0E70u: goto label_1e0e70;
            case 0x1E0E80u: goto label_1e0e80;
            case 0x1E0F20u: goto label_1e0f20;
            case 0x1E0F38u: goto label_1e0f38;
            case 0x1E0F50u: goto label_1e0f50;
            case 0x1E0F60u: goto label_1e0f60;
            case 0x1E0FB8u: goto label_1e0fb8;
            case 0x1E0FD0u: goto label_1e0fd0;
            case 0x1E0FE8u: goto label_1e0fe8;
            case 0x1E0FF8u: goto label_1e0ff8;
            case 0x1E1080u: goto label_1e1080;
            case 0x1E1098u: goto label_1e1098;
            case 0x1E10B0u: goto label_1e10b0;
            case 0x1E10C0u: goto label_1e10c0;
            case 0x1E1148u: goto label_1e1148;
            case 0x1E11F8u: goto label_1e11f8;
            case 0x1E1280u: goto label_1e1280;
            case 0x1E1330u: goto label_1e1330;
            case 0x1E1348u: goto label_1e1348;
            case 0x1E1360u: goto label_1e1360;
            case 0x1E1370u: goto label_1e1370;
            case 0x1E1390u: goto label_1e1390;
            case 0x1E1470u: goto label_1e1470;
            case 0x1E1488u: goto label_1e1488;
            case 0x1E1498u: goto label_1e1498;
            case 0x1E1568u: goto label_1e1568;
            case 0x1E1594u: goto label_1e1594;
            case 0x1E1638u: goto label_1e1638;
            case 0x1E16C8u: goto label_1e16c8;
            case 0x1E18A8u: goto label_1e18a8;
            case 0x1E18F0u: goto label_1e18f0;
            case 0x1E1938u: goto label_1e1938;
            case 0x1E1970u: goto label_1e1970;
            case 0x1E19A8u: goto label_1e19a8;
            case 0x1E19C0u: goto label_1e19c0;
            case 0x1E1A28u: goto label_1e1a28;
            case 0x1E1A40u: goto label_1e1a40;
            case 0x1E1A78u: goto label_1e1a78;
            case 0x1E1A90u: goto label_1e1a90;
            case 0x1E1AF8u: goto label_1e1af8;
            case 0x1E1B10u: goto label_1e1b10;
            case 0x1E1B38u: goto label_1e1b38;
            case 0x1E1C20u: goto label_1e1c20;
            case 0x1E1C80u: goto label_1e1c80;
            case 0x1E1C98u: goto label_1e1c98;
            case 0x1E1CB0u: goto label_1e1cb0;
            case 0x1E1CC8u: goto label_1e1cc8;
            case 0x1E1CE0u: goto label_1e1ce0;
            case 0x1E1CF8u: goto label_1e1cf8;
            case 0x1E1D10u: goto label_1e1d10;
            case 0x1E1D28u: goto label_1e1d28;
            case 0x1E1D40u: goto label_1e1d40;
            case 0x1E1D60u: goto label_1e1d60;
            case 0x1E1DD8u: goto label_1e1dd8;
            case 0x1E1DE0u: goto label_1e1de0;
            case 0x1E1DF8u: goto label_1e1df8;
            case 0x1E1E08u: goto label_1e1e08;
            case 0x1E1E48u: goto label_1e1e48;
            case 0x1E1E50u: goto label_1e1e50;
            case 0x1E1E58u: goto label_1e1e58;
            case 0x1E1E80u: goto label_1e1e80;
            case 0x1E1EA8u: goto label_1e1ea8;
            case 0x1E23A8u: goto label_1e23a8;
            case 0x1E23B8u: goto label_1e23b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E23D4u;
}
