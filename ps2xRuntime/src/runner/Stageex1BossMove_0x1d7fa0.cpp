#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Stageex1BossMove
// Address: 0x1d7fa0 - 0x1dad9c
void Stageex1BossMove_0x1d7fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Stageex1BossMove_0x1d7fa0");
#endif

    ctx->pc = 0x1d7fa0u;

    // 0x1d7fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7fa4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d7fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d7fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d7fac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d7facu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d7fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d7fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d7fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d7fbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7fbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7fc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7fc4: 0xc48200d0  lwc1        $f2, 0xD0($a0)
    ctx->pc = 0x1d7fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7fc8: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1d7fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7fcc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7fccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d7fd0: 0xe4610120  swc1        $f1, 0x120($v1)
    ctx->pc = 0x1d7fd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1d7fd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7fd8: 0xc48200d4  lwc1        $f2, 0xD4($a0)
    ctx->pc = 0x1d7fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7fdc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1d7fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7fe0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7fe0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d7fe4: 0xe4410124  swc1        $f1, 0x124($v0)
    ctx->pc = 0x1d7fe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1d7fe8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7fec: 0xc48200e4  lwc1        $f2, 0xE4($a0)
    ctx->pc = 0x1d7fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d7ff0: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d7ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d7ff4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7ff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d7ff8: 0xe4410114  swc1        $f1, 0x114($v0)
    ctx->pc = 0x1d7ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 276), bits); }
    // 0x1d7ffc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8000: 0xc48200e0  lwc1        $f2, 0xE0($a0)
    ctx->pc = 0x1d8000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d8004: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1d8004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8008: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d8008u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1d800c: 0xe4410110  swc1        $f1, 0x110($v0)
    ctx->pc = 0x1d800cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1d8010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d8014: 0xc4410114  lwc1        $f1, 0x114($v0)
    ctx->pc = 0x1d8014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d801c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1D801Cu;
    {
        const bool branch_taken_0x1d801c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D801Cu;
            // 0x1d8020: 0x24430114  addiu       $v1, $v0, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d801c) {
            ctx->pc = 0x1D8040u;
            goto label_1d8040;
        }
    }
    ctx->pc = 0x1D8024u;
    // 0x1d8024: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d8028: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d8028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d802c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d802cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8030: 0x0  nop
    ctx->pc = 0x1d8030u;
    // NOP
    // 0x1d8034: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d8034u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d8038: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d8038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d803c: 0x0  nop
    ctx->pc = 0x1d803cu;
    // NOP
label_1d8040:
    // 0x1d8040: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8044: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d8044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d8048: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d8048u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d804c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d804cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8050: 0xc4610114  lwc1        $f1, 0x114($v1)
    ctx->pc = 0x1d8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8054: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d8054u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8058: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8058u;
    {
        const bool branch_taken_0x1d8058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D805Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8058u;
            // 0x1d805c: 0x24640114  addiu       $a0, $v1, 0x114 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8058) {
            ctx->pc = 0x1D8078u;
            goto label_1d8078;
        }
    }
    ctx->pc = 0x1D8060u;
    // 0x1d8060: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d8060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d8064: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d8064u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d8068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d806c: 0x0  nop
    ctx->pc = 0x1d806cu;
    // NOP
    // 0x1d8070: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d8070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d8074: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d8074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d8078:
    // 0x1d8078: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d8078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d807c: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1d807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1d8080: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d8080u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d8084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8088: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d8088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d808c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d808cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8090: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8090u;
    {
        const bool branch_taken_0x1d8090 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8090u;
            // 0x1d8094: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8090) {
            ctx->pc = 0x1D80B0u;
            goto label_1d80b0;
        }
    }
    ctx->pc = 0x1D8098u;
    // 0x1d8098: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d8098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d809c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d809cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d80a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d80a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d80a4: 0x0  nop
    ctx->pc = 0x1d80a4u;
    // NOP
    // 0x1d80a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d80a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d80ac: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d80acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d80b0:
    // 0x1d80b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d80b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1d80b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d80b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d80bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d80bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d80c0: 0xc4610110  lwc1        $f1, 0x110($v1)
    ctx->pc = 0x1d80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d80c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d80c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d80c8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D80C8u;
    {
        const bool branch_taken_0x1d80c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D80CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80C8u;
            // 0x1d80cc: 0x24640110  addiu       $a0, $v1, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80c8) {
            ctx->pc = 0x1D80E8u;
            goto label_1d80e8;
        }
    }
    ctx->pc = 0x1D80D0u;
    // 0x1d80d0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1d80d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1d80d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1d80d4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4059u)));
    // 0x1d80d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d80d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d80dc: 0x0  nop
    ctx->pc = 0x1d80dcu;
    // NOP
    // 0x1d80e0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d80e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d80e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d80e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1d80e8:
    // 0x1d80e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d80e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d80ec: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1d80ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1d80f0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d80f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d80f4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d80f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d80f8: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D80F8u;
    SET_GPR_U32(ctx, 31, 0x1D8100u);
    ctx->pc = 0x1D80FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80F8u;
            // 0x1d80fc: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8100u; }
        if (ctx->pc != 0x1D8100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8100u; }
        if (ctx->pc != 0x1D8100u) { return; }
    }
    ctx->pc = 0x1D8100u;
    // 0x1d8100: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1d8100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8108: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1d8108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1d810c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8110: 0xc05b994  jal         func_16E650
    ctx->pc = 0x1D8110u;
    SET_GPR_U32(ctx, 31, 0x1D8118u);
    ctx->pc = 0x1D8114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8110u;
            // 0x1d8114: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E650u;
    if (runtime->hasFunction(0x16E650u)) {
        auto targetFn = runtime->lookupFunction(0x16E650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8118u; }
        if (ctx->pc != 0x1D8118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_DeadEnd_0x16e650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8118u; }
        if (ctx->pc != 0x1D8118u) { return; }
    }
    ctx->pc = 0x1D8118u;
    // 0x1d8118: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d8118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d811c: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x1d811cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1d8120: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x1d8120u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d8124: 0x10200a1e  beqz        $at, . + 4 + (0xA1E << 2)
    ctx->pc = 0x1D8124u;
    {
        const bool branch_taken_0x1d8124 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8124u;
            // 0x1d8128: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8124) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D812Cu;
    // 0x1d812c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d812cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d8130: 0x24632d50  addiu       $v1, $v1, 0x2D50
    ctx->pc = 0x1d8130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11600));
    // 0x1d8134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d8134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d8138: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d8138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d813c: 0x400008  jr          $v0
    ctx->pc = 0x1D813Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8148u: goto label_1d8148;
            case 0x1D81D0u: goto label_1d81d0;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1DA490u: goto label_1da490;
            case 0x1DA780u: goto label_1da780;
            case 0x1DA8F0u: goto label_1da8f0;
            case 0x1DA960u: goto label_1da960;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D8144u;
    // 0x1d8144: 0x0  nop
    ctx->pc = 0x1d8144u;
    // NOP
label_1d8148:
    // 0x1d8148: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1d8148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1d814c: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1d814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8150: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d8150u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d8154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8158: 0x0  nop
    ctx->pc = 0x1d8158u;
    // NOP
    // 0x1d815c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d815cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8160: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8160u;
    {
        const bool branch_taken_0x1d8160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8160u;
            // 0x1d8164: 0x3c023f7d  lui         $v0, 0x3F7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8160) {
            ctx->pc = 0x1D8180u;
            goto label_1d8180;
        }
    }
    ctx->pc = 0x1D8168u;
    // 0x1d8168: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1d8168u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1d816c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d816cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8170: 0x0  nop
    ctx->pc = 0x1d8170u;
    // NOP
    // 0x1d8174: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8174u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d8178: 0x10000a09  b           . + 4 + (0xA09 << 2)
    ctx->pc = 0x1D8178u;
    {
        const bool branch_taken_0x1d8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8178u;
            // 0x1d817c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8178) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D8180u;
label_1d8180:
    // 0x1d8180: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1D8180u;
    SET_GPR_U32(ctx, 31, 0x1D8188u);
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8188u; }
        if (ctx->pc != 0x1D8188u) { return; }
    }
    ctx->pc = 0x1D8188u;
    // 0x1d8188: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1d818c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d818cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d8190: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d8194: 0x0  nop
    ctx->pc = 0x1d8194u;
    // NOP
    // 0x1d8198: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d8198u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d819c: 0xc050ba4  jal         func_142E90
    ctx->pc = 0x1D819Cu;
    SET_GPR_U32(ctx, 31, 0x1D81A4u);
    ctx->pc = 0x1D81A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D819Cu;
            // 0x1d81a0: 0xe62000d0  swc1        $f0, 0xD0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142E90u;
    if (runtime->hasFunction(0x142E90u)) {
        auto targetFn = runtime->lookupFunction(0x142E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81A4u; }
        if (ctx->pc != 0x1D81A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRandf_0x142e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D81A4u; }
        if (ctx->pc != 0x1D81A4u) { return; }
    }
    ctx->pc = 0x1D81A4u;
    // 0x1d81a4: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1d81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1d81a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d81ac: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1d81acu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)52429u)));
    // 0x1d81b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d81b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d81b4: 0x0  nop
    ctx->pc = 0x1d81b4u;
    // NOP
    // 0x1d81b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1d81b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1d81bc: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1d81bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1d81c0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1d81c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1d81c4: 0x100009f6  b           . + 4 + (0x9F6 << 2)
    ctx->pc = 0x1D81C4u;
    {
        const bool branch_taken_0x1d81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81C4u;
            // 0x1d81c8: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81c4) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D81CCu;
    // 0x1d81cc: 0x0  nop
    ctx->pc = 0x1d81ccu;
    // NOP
label_1d81d0:
    // 0x1d81d0: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x1d81d4: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x1d81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d81d8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d81d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d81dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d81dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d81e0: 0x0  nop
    ctx->pc = 0x1d81e0u;
    // NOP
    // 0x1d81e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d81e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d81e8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D81E8u;
    {
        const bool branch_taken_0x1d81e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D81ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81E8u;
            // 0x1d81ec: 0x3c02bca3  lui         $v0, 0xBCA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81e8) {
            ctx->pc = 0x1D8240u;
            goto label_1d8240;
        }
    }
    ctx->pc = 0x1D81F0u;
    // 0x1d81f0: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d81f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d81f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d81f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d81f8: 0x0  nop
    ctx->pc = 0x1d81f8u;
    // NOP
    // 0x1d81fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d81fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8200: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D8200u;
    {
        const bool branch_taken_0x1d8200 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8200u;
            // 0x1d8204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8200) {
            ctx->pc = 0x1D8240u;
            goto label_1d8240;
        }
    }
    ctx->pc = 0x1D8208u;
    // 0x1d8208: 0xc076b68  jal         func_1DADA0
    ctx->pc = 0x1D8208u;
    SET_GPR_U32(ctx, 31, 0x1D8210u);
    ctx->pc = 0x1DADA0u;
    if (runtime->hasFunction(0x1DADA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8210u; }
        if (ctx->pc != 0x1D8210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1dada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8210u; }
        if (ctx->pc != 0x1D8210u) { return; }
    }
    ctx->pc = 0x1D8210u;
    // 0x1d8210: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8218: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1d8218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1d821c: 0xc065590  jal         func_195640
    ctx->pc = 0x1D821Cu;
    SET_GPR_U32(ctx, 31, 0x1D8224u);
    ctx->pc = 0x1D8220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D821Cu;
            // 0x1d8220: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8224u; }
        if (ctx->pc != 0x1D8224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8224u; }
        if (ctx->pc != 0x1D8224u) { return; }
    }
    ctx->pc = 0x1D8224u;
    // 0x1d8224: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d822c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1d822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1d8230: 0xc065590  jal         func_195640
    ctx->pc = 0x1D8230u;
    SET_GPR_U32(ctx, 31, 0x1D8238u);
    ctx->pc = 0x1D8234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8230u;
            // 0x1d8234: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8238u; }
        if (ctx->pc != 0x1D8238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8238u; }
        if (ctx->pc != 0x1D8238u) { return; }
    }
    ctx->pc = 0x1D8238u;
    // 0x1d8238: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D8238u;
    {
        const bool branch_taken_0x1d8238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8238) {
            ctx->pc = 0x1D82D8u;
            goto label_1d82d8;
        }
    }
    ctx->pc = 0x1D8240u;
label_1d8240:
    // 0x1d8240: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1d8240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x1d8244: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1d8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d8248: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d8248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d824c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8250: 0x0  nop
    ctx->pc = 0x1d8250u;
    // NOP
    // 0x1d8254: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d8254u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8258: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8258u;
    {
        const bool branch_taken_0x1d8258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8258u;
            // 0x1d825c: 0x3c02bc23  lui         $v0, 0xBC23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8258) {
            ctx->pc = 0x1D82B0u;
            goto label_1d82b0;
        }
    }
    ctx->pc = 0x1D8260u;
    // 0x1d8260: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1d8260u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1d8264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d8268: 0x0  nop
    ctx->pc = 0x1d8268u;
    // NOP
    // 0x1d826c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d826cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d8270: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x1D8270u;
    {
        const bool branch_taken_0x1d8270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D8274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8270u;
            // 0x1d8274: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8270) {
            ctx->pc = 0x1D82B0u;
            goto label_1d82b0;
        }
    }
    ctx->pc = 0x1D8278u;
    // 0x1d8278: 0xc076b68  jal         func_1DADA0
    ctx->pc = 0x1D8278u;
    SET_GPR_U32(ctx, 31, 0x1D8280u);
    ctx->pc = 0x1DADA0u;
    if (runtime->hasFunction(0x1DADA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8280u; }
        if (ctx->pc != 0x1D8280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1dada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8280u; }
        if (ctx->pc != 0x1D8280u) { return; }
    }
    ctx->pc = 0x1D8280u;
    // 0x1d8280: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8284: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8288: 0x2464ffd3  addiu       $a0, $v1, -0x2D
    ctx->pc = 0x1d8288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967251));
    // 0x1d828c: 0xc065590  jal         func_195640
    ctx->pc = 0x1D828Cu;
    SET_GPR_U32(ctx, 31, 0x1D8294u);
    ctx->pc = 0x1D8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D828Cu;
            // 0x1d8290: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8294u; }
        if (ctx->pc != 0x1D8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8294u; }
        if (ctx->pc != 0x1D8294u) { return; }
    }
    ctx->pc = 0x1D8294u;
    // 0x1d8294: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8298: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d829c: 0x2464002d  addiu       $a0, $v1, 0x2D
    ctx->pc = 0x1d829cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 45));
    // 0x1d82a0: 0xc065590  jal         func_195640
    ctx->pc = 0x1D82A0u;
    SET_GPR_U32(ctx, 31, 0x1D82A8u);
    ctx->pc = 0x1D82A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82A0u;
            // 0x1d82a4: 0x24450023  addiu       $a1, $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 35));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195640u;
    if (runtime->hasFunction(0x195640u)) {
        auto targetFn = runtime->lookupFunction(0x195640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A8u; }
        if (ctx->pc != 0x1D82A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Burner_Big_0x195640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82A8u; }
        if (ctx->pc != 0x1D82A8u) { return; }
    }
    ctx->pc = 0x1D82A8u;
    // 0x1d82a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D82A8u;
    {
        const bool branch_taken_0x1d82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d82a8) {
            ctx->pc = 0x1D82D8u;
            goto label_1d82d8;
        }
    }
    ctx->pc = 0x1D82B0u;
label_1d82b0:
    // 0x1d82b0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x1d82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x1d82b4: 0xc62000d0  lwc1        $f0, 0xD0($s1)
    ctx->pc = 0x1d82b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82b8: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x1d82b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)28836u)));
    // 0x1d82bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d82bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d82c0: 0x0  nop
    ctx->pc = 0x1d82c0u;
    // NOP
    // 0x1d82c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d82c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d82c8: 0xe62000d0  swc1        $f0, 0xD0($s1)
    ctx->pc = 0x1d82c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x1d82cc: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1d82ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d82d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d82d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d82d4: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1d82d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
label_1d82d8:
    // 0x1d82d8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d82d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d82dc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1d82dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1d82e0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d82e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d82e4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d82e8: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D82E8u;
    SET_GPR_U32(ctx, 31, 0x1D82F0u);
    ctx->pc = 0x1D82ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82E8u;
            // 0x1d82ec: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82F0u; }
        if (ctx->pc != 0x1D82F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D82F0u; }
        if (ctx->pc != 0x1D82F0u) { return; }
    }
    ctx->pc = 0x1D82F0u;
    // 0x1d82f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d82f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d82f4: 0x12020332  beq         $s0, $v0, . + 4 + (0x332 << 2)
    ctx->pc = 0x1D82F4u;
    {
        const bool branch_taken_0x1d82f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D82F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D82F4u;
            // 0x1d82f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d82f4) {
            ctx->pc = 0x1D8FC0u;
            goto label_1d8fc0;
        }
    }
    ctx->pc = 0x1D82FCu;
    // 0x1d82fc: 0x12020146  beq         $s0, $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x1D82FCu;
    {
        const bool branch_taken_0x1d82fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d82fc) {
            ctx->pc = 0x1D8818u;
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D8304u;
    // 0x1d8304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d8304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8308: 0x12020143  beq         $s0, $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x1D8308u;
    {
        const bool branch_taken_0x1d8308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8308u;
            // 0x1d830c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8308) {
            ctx->pc = 0x1D8818u;
            goto label_1d8818;
        }
    }
    ctx->pc = 0x1D8310u;
    // 0x1d8310: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8310u;
    {
        const bool branch_taken_0x1d8310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8310) {
            ctx->pc = 0x1D8328u;
            goto label_1d8328;
        }
    }
    ctx->pc = 0x1D8318u;
    // 0x1d8318: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8318u;
    {
        const bool branch_taken_0x1d8318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8318) {
            ctx->pc = 0x1D8328u;
            goto label_1d8328;
        }
    }
    ctx->pc = 0x1D8320u;
    // 0x1d8320: 0x10000667  b           . + 4 + (0x667 << 2)
    ctx->pc = 0x1D8320u;
    {
        const bool branch_taken_0x1d8320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8320) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8328u;
label_1d8328:
    // 0x1d8328: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d8328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d832c: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1d832cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1d8330: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x1D8330u;
    {
        const bool branch_taken_0x1d8330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8330u;
            // 0x1d8334: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8330) {
            ctx->pc = 0x1D85F0u;
            goto label_1d85f0;
        }
    }
    ctx->pc = 0x1D8338u;
    // 0x1d8338: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1D8338u;
    {
        const bool branch_taken_0x1d8338 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d8338) {
            ctx->pc = 0x1D84A0u;
            goto label_1d84a0;
        }
    }
    ctx->pc = 0x1D8340u;
    // 0x1d8340: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d8340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d8344: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D8344u;
    {
        const bool branch_taken_0x1d8344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D8348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8344u;
            // 0x1d8348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8344) {
            ctx->pc = 0x1D83C0u;
            goto label_1d83c0;
        }
    }
    ctx->pc = 0x1D834Cu;
    // 0x1d834c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D834Cu;
    {
        const bool branch_taken_0x1d834c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d834c) {
            ctx->pc = 0x1D8360u;
            goto label_1d8360;
        }
    }
    ctx->pc = 0x1D8354u;
    // 0x1d8354: 0x1000065a  b           . + 4 + (0x65A << 2)
    ctx->pc = 0x1D8354u;
    {
        const bool branch_taken_0x1d8354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8354) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D835Cu;
    // 0x1d835c: 0x0  nop
    ctx->pc = 0x1d835cu;
    // NOP
label_1d8360:
    // 0x1d8360: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8364: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8368: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d836c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D836Cu;
    SET_GPR_U32(ctx, 31, 0x1D8374u);
    ctx->pc = 0x1D8370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D836Cu;
            // 0x1d8370: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8374u; }
        if (ctx->pc != 0x1D8374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8374u; }
        if (ctx->pc != 0x1D8374u) { return; }
    }
    ctx->pc = 0x1D8374u;
    // 0x1d8374: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8378: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d837c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d837cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8380: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8384: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8384u;
    SET_GPR_U32(ctx, 31, 0x1D838Cu);
    ctx->pc = 0x1D8388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8384u;
            // 0x1d8388: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D838Cu; }
        if (ctx->pc != 0x1D838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D838Cu; }
        if (ctx->pc != 0x1D838Cu) { return; }
    }
    ctx->pc = 0x1D838Cu;
    // 0x1d838c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8390: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8394: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8398: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8398u;
    SET_GPR_U32(ctx, 31, 0x1D83A0u);
    ctx->pc = 0x1D839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8398u;
            // 0x1d839c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83A0u; }
        if (ctx->pc != 0x1D83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83A0u; }
        if (ctx->pc != 0x1D83A0u) { return; }
    }
    ctx->pc = 0x1D83A0u;
    // 0x1d83a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d83a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d83a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d83a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d83ac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d83acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d83b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D83B0u;
    SET_GPR_U32(ctx, 31, 0x1D83B8u);
    ctx->pc = 0x1D83B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83B0u;
            // 0x1d83b4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83B8u; }
        if (ctx->pc != 0x1D83B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83B8u; }
        if (ctx->pc != 0x1D83B8u) { return; }
    }
    ctx->pc = 0x1D83B8u;
    // 0x1d83b8: 0x10000641  b           . + 4 + (0x641 << 2)
    ctx->pc = 0x1D83B8u;
    {
        const bool branch_taken_0x1d83b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d83b8) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D83C0u;
label_1d83c0:
    // 0x1d83c0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D83C0u;
    SET_GPR_U32(ctx, 31, 0x1D83C8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83C8u; }
        if (ctx->pc != 0x1D83C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83C8u; }
        if (ctx->pc != 0x1D83C8u) { return; }
    }
    ctx->pc = 0x1D83C8u;
    // 0x1d83c8: 0x1840063d  blez        $v0, . + 4 + (0x63D << 2)
    ctx->pc = 0x1D83C8u;
    {
        const bool branch_taken_0x1d83c8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d83c8) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D83D0u;
    // 0x1d83d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d83d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d83d8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d83dc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D83DCu;
    SET_GPR_U32(ctx, 31, 0x1D83E4u);
    ctx->pc = 0x1D83E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83DCu;
            // 0x1d83e0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83E4u; }
        if (ctx->pc != 0x1D83E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83E4u; }
        if (ctx->pc != 0x1D83E4u) { return; }
    }
    ctx->pc = 0x1D83E4u;
    // 0x1d83e4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d83e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d83e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d83ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d83f0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d83f4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D83F4u;
    SET_GPR_U32(ctx, 31, 0x1D83FCu);
    ctx->pc = 0x1D83F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D83F4u;
            // 0x1d83f8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83FCu; }
        if (ctx->pc != 0x1D83FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D83FCu; }
        if (ctx->pc != 0x1D83FCu) { return; }
    }
    ctx->pc = 0x1D83FCu;
    // 0x1d83fc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d83fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8400: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8408: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d840c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d840cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8410: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8410u;
    SET_GPR_U32(ctx, 31, 0x1D8418u);
    ctx->pc = 0x1D8414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8410u;
            // 0x1d8414: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8418u; }
        if (ctx->pc != 0x1D8418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8418u; }
        if (ctx->pc != 0x1D8418u) { return; }
    }
    ctx->pc = 0x1D8418u;
    // 0x1d8418: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d841c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8420: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8424: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8428: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d842c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D842Cu;
    SET_GPR_U32(ctx, 31, 0x1D8434u);
    ctx->pc = 0x1D8430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D842Cu;
            // 0x1d8430: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8434u; }
        if (ctx->pc != 0x1D8434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8434u; }
        if (ctx->pc != 0x1D8434u) { return; }
    }
    ctx->pc = 0x1D8434u;
    // 0x1d8434: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8438: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d843c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d843cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8440: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8440u;
    SET_GPR_U32(ctx, 31, 0x1D8448u);
    ctx->pc = 0x1D8444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8440u;
            // 0x1d8444: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8448u; }
        if (ctx->pc != 0x1D8448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8448u; }
        if (ctx->pc != 0x1D8448u) { return; }
    }
    ctx->pc = 0x1D8448u;
    // 0x1d8448: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d844c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d844cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8450: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8454: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8458: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8458u;
    SET_GPR_U32(ctx, 31, 0x1D8460u);
    ctx->pc = 0x1D845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8458u;
            // 0x1d845c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8460u; }
        if (ctx->pc != 0x1D8460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8460u; }
        if (ctx->pc != 0x1D8460u) { return; }
    }
    ctx->pc = 0x1D8460u;
    // 0x1d8460: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8464: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8468: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d846c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8470: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8474: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8474u;
    SET_GPR_U32(ctx, 31, 0x1D847Cu);
    ctx->pc = 0x1D8478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8474u;
            // 0x1d8478: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D847Cu; }
        if (ctx->pc != 0x1D847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D847Cu; }
        if (ctx->pc != 0x1D847Cu) { return; }
    }
    ctx->pc = 0x1D847Cu;
    // 0x1d847c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d847cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8480: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8488: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d848c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8490: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8490u;
    SET_GPR_U32(ctx, 31, 0x1D8498u);
    ctx->pc = 0x1D8494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8490u;
            // 0x1d8494: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8498u; }
        if (ctx->pc != 0x1D8498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8498u; }
        if (ctx->pc != 0x1D8498u) { return; }
    }
    ctx->pc = 0x1D8498u;
    // 0x1d8498: 0x10000609  b           . + 4 + (0x609 << 2)
    ctx->pc = 0x1D8498u;
    {
        const bool branch_taken_0x1d8498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8498) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D84A0u;
label_1d84a0:
    // 0x1d84a0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D84A0u;
    SET_GPR_U32(ctx, 31, 0x1D84A8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84A8u; }
        if (ctx->pc != 0x1D84A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84A8u; }
        if (ctx->pc != 0x1D84A8u) { return; }
    }
    ctx->pc = 0x1D84A8u;
    // 0x1d84a8: 0x18400605  blez        $v0, . + 4 + (0x605 << 2)
    ctx->pc = 0x1D84A8u;
    {
        const bool branch_taken_0x1d84a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d84a8) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D84B0u;
    // 0x1d84b0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d84b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d84b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d84b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d84b8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d84b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d84bc: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D84BCu;
    SET_GPR_U32(ctx, 31, 0x1D84C4u);
    ctx->pc = 0x1D84C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84BCu;
            // 0x1d84c0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84C4u; }
        if (ctx->pc != 0x1D84C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84C4u; }
        if (ctx->pc != 0x1D84C4u) { return; }
    }
    ctx->pc = 0x1D84C4u;
    // 0x1d84c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d84c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d84c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d84cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d84d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d84d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d84d4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D84D4u;
    SET_GPR_U32(ctx, 31, 0x1D84DCu);
    ctx->pc = 0x1D84D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84D4u;
            // 0x1d84d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84DCu; }
        if (ctx->pc != 0x1D84DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84DCu; }
        if (ctx->pc != 0x1D84DCu) { return; }
    }
    ctx->pc = 0x1D84DCu;
    // 0x1d84dc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d84e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d84e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d84e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d84e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d84e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d84ec: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d84ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d84f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D84F0u;
    SET_GPR_U32(ctx, 31, 0x1D84F8u);
    ctx->pc = 0x1D84F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D84F0u;
            // 0x1d84f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84F8u; }
        if (ctx->pc != 0x1D84F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D84F8u; }
        if (ctx->pc != 0x1D84F8u) { return; }
    }
    ctx->pc = 0x1D84F8u;
    // 0x1d84f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d84f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d84fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8500: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8504: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8508: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d850c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D850Cu;
    SET_GPR_U32(ctx, 31, 0x1D8514u);
    ctx->pc = 0x1D8510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D850Cu;
            // 0x1d8510: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8514u; }
        if (ctx->pc != 0x1D8514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8514u; }
        if (ctx->pc != 0x1D8514u) { return; }
    }
    ctx->pc = 0x1D8514u;
    // 0x1d8514: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8518: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d851c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d851cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8520: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8524: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8528: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8528u;
    SET_GPR_U32(ctx, 31, 0x1D8530u);
    ctx->pc = 0x1D852Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8528u;
            // 0x1d852c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8530u; }
        if (ctx->pc != 0x1D8530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8530u; }
        if (ctx->pc != 0x1D8530u) { return; }
    }
    ctx->pc = 0x1D8530u;
    // 0x1d8530: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8534: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8538: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d853c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8540: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8544: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8544u;
    SET_GPR_U32(ctx, 31, 0x1D854Cu);
    ctx->pc = 0x1D8548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8544u;
            // 0x1d8548: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D854Cu; }
        if (ctx->pc != 0x1D854Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D854Cu; }
        if (ctx->pc != 0x1D854Cu) { return; }
    }
    ctx->pc = 0x1D854Cu;
    // 0x1d854c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8554: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8558: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8558u;
    SET_GPR_U32(ctx, 31, 0x1D8560u);
    ctx->pc = 0x1D855Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8558u;
            // 0x1d855c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8560u; }
        if (ctx->pc != 0x1D8560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8560u; }
        if (ctx->pc != 0x1D8560u) { return; }
    }
    ctx->pc = 0x1D8560u;
    // 0x1d8560: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8568: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d856c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d856cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8570: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8570u;
    SET_GPR_U32(ctx, 31, 0x1D8578u);
    ctx->pc = 0x1D8574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8570u;
            // 0x1d8574: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8578u; }
        if (ctx->pc != 0x1D8578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8578u; }
        if (ctx->pc != 0x1D8578u) { return; }
    }
    ctx->pc = 0x1D8578u;
    // 0x1d8578: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d857c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8580: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8584: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8588: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d858c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D858Cu;
    SET_GPR_U32(ctx, 31, 0x1D8594u);
    ctx->pc = 0x1D8590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D858Cu;
            // 0x1d8590: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8594u; }
        if (ctx->pc != 0x1D8594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8594u; }
        if (ctx->pc != 0x1D8594u) { return; }
    }
    ctx->pc = 0x1D8594u;
    // 0x1d8594: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8598: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d859c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d859cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d85a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d85a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d85a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d85a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D85A8u;
    SET_GPR_U32(ctx, 31, 0x1D85B0u);
    ctx->pc = 0x1D85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85A8u;
            // 0x1d85ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85B0u; }
        if (ctx->pc != 0x1D85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85B0u; }
        if (ctx->pc != 0x1D85B0u) { return; }
    }
    ctx->pc = 0x1D85B0u;
    // 0x1d85b0: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d85b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d85b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d85b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d85b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d85bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d85bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d85c0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d85c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D85C4u;
    SET_GPR_U32(ctx, 31, 0x1D85CCu);
    ctx->pc = 0x1D85C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85C4u;
            // 0x1d85c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85CCu; }
        if (ctx->pc != 0x1D85CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85CCu; }
        if (ctx->pc != 0x1D85CCu) { return; }
    }
    ctx->pc = 0x1D85CCu;
    // 0x1d85cc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d85ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d85d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d85d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d85d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d85d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d85d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d85dc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d85e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D85E0u;
    SET_GPR_U32(ctx, 31, 0x1D85E8u);
    ctx->pc = 0x1D85E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D85E0u;
            // 0x1d85e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85E8u; }
        if (ctx->pc != 0x1D85E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85E8u; }
        if (ctx->pc != 0x1D85E8u) { return; }
    }
    ctx->pc = 0x1D85E8u;
    // 0x1d85e8: 0x100005b5  b           . + 4 + (0x5B5 << 2)
    ctx->pc = 0x1D85E8u;
    {
        const bool branch_taken_0x1d85e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d85e8) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D85F0u;
