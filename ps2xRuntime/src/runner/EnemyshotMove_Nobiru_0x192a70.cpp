#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyshotMove_Nobiru
// Address: 0x192a70 - 0x192c6c
void EnemyshotMove_Nobiru_0x192a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyshotMove_Nobiru_0x192a70");
#endif

    ctx->pc = 0x192a70u;

    // 0x192a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x192a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x192a74: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x192a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x192a78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192a7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x192a7cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)52429u)));
    // 0x192a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x192a84: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x192a84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x192a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x192a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192a8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x192a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x192a90: 0xc421351c  lwc1        $f1, 0x351C($at)
    ctx->pc = 0x192a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192a94: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x192a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x192a98: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x192a98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x192a9c: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x192a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x192aa0: 0x3c02c370  lui         $v0, 0xC370
    ctx->pc = 0x192aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50032 << 16));
    // 0x192aa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192aa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192aa8: 0x0  nop
    ctx->pc = 0x192aa8u;
    // NOP
    // 0x192aac: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x192aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x192ab0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x192ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x192ab4: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x192ab4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x192ab8: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x192ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x192abc: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x192abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192ac0: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x192ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ac4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x192ac4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x192ac8: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x192ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x192acc: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x192accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192ad0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x192ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ad4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x192ad4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x192ad8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x192ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x192adc: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x192adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x192ae0: 0xc421351c  lwc1        $f1, 0x351C($at)
    ctx->pc = 0x192ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 13596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192ae4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x192ae4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x192ae8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x192ae8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x192aec: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x192aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x192af0: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x192af0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x192af4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x192af4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x192af8: 0x0  nop
    ctx->pc = 0x192af8u;
    // NOP
    // 0x192afc: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x192afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x192b00: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x192b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x192b04: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x192b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b08: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x192B08u;
    {
        const bool branch_taken_0x192b08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B08u;
            // 0x192b0c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b08) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B10u;
    // 0x192b10: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x192b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192b18: 0x0  nop
    ctx->pc = 0x192b18u;
    // NOP
    // 0x192b1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x192b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b20: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x192B20u;
    {
        const bool branch_taken_0x192b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x192b20) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B28u;
    // 0x192b28: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x192b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x192b2c: 0x3c02c3a0  lui         $v0, 0xC3A0
    ctx->pc = 0x192b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50080 << 16));
    // 0x192b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192b34: 0x0  nop
    ctx->pc = 0x192b34u;
    // NOP
    // 0x192b38: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x192b38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x192B3Cu;
    {
        const bool branch_taken_0x192b3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x192B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192B3Cu;
            // 0x192b40: 0x3c0243a0  lui         $v0, 0x43A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b3c) {
            ctx->pc = 0x192B58u;
            goto label_192b58;
        }
    }
    ctx->pc = 0x192B44u;
    // 0x192b44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x192b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x192b48: 0x0  nop
    ctx->pc = 0x192b48u;
    // NOP
    // 0x192b4c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x192b4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x192b50: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x192B50u;
    {
        const bool branch_taken_0x192b50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x192b50) {
            ctx->pc = 0x192B68u;
            goto label_192b68;
        }
    }
    ctx->pc = 0x192B58u;
label_192b58:
    // 0x192b58: 0xc0656e8  jal         func_195BA0
    ctx->pc = 0x192B58u;
    SET_GPR_U32(ctx, 31, 0x192B60u);
    ctx->pc = 0x192B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B58u;
            // 0x192b5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BA0u;
    if (runtime->hasFunction(0x195BA0u)) {
        auto targetFn = runtime->lookupFunction(0x195BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotFree_0x195ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B60u; }
        if (ctx->pc != 0x192B60u) { return; }
    }
    ctx->pc = 0x192B60u;
    // 0x192b60: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x192B60u;
    {
        const bool branch_taken_0x192b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192b60) {
            ctx->pc = 0x192C58u;
            goto label_192c58;
        }
    }
    ctx->pc = 0x192B68u;
