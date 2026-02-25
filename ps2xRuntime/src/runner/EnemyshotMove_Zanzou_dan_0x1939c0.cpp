#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Zanzou_dan
// Address: 0x1939c0 - 0x193c08
void EnemyshotMove_Zanzou_dan_0x1939c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Zanzou_dan_0x1939c0");
#endif

    ctx->pc = 0x1939c0u;

    // 0x1939c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1939c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1939c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1939c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1939c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1939cc: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1939ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1939d0: 0x28410078  slti        $at, $v0, 0x78
    ctx->pc = 0x1939d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1939d4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1939D4u;
    {
        const bool branch_taken_0x1939d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1939D4u;
            // 0x1939d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939d4) {
            ctx->pc = 0x193A58u;
            goto label_193a58;
        }
    }
    ctx->pc = 0x1939DCu;
    // 0x1939dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1939e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1939e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1939e4: 0xc4223528  lwc1        $f2, 0x3528($at)
    ctx->pc = 0x1939e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1939e8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1939e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1939ec: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1939ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1939f0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1939f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1939f4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1939f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1939f8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1939f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1939fc: 0xc420352c  lwc1        $f0, 0x352C($at)
    ctx->pc = 0x1939fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a00: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x193a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x193a04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x193a04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193a08: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x193a0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x193a10: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x193a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x193a14: 0xc04b6ee  jal         func_12DBB8
    ctx->pc = 0x193A14u;
    SET_GPR_U32(ctx, 31, 0x193A1Cu);
    ctx->pc = 0x193A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A14u;
            // 0x193a18: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DBB8u;
    if (runtime->hasFunction(0x12DBB8u)) {
        auto targetFn = runtime->lookupFunction(0x12DBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A1Cu; }
        if (ctx->pc != 0x193A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x12dbb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A1Cu; }
        if (ctx->pc != 0x193A1Cu) { return; }
    }
    ctx->pc = 0x193A1Cu;
    // 0x193a1c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x193a20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x193a24: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x193a24u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x193a28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193a2c: 0xc04b758  jal         func_12DD60
    ctx->pc = 0x193A2Cu;
    SET_GPR_U32(ctx, 31, 0x193A34u);
    ctx->pc = 0x193A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193A2Cu;
            // 0x193a30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DD60u;
    if (runtime->hasFunction(0x12DD60u)) {
        auto targetFn = runtime->lookupFunction(0x12DD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A34u; }
        if (ctx->pc != 0x193A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x12dd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193A34u; }
        if (ctx->pc != 0x193A34u) { return; }
    }
    ctx->pc = 0x193A34u;
    // 0x193a34: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x193a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a38: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x193a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193a40: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x193a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x193a44: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a48: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x193a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193a4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193a50: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x193a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x193a54: 0x0  nop
    ctx->pc = 0x193a54u;
    // NOP
label_193a58:
    // 0x193a58: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x193a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a5c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x193a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193a64: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x193a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x193a68: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x193a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x193a70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x193a74: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x193a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x193a78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x193a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193a7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193a80: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x193a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x193a84: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x193a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193a88: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a8c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193a8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x193a90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193a94: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x193a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x193a98: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193a9c: 0xc065450  jal         func_195140
    ctx->pc = 0x193A9Cu;
    SET_GPR_U32(ctx, 31, 0x193AA4u);
    ctx->pc = 0x195140u;
    if (runtime->hasFunction(0x195140u)) {
        auto targetFn = runtime->lookupFunction(0x195140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA4u; }
        if (ctx->pc != 0x193AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Zanzou_0x195140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193AA4u; }
        if (ctx->pc != 0x193AA4u) { return; }
    }
    ctx->pc = 0x193AA4u;
    // 0x193aa4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x193aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193aa8: 0x3c03c370  lui         $v1, 0xC370
    ctx->pc = 0x193aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50032 << 16));
    // 0x193aac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193aacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ab0: 0x0  nop
    ctx->pc = 0x193ab0u;
    // NOP
    // 0x193ab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193ab8: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x193AB8u;
    {
        const bool branch_taken_0x193ab8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AB8u;
            // 0x193abc: 0x3c034370  lui         $v1, 0x4370 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ab8) {
            ctx->pc = 0x193B08u;
            goto label_193b08;
        }
    }
    ctx->pc = 0x193AC0u;
    // 0x193ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ac4: 0x0  nop
    ctx->pc = 0x193ac4u;
    // NOP
    // 0x193ac8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193ac8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193acc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x193ACCu;
    {
        const bool branch_taken_0x193acc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193acc) {
            ctx->pc = 0x193B08u;
            goto label_193b08;
        }
    }
    ctx->pc = 0x193AD4u;
    // 0x193ad4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x193ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x193ad8: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x193adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ae0: 0x0  nop
    ctx->pc = 0x193ae0u;
    // NOP
    // 0x193ae4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x193ae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193ae8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x193AE8u;
    {
        const bool branch_taken_0x193ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x193AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193AE8u;
            // 0x193aec: 0x3c0343a0  lui         $v1, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ae8) {
            ctx->pc = 0x193B08u;
            goto label_193b08;
        }
    }
    ctx->pc = 0x193AF0u;
    // 0x193af0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193af4: 0x0  nop
    ctx->pc = 0x193af4u;
    // NOP
    // 0x193af8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x193af8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193afc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x193AFCu;
    {
        const bool branch_taken_0x193afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193afc) {
            ctx->pc = 0x193B18u;
            goto label_193b18;
        }
    }
    ctx->pc = 0x193B04u;
    // 0x193b04: 0x0  nop
    ctx->pc = 0x193b04u;
    // NOP