label_1d85f0:
    // 0x1d85f0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D85F0u;
    SET_GPR_U32(ctx, 31, 0x1D85F8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85F8u; }
        if (ctx->pc != 0x1D85F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D85F8u; }
        if (ctx->pc != 0x1D85F8u) { return; }
    }
    ctx->pc = 0x1D85F8u;
    // 0x1d85f8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d85f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d85fc: 0x14200052  bnez        $at, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D85FCu;
    {
        const bool branch_taken_0x1d85fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d85fc) {
            ctx->pc = 0x1D8748u;
            goto label_1d8748;
        }
    }
    ctx->pc = 0x1D8604u;
    // 0x1d8604: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8608: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d860c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d860cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8610: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8610u;
    SET_GPR_U32(ctx, 31, 0x1D8618u);
    ctx->pc = 0x1D8614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8610u;
            // 0x1d8614: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8618u; }
        if (ctx->pc != 0x1D8618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8618u; }
        if (ctx->pc != 0x1D8618u) { return; }
    }
    ctx->pc = 0x1D8618u;
    // 0x1d8618: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d861c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d861cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8624: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8628: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8628u;
    SET_GPR_U32(ctx, 31, 0x1D8630u);
    ctx->pc = 0x1D862Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8628u;
            // 0x1d862c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8630u; }
        if (ctx->pc != 0x1D8630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8630u; }
        if (ctx->pc != 0x1D8630u) { return; }
    }
    ctx->pc = 0x1D8630u;
    // 0x1d8630: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8634: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d863c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8640: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8644: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8644u;
    SET_GPR_U32(ctx, 31, 0x1D864Cu);
    ctx->pc = 0x1D8648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8644u;
            // 0x1d8648: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D864Cu; }
        if (ctx->pc != 0x1D864Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D864Cu; }
        if (ctx->pc != 0x1D864Cu) { return; }
    }
    ctx->pc = 0x1D864Cu;
    // 0x1d864c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d864cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8650: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8654: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d865c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d865cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8660: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8660u;
    SET_GPR_U32(ctx, 31, 0x1D8668u);
    ctx->pc = 0x1D8664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8660u;
            // 0x1d8664: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8668u; }
        if (ctx->pc != 0x1D8668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8668u; }
        if (ctx->pc != 0x1D8668u) { return; }
    }
    ctx->pc = 0x1D8668u;
    // 0x1d8668: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d8668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d866c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d866cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8670: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8674: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8678: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d867c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D867Cu;
    SET_GPR_U32(ctx, 31, 0x1D8684u);
    ctx->pc = 0x1D8680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D867Cu;
            // 0x1d8680: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8684u; }
        if (ctx->pc != 0x1D8684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8684u; }
        if (ctx->pc != 0x1D8684u) { return; }
    }
    ctx->pc = 0x1D8684u;
    // 0x1d8684: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d8684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d8688: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d868c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d868cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8694: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8698: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8698u;
    SET_GPR_U32(ctx, 31, 0x1D86A0u);
    ctx->pc = 0x1D869Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8698u;
            // 0x1d869c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86A0u; }
        if (ctx->pc != 0x1D86A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86A0u; }
        if (ctx->pc != 0x1D86A0u) { return; }
    }
    ctx->pc = 0x1D86A0u;
    // 0x1d86a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d86a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d86a4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d86a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d86a8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d86a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d86ac: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D86ACu;
    SET_GPR_U32(ctx, 31, 0x1D86B4u);
    ctx->pc = 0x1D86B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86ACu;
            // 0x1d86b0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86B4u; }
        if (ctx->pc != 0x1D86B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86B4u; }
        if (ctx->pc != 0x1D86B4u) { return; }
    }
    ctx->pc = 0x1D86B4u;
    // 0x1d86b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d86b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d86b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d86b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d86bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d86bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d86c0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d86c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D86C4u;
    SET_GPR_U32(ctx, 31, 0x1D86CCu);
    ctx->pc = 0x1D86C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86C4u;
            // 0x1d86c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86CCu; }
        if (ctx->pc != 0x1D86CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86CCu; }
        if (ctx->pc != 0x1D86CCu) { return; }
    }
    ctx->pc = 0x1D86CCu;
    // 0x1d86cc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d86ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d86d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d86d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d86d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d86d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d86d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d86d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d86dc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d86e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D86E0u;
    SET_GPR_U32(ctx, 31, 0x1D86E8u);
    ctx->pc = 0x1D86E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86E0u;
            // 0x1d86e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86E8u; }
        if (ctx->pc != 0x1D86E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D86E8u; }
        if (ctx->pc != 0x1D86E8u) { return; }
    }
    ctx->pc = 0x1D86E8u;
    // 0x1d86e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d86ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d86f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d86f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d86f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d86f8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d86fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D86FCu;
    SET_GPR_U32(ctx, 31, 0x1D8704u);
    ctx->pc = 0x1D8700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D86FCu;
            // 0x1d8700: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8704u; }
        if (ctx->pc != 0x1D8704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8704u; }
        if (ctx->pc != 0x1D8704u) { return; }
    }
    ctx->pc = 0x1D8704u;
    // 0x1d8704: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d8704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d8708: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d870c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d870cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8714: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8718: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8718u;
    SET_GPR_U32(ctx, 31, 0x1D8720u);
    ctx->pc = 0x1D871Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8718u;
            // 0x1d871c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8720u; }
        if (ctx->pc != 0x1D8720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8720u; }
        if (ctx->pc != 0x1D8720u) { return; }
    }
    ctx->pc = 0x1D8720u;
    // 0x1d8720: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d8720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d8724: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8728: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d872c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8730: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8734: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8734u;
    SET_GPR_U32(ctx, 31, 0x1D873Cu);
    ctx->pc = 0x1D8738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8734u;
            // 0x1d8738: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D873Cu; }
        if (ctx->pc != 0x1D873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D873Cu; }
        if (ctx->pc != 0x1D873Cu) { return; }
    }
    ctx->pc = 0x1D873Cu;
    // 0x1d873c: 0x10000560  b           . + 4 + (0x560 << 2)
    ctx->pc = 0x1D873Cu;
    {
        const bool branch_taken_0x1d873c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d873c) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8744u;
    // 0x1d8744: 0x0  nop
    ctx->pc = 0x1d8744u;
    // NOP
label_1d8748:
    // 0x1d8748: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d874c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8750: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8754: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8754u;
    SET_GPR_U32(ctx, 31, 0x1D875Cu);
    ctx->pc = 0x1D8758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8754u;
            // 0x1d8758: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D875Cu; }
        if (ctx->pc != 0x1D875Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D875Cu; }
        if (ctx->pc != 0x1D875Cu) { return; }
    }
    ctx->pc = 0x1D875Cu;
    // 0x1d875c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8760: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8768: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d876c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D876Cu;
    SET_GPR_U32(ctx, 31, 0x1D8774u);
    ctx->pc = 0x1D8770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D876Cu;
            // 0x1d8770: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8774u; }
        if (ctx->pc != 0x1D8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8774u; }
        if (ctx->pc != 0x1D8774u) { return; }
    }
    ctx->pc = 0x1D8774u;
    // 0x1d8774: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8778: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d877c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d877cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8780: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8784: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8788: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8788u;
    SET_GPR_U32(ctx, 31, 0x1D8790u);
    ctx->pc = 0x1D878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8788u;
            // 0x1d878c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8790u; }
        if (ctx->pc != 0x1D8790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8790u; }
        if (ctx->pc != 0x1D8790u) { return; }
    }
    ctx->pc = 0x1D8790u;
    // 0x1d8790: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8794: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8798: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d879c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d87a0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d87a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d87a4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D87A4u;
    SET_GPR_U32(ctx, 31, 0x1D87ACu);
    ctx->pc = 0x1D87A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87A4u;
            // 0x1d87a8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87ACu; }
        if (ctx->pc != 0x1D87ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87ACu; }
        if (ctx->pc != 0x1D87ACu) { return; }
    }
    ctx->pc = 0x1D87ACu;
    // 0x1d87ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d87b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d87b4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d87b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d87b8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D87B8u;
    SET_GPR_U32(ctx, 31, 0x1D87C0u);
    ctx->pc = 0x1D87BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87B8u;
            // 0x1d87bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87C0u; }
        if (ctx->pc != 0x1D87C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87C0u; }
        if (ctx->pc != 0x1D87C0u) { return; }
    }
    ctx->pc = 0x1D87C0u;
    // 0x1d87c0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d87c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d87c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d87c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d87c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d87cc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d87ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d87d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D87D0u;
    SET_GPR_U32(ctx, 31, 0x1D87D8u);
    ctx->pc = 0x1D87D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87D0u;
            // 0x1d87d4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87D8u; }
        if (ctx->pc != 0x1D87D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87D8u; }
        if (ctx->pc != 0x1D87D8u) { return; }
    }
    ctx->pc = 0x1D87D8u;
    // 0x1d87d8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d87dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d87dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d87e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d87e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d87e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d87e8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d87e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d87ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D87ECu;
    SET_GPR_U32(ctx, 31, 0x1D87F4u);
    ctx->pc = 0x1D87F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D87ECu;
            // 0x1d87f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87F4u; }
        if (ctx->pc != 0x1D87F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D87F4u; }
        if (ctx->pc != 0x1D87F4u) { return; }
    }
    ctx->pc = 0x1D87F4u;
    // 0x1d87f4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d87f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d87fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d87fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8800: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8804: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8808: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8808u;
    SET_GPR_U32(ctx, 31, 0x1D8810u);
    ctx->pc = 0x1D880Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8808u;
            // 0x1d880c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8810u; }
        if (ctx->pc != 0x1D8810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8810u; }
        if (ctx->pc != 0x1D8810u) { return; }
    }
    ctx->pc = 0x1D8810u;
    // 0x1d8810: 0x1000052b  b           . + 4 + (0x52B << 2)
    ctx->pc = 0x1D8810u;
    {
        const bool branch_taken_0x1d8810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8810) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8818u;
label_1d8818:
    // 0x1d8818: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D8818u;
    SET_GPR_U32(ctx, 31, 0x1D8820u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8820u; }
        if (ctx->pc != 0x1D8820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8820u; }
        if (ctx->pc != 0x1D8820u) { return; }
    }
    ctx->pc = 0x1D8820u;
    // 0x1d8820: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8820u;
    {
        const bool branch_taken_0x1d8820 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8820) {
            ctx->pc = 0x1D8868u;
            goto label_1d8868;
        }
    }
    ctx->pc = 0x1D8828u;
    // 0x1d8828: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d882c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d882cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d8830: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d8830u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d8834: 0x0  nop
    ctx->pc = 0x1d8834u;
    // NOP
    // 0x1d8838: 0x0  nop
    ctx->pc = 0x1d8838u;
    // NOP
    // 0x1d883c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d883cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8840: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8840u;
    {
        const bool branch_taken_0x1d8840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8840u;
            // 0x1d8844: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8840) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8848u;
    // 0x1d8848: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8848u;
    {
        const bool branch_taken_0x1d8848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8848) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8850u;
    // 0x1d8850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8854: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d8854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8858: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D8858u;
    SET_GPR_U32(ctx, 31, 0x1D8860u);
    ctx->pc = 0x1D885Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8858u;
            // 0x1d885c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8860u; }
        if (ctx->pc != 0x1D8860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8860u; }
        if (ctx->pc != 0x1D8860u) { return; }
    }
    ctx->pc = 0x1D8860u;
    // 0x1d8860: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D8860u;
    {
        const bool branch_taken_0x1d8860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8860) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8868u;
label_1d8868:
    // 0x1d8868: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d886c: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x1d886cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1d8870: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d8870u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d8874: 0x0  nop
    ctx->pc = 0x1d8874u;
    // NOP
    // 0x1d8878: 0x0  nop
    ctx->pc = 0x1d8878u;
    // NOP
    // 0x1d887c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d887cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8880: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8880u;
    {
        const bool branch_taken_0x1d8880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8880u;
            // 0x1d8884: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8880) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8888u;
    // 0x1d8888: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8888u;
    {
        const bool branch_taken_0x1d8888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8888) {
            ctx->pc = 0x1D88A0u;
            goto label_1d88a0;
        }
    }
    ctx->pc = 0x1D8890u;
    // 0x1d8890: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8894: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8898: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D8898u;
    SET_GPR_U32(ctx, 31, 0x1D88A0u);
    ctx->pc = 0x1D889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8898u;
            // 0x1d889c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88A0u; }
        if (ctx->pc != 0x1D88A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88A0u; }
        if (ctx->pc != 0x1D88A0u) { return; }
    }
    ctx->pc = 0x1D88A0u;
label_1d88a0:
    // 0x1d88a0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d88a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d88a4: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1d88a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1d88a8: 0x10620103  beq         $v1, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1D88A8u;
    {
        const bool branch_taken_0x1d88a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D88ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88A8u;
            // 0x1d88ac: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88a8) {
            ctx->pc = 0x1D8CB8u;
            goto label_1d8cb8;
        }
    }
    ctx->pc = 0x1D88B0u;
    // 0x1d88b0: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x1D88B0u;
    {
        const bool branch_taken_0x1d88b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d88b0) {
            ctx->pc = 0x1D8AF8u;
            goto label_1d8af8;
        }
    }
    ctx->pc = 0x1D88B8u;
    // 0x1d88b8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d88b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d88bc: 0x1062003a  beq         $v1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D88BCu;
    {
        const bool branch_taken_0x1d88bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D88C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88BCu;
            // 0x1d88c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d88bc) {
            ctx->pc = 0x1D89A8u;
            goto label_1d89a8;
        }
    }
    ctx->pc = 0x1D88C4u;
    // 0x1d88c4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D88C4u;
    {
        const bool branch_taken_0x1d88c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d88c4) {
            ctx->pc = 0x1D88D8u;
            goto label_1d88d8;
        }
    }
    ctx->pc = 0x1D88CCu;
    // 0x1d88cc: 0x100004fc  b           . + 4 + (0x4FC << 2)
    ctx->pc = 0x1D88CCu;
    {
        const bool branch_taken_0x1d88cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d88cc) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D88D4u;
    // 0x1d88d4: 0x0  nop
    ctx->pc = 0x1d88d4u;
    // NOP
label_1d88d8:
    // 0x1d88d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d88dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d88e0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d88e4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D88E4u;
    SET_GPR_U32(ctx, 31, 0x1D88ECu);
    ctx->pc = 0x1D88E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88E4u;
            // 0x1d88e8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88ECu; }
        if (ctx->pc != 0x1D88ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D88ECu; }
        if (ctx->pc != 0x1D88ECu) { return; }
    }
    ctx->pc = 0x1D88ECu;
    // 0x1d88ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d88ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d88f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d88f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d88f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d88f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d88f8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d88f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d88fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D88FCu;
    SET_GPR_U32(ctx, 31, 0x1D8904u);
    ctx->pc = 0x1D8900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D88FCu;
            // 0x1d8900: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8904u; }
        if (ctx->pc != 0x1D8904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8904u; }
        if (ctx->pc != 0x1D8904u) { return; }
    }
    ctx->pc = 0x1D8904u;
    // 0x1d8904: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8908: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d890c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d890cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8914: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8918: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8918u;
    SET_GPR_U32(ctx, 31, 0x1D8920u);
    ctx->pc = 0x1D891Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8918u;
            // 0x1d891c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8920u; }
        if (ctx->pc != 0x1D8920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8920u; }
        if (ctx->pc != 0x1D8920u) { return; }
    }
    ctx->pc = 0x1D8920u;
    // 0x1d8920: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8924: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8928: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d892c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8930: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8934: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8934u;
    SET_GPR_U32(ctx, 31, 0x1D893Cu);
    ctx->pc = 0x1D8938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8934u;
            // 0x1d8938: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D893Cu; }
        if (ctx->pc != 0x1D893Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D893Cu; }
        if (ctx->pc != 0x1D893Cu) { return; }
    }
    ctx->pc = 0x1D893Cu;
    // 0x1d893c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d893cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8940: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8944: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8948: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8948u;
    SET_GPR_U32(ctx, 31, 0x1D8950u);
    ctx->pc = 0x1D894Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8948u;
            // 0x1d894c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8950u; }
        if (ctx->pc != 0x1D8950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8950u; }
        if (ctx->pc != 0x1D8950u) { return; }
    }
    ctx->pc = 0x1D8950u;
    // 0x1d8950: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8954: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8958: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d895c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d895cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8960: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8960u;
    SET_GPR_U32(ctx, 31, 0x1D8968u);
    ctx->pc = 0x1D8964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8960u;
            // 0x1d8964: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8968u; }
        if (ctx->pc != 0x1D8968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8968u; }
        if (ctx->pc != 0x1D8968u) { return; }
    }
    ctx->pc = 0x1D8968u;
    // 0x1d8968: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d896c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8970: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8974: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8978: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d897c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D897Cu;
    SET_GPR_U32(ctx, 31, 0x1D8984u);
    ctx->pc = 0x1D8980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D897Cu;
            // 0x1d8980: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8984u; }
        if (ctx->pc != 0x1D8984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8984u; }
        if (ctx->pc != 0x1D8984u) { return; }
    }
    ctx->pc = 0x1D8984u;
    // 0x1d8984: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8988: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d898c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d898cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8990: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8994: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8998: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8998u;
    SET_GPR_U32(ctx, 31, 0x1D89A0u);
    ctx->pc = 0x1D899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8998u;
            // 0x1d899c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89A0u; }
        if (ctx->pc != 0x1D89A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89A0u; }
        if (ctx->pc != 0x1D89A0u) { return; }
    }
    ctx->pc = 0x1D89A0u;
    // 0x1d89a0: 0x100004c7  b           . + 4 + (0x4C7 << 2)
    ctx->pc = 0x1D89A0u;
    {
        const bool branch_taken_0x1d89a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d89a0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D89A8u;
label_1d89a8:
    // 0x1d89a8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D89A8u;
    SET_GPR_U32(ctx, 31, 0x1D89B0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89B0u; }
        if (ctx->pc != 0x1D89B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89B0u; }
        if (ctx->pc != 0x1D89B0u) { return; }
    }
    ctx->pc = 0x1D89B0u;
    // 0x1d89b0: 0x184004c3  blez        $v0, . + 4 + (0x4C3 << 2)
    ctx->pc = 0x1D89B0u;
    {
        const bool branch_taken_0x1d89b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d89b0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D89B8u;
    // 0x1d89b8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d89b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d89bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d89bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d89c0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d89c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d89c4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D89C4u;
    SET_GPR_U32(ctx, 31, 0x1D89CCu);
    ctx->pc = 0x1D89C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89C4u;
            // 0x1d89c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89CCu; }
        if (ctx->pc != 0x1D89CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89CCu; }
        if (ctx->pc != 0x1D89CCu) { return; }
    }
    ctx->pc = 0x1D89CCu;
    // 0x1d89cc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d89ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d89d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d89d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d89d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d89d8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d89d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d89dc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D89DCu;
    SET_GPR_U32(ctx, 31, 0x1D89E4u);
    ctx->pc = 0x1D89E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89DCu;
            // 0x1d89e0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89E4u; }
        if (ctx->pc != 0x1D89E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D89E4u; }
        if (ctx->pc != 0x1D89E4u) { return; }
    }
    ctx->pc = 0x1D89E4u;
    // 0x1d89e4: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d89e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d89e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d89ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d89ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d89f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d89f4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d89f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d89f8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D89F8u;
    SET_GPR_U32(ctx, 31, 0x1D8A00u);
    ctx->pc = 0x1D89FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D89F8u;
            // 0x1d89fc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A00u; }
        if (ctx->pc != 0x1D8A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A00u; }
        if (ctx->pc != 0x1D8A00u) { return; }
    }
    ctx->pc = 0x1D8A00u;
    // 0x1d8a00: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8a04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8a0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a10: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8a14: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8A14u;
    SET_GPR_U32(ctx, 31, 0x1D8A1Cu);
    ctx->pc = 0x1D8A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A14u;
            // 0x1d8a18: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A1Cu; }
        if (ctx->pc != 0x1D8A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A1Cu; }
        if (ctx->pc != 0x1D8A1Cu) { return; }
    }
    ctx->pc = 0x1D8A1Cu;
    // 0x1d8a1c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8a20: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8a28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a2c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8a30: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8A30u;
    SET_GPR_U32(ctx, 31, 0x1D8A38u);
    ctx->pc = 0x1D8A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A30u;
            // 0x1d8a34: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A38u; }
        if (ctx->pc != 0x1D8A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A38u; }
        if (ctx->pc != 0x1D8A38u) { return; }
    }
    ctx->pc = 0x1D8A38u;
    // 0x1d8a38: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8a3c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8a44: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a48: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8a4c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8A4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A54u);
    ctx->pc = 0x1D8A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A4Cu;
            // 0x1d8a50: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A54u; }
        if (ctx->pc != 0x1D8A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A54u; }
        if (ctx->pc != 0x1D8A54u) { return; }
    }
    ctx->pc = 0x1D8A54u;
    // 0x1d8a54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a5c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8a60: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x1D8A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A60u;
            // 0x1d8a64: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A68u; }
        if (ctx->pc != 0x1D8A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A68u; }
        if (ctx->pc != 0x1D8A68u) { return; }
    }
    ctx->pc = 0x1D8A68u;
    // 0x1d8a68: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8a70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a74: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8a78: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8A78u;
    SET_GPR_U32(ctx, 31, 0x1D8A80u);
    ctx->pc = 0x1D8A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A78u;
            // 0x1d8a7c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A80u; }
        if (ctx->pc != 0x1D8A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A80u; }
        if (ctx->pc != 0x1D8A80u) { return; }
    }
    ctx->pc = 0x1D8A80u;
    // 0x1d8a80: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8a84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8a88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8a8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8a90: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8a94: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8A94u;
    SET_GPR_U32(ctx, 31, 0x1D8A9Cu);
    ctx->pc = 0x1D8A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8A94u;
            // 0x1d8a98: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A9Cu; }
        if (ctx->pc != 0x1D8A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A9Cu; }
        if (ctx->pc != 0x1D8A9Cu) { return; }
    }
    ctx->pc = 0x1D8A9Cu;
    // 0x1d8a9c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8aa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8aac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8ab0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8AB0u;
    SET_GPR_U32(ctx, 31, 0x1D8AB8u);
    ctx->pc = 0x1D8AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AB0u;
            // 0x1d8ab4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AB8u; }
        if (ctx->pc != 0x1D8AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AB8u; }
        if (ctx->pc != 0x1D8AB8u) { return; }
    }
    ctx->pc = 0x1D8AB8u;
    // 0x1d8ab8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8abc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8ac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ac8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8acc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8ACCu;
    SET_GPR_U32(ctx, 31, 0x1D8AD4u);
    ctx->pc = 0x1D8AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8ACCu;
            // 0x1d8ad0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD4u; }
        if (ctx->pc != 0x1D8AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AD4u; }
        if (ctx->pc != 0x1D8AD4u) { return; }
    }
    ctx->pc = 0x1D8AD4u;
    // 0x1d8ad4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8ad8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8adc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ae4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8ae8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8AE8u;
    SET_GPR_U32(ctx, 31, 0x1D8AF0u);
    ctx->pc = 0x1D8AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8AE8u;
            // 0x1d8aec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AF0u; }
        if (ctx->pc != 0x1D8AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8AF0u; }
        if (ctx->pc != 0x1D8AF0u) { return; }
    }
    ctx->pc = 0x1D8AF0u;
    // 0x1d8af0: 0x10000473  b           . + 4 + (0x473 << 2)
    ctx->pc = 0x1D8AF0u;
    {
        const bool branch_taken_0x1d8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8af0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8AF8u;
label_1d8af8:
    // 0x1d8af8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D8AF8u;
    SET_GPR_U32(ctx, 31, 0x1D8B00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B00u; }
        if (ctx->pc != 0x1D8B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B00u; }
        if (ctx->pc != 0x1D8B00u) { return; }
    }
    ctx->pc = 0x1D8B00u;
    // 0x1d8b00: 0x1840046f  blez        $v0, . + 4 + (0x46F << 2)
    ctx->pc = 0x1D8B00u;
    {
        const bool branch_taken_0x1d8b00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8b00) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8B08u;
    // 0x1d8b08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b10: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b14: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8B14u;
    SET_GPR_U32(ctx, 31, 0x1D8B1Cu);
    ctx->pc = 0x1D8B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B14u;
            // 0x1d8b18: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B1Cu; }
        if (ctx->pc != 0x1D8B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B1Cu; }
        if (ctx->pc != 0x1D8B1Cu) { return; }
    }
    ctx->pc = 0x1D8B1Cu;
    // 0x1d8b1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8b20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8b24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b28: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D8B34u);
    ctx->pc = 0x1D8B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B2Cu;
            // 0x1d8b30: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B34u; }
        if (ctx->pc != 0x1D8B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B34u; }
        if (ctx->pc != 0x1D8B34u) { return; }
    }
    ctx->pc = 0x1D8B34u;
    // 0x1d8b34: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d8b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d8b38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8b40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b44: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8B48u;
    SET_GPR_U32(ctx, 31, 0x1D8B50u);
    ctx->pc = 0x1D8B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B48u;
            // 0x1d8b4c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B50u; }
        if (ctx->pc != 0x1D8B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B50u; }
        if (ctx->pc != 0x1D8B50u) { return; }
    }
    ctx->pc = 0x1D8B50u;
    // 0x1d8b50: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d8b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d8b54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b60: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b64: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8B64u;
    SET_GPR_U32(ctx, 31, 0x1D8B6Cu);
    ctx->pc = 0x1D8B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B64u;
            // 0x1d8b68: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B6Cu; }
        if (ctx->pc != 0x1D8B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B6Cu; }
        if (ctx->pc != 0x1D8B6Cu) { return; }
    }
    ctx->pc = 0x1D8B6Cu;
    // 0x1d8b6c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8b70: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8b78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b7c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8B80u;
    SET_GPR_U32(ctx, 31, 0x1D8B88u);
    ctx->pc = 0x1D8B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B80u;
            // 0x1d8b84: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B88u; }
        if (ctx->pc != 0x1D8B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8B88u; }
        if (ctx->pc != 0x1D8B88u) { return; }
    }
    ctx->pc = 0x1D8B88u;
    // 0x1d8b88: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8b8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8b90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8b94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8b98: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8b9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D8BA4u);
    ctx->pc = 0x1D8BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8B9Cu;
            // 0x1d8ba0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA4u; }
        if (ctx->pc != 0x1D8BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BA4u; }
        if (ctx->pc != 0x1D8BA4u) { return; }
    }
    ctx->pc = 0x1D8BA4u;
    // 0x1d8ba4: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1d8ba8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8bac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8bb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8bb4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8bb8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8BB8u;
    SET_GPR_U32(ctx, 31, 0x1D8BC0u);
    ctx->pc = 0x1D8BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BB8u;
            // 0x1d8bbc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC0u; }
        if (ctx->pc != 0x1D8BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BC0u; }
        if (ctx->pc != 0x1D8BC0u) { return; }
    }
    ctx->pc = 0x1D8BC0u;
    // 0x1d8bc0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d8bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d8bc4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8bc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8bcc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8bd0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8bd4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8BD4u;
    SET_GPR_U32(ctx, 31, 0x1D8BDCu);
    ctx->pc = 0x1D8BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BD4u;
            // 0x1d8bd8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BDCu; }
        if (ctx->pc != 0x1D8BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BDCu; }
        if (ctx->pc != 0x1D8BDCu) { return; }
    }
    ctx->pc = 0x1D8BDCu;
    // 0x1d8bdc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8be0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8be4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8be8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8BE8u;
    SET_GPR_U32(ctx, 31, 0x1D8BF0u);
    ctx->pc = 0x1D8BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8BE8u;
            // 0x1d8bec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BF0u; }
        if (ctx->pc != 0x1D8BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8BF0u; }
        if (ctx->pc != 0x1D8BF0u) { return; }
    }
    ctx->pc = 0x1D8BF0u;
    // 0x1d8bf0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8bf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8bf8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8bfc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c00: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C00u;
    SET_GPR_U32(ctx, 31, 0x1D8C08u);
    ctx->pc = 0x1D8C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C00u;
            // 0x1d8c04: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C08u; }
        if (ctx->pc != 0x1D8C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C08u; }
        if (ctx->pc != 0x1D8C08u) { return; }
    }
    ctx->pc = 0x1D8C08u;
    // 0x1d8c08: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d8c0c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c10: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8c14: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8c18: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c1c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C24u);
    ctx->pc = 0x1D8C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C1Cu;
            // 0x1d8c20: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C24u; }
        if (ctx->pc != 0x1D8C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C24u; }
        if (ctx->pc != 0x1D8C24u) { return; }
    }
    ctx->pc = 0x1D8C24u;
    // 0x1d8c24: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d8c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d8c28: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8c30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8c34: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c38: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C38u;
    SET_GPR_U32(ctx, 31, 0x1D8C40u);
    ctx->pc = 0x1D8C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C38u;
            // 0x1d8c3c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C40u; }
        if (ctx->pc != 0x1D8C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C40u; }
        if (ctx->pc != 0x1D8C40u) { return; }
    }
    ctx->pc = 0x1D8C40u;
    // 0x1d8c40: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8c44: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8c4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8c50: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c54: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C54u;
    SET_GPR_U32(ctx, 31, 0x1D8C5Cu);
    ctx->pc = 0x1D8C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C54u;
            // 0x1d8c58: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C5Cu; }
        if (ctx->pc != 0x1D8C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C5Cu; }
        if (ctx->pc != 0x1D8C5Cu) { return; }
    }
    ctx->pc = 0x1D8C5Cu;
    // 0x1d8c5c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8c60: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c64: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8c68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8c6c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c70: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C70u;
    SET_GPR_U32(ctx, 31, 0x1D8C78u);
    ctx->pc = 0x1D8C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C70u;
            // 0x1d8c74: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C78u; }
        if (ctx->pc != 0x1D8C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C78u; }
        if (ctx->pc != 0x1D8C78u) { return; }
    }
    ctx->pc = 0x1D8C78u;
    // 0x1d8c78: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1d8c7c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8c84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8c88: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8c8c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C94u);
    ctx->pc = 0x1D8C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8C8Cu;
            // 0x1d8c90: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C94u; }
        if (ctx->pc != 0x1D8C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8C94u; }
        if (ctx->pc != 0x1D8C94u) { return; }
    }
    ctx->pc = 0x1D8C94u;
    // 0x1d8c94: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d8c98: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8c9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ca4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8ca8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8CA8u;
    SET_GPR_U32(ctx, 31, 0x1D8CB0u);
    ctx->pc = 0x1D8CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CA8u;
            // 0x1d8cac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB0u; }
        if (ctx->pc != 0x1D8CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CB0u; }
        if (ctx->pc != 0x1D8CB0u) { return; }
    }
    ctx->pc = 0x1D8CB0u;
    // 0x1d8cb0: 0x10000403  b           . + 4 + (0x403 << 2)
    ctx->pc = 0x1D8CB0u;
    {
        const bool branch_taken_0x1d8cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cb0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8CB8u;
label_1d8cb8:
    // 0x1d8cb8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D8CB8u;
    SET_GPR_U32(ctx, 31, 0x1D8CC0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CC0u; }
        if (ctx->pc != 0x1D8CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CC0u; }
        if (ctx->pc != 0x1D8CC0u) { return; }
    }
    ctx->pc = 0x1D8CC0u;
    // 0x1d8cc0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d8cc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d8cc4: 0x1420006e  bnez        $at, . + 4 + (0x6E << 2)
    ctx->pc = 0x1D8CC4u;
    {
        const bool branch_taken_0x1d8cc4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8cc4) {
            ctx->pc = 0x1D8E80u;
            goto label_1d8e80;
        }
    }
    ctx->pc = 0x1D8CCCu;
    // 0x1d8ccc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8cd4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8cd8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8CD8u;
    SET_GPR_U32(ctx, 31, 0x1D8CE0u);
    ctx->pc = 0x1D8CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CD8u;
            // 0x1d8cdc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CE0u; }
        if (ctx->pc != 0x1D8CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CE0u; }
        if (ctx->pc != 0x1D8CE0u) { return; }
    }
    ctx->pc = 0x1D8CE0u;
    // 0x1d8ce0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ce8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8cec: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8cf0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8CF0u;
    SET_GPR_U32(ctx, 31, 0x1D8CF8u);
    ctx->pc = 0x1D8CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF0u;
            // 0x1d8cf4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF8u; }
        if (ctx->pc != 0x1D8CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8CF8u; }
        if (ctx->pc != 0x1D8CF8u) { return; }
    }
    ctx->pc = 0x1D8CF8u;
    // 0x1d8cf8: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8cfc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d08: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d0c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D0Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D14u);
    ctx->pc = 0x1D8D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D0Cu;
            // 0x1d8d10: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D14u; }
        if (ctx->pc != 0x1D8D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D14u; }
        if (ctx->pc != 0x1D8D14u) { return; }
    }
    ctx->pc = 0x1D8D14u;
    // 0x1d8d14: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8d18: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d24: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d28: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D28u;
    SET_GPR_U32(ctx, 31, 0x1D8D30u);
    ctx->pc = 0x1D8D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D28u;
            // 0x1d8d2c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D30u; }
        if (ctx->pc != 0x1D8D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D30u; }
        if (ctx->pc != 0x1D8D30u) { return; }
    }
    ctx->pc = 0x1D8D30u;
    // 0x1d8d30: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d8d34: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d3c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d40: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d44: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D44u;
    SET_GPR_U32(ctx, 31, 0x1D8D4Cu);
    ctx->pc = 0x1D8D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D44u;
            // 0x1d8d48: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D4Cu; }
        if (ctx->pc != 0x1D8D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D4Cu; }
        if (ctx->pc != 0x1D8D4Cu) { return; }
    }
    ctx->pc = 0x1D8D4Cu;
    // 0x1d8d4c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d8d50: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d5c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d60: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D60u;
    SET_GPR_U32(ctx, 31, 0x1D8D68u);
    ctx->pc = 0x1D8D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D60u;
            // 0x1d8d64: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D68u; }
        if (ctx->pc != 0x1D8D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D68u; }
        if (ctx->pc != 0x1D8D68u) { return; }
    }
    ctx->pc = 0x1D8D68u;
    // 0x1d8d68: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d8d6c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d78: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d7c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D7Cu;
    SET_GPR_U32(ctx, 31, 0x1D8D84u);
    ctx->pc = 0x1D8D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D7Cu;
            // 0x1d8d80: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D84u; }
        if (ctx->pc != 0x1D8D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D84u; }
        if (ctx->pc != 0x1D8D84u) { return; }
    }
    ctx->pc = 0x1D8D84u;
    // 0x1d8d84: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d8d88: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8d90: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8d94: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8d98: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8D98u;
    SET_GPR_U32(ctx, 31, 0x1D8DA0u);
    ctx->pc = 0x1D8D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D98u;
            // 0x1d8d9c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DA0u; }
        if (ctx->pc != 0x1D8DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DA0u; }
        if (ctx->pc != 0x1D8DA0u) { return; }
    }
    ctx->pc = 0x1D8DA0u;
    // 0x1d8da0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8da8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8dac: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8DACu;
    SET_GPR_U32(ctx, 31, 0x1D8DB4u);
    ctx->pc = 0x1D8DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DACu;
            // 0x1d8db0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DB4u; }
        if (ctx->pc != 0x1D8DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DB4u; }
        if (ctx->pc != 0x1D8DB4u) { return; }
    }
    ctx->pc = 0x1D8DB4u;
    // 0x1d8db4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8db8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8dbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8dc0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8dc4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8DC4u;
    SET_GPR_U32(ctx, 31, 0x1D8DCCu);
    ctx->pc = 0x1D8DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DC4u;
            // 0x1d8dc8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DCCu; }
        if (ctx->pc != 0x1D8DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DCCu; }
        if (ctx->pc != 0x1D8DCCu) { return; }
    }
    ctx->pc = 0x1D8DCCu;
    // 0x1d8dcc: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8dd0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8dd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8dd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8dd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ddc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8de0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8DE0u;
    SET_GPR_U32(ctx, 31, 0x1D8DE8u);
    ctx->pc = 0x1D8DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DE0u;
            // 0x1d8de4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DE8u; }
        if (ctx->pc != 0x1D8DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8DE8u; }
        if (ctx->pc != 0x1D8DE8u) { return; }
    }
    ctx->pc = 0x1D8DE8u;
    // 0x1d8de8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8dec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8df0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8df0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8df4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8df8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8dfc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8DFCu;
    SET_GPR_U32(ctx, 31, 0x1D8E04u);
    ctx->pc = 0x1D8E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8DFCu;
            // 0x1d8e00: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E04u; }
        if (ctx->pc != 0x1D8E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E04u; }
        if (ctx->pc != 0x1D8E04u) { return; }
    }
    ctx->pc = 0x1D8E04u;
    // 0x1d8e04: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d8e08: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8e10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8e14: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8e18: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8E18u;
    SET_GPR_U32(ctx, 31, 0x1D8E20u);
    ctx->pc = 0x1D8E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E18u;
            // 0x1d8e1c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E20u; }
        if (ctx->pc != 0x1D8E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E20u; }
        if (ctx->pc != 0x1D8E20u) { return; }
    }
    ctx->pc = 0x1D8E20u;
    // 0x1d8e20: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d8e24: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8e2c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8e30: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8e34: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8E34u;
    SET_GPR_U32(ctx, 31, 0x1D8E3Cu);
    ctx->pc = 0x1D8E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E34u;
            // 0x1d8e38: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E3Cu; }
        if (ctx->pc != 0x1D8E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E3Cu; }
        if (ctx->pc != 0x1D8E3Cu) { return; }
    }
    ctx->pc = 0x1D8E3Cu;
    // 0x1d8e3c: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d8e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d8e40: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8e48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8e4c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8e50: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8E50u;
    SET_GPR_U32(ctx, 31, 0x1D8E58u);
    ctx->pc = 0x1D8E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E50u;
            // 0x1d8e54: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E58u; }
        if (ctx->pc != 0x1D8E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E58u; }
        if (ctx->pc != 0x1D8E58u) { return; }
    }
    ctx->pc = 0x1D8E58u;
    // 0x1d8e58: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d8e5c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e60: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8e64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8e68: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8e6c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8E74u);
    ctx->pc = 0x1D8E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E6Cu;
            // 0x1d8e70: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E74u; }
        if (ctx->pc != 0x1D8E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E74u; }
        if (ctx->pc != 0x1D8E74u) { return; }
    }
    ctx->pc = 0x1D8E74u;
    // 0x1d8e74: 0x10000392  b           . + 4 + (0x392 << 2)
    ctx->pc = 0x1D8E74u;
    {
        const bool branch_taken_0x1d8e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8e74) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8E7Cu;
    // 0x1d8e7c: 0x0  nop
    ctx->pc = 0x1d8e7cu;
    // NOP