label_192b68:
    // 0x192b68: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x192b6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192b70: 0x0  nop
    ctx->pc = 0x192b70u;
    // NOP
    // 0x192b74: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x192b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x192b78: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x192b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x192b7c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x192b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192b80: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x192B80u;
    SET_GPR_U32(ctx, 31, 0x192B88u);
    ctx->pc = 0x192B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B80u;
            // 0x192b84: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B88u; }
        if (ctx->pc != 0x192B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B88u; }
        if (ctx->pc != 0x192B88u) { return; }
    }
    ctx->pc = 0x192B88u;
    // 0x192b88: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x192b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x192b8c: 0xc0409de  jal         func_102778
    ctx->pc = 0x192B8Cu;
    SET_GPR_U32(ctx, 31, 0x192B94u);
    ctx->pc = 0x192B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192B8Cu;
            // 0x192b90: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B94u; }
        if (ctx->pc != 0x192B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192B94u; }
        if (ctx->pc != 0x192B94u) { return; }
    }
    ctx->pc = 0x192B94u;
    // 0x192b94: 0x3c043fd3  lui         $a0, 0x3FD3
    ctx->pc = 0x192b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16339 << 16));
    // 0x192b98: 0x3c033333  lui         $v1, 0x3333
    ctx->pc = 0x192b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13107 << 16));
    // 0x192b9c: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x192b9cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)13107u)));
    // 0x192ba0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x192ba0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)13107u)));
    // 0x192ba4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x192ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x192ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x192ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bac: 0xc040880  jal         func_102200
    ctx->pc = 0x192BACu;
    SET_GPR_U32(ctx, 31, 0x192BB4u);
    ctx->pc = 0x192BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BACu;
            // 0x192bb0: 0x642025  or          $a0, $v1, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BB4u; }
        if (ctx->pc != 0x192BB4u) { return; }
    }
    ctx->pc = 0x192BB4u;
    // 0x192bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192bb8: 0xc040850  jal         func_102140
    ctx->pc = 0x192BB8u;
    SET_GPR_U32(ctx, 31, 0x192BC0u);
    ctx->pc = 0x192BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BB8u;
            // 0x192bbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC0u; }
        if (ctx->pc != 0x192BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC0u; }
        if (ctx->pc != 0x192BC0u) { return; }
    }
    ctx->pc = 0x192BC0u;
    // 0x192bc0: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x192BC0u;
    SET_GPR_U32(ctx, 31, 0x192BC8u);
    ctx->pc = 0x192BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BC0u;
            // 0x192bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC8u; }
        if (ctx->pc != 0x192BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BC8u; }
        if (ctx->pc != 0x192BC8u) { return; }
    }
    ctx->pc = 0x192BC8u;
    // 0x192bc8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x192bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x192bcc: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x192bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x192bd0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x192bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192bd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x192bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x192bd8: 0x0  nop
    ctx->pc = 0x192bd8u;
    // NOP
    // 0x192bdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x192bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x192be0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x192be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x192be4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x192be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x192be8: 0xc040d72  jal         func_1035C8
    ctx->pc = 0x192BE8u;
    SET_GPR_U32(ctx, 31, 0x192BF0u);
    ctx->pc = 0x192BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BE8u;
            // 0x192bec: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1035C8u;
    if (runtime->hasFunction(0x1035C8u)) {
        auto targetFn = runtime->lookupFunction(0x1035C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BF0u; }
        if (ctx->pc != 0x192BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x1035c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BF0u; }
        if (ctx->pc != 0x192BF0u) { return; }
    }
    ctx->pc = 0x192BF0u;
    // 0x192bf0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x192bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x192bf4: 0xc0409de  jal         func_102778
    ctx->pc = 0x192BF4u;
    SET_GPR_U32(ctx, 31, 0x192BFCu);
    ctx->pc = 0x192BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192BF4u;
            // 0x192bf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102778u;
    if (runtime->hasFunction(0x102778u)) {
        auto targetFn = runtime->lookupFunction(0x102778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BFCu; }
        if (ctx->pc != 0x192BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x102778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192BFCu; }
        if (ctx->pc != 0x192BFCu) { return; }
    }
    ctx->pc = 0x192BFCu;
    // 0x192bfc: 0x3c043fe9  lui         $a0, 0x3FE9
    ctx->pc = 0x192bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16361 << 16));
    // 0x192c00: 0x34039999  ori         $v1, $zero, 0x9999
    ctx->pc = 0x192c00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)39321u)));
    // 0x192c04: 0x34849999  ori         $a0, $a0, 0x9999
    ctx->pc = 0x192c04u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)39321u)));
    // 0x192c08: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x192c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x192c0c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x192c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x192c10: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x192c10u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x192c14: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x192c14u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x192c18: 0xc040880  jal         func_102200
    ctx->pc = 0x192C18u;
    SET_GPR_U32(ctx, 31, 0x192C20u);
    ctx->pc = 0x192C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C18u;
            // 0x192c1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C20u; }
        if (ctx->pc != 0x192C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C20u; }
        if (ctx->pc != 0x192C20u) { return; }
    }
    ctx->pc = 0x192C20u;
    // 0x192c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c24: 0xc040850  jal         func_102140
    ctx->pc = 0x192C24u;
    SET_GPR_U32(ctx, 31, 0x192C2Cu);
    ctx->pc = 0x192C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C24u;
            // 0x192c28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102140u;
    if (runtime->hasFunction(0x102140u)) {
        auto targetFn = runtime->lookupFunction(0x102140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C2Cu; }
        if (ctx->pc != 0x192C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x102140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C2Cu; }
        if (ctx->pc != 0x192C2Cu) { return; }
    }
    ctx->pc = 0x192C2Cu;
    // 0x192c2c: 0xc040a74  jal         func_1029D0
    ctx->pc = 0x192C2Cu;
    SET_GPR_U32(ctx, 31, 0x192C34u);
    ctx->pc = 0x192C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C2Cu;
            // 0x192c30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1029D0u;
    if (runtime->hasFunction(0x1029D0u)) {
        auto targetFn = runtime->lookupFunction(0x1029D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C34u; }
        if (ctx->pc != 0x192C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x1029d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C34u; }
        if (ctx->pc != 0x192C34u) { return; }
    }
    ctx->pc = 0x192C34u;
    // 0x192c34: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x192c34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x192c38: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192c3c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x192c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x192c40: 0x2625001c  addiu       $a1, $s1, 0x1C
    ctx->pc = 0x192c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x192c44: 0x24c64430  addiu       $a2, $a2, 0x4430
    ctx->pc = 0x192c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17456));
    // 0x192c48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x192c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c4c: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x192C4Cu;
    SET_GPR_U32(ctx, 31, 0x192C54u);
    ctx->pc = 0x192C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192C4Cu;
            // 0x192c50: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C54u; }
        if (ctx->pc != 0x192C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192C54u; }
        if (ctx->pc != 0x192C54u) { return; }
    }
    ctx->pc = 0x192C54u;
    // 0x192c54: 0x0  nop
    ctx->pc = 0x192c54u;
    // NOP
label_192c58:
    // 0x192c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x192c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192c64: 0x3e00008  jr          $ra
    ctx->pc = 0x192C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192C64u;
            // 0x192c68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192B58u: goto label_192b58;
            case 0x192B68u: goto label_192b68;
            case 0x192C58u: goto label_192c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x192C6Cu;
}