label_193b08:
    // 0x193b08: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193B08u;
    SET_GPR_U32(ctx, 31, 0x193B10u);
    ctx->pc = 0x193B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B08u;
            // 0x193b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B10u; }
        if (ctx->pc != 0x193B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B10u; }
        if (ctx->pc != 0x193B10u) { return; }
    }
    ctx->pc = 0x193B10u;
    // 0x193b10: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x193B10u;
    {
        const bool branch_taken_0x193b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193b10) {
            ctx->pc = 0x193BF8u;
            goto label_193bf8;
        }
    }
    ctx->pc = 0x193B18u;
label_193b18:
    // 0x193b18: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x193b1c: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x193B1Cu;
    {
        const bool branch_taken_0x193b1c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x193B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B1Cu;
            // 0x193b20: 0x3c01ffff  lui         $at, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b1c) {
            ctx->pc = 0x193B90u;
            goto label_193b90;
        }
    }
    ctx->pc = 0x193B24u;
    // 0x193b24: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x193b24u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)1u)));
    // 0x193b28: 0x61082a  slt         $at, $v1, $at
    ctx->pc = 0x193b28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x193b2c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x193B2Cu;
    {
        const bool branch_taken_0x193b2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B2Cu;
            // 0x193b30: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b2c) {
            ctx->pc = 0x193B60u;
            goto label_193b60;
        }
    }
    ctx->pc = 0x193B34u;
    // 0x193b34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b38: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x193b38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x193b3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193b3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193b40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193b40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x193b44: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x193b44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x193b48: 0xc065944  jal         func_196510
    ctx->pc = 0x193B48u;
    SET_GPR_U32(ctx, 31, 0x193B50u);
    ctx->pc = 0x193B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B48u;
            // 0x193b4c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x196510u;
    if (runtime->hasFunction(0x196510u)) {
        auto targetFn = runtime->lookupFunction(0x196510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B50u; }
        if (ctx->pc != 0x193B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateItem_0x196510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B50u; }
        if (ctx->pc != 0x193B50u) { return; }
    }
    ctx->pc = 0x193B50u;
    // 0x193b50: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193B50u;
    SET_GPR_U32(ctx, 31, 0x193B58u);
    ctx->pc = 0x193B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193B50u;
            // 0x193b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B58u; }
        if (ctx->pc != 0x193B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B58u; }
        if (ctx->pc != 0x193B58u) { return; }
    }
    ctx->pc = 0x193B58u;
    // 0x193b58: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x193B58u;
    {
        const bool branch_taken_0x193b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193b58) {
            ctx->pc = 0x193BF8u;
            goto label_193bf8;
        }
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193b64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x193b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x193b68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x193b6c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x193b70: 0x2463a590  addiu       $v1, $v1, -0x5A70
    ctx->pc = 0x193b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944144));
    // 0x193b74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x193b78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x193b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x193b7c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193b80: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x193b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x193b84: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x193B84u;
    {
        const bool branch_taken_0x193b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193B84u;
            // 0x193b88: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193b84) {
            ctx->pc = 0x193BF8u;
            goto label_193bf8;
        }
    }
    ctx->pc = 0x193B8Cu;
    // 0x193b8c: 0x0  nop
    ctx->pc = 0x193b8cu;
    // NOP
label_193b90:
    // 0x193b90: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x193b94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x193b94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193b98: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x193b9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x193b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193ba0: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x193ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x193ba4: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x193ba4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x193ba8: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x193bac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x193bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bb0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x193bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193bb4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x193bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x193bb8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193bbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193bbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193bc0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x193bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x193bc4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x193bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193bc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193bc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193bcc: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x193bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x193bd0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x193bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193bd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193bd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193bd8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x193BD8u;
    SET_GPR_U32(ctx, 31, 0x193BE0u);
    ctx->pc = 0x193BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193BD8u;
            // 0x193bdc: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BE0u; }
        if (ctx->pc != 0x193BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BE0u; }
        if (ctx->pc != 0x193BE0u) { return; }
    }
    ctx->pc = 0x193BE0u;
    // 0x193be0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x193be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x193be4: 0x286103e9  slti        $at, $v1, 0x3E9
    ctx->pc = 0x193be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1001) ? 1 : 0);
    // 0x193be8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x193BE8u;
    {
        const bool branch_taken_0x193be8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x193BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193BE8u;
            // 0x193bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193be8) {
            ctx->pc = 0x193BF8u;
            goto label_193bf8;
        }
    }
    ctx->pc = 0x193BF0u;
    // 0x193bf0: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x193BF0u;
    SET_GPR_U32(ctx, 31, 0x193BF8u);
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BF8u; }
        if (ctx->pc != 0x193BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193BF8u; }
        if (ctx->pc != 0x193BF8u) { return; }
    }
    ctx->pc = 0x193BF8u;
label_193bf8:
    // 0x193bf8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193c00: 0x3e00008  jr          $ra
    ctx->pc = 0x193C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193C00u;
            // 0x193c04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193A58u: goto label_193a58;
            case 0x193B08u: goto label_193b08;
            case 0x193B18u: goto label_193b18;
            case 0x193B60u: goto label_193b60;
            case 0x193B90u: goto label_193b90;
            case 0x193BF8u: goto label_193bf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193C08u;
}