label_1d8e80:
    // 0x1d8e80: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8e88: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8e8c: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1D8E94u);
    ctx->pc = 0x1D8E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8E8Cu;
            // 0x1d8e90: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E94u; }
        if (ctx->pc != 0x1D8E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8E94u; }
        if (ctx->pc != 0x1D8E94u) { return; }
    }
    ctx->pc = 0x1D8E94u;
    // 0x1d8e94: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8e98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8e9c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ea0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8ea4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8EA4u;
    SET_GPR_U32(ctx, 31, 0x1D8EACu);
    ctx->pc = 0x1D8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EA4u;
            // 0x1d8ea8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EACu; }
        if (ctx->pc != 0x1D8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EACu; }
        if (ctx->pc != 0x1D8EACu) { return; }
    }
    ctx->pc = 0x1D8EACu;
    // 0x1d8eac: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8eb0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8eb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8eb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ebc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8ec0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8EC0u;
    SET_GPR_U32(ctx, 31, 0x1D8EC8u);
    ctx->pc = 0x1D8EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EC0u;
            // 0x1d8ec4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EC8u; }
        if (ctx->pc != 0x1D8EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EC8u; }
        if (ctx->pc != 0x1D8EC8u) { return; }
    }
    ctx->pc = 0x1D8EC8u;
    // 0x1d8ec8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8ecc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8ed0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ed4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ed8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8edc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8EDCu;
    SET_GPR_U32(ctx, 31, 0x1D8EE4u);
    ctx->pc = 0x1D8EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EDCu;
            // 0x1d8ee0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EE4u; }
        if (ctx->pc != 0x1D8EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8EE4u; }
        if (ctx->pc != 0x1D8EE4u) { return; }
    }
    ctx->pc = 0x1D8EE4u;
    // 0x1d8ee4: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8ee8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8eec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8ef0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ef4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8ef8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8EF8u;
    SET_GPR_U32(ctx, 31, 0x1D8F00u);
    ctx->pc = 0x1D8EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8EF8u;
            // 0x1d8efc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F00u; }
        if (ctx->pc != 0x1D8F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F00u; }
        if (ctx->pc != 0x1D8F00u) { return; }
    }
    ctx->pc = 0x1D8F00u;
    // 0x1d8f00: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8f04: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8f08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8f0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f10: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d8f14: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8F14u;
    SET_GPR_U32(ctx, 31, 0x1D8F1Cu);
    ctx->pc = 0x1D8F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F14u;
            // 0x1d8f18: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F1Cu; }
        if (ctx->pc != 0x1D8F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F1Cu; }
        if (ctx->pc != 0x1D8F1Cu) { return; }
    }
    ctx->pc = 0x1D8F1Cu;
    // 0x1d8f1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f24: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8f28: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D8F28u;
    SET_GPR_U32(ctx, 31, 0x1D8F30u);
    ctx->pc = 0x1D8F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F28u;
            // 0x1d8f2c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F30u; }
        if (ctx->pc != 0x1D8F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F30u; }
        if (ctx->pc != 0x1D8F30u) { return; }
    }
    ctx->pc = 0x1D8F30u;
    // 0x1d8f30: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8f34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8f38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f3c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8f40: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8F40u;
    SET_GPR_U32(ctx, 31, 0x1D8F48u);
    ctx->pc = 0x1D8F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F40u;
            // 0x1d8f44: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F48u; }
        if (ctx->pc != 0x1D8F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F48u; }
        if (ctx->pc != 0x1D8F48u) { return; }
    }
    ctx->pc = 0x1D8F48u;
    // 0x1d8f48: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d8f4c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8f54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f58: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8f5c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1D8F64u);
    ctx->pc = 0x1D8F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F5Cu;
            // 0x1d8f60: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F64u; }
        if (ctx->pc != 0x1D8F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F64u; }
        if (ctx->pc != 0x1D8F64u) { return; }
    }
    ctx->pc = 0x1D8F64u;
    // 0x1d8f64: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d8f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d8f68: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8f70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f74: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8f78: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8F78u;
    SET_GPR_U32(ctx, 31, 0x1D8F80u);
    ctx->pc = 0x1D8F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F78u;
            // 0x1d8f7c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F80u; }
        if (ctx->pc != 0x1D8F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F80u; }
        if (ctx->pc != 0x1D8F80u) { return; }
    }
    ctx->pc = 0x1D8F80u;
    // 0x1d8f80: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d8f84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8f88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8f88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8f8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8f90: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8f94: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8F94u;
    SET_GPR_U32(ctx, 31, 0x1D8F9Cu);
    ctx->pc = 0x1D8F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8F94u;
            // 0x1d8f98: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F9Cu; }
        if (ctx->pc != 0x1D8F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8F9Cu; }
        if (ctx->pc != 0x1D8F9Cu) { return; }
    }
    ctx->pc = 0x1D8F9Cu;
    // 0x1d8f9c: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d8f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d8fa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d8fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d8fa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d8fa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8fac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d8facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d8fb0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D8FB0u;
    SET_GPR_U32(ctx, 31, 0x1D8FB8u);
    ctx->pc = 0x1D8FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FB0u;
            // 0x1d8fb4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FB8u; }
        if (ctx->pc != 0x1D8FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FB8u; }
        if (ctx->pc != 0x1D8FB8u) { return; }
    }
    ctx->pc = 0x1D8FB8u;
    // 0x1d8fb8: 0x10000341  b           . + 4 + (0x341 << 2)
    ctx->pc = 0x1D8FB8u;
    {
        const bool branch_taken_0x1d8fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8fb8) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D8FC0u;
label_1d8fc0:
    // 0x1d8fc0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D8FC0u;
    SET_GPR_U32(ctx, 31, 0x1D8FC8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FC8u; }
        if (ctx->pc != 0x1D8FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8FC8u; }
        if (ctx->pc != 0x1D8FC8u) { return; }
    }
    ctx->pc = 0x1D8FC8u;
    // 0x1d8fc8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8FC8u;
    {
        const bool branch_taken_0x1d8fc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d8fc8) {
            ctx->pc = 0x1D9010u;
            goto label_1d9010;
        }
    }
    ctx->pc = 0x1D8FD0u;
    // 0x1d8fd0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8fd4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d8fd8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d8fd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d8fdc: 0x0  nop
    ctx->pc = 0x1d8fdcu;
    // NOP
    // 0x1d8fe0: 0x0  nop
    ctx->pc = 0x1d8fe0u;
    // NOP
    // 0x1d8fe4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d8fe4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d8fe8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D8FE8u;
    {
        const bool branch_taken_0x1d8fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8FE8u;
            // 0x1d8fec: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8fe8) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D8FF0u;
    // 0x1d8ff0: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D8FF0u;
    {
        const bool branch_taken_0x1d8ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ff0) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D8FF8u;
    // 0x1d8ff8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d8ffc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9000: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9000u;
    SET_GPR_U32(ctx, 31, 0x1D9008u);
    ctx->pc = 0x1D9004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9000u;
            // 0x1d9004: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9008u; }
        if (ctx->pc != 0x1D9008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9008u; }
        if (ctx->pc != 0x1D9008u) { return; }
    }
    ctx->pc = 0x1D9008u;
    // 0x1d9008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D9008u;
    {
        const bool branch_taken_0x1d9008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9008) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9010u;
label_1d9010:
    // 0x1d9010: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9014: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d9014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d9018: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9018u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d901c: 0x0  nop
    ctx->pc = 0x1d901cu;
    // NOP
    // 0x1d9020: 0x0  nop
    ctx->pc = 0x1d9020u;
    // NOP
    // 0x1d9024: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9024u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9028: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9028u;
    {
        const bool branch_taken_0x1d9028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D902Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9028u;
            // 0x1d902c: 0x286101a4  slti        $at, $v1, 0x1A4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)420) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9028) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9030u;
    // 0x1d9030: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9030u;
    {
        const bool branch_taken_0x1d9030 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9030) {
            ctx->pc = 0x1D9048u;
            goto label_1d9048;
        }
    }
    ctx->pc = 0x1D9038u;
    // 0x1d9038: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d903c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9040: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9040u;
    SET_GPR_U32(ctx, 31, 0x1D9048u);
    ctx->pc = 0x1D9044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9040u;
            // 0x1d9044: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9048u; }
        if (ctx->pc != 0x1D9048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9048u; }
        if (ctx->pc != 0x1D9048u) { return; }
    }
    ctx->pc = 0x1D9048u;
label_1d9048:
    // 0x1d9048: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d904c: 0x240201a4  addiu       $v0, $zero, 0x1A4
    ctx->pc = 0x1d904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x1d9050: 0x10620259  beq         $v1, $v0, . + 4 + (0x259 << 2)
    ctx->pc = 0x1D9050u;
    {
        const bool branch_taken_0x1d9050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9050u;
            // 0x1d9054: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9050) {
            ctx->pc = 0x1D99B8u;
            goto label_1d99b8;
        }
    }
    ctx->pc = 0x1D9058u;
    // 0x1d9058: 0x106201e7  beq         $v1, $v0, . + 4 + (0x1E7 << 2)
    ctx->pc = 0x1D9058u;
    {
        const bool branch_taken_0x1d9058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9058) {
            ctx->pc = 0x1D97F8u;
            goto label_1d97f8;
        }
    }
    ctx->pc = 0x1D9060u;
    // 0x1d9060: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x1d9060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1d9064: 0x10620140  beq         $v1, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x1D9064u;
    {
        const bool branch_taken_0x1d9064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9064u;
            // 0x1d9068: 0x240200f0  addiu       $v0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9064) {
            ctx->pc = 0x1D9568u;
            goto label_1d9568;
        }
    }
    ctx->pc = 0x1D906Cu;
    // 0x1d906c: 0x106200ea  beq         $v1, $v0, . + 4 + (0xEA << 2)
    ctx->pc = 0x1D906Cu;
    {
        const bool branch_taken_0x1d906c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d906c) {
            ctx->pc = 0x1D9418u;
            goto label_1d9418;
        }
    }
    ctx->pc = 0x1D9074u;
    // 0x1d9074: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1d9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1d9078: 0x10620093  beq         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x1D9078u;
    {
        const bool branch_taken_0x1d9078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D907Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9078u;
            // 0x1d907c: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9078) {
            ctx->pc = 0x1D92C8u;
            goto label_1d92c8;
        }
    }
    ctx->pc = 0x1D9080u;
    // 0x1d9080: 0x10620059  beq         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1D9080u;
    {
        const bool branch_taken_0x1d9080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9080) {
            ctx->pc = 0x1D91E8u;
            goto label_1d91e8;
        }
    }
    ctx->pc = 0x1D9088u;
    // 0x1d9088: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d9088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d908c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D908Cu;
    {
        const bool branch_taken_0x1d908c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D908Cu;
            // 0x1d9090: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d908c) {
            ctx->pc = 0x1D9108u;
            goto label_1d9108;
        }
    }
    ctx->pc = 0x1D9094u;
    // 0x1d9094: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9094u;
    {
        const bool branch_taken_0x1d9094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9094) {
            ctx->pc = 0x1D90A8u;
            goto label_1d90a8;
        }
    }
    ctx->pc = 0x1D909Cu;
    // 0x1d909c: 0x10000308  b           . + 4 + (0x308 << 2)
    ctx->pc = 0x1D909Cu;
    {
        const bool branch_taken_0x1d909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d909c) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D90A4u;
    // 0x1d90a4: 0x0  nop
    ctx->pc = 0x1d90a4u;
    // NOP
label_1d90a8:
    // 0x1d90a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d90a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d90ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d90acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d90b0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d90b4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D90B4u;
    SET_GPR_U32(ctx, 31, 0x1D90BCu);
    ctx->pc = 0x1D90B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90B4u;
            // 0x1d90b8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90BCu; }
        if (ctx->pc != 0x1D90BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90BCu; }
        if (ctx->pc != 0x1D90BCu) { return; }
    }
    ctx->pc = 0x1D90BCu;
    // 0x1d90bc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d90c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d90c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d90c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d90c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d90c8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d90cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D90CCu;
    SET_GPR_U32(ctx, 31, 0x1D90D4u);
    ctx->pc = 0x1D90D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90CCu;
            // 0x1d90d0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90D4u; }
        if (ctx->pc != 0x1D90D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90D4u; }
        if (ctx->pc != 0x1D90D4u) { return; }
    }
    ctx->pc = 0x1D90D4u;
    // 0x1d90d4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d90d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d90d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d90dc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d90dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d90e0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D90E0u;
    SET_GPR_U32(ctx, 31, 0x1D90E8u);
    ctx->pc = 0x1D90E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90E0u;
            // 0x1d90e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90E8u; }
        if (ctx->pc != 0x1D90E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D90E8u; }
        if (ctx->pc != 0x1D90E8u) { return; }
    }
    ctx->pc = 0x1D90E8u;
    // 0x1d90e8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d90ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d90ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d90f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d90f4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d90f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d90f8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D90F8u;
    SET_GPR_U32(ctx, 31, 0x1D9100u);
    ctx->pc = 0x1D90FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D90F8u;
            // 0x1d90fc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9100u; }
        if (ctx->pc != 0x1D9100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9100u; }
        if (ctx->pc != 0x1D9100u) { return; }
    }
    ctx->pc = 0x1D9100u;
    // 0x1d9100: 0x100002ef  b           . + 4 + (0x2EF << 2)
    ctx->pc = 0x1D9100u;
    {
        const bool branch_taken_0x1d9100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9100) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9108u;
label_1d9108:
    // 0x1d9108: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9108u;
    SET_GPR_U32(ctx, 31, 0x1D9110u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9110u; }
        if (ctx->pc != 0x1D9110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9110u; }
        if (ctx->pc != 0x1D9110u) { return; }
    }
    ctx->pc = 0x1D9110u;
    // 0x1d9110: 0x184002eb  blez        $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x1D9110u;
    {
        const bool branch_taken_0x1d9110 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9110) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9118u;
    // 0x1d9118: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d911c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d911cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9120: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9124: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9124u;
    SET_GPR_U32(ctx, 31, 0x1D912Cu);
    ctx->pc = 0x1D9128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9124u;
            // 0x1d9128: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D912Cu; }
        if (ctx->pc != 0x1D912Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D912Cu; }
        if (ctx->pc != 0x1D912Cu) { return; }
    }
    ctx->pc = 0x1D912Cu;
    // 0x1d912c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d912cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9130: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9134: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9138: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d913c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D913Cu;
    SET_GPR_U32(ctx, 31, 0x1D9144u);
    ctx->pc = 0x1D9140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D913Cu;
            // 0x1d9140: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9144u; }
        if (ctx->pc != 0x1D9144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9144u; }
        if (ctx->pc != 0x1D9144u) { return; }
    }
    ctx->pc = 0x1D9144u;
    // 0x1d9144: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d9144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d9148: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d914c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d914cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9150: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9154: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9158: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9158u;
    SET_GPR_U32(ctx, 31, 0x1D9160u);
    ctx->pc = 0x1D915Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9158u;
            // 0x1d915c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9160u; }
        if (ctx->pc != 0x1D9160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9160u; }
        if (ctx->pc != 0x1D9160u) { return; }
    }
    ctx->pc = 0x1D9160u;
    // 0x1d9160: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d9160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d9164: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d916c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d916cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9170: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9174: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9174u;
    SET_GPR_U32(ctx, 31, 0x1D917Cu);
    ctx->pc = 0x1D9178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9174u;
            // 0x1d9178: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D917Cu; }
        if (ctx->pc != 0x1D917Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D917Cu; }
        if (ctx->pc != 0x1D917Cu) { return; }
    }
    ctx->pc = 0x1D917Cu;
    // 0x1d917c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d917cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9180: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9184: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9188: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9188u;
    SET_GPR_U32(ctx, 31, 0x1D9190u);
    ctx->pc = 0x1D918Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9188u;
            // 0x1d918c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9190u; }
        if (ctx->pc != 0x1D9190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9190u; }
        if (ctx->pc != 0x1D9190u) { return; }
    }
    ctx->pc = 0x1D9190u;
    // 0x1d9190: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9194: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9198: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d919c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d91a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D91A0u;
    SET_GPR_U32(ctx, 31, 0x1D91A8u);
    ctx->pc = 0x1D91A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91A0u;
            // 0x1d91a4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91A8u; }
        if (ctx->pc != 0x1D91A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91A8u; }
        if (ctx->pc != 0x1D91A8u) { return; }
    }
    ctx->pc = 0x1D91A8u;
    // 0x1d91a8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d91ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d91acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d91b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d91b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d91b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d91b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d91b8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d91b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d91bc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D91BCu;
    SET_GPR_U32(ctx, 31, 0x1D91C4u);
    ctx->pc = 0x1D91C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91BCu;
            // 0x1d91c0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91C4u; }
        if (ctx->pc != 0x1D91C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91C4u; }
        if (ctx->pc != 0x1D91C4u) { return; }
    }
    ctx->pc = 0x1D91C4u;
    // 0x1d91c4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d91c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d91cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d91ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d91d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d91d4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d91d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d91d8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D91D8u;
    SET_GPR_U32(ctx, 31, 0x1D91E0u);
    ctx->pc = 0x1D91DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D91D8u;
            // 0x1d91dc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91E0u; }
        if (ctx->pc != 0x1D91E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91E0u; }
        if (ctx->pc != 0x1D91E0u) { return; }
    }
    ctx->pc = 0x1D91E0u;
    // 0x1d91e0: 0x100002b7  b           . + 4 + (0x2B7 << 2)
    ctx->pc = 0x1D91E0u;
    {
        const bool branch_taken_0x1d91e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d91e0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D91E8u;
label_1d91e8:
    // 0x1d91e8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D91E8u;
    SET_GPR_U32(ctx, 31, 0x1D91F0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91F0u; }
        if (ctx->pc != 0x1D91F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D91F0u; }
        if (ctx->pc != 0x1D91F0u) { return; }
    }
    ctx->pc = 0x1D91F0u;
    // 0x1d91f0: 0x184002b3  blez        $v0, . + 4 + (0x2B3 << 2)
    ctx->pc = 0x1D91F0u;
    {
        const bool branch_taken_0x1d91f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d91f0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D91F8u;
    // 0x1d91f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d91f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d91fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9200: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9204: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9204u;
    SET_GPR_U32(ctx, 31, 0x1D920Cu);
    ctx->pc = 0x1D9208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9204u;
            // 0x1d9208: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D920Cu; }
        if (ctx->pc != 0x1D920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D920Cu; }
        if (ctx->pc != 0x1D920Cu) { return; }
    }
    ctx->pc = 0x1D920Cu;
    // 0x1d920c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d920cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9210: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9210u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9218: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d921c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D921Cu;
    SET_GPR_U32(ctx, 31, 0x1D9224u);
    ctx->pc = 0x1D9220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D921Cu;
            // 0x1d9220: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9224u; }
        if (ctx->pc != 0x1D9224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9224u; }
        if (ctx->pc != 0x1D9224u) { return; }
    }
    ctx->pc = 0x1D9224u;
    // 0x1d9224: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d9224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d9228: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d922c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d922cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9230: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9234: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9238: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9238u;
    SET_GPR_U32(ctx, 31, 0x1D9240u);
    ctx->pc = 0x1D923Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9238u;
            // 0x1d923c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9240u; }
        if (ctx->pc != 0x1D9240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9240u; }
        if (ctx->pc != 0x1D9240u) { return; }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d9240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d9244: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9248: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d924c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d924cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9250: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9254: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9254u;
    SET_GPR_U32(ctx, 31, 0x1D925Cu);
    ctx->pc = 0x1D9258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9254u;
            // 0x1d9258: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D925Cu; }
        if (ctx->pc != 0x1D925Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D925Cu; }
        if (ctx->pc != 0x1D925Cu) { return; }
    }
    ctx->pc = 0x1D925Cu;
    // 0x1d925c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d925cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9260: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9264: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9268: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9268u;
    SET_GPR_U32(ctx, 31, 0x1D9270u);
    ctx->pc = 0x1D926Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9268u;
            // 0x1d926c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9270u; }
        if (ctx->pc != 0x1D9270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9270u; }
        if (ctx->pc != 0x1D9270u) { return; }
    }
    ctx->pc = 0x1D9270u;
    // 0x1d9270: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9278: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d927c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9280: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9280u;
    SET_GPR_U32(ctx, 31, 0x1D9288u);
    ctx->pc = 0x1D9284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9280u;
            // 0x1d9284: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9288u; }
        if (ctx->pc != 0x1D9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9288u; }
        if (ctx->pc != 0x1D9288u) { return; }
    }
    ctx->pc = 0x1D9288u;
    // 0x1d9288: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d9288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d928c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d928cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9290: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9298: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d929c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D929Cu;
    SET_GPR_U32(ctx, 31, 0x1D92A4u);
    ctx->pc = 0x1D92A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D929Cu;
            // 0x1d92a0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92A4u; }
        if (ctx->pc != 0x1D92A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92A4u; }
        if (ctx->pc != 0x1D92A4u) { return; }
    }
    ctx->pc = 0x1D92A4u;
    // 0x1d92a4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d92a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d92ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d92acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d92b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d92b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d92b4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d92b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d92b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D92B8u;
    SET_GPR_U32(ctx, 31, 0x1D92C0u);
    ctx->pc = 0x1D92BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92B8u;
            // 0x1d92bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92C0u; }
        if (ctx->pc != 0x1D92C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92C0u; }
        if (ctx->pc != 0x1D92C0u) { return; }
    }
    ctx->pc = 0x1D92C0u;
    // 0x1d92c0: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x1D92C0u;
    {
        const bool branch_taken_0x1d92c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92c0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D92C8u;
label_1d92c8:
    // 0x1d92c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D92C8u;
    SET_GPR_U32(ctx, 31, 0x1D92D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92D0u; }
        if (ctx->pc != 0x1D92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92D0u; }
        if (ctx->pc != 0x1D92D0u) { return; }
    }
    ctx->pc = 0x1D92D0u;
    // 0x1d92d0: 0x1840027b  blez        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x1D92D0u;
    {
        const bool branch_taken_0x1d92d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d92d0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D92D8u;
    // 0x1d92d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d92d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d92dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d92e0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d92e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d92e4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D92E4u;
    SET_GPR_U32(ctx, 31, 0x1D92ECu);
    ctx->pc = 0x1D92E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92E4u;
            // 0x1d92e8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92ECu; }
        if (ctx->pc != 0x1D92ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D92ECu; }
        if (ctx->pc != 0x1D92ECu) { return; }
    }
    ctx->pc = 0x1D92ECu;
    // 0x1d92ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d92ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d92f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d92f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d92f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d92f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d92f8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d92f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d92fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D92FCu;
    SET_GPR_U32(ctx, 31, 0x1D9304u);
    ctx->pc = 0x1D9300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92FCu;
            // 0x1d9300: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9304u; }
        if (ctx->pc != 0x1D9304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9304u; }
        if (ctx->pc != 0x1D9304u) { return; }
    }
    ctx->pc = 0x1D9304u;
    // 0x1d9304: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d9304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d9308: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d930c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d930cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9310: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9314: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9318: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9318u;
    SET_GPR_U32(ctx, 31, 0x1D9320u);
    ctx->pc = 0x1D931Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9318u;
            // 0x1d931c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9320u; }
        if (ctx->pc != 0x1D9320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9320u; }
        if (ctx->pc != 0x1D9320u) { return; }
    }
    ctx->pc = 0x1D9320u;
    // 0x1d9320: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d9320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d9324: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9328: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d932c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9330: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9334: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9334u;
    SET_GPR_U32(ctx, 31, 0x1D933Cu);
    ctx->pc = 0x1D9338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9334u;
            // 0x1d9338: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D933Cu; }
        if (ctx->pc != 0x1D933Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D933Cu; }
        if (ctx->pc != 0x1D933Cu) { return; }
    }
    ctx->pc = 0x1D933Cu;
    // 0x1d933c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d933cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d9340: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9344: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9344u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9348: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d934c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9350: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9350u;
    SET_GPR_U32(ctx, 31, 0x1D9358u);
    ctx->pc = 0x1D9354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9350u;
            // 0x1d9354: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9358u; }
        if (ctx->pc != 0x1D9358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9358u; }
        if (ctx->pc != 0x1D9358u) { return; }
    }
    ctx->pc = 0x1D9358u;
    // 0x1d9358: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d935c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9360: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9364: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9368: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d936c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D936Cu;
    SET_GPR_U32(ctx, 31, 0x1D9374u);
    ctx->pc = 0x1D9370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D936Cu;
            // 0x1d9370: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9374u; }
        if (ctx->pc != 0x1D9374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9374u; }
        if (ctx->pc != 0x1D9374u) { return; }
    }
    ctx->pc = 0x1D9374u;
    // 0x1d9374: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d937c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9380: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9380u;
    SET_GPR_U32(ctx, 31, 0x1D9388u);
    ctx->pc = 0x1D9384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9380u;
            // 0x1d9384: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9388u; }
        if (ctx->pc != 0x1D9388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9388u; }
        if (ctx->pc != 0x1D9388u) { return; }
    }
    ctx->pc = 0x1D9388u;
    // 0x1d9388: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d938c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d938cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9390: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9394: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9398: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9398u;
    SET_GPR_U32(ctx, 31, 0x1D93A0u);
    ctx->pc = 0x1D939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9398u;
            // 0x1d939c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93A0u; }
        if (ctx->pc != 0x1D93A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93A0u; }
        if (ctx->pc != 0x1D93A0u) { return; }
    }
    ctx->pc = 0x1D93A0u;
    // 0x1d93a0: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d93a4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d93a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d93a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d93a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d93ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d93b0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d93b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D93B4u;
    SET_GPR_U32(ctx, 31, 0x1D93BCu);
    ctx->pc = 0x1D93B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93B4u;
            // 0x1d93b8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93BCu; }
        if (ctx->pc != 0x1D93BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93BCu; }
        if (ctx->pc != 0x1D93BCu) { return; }
    }
    ctx->pc = 0x1D93BCu;
    // 0x1d93bc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d93c0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d93c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d93c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d93c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d93cc: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d93d0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D93D0u;
    SET_GPR_U32(ctx, 31, 0x1D93D8u);
    ctx->pc = 0x1D93D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93D0u;
            // 0x1d93d4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93D8u; }
        if (ctx->pc != 0x1D93D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93D8u; }
        if (ctx->pc != 0x1D93D8u) { return; }
    }
    ctx->pc = 0x1D93D8u;
    // 0x1d93d8: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d93dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d93e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d93e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d93e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d93e8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d93ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D93ECu;
    SET_GPR_U32(ctx, 31, 0x1D93F4u);
    ctx->pc = 0x1D93F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93ECu;
            // 0x1d93f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93F4u; }
        if (ctx->pc != 0x1D93F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D93F4u; }
        if (ctx->pc != 0x1D93F4u) { return; }
    }
    ctx->pc = 0x1D93F4u;
    // 0x1d93f4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d93f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d93fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d93fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9400: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9404: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9408: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9408u;
    SET_GPR_U32(ctx, 31, 0x1D9410u);
    ctx->pc = 0x1D940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9408u;
            // 0x1d940c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9410u; }
        if (ctx->pc != 0x1D9410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9410u; }
        if (ctx->pc != 0x1D9410u) { return; }
    }
    ctx->pc = 0x1D9410u;
    // 0x1d9410: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x1D9410u;
    {
        const bool branch_taken_0x1d9410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9410) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9418u;
label_1d9418:
    // 0x1d9418: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9418u;
    SET_GPR_U32(ctx, 31, 0x1D9420u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9420u; }
        if (ctx->pc != 0x1D9420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9420u; }
        if (ctx->pc != 0x1D9420u) { return; }
    }
    ctx->pc = 0x1D9420u;
    // 0x1d9420: 0x18400227  blez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x1D9420u;
    {
        const bool branch_taken_0x1d9420 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9420) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9428u;
    // 0x1d9428: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d942c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9430: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9434: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9434u;
    SET_GPR_U32(ctx, 31, 0x1D943Cu);
    ctx->pc = 0x1D9438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9434u;
            // 0x1d9438: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D943Cu; }
        if (ctx->pc != 0x1D943Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D943Cu; }
        if (ctx->pc != 0x1D943Cu) { return; }
    }
    ctx->pc = 0x1D943Cu;
    // 0x1d943c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9440: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9444: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9448: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d944c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D944Cu;
    SET_GPR_U32(ctx, 31, 0x1D9454u);
    ctx->pc = 0x1D9450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D944Cu;
            // 0x1d9450: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9454u; }
        if (ctx->pc != 0x1D9454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9454u; }
        if (ctx->pc != 0x1D9454u) { return; }
    }
    ctx->pc = 0x1D9454u;
    // 0x1d9454: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d9454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d9458: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d945c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d945cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9460: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9464: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9468: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9468u;
    SET_GPR_U32(ctx, 31, 0x1D9470u);
    ctx->pc = 0x1D946Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9468u;
            // 0x1d946c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9470u; }
        if (ctx->pc != 0x1D9470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9470u; }
        if (ctx->pc != 0x1D9470u) { return; }
    }
    ctx->pc = 0x1D9470u;
    // 0x1d9470: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d9470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d9474: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9478: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d947c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9480: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9484: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9484u;
    SET_GPR_U32(ctx, 31, 0x1D948Cu);
    ctx->pc = 0x1D9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9484u;
            // 0x1d9488: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D948Cu; }
        if (ctx->pc != 0x1D948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D948Cu; }
        if (ctx->pc != 0x1D948Cu) { return; }
    }
    ctx->pc = 0x1D948Cu;
    // 0x1d948c: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d948cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d9490: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9498: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d949c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d94a0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D94A0u;
    SET_GPR_U32(ctx, 31, 0x1D94A8u);
    ctx->pc = 0x1D94A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94A0u;
            // 0x1d94a4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94A8u; }
        if (ctx->pc != 0x1D94A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94A8u; }
        if (ctx->pc != 0x1D94A8u) { return; }
    }
    ctx->pc = 0x1D94A8u;
    // 0x1d94a8: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d94ac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d94acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d94b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d94b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d94b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d94b8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d94b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d94bc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D94BCu;
    SET_GPR_U32(ctx, 31, 0x1D94C4u);
    ctx->pc = 0x1D94C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94BCu;
            // 0x1d94c0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94C4u; }
        if (ctx->pc != 0x1D94C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94C4u; }
        if (ctx->pc != 0x1D94C4u) { return; }
    }
    ctx->pc = 0x1D94C4u;
    // 0x1d94c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d94c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d94cc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d94ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d94d0: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D94D0u;
    SET_GPR_U32(ctx, 31, 0x1D94D8u);
    ctx->pc = 0x1D94D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94D0u;
            // 0x1d94d4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94D8u; }
        if (ctx->pc != 0x1D94D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94D8u; }
        if (ctx->pc != 0x1D94D8u) { return; }
    }
    ctx->pc = 0x1D94D8u;
    // 0x1d94d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d94dc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d94dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d94e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d94e4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d94e8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D94E8u;
    SET_GPR_U32(ctx, 31, 0x1D94F0u);
    ctx->pc = 0x1D94ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94E8u;
            // 0x1d94ec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94F0u; }
        if (ctx->pc != 0x1D94F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D94F0u; }
        if (ctx->pc != 0x1D94F0u) { return; }
    }
    ctx->pc = 0x1D94F0u;
    // 0x1d94f0: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d94f4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d94f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d94f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d94fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9500: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9504: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9504u;
    SET_GPR_U32(ctx, 31, 0x1D950Cu);
    ctx->pc = 0x1D9508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9504u;
            // 0x1d9508: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D950Cu; }
        if (ctx->pc != 0x1D950Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D950Cu; }
        if (ctx->pc != 0x1D950Cu) { return; }
    }
    ctx->pc = 0x1D950Cu;
    // 0x1d950c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d9510: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9514: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9518: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d951c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9520: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9520u;
    SET_GPR_U32(ctx, 31, 0x1D9528u);
    ctx->pc = 0x1D9524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9520u;
            // 0x1d9524: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9528u; }
        if (ctx->pc != 0x1D9528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9528u; }
        if (ctx->pc != 0x1D9528u) { return; }
    }
    ctx->pc = 0x1D9528u;
    // 0x1d9528: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1d952c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9530: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9534: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9538: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d953c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D953Cu;
    SET_GPR_U32(ctx, 31, 0x1D9544u);
    ctx->pc = 0x1D9540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D953Cu;
            // 0x1d9540: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9544u; }
        if (ctx->pc != 0x1D9544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9544u; }
        if (ctx->pc != 0x1D9544u) { return; }
    }
    ctx->pc = 0x1D9544u;
    // 0x1d9544: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1d9548: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d954c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d954cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9554: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9558: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9558u;
    SET_GPR_U32(ctx, 31, 0x1D9560u);
    ctx->pc = 0x1D955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9558u;
            // 0x1d955c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9560u; }
        if (ctx->pc != 0x1D9560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9560u; }
        if (ctx->pc != 0x1D9560u) { return; }
    }
    ctx->pc = 0x1D9560u;
    // 0x1d9560: 0x100001d7  b           . + 4 + (0x1D7 << 2)
    ctx->pc = 0x1D9560u;
    {
        const bool branch_taken_0x1d9560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9560) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9568u;
label_1d9568:
    // 0x1d9568: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9568u;
    SET_GPR_U32(ctx, 31, 0x1D9570u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9570u; }
        if (ctx->pc != 0x1D9570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9570u; }
        if (ctx->pc != 0x1D9570u) { return; }
    }
    ctx->pc = 0x1D9570u;
    // 0x1d9570: 0x1840006d  blez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1D9570u;
    {
        const bool branch_taken_0x1d9570 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9570) {
            ctx->pc = 0x1D9728u;
            goto label_1d9728;
        }
    }
    ctx->pc = 0x1D9578u;
    // 0x1d9578: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d957c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9580: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9584: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9584u;
    SET_GPR_U32(ctx, 31, 0x1D958Cu);
    ctx->pc = 0x1D9588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9584u;
            // 0x1d9588: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D958Cu; }
        if (ctx->pc != 0x1D958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D958Cu; }
        if (ctx->pc != 0x1D958Cu) { return; }
    }
    ctx->pc = 0x1D958Cu;
    // 0x1d958c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9590: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9594: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9598: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d959c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D959Cu;
    SET_GPR_U32(ctx, 31, 0x1D95A4u);
    ctx->pc = 0x1D95A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D959Cu;
            // 0x1d95a0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95A4u; }
        if (ctx->pc != 0x1D95A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95A4u; }
        if (ctx->pc != 0x1D95A4u) { return; }
    }
    ctx->pc = 0x1D95A4u;
    // 0x1d95a4: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d95a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d95ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d95acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d95b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d95b4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d95b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D95B8u;
    SET_GPR_U32(ctx, 31, 0x1D95C0u);
    ctx->pc = 0x1D95BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95B8u;
            // 0x1d95bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C0u; }
        if (ctx->pc != 0x1D95C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95C0u; }
        if (ctx->pc != 0x1D95C0u) { return; }
    }
    ctx->pc = 0x1D95C0u;
    // 0x1d95c0: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d95c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d95c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d95c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d95cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d95ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d95d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d95d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d95d4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D95D4u;
    SET_GPR_U32(ctx, 31, 0x1D95DCu);
    ctx->pc = 0x1D95D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95D4u;
            // 0x1d95d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95DCu; }
        if (ctx->pc != 0x1D95DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95DCu; }
        if (ctx->pc != 0x1D95DCu) { return; }
    }
    ctx->pc = 0x1D95DCu;
    // 0x1d95dc: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d95e0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d95e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d95e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d95e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d95ec: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d95ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d95f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D95F0u;
    SET_GPR_U32(ctx, 31, 0x1D95F8u);
    ctx->pc = 0x1D95F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95F0u;
            // 0x1d95f4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95F8u; }
        if (ctx->pc != 0x1D95F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D95F8u; }
        if (ctx->pc != 0x1D95F8u) { return; }
    }
    ctx->pc = 0x1D95F8u;
    // 0x1d95f8: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d95fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d95fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9600: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9608: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d960c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D960Cu;
    SET_GPR_U32(ctx, 31, 0x1D9614u);
    ctx->pc = 0x1D9610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D960Cu;
            // 0x1d9610: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9614u; }
        if (ctx->pc != 0x1D9614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9614u; }
        if (ctx->pc != 0x1D9614u) { return; }
    }
    ctx->pc = 0x1D9614u;
    // 0x1d9614: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d9618: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d961c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9620: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9624: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9628: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9628u;
    SET_GPR_U32(ctx, 31, 0x1D9630u);
    ctx->pc = 0x1D962Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9628u;
            // 0x1d962c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9630u; }
        if (ctx->pc != 0x1D9630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9630u; }
        if (ctx->pc != 0x1D9630u) { return; }
    }
    ctx->pc = 0x1D9630u;
    // 0x1d9630: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9634: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9638: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d963c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9640: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9644: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9644u;
    SET_GPR_U32(ctx, 31, 0x1D964Cu);
    ctx->pc = 0x1D9648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9644u;
            // 0x1d9648: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D964Cu; }
        if (ctx->pc != 0x1D964Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D964Cu; }
        if (ctx->pc != 0x1D964Cu) { return; }
    }
    ctx->pc = 0x1D964Cu;
    // 0x1d964c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d964cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9650: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9654: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9658: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9658u;
    SET_GPR_U32(ctx, 31, 0x1D9660u);
    ctx->pc = 0x1D965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9658u;
            // 0x1d965c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9660u; }
        if (ctx->pc != 0x1D9660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9660u; }
        if (ctx->pc != 0x1D9660u) { return; }
    }
    ctx->pc = 0x1D9660u;
    // 0x1d9660: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9664: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9664u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9668: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d966c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9670: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9670u;
    SET_GPR_U32(ctx, 31, 0x1D9678u);
    ctx->pc = 0x1D9674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9670u;
            // 0x1d9674: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9678u; }
        if (ctx->pc != 0x1D9678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9678u; }
        if (ctx->pc != 0x1D9678u) { return; }
    }
    ctx->pc = 0x1D9678u;
    // 0x1d9678: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d9678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d967c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9680: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9688: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d968c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D968Cu;
    SET_GPR_U32(ctx, 31, 0x1D9694u);
    ctx->pc = 0x1D9690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D968Cu;
            // 0x1d9690: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9694u; }
        if (ctx->pc != 0x1D9694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9694u; }
        if (ctx->pc != 0x1D9694u) { return; }
    }
    ctx->pc = 0x1D9694u;
    // 0x1d9694: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d9694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d9698: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d969c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d96a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d96a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d96a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d96a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D96A8u;
    SET_GPR_U32(ctx, 31, 0x1D96B0u);
    ctx->pc = 0x1D96ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96A8u;
            // 0x1d96ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96B0u; }
        if (ctx->pc != 0x1D96B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96B0u; }
        if (ctx->pc != 0x1D96B0u) { return; }
    }
    ctx->pc = 0x1D96B0u;
    // 0x1d96b0: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d96b4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d96b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d96b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d96bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d96c0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d96c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d96c4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D96C4u;
    SET_GPR_U32(ctx, 31, 0x1D96CCu);
    ctx->pc = 0x1D96C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96C4u;
            // 0x1d96c8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96CCu; }
        if (ctx->pc != 0x1D96CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96CCu; }
        if (ctx->pc != 0x1D96CCu) { return; }
    }
    ctx->pc = 0x1D96CCu;
    // 0x1d96cc: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d96d0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d96d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d96d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d96d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d96d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d96dc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d96e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D96E0u;
    SET_GPR_U32(ctx, 31, 0x1D96E8u);
    ctx->pc = 0x1D96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96E0u;
            // 0x1d96e4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96E8u; }
        if (ctx->pc != 0x1D96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96E8u; }
        if (ctx->pc != 0x1D96E8u) { return; }
    }
    ctx->pc = 0x1D96E8u;
    // 0x1d96e8: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d96ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d96f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d96f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d96f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d96f8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d96f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d96fc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D96FCu;
    SET_GPR_U32(ctx, 31, 0x1D9704u);
    ctx->pc = 0x1D9700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96FCu;
            // 0x1d9700: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9704u; }
        if (ctx->pc != 0x1D9704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9704u; }
        if (ctx->pc != 0x1D9704u) { return; }
    }
    ctx->pc = 0x1D9704u;
    // 0x1d9704: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9708: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d970c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d970cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9710: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9714: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9718: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9718u;
    SET_GPR_U32(ctx, 31, 0x1D9720u);
    ctx->pc = 0x1D971Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9718u;
            // 0x1d971c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9720u; }
        if (ctx->pc != 0x1D9720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9720u; }
        if (ctx->pc != 0x1D9720u) { return; }
    }
    ctx->pc = 0x1D9720u;
    // 0x1d9720: 0x10000167  b           . + 4 + (0x167 << 2)
    ctx->pc = 0x1D9720u;
    {
        const bool branch_taken_0x1d9720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9720) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9728u;
label_1d9728:
    // 0x1d9728: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d972c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9730: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9734: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9734u;
    SET_GPR_U32(ctx, 31, 0x1D973Cu);
    ctx->pc = 0x1D9738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9734u;
            // 0x1d9738: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D973Cu; }
        if (ctx->pc != 0x1D973Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D973Cu; }
        if (ctx->pc != 0x1D973Cu) { return; }
    }
    ctx->pc = 0x1D973Cu;
    // 0x1d973c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d973cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9740: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9744: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9748: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d974c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D974Cu;
    SET_GPR_U32(ctx, 31, 0x1D9754u);
    ctx->pc = 0x1D9750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D974Cu;
            // 0x1d9750: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9754u; }
        if (ctx->pc != 0x1D9754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9754u; }
        if (ctx->pc != 0x1D9754u) { return; }
    }
    ctx->pc = 0x1D9754u;
    // 0x1d9754: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d9758: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d975c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d975cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9760: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9764: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9768: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9768u;
    SET_GPR_U32(ctx, 31, 0x1D9770u);
    ctx->pc = 0x1D976Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9768u;
            // 0x1d976c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9770u; }
        if (ctx->pc != 0x1D9770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9770u; }
        if (ctx->pc != 0x1D9770u) { return; }
    }
    ctx->pc = 0x1D9770u;
    // 0x1d9770: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d9774: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9778: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d977c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9780: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9784: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9784u;
    SET_GPR_U32(ctx, 31, 0x1D978Cu);
    ctx->pc = 0x1D9788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9784u;
            // 0x1d9788: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D978Cu; }
        if (ctx->pc != 0x1D978Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D978Cu; }
        if (ctx->pc != 0x1D978Cu) { return; }
    }
    ctx->pc = 0x1D978Cu;
    // 0x1d978c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9790: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9794: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9798: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9798u;
    SET_GPR_U32(ctx, 31, 0x1D97A0u);
    ctx->pc = 0x1D979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9798u;
            // 0x1d979c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97A0u; }
        if (ctx->pc != 0x1D97A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97A0u; }
        if (ctx->pc != 0x1D97A0u) { return; }
    }
    ctx->pc = 0x1D97A0u;
    // 0x1d97a0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d97a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d97a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d97a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d97ac: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d97acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d97b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D97B0u;
    SET_GPR_U32(ctx, 31, 0x1D97B8u);
    ctx->pc = 0x1D97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97B0u;
            // 0x1d97b4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97B8u; }
        if (ctx->pc != 0x1D97B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97B8u; }
        if (ctx->pc != 0x1D97B8u) { return; }
    }
    ctx->pc = 0x1D97B8u;
    // 0x1d97b8: 0x3c02c220  lui         $v0, 0xC220
    ctx->pc = 0x1d97b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49696 << 16));
    // 0x1d97bc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d97c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d97c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d97c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d97c8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d97cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D97CCu;
    SET_GPR_U32(ctx, 31, 0x1D97D4u);
    ctx->pc = 0x1D97D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97CCu;
            // 0x1d97d0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97D4u; }
        if (ctx->pc != 0x1D97D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97D4u; }
        if (ctx->pc != 0x1D97D4u) { return; }
    }
    ctx->pc = 0x1D97D4u;
    // 0x1d97d4: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1d97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1d97d8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d97dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d97dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d97e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d97e4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d97e8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D97E8u;
    SET_GPR_U32(ctx, 31, 0x1D97F0u);
    ctx->pc = 0x1D97ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97E8u;
            // 0x1d97ec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97F0u; }
        if (ctx->pc != 0x1D97F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D97F0u; }
        if (ctx->pc != 0x1D97F0u) { return; }
    }
    ctx->pc = 0x1D97F0u;
    // 0x1d97f0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1D97F0u;
    {
        const bool branch_taken_0x1d97f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97f0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D97F8u;
label_1d97f8:
    // 0x1d97f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D97F8u;
    SET_GPR_U32(ctx, 31, 0x1D9800u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9800u; }
        if (ctx->pc != 0x1D9800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9800u; }
        if (ctx->pc != 0x1D9800u) { return; }
    }
    ctx->pc = 0x1D9800u;
    // 0x1d9800: 0x1840012f  blez        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x1D9800u;
    {
        const bool branch_taken_0x1d9800 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9800) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D9808u;
    // 0x1d9808: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d980c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9810: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9814: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9814u;
    SET_GPR_U32(ctx, 31, 0x1D981Cu);
    ctx->pc = 0x1D9818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9814u;
            // 0x1d9818: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D981Cu; }
        if (ctx->pc != 0x1D981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D981Cu; }
        if (ctx->pc != 0x1D981Cu) { return; }
    }
    ctx->pc = 0x1D981Cu;
    // 0x1d981c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9820: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9820u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9824: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9828: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d982c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D982Cu;
    SET_GPR_U32(ctx, 31, 0x1D9834u);
    ctx->pc = 0x1D9830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D982Cu;
            // 0x1d9830: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9834u; }
        if (ctx->pc != 0x1D9834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9834u; }
        if (ctx->pc != 0x1D9834u) { return; }
    }
    ctx->pc = 0x1D9834u;
    // 0x1d9834: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d9838: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d983c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d983cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9844: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9848: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9848u;
    SET_GPR_U32(ctx, 31, 0x1D9850u);
    ctx->pc = 0x1D984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9848u;
            // 0x1d984c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9850u; }
        if (ctx->pc != 0x1D9850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9850u; }
        if (ctx->pc != 0x1D9850u) { return; }
    }
    ctx->pc = 0x1D9850u;
    // 0x1d9850: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d9850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d9854: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9858: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d985c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9860: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9864: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9864u;
    SET_GPR_U32(ctx, 31, 0x1D986Cu);
    ctx->pc = 0x1D9868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9864u;
            // 0x1d9868: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D986Cu; }
        if (ctx->pc != 0x1D986Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D986Cu; }
        if (ctx->pc != 0x1D986Cu) { return; }
    }
    ctx->pc = 0x1D986Cu;
    // 0x1d986c: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d986cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d9870: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9874: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d987c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9880: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9880u;
    SET_GPR_U32(ctx, 31, 0x1D9888u);
    ctx->pc = 0x1D9884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9880u;
            // 0x1d9884: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9888u; }
        if (ctx->pc != 0x1D9888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9888u; }
        if (ctx->pc != 0x1D9888u) { return; }
    }
    ctx->pc = 0x1D9888u;
    // 0x1d9888: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d9888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d988c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d988cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9890: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9894: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9898: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d989c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D989Cu;
    SET_GPR_U32(ctx, 31, 0x1D98A4u);
    ctx->pc = 0x1D98A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D989Cu;
            // 0x1d98a0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98A4u; }
        if (ctx->pc != 0x1D98A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98A4u; }
        if (ctx->pc != 0x1D98A4u) { return; }
    }
    ctx->pc = 0x1D98A4u;
    // 0x1d98a4: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d98a8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d98a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d98ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d98acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d98b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d98b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d98b4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d98b8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D98B8u;
    SET_GPR_U32(ctx, 31, 0x1D98C0u);
    ctx->pc = 0x1D98BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98B8u;
            // 0x1d98bc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98C0u; }
        if (ctx->pc != 0x1D98C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98C0u; }
        if (ctx->pc != 0x1D98C0u) { return; }
    }
    ctx->pc = 0x1D98C0u;
    // 0x1d98c0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d98c4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d98c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d98c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d98cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d98d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d98d4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D98D4u;
    SET_GPR_U32(ctx, 31, 0x1D98DCu);
    ctx->pc = 0x1D98D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98D4u;
            // 0x1d98d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98DCu; }
        if (ctx->pc != 0x1D98DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98DCu; }
        if (ctx->pc != 0x1D98DCu) { return; }
    }
    ctx->pc = 0x1D98DCu;
    // 0x1d98dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d98e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d98e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d98e4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d98e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d98e8: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D98E8u;
    SET_GPR_U32(ctx, 31, 0x1D98F0u);
    ctx->pc = 0x1D98ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D98E8u;
            // 0x1d98ec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98F0u; }
        if (ctx->pc != 0x1D98F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D98F0u; }
        if (ctx->pc != 0x1D98F0u) { return; }
    }
    ctx->pc = 0x1D98F0u;
    // 0x1d98f0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d98f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d98f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d98f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d98fc: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d98fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9900: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9900u;
    SET_GPR_U32(ctx, 31, 0x1D9908u);
    ctx->pc = 0x1D9904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9900u;
            // 0x1d9904: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9908u; }
        if (ctx->pc != 0x1D9908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9908u; }
        if (ctx->pc != 0x1D9908u) { return; }
    }
    ctx->pc = 0x1D9908u;
    // 0x1d9908: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d9908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d990c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d990cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9910: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9914: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9918: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d991c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D991Cu;
    SET_GPR_U32(ctx, 31, 0x1D9924u);
    ctx->pc = 0x1D9920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D991Cu;
            // 0x1d9920: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9924u; }
        if (ctx->pc != 0x1D9924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9924u; }
        if (ctx->pc != 0x1D9924u) { return; }
    }
    ctx->pc = 0x1D9924u;
    // 0x1d9924: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d9924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d9928: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d992c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d992cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9930: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9934: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9938: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9938u;
    SET_GPR_U32(ctx, 31, 0x1D9940u);
    ctx->pc = 0x1D993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9938u;
            // 0x1d993c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9940u; }
        if (ctx->pc != 0x1D9940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9940u; }
        if (ctx->pc != 0x1D9940u) { return; }
    }
    ctx->pc = 0x1D9940u;
    // 0x1d9940: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d9940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d9944: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9948: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d994c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d994cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9950: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9954: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9954u;
    SET_GPR_U32(ctx, 31, 0x1D995Cu);
    ctx->pc = 0x1D9958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9954u;
            // 0x1d9958: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D995Cu; }
        if (ctx->pc != 0x1D995Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D995Cu; }
        if (ctx->pc != 0x1D995Cu) { return; }
    }
    ctx->pc = 0x1D995Cu;
    // 0x1d995c: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d995cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d9960: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9964: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9968: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d996c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d996cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9970: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9970u;
    SET_GPR_U32(ctx, 31, 0x1D9978u);
    ctx->pc = 0x1D9974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9970u;
            // 0x1d9974: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9978u; }
        if (ctx->pc != 0x1D9978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9978u; }
        if (ctx->pc != 0x1D9978u) { return; }
    }
    ctx->pc = 0x1D9978u;
    // 0x1d9978: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d997c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9980: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9984: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9988: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d998c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D998Cu;
    SET_GPR_U32(ctx, 31, 0x1D9994u);
    ctx->pc = 0x1D9990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D998Cu;
            // 0x1d9990: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9994u; }
        if (ctx->pc != 0x1D9994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9994u; }
        if (ctx->pc != 0x1D9994u) { return; }
    }
    ctx->pc = 0x1D9994u;
    // 0x1d9994: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9998: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d999c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d999cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d99a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d99a4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d99a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d99a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D99A8u;
    SET_GPR_U32(ctx, 31, 0x1D99B0u);
    ctx->pc = 0x1D99ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99A8u;
            // 0x1d99ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99B0u; }
        if (ctx->pc != 0x1D99B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99B0u; }
        if (ctx->pc != 0x1D99B0u) { return; }
    }
    ctx->pc = 0x1D99B0u;
    // 0x1d99b0: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x1D99B0u;
    {
        const bool branch_taken_0x1d99b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d99b0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D99B8u;
label_1d99b8:
    // 0x1d99b8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D99B8u;
    SET_GPR_U32(ctx, 31, 0x1D99C0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99C0u; }
        if (ctx->pc != 0x1D99C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99C0u; }
        if (ctx->pc != 0x1D99C0u) { return; }
    }
    ctx->pc = 0x1D99C0u;
    // 0x1d99c0: 0x184000bf  blez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x1D99C0u;
    {
        const bool branch_taken_0x1d99c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d99c0) {
            ctx->pc = 0x1D9CC0u;
            goto label_1d9cc0;
        }
    }
    ctx->pc = 0x1D99C8u;
    // 0x1d99c8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d99c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d99cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d99d0: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d99d4: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D99D4u;
    SET_GPR_U32(ctx, 31, 0x1D99DCu);
    ctx->pc = 0x1D99D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99D4u;
            // 0x1d99d8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99DCu; }
        if (ctx->pc != 0x1D99DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99DCu; }
        if (ctx->pc != 0x1D99DCu) { return; }
    }
    ctx->pc = 0x1D99DCu;
    // 0x1d99dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d99e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d99e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d99e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d99e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d99e8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d99e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d99ec: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D99ECu;
    SET_GPR_U32(ctx, 31, 0x1D99F4u);
    ctx->pc = 0x1D99F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D99ECu;
            // 0x1d99f0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99F4u; }
        if (ctx->pc != 0x1D99F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D99F4u; }
        if (ctx->pc != 0x1D99F4u) { return; }
    }
    ctx->pc = 0x1D99F4u;
    // 0x1d99f4: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d99f8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d99f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d99fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d99fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a00: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a04: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a08: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A08u;
    SET_GPR_U32(ctx, 31, 0x1D9A10u);
    ctx->pc = 0x1D9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A08u;
            // 0x1d9a0c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A10u; }
        if (ctx->pc != 0x1D9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A10u; }
        if (ctx->pc != 0x1D9A10u) { return; }
    }
    ctx->pc = 0x1D9A10u;
    // 0x1d9a10: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d9a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d9a14: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9a18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a20: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a24: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A24u;
    SET_GPR_U32(ctx, 31, 0x1D9A2Cu);
    ctx->pc = 0x1D9A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A24u;
            // 0x1d9a28: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A2Cu; }
        if (ctx->pc != 0x1D9A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A2Cu; }
        if (ctx->pc != 0x1D9A2Cu) { return; }
    }
    ctx->pc = 0x1D9A2Cu;
    // 0x1d9a2c: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d9a30: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9a34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a3c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a40: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A40u;
    SET_GPR_U32(ctx, 31, 0x1D9A48u);
    ctx->pc = 0x1D9A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A40u;
            // 0x1d9a44: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A48u; }
        if (ctx->pc != 0x1D9A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A48u; }
        if (ctx->pc != 0x1D9A48u) { return; }
    }
    ctx->pc = 0x1D9A48u;
    // 0x1d9a48: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d9a4c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9a50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a58: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a5c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A5Cu;
    SET_GPR_U32(ctx, 31, 0x1D9A64u);
    ctx->pc = 0x1D9A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A5Cu;
            // 0x1d9a60: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A64u; }
        if (ctx->pc != 0x1D9A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A64u; }
        if (ctx->pc != 0x1D9A64u) { return; }
    }
    ctx->pc = 0x1D9A64u;
    // 0x1d9a64: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d9a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1d9a68: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9a6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a74: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a78: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A78u;
    SET_GPR_U32(ctx, 31, 0x1D9A80u);
    ctx->pc = 0x1D9A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A78u;
            // 0x1d9a7c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A80u; }
        if (ctx->pc != 0x1D9A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A80u; }
        if (ctx->pc != 0x1D9A80u) { return; }
    }
    ctx->pc = 0x1D9A80u;
    // 0x1d9a80: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d9a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d9a84: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9a88: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9a8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9a90: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9a94: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9A94u;
    SET_GPR_U32(ctx, 31, 0x1D9A9Cu);
    ctx->pc = 0x1D9A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9A94u;
            // 0x1d9a98: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A9Cu; }
        if (ctx->pc != 0x1D9A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9A9Cu; }
        if (ctx->pc != 0x1D9A9Cu) { return; }
    }
    ctx->pc = 0x1D9A9Cu;
    // 0x1d9a9c: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x1d9aa0: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9aa4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9aa8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9aac: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9ab0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9AB0u;
    SET_GPR_U32(ctx, 31, 0x1D9AB8u);
    ctx->pc = 0x1D9AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AB0u;
            // 0x1d9ab4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AB8u; }
        if (ctx->pc != 0x1D9AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AB8u; }
        if (ctx->pc != 0x1D9AB8u) { return; }
    }
    ctx->pc = 0x1D9AB8u;
    // 0x1d9ab8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1d9ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1d9abc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9ac0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9ac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9ac4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ac8: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9acc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9ACCu;
    SET_GPR_U32(ctx, 31, 0x1D9AD4u);
    ctx->pc = 0x1D9AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9ACCu;
            // 0x1d9ad0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AD4u; }
        if (ctx->pc != 0x1D9AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AD4u; }
        if (ctx->pc != 0x1D9AD4u) { return; }
    }
    ctx->pc = 0x1D9AD4u;
    // 0x1d9ad4: 0x3c02c35c  lui         $v0, 0xC35C
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50012 << 16));
    // 0x1d9ad8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9adc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9adcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9ae0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ae4: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9ae8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9AE8u;
    SET_GPR_U32(ctx, 31, 0x1D9AF0u);
    ctx->pc = 0x1D9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9AE8u;
            // 0x1d9aec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AF0u; }
        if (ctx->pc != 0x1D9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9AF0u; }
        if (ctx->pc != 0x1D9AF0u) { return; }
    }
    ctx->pc = 0x1D9AF0u;
    // 0x1d9af0: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1d9af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1d9af4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9af8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9afc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b00: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9b04: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9B04u;
    SET_GPR_U32(ctx, 31, 0x1D9B0Cu);
    ctx->pc = 0x1D9B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B04u;
            // 0x1d9b08: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B0Cu; }
        if (ctx->pc != 0x1D9B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B0Cu; }
        if (ctx->pc != 0x1D9B0Cu) { return; }
    }
    ctx->pc = 0x1D9B0Cu;
    // 0x1d9b0c: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d9b10: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9b18: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b1c: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9b20: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9B20u;
    SET_GPR_U32(ctx, 31, 0x1D9B28u);
    ctx->pc = 0x1D9B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B20u;
            // 0x1d9b24: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B28u; }
        if (ctx->pc != 0x1D9B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B28u; }
        if (ctx->pc != 0x1D9B28u) { return; }
    }
    ctx->pc = 0x1D9B28u;
    // 0x1d9b28: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9b2c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b30: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9b34: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b38: 0x2464ffec  addiu       $a0, $v1, -0x14
    ctx->pc = 0x1d9b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1d9b3c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B44u);
    ctx->pc = 0x1D9B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B3Cu;
            // 0x1d9b40: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B44u; }
        if (ctx->pc != 0x1D9B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B44u; }
        if (ctx->pc != 0x1D9B44u) { return; }
    }
    ctx->pc = 0x1D9B44u;
    // 0x1d9b44: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b4c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9b50: 0xc0655a8  jal         func_1956A0
    ctx->pc = 0x1D9B50u;
    SET_GPR_U32(ctx, 31, 0x1D9B58u);
    ctx->pc = 0x1D9B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B50u;
            // 0x1d9b54: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956A0u;
    if (runtime->hasFunction(0x1956A0u)) {
        auto targetFn = runtime->lookupFunction(0x1956A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B58u; }
        if (ctx->pc != 0x1D9B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Mazuru_0x1956a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B58u; }
        if (ctx->pc != 0x1D9B58u) { return; }
    }
    ctx->pc = 0x1D9B58u;
    // 0x1d9b58: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9b60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b64: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9b68: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9B68u;
    SET_GPR_U32(ctx, 31, 0x1D9B70u);
    ctx->pc = 0x1D9B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B68u;
            // 0x1d9b6c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B70u; }
        if (ctx->pc != 0x1D9B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B70u; }
        if (ctx->pc != 0x1D9B70u) { return; }
    }
    ctx->pc = 0x1D9B70u;
    // 0x1d9b70: 0x3c02c2a0  lui         $v0, 0xC2A0
    ctx->pc = 0x1d9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49824 << 16));
    // 0x1d9b74: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b78: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9b7c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b80: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9b84: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9B84u;
    SET_GPR_U32(ctx, 31, 0x1D9B8Cu);
    ctx->pc = 0x1D9B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9B84u;
            // 0x1d9b88: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B8Cu; }
        if (ctx->pc != 0x1D9B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9B8Cu; }
        if (ctx->pc != 0x1D9B8Cu) { return; }
    }
    ctx->pc = 0x1D9B8Cu;
    // 0x1d9b8c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1d9b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1d9b90: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9b94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9b98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9b9c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9ba0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9BA0u;
    SET_GPR_U32(ctx, 31, 0x1D9BA8u);
    ctx->pc = 0x1D9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BA0u;
            // 0x1d9ba4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BA8u; }
        if (ctx->pc != 0x1D9BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BA8u; }
        if (ctx->pc != 0x1D9BA8u) { return; }
    }
    ctx->pc = 0x1D9BA8u;
    // 0x1d9ba8: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d9bac: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9bb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9bb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9bb8: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9bbc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9BBCu;
    SET_GPR_U32(ctx, 31, 0x1D9BC4u);
    ctx->pc = 0x1D9BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BBCu;
            // 0x1d9bc0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BC4u; }
        if (ctx->pc != 0x1D9BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BC4u; }
        if (ctx->pc != 0x1D9BC4u) { return; }
    }
    ctx->pc = 0x1D9BC4u;
    // 0x1d9bc4: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d9bc8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9bcc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9bccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9bd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9bd4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9bd8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9BD8u;
    SET_GPR_U32(ctx, 31, 0x1D9BE0u);
    ctx->pc = 0x1D9BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BD8u;
            // 0x1d9bdc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BE0u; }
        if (ctx->pc != 0x1D9BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BE0u; }
        if (ctx->pc != 0x1D9BE0u) { return; }
    }
    ctx->pc = 0x1D9BE0u;
    // 0x1d9be0: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d9be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1d9be4: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9be8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9bec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9bf0: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9bf4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9BF4u;
    SET_GPR_U32(ctx, 31, 0x1D9BFCu);
    ctx->pc = 0x1D9BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9BF4u;
            // 0x1d9bf8: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BFCu; }
        if (ctx->pc != 0x1D9BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9BFCu; }
        if (ctx->pc != 0x1D9BFCu) { return; }
    }
    ctx->pc = 0x1D9BFCu;
    // 0x1d9bfc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d9c00: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c0c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c10: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C10u;
    SET_GPR_U32(ctx, 31, 0x1D9C18u);
    ctx->pc = 0x1D9C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C10u;
            // 0x1d9c14: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C18u; }
        if (ctx->pc != 0x1D9C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C18u; }
        if (ctx->pc != 0x1D9C18u) { return; }
    }
    ctx->pc = 0x1D9C18u;
    // 0x1d9c18: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x1d9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x1d9c1c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c28: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c2c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C2Cu;
    SET_GPR_U32(ctx, 31, 0x1D9C34u);
    ctx->pc = 0x1D9C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C2Cu;
            // 0x1d9c30: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C34u; }
        if (ctx->pc != 0x1D9C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C34u; }
        if (ctx->pc != 0x1D9C34u) { return; }
    }
    ctx->pc = 0x1D9C34u;
    // 0x1d9c34: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1d9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1d9c38: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c44: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c48: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C48u;
    SET_GPR_U32(ctx, 31, 0x1D9C50u);
    ctx->pc = 0x1D9C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C48u;
            // 0x1d9c4c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C50u; }
        if (ctx->pc != 0x1D9C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C50u; }
        if (ctx->pc != 0x1D9C50u) { return; }
    }
    ctx->pc = 0x1D9C50u;
    // 0x1d9c50: 0x3c02c35c  lui         $v0, 0xC35C
    ctx->pc = 0x1d9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50012 << 16));
    // 0x1d9c54: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c58: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c60: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c64: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C64u;
    SET_GPR_U32(ctx, 31, 0x1D9C6Cu);
    ctx->pc = 0x1D9C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C64u;
            // 0x1d9c68: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C6Cu; }
        if (ctx->pc != 0x1D9C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C6Cu; }
        if (ctx->pc != 0x1D9C6Cu) { return; }
    }
    ctx->pc = 0x1D9C6Cu;
    // 0x1d9c6c: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x1d9c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x1d9c70: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c7c: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c80: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C80u;
    SET_GPR_U32(ctx, 31, 0x1D9C88u);
    ctx->pc = 0x1D9C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C80u;
            // 0x1d9c84: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C88u; }
        if (ctx->pc != 0x1D9C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9C88u; }
        if (ctx->pc != 0x1D9C88u) { return; }
    }
    ctx->pc = 0x1D9C88u;
    // 0x1d9c88: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d9c8c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9c90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9c94: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9c98: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9c9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9C9Cu;
    SET_GPR_U32(ctx, 31, 0x1D9CA4u);
    ctx->pc = 0x1D9CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9C9Cu;
            // 0x1d9ca0: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CA4u; }
        if (ctx->pc != 0x1D9CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CA4u; }
        if (ctx->pc != 0x1D9CA4u) { return; }
    }
    ctx->pc = 0x1D9CA4u;
    // 0x1d9ca4: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9ca8: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9cac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9cacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9cb0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9cb4: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1d9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1d9cb8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9CB8u;
    SET_GPR_U32(ctx, 31, 0x1D9CC0u);
    ctx->pc = 0x1D9CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CB8u;
            // 0x1d9cbc: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CC0u; }
        if (ctx->pc != 0x1D9CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9CC0u; }
        if (ctx->pc != 0x1D9CC0u) { return; }
    }
    ctx->pc = 0x1D9CC0u;
label_1d9cc0:
    // 0x1d9cc0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9cc4: 0x28410259  slti        $at, $v0, 0x259
    ctx->pc = 0x1d9cc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)601) ? 1 : 0);
    // 0x1d9cc8: 0x14200335  bnez        $at, . + 4 + (0x335 << 2)
    ctx->pc = 0x1D9CC8u;
    {
        const bool branch_taken_0x1d9cc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9cc8) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9CD0u;
    // 0x1d9cd0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1d9cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1d9cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9cd8: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1d9cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1d9cdc: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x1d9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x1d9ce0: 0x1000032f  b           . + 4 + (0x32F << 2)
    ctx->pc = 0x1D9CE0u;
    {
        const bool branch_taken_0x1d9ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9CE0u;
            // 0x1d9ce4: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ce0) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9CE8u;
label_1d9ce8:
    // 0x1d9ce8: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1d9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1d9cec: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1d9cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d9cf0: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1d9cf0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4719u)));
    // 0x1d9cf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d9cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d9cf8: 0x0  nop
    ctx->pc = 0x1d9cf8u;
    // NOP
    // 0x1d9cfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d9cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d9d00: 0xe62000d4  swc1        $f0, 0xD4($s1)
    ctx->pc = 0x1d9d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
    // 0x1d9d04: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9d08: 0x284100b5  slti        $at, $v0, 0xB5
    ctx->pc = 0x1d9d08u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)181) ? 1 : 0);
    // 0x1d9d0c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9D0Cu;
    {
        const bool branch_taken_0x1d9d0c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d0c) {
            ctx->pc = 0x1D9D28u;
            goto label_1d9d28;
        }
    }
    ctx->pc = 0x1D9D14u;
    // 0x1d9d14: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1d9d14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1d9d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d1c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1d9d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1d9d20: 0xc076b68  jal         func_1DADA0
    ctx->pc = 0x1D9D20u;
    SET_GPR_U32(ctx, 31, 0x1D9D28u);
    ctx->pc = 0x1D9D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D20u;
            // 0x1d9d24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DADA0u;
    if (runtime->hasFunction(0x1DADA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D28u; }
        if (ctx->pc != 0x1D9D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossAddingVector_0x1dada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D28u; }
        if (ctx->pc != 0x1D9D28u) { return; }
    }
    ctx->pc = 0x1D9D28u;
label_1d9d28:
    // 0x1d9d28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9d2c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1d9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1d9d30: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1d9d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1d9d34: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1d9d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1d9d38: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1D9D38u;
    SET_GPR_U32(ctx, 31, 0x1D9D40u);
    ctx->pc = 0x1D9D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D38u;
            // 0x1d9d3c: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D40u; }
        if (ctx->pc != 0x1D9D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D40u; }
        if (ctx->pc != 0x1D9D40u) { return; }
    }
    ctx->pc = 0x1D9D40u;
    // 0x1d9d40: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1d9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d9d44: 0x12020120  beq         $s0, $v0, . + 4 + (0x120 << 2)
    ctx->pc = 0x1D9D44u;
    {
        const bool branch_taken_0x1d9d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D44u;
            // 0x1d9d48: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d44) {
            ctx->pc = 0x1DA1C8u;
            goto label_1da1c8;
        }
    }
    ctx->pc = 0x1D9D4Cu;
    // 0x1d9d4c: 0x120200a4  beq         $s0, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1D9D4Cu;
    {
        const bool branch_taken_0x1d9d4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d4c) {
            ctx->pc = 0x1D9FE0u;
            goto label_1d9fe0;
        }
    }
    ctx->pc = 0x1D9D54u;
    // 0x1d9d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9d58: 0x12020027  beq         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D9D58u;
    {
        const bool branch_taken_0x1d9d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9D58u;
            // 0x1d9d5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d58) {
            ctx->pc = 0x1D9DF8u;
            goto label_1d9df8;
        }
    }
    ctx->pc = 0x1D9D60u;
    // 0x1d9d60: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9D60u;
    {
        const bool branch_taken_0x1d9d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9d60) {
            ctx->pc = 0x1D9D78u;
            goto label_1d9d78;
        }
    }
    ctx->pc = 0x1D9D68u;
    // 0x1d9d68: 0x1200030d  beqz        $s0, . + 4 + (0x30D << 2)
    ctx->pc = 0x1D9D68u;
    {
        const bool branch_taken_0x1d9d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d68) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9D70u;
    // 0x1d9d70: 0x1000030b  b           . + 4 + (0x30B << 2)
    ctx->pc = 0x1D9D70u;
    {
        const bool branch_taken_0x1d9d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9d70) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9D78u;
label_1d9d78:
    // 0x1d9d78: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9D78u;
    SET_GPR_U32(ctx, 31, 0x1D9D80u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D80u; }
        if (ctx->pc != 0x1D9D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9D80u; }
        if (ctx->pc != 0x1D9D80u) { return; }
    }
    ctx->pc = 0x1D9D80u;
    // 0x1d9d80: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9D80u;
    {
        const bool branch_taken_0x1d9d80 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9d80) {
            ctx->pc = 0x1D9DC0u;
            goto label_1d9dc0;
        }
    }
    ctx->pc = 0x1D9D88u;
    // 0x1d9d88: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9d8c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d9d90: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9d90u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9d94: 0x0  nop
    ctx->pc = 0x1d9d94u;
    // NOP
    // 0x1d9d98: 0x0  nop
    ctx->pc = 0x1d9d98u;
    // NOP
    // 0x1d9d9c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9d9cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9da0: 0x144002ff  bnez        $v0, . + 4 + (0x2FF << 2)
    ctx->pc = 0x1D9DA0u;
    {
        const bool branch_taken_0x1d9da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9da0) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9DA8u;
    // 0x1d9da8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9dac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9db0: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9DB0u;
    SET_GPR_U32(ctx, 31, 0x1D9DB8u);
    ctx->pc = 0x1D9DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DB0u;
            // 0x1d9db4: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DB8u; }
        if (ctx->pc != 0x1D9DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DB8u; }
        if (ctx->pc != 0x1D9DB8u) { return; }
    }
    ctx->pc = 0x1D9DB8u;
    // 0x1d9db8: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x1D9DB8u;
    {
        const bool branch_taken_0x1d9db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9db8) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9DC0u;
label_1d9dc0:
    // 0x1d9dc0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9dc4: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1d9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1d9dc8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9dc8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9dcc: 0x0  nop
    ctx->pc = 0x1d9dccu;
    // NOP
    // 0x1d9dd0: 0x0  nop
    ctx->pc = 0x1d9dd0u;
    // NOP
    // 0x1d9dd4: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9dd4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9dd8: 0x144002f1  bnez        $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x1D9DD8u;
    {
        const bool branch_taken_0x1d9dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9dd8) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9DE0u;
    // 0x1d9de0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9de4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9de8: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9DE8u;
    SET_GPR_U32(ctx, 31, 0x1D9DF0u);
    ctx->pc = 0x1D9DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9DE8u;
            // 0x1d9dec: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DF0u; }
        if (ctx->pc != 0x1D9DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9DF0u; }
        if (ctx->pc != 0x1D9DF0u) { return; }
    }
    ctx->pc = 0x1D9DF0u;
    // 0x1d9df0: 0x100002eb  b           . + 4 + (0x2EB << 2)
    ctx->pc = 0x1D9DF0u;
    {
        const bool branch_taken_0x1d9df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9df0) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9DF8u;
label_1d9df8:
    // 0x1d9df8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9DF8u;
    SET_GPR_U32(ctx, 31, 0x1D9E00u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E00u; }
        if (ctx->pc != 0x1D9E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E00u; }
        if (ctx->pc != 0x1D9E00u) { return; }
    }
    ctx->pc = 0x1D9E00u;
    // 0x1d9e00: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9E00u;
    {
        const bool branch_taken_0x1d9e00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9e00) {
            ctx->pc = 0x1D9E40u;
            goto label_1d9e40;
        }
    }
    ctx->pc = 0x1D9E08u;
    // 0x1d9e08: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9e0c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1d9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1d9e10: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9e10u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9e14: 0x0  nop
    ctx->pc = 0x1d9e14u;
    // NOP
    // 0x1d9e18: 0x0  nop
    ctx->pc = 0x1d9e18u;
    // NOP
    // 0x1d9e1c: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9e1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9e20: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D9E20u;
    {
        const bool branch_taken_0x1d9e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e20) {
            ctx->pc = 0x1D9E70u;
            goto label_1d9e70;
        }
    }
    ctx->pc = 0x1D9E28u;
    // 0x1d9e28: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9e2c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9e30: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9E30u;
    SET_GPR_U32(ctx, 31, 0x1D9E38u);
    ctx->pc = 0x1D9E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E30u;
            // 0x1d9e34: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E38u; }
        if (ctx->pc != 0x1D9E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E38u; }
        if (ctx->pc != 0x1D9E38u) { return; }
    }
    ctx->pc = 0x1D9E38u;
    // 0x1d9e38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D9E38u;
    {
        const bool branch_taken_0x1d9e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e38) {
            ctx->pc = 0x1D9E70u;
            goto label_1d9e70;
        }
    }
    ctx->pc = 0x1D9E40u;
label_1d9e40:
    // 0x1d9e40: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9e44: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1d9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d9e48: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9e48u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9e4c: 0x0  nop
    ctx->pc = 0x1d9e4cu;
    // NOP
    // 0x1d9e50: 0x0  nop
    ctx->pc = 0x1d9e50u;
    // NOP
    // 0x1d9e54: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9e54u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9e58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9E58u;
    {
        const bool branch_taken_0x1d9e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e58) {
            ctx->pc = 0x1D9E70u;
            goto label_1d9e70;
        }
    }
    ctx->pc = 0x1D9E60u;
    // 0x1d9e60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9e64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9e68: 0xc06560c  jal         func_195830
    ctx->pc = 0x1D9E68u;
    SET_GPR_U32(ctx, 31, 0x1D9E70u);
    ctx->pc = 0x1D9E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9E68u;
            // 0x1d9e6c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E70u; }
        if (ctx->pc != 0x1D9E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E70u; }
        if (ctx->pc != 0x1D9E70u) { return; }
    }
    ctx->pc = 0x1D9E70u;
label_1d9e70:
    // 0x1d9e70: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9E70u;
    SET_GPR_U32(ctx, 31, 0x1D9E78u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E78u; }
        if (ctx->pc != 0x1D9E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9E78u; }
        if (ctx->pc != 0x1D9E78u) { return; }
    }
    ctx->pc = 0x1D9E78u;
    // 0x1d9e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e7c: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D9E7Cu;
    {
        const bool branch_taken_0x1d9e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d9e7c) {
            ctx->pc = 0x1D9F10u;
            goto label_1d9f10;
        }
    }
    ctx->pc = 0x1D9E84u;
    // 0x1d9e84: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9e88: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1d9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1d9e8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9e8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9e90: 0x0  nop
    ctx->pc = 0x1d9e90u;
    // NOP
    // 0x1d9e94: 0x0  nop
    ctx->pc = 0x1d9e94u;
    // NOP
    // 0x1d9e98: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9e98u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9e9c: 0x144002c0  bnez        $v0, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x1D9E9Cu;
    {
        const bool branch_taken_0x1d9e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9e9c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9EA4u;
    // 0x1d9ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ea8: 0x3c02c320  lui         $v0, 0xC320
    ctx->pc = 0x1d9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49952 << 16));
    // 0x1d9eac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9eb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9eb4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9EB4u;
    SET_GPR_U32(ctx, 31, 0x1D9EBCu);
    ctx->pc = 0x1D9EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EB4u;
            // 0x1d9eb8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EBCu; }
        if (ctx->pc != 0x1D9EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EBCu; }
        if (ctx->pc != 0x1D9EBCu) { return; }
    }
    ctx->pc = 0x1D9EBCu;
    // 0x1d9ebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ec0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1d9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1d9ec4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9ec8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9ecc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9ECCu;
    SET_GPR_U32(ctx, 31, 0x1D9ED4u);
    ctx->pc = 0x1D9ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9ECCu;
            // 0x1d9ed0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ED4u; }
        if (ctx->pc != 0x1D9ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9ED4u; }
        if (ctx->pc != 0x1D9ED4u) { return; }
    }
    ctx->pc = 0x1D9ED4u;
    // 0x1d9ed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ed8: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d9edc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9ee0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9ee4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9EE4u;
    SET_GPR_U32(ctx, 31, 0x1D9EECu);
    ctx->pc = 0x1D9EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EE4u;
            // 0x1d9ee8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EECu; }
        if (ctx->pc != 0x1D9EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9EECu; }
        if (ctx->pc != 0x1D9EECu) { return; }
    }
    ctx->pc = 0x1D9EECu;
    // 0x1d9eec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9ef0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9ef4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9ef8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9ef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9efc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9EFCu;
    SET_GPR_U32(ctx, 31, 0x1D9F04u);
    ctx->pc = 0x1D9F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9EFCu;
            // 0x1d9f00: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F04u; }
        if (ctx->pc != 0x1D9F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F04u; }
        if (ctx->pc != 0x1D9F04u) { return; }
    }
    ctx->pc = 0x1D9F04u;
    // 0x1d9f04: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x1D9F04u;
    {
        const bool branch_taken_0x1d9f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f04) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9F0Cu;
    // 0x1d9f0c: 0x0  nop
    ctx->pc = 0x1d9f0cu;
    // NOP
label_1d9f10:
    // 0x1d9f10: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9F10u;
    SET_GPR_U32(ctx, 31, 0x1D9F18u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F18u; }
        if (ctx->pc != 0x1D9F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F18u; }
        if (ctx->pc != 0x1D9F18u) { return; }
    }
    ctx->pc = 0x1D9F18u;
    // 0x1d9f18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9f1c: 0x144302a0  bne         $v0, $v1, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x1D9F1Cu;
    {
        const bool branch_taken_0x1d9f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d9f1c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9F24u;
    // 0x1d9f24: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9f28: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1d9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1d9f2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9f2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9f30: 0x0  nop
    ctx->pc = 0x1d9f30u;
    // NOP
    // 0x1d9f34: 0x0  nop
    ctx->pc = 0x1d9f34u;
    // NOP
    // 0x1d9f38: 0x1010  mfhi        $v0
    ctx->pc = 0x1d9f38u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1d9f3c: 0x14400298  bnez        $v0, . + 4 + (0x298 << 2)
    ctx->pc = 0x1D9F3Cu;
    {
        const bool branch_taken_0x1d9f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9f3c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9F44u;
    // 0x1d9f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f48: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1d9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1d9f4c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9f50: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9f54: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9F54u;
    SET_GPR_U32(ctx, 31, 0x1D9F5Cu);
    ctx->pc = 0x1D9F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F54u;
            // 0x1d9f58: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F5Cu; }
        if (ctx->pc != 0x1D9F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F5Cu; }
        if (ctx->pc != 0x1D9F5Cu) { return; }
    }
    ctx->pc = 0x1D9F5Cu;
    // 0x1d9f5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f60: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1d9f64: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9f68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9f6c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F74u);
    ctx->pc = 0x1D9F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F6Cu;
            // 0x1d9f70: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F74u; }
        if (ctx->pc != 0x1D9F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F74u; }
        if (ctx->pc != 0x1D9F74u) { return; }
    }
    ctx->pc = 0x1D9F74u;
    // 0x1d9f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f78: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1d9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1d9f7c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9f80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9f84: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9F84u;
    SET_GPR_U32(ctx, 31, 0x1D9F8Cu);
    ctx->pc = 0x1D9F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F84u;
            // 0x1d9f88: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F8Cu; }
        if (ctx->pc != 0x1D9F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9F8Cu; }
        if (ctx->pc != 0x1D9F8Cu) { return; }
    }
    ctx->pc = 0x1D9F8Cu;
    // 0x1d9f8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9f90: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1d9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1d9f94: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9f98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9f9c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D9FA4u);
    ctx->pc = 0x1D9FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9F9Cu;
            // 0x1d9fa0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FA4u; }
        if (ctx->pc != 0x1D9FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FA4u; }
        if (ctx->pc != 0x1D9FA4u) { return; }
    }
    ctx->pc = 0x1D9FA4u;
    // 0x1d9fa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9fa8: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1d9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1d9fac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9fb0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9fb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9fb4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9FB4u;
    SET_GPR_U32(ctx, 31, 0x1D9FBCu);
    ctx->pc = 0x1D9FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FB4u;
            // 0x1d9fb8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FBCu; }
        if (ctx->pc != 0x1D9FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FBCu; }
        if (ctx->pc != 0x1D9FBCu) { return; }
    }
    ctx->pc = 0x1D9FBCu;
    // 0x1d9fbc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9fc0: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1d9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1d9fc4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d9fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d9fc8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d9fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9fcc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1D9FCCu;
    SET_GPR_U32(ctx, 31, 0x1D9FD4u);
    ctx->pc = 0x1D9FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9FCCu;
            // 0x1d9fd0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FD4u; }
        if (ctx->pc != 0x1D9FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FD4u; }
        if (ctx->pc != 0x1D9FD4u) { return; }
    }
    ctx->pc = 0x1D9FD4u;
    // 0x1d9fd4: 0x10000272  b           . + 4 + (0x272 << 2)
    ctx->pc = 0x1D9FD4u;
    {
        const bool branch_taken_0x1d9fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9fd4) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1D9FDCu;
    // 0x1d9fdc: 0x0  nop
    ctx->pc = 0x1d9fdcu;
    // NOP
label_1d9fe0:
    // 0x1d9fe0: 0xc065d00  jal         func_197400
    ctx->pc = 0x1D9FE0u;
    SET_GPR_U32(ctx, 31, 0x1D9FE8u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FE8u; }
        if (ctx->pc != 0x1D9FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9FE8u; }
        if (ctx->pc != 0x1D9FE8u) { return; }
    }
    ctx->pc = 0x1D9FE8u;
    // 0x1d9fe8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9FE8u;
    {
        const bool branch_taken_0x1d9fe8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d9fe8) {
            ctx->pc = 0x1DA028u;
            goto label_1da028;
        }
    }
    ctx->pc = 0x1D9FF0u;
    // 0x1d9ff0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9ff4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1d9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d9ff8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1d9ff8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d9ffc: 0x0  nop
    ctx->pc = 0x1d9ffcu;
    // NOP
    // 0x1da000: 0x0  nop
    ctx->pc = 0x1da000u;
    // NOP
    // 0x1da004: 0x1010  mfhi        $v0
    ctx->pc = 0x1da004u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da008: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DA008u;
    {
        const bool branch_taken_0x1da008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da008) {
            ctx->pc = 0x1DA058u;
            goto label_1da058;
        }
    }
    ctx->pc = 0x1DA010u;
    // 0x1da010: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da014: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da018: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DA018u;
    SET_GPR_U32(ctx, 31, 0x1DA020u);
    ctx->pc = 0x1DA01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA018u;
            // 0x1da01c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA020u; }
        if (ctx->pc != 0x1DA020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA020u; }
        if (ctx->pc != 0x1DA020u) { return; }
    }
    ctx->pc = 0x1DA020u;
    // 0x1da020: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DA020u;
    {
        const bool branch_taken_0x1da020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da020) {
            ctx->pc = 0x1DA058u;
            goto label_1da058;
        }
    }
    ctx->pc = 0x1DA028u;
label_1da028:
    // 0x1da028: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da02c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1da02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1da030: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da030u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da034: 0x0  nop
    ctx->pc = 0x1da034u;
    // NOP
    // 0x1da038: 0x0  nop
    ctx->pc = 0x1da038u;
    // NOP
    // 0x1da03c: 0x1010  mfhi        $v0
    ctx->pc = 0x1da03cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA040u;
    {
        const bool branch_taken_0x1da040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da040) {
            ctx->pc = 0x1DA058u;
            goto label_1da058;
        }
    }
    ctx->pc = 0x1DA048u;
    // 0x1da048: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da04c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da050: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DA050u;
    SET_GPR_U32(ctx, 31, 0x1DA058u);
    ctx->pc = 0x1DA054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA050u;
            // 0x1da054: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA058u; }
        if (ctx->pc != 0x1DA058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA058u; }
        if (ctx->pc != 0x1DA058u) { return; }
    }
    ctx->pc = 0x1DA058u;
label_1da058:
    // 0x1da058: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DA058u;
    SET_GPR_U32(ctx, 31, 0x1DA060u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA060u; }
        if (ctx->pc != 0x1DA060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA060u; }
        if (ctx->pc != 0x1DA060u) { return; }
    }
    ctx->pc = 0x1DA060u;
    // 0x1da060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da064: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1DA064u;
    {
        const bool branch_taken_0x1da064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da064) {
            ctx->pc = 0x1DA0F8u;
            goto label_1da0f8;
        }
    }
    ctx->pc = 0x1DA06Cu;
    // 0x1da06c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da070: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1da070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1da074: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da074u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da078: 0x0  nop
    ctx->pc = 0x1da078u;
    // NOP
    // 0x1da07c: 0x0  nop
    ctx->pc = 0x1da07cu;
    // NOP
    // 0x1da080: 0x1010  mfhi        $v0
    ctx->pc = 0x1da080u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da084: 0x14400246  bnez        $v0, . + 4 + (0x246 << 2)
    ctx->pc = 0x1DA084u;
    {
        const bool branch_taken_0x1da084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da084) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA08Cu;
    // 0x1da08c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da090: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1da090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1da094: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da098: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da09c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA09Cu;
    SET_GPR_U32(ctx, 31, 0x1DA0A4u);
    ctx->pc = 0x1DA0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA09Cu;
            // 0x1da0a0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0A4u; }
        if (ctx->pc != 0x1DA0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0A4u; }
        if (ctx->pc != 0x1DA0A4u) { return; }
    }
    ctx->pc = 0x1DA0A4u;
    // 0x1da0a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da0a8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da0ac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da0b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da0b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da0b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA0B4u;
    SET_GPR_U32(ctx, 31, 0x1DA0BCu);
    ctx->pc = 0x1DA0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0B4u;
            // 0x1da0b8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0BCu; }
        if (ctx->pc != 0x1DA0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0BCu; }
        if (ctx->pc != 0x1DA0BCu) { return; }
    }
    ctx->pc = 0x1DA0BCu;
    // 0x1da0bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da0c0: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1da0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1da0c4: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da0c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da0cc: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA0CCu;
    SET_GPR_U32(ctx, 31, 0x1DA0D4u);
    ctx->pc = 0x1DA0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0CCu;
            // 0x1da0d0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0D4u; }
        if (ctx->pc != 0x1DA0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0D4u; }
        if (ctx->pc != 0x1DA0D4u) { return; }
    }
    ctx->pc = 0x1DA0D4u;
    // 0x1da0d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da0d8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1da0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1da0dc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da0e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da0e4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA0E4u;
    SET_GPR_U32(ctx, 31, 0x1DA0ECu);
    ctx->pc = 0x1DA0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA0E4u;
            // 0x1da0e8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0ECu; }
        if (ctx->pc != 0x1DA0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA0ECu; }
        if (ctx->pc != 0x1DA0ECu) { return; }
    }
    ctx->pc = 0x1DA0ECu;
    // 0x1da0ec: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x1DA0ECu;
    {
        const bool branch_taken_0x1da0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da0ec) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA0F4u;
    // 0x1da0f4: 0x0  nop
    ctx->pc = 0x1da0f4u;
    // NOP
label_1da0f8:
    // 0x1da0f8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DA0F8u;
    SET_GPR_U32(ctx, 31, 0x1DA100u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA100u; }
        if (ctx->pc != 0x1DA100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA100u; }
        if (ctx->pc != 0x1DA100u) { return; }
    }
    ctx->pc = 0x1DA100u;
    // 0x1da100: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da104: 0x14430226  bne         $v0, $v1, . + 4 + (0x226 << 2)
    ctx->pc = 0x1DA104u;
    {
        const bool branch_taken_0x1da104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da104) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA10Cu;
    // 0x1da10c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da110: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1da110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1da114: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da118: 0x0  nop
    ctx->pc = 0x1da118u;
    // NOP
    // 0x1da11c: 0x0  nop
    ctx->pc = 0x1da11cu;
    // NOP
    // 0x1da120: 0x1010  mfhi        $v0
    ctx->pc = 0x1da120u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da124: 0x1440021e  bnez        $v0, . + 4 + (0x21E << 2)
    ctx->pc = 0x1DA124u;
    {
        const bool branch_taken_0x1da124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da124) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA12Cu;
    // 0x1da12c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da130: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1da134: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da13c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA13Cu;
    SET_GPR_U32(ctx, 31, 0x1DA144u);
    ctx->pc = 0x1DA140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA13Cu;
            // 0x1da140: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA144u; }
        if (ctx->pc != 0x1DA144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA144u; }
        if (ctx->pc != 0x1DA144u) { return; }
    }
    ctx->pc = 0x1DA144u;
    // 0x1da144: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da148: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da14c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da154: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA154u;
    SET_GPR_U32(ctx, 31, 0x1DA15Cu);
    ctx->pc = 0x1DA158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA154u;
            // 0x1da158: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA15Cu; }
        if (ctx->pc != 0x1DA15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA15Cu; }
        if (ctx->pc != 0x1DA15Cu) { return; }
    }
    ctx->pc = 0x1DA15Cu;
    // 0x1da15c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da160: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1da160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1da164: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da168: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da168u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da16c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA16Cu;
    SET_GPR_U32(ctx, 31, 0x1DA174u);
    ctx->pc = 0x1DA170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA16Cu;
            // 0x1da170: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA174u; }
        if (ctx->pc != 0x1DA174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA174u; }
        if (ctx->pc != 0x1DA174u) { return; }
    }
    ctx->pc = 0x1DA174u;
    // 0x1da174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da178: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1da178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1da17c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da180: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da180u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da184: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA184u;
    SET_GPR_U32(ctx, 31, 0x1DA18Cu);
    ctx->pc = 0x1DA188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA184u;
            // 0x1da188: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA18Cu; }
        if (ctx->pc != 0x1DA18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA18Cu; }
        if (ctx->pc != 0x1DA18Cu) { return; }
    }
    ctx->pc = 0x1DA18Cu;
    // 0x1da18c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da190: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1da190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1da194: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da19c: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA19Cu;
    SET_GPR_U32(ctx, 31, 0x1DA1A4u);
    ctx->pc = 0x1DA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA19Cu;
            // 0x1da1a0: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A4u; }
        if (ctx->pc != 0x1DA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1A4u; }
        if (ctx->pc != 0x1DA1A4u) { return; }
    }
    ctx->pc = 0x1DA1A4u;
    // 0x1da1a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da1a8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1da1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1da1ac: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da1b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da1b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da1b4: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA1B4u;
    SET_GPR_U32(ctx, 31, 0x1DA1BCu);
    ctx->pc = 0x1DA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA1B4u;
            // 0x1da1b8: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1BCu; }
        if (ctx->pc != 0x1DA1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1BCu; }
        if (ctx->pc != 0x1DA1BCu) { return; }
    }
    ctx->pc = 0x1DA1BCu;
    // 0x1da1bc: 0x100001f8  b           . + 4 + (0x1F8 << 2)
    ctx->pc = 0x1DA1BCu;
    {
        const bool branch_taken_0x1da1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da1bc) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA1C4u;
    // 0x1da1c4: 0x0  nop
    ctx->pc = 0x1da1c4u;
    // NOP
label_1da1c8:
    // 0x1da1c8: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DA1C8u;
    SET_GPR_U32(ctx, 31, 0x1DA1D0u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1D0u; }
        if (ctx->pc != 0x1DA1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA1D0u; }
        if (ctx->pc != 0x1DA1D0u) { return; }
    }
    ctx->pc = 0x1DA1D0u;
    // 0x1da1d0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DA1D0u;
    {
        const bool branch_taken_0x1da1d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1da1d0) {
            ctx->pc = 0x1DA210u;
            goto label_1da210;
        }
    }
    ctx->pc = 0x1DA1D8u;
    // 0x1da1d8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da1dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1da1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da1e0: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da1e0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da1e4: 0x0  nop
    ctx->pc = 0x1da1e4u;
    // NOP
    // 0x1da1e8: 0x0  nop
    ctx->pc = 0x1da1e8u;
    // NOP
    // 0x1da1ec: 0x1010  mfhi        $v0
    ctx->pc = 0x1da1ecu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da1f0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1DA1F0u;
    {
        const bool branch_taken_0x1da1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da1f0) {
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA1F8u;
    // 0x1da1f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da1fc: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da200: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DA200u;
    SET_GPR_U32(ctx, 31, 0x1DA208u);
    ctx->pc = 0x1DA204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA200u;
            // 0x1da204: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA208u; }
        if (ctx->pc != 0x1DA208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA208u; }
        if (ctx->pc != 0x1DA208u) { return; }
    }
    ctx->pc = 0x1DA208u;
    // 0x1da208: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DA208u;
    {
        const bool branch_taken_0x1da208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da208) {
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA210u;
label_1da210:
    // 0x1da210: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da214: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1da214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1da218: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da218u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da21c: 0x0  nop
    ctx->pc = 0x1da21cu;
    // NOP
    // 0x1da220: 0x0  nop
    ctx->pc = 0x1da220u;
    // NOP
    // 0x1da224: 0x1010  mfhi        $v0
    ctx->pc = 0x1da224u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA228u;
    {
        const bool branch_taken_0x1da228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da228) {
            ctx->pc = 0x1DA240u;
            goto label_1da240;
        }
    }
    ctx->pc = 0x1DA230u;
    // 0x1da230: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da234: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da238: 0xc06560c  jal         func_195830
    ctx->pc = 0x1DA238u;
    SET_GPR_U32(ctx, 31, 0x1DA240u);
    ctx->pc = 0x1DA23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA238u;
            // 0x1da23c: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195830u;
    if (runtime->hasFunction(0x195830u)) {
        auto targetFn = runtime->lookupFunction(0x195830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA240u; }
        if (ctx->pc != 0x1DA240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Nerai_0x195830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA240u; }
        if (ctx->pc != 0x1DA240u) { return; }
    }
    ctx->pc = 0x1DA240u;
label_1da240:
    // 0x1da240: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DA240u;
    SET_GPR_U32(ctx, 31, 0x1DA248u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA248u; }
        if (ctx->pc != 0x1DA248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA248u; }
        if (ctx->pc != 0x1DA248u) { return; }
    }
    ctx->pc = 0x1DA248u;
    // 0x1da248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da24c: 0x14430040  bne         $v0, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1DA24Cu;
    {
        const bool branch_taken_0x1da24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da24c) {
            ctx->pc = 0x1DA350u;
            goto label_1da350;
        }
    }
    ctx->pc = 0x1DA254u;
    // 0x1da254: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da258: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA258u;
    {
        const bool branch_taken_0x1da258 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DA25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA258u;
            // 0x1da25c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da258) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA260u;
    // 0x1da260: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA260u;
    {
        const bool branch_taken_0x1da260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da260) {
            ctx->pc = 0x1DA26Cu;
            goto label_1da26c;
        }
    }
    ctx->pc = 0x1DA268u;
    // 0x1da268: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1da268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1da26c:
    // 0x1da26c: 0x144001cc  bnez        $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x1DA26Cu;
    {
        const bool branch_taken_0x1da26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da26c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA274u;
    // 0x1da274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da278: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da27c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da280: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA280u;
    SET_GPR_U32(ctx, 31, 0x1DA288u);
    ctx->pc = 0x1DA284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA280u;
            // 0x1da284: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA288u; }
        if (ctx->pc != 0x1DA288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA288u; }
        if (ctx->pc != 0x1DA288u) { return; }
    }
    ctx->pc = 0x1DA288u;
    // 0x1da288: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da28c: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1da28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1da290: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da294: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da298: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA298u;
    SET_GPR_U32(ctx, 31, 0x1DA2A0u);
    ctx->pc = 0x1DA29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA298u;
            // 0x1da29c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2A0u; }
        if (ctx->pc != 0x1DA2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2A0u; }
        if (ctx->pc != 0x1DA2A0u) { return; }
    }
    ctx->pc = 0x1DA2A0u;
    // 0x1da2a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da2a4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da2a8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da2ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da2b0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA2B0u;
    SET_GPR_U32(ctx, 31, 0x1DA2B8u);
    ctx->pc = 0x1DA2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2B0u;
            // 0x1da2b4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B8u; }
        if (ctx->pc != 0x1DA2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2B8u; }
        if (ctx->pc != 0x1DA2B8u) { return; }
    }
    ctx->pc = 0x1DA2B8u;
    // 0x1da2b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da2bc: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1da2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1da2c0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da2c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da2c8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA2C8u;
    SET_GPR_U32(ctx, 31, 0x1DA2D0u);
    ctx->pc = 0x1DA2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2C8u;
            // 0x1da2cc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2D0u; }
        if (ctx->pc != 0x1DA2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2D0u; }
        if (ctx->pc != 0x1DA2D0u) { return; }
    }
    ctx->pc = 0x1DA2D0u;
    // 0x1da2d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da2d4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1da2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1da2d8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da2dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da2e0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA2E0u;
    SET_GPR_U32(ctx, 31, 0x1DA2E8u);
    ctx->pc = 0x1DA2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2E0u;
            // 0x1da2e4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2E8u; }
        if (ctx->pc != 0x1DA2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA2E8u; }
        if (ctx->pc != 0x1DA2E8u) { return; }
    }
    ctx->pc = 0x1DA2E8u;
    // 0x1da2e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da2ec: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1da2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1da2f0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da2f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da2f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da2f8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA2F8u;
    SET_GPR_U32(ctx, 31, 0x1DA300u);
    ctx->pc = 0x1DA2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA2F8u;
            // 0x1da2fc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA300u; }
        if (ctx->pc != 0x1DA300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA300u; }
        if (ctx->pc != 0x1DA300u) { return; }
    }
    ctx->pc = 0x1DA300u;
    // 0x1da300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da304: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1da304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1da308: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da30c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da30cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da310: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA310u;
    SET_GPR_U32(ctx, 31, 0x1DA318u);
    ctx->pc = 0x1DA314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA310u;
            // 0x1da314: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA318u; }
        if (ctx->pc != 0x1DA318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA318u; }
        if (ctx->pc != 0x1DA318u) { return; }
    }
    ctx->pc = 0x1DA318u;
    // 0x1da318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da31c: 0x3c02c38c  lui         $v0, 0xC38C
    ctx->pc = 0x1da31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50060 << 16));
    // 0x1da320: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da324: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da328: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA328u;
    SET_GPR_U32(ctx, 31, 0x1DA330u);
    ctx->pc = 0x1DA32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA328u;
            // 0x1da32c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA330u; }
        if (ctx->pc != 0x1DA330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA330u; }
        if (ctx->pc != 0x1DA330u) { return; }
    }
    ctx->pc = 0x1DA330u;
    // 0x1da330: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da334: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x1da334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
    // 0x1da338: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da33c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da33cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da340: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA340u;
    SET_GPR_U32(ctx, 31, 0x1DA348u);
    ctx->pc = 0x1DA344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA340u;
            // 0x1da344: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA348u; }
        if (ctx->pc != 0x1DA348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA348u; }
        if (ctx->pc != 0x1DA348u) { return; }
    }
    ctx->pc = 0x1DA348u;
    // 0x1da348: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x1DA348u;
    {
        const bool branch_taken_0x1da348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da348) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA350u;
label_1da350:
    // 0x1da350: 0xc065d00  jal         func_197400
    ctx->pc = 0x1DA350u;
    SET_GPR_U32(ctx, 31, 0x1DA358u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA358u; }
        if (ctx->pc != 0x1DA358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA358u; }
        if (ctx->pc != 0x1DA358u) { return; }
    }
    ctx->pc = 0x1DA358u;
    // 0x1da358: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da35c: 0x14430190  bne         $v0, $v1, . + 4 + (0x190 << 2)
    ctx->pc = 0x1DA35Cu;
    {
        const bool branch_taken_0x1da35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1da35c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA364u;
    // 0x1da364: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da368: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA368u;
    {
        const bool branch_taken_0x1da368 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DA36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA368u;
            // 0x1da36c: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)15u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da368) {
            ctx->pc = 0x1DA37Cu;
            goto label_1da37c;
        }
    }
    ctx->pc = 0x1DA370u;
    // 0x1da370: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DA370u;
    {
        const bool branch_taken_0x1da370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da370) {
            ctx->pc = 0x1DA37Cu;
            goto label_1da37c;
        }
    }
    ctx->pc = 0x1DA378u;
    // 0x1da378: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1da378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_1da37c:
    // 0x1da37c: 0x14400188  bnez        $v0, . + 4 + (0x188 << 2)
    ctx->pc = 0x1DA37Cu;
    {
        const bool branch_taken_0x1da37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da37c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA384u;
    // 0x1da384: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da388: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1da388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da38c: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da390: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA390u;
    SET_GPR_U32(ctx, 31, 0x1DA398u);
    ctx->pc = 0x1DA394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA390u;
            // 0x1da394: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA398u; }
        if (ctx->pc != 0x1DA398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA398u; }
        if (ctx->pc != 0x1DA398u) { return; }
    }
    ctx->pc = 0x1DA398u;
    // 0x1da398: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da39c: 0x3c02c270  lui         $v0, 0xC270
    ctx->pc = 0x1da39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49776 << 16));
    // 0x1da3a0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da3a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da3a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da3a8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA3A8u;
    SET_GPR_U32(ctx, 31, 0x1DA3B0u);
    ctx->pc = 0x1DA3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3A8u;
            // 0x1da3ac: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3B0u; }
        if (ctx->pc != 0x1DA3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3B0u; }
        if (ctx->pc != 0x1DA3B0u) { return; }
    }
    ctx->pc = 0x1DA3B0u;
    // 0x1da3b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da3b4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x1da3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x1da3b8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da3bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da3c0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA3C0u;
    SET_GPR_U32(ctx, 31, 0x1DA3C8u);
    ctx->pc = 0x1DA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3C0u;
            // 0x1da3c4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3C8u; }
        if (ctx->pc != 0x1DA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3C8u; }
        if (ctx->pc != 0x1DA3C8u) { return; }
    }
    ctx->pc = 0x1DA3C8u;
    // 0x1da3c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da3cc: 0x3c02c2f0  lui         $v0, 0xC2F0
    ctx->pc = 0x1da3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49904 << 16));
    // 0x1da3d0: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da3d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da3d8: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA3D8u;
    SET_GPR_U32(ctx, 31, 0x1DA3E0u);
    ctx->pc = 0x1DA3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3D8u;
            // 0x1da3dc: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3E0u; }
        if (ctx->pc != 0x1DA3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3E0u; }
        if (ctx->pc != 0x1DA3E0u) { return; }
    }
    ctx->pc = 0x1DA3E0u;
    // 0x1da3e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da3e4: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1da3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1da3e8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da3f0: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA3F0u;
    SET_GPR_U32(ctx, 31, 0x1DA3F8u);
    ctx->pc = 0x1DA3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA3F0u;
            // 0x1da3f4: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3F8u; }
        if (ctx->pc != 0x1DA3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA3F8u; }
        if (ctx->pc != 0x1DA3F8u) { return; }
    }
    ctx->pc = 0x1DA3F8u;
    // 0x1da3f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da3fc: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x1da3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
    // 0x1da400: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da404: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da404u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da408: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA408u;
    SET_GPR_U32(ctx, 31, 0x1DA410u);
    ctx->pc = 0x1DA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA408u;
            // 0x1da40c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA410u; }
        if (ctx->pc != 0x1DA410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA410u; }
        if (ctx->pc != 0x1DA410u) { return; }
    }
    ctx->pc = 0x1DA410u;
    // 0x1da410: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da414: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1da414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1da418: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da41c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da420: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA420u;
    SET_GPR_U32(ctx, 31, 0x1DA428u);
    ctx->pc = 0x1DA424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA420u;
            // 0x1da424: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA428u; }
        if (ctx->pc != 0x1DA428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA428u; }
        if (ctx->pc != 0x1DA428u) { return; }
    }
    ctx->pc = 0x1DA428u;
    // 0x1da428: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da42c: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x1da430: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da434: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da438: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA438u;
    SET_GPR_U32(ctx, 31, 0x1DA440u);
    ctx->pc = 0x1DA43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA438u;
            // 0x1da43c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA440u; }
        if (ctx->pc != 0x1DA440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA440u; }
        if (ctx->pc != 0x1DA440u) { return; }
    }
    ctx->pc = 0x1DA440u;
    // 0x1da440: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da444: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1da444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1da448: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da44c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da450: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA450u;
    SET_GPR_U32(ctx, 31, 0x1DA458u);
    ctx->pc = 0x1DA454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA450u;
            // 0x1da454: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA458u; }
        if (ctx->pc != 0x1DA458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA458u; }
        if (ctx->pc != 0x1DA458u) { return; }
    }
    ctx->pc = 0x1DA458u;
    // 0x1da458: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da45c: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1da45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1da460: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da468: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA468u;
    SET_GPR_U32(ctx, 31, 0x1DA470u);
    ctx->pc = 0x1DA46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA468u;
            // 0x1da46c: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA470u; }
        if (ctx->pc != 0x1DA470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA470u; }
        if (ctx->pc != 0x1DA470u) { return; }
    }
    ctx->pc = 0x1DA470u;
    // 0x1da470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1da470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da474: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1da474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1da478: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da47c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1da47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1da480: 0xc0655b0  jal         func_1956C0
    ctx->pc = 0x1DA480u;
    SET_GPR_U32(ctx, 31, 0x1DA488u);
    ctx->pc = 0x1DA484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA480u;
            // 0x1da484: 0x246500a0  addiu       $a1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1956C0u;
    if (runtime->hasFunction(0x1956C0u)) {
        auto targetFn = runtime->lookupFunction(0x1956C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA488u; }
        if (ctx->pc != 0x1DA488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_BaramakiNerai_0x1956c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA488u; }
        if (ctx->pc != 0x1DA488u) { return; }
    }
    ctx->pc = 0x1DA488u;
    // 0x1da488: 0x10000145  b           . + 4 + (0x145 << 2)
    ctx->pc = 0x1DA488u;
    {
        const bool branch_taken_0x1da488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da488) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA490u;
label_1da490:
    // 0x1da490: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1DA490u;
    SET_GPR_U32(ctx, 31, 0x1DA498u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA498u; }
        if (ctx->pc != 0x1DA498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA498u; }
        if (ctx->pc != 0x1DA498u) { return; }
    }
    ctx->pc = 0x1DA498u;
    // 0x1da498: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da49c: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1da49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1da4a0: 0xc44c0120  lwc1        $f12, 0x120($v0)
    ctx->pc = 0x1da4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da4a4: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x1da4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1da4a8: 0xc076c38  jal         func_1DB0E0
    ctx->pc = 0x1DA4A8u;
    SET_GPR_U32(ctx, 31, 0x1DA4B0u);
    ctx->pc = 0x1DA4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4A8u;
            // 0x1da4ac: 0x27a50038  addiu       $a1, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0E0u;
    if (runtime->hasFunction(0x1DB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4B0u; }
        if (ctx->pc != 0x1DA4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3Dto2D_0x1db0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4B0u; }
        if (ctx->pc != 0x1DA4B0u) { return; }
    }
    ctx->pc = 0x1DA4B0u;
    // 0x1da4b0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1da4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1da4b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da4b8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1da4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x1da4bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1da4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1da4c0: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x1DA4C0u;
    SET_GPR_U32(ctx, 31, 0x1DA4C8u);
    ctx->pc = 0x1DA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4C0u;
            // 0x1da4c4: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (runtime->hasFunction(0x16E5E0u)) {
        auto targetFn = runtime->lookupFunction(0x16E5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4C8u; }
        if (ctx->pc != 0x1DA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Hp0_0x16e5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4C8u; }
        if (ctx->pc != 0x1DA4C8u) { return; }
    }
    ctx->pc = 0x1DA4C8u;
    // 0x1da4c8: 0xc05b9cc  jal         func_16E730
    ctx->pc = 0x1DA4C8u;
    SET_GPR_U32(ctx, 31, 0x1DA4D0u);
    ctx->pc = 0x1DA4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA4C8u;
            // 0x1da4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E730u;
    if (runtime->hasFunction(0x16E730u)) {
        auto targetFn = runtime->lookupFunction(0x16E730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D0u; }
        if (ctx->pc != 0x1DA4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_All_Hp0_0x16e730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D0u; }
        if (ctx->pc != 0x1DA4D0u) { return; }
    }
    ctx->pc = 0x1DA4D0u;
    // 0x1da4d0: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA4D0u;
    SET_GPR_U32(ctx, 31, 0x1DA4D8u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D8u; }
        if (ctx->pc != 0x1DA4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA4D8u; }
        if (ctx->pc != 0x1DA4D8u) { return; }
    }
    ctx->pc = 0x1DA4D8u;
    // 0x1da4d8: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1da4dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1da4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da4e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1da4e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1da4e4: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x1da4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da4e8: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1da4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da4ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1da4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1da4f0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da4f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1da4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da4f8: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1da4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1da4fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da500: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1da500u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1da504: 0x1010  mfhi        $v0
    ctx->pc = 0x1da504u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da508: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1da50c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1da50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1da510: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1da510u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1da514: 0xc0536d8  jal         func_14DB60
    ctx->pc = 0x1DA514u;
    SET_GPR_U32(ctx, 31, 0x1DA51Cu);
    ctx->pc = 0x1DA518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA514u;
            // 0x1da518: 0x2444ff60  addiu       $a0, $v0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DB60u;
    if (runtime->hasFunction(0x14DB60u)) {
        auto targetFn = runtime->lookupFunction(0x14DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA51Cu; }
        if (ctx->pc != 0x1DA51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosionKemuri_0x14db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA51Cu; }
        if (ctx->pc != 0x1DA51Cu) { return; }
    }
    ctx->pc = 0x1DA51Cu;
    // 0x1da51c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da520: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1da520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1da524: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1da524u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da528: 0x0  nop
    ctx->pc = 0x1da528u;
    // NOP
    // 0x1da52c: 0x0  nop
    ctx->pc = 0x1da52cu;
    // NOP
    // 0x1da530: 0x1010  mfhi        $v0
    ctx->pc = 0x1da530u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1da534: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1DA534u;
    {
        const bool branch_taken_0x1da534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da534) {
            ctx->pc = 0x1DA6B8u;
            goto label_1da6b8;
        }
    }
    ctx->pc = 0x1DA53Cu;
    // 0x1da53c: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA53Cu;
    SET_GPR_U32(ctx, 31, 0x1DA544u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA544u; }
        if (ctx->pc != 0x1DA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA544u; }
        if (ctx->pc != 0x1DA544u) { return; }
    }
    ctx->pc = 0x1DA544u;
    // 0x1da544: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x1da544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1da548: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1da548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da54c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1da54cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1da550: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x1da550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da554: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1da554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da558: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1da55c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da560: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1da560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da564: 0x8010  mfhi        $s0
    ctx->pc = 0x1da564u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x1da568: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1da568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1da56c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da56cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da570: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1da570u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1da574: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1da574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1da578: 0x24650064  addiu       $a1, $v1, 0x64
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1da57c: 0x2444ff60  addiu       $a0, $v0, -0xA0
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x1da580: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1DA580u;
    SET_GPR_U32(ctx, 31, 0x1DA588u);
    ctx->pc = 0x1DA584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA580u;
            // 0x1da584: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA588u; }
        if (ctx->pc != 0x1DA588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA588u; }
        if (ctx->pc != 0x1DA588u) { return; }
    }
    ctx->pc = 0x1DA588u;
    // 0x1da588: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1da588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da58c: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1da590: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1da590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da594: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1da598: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1da598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1da59c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1da59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1da5a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1da5a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da5a8: 0x0  nop
    ctx->pc = 0x1da5a8u;
    // NOP
    // 0x1da5ac: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1da5acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1da5b0: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DA5B0u;
    SET_GPR_U32(ctx, 31, 0x1DA5B8u);
    ctx->pc = 0x1DA5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5B0u;
            // 0x1da5b4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5B8u; }
        if (ctx->pc != 0x1DA5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5B8u; }
        if (ctx->pc != 0x1DA5B8u) { return; }
    }
    ctx->pc = 0x1DA5B8u;
    // 0x1da5b8: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA5B8u;
    SET_GPR_U32(ctx, 31, 0x1DA5C0u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5C0u; }
        if (ctx->pc != 0x1DA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5C0u; }
        if (ctx->pc != 0x1DA5C0u) { return; }
    }
    ctx->pc = 0x1DA5C0u;
    // 0x1da5c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da5c0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1da5c4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA5C4u;
    {
        const bool branch_taken_0x1da5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da5c4) {
            ctx->pc = 0x1DA600u;
            goto label_1da600;
        }
    }
    ctx->pc = 0x1DA5CCu;
    // 0x1da5cc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1da5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da5d0: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1da5d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1da5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da5d8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1da5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1da5dc: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1da5e0: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1da5e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1da5e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da5ec: 0x0  nop
    ctx->pc = 0x1da5ecu;
    // NOP
    // 0x1da5f0: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1da5f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1da5f4: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DA5F4u;
    SET_GPR_U32(ctx, 31, 0x1DA5FCu);
    ctx->pc = 0x1DA5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5F4u;
            // 0x1da5f8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5FCu; }
        if (ctx->pc != 0x1DA5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA5FCu; }
        if (ctx->pc != 0x1DA5FCu) { return; }
    }
    ctx->pc = 0x1DA5FCu;
    // 0x1da5fc: 0x0  nop
    ctx->pc = 0x1da5fcu;
    // NOP
label_1da600:
    // 0x1da600: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA600u;
    SET_GPR_U32(ctx, 31, 0x1DA608u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA608u; }
        if (ctx->pc != 0x1DA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA608u; }
        if (ctx->pc != 0x1DA608u) { return; }
    }
    ctx->pc = 0x1DA608u;
    // 0x1da608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1da608u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x1da60c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DA60Cu;
    {
        const bool branch_taken_0x1da60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da60c) {
            ctx->pc = 0x1DA648u;
            goto label_1da648;
        }
    }
    ctx->pc = 0x1DA614u;
    // 0x1da614: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1da614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da618: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1da61c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1da61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da620: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1da624: 0x2463ff60  addiu       $v1, $v1, -0xA0
    ctx->pc = 0x1da624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967136));
    // 0x1da628: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1da628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1da62c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1da62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da634: 0x0  nop
    ctx->pc = 0x1da634u;
    // NOP
    // 0x1da638: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x1da638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1da63c: 0xc05d080  jal         func_174200
    ctx->pc = 0x1DA63Cu;
    SET_GPR_U32(ctx, 31, 0x1DA644u);
    ctx->pc = 0x1DA640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA63Cu;
            // 0x1da640: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA644u; }
        if (ctx->pc != 0x1DA644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA644u; }
        if (ctx->pc != 0x1DA644u) { return; }
    }
    ctx->pc = 0x1DA644u;
    // 0x1da644: 0x0  nop
    ctx->pc = 0x1da644u;
    // NOP
label_1da648:
    // 0x1da648: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DA648u;
    SET_GPR_U32(ctx, 31, 0x1DA650u);
    ctx->pc = 0x1DA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA648u;
            // 0x1da64c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA650u; }
        if (ctx->pc != 0x1DA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA650u; }
        if (ctx->pc != 0x1DA650u) { return; }
    }
    ctx->pc = 0x1DA650u;
    // 0x1da650: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA650u;
    {
        const bool branch_taken_0x1da650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da650) {
            ctx->pc = 0x1DA680u;
            goto label_1da680;
        }
    }
    ctx->pc = 0x1DA658u;
    // 0x1da658: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA658u;
    SET_GPR_U32(ctx, 31, 0x1DA660u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA660u; }
        if (ctx->pc != 0x1DA660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA660u; }
        if (ctx->pc != 0x1DA660u) { return; }
    }
    ctx->pc = 0x1DA660u;
    // 0x1da660: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da664: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1da664u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1da668: 0x0  nop
    ctx->pc = 0x1da668u;
    // NOP
    // 0x1da66c: 0x0  nop
    ctx->pc = 0x1da66cu;
    // NOP
    // 0x1da670: 0x2810  mfhi        $a1
    ctx->pc = 0x1da670u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1da674: 0xc055124  jal         func_154490
    ctx->pc = 0x1DA674u;
    SET_GPR_U32(ctx, 31, 0x1DA67Cu);
    ctx->pc = 0x1DA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA674u;
            // 0x1da678: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA67Cu; }
        if (ctx->pc != 0x1DA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA67Cu; }
        if (ctx->pc != 0x1DA67Cu) { return; }
    }
    ctx->pc = 0x1DA67Cu;
    // 0x1da67c: 0x0  nop
    ctx->pc = 0x1da67cu;
    // NOP
label_1da680:
    // 0x1da680: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DA680u;
    SET_GPR_U32(ctx, 31, 0x1DA688u);
    ctx->pc = 0x1DA684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA680u;
            // 0x1da684: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA688u; }
        if (ctx->pc != 0x1DA688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA688u; }
        if (ctx->pc != 0x1DA688u) { return; }
    }
    ctx->pc = 0x1DA688u;
    // 0x1da688: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DA688u;
    {
        const bool branch_taken_0x1da688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da688) {
            ctx->pc = 0x1DA6B8u;
            goto label_1da6b8;
        }
    }
    ctx->pc = 0x1DA690u;
    // 0x1da690: 0xc050bb4  jal         func_142ED0
    ctx->pc = 0x1DA690u;
    SET_GPR_U32(ctx, 31, 0x1DA698u);
    ctx->pc = 0x142ED0u;
    if (runtime->hasFunction(0x142ED0u)) {
        auto targetFn = runtime->lookupFunction(0x142ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA698u; }
        if (ctx->pc != 0x1DA698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRand_0x142ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA698u; }
        if (ctx->pc != 0x1DA698u) { return; }
    }
    ctx->pc = 0x1DA698u;
    // 0x1da698: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1da698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1da69c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1da69cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1da6a0: 0x0  nop
    ctx->pc = 0x1da6a0u;
    // NOP
    // 0x1da6a4: 0x0  nop
    ctx->pc = 0x1da6a4u;
    // NOP
    // 0x1da6a8: 0x2810  mfhi        $a1
    ctx->pc = 0x1da6a8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1da6ac: 0xc055124  jal         func_154490
    ctx->pc = 0x1DA6ACu;
    SET_GPR_U32(ctx, 31, 0x1DA6B4u);
    ctx->pc = 0x1DA6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6ACu;
            // 0x1da6b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6B4u; }
        if (ctx->pc != 0x1DA6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA6B4u; }
        if (ctx->pc != 0x1DA6B4u) { return; }
    }
    ctx->pc = 0x1DA6B4u;
    // 0x1da6b4: 0x0  nop
    ctx->pc = 0x1da6b4u;
    // NOP
label_1da6b8:
    // 0x1da6b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1da6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da6bc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x1da6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x1da6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da6c4: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x1da6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1da6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da6cc: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1DA6CCu;
    {
        const bool branch_taken_0x1da6cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1da6cc) {
            ctx->pc = 0x1DA730u;
            goto label_1da730;
        }
    }
    ctx->pc = 0x1DA6D4u;
    // 0x1da6d4: 0xc4810114  lwc1        $f1, 0x114($a0)
    ctx->pc = 0x1da6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da6d8: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x1da6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x1da6dc: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1da6dcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)55050u)));
    // 0x1da6e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1da6e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1da6e4: 0x3c023b44  lui         $v0, 0x3B44
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15172 << 16));
    // 0x1da6e8: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x1da6e8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)39846u)));
    // 0x1da6ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da6f0: 0x0  nop
    ctx->pc = 0x1da6f0u;
    // NOP
    // 0x1da6f4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1da6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1da6f8: 0xe4810114  swc1        $f1, 0x114($a0)
    ctx->pc = 0x1da6f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
    // 0x1da6fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da700: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1da700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da704: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1da704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1da708: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1da708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1da70c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1da70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da710: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1da710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da714: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1da714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1da718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1da71c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1da71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1da720: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1da720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da724: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1da724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1da728: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1DA728u;
    {
        const bool branch_taken_0x1da728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA728u;
            // 0x1da72c: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da728) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA730u;
label_1da730:
    // 0x1da730: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1da730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1da734: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1da734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1da738: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1da738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1da73c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1da73cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da740: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1da740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1da744: 0xc62200d0  lwc1        $f2, 0xD0($s1)
    ctx->pc = 0x1da744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1da748: 0x3c02c040  lui         $v0, 0xC040
    ctx->pc = 0x1da748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49216 << 16));
    // 0x1da74c: 0xc62000d4  lwc1        $f0, 0xD4($s1)
    ctx->pc = 0x1da74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da750: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1da750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da754: 0x2465fe0c  addiu       $a1, $v1, -0x1F4
    ctx->pc = 0x1da754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966796));
    // 0x1da758: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1da758u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1da75c: 0xc053740  jal         func_14DD00
    ctx->pc = 0x1DA75Cu;
    SET_GPR_U32(ctx, 31, 0x1DA764u);
    ctx->pc = 0x1DA760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA75Cu;
            // 0x1da760: 0x46000b42  mul.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DD00u;
    if (runtime->hasFunction(0x14DD00u)) {
        auto targetFn = runtime->lookupFunction(0x14DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA764u; }
        if (ctx->pc != 0x1DA764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateExplosion_0x14dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA764u; }
        if (ctx->pc != 0x1DA764u) { return; }
    }
    ctx->pc = 0x1DA764u;
    // 0x1da764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1da764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1da768: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da768u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1da76c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x1da76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1da770: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1da770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1da774: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x1DA774u;
    {
        const bool branch_taken_0x1da774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA774u;
            // 0x1da778: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da774) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA77Cu;
    // 0x1da77c: 0x0  nop
    ctx->pc = 0x1da77cu;
    // NOP
label_1da780:
    // 0x1da780: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da788: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA788u;
    {
        const bool branch_taken_0x1da788 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA788u;
            // 0x1da78c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da788) {
            ctx->pc = 0x1DA7C0u;
            goto label_1da7c0;
        }
    }
    ctx->pc = 0x1DA790u;
    // 0x1da790: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DA790u;
    SET_GPR_U32(ctx, 31, 0x1DA798u);
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA798u; }
        if (ctx->pc != 0x1DA798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA798u; }
        if (ctx->pc != 0x1DA798u) { return; }
    }
    ctx->pc = 0x1DA798u;
    // 0x1da798: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA798u;
    {
        const bool branch_taken_0x1da798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA798u;
            // 0x1da79c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da798) {
            ctx->pc = 0x1DA7A8u;
            goto label_1da7a8;
        }
    }
    ctx->pc = 0x1DA7A0u;
    // 0x1da7a0: 0xc055124  jal         func_154490
    ctx->pc = 0x1DA7A0u;
    SET_GPR_U32(ctx, 31, 0x1DA7A8u);
    ctx->pc = 0x1DA7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7A0u;
            // 0x1da7a4: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7A8u; }
        if (ctx->pc != 0x1DA7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7A8u; }
        if (ctx->pc != 0x1DA7A8u) { return; }
    }
    ctx->pc = 0x1DA7A8u;
label_1da7a8:
    // 0x1da7a8: 0xc056f84  jal         func_15BE10
    ctx->pc = 0x1DA7A8u;
    SET_GPR_U32(ctx, 31, 0x1DA7B0u);
    ctx->pc = 0x1DA7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7A8u;
            // 0x1da7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BE10u;
    if (runtime->hasFunction(0x15BE10u)) {
        auto targetFn = runtime->lookupFunction(0x15BE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7B0u; }
        if (ctx->pc != 0x1DA7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGamePlayerAvtive_0x15be10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7B0u; }
        if (ctx->pc != 0x1DA7B0u) { return; }
    }
    ctx->pc = 0x1DA7B0u;
    // 0x1da7b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA7B0u;
    {
        const bool branch_taken_0x1da7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7B0u;
            // 0x1da7b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7b0) {
            ctx->pc = 0x1DA7C0u;
            goto label_1da7c0;
        }
    }
    ctx->pc = 0x1DA7B8u;
    // 0x1da7b8: 0xc055124  jal         func_154490
    ctx->pc = 0x1DA7B8u;
    SET_GPR_U32(ctx, 31, 0x1DA7C0u);
    ctx->pc = 0x1DA7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7B8u;
            // 0x1da7bc: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7C0u; }
        if (ctx->pc != 0x1DA7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7C0u; }
        if (ctx->pc != 0x1DA7C0u) { return; }
    }
    ctx->pc = 0x1DA7C0u;
label_1da7c0:
    // 0x1da7c0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da7c4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1da7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da7c8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA7C8u;
    {
        const bool branch_taken_0x1da7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7C8u;
            // 0x1da7cc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c8) {
            ctx->pc = 0x1DA7D8u;
            goto label_1da7d8;
        }
    }
    ctx->pc = 0x1DA7D0u;
    // 0x1da7d0: 0xc060718  jal         func_181C60
    ctx->pc = 0x1DA7D0u;
    SET_GPR_U32(ctx, 31, 0x1DA7D8u);
    ctx->pc = 0x181C60u;
    if (runtime->hasFunction(0x181C60u)) {
        auto targetFn = runtime->lookupFunction(0x181C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7D8u; }
        if (ctx->pc != 0x1DA7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FaderFuncSet_0x181c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7D8u; }
        if (ctx->pc != 0x1DA7D8u) { return; }
    }
    ctx->pc = 0x1DA7D8u;
label_1da7d8:
    // 0x1da7d8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da7dc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1da7e0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA7E0u;
    {
        const bool branch_taken_0x1da7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7E0u;
            // 0x1da7e4: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7e0) {
            ctx->pc = 0x1DA7F0u;
            goto label_1da7f0;
        }
    }
    ctx->pc = 0x1DA7E8u;
    // 0x1da7e8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA7E8u;
    SET_GPR_U32(ctx, 31, 0x1DA7F0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7F0u; }
        if (ctx->pc != 0x1DA7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA7F0u; }
        if (ctx->pc != 0x1DA7F0u) { return; }
    }
    ctx->pc = 0x1DA7F0u;
label_1da7f0:
    // 0x1da7f0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da7f4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1da7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1da7f8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA7F8u;
    {
        const bool branch_taken_0x1da7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7F8u;
            // 0x1da7fc: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7f8) {
            ctx->pc = 0x1DA808u;
            goto label_1da808;
        }
    }
    ctx->pc = 0x1DA800u;
    // 0x1da800: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA800u;
    SET_GPR_U32(ctx, 31, 0x1DA808u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA808u; }
        if (ctx->pc != 0x1DA808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA808u; }
        if (ctx->pc != 0x1DA808u) { return; }
    }
    ctx->pc = 0x1DA808u;
label_1da808:
    // 0x1da808: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da80c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1da80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1da810: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA810u;
    {
        const bool branch_taken_0x1da810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA810u;
            // 0x1da814: 0x24040022  addiu       $a0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da810) {
            ctx->pc = 0x1DA820u;
            goto label_1da820;
        }
    }
    ctx->pc = 0x1DA818u;
    // 0x1da818: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA818u;
    SET_GPR_U32(ctx, 31, 0x1DA820u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA820u; }
        if (ctx->pc != 0x1DA820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA820u; }
        if (ctx->pc != 0x1DA820u) { return; }
    }
    ctx->pc = 0x1DA820u;
label_1da820:
    // 0x1da820: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da824: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1da828: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA828u;
    {
        const bool branch_taken_0x1da828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA828u;
            // 0x1da82c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da828) {
            ctx->pc = 0x1DA838u;
            goto label_1da838;
        }
    }
    ctx->pc = 0x1DA830u;
    // 0x1da830: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA830u;
    SET_GPR_U32(ctx, 31, 0x1DA838u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA838u; }
        if (ctx->pc != 0x1DA838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA838u; }
        if (ctx->pc != 0x1DA838u) { return; }
    }
    ctx->pc = 0x1DA838u;
label_1da838:
    // 0x1da838: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da83c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1da83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1da840: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA840u;
    {
        const bool branch_taken_0x1da840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA840u;
            // 0x1da844: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da840) {
            ctx->pc = 0x1DA850u;
            goto label_1da850;
        }
    }
    ctx->pc = 0x1DA848u;
    // 0x1da848: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA848u;
    SET_GPR_U32(ctx, 31, 0x1DA850u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA850u; }
        if (ctx->pc != 0x1DA850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA850u; }
        if (ctx->pc != 0x1DA850u) { return; }
    }
    ctx->pc = 0x1DA850u;
label_1da850:
    // 0x1da850: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da854: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1da854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1da858: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA858u;
    {
        const bool branch_taken_0x1da858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA858u;
            // 0x1da85c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da858) {
            ctx->pc = 0x1DA868u;
            goto label_1da868;
        }
    }
    ctx->pc = 0x1DA860u;
    // 0x1da860: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA860u;
    SET_GPR_U32(ctx, 31, 0x1DA868u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA868u; }
        if (ctx->pc != 0x1DA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA868u; }
        if (ctx->pc != 0x1DA868u) { return; }
    }
    ctx->pc = 0x1DA868u;
label_1da868:
    // 0x1da868: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da86c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1da86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1da870: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA870u;
    {
        const bool branch_taken_0x1da870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA870u;
            // 0x1da874: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da870) {
            ctx->pc = 0x1DA880u;
            goto label_1da880;
        }
    }
    ctx->pc = 0x1DA878u;
    // 0x1da878: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA878u;
    SET_GPR_U32(ctx, 31, 0x1DA880u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA880u; }
        if (ctx->pc != 0x1DA880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA880u; }
        if (ctx->pc != 0x1DA880u) { return; }
    }
    ctx->pc = 0x1DA880u;
label_1da880:
    // 0x1da880: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da884: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x1da884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1da888: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA888u;
    {
        const bool branch_taken_0x1da888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA888u;
            // 0x1da88c: 0x2404001b  addiu       $a0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da888) {
            ctx->pc = 0x1DA898u;
            goto label_1da898;
        }
    }
    ctx->pc = 0x1DA890u;
    // 0x1da890: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA890u;
    SET_GPR_U32(ctx, 31, 0x1DA898u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA898u; }
        if (ctx->pc != 0x1DA898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA898u; }
        if (ctx->pc != 0x1DA898u) { return; }
    }
    ctx->pc = 0x1DA898u;
label_1da898:
    // 0x1da898: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da89c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x1da89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1da8a0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA8A0u;
    {
        const bool branch_taken_0x1da8a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8A0u;
            // 0x1da8a4: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8a0) {
            ctx->pc = 0x1DA8B0u;
            goto label_1da8b0;
        }
    }
    ctx->pc = 0x1DA8A8u;
    // 0x1da8a8: 0xc05d110  jal         func_174440
    ctx->pc = 0x1DA8A8u;
    SET_GPR_U32(ctx, 31, 0x1DA8B0u);
    ctx->pc = 0x174440u;
    if (runtime->hasFunction(0x174440u)) {
        auto targetFn = runtime->lookupFunction(0x174440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8B0u; }
        if (ctx->pc != 0x1DA8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_0x174440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8B0u; }
        if (ctx->pc != 0x1DA8B0u) { return; }
    }
    ctx->pc = 0x1DA8B0u;
label_1da8b0:
    // 0x1da8b0: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da8b4: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x1da8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1da8b8: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DA8B8u;
    {
        const bool branch_taken_0x1da8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da8b8) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA8C0u;
    // 0x1da8c0: 0xc056054  jal         func_158150
    ctx->pc = 0x1DA8C0u;
    SET_GPR_U32(ctx, 31, 0x1DA8C8u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8C8u; }
        if (ctx->pc != 0x1DA8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8C8u; }
        if (ctx->pc != 0x1DA8C8u) { return; }
    }
    ctx->pc = 0x1DA8C8u;
    // 0x1da8c8: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1DA8C8u;
    SET_GPR_U32(ctx, 31, 0x1DA8D0u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8D0u; }
        if (ctx->pc != 0x1DA8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8D0u; }
        if (ctx->pc != 0x1DA8D0u) { return; }
    }
    ctx->pc = 0x1DA8D0u;
    // 0x1da8d0: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1DA8D0u;
    SET_GPR_U32(ctx, 31, 0x1DA8D8u);
    ctx->pc = 0x1DA8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8D0u;
            // 0x1da8d4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8D8u; }
        if (ctx->pc != 0x1DA8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8D8u; }
        if (ctx->pc != 0x1DA8D8u) { return; }
    }
    ctx->pc = 0x1DA8D8u;
    // 0x1da8d8: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1DA8D8u;
    SET_GPR_U32(ctx, 31, 0x1DA8E0u);
    ctx->pc = 0x1DA8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8D8u;
            // 0x1da8dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E0u; }
        if (ctx->pc != 0x1DA8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E0u; }
        if (ctx->pc != 0x1DA8E0u) { return; }
    }
    ctx->pc = 0x1DA8E0u;
    // 0x1da8e0: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1DA8E0u;
    SET_GPR_U32(ctx, 31, 0x1DA8E8u);
    ctx->pc = 0x1DA8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8E0u;
            // 0x1da8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E8u; }
        if (ctx->pc != 0x1DA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8E8u; }
        if (ctx->pc != 0x1DA8E8u) { return; }
    }
    ctx->pc = 0x1DA8E8u;
    // 0x1da8e8: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x1DA8E8u;
    {
        const bool branch_taken_0x1da8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da8e8) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DA8F0u;
label_1da8f0:
    // 0x1da8f0: 0xc0656b4  jal         func_195AD0
    ctx->pc = 0x1DA8F0u;
    SET_GPR_U32(ctx, 31, 0x1DA8F8u);
    ctx->pc = 0x195AD0u;
    if (runtime->hasFunction(0x195AD0u)) {
        auto targetFn = runtime->lookupFunction(0x195AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8F8u; }
        if (ctx->pc != 0x1DA8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotBloadCastDead2_0x195ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA8F8u; }
        if (ctx->pc != 0x1DA8F8u) { return; }
    }
    ctx->pc = 0x1DA8F8u;
    // 0x1da8f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1da8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da8fc: 0x3c02c396  lui         $v0, 0xC396
    ctx->pc = 0x1da8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50070 << 16));
    // 0x1da900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da904: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1da904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da908: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1da908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1da90c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1DA90Cu;
    {
        const bool branch_taken_0x1da90c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DA910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA90Cu;
            // 0x1da910: 0x24620124  addiu       $v0, $v1, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da90c) {
            ctx->pc = 0x1DA938u;
            goto label_1da938;
        }
    }
    ctx->pc = 0x1DA914u;
    // 0x1da914: 0xc62100d4  lwc1        $f1, 0xD4($s1)
    ctx->pc = 0x1da914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1da918: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x1da918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
    // 0x1da91c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x1da91cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)49807u)));
    // 0x1da920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1da920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da924: 0x0  nop
    ctx->pc = 0x1da924u;
    // NOP
    // 0x1da928: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1da928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1da92c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1DA92Cu;
    {
        const bool branch_taken_0x1da92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA92Cu;
            // 0x1da930: 0xe62000d4  swc1        $f0, 0xD4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da92c) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA934u;
    // 0x1da934: 0x0  nop
    ctx->pc = 0x1da934u;
    // NOP
label_1da938:
    // 0x1da938: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1da938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1da93c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1da93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1da940: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1da940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1da944: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da944u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1da948: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x1da948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x1da94c: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x1da94cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x1da950: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1da950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x1da954: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA954u;
    {
        const bool branch_taken_0x1da954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA954u;
            // 0x1da958: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da954) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA95Cu;
    // 0x1da95c: 0x0  nop
    ctx->pc = 0x1da95cu;
    // NOP
label_1da960:
    // 0x1da960: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da964: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1da964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1da968: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DA968u;
    {
        const bool branch_taken_0x1da968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1da968) {
            ctx->pc = 0x1DA9A0u;
            goto label_1da9a0;
        }
    }
    ctx->pc = 0x1DA970u;
    // 0x1da970: 0xc056054  jal         func_158150
    ctx->pc = 0x1DA970u;
    SET_GPR_U32(ctx, 31, 0x1DA978u);
    ctx->pc = 0x158150u;
    if (runtime->hasFunction(0x158150u)) {
        auto targetFn = runtime->lookupFunction(0x158150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA978u; }
        if (ctx->pc != 0x1DA978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RnnyuNo_0x158150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA978u; }
        if (ctx->pc != 0x1DA978u) { return; }
    }
    ctx->pc = 0x1DA978u;
    // 0x1da978: 0xc05656c  jal         func_1595B0
    ctx->pc = 0x1DA978u;
    SET_GPR_U32(ctx, 31, 0x1DA980u);
    ctx->pc = 0x1595B0u;
    if (runtime->hasFunction(0x1595B0u)) {
        auto targetFn = runtime->lookupFunction(0x1595B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA980u; }
        if (ctx->pc != 0x1DA980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResultStepInit_0x1595b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA980u; }
        if (ctx->pc != 0x1DA980u) { return; }
    }
    ctx->pc = 0x1DA980u;
    // 0x1da980: 0xc056530  jal         func_1594C0
    ctx->pc = 0x1DA980u;
    SET_GPR_U32(ctx, 31, 0x1DA988u);
    ctx->pc = 0x1DA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA980u;
            // 0x1da984: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1594C0u;
    if (runtime->hasFunction(0x1594C0u)) {
        auto targetFn = runtime->lookupFunction(0x1594C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA988u; }
        if (ctx->pc != 0x1DA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BossResultSet_0x1594c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA988u; }
        if (ctx->pc != 0x1DA988u) { return; }
    }
    ctx->pc = 0x1DA988u;
    // 0x1da988: 0xc05886c  jal         func_1621B0
    ctx->pc = 0x1DA988u;
    SET_GPR_U32(ctx, 31, 0x1DA990u);
    ctx->pc = 0x1DA98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA988u;
            // 0x1da98c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1621B0u;
    if (runtime->hasFunction(0x1621B0u)) {
        auto targetFn = runtime->lookupFunction(0x1621B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA990u; }
        if (ctx->pc != 0x1DA990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bossStateSet_0x1621b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA990u; }
        if (ctx->pc != 0x1DA990u) { return; }
    }
    ctx->pc = 0x1DA990u;
    // 0x1da990: 0xc05b984  jal         func_16E610
    ctx->pc = 0x1DA990u;
    SET_GPR_U32(ctx, 31, 0x1DA998u);
    ctx->pc = 0x1DA994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA990u;
            // 0x1da994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E610u;
    if (runtime->hasFunction(0x16E610u)) {
        auto targetFn = runtime->lookupFunction(0x16E610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA998u; }
        if (ctx->pc != 0x1DA998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Dead_0x16e610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA998u; }
        if (ctx->pc != 0x1DA998u) { return; }
    }
    ctx->pc = 0x1DA998u;
    // 0x1da998: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x1DA998u;
    {
        const bool branch_taken_0x1da998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da998) {
            ctx->pc = 0x1DAD88u;
            goto label_1dad88;
        }
    }
    ctx->pc = 0x1DA9A0u;
label_1da9a0:
    // 0x1da9a0: 0xc05b9ac  jal         func_16E6B0
    ctx->pc = 0x1DA9A0u;
    SET_GPR_U32(ctx, 31, 0x1DA9A8u);
    ctx->pc = 0x1DA9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9A0u;
            // 0x1da9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E6B0u;
    if (runtime->hasFunction(0x16E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x16E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9A8u; }
        if (ctx->pc != 0x1DA9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_Vector_0x16e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9A8u; }
        if (ctx->pc != 0x1DA9A8u) { return; }
    }
    ctx->pc = 0x1DA9A8u;
    // 0x1da9a8: 0xc05b9a0  jal         func_16E680
    ctx->pc = 0x1DA9A8u;
    SET_GPR_U32(ctx, 31, 0x1DA9B0u);
    ctx->pc = 0x1DA9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9A8u;
            // 0x1da9ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E680u;
    if (runtime->hasFunction(0x16E680u)) {
        auto targetFn = runtime->lookupFunction(0x16E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9B0u; }
        if (ctx->pc != 0x1DA9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Enemy_BloadCast_Child_State_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9B0u; }
        if (ctx->pc != 0x1DA9B0u) { return; }
    }
    ctx->pc = 0x1DA9B0u;
    // 0x1da9b0: 0xc04b788  jal         func_12DE20
    ctx->pc = 0x1DA9B0u;
    SET_GPR_U32(ctx, 31, 0x1DA9B8u);
    ctx->pc = 0x1DA9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9B0u;
            // 0x1da9b4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DE20u;
    if (runtime->hasFunction(0x12DE20u)) {
        auto targetFn = runtime->lookupFunction(0x12DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9B8u; }
        if (ctx->pc != 0x1DA9B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x12de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9B8u; }
        if (ctx->pc != 0x1DA9B8u) { return; }
    }
    ctx->pc = 0x1DA9B8u;
    // 0x1da9b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1da9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9bc: 0xc48c0110  lwc1        $f12, 0x110($a0)
    ctx->pc = 0x1da9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da9c0: 0xc04b7da  jal         func_12DF68
    ctx->pc = 0x1DA9C0u;
    SET_GPR_U32(ctx, 31, 0x1DA9C8u);
    ctx->pc = 0x1DA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9C0u;
            // 0x1da9c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DF68u;
    if (runtime->hasFunction(0x12DF68u)) {
        auto targetFn = runtime->lookupFunction(0x12DF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9C8u; }
        if (ctx->pc != 0x1DA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x12df68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9C8u; }
        if (ctx->pc != 0x1DA9C8u) { return; }
    }
    ctx->pc = 0x1DA9C8u;
    // 0x1da9c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1da9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9cc: 0xc48c0114  lwc1        $f12, 0x114($a0)
    ctx->pc = 0x1da9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da9d0: 0xc04b804  jal         func_12E010
    ctx->pc = 0x1DA9D0u;
    SET_GPR_U32(ctx, 31, 0x1DA9D8u);
    ctx->pc = 0x1DA9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9D0u;
            // 0x1da9d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E010u;
    if (runtime->hasFunction(0x12E010u)) {
        auto targetFn = runtime->lookupFunction(0x12E010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9D8u; }
        if (ctx->pc != 0x1DA9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x12e010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9D8u; }
        if (ctx->pc != 0x1DA9D8u) { return; }
    }
    ctx->pc = 0x1DA9D8u;
    // 0x1da9d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9dc: 0xc48c0118  lwc1        $f12, 0x118($a0)
    ctx->pc = 0x1da9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1da9e0: 0xc04b7b0  jal         func_12DEC0
    ctx->pc = 0x1DA9E0u;
    SET_GPR_U32(ctx, 31, 0x1DA9E8u);
    ctx->pc = 0x1DA9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9E0u;
            // 0x1da9e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DEC0u;
    if (runtime->hasFunction(0x12DEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12DEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9E8u; }
        if (ctx->pc != 0x1DA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x12dec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9E8u; }
        if (ctx->pc != 0x1DA9E8u) { return; }
    }
    ctx->pc = 0x1DA9E8u;
    // 0x1da9e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1da9ec: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1da9ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9f0: 0xc04b75e  jal         func_12DD78
    ctx->pc = 0x1DA9F0u;
    SET_GPR_U32(ctx, 31, 0x1DA9F8u);
    ctx->pc = 0x1DA9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9F0u;
            // 0x1da9f4: 0x24860120  addiu       $a2, $a0, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD78u;
    if (runtime->hasFunction(0x12DD78u)) {
        auto targetFn = runtime->lookupFunction(0x12DD78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9F8u; }
        if (ctx->pc != 0x1DA9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0TransMatrix_0x12dd78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DA9F8u; }
        if (ctx->pc != 0x1DA9F8u) { return; }
    }
    ctx->pc = 0x1DA9F8u;
    // 0x1da9f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1da9fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1daa00: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1daa00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1daa04: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DAA04u;
    {
        const bool branch_taken_0x1daa04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa04) {
            ctx->pc = 0x1DAA58u;
            goto label_1daa58;
        }
    }
    ctx->pc = 0x1DAA0Cu;
    // 0x1daa0c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x1daa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1daa10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAA10u;
    {
        const bool branch_taken_0x1daa10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa10) {
            ctx->pc = 0x1DAA28u;
            goto label_1daa28;
        }
    }
    ctx->pc = 0x1DAA18u;
    // 0x1daa18: 0xc0604f0  jal         func_1813C0
    ctx->pc = 0x1DAA18u;
    SET_GPR_U32(ctx, 31, 0x1DAA20u);
    ctx->pc = 0x1DAA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA18u;
            // 0x1daa1c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1813C0u;
    if (runtime->hasFunction(0x1813C0u)) {
        auto targetFn = runtime->lookupFunction(0x1813C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA20u; }
        if (ctx->pc != 0x1DAA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneFlashColor_0x1813c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA20u; }
        if (ctx->pc != 0x1DAA20u) { return; }
    }
    ctx->pc = 0x1DAA20u;
    // 0x1daa20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAA20u;
    {
        const bool branch_taken_0x1daa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa20) {
            ctx->pc = 0x1DAA30u;
            goto label_1daa30;
        }
    }
    ctx->pc = 0x1DAA28u;
label_1daa28:
    // 0x1daa28: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1DAA28u;
    SET_GPR_U32(ctx, 31, 0x1DAA30u);
    ctx->pc = 0x1DAA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA28u;
            // 0x1daa2c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA30u; }
        if (ctx->pc != 0x1DAA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA30u; }
        if (ctx->pc != 0x1DAA30u) { return; }
    }
    ctx->pc = 0x1DAA30u;
label_1daa30:
    // 0x1daa30: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x1daa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x1daa34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAA34u;
    {
        const bool branch_taken_0x1daa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa34) {
            ctx->pc = 0x1DAA48u;
            goto label_1daa48;
        }
    }
    ctx->pc = 0x1DAA3Cu;
    // 0x1daa3c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1DAA3Cu;
    {
        const bool branch_taken_0x1daa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA3Cu;
            // 0x1daa40: 0xae20010c  sw          $zero, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa3c) {
            ctx->pc = 0x1DAAA8u;
            goto label_1daaa8;
        }
    }
    ctx->pc = 0x1DAA44u;
    // 0x1daa44: 0x0  nop
    ctx->pc = 0x1daa44u;
    // NOP
label_1daa48:
    // 0x1daa48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1daa48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daa4c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DAA4Cu;
    {
        const bool branch_taken_0x1daa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA4Cu;
            // 0x1daa50: 0xae23010c  sw          $v1, 0x10C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa4c) {
            ctx->pc = 0x1DAAA8u;
            goto label_1daaa8;
        }
    }
    ctx->pc = 0x1DAA54u;
    // 0x1daa54: 0x0  nop
    ctx->pc = 0x1daa54u;
    // NOP
label_1daa58:
    // 0x1daa58: 0x286102bc  slti        $at, $v1, 0x2BC
    ctx->pc = 0x1daa58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)700) ? 1 : 0);
    // 0x1daa5c: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1DAA5Cu;
    {
        const bool branch_taken_0x1daa5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa5c) {
            ctx->pc = 0x1DAA98u;
            goto label_1daa98;
        }
    }
    ctx->pc = 0x1DAA64u;
    // 0x1daa64: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1daa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1daa68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1daa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1daa6c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1daa6cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1daa70: 0x0  nop
    ctx->pc = 0x1daa70u;
    // NOP
    // 0x1daa74: 0x0  nop
    ctx->pc = 0x1daa74u;
    // NOP
    // 0x1daa78: 0x1010  mfhi        $v0
    ctx->pc = 0x1daa78u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1daa7c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAA7Cu;
    {
        const bool branch_taken_0x1daa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1daa7c) {
            ctx->pc = 0x1DAA98u;
            goto label_1daa98;
        }
    }
    ctx->pc = 0x1DAA84u;
    // 0x1daa84: 0xc060500  jal         func_181400
    ctx->pc = 0x1DAA84u;
    SET_GPR_U32(ctx, 31, 0x1DAA8Cu);
    ctx->pc = 0x1DAA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA84u;
            // 0x1daa88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181400u;
    if (runtime->hasFunction(0x181400u)) {
        auto targetFn = runtime->lookupFunction(0x181400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA8Cu; }
        if (ctx->pc != 0x1DAA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneRedColor_0x181400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA8Cu; }
        if (ctx->pc != 0x1DAA8Cu) { return; }
    }
    ctx->pc = 0x1DAA8Cu;
    // 0x1daa8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAA8Cu;
    {
        const bool branch_taken_0x1daa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daa8c) {
            ctx->pc = 0x1DAAA0u;
            goto label_1daaa0;
        }
    }
    ctx->pc = 0x1DAA94u;
    // 0x1daa94: 0x0  nop
    ctx->pc = 0x1daa94u;
    // NOP
label_1daa98:
    // 0x1daa98: 0xc0604dc  jal         func_181370
    ctx->pc = 0x1DAA98u;
    SET_GPR_U32(ctx, 31, 0x1DAAA0u);
    ctx->pc = 0x1DAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA98u;
            // 0x1daa9c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181370u;
    if (runtime->hasFunction(0x181370u)) {
        auto targetFn = runtime->lookupFunction(0x181370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAAA0u; }
        if (ctx->pc != 0x1DAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColor_0x181370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAAA0u; }
        if (ctx->pc != 0x1DAAA0u) { return; }
    }
    ctx->pc = 0x1DAAA0u;
label_1daaa0:
    // 0x1daaa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daaa4: 0xae23010c  sw          $v1, 0x10C($s1)
    ctx->pc = 0x1daaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 3));
label_1daaa8:
    // 0x1daaa8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1daaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1daaac: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1daaacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x1daab0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1daab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1daab4: 0x1c80000c  bgtz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DAAB4u;
    {
        const bool branch_taken_0x1daab4 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1daab4) {
            ctx->pc = 0x1DAAE8u;
            goto label_1daae8;
        }
    }
    ctx->pc = 0x1DAABCu;
    // 0x1daabc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1daabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1daac0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1daac0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1daac4: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1daac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1daac8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daacc: 0xae220120  sw          $v0, 0x120($s1)
    ctx->pc = 0x1daaccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 2));
    // 0x1daad0: 0x8e250120  lw          $a1, 0x120($s1)
    ctx->pc = 0x1daad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1daad4: 0xc0604b0  jal         func_1812C0
    ctx->pc = 0x1DAAD4u;
    SET_GPR_U32(ctx, 31, 0x1DAADCu);
    ctx->pc = 0x1DAAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAD4u;
            // 0x1daad8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C0u;
    if (runtime->hasFunction(0x1812C0u)) {
        auto targetFn = runtime->lookupFunction(0x1812C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAADCu; }
        if (ctx->pc != 0x1DAADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CloneStdColorToRed_0x1812c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAADCu; }
        if (ctx->pc != 0x1DAADCu) { return; }
    }
    ctx->pc = 0x1DAADCu;
    // 0x1daadc: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x1DAADCu;
    {
        const bool branch_taken_0x1daadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1daadc) {
            ctx->pc = 0x1DAD78u;
            goto label_1dad78;
        }
    }
    ctx->pc = 0x1DAAE4u;
    // 0x1daae4: 0x0  nop
    ctx->pc = 0x1daae4u;
    // NOP
label_1daae8:
    // 0x1daae8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1daae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1daaec: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DAAECu;
    {
        const bool branch_taken_0x1daaec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DAAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAECu;
            // 0x1daaf0: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daaec) {
            ctx->pc = 0x1DAB08u;
            goto label_1dab08;
        }
    }
    ctx->pc = 0x1DAAF4u;
    // 0x1daaf4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DAAF4u;
    {
        const bool branch_taken_0x1daaf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1daaf4) {
            ctx->pc = 0x1DAB08u;
            goto label_1dab08;
        }
    }
    ctx->pc = 0x1DAAFCu;
    // 0x1daafc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1daafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dab00: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x1DAB00u;
    {
        const bool branch_taken_0x1dab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DAB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB00u;
            // 0x1dab04: 0xae230028  sw          $v1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dab00) {
            ctx->pc = 0x1DAD78u;
            goto label_1dad78;
        }
    }
    ctx->pc = 0x1DAB08u;
label_1dab08:
    // 0x1dab08: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dab0c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1dab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1dab10: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dab14: 0x2625002c  addiu       $a1, $s1, 0x2C
    ctx->pc = 0x1dab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x1dab18: 0x24c65c90  addiu       $a2, $a2, 0x5C90
    ctx->pc = 0x1dab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23696));
    // 0x1dab1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dab1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab20: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dab20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab24: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x1dab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x1dab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dab2c: 0x0  nop
    ctx->pc = 0x1dab2cu;
    // NOP
    // 0x1dab30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dab30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dab34: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1dab34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x1dab38: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dab38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dab3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dab3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dab40: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1dab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1dab44: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dab48: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1dab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1dab4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dab4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dab50: 0x0  nop
    ctx->pc = 0x1dab50u;
    // NOP
    // 0x1dab54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dab54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dab58: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1dab58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1dab5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dab5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dab60: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x1dab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1dab64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dab64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dab68: 0x0  nop
    ctx->pc = 0x1dab68u;
    // NOP
    // 0x1dab6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dab6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dab70: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DAB70u;
    SET_GPR_U32(ctx, 31, 0x1DAB78u);
    ctx->pc = 0x1DAB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAB70u;
            // 0x1dab74: 0xe6200038  swc1        $f0, 0x38($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB78u; }
        if (ctx->pc != 0x1DAB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAB78u; }
        if (ctx->pc != 0x1DAB78u) { return; }
    }
    ctx->pc = 0x1DAB78u;
    // 0x1dab78: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dab7c: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1dab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1dab80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dab84: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x1dab84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x1dab88: 0x24c65c90  addiu       $a2, $a2, 0x5C90
    ctx->pc = 0x1dab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23696));
    // 0x1dab8c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dab8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab90: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dab90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dab94: 0x2442ffc6  addiu       $v0, $v0, -0x3A
    ctx->pc = 0x1dab94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967238));
    // 0x1dab98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dab98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dab9c: 0x0  nop
    ctx->pc = 0x1dab9cu;
    // NOP
    // 0x1daba0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1daba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1daba4: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x1daba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x1daba8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1daba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dabac: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1dabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1dabb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dabb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dabb4: 0x0  nop
    ctx->pc = 0x1dabb4u;
    // NOP
    // 0x1dabb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dabb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dabbc: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x1dabbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x1dabc0: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dabc4: 0x2442ffee  addiu       $v0, $v0, -0x12
    ctx->pc = 0x1dabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    // 0x1dabc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dabc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dabcc: 0x0  nop
    ctx->pc = 0x1dabccu;
    // NOP
    // 0x1dabd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dabd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dabd4: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x1dabd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x1dabd8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dabdc: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1dabdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1dabe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dabe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dabe4: 0x0  nop
    ctx->pc = 0x1dabe4u;
    // NOP
    // 0x1dabe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dabe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dabec: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DABECu;
    SET_GPR_U32(ctx, 31, 0x1DABF4u);
    ctx->pc = 0x1DABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DABECu;
            // 0x1dabf0: 0xe6200048  swc1        $f0, 0x48($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABF4u; }
        if (ctx->pc != 0x1DABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DABF4u; }
        if (ctx->pc != 0x1DABF4u) { return; }
    }
    ctx->pc = 0x1DABF4u;
    // 0x1dabf4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dabf8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1dabf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1dabfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dabfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dac00: 0x2625004c  addiu       $a1, $s1, 0x4C
    ctx->pc = 0x1dac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x1dac04: 0x24c65c90  addiu       $a2, $a2, 0x5C90
    ctx->pc = 0x1dac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23696));
    // 0x1dac08: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dac08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac0c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dac0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac10: 0x24420012  addiu       $v0, $v0, 0x12
    ctx->pc = 0x1dac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18));
    // 0x1dac14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac18: 0x0  nop
    ctx->pc = 0x1dac18u;
    // NOP
    // 0x1dac1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac20: 0xe620004c  swc1        $f0, 0x4C($s1)
    ctx->pc = 0x1dac20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 76), bits); }
    // 0x1dac24: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dac24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dac28: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1dac28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1dac2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac30: 0x0  nop
    ctx->pc = 0x1dac30u;
    // NOP
    // 0x1dac34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac38: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x1dac38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x1dac3c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dac40: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x1dac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1dac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac48: 0x0  nop
    ctx->pc = 0x1dac48u;
    // NOP
    // 0x1dac4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac50: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x1dac50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x1dac54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dac58: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x1dac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
    // 0x1dac5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac60: 0x0  nop
    ctx->pc = 0x1dac60u;
    // NOP
    // 0x1dac64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac68: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DAC68u;
    SET_GPR_U32(ctx, 31, 0x1DAC70u);
    ctx->pc = 0x1DAC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAC68u;
            // 0x1dac6c: 0xe6200058  swc1        $f0, 0x58($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC70u; }
        if (ctx->pc != 0x1DAC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAC70u; }
        if (ctx->pc != 0x1DAC70u) { return; }
    }
    ctx->pc = 0x1DAC70u;
    // 0x1dac70: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dac74: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1dac74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1dac78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dac7c: 0x2625005c  addiu       $a1, $s1, 0x5C
    ctx->pc = 0x1dac7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x1dac80: 0x24c65c90  addiu       $a2, $a2, 0x5C90
    ctx->pc = 0x1dac80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23696));
    // 0x1dac84: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dac84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac88: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dac88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dac8c: 0x2442ff4e  addiu       $v0, $v0, -0xB2
    ctx->pc = 0x1dac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967118));
    // 0x1dac90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dac90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dac94: 0x0  nop
    ctx->pc = 0x1dac94u;
    // NOP
    // 0x1dac98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dac98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dac9c: 0xe620005c  swc1        $f0, 0x5C($s1)
    ctx->pc = 0x1dac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x1daca0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1daca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1daca4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1daca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1daca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1daca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dacac: 0x0  nop
    ctx->pc = 0x1dacacu;
    // NOP
    // 0x1dacb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dacb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dacb4: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x1dacb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x1dacb8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dacbc: 0x2442ffc6  addiu       $v0, $v0, -0x3A
    ctx->pc = 0x1dacbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967238));
    // 0x1dacc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dacc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dacc4: 0x0  nop
    ctx->pc = 0x1dacc4u;
    // NOP
    // 0x1dacc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dacc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1daccc: 0xe6200064  swc1        $f0, 0x64($s1)
    ctx->pc = 0x1dacccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x1dacd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dacd4: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1dacd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1dacd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dacd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dacdc: 0x0  nop
    ctx->pc = 0x1dacdcu;
    // NOP
    // 0x1dace0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dace0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dace4: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DACE4u;
    SET_GPR_U32(ctx, 31, 0x1DACECu);
    ctx->pc = 0x1DACE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DACE4u;
            // 0x1dace8: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACECu; }
        if (ctx->pc != 0x1DACECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DACECu; }
        if (ctx->pc != 0x1DACECu) { return; }
    }
    ctx->pc = 0x1DACECu;
    // 0x1dacec: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dacf0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1dacf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1dacf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1dacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dacf8: 0x2625006c  addiu       $a1, $s1, 0x6C
    ctx->pc = 0x1dacf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x1dacfc: 0x24c65c90  addiu       $a2, $a2, 0x5C90
    ctx->pc = 0x1dacfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23696));
    // 0x1dad00: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1dad00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad04: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1dad04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dad08: 0x2442003a  addiu       $v0, $v0, 0x3A
    ctx->pc = 0x1dad08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 58));
    // 0x1dad0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dad0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dad10: 0x0  nop
    ctx->pc = 0x1dad10u;
    // NOP
    // 0x1dad14: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dad14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dad18: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x1dad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
    // 0x1dad1c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dad20: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1dad20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1dad24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dad24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dad28: 0x0  nop
    ctx->pc = 0x1dad28u;
    // NOP
    // 0x1dad2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dad2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dad30: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x1dad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x1dad34: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x1dad34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dad38: 0x244200b2  addiu       $v0, $v0, 0xB2
    ctx->pc = 0x1dad38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 178));
    // 0x1dad3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dad3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dad40: 0x0  nop
    ctx->pc = 0x1dad40u;
    // NOP
    // 0x1dad44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dad44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dad48: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x1dad48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x1dad4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1dad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dad50: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1dad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1dad54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dad54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dad58: 0x0  nop
    ctx->pc = 0x1dad58u;
    // NOP
    // 0x1dad5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dad5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dad60: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1DAD60u;
    SET_GPR_U32(ctx, 31, 0x1DAD68u);
    ctx->pc = 0x1DAD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD60u;
            // 0x1dad64: 0xe6200078  swc1        $f0, 0x78($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD68u; }
        if (ctx->pc != 0x1DAD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAD68u; }
        if (ctx->pc != 0x1DAD68u) { return; }
    }
    ctx->pc = 0x1DAD68u;
    // 0x1dad68: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1dad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1dad6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1dad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1dad70: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1dad70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1dad74: 0x0  nop
    ctx->pc = 0x1dad74u;
    // NOP
label_1dad78:
    // 0x1dad78: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1dad78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1dad7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dad80: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1dad80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x1dad84: 0x0  nop
    ctx->pc = 0x1dad84u;
    // NOP
label_1dad88:
    // 0x1dad88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dad88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dad8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dad8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dad90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dad94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAD94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAD94u;
            // 0x1dad98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D8040u: goto label_1d8040;
            case 0x1D8078u: goto label_1d8078;
            case 0x1D80B0u: goto label_1d80b0;
            case 0x1D80E8u: goto label_1d80e8;
            case 0x1D8148u: goto label_1d8148;
            case 0x1D8180u: goto label_1d8180;
            case 0x1D81D0u: goto label_1d81d0;
            case 0x1D8240u: goto label_1d8240;
            case 0x1D82B0u: goto label_1d82b0;
            case 0x1D82D8u: goto label_1d82d8;
            case 0x1D8328u: goto label_1d8328;
            case 0x1D8360u: goto label_1d8360;
            case 0x1D83C0u: goto label_1d83c0;
            case 0x1D84A0u: goto label_1d84a0;
            case 0x1D85F0u: goto label_1d85f0;
            case 0x1D8748u: goto label_1d8748;
            case 0x1D8818u: goto label_1d8818;
            case 0x1D8868u: goto label_1d8868;
            case 0x1D88A0u: goto label_1d88a0;
            case 0x1D88D8u: goto label_1d88d8;
            case 0x1D89A8u: goto label_1d89a8;
            case 0x1D8AF8u: goto label_1d8af8;
            case 0x1D8CB8u: goto label_1d8cb8;
            case 0x1D8E80u: goto label_1d8e80;
            case 0x1D8FC0u: goto label_1d8fc0;
            case 0x1D9010u: goto label_1d9010;
            case 0x1D9048u: goto label_1d9048;
            case 0x1D90A8u: goto label_1d90a8;
            case 0x1D9108u: goto label_1d9108;
            case 0x1D91E8u: goto label_1d91e8;
            case 0x1D92C8u: goto label_1d92c8;
            case 0x1D9418u: goto label_1d9418;
            case 0x1D9568u: goto label_1d9568;
            case 0x1D9728u: goto label_1d9728;
            case 0x1D97F8u: goto label_1d97f8;
            case 0x1D99B8u: goto label_1d99b8;
            case 0x1D9CC0u: goto label_1d9cc0;
            case 0x1D9CE8u: goto label_1d9ce8;
            case 0x1D9D28u: goto label_1d9d28;
            case 0x1D9D78u: goto label_1d9d78;
            case 0x1D9DC0u: goto label_1d9dc0;
            case 0x1D9DF8u: goto label_1d9df8;
            case 0x1D9E40u: goto label_1d9e40;
            case 0x1D9E70u: goto label_1d9e70;
            case 0x1D9F10u: goto label_1d9f10;
            case 0x1D9FE0u: goto label_1d9fe0;
            case 0x1DA028u: goto label_1da028;
            case 0x1DA058u: goto label_1da058;
            case 0x1DA0F8u: goto label_1da0f8;
            case 0x1DA1C8u: goto label_1da1c8;
            case 0x1DA210u: goto label_1da210;
            case 0x1DA240u: goto label_1da240;
            case 0x1DA26Cu: goto label_1da26c;
            case 0x1DA350u: goto label_1da350;
            case 0x1DA37Cu: goto label_1da37c;
            case 0x1DA490u: goto label_1da490;
            case 0x1DA600u: goto label_1da600;
            case 0x1DA648u: goto label_1da648;
            case 0x1DA680u: goto label_1da680;
            case 0x1DA6B8u: goto label_1da6b8;
            case 0x1DA730u: goto label_1da730;
            case 0x1DA780u: goto label_1da780;
            case 0x1DA7A8u: goto label_1da7a8;
            case 0x1DA7C0u: goto label_1da7c0;
            case 0x1DA7D8u: goto label_1da7d8;
            case 0x1DA7F0u: goto label_1da7f0;
            case 0x1DA808u: goto label_1da808;
            case 0x1DA820u: goto label_1da820;
            case 0x1DA838u: goto label_1da838;
            case 0x1DA850u: goto label_1da850;
            case 0x1DA868u: goto label_1da868;
            case 0x1DA880u: goto label_1da880;
            case 0x1DA898u: goto label_1da898;
            case 0x1DA8B0u: goto label_1da8b0;
            case 0x1DA8F0u: goto label_1da8f0;
            case 0x1DA938u: goto label_1da938;
            case 0x1DA960u: goto label_1da960;
            case 0x1DA9A0u: goto label_1da9a0;
            case 0x1DAA28u: goto label_1daa28;
            case 0x1DAA30u: goto label_1daa30;
            case 0x1DAA48u: goto label_1daa48;
            case 0x1DAA58u: goto label_1daa58;
            case 0x1DAA98u: goto label_1daa98;
            case 0x1DAAA0u: goto label_1daaa0;
            case 0x1DAAA8u: goto label_1daaa8;
            case 0x1DAAE8u: goto label_1daae8;
            case 0x1DAB08u: goto label_1dab08;
            case 0x1DAD78u: goto label_1dad78;
            case 0x1DAD88u: goto label_1dad88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DAD9Cu;
}
